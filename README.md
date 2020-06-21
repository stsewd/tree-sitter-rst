# tree-sitter-rst

![CI](https://github.com/stsewd/tree-sitter-rst/workflows/CI/badge.svg)

reStructuredText grammar for tree-sitter.
Based on <https://docutils.sourceforge.io/docs/ref/rst/restructuredtext.html>

# TODO

- Move parsing of option list to C and declare more nodes -- This is in progress
- Validate names of footnotes and citations https://docutils.sourceforge.io/docs/ref/rst/restructuredtext.html#footnote-references
- Validate references names
- Implement transitions
- Implement indented literal blocks
- Implement quoted literal blocks
- Line blocks
- Block quotes
- roles
- doctest block
- Support common directives? (or at least the built-in ones)
- Parse external hyperlinks
- Enumerated lists that begin with `(` -> (1)
- Allow lists with empty elements
- Indentation
- Multi-line bodies
- Validate length of adornments in sections? (the spec doesn't mention this)
- Tables (maybe implemented without validations?)
- Group all chars as text?
- Add fields in the grammar?

# Design notes

- in RST lists can be started in the same block if they are a different subtype
  (we only start a new one if it's a different type).
- In RST sections are a big node that contains body elements, here is just a node that contains the title.
- Comments don't contain inline markup in RST, but they do here?
