#include "tree_sitter_rst/parser.h"

#include "tree_sitter_rst/tokens.h"
#include "tree_sitter_rst/chars.h"


bool parse_line(TSLexer *lexer, const bool *valid_symbols) {
  int32_t previous = lexer->lookahead;
  lexer->advance(lexer, false);
  lexer->mark_end(lexer);
  int32_t current = lexer->lookahead;

  if (previous == 0) {
    return false;
  }

  while (!is_newline(current)) {
    if (!is_space(current)) {
      if (valid_symbols[T_NEWLINE]) {
        lexer->result_symbol = T_NEWLINE;
        return true;
      }
      return false;
    }
    lexer->advance(lexer, false);
    previous = current;
    current = lexer->lookahead;
  }

  if (valid_symbols[T_BLANKLINE]) {
    lexer->advance(lexer, false);
    lexer->mark_end(lexer);
    lexer->result_symbol = T_BLANKLINE;
    return true;
  }

  return false;
}


bool parse_overline(TSLexer *lexer, const bool *valid_symbols) {
  int32_t adornment = lexer->lookahead;
  int32_t current = adornment;

  if (!is_adornment_char(current) || !valid_symbols[T_OVERLINE]) {
    return false;
  }

  int overline_length = 0;
  while (!is_newline(current)) {
    if (current != adornment) {
      if (overline_length == 1) {
        if (is_space(current) && is_char_bullet(adornment) && valid_symbols[T_CHAR_BULLET]) {
          lexer->mark_end(lexer);
          lexer->result_symbol = T_CHAR_BULLET;
          return true;
        }
        if ((current == '.' || current == ')') && is_numeric_bullet(adornment) && valid_symbols[T_NUMERIC_BULLET]) {
          lexer->advance(lexer, false);
          lexer->mark_end(lexer);
          lexer->result_symbol = T_NUMERIC_BULLET;
          return true;
        }
      }
      return false;
    }
    lexer->advance(lexer, false);
    current = lexer->lookahead;
    overline_length++;
  }
  lexer->mark_end(lexer);


  lexer->advance(lexer, false);
  current = lexer->lookahead;

  bool is_empty = true;
  while (!is_newline(current)) {
    if (!is_space(current)) {
      is_empty = false;
    }
    lexer->advance(lexer, false);
    current = lexer->lookahead;
  }

  if (is_empty) {
    return false;
  }

  lexer->advance(lexer, false);
  current = lexer->lookahead;

  int underline_length = 0;

  while (!is_newline(current)) {
    if (current != adornment) {
      return false;
    }
    lexer->advance(lexer, false);
    current = lexer->lookahead;
    underline_length++;
  }

  if (overline_length >= 1 && overline_length == underline_length) {
    lexer->result_symbol = T_OVERLINE;
    return true;
  }
}


bool parse_underline(TSLexer *lexer, const bool *valid_symbols) {
  int32_t adornment = lexer->lookahead;
  int32_t current = adornment;

  if (!is_adornment_char(current) || !valid_symbols[T_UNDERLINE]) {
    return false;
  }

  int underline_length = 0;
  while (!is_newline(current)) {
    if (current != adornment) {
      if (underline_length == 1) {
        if (is_space(current) && is_char_bullet(adornment) && valid_symbols[T_CHAR_BULLET]) {
          lexer->mark_end(lexer);
          lexer->result_symbol = T_CHAR_BULLET;
          return true;
        }
        if (current == '.' && is_numeric_bullet(adornment) && valid_symbols[T_NUMERIC_BULLET]) {
          lexer->advance(lexer, false);
          lexer->mark_end(lexer);
          lexer->result_symbol = T_NUMERIC_BULLET;
          return true;
        }
      }
      return false;
    }
    lexer->advance(lexer, false);
    current = lexer->lookahead;
    underline_length++;
  }
  if (underline_length >= 1) {
    lexer->mark_end(lexer);
    lexer->result_symbol = T_UNDERLINE;
    return true;
  }
  return false;
}


