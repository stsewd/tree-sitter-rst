#include "tree_sitter_rst/scanner.h"

#include <string.h>

#include "tree_sitter_rst/chars.c"
#include "tree_sitter_rst/parser.c"
#include "tree_sitter_rst/tokens.h"

RSTScanner* new_rst_scanner()
{
  RSTScanner* scanner = malloc(sizeof(RSTScanner));
  scanner->indent_stack = malloc(sizeof(int) * RST_SCANNER_STACK_MAX_CAPACITY);
  scanner->length = 0;

  scanner->push = rst_scanner_push;
  scanner->pop = rst_scanner_pop;
  scanner->back = rst_scanner_back;
  scanner->serialize = rst_scanner_serialize;
  scanner->deserialize = rst_scanner_deserialize;
  scanner->scan = rst_scanner_scan;

  return scanner;
}

void destroy_rst_scanner(RSTScanner* scanner)
{
  free(scanner->indent_stack);
  free(scanner);
}

void rst_scanner_push(RSTScanner* scanner, int value)
{
  if (scanner->length >= RST_SCANNER_STACK_MAX_CAPACITY) {
    return;
  }
  scanner->indent_stack[scanner->length++] = value;
}

int rst_scanner_pop(RSTScanner* scanner)
{
  if (scanner->length <= 0) {
    return 0;
  }
  return scanner->indent_stack[--scanner->length];
}

int rst_scanner_back(const RSTScanner* scanner)
{
  if (scanner->length <= 0) {
    return 0;
  }
  return scanner->indent_stack[scanner->length - 1];
}

unsigned rst_scanner_serialize(RSTScanner* scanner, char* buffer)
{
  unsigned i = scanner->length;
  if (i > TREE_SITTER_SERIALIZATION_BUFFER_SIZE) {
    i = TREE_SITTER_SERIALIZATION_BUFFER_SIZE;
  }
  memcpy(buffer, scanner->indent_stack, i);
  return i;
}

void rst_scanner_deserialize(RSTScanner* scanner, const char* buffer, unsigned length)
{
  memcpy((void*)buffer, scanner->indent_stack, length);
  scanner->length = length;
}

bool rst_scanner_scan(RSTScanner* scanner)
{
  TSLexer *lexer = scanner->lexer;
  const bool *valid_symbols = scanner->valid_symbols;

  int32_t current = lexer->lookahead;

  if (current == 0) {
    return false;
  }

  if (current == '.' && valid_symbols[T_EXPLICIT_MARKUP_START]) {
    return parse_explict_markup_start(scanner);
  }

  if (current == ':' && valid_symbols[T_FIELD_NAME]) {
    return parse_field_name(scanner);
  }

  if (
      is_adornment_char(current)
      && (valid_symbols[T_OVERLINE] || valid_symbols[T_TRANSITION])) {
    return parse_overline(scanner);
  }

  if (
      is_adornment_char(current)
      && (valid_symbols[T_UNDERLINE] || valid_symbols[T_TRANSITION])) {
    return parse_underline(scanner);
  }

  if (is_numeric_bullet(current) && valid_symbols[T_NUMERIC_BULLET]) {
    return parse_numeric_bullet(scanner);
  }

  if (is_char_bullet(current) && valid_symbols[T_CHAR_BULLET]) {
    return parse_char_bullet(scanner);
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
          || valid_symbols[T_REFERENCE])) {
    return parse_inline_markup(scanner);
  }

  if (!is_space(current) && (valid_symbols[T_REFERENCE] || valid_symbols[T_TEXT])) {
    return parse_inline_reference(scanner) || parse_text(scanner);
  }

  if (is_space(current)) {
    return parse_indent(scanner);
  }

  return false;
}
