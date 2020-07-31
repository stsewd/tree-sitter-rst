# tree-sitter-rst

[![CI](https://github.com/stsewd/tree-sitter-rst/workflows/CI/badge.svg)](https://github.com/stsewd/tree-sitter-rst/actions?query=workflow%3ACI+branch%3Amaster)

reStructuredText grammar for [tree-sitter](https://tree-sitter.github.io/tree-sitter/).
Based on the specification from  <https://docutils.sourceforge.io/docs/ref/rst/restructuredtext.html>.

Check the playground at <https://stsewd.dev/tree-sitter-rst/>.

**Note: this grammar is still under development, a lot of things may change!**

## TODO

- Allow lists with blank lines between items
- Substitution references that end with _ https://docutils.sourceforge.io/docs/ref/rst/restructuredtext.html#substitution-references
- Nested line blocks
- Parse external hyperlinks (standalone_hyperlink)
- Definition lists
- Field lists
- Option lists
- Validate length of adornments in sections?

  The spec doesn't mention this, but this paragraph does.

  > The underline/overline must be at least as long as the title text.

  https://docutils.sourceforge.io/docs/user/rst/quickstart.html

- Tables (maybe implemented without validations?)
- Add some nodes to inline
- tests, tests, and more tests!
- Parse some random files for testing like
  https://github.com/tree-sitter/tree-sitter-javascript/blob/0711e93eb265f729c88c5555989d60bee3011873/script/parse-examples#L31-L33

## Design notes

- Nodes that contain body elements inside (like lists or directives),
  are inside a node named `body`.
- In RST sections are a big node that contains body elements,
  here they are just a node containing the title.
  This is to avoid guessing the level of subtitles.
- The content from directives is interpreted as RST,
  but in the spec it's a literal block.
  Maybe have a list of directives that don't interpret the content as RST?
  Or leverage this to language injection?
- Literal blocks are part of the paragraph they precede, not a separate node,
  except for the expanded form of literal blocks.
- Should we include the literal block mark as part of the literal block?

## Projects using this grammar

- [nvim-treesitter](https://github.com/nvim-treesitter/nvim-treesitter)
- Yours?
