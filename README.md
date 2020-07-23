# tree-sitter-rst

![CI](https://github.com/stsewd/tree-sitter-rst/workflows/CI/badge.svg)

reStructuredText grammar for [tree-sitter](https://tree-sitter.github.io/tree-sitter/).
Based on <https://docutils.sourceforge.io/docs/ref/rst/restructuredtext.html>.

**Note: this grammar is still under development, a lot of things may change!**

Check the playground at <https://stsewd.dev/tree-sitter-rst/>.

## TODO

- Support all types of quoted literal block
- Line blocks
- Block quotes
- roles
- doctest block
- Parse external hyperlinks (standalone_hyperlink)
- Definition lists
- Field lists
- Option lists
- Validate length of adornments in sections? (the spec doesn't mention this)
- Tables (maybe implemented without validations?)
- Group all chars as text?
- Add fields in the grammar?
- tests, tests, and more tests!

## Design notes

- in RST lists can be started in the same block if they are a different subtype
  (we only start a new one if it's a different type).
- In RST sections are a big node that contains body elements, here is just a node that contains the title.
  This is to avoid guessing the level of subtitles.
- Comments don't contain inline markup in RST, but we still parse them as RST.
- Literal blocks are part of the paragraph they precede, not a separate node,
  except for the expanded form of literal blocks.
- Should we include the literal block mark as part of the literal block?
