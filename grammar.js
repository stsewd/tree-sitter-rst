const PREC = {}

module.exports = grammar({
  name: 'rst',

  // More control over white spaces
  extras: $ => [],

  conflicts: $ => [
    [$.bullet_list],
    [$.paragraph],
  ],

  externals: $ => [
    $._eol,
  ],

  rules: {
    source_file: $ => repeat($._body_elements),


    _body_elements: $ => choice(
      $.bullet_list,
      $.paragraph,
      $._emptyline,
    ),


    paragraph: $ => repeat1($._line),


    bullet_list: $ => repeat1($.list_item),
    list_item: $ => seq($._bullet, repeat1($._whitespace), $._line),
    _bullet: $ => /\*|\+|\-/,


    _line: $ => seq(repeat1($._char), $._eol),
    _emptyline: $ => seq(repeat($._whitespace), $._eol),
    _char: $ => /./,
    _whitespace: $ => /\s/,
  },
});
