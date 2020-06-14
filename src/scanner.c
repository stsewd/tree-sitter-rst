#include <tree_sitter/parser.h>

#include <ctype.h>
#include <string.h>
#include <stdbool.h>
#include <stdio.h>

#include "./tree_sitter_rst/utils.c"



enum TokenType {
  T_NEWLINE,
  T_BLANKLINE,

  T_TEXT,
  T_EMPHASIS,
};

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

  if ((valid_symbols[T_TEXT] || valid_symbols[T_EMPHASIS]) && current == '*') {

    // First character can't be a white space
    lexer->advance(lexer, false);
    current = lexer->lookahead;
    if (isspace(current) || is_newline(current)) {
      if (valid_symbols[T_TEXT]) {
        lexer->result_symbol = T_TEXT;
        lexer->mark_end(lexer);
        return true;
      }
      return false;
    }

    int consumed_chars = 0;
    bool word_found = false;
    bool is_escaped = false;

    while (!is_newline(current)) {
      // Mark the end of the word
      if (!word_found && isspace(current)) {
        word_found = true;
        lexer->mark_end(lexer);
      }

      // Skip escaped chars
      if (current == '\\') {
        is_escaped = true;
        lexer->advance(lexer, false);
        previous = current;
        current = lexer->lookahead;
        if (is_newline(current)) {
          break;
        }
      } else {
        is_escaped = false;
      }

      if (!word_found && is_start_char(current)) {
        word_found = true;
        lexer->advance(lexer, false);
        lexer->mark_end(lexer);

        previous = current;
        current = lexer->lookahead;
        consumed_chars++;
      }


      // Take a peak to the next char
      lexer->advance(lexer, false);

      // Check if it's a terminal *
      if (valid_symbols[T_EMPHASIS] && consumed_chars > 0 && current == '*' && !isspace(previous) && !is_escaped) {
        current = lexer->lookahead;
        if (is_newline(current) || isspace(current) || is_end_char(current)) {
          lexer->result_symbol = T_EMPHASIS;
          lexer->mark_end(lexer);
          return true;
        }
      }

      previous = current;
      current = lexer->lookahead;
      consumed_chars++;
    }

    if (valid_symbols[T_TEXT]) {
      lexer->result_symbol = T_TEXT;
      if (!word_found && is_newline(current)) {
        lexer->mark_end(lexer);
      }
      return true;
    }
  }

  if (valid_symbols[T_TEXT] && !is_newline(current) && !isspace(current)) {
    int consumed_chars = 0;
    while (!is_newline(current) && !isspace(current)) {
      lexer->advance(lexer, false);
      lexer->mark_end(lexer);
      consumed_chars ++;
      if (is_start_char(current)) {
        break;
      }
      current = lexer->lookahead;
    }
    if (consumed_chars > 0) {
      lexer->result_symbol = T_TEXT;
      return true;
    }
  }

  return false;
}
