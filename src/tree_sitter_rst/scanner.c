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

bool rst_scanner_scan(RSTScanner* scanner, TSLexer* lexer, const bool* valid_symbols)
{
  int32_t current = lexer->lookahead;

  if (current == 0) {
    return false;
  }

  if (current == '.' && valid_symbols[T_EXPLICIT_MARKUP_START]) {
    return parse_explict_markup_start(lexer, valid_symbols);
  }

  if (current == ':' && valid_symbols[T_FIELD_NAME]) {
    return parse_field_name(lexer, valid_symbols);
  }

  if (
      is_adornment_char(current)
      && (valid_symbols[T_OVERLINE] || valid_symbols[T_TRANSITION])) {
    return parse_overline(lexer, valid_symbols);
  }

  if (
      is_adornment_char(current)
      && (valid_symbols[T_UNDERLINE] || valid_symbols[T_TRANSITION])) {
    return parse_underline(lexer, valid_symbols);
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
          || valid_symbols[T_REFERENCE])) {
    return parse_inline_markup(lexer, valid_symbols);
  }

  if (!is_space(current) && (valid_symbols[T_REFERENCE] || valid_symbols[T_TEXT])) {
    return parse_inline_reference(lexer, valid_symbols) || parse_text(lexer, valid_symbols);
  }

  // TODO: improve this
  int indent = 0;
  int newlines = 0;
  while (true) {
    if (current == ' ' || current == '\v' || current == '\f') {
      indent += 1;
    } else if (current == '\t') {
      indent += 8;
    } else if (current == 0) {
      if (valid_symbols[T_DEDENT] && scanner->length > 0) {
        scanner->pop(scanner);
        lexer->advance(lexer, false);
        lexer->mark_end(lexer);
        lexer->result_symbol = T_DEDENT;
        return true;
      }
      if (valid_symbols[T_BLANKLINE]) {
        lexer->mark_end(lexer);
        lexer->result_symbol = T_BLANKLINE;
        return true;
      }
      return false;
    } else if (is_newline(current)) {
      newlines++;
      indent = 0;
    } else {
      break;
    }
    lexer->advance(lexer, true);
    current = lexer->lookahead;
  }

  if (newlines > 0) {
    int current_ident = scanner->back(scanner);
    if (indent > current_ident && valid_symbols[T_INDENT]) {
      scanner->push(scanner, indent);
      lexer->result_symbol = T_INDENT;
      return true;
    }
    if (indent < current_ident && valid_symbols[T_DEDENT]) {
      scanner->pop(scanner);
      lexer->result_symbol = T_DEDENT;
      return true;
    }

    if (newlines > 1 && valid_symbols[T_BLANKLINE]) {
      lexer->result_symbol = T_BLANKLINE;
      return true;
    }

    if (valid_symbols[T_NEWLINE]) {
      lexer->result_symbol = T_NEWLINE;
      return true;
    }
  }

  return false;
}
