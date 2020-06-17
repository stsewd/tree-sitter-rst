#include "tree_sitter_rst/parser.h"

#include "tree_sitter_rst/tokens.h"
#include "tree_sitter_rst/utils.h"


bool parse_list_bullet(TSLexer *lexer, const bool *valid_symbols) {
  int32_t current = lexer->lookahead;
  int32_t previous = current;

  lexer->advance(lexer, false);
  previous = current;
  current = lexer->lookahead;
  if (is_space(current)) {
    lexer->mark_end(lexer);
    lexer->result_symbol = T_CHAR_BULLET;
    return true;
  }
  return false;
}


bool parse_enumerated_list_bullet(TSLexer *lexer, const bool *valid_symbols) {
  int32_t current = lexer->lookahead;
  int32_t previous = current;

  lexer->advance(lexer, false);
  previous = current;
  current = lexer->lookahead;

  if (is_numeric_bullet_simple(previous)) {
    while (is_numeric_bullet_simple(current) && current != '#') {
      lexer->advance(lexer, false);
      previous = current;
      current = lexer->lookahead;
    }
  } else if (is_numeric_bullet_abc_lower(previous)) {
    if (is_numeric_bullet_roman_lower(previous)) {
      while (is_numeric_bullet_roman_lower(current)) {
        lexer->advance(lexer, false);
        previous = current;
        current = lexer->lookahead;
      }
    }
  } else if (is_numeric_bullet_abc_upper(previous)) {
    if (is_numeric_bullet_roman_upper(previous)) {
      while (is_numeric_bullet_roman_upper(current)) {
        lexer->advance(lexer, false);
        previous = current;
        current = lexer->lookahead;
      }
    }
  } else {
    return false;
  }

  if (current == '.' || current == ')') {
    lexer->advance(lexer, false);
    previous = current;
    current = lexer->lookahead;
    if (is_space(current)) {
      lexer->result_symbol = T_NUMERIC_BULLET;
      lexer->mark_end(lexer);
      return true;
    }
  }
  return false;
}


bool parse_inline_markup(TSLexer *lexer, const bool *valid_symbols) {
  int32_t current = lexer->lookahead;
  int32_t previous = current;
  int32_t end_char = current;

  // First character can't be a white space
  lexer->advance(lexer, false);
  previous = current;
  current = lexer->lookahead;
  if (is_space(current)) {
    if (valid_symbols[T_TEXT]) {
      lexer->result_symbol = T_TEXT;
      lexer->mark_end(lexer);
      return true;
    }
    return false;
  }

  bool is_double_char = false;

  if (
      current == end_char
      && is_inline_markup_double_char(current)
      && (valid_symbols[T_STRONG] || valid_symbols[T_LITERAL])
  ) {
    is_double_char = true;
    lexer->advance(lexer, false);
    previous = current;
    current = lexer->lookahead;
  }

  int consumed_chars = 0;
  bool word_found = false;
  bool is_escaped = false;

  while (!is_newline(current)) {
    // Mark the end of the word
    if (!word_found && is_space(current)) {
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

    // Check if it's a terminal character
    if (
        consumed_chars > 0
        && !is_space(previous)
        && is_inline_markup_single_char(current)
        // Literal is the only inline markup dot doesn't care if the previous char is '\'
        && (!is_escaped || (end_char == '`' && is_double_char && valid_symbols[T_LITERAL]))
    ) {
      previous = current;
      current = lexer->lookahead;
      if (is_double_char) {
        if (current == end_char) {
          lexer->advance(lexer, false);
          previous = current;
          current = lexer->lookahead;
          consumed_chars++;
          if (is_space(current) || is_end_char(current)) {
            if (previous == '*') {
              lexer->result_symbol = T_STRONG;
            } else if (previous == '`') {
              lexer->result_symbol = T_LITERAL;
            }
            lexer->mark_end(lexer);
            return true;
          }
        }
      } else if (
          valid_symbols[T_EMPHASIS]
          || valid_symbols[T_INTERPRETED_TEXT]
          || valid_symbols[T_SUBSTITUTION_REFERENCE]
      ) {
        if (is_space(current) || is_end_char(current)) {
          if (previous == '*') {
            lexer->result_symbol = T_EMPHASIS;
          } else if (previous == '`') {
            lexer->result_symbol = T_INTERPRETED_TEXT;
          } else if (previous == '|') {
            lexer->result_symbol = T_SUBSTITUTION_REFERENCE;
          }
          lexer->mark_end(lexer);
          return true;
        }
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

  return false;
}


bool parse_text(TSLexer *lexer, const bool *valid_symbols) {
  int32_t current = lexer->lookahead;
  int32_t previous = current;
  int consumed_chars = 0;

  while (!is_space(current)) {
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
  return false;
}
