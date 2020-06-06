const PREC = {}
const WHITE_SPACE = /[ \t\v\f]/


module.exports = grammar({
  name: 'rst',

  extras: $ => [$._eol],

  conflicts: $ => [
    [$.bullet_list],
    [$.enumerated_list],
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
    paragraph: $ => prec.right(
      seq(
        repeat(seq($._line, $._eol)),
        $._line,
      )
    ),


    // =====
    // Lists
    // =====
    _lists: $ => choice(
      $.bullet_list,
      $.enumerated_list,
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


    // General tokens
    // ==============
    _line: $ => repeat1(/./),
  },
});
