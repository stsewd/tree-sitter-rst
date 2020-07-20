# tree-sitter-rst

![CI](https://github.com/stsewd/tree-sitter-rst/workflows/CI/badge.svg)

reStructuredText grammar for [tree-sitter](https://tree-sitter.github.io/tree-sitter/).
Based on <https://docutils.sourceforge.io/docs/ref/rst/restructuredtext.html>.

**Note: this grammar is still under development, a lot of things may change!**

Check the playground at <https://stsewd.dev/tree-sitter-rst/>.

# TODO

- Quoted literal blocks
- Line blocks
- Block quotes
- roles
- doctest block
- Parse external hyperlinks (standalone_hyperlink)
- Enumerated lists that begin with `(` -> (1)
- Allow lists with empty elements
- Definition lists
- Field lists
- Option lists
- Validate length of adornments in sections? (the spec doesn't mention this)
- Tables (maybe implemented without validations?)
- Group all chars as text?
- Add fields in the grammar?
- tests, tests, and more tests!

# Design notes

- in RST lists can be started in the same block if they are a different subtype
  (we only start a new one if it's a different type).
- In RST sections are a big node that contains body elements, here is just a node that contains the title.
- Comments don't contain inline markup in RST, but they do here?
