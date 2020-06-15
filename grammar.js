const WHITE_SPACE = choice(' ', '\t', '\v', '\f')
const BODY = repeat1(/./)

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
const SUBSTITUTION_TEXT = /[^\s](.+[^\s])?/

const LINK = repeat1(/./)


module.exports = grammar({
  name: 'rst',

  extras: $ => [$._newline],

  conflicts: $ => [],

  externals: $ => [
    $._newline,
    $._blankline,

    $._char_bullet,
    $._numeric_bullet,

    $._text,
    $.emphasis,
  ],

  supertypes: $ => [
    $._list,
    $._inline_markup,
  ],

  rules: {
    document: $ => repeat(
      choice(
        $._body_elements,
        $._blankline,
      )
    ),

    // =============
    // Body elements
    // =============

    _body_elements: $ => seq(
      choice(
        $.paragraph,
        $._list,
        $.line_block,
        $._markup_block,
      ),
      $._blankline,
    ),


    // Paragraph
    // =========

    paragraph: $ => seq(
      repeat(seq($._line, $._newline)),
      $._line,
    ),


    // Lists
    // =====

    _list: $ => choice(
      $.bullet_list,
      $.enumerated_list,
      $.field_list,
      $.option_list,
    ),

    // Bullet lists
    // ------------

    bullet_list: $ => seq(
      repeat(seq(alias($._bullet_list_item, $.list_item), $._newline)),
      alias($._bullet_list_item, $.list_item),
    ),

    _bullet_list_item: $ => seq($._char_bullet, WHITE_SPACE, $._line),

    // Enumerated lists
    // ----------------

    enumerated_list: $ => seq(
      repeat(seq(alias($._numeric_list_item, $.list_item), $._newline)),
      alias($._numeric_list_item, $.list_item),
    ),
    _numeric_list_item: $ => seq($._numeric_bullet, WHITE_SPACE, $._line),

    // Definition list
    // ---------------

    // TODO

    // Field list
    // ----------

    field_list: $ => seq(
      repeat(seq($.field, $._newline)),
      $.field,
    ),
    field: $ => seq(
      token(seq(':', FIELD_NAME, ':', WHITE_SPACE)),
      BODY,
    ),

    // Option list
    // -----------

    option_list: $ => seq(
      repeat(seq($.option_list_item, $._newline)),
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
      repeat(seq($._single_line_block, $._newline)),
      $._single_line_block,
    ),
    _single_line_block: $ => choice(
      '|',
      seq(token(seq('|', WHITE_SPACE)), BODY),
    ),


    // Markup blocks
    // =============

    _markup_block: $ => choice(
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
      repeat(seq($.footnote, $._newline)),
      $.footnote,
    ),
    footnote: $ => seq(
      token(seq(MARKUP_START, '[', LABEL, ']', WHITE_SPACE)),
      BODY,
    ),

    // Citations
    // ---------

    _citation_block: $ => seq(
      repeat(seq($.citation, $._newline)),
      $.citation,
    ),
    citation: $ => seq(
      token(seq(MARKUP_START, '[', CITATION_LABEL, ']', WHITE_SPACE)),
      BODY,
    ),

    // Hyperlink targets
    // -----------------

    _hyperlink_target_block: $ => seq(
      repeat(seq($.target, $._newline)),
      $.target,
    ),
    target: $ => seq(
      token(seq(MARKUP_START, seq('_', REFERENCE_NAME), ':')),
      optional(token(seq(WHITE_SPACE, LINK))),
    ),

    // Anonymous hyperlink targets
    // ---------------------------

    _anoynymous_hyperlink_target_block: $ => seq(
      repeat(seq(alias($._anonymous_target, $.target), $._newline)),
      alias($._anonymous_target, $.target),
    ),
    _anonymous_target: $ => seq(
      '__',
      optional(token(seq(WHITE_SPACE, LINK))),
    ),

    // Directives
    // ----------

    _directive_block: $ => seq(
      repeat(seq($.directive, $._newline)),
      $.directive,
    ),
    directive: $ => seq(
      token(seq(MARKUP_START, TYPE, '::')),
      optional(seq(WHITE_SPACE, BODY)),
    ),


    // Substitution definition
    // -----------------------

    _substitution_definition_block: $ => seq(
      repeat(seq($.substitution_definition, $._newline)),
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
      repeat(seq($.comment, $._newline)),
      $.comment,
    ),
    comment: $ => seq(
      '..',
      optional(seq(WHITE_SPACE, BODY)),
    ),


    // =============
    // Inline markup
    // =============

    _line: $ => repeat1(
      choice(
        token(repeat(WHITE_SPACE)),
        $._inline_markup,
      ),
    ),

    _inline_markup: $ => choice(
      $._text,
      $.emphasis,
    ),
  },
});
