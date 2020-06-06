// tree-sitter web-ui
const PREC = {}

const NUMERIC_BULLETS = /[0-9]+|[a-z]|[A-Z]|[IVXLCDM]+|[ivxlcdm]+|#/


module.exports = grammar({
  name: 'rst',

  extras: $ => [$._eol],

  conflicts: $ => [
    [$._bullet_list_item],
  ],

  externals: $ => [
    $._eol,
    $._blank_line,
  ],

  supertypes: $ => [],

  rules: {
    document: $ => repeat($._body_elements),

    // =============
    // Body elements
    // =============
    _body_elements: $ => choice(
      $.paragraph,
      $.bullet_list,
      $._blank_line,
    ),


    // =========
    // Paragraph
    // =========
    paragraph: $ => prec.right(choice(
      $._line,
      seq(
        repeat1(seq($._line, $._eol)),
        $._line,
      )
    )),


    // =====
    // Lists
    // =====
    list_item: $ => choice(
      $._bullet_list_item,
    ),

    // Bullet lists
    // ------------
    bullet_list: $ => choice(
      alias($._bullet_list_item, $.list_item),
      seq(
        repeat1(seq(alias($._bullet_list_item, $.list_item), $._eol)),
        alias($._bullet_list_item, $.list_item),
      ),
    ),
    _bullet_list_item: $ => seq($._char_bullet, $._line),
    _char_bullet: $ => token(seq(
      choice('*', '+', '-', '•', '‣', '⁃'),
      /\s/,
    )),

    // Enumerated lists
    // ----------------
    // TODO

    // General tokens
    // ==============
    _line: $ => repeat1(/./),
  },
});
