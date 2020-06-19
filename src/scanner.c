#include <tree_sitter/parser.h>

#include <string.h>
#include <stdbool.h>
#include <stdio.h>

#include "tree_sitter_rst/utils.c"
#include "tree_sitter_rst/parser.c"

#include "tree_sitter_rst/tokens.h"


typedef struct {
  char *stack;
} Scanner;


void * tree_sitter_rst_external_scanner_create() {
  Scanner *scanner = malloc(sizeof(Scanner));
  /*scanner->stack = malloc(sizeof(char)*10);*/
  /*scanner->stack[0] = '\0';*/
  return scanner;
}


void tree_sitter_rst_external_scanner_destroy(void *payload) {
  if (payload != NULL) {
    /*
       Scanner *scanner = (Scanner *) payload;
       if (scanner->stack != NULL) {
       free(scanner->stack);
       }
       */
    free(payload);
  }
}


unsigned tree_sitter_rst_external_scanner_serialize(
    void *payload,
    char *buffer
) {
  /*
     Scanner * scanner = (Scanner *) payload;
     size_t i = 0;
     size_t stack_size = strlen(scanner->stack);
     memcpy(&buffer[i], scanner->stack, stack_size);
     i += stack_size;
     return i;
     */
  return 0;
}


void tree_sitter_rst_external_scanner_deserialize(
    void *payload,
    const char *buffer,
    unsigned length
) {
  /*
     if (length > 0) {
     Scanner *scanner = (Scanner *) payload;
     memcpy(scanner->stack, &buffer[0], length);
     }.
     */
}


bool tree_sitter_rst_external_scanner_scan(
    void *payload,
    TSLexer *lexer,
    const bool *valid_symbols
) {
  int32_t current = lexer->lookahead;
  int32_t previous = current;

  if (
      (valid_symbols[T_BLANKLINE] || valid_symbols[T_NEWLINE])
      && (current == '\n' || current == '\r')
  ) {
    lexer->advance(lexer, false);
    current = lexer->lookahead;

    if (is_newline(current)) {
      lexer->result_symbol = T_BLANKLINE;
      lexer->advance(lexer, false);
    } else {
      lexer->result_symbol = T_NEWLINE;
    }
    lexer->mark_end(lexer);
    return true;
  }

  if (is_numeric_bullet(current) && valid_symbols[T_NUMERIC_BULLET]) {
    return parse_enumerated_list_bullet(lexer, valid_symbols);
  }

  if (is_char_bullet(current) && valid_symbols[T_CHAR_BULLET]) {
    return parse_list_bullet(lexer, valid_symbols);
  }

  if (is_inline_markup_start_char(current)
      && (valid_symbols[T_EMPHASIS]
          || valid_symbols[T_STRONG]
          || valid_symbols[T_INTERPRETED_TEXT]
          || valid_symbols[T_LITERAL]
          || valid_symbols[T_SUBSTITUTION_REFERENCE]
          || valid_symbols[T_INLINE_TARGET]
          || valid_symbols[T_FOOTNOTE_REFERENCE]
          || valid_symbols[T_REFERENCE])) {
    return parse_inline_markup(lexer, valid_symbols);
  }

  /*
  if (!is_space(current) && valid_symbols[T_REFERENCE]) {
    return parse_inline_reference(lexer, valid_symbols);
  }
  */

  if (!is_space(current) && valid_symbols[T_TEXT]) {
    return parse_text(lexer, valid_symbols);
  }

  return false;
}
