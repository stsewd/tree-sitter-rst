# tree-sitter-rst

![CI](https://github.com/stsewd/tree-sitter-rst/workflows/CI/badge.svg)

reStructuredText grammar for tree-sitter.
Based on <https://docutils.sourceforge.io/docs/ref/rst/restructuredtext.html>

# TODO

- Enumerated lists that begin with (1)
- Sections (maybe implemented without validations?)
- Empty lines with white-spaces
- Tables (maybe implemented without validations?)
- Indentation
- Multi-line bodies
- Allow to group different markup blocks
- Group all chars as text?

# Design notes

- in RST Lists can be started in the same block if they are a different type.
- In RST lists of the same type can't be separated by an empty line.
