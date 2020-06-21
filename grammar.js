const WHITE_SPACE = choice(' ', '\t', '\v', '\f')

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

    $._overline,
    $._underline,

    $._char_bullet,
    $._numeric_bullet,
    $.field_name,

    $._text,
    $.emphasis,
    $.strong,
    $.interpreted_text,
    $.literal,
    $.substitution_reference,
    $._inline_target,
    $.footnote_reference,
    $.reference,
    $.standalone_hyperlink,  // TODO

    $._explicit_markup_start,
  ],

  supertypes: $ => [
    $._list,
    $._inline_markup,
    $._markup_block,
  ],

  rules: {
    document: $ => repeat(
      choice(
        $.section,
        $._body_elements,
        $._blankline,
      )
    ),

    // ========
    // Sections
    // ========

    section: $ => choice(
      seq(
        $._overline,
        alias($._line, $.title), $._newline,
        $._underline,
      ),
      seq(
        alias($._line, $.title), $._newline,
        $._underline,
      ),
    ),


    // =============
    // Body elements
    // =============

    _body_elements: $ => seq(
      choice(
        $.paragraph,
        $._list,
        //$.line_block,
        $._explicit_markup_block,
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
      $.field_name,
      WHITE_SPACE,
      alias($._line, $.field_body),
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
      $._line,
    ),


    // Line block
    // ==========

    line_block: $ => seq(
      repeat(seq($._single_line_block, $._newline)),
      $._single_line_block,
    ),
    _single_line_block: $ => choice(
      '|',
      seq(token(seq('|', WHITE_SPACE)), $._line),
    ),


    // Markup blocks
    // =============
    _explicit_markup_block: $ => seq(
      repeat(seq($._markup_block, $._newline)),
      $._markup_block,
    ),

    _markup_block: $ => choice(
      $.footnote,
      $.citation,
      $.target,
      alias($._anonymous_target, $.target),
      $.directive,
      $.substitution_definition,
      $.comment,
    ),

    // Footnotes
    // ---------

    footnote: $ => seq(
      $._explicit_markup_start,
      token(seq(WHITE_SPACE, '[', LABEL, ']', WHITE_SPACE)),
      $._line,
    ),

    // Citations
    // ---------

    citation: $ => seq(
      $._explicit_markup_start,
      token(seq(WHITE_SPACE, '[', CITATION_LABEL, ']', WHITE_SPACE)),
      $._line,
    ),

    // Hyperlink targets
    // -----------------

    target: $ => seq(
      $._explicit_markup_start,
      token(seq(WHITE_SPACE, '_', REFERENCE_NAME, ':')),
      optional(token(seq(WHITE_SPACE, LINK))),
    ),

    // Anonymous hyperlink targets
    // ---------------------------

    _anonymous_target: $ => seq(
      '__',
      optional(token(seq(WHITE_SPACE, LINK))),
    ),

    // Directives
    // ----------

    directive: $ => seq(
      $._explicit_markup_start,
      token(seq(WHITE_SPACE, TYPE, '::')),
      optional(seq(WHITE_SPACE, $._line)),
    ),


    // Substitution definition
    // -----------------------

    substitution_definition: $ => seq(
      $._explicit_markup_start,
      token(seq(WHITE_SPACE, '|', SUBSTITUTION_TEXT, '|', WHITE_SPACE)),
      $._embed_directive,
    ),
    _embed_directive: $ => seq(
      TYPE,
      '::',
      WHITE_SPACE,
      $._line,
    ),


    // Comments
    // --------

    comment: $ => seq(
      $._explicit_markup_start,
      optional(seq(WHITE_SPACE, $._line)),
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
      $.strong,
      $.interpreted_text,
      $.literal,
      $.substitution_reference,
      alias($._inline_target, $.target),
      $.footnote_reference,
      $.reference,
      $.standalone_hyperlink,
    ),
  },
});
