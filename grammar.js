const WHITE_SPACE = choice(' ', '\t', '\v', '\f');
const LINK = /\S(.*\S)?/;

module.exports = grammar({
  name: 'rst',

  externals: $ => [
    $._newline,
    $._blankline,
    $._indent,
    $._dedent,

    // Sections
    $._overline,
    $._underline,

    // Transitions
    $.transition,

    // Lists
    $._char_bullet,
    $._numeric_bullet,

    // Literal blocks
    $._literal_block_mark,
    $._quoted_literal_block,

    // Line blocks
    $._line_block_mark,

    // Block quotes
    $._attribution_mark,

    // Doctest blocks
    $._doctest_block_mark,

    // Inline markup
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

    // Markup blocks
    $._explicit_markup_start,
    $._footnote_label,
    $._citation_label,
    $._target_name,
    $._anonymous_target_mark,
    $._directive_mark,
    $._substitution_mark,
    $._empty_comment,
  ],

  extras: $ => [
    $.__newline,
    $.__whitespace,
  ],

  conflicts: $ => [],

  supertypes: $ => [
    $._list,
    $._markup_block,
    $._inline_markup,
  ],

  rules: {
    document: $ => repeat(
      choice(
        $.section,
        $._transition_block,
        $._body_element_block,
      ),
    ),

    // ========
    // Sections
    // ========

    section: $ => choice(
      seq(
        $._overline,
        alias($._line, $.title),
        $._underline,
      ),
      seq(
        alias($._line, $.title),
        $._underline,
      ),
    ),

    // ==========
    // Transitions
    // ===========

    _transition_block: $ => seq(
      $.transition,
      $._blankline,
    ),

    // =============
    // Body elements
    // =============

    _body_element_block: $ => seq(
      $._body_element,
      $._blankline,
    ),

    _indented_block: $ => seq(
      repeat(
        seq(
          $._body_element,
          $._blankline,
        ),
      ),
      $._body_element,
      $._dedent,
    ),

    _body_element: $ => choice(
      $.paragraph,
      $._list,
      $._explicit_markup_block,
      $._literal_block,
      $.line_block,
      $._block_quote_block,
      $.doctest_block,
    ),

    // Paragraph
    // =========

    paragraph: $ => repeat1($._paragraph_line),
    _paragraph_line: $ => seq(
      repeat1($._inline_markup),
      optional($._literal_block),
      $._newline,
    ),

    // Lists
    // =====

    _list: $ => choice(
      $.bullet_list,
      $.enumerated_list,
    ),

    // Bullet lists
    // ------------

    bullet_list: $ => repeat1(
      alias($._bullet_list_item, $.list_item),
    ),

    _bullet_list_item: $ => seq(
      $._char_bullet,
      choice($._indented_block, $._dedent),
    ),

    // Enumerated list
    // ---------------

    enumerated_list: $ => repeat1(
      alias($._numeric_list_item, $.list_item),
    ),

    _numeric_list_item: $ => seq(
      $._numeric_bullet,
      choice($._indented_block, $._dedent),
    ),

    // Literal blocks
    // ==============

    _literal_block: $ => seq(
      $._literal_block_mark,
      choice(
        $.literal_block,
        $._dedent
      ),
    ),

    literal_block: $ => choice(
      $._indented_literal_block,
      $._quoted_literal_block,
    ),

    _indented_literal_block: $ => seq(
      repeat(
        seq(
          $._text_block,
          $._blankline,
        ),
      ),
      $._text_block,
      $._dedent,
    ),

    _text_block: $ => repeat1($._text_line),
    _text_line: $ => seq(
      repeat1($._text),
      $._newline,
    ),

    // Line blocks
    // ===========

    line_block: $ => repeat1($.line),
    line: $ => seq(
      $._line_block_mark,
      repeat($._line),
      $._dedent,
    ),

    // Block quotes
    // ============

    _block_quote_block: $ => seq(
      $._indent,
      $.block_quote,
    ),

    block_quote: $ => seq(
      repeat(
        seq(
          $._body_element,
          $._blankline,
        ),
      ),
      choice(
        $.attribution,
        $._body_element,
      ),
      $._dedent,
    ),

    attribution: $ => seq(
      $._attribution_mark,
      repeat1($._line),
      $._dedent,
    ),

    // Doctest blocks
    // ==============

    doctest_block: $ => seq(
      $._doctest_block_mark,
      $._text_block,
      $._blankline,
    ),

    // Markup blocks
    // =============

    _explicit_markup_block: $ => repeat1($._markup_block),

    _markup_block: $ => choice(
      $.footnote,
      $.citation,
      $.target,
      alias($._anonymous_target, $.target),
      $.directive,
      $.substitution_definition,
      $.comment,
      alias($._empty_comment, $.comment),
    ),

    // Footnotes
    // ---------

    footnote: $ => seq(
      $._explicit_markup_start,
      alias($._footnote_label, $.label),
      choice($._indented_block, $._dedent),
    ),

    // Citations
    // ---------

    citation: $ => seq(
      $._explicit_markup_start,
      alias($._citation_label, $.label),
      choice($._indented_block, $._dedent),
    ),

    // Hyperlink targets
    // -----------------

    target: $ => seq(
      $._explicit_markup_start,
      alias($._target_name, $.reference),
      optional(alias(LINK, $.link)),
      $._dedent,
    ),

    // Anonymous hyperlink targets
    // ---------------------------

    _anonymous_target: $ => seq(
      $._anonymous_target_mark,
      optional(alias(LINK, $.link)),
      $._newline,
    ),

    // Directives
    // ----------

    directive: $ => seq(
      $._explicit_markup_start,
      alias($._directive_mark, $.type),
      choice($._indented_block, $._dedent),
    ),

    // Substitution definition
    // -----------------------

    substitution_definition: $ => seq(
      $._explicit_markup_start,
      alias($._substitution_mark, $.substitution),
      alias($._embedded_directive, $.directive),
    ),

    _embedded_directive: $ => seq(
      alias($._directive_mark, $.type),
      choice($._indented_block, $._dedent),
    ),

    // Comments
    // --------

    comment: $ => seq(
      $._explicit_markup_start,
      choice($._indented_literal_block, $._dedent),
    ),

    // =============
    // Inline markup
    // =============

    _line: $ => seq(
      repeat1($._inline_markup),
      $._newline,
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

    __newline: $ => /\r?\n/,
    __whitespace: $ => token(repeat1(WHITE_SPACE)),
  },
});
