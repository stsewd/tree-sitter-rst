const WHITE_SPACE = choice(' ', '\t', '\v', '\f')
const BODY = repeat1(/./)

const CHAR_BULLET = choice('*', '+', '-', '•', '‣', '⁃')
const NUMERIC_BULLET = choice(
  /[0-9]+\./,
  /[a-z]\./,
  /[A-Z]\./,
  /[IVXLCDM]+\./,
  /[ivxlcdm]+\./,
  '#.',
)
const FIELD_NAME = /[^:]+/
const OPTION = /[a-zA-Z0-9][a-zA-Z0-9_-]*/
const OPTION_STRING = choice(
  seq('-', OPTION),
  seq('+', OPTION),
  seq('--', OPTION),
  seq('/', OPTION),
)
const OPTION_GROUP = seq(
  OPTION_STRING,
  optional(
    seq(choice(' ', '='), OPTION),
  ),
)

const MARKUP_START = seq('..', WHITE_SPACE)
const LABEL = choice(
  /[0-9]+/,
  '#',
  /#[a-zA-Z0-9][a-zA-Z0-9_]*/,
  '*',
)
const CITATION_LABEL = /[a-zA-Z0-9]+([a-zA-Z0-9._-]+[a-zA-Z0-9])?/
const REFERENCE_NAME = choice(
  '_',
  /[^_:]([^:]+[^_:])?/,
  /`[^`]+`/,
)
const TYPE = /[a-zA-Z0-9]+([a-z-A-Z0-9-_+:.]+[a-zA-Z0-9])?/
const SUBSTITUTION_TEXT = /[^\s]+(.+[^\s])?/

const LINK = repeat1(/./)

const START_CHAR = choice('-', ':', '/', '\'', '"', '<', '(', '[', '{')
const END_CHAR = choice('-', '.', ',', ':', ';', '!', '?', '\\', '/', '\'', '"', ')', ']', '}', '>')


module.exports = grammar({
  name: 'rst',

  extras: $ => [$._eol],

  conflicts: $ => [],

  externals: $ => [
    $._eol,
    $._blank_line,
  ],

  supertypes: $ => [],

  rules: {
    document: $ => repeat(
      choice(
        $._body_elements,
        $._blank_line,
      )
    ),

    // =============
    // Body elements
    // =============

    _body_elements: $ => seq(
      choice(
        $.paragraph,
        $._lists,
        $.line_block,
        $._markup_blocks,
      ),
      $._blank_line,
    ),


    // Paragraph
    // =========

    paragraph: $ => seq(
      repeat(seq($._text_body, $._eol)),
      $._text_body,
    ),


    // Lists
    // =====

    _lists: $ => choice(
      $.bullet_list,
      $.enumerated_list,
      $.field_list,
      $.option_list,
    ),

    list_item: $ => choice(
      $._bullet_list_item,
      $._enumerated_list_item,
    ),

    // Bullet lists
    // ------------

    bullet_list: $ => seq(
      repeat(seq(alias($._bullet_list_item, $.list_item), $._eol)),
      alias($._bullet_list_item, $.list_item),
    ),

    _bullet_list_item: $ => seq($._char_bullet, BODY),
    _char_bullet: $ => token(seq(CHAR_BULLET, WHITE_SPACE)),

    // Enumerated lists
    // ----------------

    enumerated_list: $ => seq(
      repeat(seq(alias($._enumerated_list_item, $.list_item), $._eol)),
      alias($._enumerated_list_item, $.list_item),
    ),
    _enumerated_list_item: $ => seq(token(seq(NUMERIC_BULLET, WHITE_SPACE)), BODY),

    // Definition list
    // ---------------

    // TODO

    // Field list
    // ----------

    field_list: $ => seq(
      repeat(seq($.field, $._eol)),
      $.field,
    ),
    field: $ => seq(
      token(seq(':', FIELD_NAME, ':', WHITE_SPACE)),
      BODY,
    ),

    // Option list
    // -----------

    option_list: $ => seq(
      repeat(seq($.option_list_item, $._eol)),
      $.option_list_item,
    ),

    option_list_item: $ => seq(
      token(
        seq(
          repeat(seq(OPTION_GROUP, ', ')),
          OPTION_GROUP,
          WHITE_SPACE,
          WHITE_SPACE,
        ),
      ),
      BODY,
    ),


    // Line block
    // ==========

    line_block: $ => seq(
      repeat(seq($._single_line_block, $._eol)),
      $._single_line_block,
    ),
    _single_line_block: $ => choice(
      '|',
      seq(token(seq('|', WHITE_SPACE)), BODY),
    ),


    // Markup blocks
    // =============

    _markup_blocks: $ => choice(
      $._footnote_block,
      $._citation_block,
      $._hyperlink_target_block,
      $._anoynymous_hyperlink_target_block,
      $._directive_block,
      $._substitution_definition_block,
      $._comment_block,
    ),

    // Footnotes
    // ---------

    _footnote_block: $ => seq(
      repeat(seq($.footnote, $._eol)),
      $.footnote,
    ),
    footnote: $ => seq(
      token(seq(MARKUP_START, '[', LABEL, ']', WHITE_SPACE)),
      BODY,
    ),

    // Citations
    // ---------

    _citation_block: $ => seq(
      repeat(seq($.citation, $._eol)),
      $.citation,
    ),
    citation: $ => seq(
      token(seq(MARKUP_START, '[', CITATION_LABEL, ']', WHITE_SPACE)),
      BODY,
    ),

    // Hyperlink targets
    // -----------------

    _hyperlink_target_block: $ => seq(
      repeat(seq($.target, $._eol)),
      $.target,
    ),
    target: $ => seq(
      token(seq(MARKUP_START, seq('_', REFERENCE_NAME), ':')),
      optional(token(seq(WHITE_SPACE, LINK))),
    ),

    // Anonymous hyperlink targets
    // ---------------------------

    _anoynymous_hyperlink_target_block: $ => seq(
      repeat(seq(alias($._anonymous_target, $.target), $._eol)),
      alias($._anonymous_target, $.target),
    ),
    _anonymous_target: $ => seq(
      '__',
      optional(token(seq(WHITE_SPACE, LINK))),
    ),

    // Directives
    // ----------

    _directive_block: $ => seq(
      repeat(seq($.directive, $._eol)),
      $.directive,
    ),
    directive: $ => seq(
      token(seq(MARKUP_START, TYPE, '::')),
      optional(seq(WHITE_SPACE, BODY)),
    ),


    // Substitution definition
    // -----------------------

    _substitution_definition_block: $ => seq(
      repeat(seq($.substitution_definition, $._eol)),
      $.substitution_definition,
    ),
    substitution_definition: $ => seq(
      token(seq(MARKUP_START, '|', SUBSTITUTION_TEXT, '|', WHITE_SPACE)),
      $._embed_directive,
    ),
    _embed_directive: $ => seq(
      TYPE,
      '::',
      seq(WHITE_SPACE, BODY),
    ),


    // Comments
    // --------

    _comment_block: $ => seq(
      repeat(seq($.comment, $._eol)),
      $.comment,
    ),
    comment: $ => seq(
      '..',
      optional(seq(WHITE_SPACE, BODY)),
    ),


    // =============
    // Inline markup
    // =============

    _text_body: $ => repeat1(
      choice(
        $._inline_markup_block,
        $._char,
      ),
    ),

    _char: $ => choice(WHITE_SPACE, START_CHAR, END_CHAR, /\S/),

    _inline_markup_block: $ => seq(
      choice(WHITE_SPACE, START_CHAR),
      $._inline_markup,
      (choice(WHITE_SPACE, END_CHAR, $._eol)),
    ),

    _inline_markup: $ => choice(
      $.emphasis,
    ),


    // Emphasis
    // ========

    emphasis: $ => seq('*', /[^*\S]+([^*]+[^*\S])?/, '*'),
  },
});
