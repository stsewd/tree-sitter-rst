#include <tree_sitter/parser.h>

#include <stdbool.h>
#include <stdio.h>

#include "tree_sitter_rst/utils.c"
#include "tree_sitter_rst/parser.c"

#include "tree_sitter_rst/tokens.h"


void * tree_sitter_rst_external_scanner_create() {
  int *i = malloc(sizeof(int));
  return i;
}


void tree_sitter_rst_external_scanner_destroy(void *payload) {
}

unsigned tree_sitter_rst_external_scanner_serialize(
  void *payload,
  char *buffer
) {
  return 0;
}


void tree_sitter_rst_external_scanner_deserialize(
  void *payload,
  const char *buffer,
  unsigned length
) {
}


bool tree_sitter_rst_external_scanner_scan(
    void *payload,
    TSLexer *lexer,
    const bool *valid_symbols
) {
  int32_t current = lexer->lookahead;

  if (
      is_newline(current)
      && (valid_symbols[T_BLANKLINE] || valid_symbols[T_NEWLINE])
  ) {
    return parse_line(lexer, valid_symbols);
  }

  if (is_adornment_char(current) && valid_symbols[T_UNDERLINE]) {
    return parse_underline(lexer, valid_symbols);
  }

  if (is_adornment_char(current) && valid_symbols[T_OVERLINE]) {
    return parse_overline(lexer, valid_symbols);
  }

  if (is_numeric_bullet(current) && valid_symbols[T_NUMERIC_BULLET]) {
    return parse_numeric_bullet(lexer, valid_symbols);
  }

  if (is_char_bullet(current) && valid_symbols[T_CHAR_BULLET]) {
    return parse_char_bullet(lexer, valid_symbols);
  }


  if (
      is_inline_markup_start_char(current)
      && (valid_symbols[T_EMPHASIS]
          || valid_symbols[T_STRONG]
          || valid_symbols[T_INTERPRETED_TEXT]
          || valid_symbols[T_LITERAL]
          || valid_symbols[T_SUBSTITUTION_REFERENCE]
          || valid_symbols[T_INLINE_TARGET]
          || valid_symbols[T_FOOTNOTE_REFERENCE]
          || valid_symbols[T_REFERENCE])
  ) {
    return parse_inline_markup(lexer, valid_symbols);
  }


  if (!is_space(current) && (valid_symbols[T_REFERENCE] || valid_symbols[T_TEXT])) {
    return parse_inline_reference(lexer, valid_symbols) || parse_text(lexer, valid_symbols);
  }

  return false;
}
