const WHITE_SPACE = choice(' ', '\t', '\v', '\f');

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
  ],

  extras: $ => [
    $.__newline,
    $.__whitespace,
  ],

  conflicts: $ => [
    [$.bullet_list],
    [$.enumerated_list],
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
      $._list_block,
      $._explicit_markup_block,
    ),

    // Paragraph
    // =========

    paragraph: $ => repeat1($._line),

    // Lists
    // =====

    _list_block: $ => seq(
      repeat1($._list),
    ),

    _list: $ => choice(
      $.bullet_list,
      $.enumerated_list,
    ),

    // Bullet lists
    // ------------

    bullet_list: $ => repeat1(
      alias($._bullet_list_item, $.list_item),
    ),

    _bullet_list_item: $ => seq($._char_bullet, choice($._indented_block, $._dedent)),

    // Enumerated list
    // ---------------

    enumerated_list: $ => repeat1(
      alias($._numeric_list_item, $.list_item),
    ),

    _numeric_list_item: $ => seq($._numeric_bullet, choice($._indented_block, $._dedent)),

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
      optional(alias(/.+/, $.link)),
      $._dedent,
    ),

    // Anonymous hyperlink targets
    // ---------------------------

    _anonymous_target: $ => seq(
      $._anonymous_target_mark,
      optional(alias(/.+/, $.link)),
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
      choice($._indented_block, $._dedent)
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
