#include <tree_sitter/parser.h>

#include <string.h>
#include <stdbool.h>
#include <stdio.h>


enum TokenType {
  T_EOL,
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
  bool is_eof = lexer->eof(lexer);
  if (is_eof) {
    return false;
  }
  if (valid_symbols[T_EOL]) {
    if (lexer->lookahead == '\n') {
      lexer->result_symbol = T_EOL;
      lexer->advance(lexer, false);
      lexer->mark_end(lexer);
      return true;
    }
  }
  return false;
}
