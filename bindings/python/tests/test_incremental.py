"""Incremental-parse regression tests.

These cover #44 (AST depends on edit order) and #64 (code-block directive
breaks in Neovim after an edit). The contract for tree-sitter incremental
parsing is that ``parse(source, edited_tree)`` must return the same tree as a
full ``parse(source)``. Anything else is a scanner state bug.
"""

from unittest import TestCase

import tree_sitter
import tree_sitter_rst


def _lang():
    return tree_sitter.Language(tree_sitter_rst.language())


def _parser():
    return tree_sitter.Parser(_lang())


def _tree_repr(node):
    """Return a stable string representation of the parse tree."""
    parts = [node.type]
    if node.child_count:
        parts.append("[")
        parts.append(", ".join(_tree_repr(c) for c in node.children))
        parts.append("]")
    return "".join(parts)


def _apply_edit(source: str, tree, start_byte: int, old_end_byte: int, new_text: str):
    """Apply a single edit to ``tree`` and ``source``, returning the new ones."""
    new_end_byte = start_byte + len(new_text.encode("utf-8"))

    def point_for(byte_offset, text):
        line = text.count("\n", 0, byte_offset)
        line_start = text.rfind("\n", 0, byte_offset) + 1
        col = byte_offset - line_start
        return (line, col)

    start_point = point_for(start_byte, source)
    old_end_point = point_for(old_end_byte, source)
    new_source = source[:start_byte] + new_text + source[old_end_byte:]
    new_end_point = point_for(new_end_byte, new_source)

    tree.edit(
        start_byte=start_byte,
        old_end_byte=old_end_byte,
        new_end_byte=new_end_byte,
        start_point=start_point,
        old_end_point=old_end_point,
        new_end_point=new_end_point,
    )
    return new_source, tree


class TestIncrementalEquivalence(TestCase):
    """Incremental reparse must produce the same tree as a full reparse."""

    def assertEquivalent(self, source: str, tree, label: str):
        full_tree = _parser().parse(source.encode("utf-8"))
        full = _tree_repr(full_tree.root_node)
        incr = _tree_repr(tree.root_node)
        self.assertEqual(
            incr,
            full,
            f"{label}: incremental parse diverged from full parse\nincr: {incr}\nfull: {full}",
        )

    def test_44_edit_order_does_not_change_tree(self):
        """#44: re-adding a leading space on an indented bullet shouldn't shift the tree."""
        # Initial: list with leading space => block_quote + bullet_list.
        src = "list:\n - item1\n - item2\n"
        parser = _parser()
        tree = parser.parse(src.encode("utf-8"))

        # Edit: delete the leading space on " - item1" then re-add it.
        src1, tree1 = _apply_edit(src, tree, start_byte=6, old_end_byte=7, new_text="")
        tree1 = parser.parse(src1.encode("utf-8"), tree1)

        src2, tree2 = _apply_edit(src1, tree1, start_byte=6, old_end_byte=6, new_text=" ")
        tree2 = parser.parse(src2.encode("utf-8"), tree2)

        self.assertEqual(src2, src)
        self.assertEquivalent(src2, tree2, "#44 edit-order")

    def test_64_code_block_insert_newline_after_pass(self):
        """#64: inserting a newline after `pass` inside a code-block directive."""
        src = "text\n\n.. code-block:: python\n\n    def foo():\n        pass\n\ntext after\n"
        parser = _parser()
        tree = parser.parse(src.encode("utf-8"))

        # Insert a newline right after `pass` (i.e. before the existing newline
        # that terminates that line). That mirrors the user pressing `o` in
        # Neovim from the cursor on `pass`.
        pos = src.index("        pass") + len("        pass")
        src2, tree2 = _apply_edit(
            src, tree, start_byte=pos, old_end_byte=pos, new_text="\n        "
        )
        tree2 = parser.parse(src2.encode("utf-8"), tree2)

        self.assertEquivalent(src2, tree2, "#64 newline-in-code-block")

    def test_repeated_edits_inside_code_block(self):
        """Stress: repeated edits inside the directive content shouldn't drift."""
        src = ".. code-block:: python\n\n    x = 1\n    y = 2\n"
        parser = _parser()
        tree = parser.parse(src.encode("utf-8"))

        for ch in "abc":
            pos = len(src)
            src, tree = _apply_edit(
                src, tree, start_byte=pos, old_end_byte=pos, new_text=f"    {ch} = 3\n"
            )
            tree = parser.parse(src.encode("utf-8"), tree)

        self.assertEquivalent(src, tree, "stress code-block edits")
