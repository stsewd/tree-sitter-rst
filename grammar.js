const PREC = {}

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
    _bullet_list_item: $ => seq($._bullet, $._whitespace, $._line),
    _bullet: $ => /\*|\+|-|•|‣|⁃/,

    _enumerated_list: $ => repeat1(alias($._enumerated_list_item, $.list_item)),
    _enumerated_list_item: $ => seq($._numeric_bullet, $._whitespace, $._line),
    _numeric_bullet: $ => choice(
      seq($._numeric_bullet_seq, '.'),
      seq('(', $._numeric_bullet_seq, ')'),
      seq($._numeric_bullet_seq, ')'),
    ),
    _numeric_bullet_seq: $ => /[0-9]+|[a-z]|[A-Z]|[IVXLCDM]+|[ivxlcdm]+|#/,


    _line: $ => seq(repeat1($._char), $._eol),
    _blank_line: $ => seq(repeat($._whitespace), $._eol),
    _char: $ => /./,
    _whitespace: $ => /\s/,
  },
});
