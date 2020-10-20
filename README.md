# tree-sitter-rst

[![CI](https://github.com/stsewd/tree-sitter-rst/workflows/CI/badge.svg)](https://github.com/stsewd/tree-sitter-rst/actions?query=workflow%3ACI+branch%3Amaster)

reStructuredText grammar for [tree-sitter](https://tree-sitter.github.io/tree-sitter/).
Based on the specification from  <https://docutils.sourceforge.io/docs/ref/rst/restructuredtext.html>.

Check the playground at <https://stsewd.dev/tree-sitter-rst/>.

**Note: this grammar is still under development, a lot of things may change!**

## TODO

- Allow lists with blank lines between items
- Refactor parse citation and footer reference
- Inline markup can be expanded to the next line if it has the same indentation level.
- Nested line blocks
- Option lists
- Tables (maybe implemented without validations?)
- Add some nodes to inline?
- Check if there is a way to re-implement some nodes to JS instead of C?
- Definition lists without classifiers are recognized as block quotes.
  We need to validate if a block quote is followed by a paragraph,
  it should have an empty line.
- tests, tests, and more tests!

## Design notes

- Nodes that contain body elements inside (like lists or directives),
  are inside a node named `body`.
- In RST sections are a big node that contains body elements,
  here they are just a node containing the title.
  This is to avoid guessing the level of subtitles.
- In RST standalone hyperlinks are `reference` nodes,
  here they are `standalone_hyperlink` nodes.
  This is to avoid confusion with inline references nodes
  (that are a `reference` node).
- Literal blocks are part of the paragraph they precede, not a separate node,
  except for the expanded form of literal blocks.

## Design decisions

- Should we include the literal block mark as part of the literal block?
- Validate length of adornments in sections?

  The spec doesn't mention this, but this paragraph does.

  > The underline/overline must be at least as long as the title text.

  https://docutils.sourceforge.io/docs/user/rst/quickstart.html


## Projects using this grammar

- [nvim-treesitter](https://github.com/nvim-treesitter/nvim-treesitter)
- Yours?
