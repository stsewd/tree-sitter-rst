# tree-sitter-rst

[![CI](https://github.com/stsewd/tree-sitter-rst/workflows/CI/badge.svg)](https://github.com/stsewd/tree-sitter-rst/actions?query=workflow%3ACI+branch%3Amaster)

reStructuredText grammar for [tree-sitter](https://tree-sitter.github.io/tree-sitter/).
Based on <https://docutils.sourceforge.io/docs/ref/rst/restructuredtext.html>.

**Note: this grammar is still under development, a lot of things may change!**

Check the playground at <https://stsewd.dev/tree-sitter-rst/>.

## TODO

- Allow lists with blank lines between items
- roles
- Nested line blocks
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

- In RST sections are a big node that contains body elements, here is just a node that contains the title.
  This is to avoid guessing the level of subtitles.
- The content from directives is interpreted as RST,
  but in the spec it's a literal block.
  Maybe have a list of directives that don't interpret the content as RST?
- Literal blocks are part of the paragraph they precede, not a separate node,
  except for the expanded form of literal blocks.
- Should we include the literal block mark as part of the literal block?
- Add nodes for marks? This is like adornments, bullets, etc.
