const WHITE_SPACE = choice(' ', '\t', '\v', '\f');
const NEWLINE = /\r?\n/;
const LINK = /\S(.*\S)?/;

module.exports = grammar({
  name: 'rst',

  externals: $ => [
    // Whitespace
    $._newline,
    $._blankline,
    $._indent,
    $._newline_indent,  // A newline followed by an indent
    $._dedent,

    // Sections
    $._overline,
    $._underline,

    // Transitions
    $.transition,

    // Lists
    $._char_bullet,
    $._numeric_bullet,
    $._field_mark,
    $._field_mark_end,

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
    $._interpreted_text,
    $._interpreted_text_prefix,
    $._role_name_prefix,
    $._role_name_suffix,
    $.literal,
    $.substitution_reference,
    $.inline_target,
    $.footnote_reference,
    $.citation_reference,
    $.reference,
    $.standalone_hyperlink,

    // Markup blocks
    $._explicit_markup_start,
    $._footnote_label,
    $._citation_label,
    $._target_name,
    $._anonymous_target_mark,
    $._directive_name,
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
      $._overline_section,
      $._underline_section,
    ),

    /*

    Example:

    ================
    Overline section
    ================

    */
    _overline_section: $ => seq(
      alias($._overline, 'adornment'),
      alias($._line, $.title),
      alias($._underline, 'adornment'),
    ),

    /*

    Example:

    Underline section
    -----------------

    */
    _underline_section: $ => seq(
      alias($._line, $.title),
      alias($._underline, 'adornment'),
    ),

    // ===========
    // Transitions
    // ===========

    /*

    Example:

    Paragraph

    ----

    Some other paragraph

    */
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

    body: $ => seq(
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

    /*

    Example:

    I'm a simple paragraph.

    */
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
      $.definition_list,
      $.field_list,
    ),

    // Bullet lists
    // ------------

    /*

    Example:

    - One
    - Two

    */
    bullet_list: $ => repeat1(
      alias($._bullet_list_item, $.list_item),
    ),

    _bullet_list_item: $ => seq(
      alias($._char_bullet, 'bullet'),
      choice($.body, $._dedent),
    ),

    // Enumerated list
    // ---------------

    /*

    Example:

    1. One
    2. Two

    */
    enumerated_list: $ => repeat1(
      alias($._numeric_list_item, $.list_item),
    ),

    _numeric_list_item: $ => seq(
      alias($._numeric_bullet, 'bullet'),
      choice($.body, $._dedent),
    ),

    // Definition list
    // ---------------

    /*

    Example:

    Term
      Definition
    Another term : classifier
      Another definition
    Another term : classifier : second classifier
      Another definition

    .. note::

       The difference between a block quote and a definition list
       is that the definition list can't have a blank line before the definition.

    */
    definition_list: $ => repeat1(
      alias($._definition_list_item, $.list_item),
    ),

    _definition_list_item: $ => seq(
      alias(repeat1($._inline_markup), $.term),
      optional($._classifiers),
      $._newline_indent,
      alias($.body, $.definition),
    ),

    _classifiers: $ => repeat1(
      seq(
        alias(token(seq(repeat1(WHITE_SPACE), ':', repeat1(WHITE_SPACE))), ':'),
        alias(repeat1($._inline_markup), $.classifier),
      ),
    ),

    // Field lists
    // -----------

    /*

    Example:

    :Date: 2001-08-16
    :Version: 1
    :Authors: - Me
              - Myself
              - I
    :parameter:
    :Indentation: Since the field marker may be quite long, the second
      and subsequent lines of the field body do not have to line up.
    */
    field_list: $ => repeat1($.field),

    field: $ => seq(
      alias($._field_mark, ':'),
      alias(repeat1($._inline_markup), $.field_name),
      alias($._field_mark_end, ':'),
      choice(alias($.body, $.field_body), $._dedent),
    ),

    // Literal blocks
    // ==============

    /*

    Example:

    This is a paragraph::

        I'm an indented literal block

    This is a paragraph::

    > I'm a quoted
    > literal block

    */
    _literal_block: $ => seq(
      alias($._literal_block_mark, '::'),
      choice($.literal_block, $._dedent),
    ),

    literal_block: $ => choice(
      $._indented_text_block,
      $._quoted_literal_block,
    ),

    _indented_text_block: $ => seq(
      repeat(
        seq(
          $._text_block,
          $._blankline,
        ),
      ),
      $._text_block,
      $._dedent,
    ),

    // Line blocks
    // ===========

    /*

    Example:

    | Line
    | block

    */
    line_block: $ => repeat1($.line),
    line: $ => seq(
      alias($._line_block_mark, '|'),
      repeat($._line),
      $._dedent,
    ),

    // Block quotes
    // ============

    /*

    Example:

    The next text is a quote

        "It is my *business* to know things.  That is my trade."

        -- Sherlock Holmes

    */
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
      alias($._attribution_mark, '--'),
      repeat1($._line),
      $._dedent,
    ),

    // Doctest blocks
    // ==============

    /*

    Example:

    >>> print("hello world")

    */
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

    /*

    Example:

    .. [1] Footnote
    .. [#python] Another footnote

    */
    footnote: $ => seq(
      alias($._explicit_markup_start, '..'),
      field('name', alias($._footnote_label, $.label)),
      field('body', choice($.body, $._dedent)),
    ),

    // Citations
    // ---------

    /*

    Example:

    .. [citation] Citation

    */
    citation: $ => seq(
      alias($._explicit_markup_start, '..'),
      field('name', alias($._citation_label, $.label)),
      field('body', choice($.body, $._dedent)),
    ),

    // Hyperlink targets
    // -----------------

    /*

    Example:

    .. _hyperlink-name: link-block

    */
    target: $ => seq(
      alias($._explicit_markup_start, '..'),
      field('name', alias($._target_name, $.name)),
      field('link', optional(alias(LINK, $.link))),
      $._dedent,
    ),

    // Anonymous hyperlink targets
    // ---------------------------

    /*

    Example:

    .. __: anonymous

    __ anonymous

    */
    _anonymous_target: $ => seq(
      alias($._anonymous_target_mark, '__'),
      field('link', optional(alias(LINK, $.link))),
      $._newline,
    ),

    // Directives
    // ----------

    /*

    Example:

    .. note::

       This is a directive

    */
    directive: $ => seq(
      alias($._explicit_markup_start, '..'),
      field('name', alias($._directive_name, $.type)),
      '::',
      field('body', choice(alias($._directive_body, $.body), $._dedent)),
    ),

    _directive_body: $ => choice(
      // Directives with content
      seq(
        optional(alias($._text_line, $.arguments)),
        optional(alias($.field_list, $.options)),
        $._blankline,
        alias($._indented_text_block, $.content),
      ),
      // Directives without content
      seq(
        choice(
          alias($._text_line, $.arguments),
          alias($.field_list, $.options),
          seq(alias($._text_line, $.arguments), alias($.field_list, $.options)),
        ),
        $._dedent,
      ),
      // Directives with content at the first line
      seq(
        $._newline,
        choice(
          seq(alias($.field_list, $.options), $._dedent),
          alias($._indented_text_block, $.content),
          seq(alias($.field_list, $.options), $._blankline, alias($._indented_text_block, $.content)),
        ),
      ),
      // Directives with multiline arguments are split as arguments + content
      seq(
        alias($._text_line, $.arguments),
        alias($._indented_text_block, $.content),
      ),
    ),

    // Substitution definition
    // -----------------------

    /*

    Example:

    .. |my-image| image:: /images/spade.png
       :height: 11
       :width: 11

    */
    substitution_definition: $ => seq(
      alias($._explicit_markup_start, '..'),
      field('name', alias($._substitution_mark, $.substitution)),
      field('body', alias($._embedded_directive, $.directive)),
    ),

    _embedded_directive: $ => seq(
      field('name', alias($._directive_name, $.type)),
      seq('::', choice(WHITE_SPACE, $._newline)),
      field('body', choice(alias($._directive_body, $.body), $._dedent)),
    ),

    // Comments
    // --------

    /*

    Example:

    .. This is a comment.

    */
    comment: $ => seq(
      alias($._explicit_markup_start, '..'),
      choice($._indented_text_block, $._dedent),
    ),

    // =============
    // Inline markup
    // =============

    /*

    Example:

    - Normal text
    - *emphasis*
    - **strong**
    - `interpreted text`
    - ``literal text``
    - |substitution|
    - _`Inline target`
    - Footnote [1]_
    - Citation [python]_
    - reference_
    - `reference`_
    - Hyperlink https://stsewd.dev/
    */
    _line: $ => seq(
      repeat1($._inline_markup),
      $._newline,
    ),

    _text_block: $ => repeat1($._text_line),
    _text_line: $ => seq(
      repeat1(alias($._text, 'text')),
      $._newline,
    ),

    _inline_markup: $ => choice(
      alias($._text, 'text'),
      $.emphasis,
      $.strong,
      $.interpreted_text,
      $.literal,
      $.substitution_reference,
      $.inline_target,
      $.footnote_reference,
      $.citation_reference,
      $.reference,
      $.standalone_hyperlink,
    ),

    // Interpreted text
    // ----------------

    /*

    Example:

    - `simple interpreted text`
    - :prefix:role:`Interpreted text with a prefix role`
    - `Interpreted text with a suffix role`:suffix:role:
    */
    interpreted_text: $ => choice(
      $._default_role,
      $._prefix_role,
      $._suffix_role,
    ),
    _default_role: $ => alias($._interpreted_text, 'interpreted_text'),
    _prefix_role: $ => seq(
      alias($._role_name_prefix, $.role),
      alias($._interpreted_text, 'interpreted_text'),
    ),
    _suffix_role: $ => seq(
      alias($._interpreted_text_prefix, 'interpreted_text'),
      alias($._role_name_suffix, $.role),
    ),

    __newline: $ => NEWLINE,
    __whitespace: $ => token(repeat1(WHITE_SPACE)),
  },
});