bool parse_char_bullet(TSLexer *lexer, const bool *valid_symbols) {
  int32_t current = lexer->lookahead;
  int32_t previous = current;

  if (!is_char_bullet(current) || !valid_symbols[T_CHAR_BULLET]) {
    return false;
  }

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


bool parse_numeric_bullet(TSLexer *lexer, const bool *valid_symbols) {
  int32_t current = lexer->lookahead;
  int32_t previous = current;

  if (!is_numeric_bullet(current) || !valid_symbols[T_NUMERIC_BULLET]) {
    return false;
  }

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
  int32_t previous = lexer->lookahead;
  lexer->advance(lexer, false);
  int32_t current = lexer->lookahead;

  bool is_emphasis = false;
  bool is_strong = false;
  bool is_interpreted_text = false;
  bool is_literal = false;
  bool is_substitution_reference = false;
  bool is_inline_target = false;
  bool is_footnote_reference = false;
  bool is_reference = false;

  if (previous == '*' && current == '*' && valid_symbols[T_STRONG]) {
    is_strong = true;
  } else if (previous == '*' && valid_symbols[T_EMPHASIS]) {
    is_emphasis = true;
  } else if (previous == '`' && current == '`' && valid_symbols[T_LITERAL]) {
    is_literal = true;
  } else if (previous == '`' && (valid_symbols[T_INTERPRETED_TEXT] || valid_symbols[T_REFERENCE])) {
    is_interpreted_text = true;
    is_reference = true;
  } else if (previous == '|' && valid_symbols[T_SUBSTITUTION_REFERENCE]) {
    is_substitution_reference = true;
  } else if (previous == '_' && current == '`' && valid_symbols[T_INLINE_TARGET]) {
    is_inline_target = true;
  } else if (previous == '[' && valid_symbols[T_FOOTNOTE_REFERENCE]) {
    is_footnote_reference = true;
  }

  if (is_strong || is_literal || is_inline_target) {
    lexer->advance(lexer, false);
    previous = current;
    current = lexer->lookahead;
  }

  // Next character can't be a white space
  if (is_space(current)) {
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
        && is_inline_markup_end_char(current)
        // Literal is the only inline markup that doesn't care if the previous char is '\'
        && (!is_escaped || is_literal)
    ) {
      previous = current;
      current = lexer->lookahead;

      bool is_valid = true;
      bool advance = false;

      if (is_strong && previous == '*' && current == '*') {
        lexer->result_symbol = T_STRONG;
        advance = true;
      } else if (is_emphasis && previous == '*') {
        lexer->result_symbol = T_EMPHASIS;
      } else if (is_literal && previous == '`' && current == '`') {
        lexer->result_symbol = T_LITERAL;
        advance = true;
      } else if (is_inline_target && previous == '`') {
        lexer->result_symbol = T_INLINE_TARGET;
      } else if (is_reference && previous == '`' && current == '_') {
        lexer->result_symbol = T_REFERENCE;

        // Check for annonymous references
        lexer->advance(lexer, false);
        previous = current;
        current = lexer->lookahead;
        consumed_chars++;
        if (current == '_') {
          advance = true;
        }
      } else if (is_interpreted_text && previous == '`') {
        lexer->result_symbol = T_INTERPRETED_TEXT;
      } else if (is_footnote_reference && previous == ']' && current == '_') {
        lexer->result_symbol = T_FOOTNOTE_REFERENCE;
        advance = true;
      } else if (is_substitution_reference && previous == '|') {
        lexer->result_symbol = T_SUBSTITUTION_REFERENCE;
      } else {
        is_valid = false;
      }

      if (advance) {
        lexer->advance(lexer, false);
        previous = current;
        current = lexer->lookahead;
        consumed_chars++;
      }

      // check if the next one is whitespace
      if (is_valid && is_space(current) || is_end_char(current)) {
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

  return false;
}


bool parse_inline_reference(TSLexer *lexer, const bool *valid_symbols) {
  int32_t previous = lexer->lookahead;

  if (!is_alphanumeric(previous) || !valid_symbols[T_REFERENCE]) {
    return false;
  }

  lexer->advance(lexer, false);
  int32_t current = lexer->lookahead;

  while (1) {
    if (is_space(current) || is_end_char(current)) {
      if (previous == '_') {
        lexer->mark_end;
        lexer->result_symbol = T_REFERENCE;
        return true;
      }
      break;
    }

    if (previous == '_' && current == '_') {
      lexer->advance(lexer, false);
      previous = current;
      current = lexer->lookahead;
      if (is_space(current) || is_end_char(current)) {
        lexer->mark_end;
        lexer->result_symbol = T_REFERENCE;
        return true;
      }
      return false;
    }

    if (
        is_internal_reference_char(current) && is_internal_reference_char(previous)
        || (!is_alphanumeric(current) && !is_internal_reference_char(current))
    ) {
      return false;
    }

    lexer->advance(lexer, false);
    previous = current;
    current = lexer->lookahead;
  }

  if (valid_symbols[T_TEXT]) {
    lexer->mark_end(lexer);
    lexer->result_symbol = T_TEXT;
    return true;
  }

  return false;
}


bool parse_text(TSLexer *lexer, const bool *valid_symbols) {
  int32_t previous = lexer->lookahead;
  lexer->advance(lexer, false);
  int32_t current = lexer->lookahead;

  while (!is_space(current) && !is_start_char(previous)) {
    lexer->advance(lexer, false);
    previous = current;
    current = lexer->lookahead;
  }

  if (valid_symbols[T_TEXT]) {
    lexer->mark_end(lexer);
    lexer->result_symbol = T_TEXT;
    return true;
  }
  return false;
}
