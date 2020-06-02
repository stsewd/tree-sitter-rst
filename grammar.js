const PREC = {}

const NUMERIC_BULLETS = /[0-9]+|[a-z]|[A-Z]|[IVXLCDM]+|[ivxlcdm]+|#/


module.exports = grammar({
  name: 'rst',

  // More control over white spaces
  extras: $ => [],

  conflicts: $ => [
    [$.list],
    [$.paragraph],
  ],

  externals: $ => [
    $._eol,
  ],

  rules: {
    document: $ => repeat($._body_elements),


    _body_elements: $ => choice(
      $.paragraph,
      $.list,
      $._blank_line,
    ),


    paragraph: $ => repeat1($._line),


    list: $ => choice(
      $._bullet_list,
      $._enumerated_list,
    ),

    list_item: $ => choice(
      $._bullet_list_item,
      $._enumerated_list_item,
    ),

    _bullet_list: $ => repeat1(alias($._bullet_list_item, $.list_item)),
    _bullet_list_item: $ => seq($._bullet, $._line),
    _bullet: $ => token(seq(/\*|\+|-|•|‣|⁃/, /\s/)),

    _enumerated_list: $ => repeat1(alias($._enumerated_list_item, $.list_item)),
    _enumerated_list_item: $ => seq($._numeric_bullet, $._line),
    _numeric_bullet: $ => choice(
      token(seq(NUMERIC_BULLETS, '.', /\s/)),
      token(seq('(', NUMERIC_BULLETS, ')', /\s/)),
      token(seq(NUMERIC_BULLETS, ')', /\s/)),
    ),


    _line: $ => seq(repeat1(/./), $._eol),
    _blank_line: $ => seq(repeat($._whitespace), $._eol),
    _whitespace: $ => /\s/,
  },
});
