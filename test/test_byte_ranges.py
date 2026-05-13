"""Byte-range test suite for tree-sitter-rst.

Reads corpus files from test/corpus_byte_ranges/*.txt.  Each file contains
one or more test cases in the same format as test/corpus/*.txt except that
the expected s-expression includes ``[start, end)`` byte-range annotations on
every named node.

File format::

    ========================================
    Test case name
    ========================================

    RST source text here

    ----------------------------------------

    (document [0..N]
      (paragraph [0..M])
      ...)

Multiple test cases can appear consecutively in a single file.  A new
``===...===`` header starts the next test case.
"""

from __future__ import annotations

import re
from pathlib import Path

import pytest
import tree_sitter
import tree_sitter_rst

# ---------------------------------------------------------------------------
# Tree rendering
# ---------------------------------------------------------------------------

def _render(node: tree_sitter.Node, indent: int = 0) -> str:
    """Recursively render *node* as an s-expression with byte-range annotations.

    Only named nodes are included (matching tree-sitter's default corpus
    format).  Each node is rendered as::

        (type [start_byte..end_byte]
          (child ...)
          ...)
    """
    if not node.is_named:
        return ""
    prefix = "  " * indent
    header = f"{prefix}({node.type} [{node.start_byte}..{node.end_byte}]"
    named_children = [c for c in node.children if c.is_named]
    if not named_children:
        return header + ")"
    child_lines = [l for c in named_children if (l := _render(c, indent + 1))]
    return header + "\n" + "\n".join(child_lines) + ")"


# ---------------------------------------------------------------------------
# Corpus file parser
# ---------------------------------------------------------------------------

_HEADER_RE = re.compile(r"^=+$")
_SEP_RE = re.compile(r"^-+$")


def _parse_corpus(path: Path) -> list[tuple[str, str, str]]:
    """Return a list of ``(name, source, expected)`` triples from *path*."""
    lines = path.read_text(encoding="utf-8").splitlines()
    cases: list[tuple[str, str, str]] = []
    i = 0
    while i < len(lines):
        # Advance to the next ===...=== header line.
        while i < len(lines) and not _HEADER_RE.match(lines[i]):
            i += 1
        if i >= len(lines):
            break
        i += 1  # skip opening ===...===
        if i >= len(lines):
            break
        name = lines[i].strip()
        i += 1
        # Skip closing ===...===
        if i < len(lines) and _HEADER_RE.match(lines[i]):
            i += 1

        # Collect source lines until the ---...--- separator.
        source_lines: list[str] = []
        while i < len(lines) and not _SEP_RE.match(lines[i]):
            source_lines.append(lines[i])
            i += 1
        if i < len(lines):
            i += 1  # skip separator

        # Collect expected sexp lines until the next ===...=== or EOF.
        sexp_lines: list[str] = []
        while i < len(lines) and not _HEADER_RE.match(lines[i]):
            sexp_lines.append(lines[i])
            i += 1

        source = "\n".join(source_lines).strip("\n")
        expected = "\n".join(sexp_lines).strip()
        if name and expected:
            cases.append((name, source, expected))
    return cases


# ---------------------------------------------------------------------------
# Test collection
# ---------------------------------------------------------------------------

_CORPUS_DIR = Path(__file__).parent / "corpus_byte_ranges"

_PARAMS: list[pytest.param] = []
for _corpus_file in sorted(_CORPUS_DIR.glob("*.txt")):
    for _name, _source, _expected in _parse_corpus(_corpus_file):
        _PARAMS.append(pytest.param(_source, _expected, id=f"{_corpus_file.stem}::{_name}"))


# ---------------------------------------------------------------------------
# Test
# ---------------------------------------------------------------------------

_LANGUAGE = tree_sitter.Language(tree_sitter_rst.language())


@pytest.mark.parametrize("source,expected", _PARAMS)
def test_byte_ranges(source: str, expected: str) -> None:
    """Parse *source* and assert the rendered tree with byte ranges matches *expected*."""
    parser = tree_sitter.Parser(_LANGUAGE)
    tree = parser.parse(source.encode())
    actual = _render(tree.root_node)
    assert actual == expected, (
        f"\nActual:\n{actual}\n\nExpected:\n{expected}"
    )
