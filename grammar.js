// tree-sitter web-ui
const PREC = {}

const NUMERIC_BULLETS = /[0-9]+|[a-z]|[A-Z]|[IVXLCDM]+|[ivxlcdm]+|#/


module.exports = grammar({
  name: 'rst',

  // More control over white spaces
  extras: $ => [],

  conflicts: $ => [
    [$.bullet_list],
    [$.enumerated_list],
    [$.paragraph],
  ],

  externals: $ => [
    $._eol,
  ],

  supertypes: $ => [
    $._list,
  ],

  rules: {
    document: $ => repeat($._body_elements),


    _body_elements: $ => choice(
      $.paragraph,
      $._list,
      $._blank_line,
    ),


    paragraph: $ => repeat1($._line),


    _list: $ => choice(
      $.bullet_list,
      $.enumerated_list,
    ),

    list_item: $ => choice(
      $._bullet_list_item,
      $._enumerated_list_item,
    ),
    list_bullet: $ => choice(
      $._bullet,
      $._numeric_bullet,
    ),

    bullet_list: $ => repeat1(alias($._bullet_list_item, $.list_item)),
    _bullet_list_item: $ => seq(
      alias($._bullet, $.list_bullet),
      $._line,
    ),
    _bullet: $ => token(seq(/\*|\+|-|•|‣|⁃/, /\s/)),

    enumerated_list: $ => repeat1(alias($._enumerated_list_item, $.list_item)),
    _enumerated_list_item: $ => seq(
      alias($._numeric_bullet, $.list_bullet),
      $._line,
    ),
    _numeric_bullet: $ => choice(
      token(seq(NUMERIC_BULLETS, '.', /\s/)),
      token(seq('(', NUMERIC_BULLETS, ')', /\s/)),
      token(seq(NUMERIC_BULLETS, ')', /\s/)),
    ),

    //definition_list: $ => ,


    _line: $ => seq(repeat1(/./), $._eol),
    _blank_line: $ => seq(repeat($._whitespace), $._eol),
    _whitespace: $ => /\s/,
  },
});
