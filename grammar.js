const PREC = {}
const WHITE_SPACE = choice(' ', '\t', '\v', '\f')
const OPTION = /[a-zA-Z0-9][a-zA-Z0-9_-]*/


module.exports = grammar({
  name: 'rst',

  extras: $ => [$._eol],

  conflicts: $ => [
    [$.bullet_list],
    [$.enumerated_list],
    [$._option]
  ],

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
      ),
      $._blank_line,
    ),


    // =========
    // Paragraph
    // =========
    paragraph: $ => seq(
      repeat(seq($._line, $._eol)),
      $._line,
    ),


    // =====
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

    _bullet_list_item: $ => seq($._char_bullet, $._line),
    _char_bullet: $ => token(seq(
      choice('*', '+', '-', '•', '‣', '⁃'),
      WHITE_SPACE,
    )),

    // Enumerated lists
    // ----------------
    enumerated_list: $ => seq(
      repeat(seq(alias($._enumerated_list_item, $.list_item), $._eol)),
      alias($._enumerated_list_item, $.list_item),
    ),

    _enumerated_list_item: $ => seq($._numeric_bullet, $._line),
    _numeric_bullet: $ => token(seq(
      choice(/[0-9]+\./, /[a-z]\./, /[A-Z]\./, /[IVXLCDM]+\./, /[ivxlcdm]+\./, '#.'),
      WHITE_SPACE,
    )),

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
      ':',
      $._field_name,
      ':',
      WHITE_SPACE,
      $._field_body,
    ),

    _field_name: $ => /[^:]+/,
    _field_body: $ => $._line,

    // Option list
    // -----------
    option_list: $ => seq(
      repeat(seq($.option_list_item, $._eol)),
      $.option_list_item,
    ),

    option_list_item: $ => seq(
      seq(repeat(seq($._option, ', ')), $._option),
      WHITE_SPACE,
      WHITE_SPACE,
      $._line,
    ),
    _option: $ => seq(
      $._option_string,
      optional(
        seq(choice(' ', '='), $._option_argument),
      ),
    ),
    _option_string: $ => token(choice(
      seq('-', OPTION),
      seq('+', OPTION),
      seq('--', OPTION),
      seq('/', OPTION),
    )),
    _option_argument: $ => OPTION,


    // General tokens
    // ==============
    // TODO: this should be body
    _line: $ => repeat1(/./),
  },
});
