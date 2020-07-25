#include "tree_sitter_rst/parser.h"

#include "tree_sitter_rst/chars.h"
#include "tree_sitter_rst/tokens.h"

bool parse_indent(RSTScanner* scanner)
{
  const bool* valid_symbols = scanner->valid_symbols;
  TSLexer* lexer = scanner->lexer;

  lexer->mark_end(lexer);

  int indent = 0;
  int newlines = 0;
  while (true) {
    if (scanner->lookahead == CHAR_SPACE
        || scanner->lookahead == CHAR_VERTICAL_TAB
        || scanner->lookahead == CHAR_FORM_FEED) {
      indent += 1;
    } else if (scanner->lookahead == CHAR_TAB) {
      indent += TAB_STOP;
    } else if (scanner->lookahead == CHAR_EOF) {
      indent = 0;
      newlines++;
      break;
    } else if (scanner->lookahead == CHAR_CARRIAGE_RETURN) {
      indent = 0;
    } else if (scanner->lookahead == CHAR_NEWLINE) {
      newlines++;
      indent = 0;
    } else {
      break;
    }
    scanner->skip(scanner);
  }

  int current_indent = scanner->back(scanner);
  if (indent > current_indent && valid_symbols[T_INDENT]) {
    scanner->push(scanner, indent);
    lexer->result_symbol = T_INDENT;
    return true;
  }
  if (newlines) {
    if (indent < current_indent && valid_symbols[T_DEDENT]) {
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

bool parse_overline(RSTScanner* scanner)
{
  const bool* valid_symbols = scanner->valid_symbols;
  TSLexer* lexer = scanner->lexer;
  int32_t adornment = scanner->lookahead;

  if (!is_adornment_char(scanner->lookahead)
      || (!valid_symbols[T_OVERLINE] && !valid_symbols[T_TRANSITION])) {
    return false;
  }

  int overline_length = 0;
  while (true) {
    if (scanner->lookahead != adornment) {
      if (overline_length == 1) {
        if (is_space(scanner->lookahead)) {
          if (is_char_bullet(adornment) && valid_symbols[T_CHAR_BULLET]) {
            bool ok = parse_inner_list_element(scanner, 1, T_CHAR_BULLET);
            if (ok) {
              return true;
            }
          } else if (adornment == '|' && valid_symbols[T_LINE_BLOCK_MARK]) {
            bool ok = parse_inner_list_element(scanner, 1, T_LINE_BLOCK_MARK);
            if (ok) {
              return true;
            }
          }
        } else {
          if (adornment == '*' && valid_symbols[T_EMPHASIS]) {
            return parse_inner_inline_markup(scanner, IM_EMPHASIS);
          }
          if (adornment == '`' && (valid_symbols[T_INTERPRETED_TEXT] || valid_symbols[T_REFERENCE])) {
            return parse_inner_inline_markup(scanner, IM_INTERPRETED_TEXT | IM_REFERENCE);
          }
          if (adornment == '|' && valid_symbols[T_SUBSTITUTION_REFERENCE]) {
            return parse_inner_inline_markup(scanner, IM_SUBSTITUTION_REFERENCE);
          }
          if (adornment == '_' && scanner->lookahead == '`' && valid_symbols[T_INLINE_TARGET]) {
            return parse_inner_inline_markup(scanner, IM_INLINE_TARGET);
          }
          if (adornment == '[' && valid_symbols[T_FOOTNOTE_REFERENCE]) {
            return parse_inner_inline_markup(scanner, IM_FOOTNOTE_REFERENCE);
          }
          if (adornment == '#'
              && (scanner->lookahead == '.' || scanner->lookahead == ')')) {
            scanner->advance(scanner);
            bool ok = parse_inner_list_element(scanner, 2, T_NUMERIC_BULLET);
            if (ok) {
              return true;
            }
          }
          if (adornment == '(' && is_numeric_bullet(scanner->lookahead)) {
            return parse_inner_numeric_bullet(scanner, true);
          }
        }
      } else if (overline_length >= 2) {
        if (is_space(scanner->lookahead)) {
          if (overline_length == 3
              && adornment == '>'
              && valid_symbols[T_DOCTEST_BLOCK_MARK]) {
            lexer->mark_end(lexer);
            lexer->result_symbol = T_DOCTEST_BLOCK_MARK;
            return true;
          }
          if (overline_length == 2 && adornment == '.') {
            return parse_inner_list_element(scanner, 2, T_EXPLICIT_MARKUP_START);
          }
          if (overline_length == 2
              && adornment == '_'
              && valid_symbols[T_ANONYMOUS_TARGET_MARK]) {
            lexer->mark_end(lexer);
            lexer->result_symbol = T_ANONYMOUS_TARGET_MARK;
            return true;
          }
          if (overline_length == 2
              && adornment == ':'
              && valid_symbols[T_LITERAL_BLOCK_MARK]) {
            return parse_innner_literal_block_mark(scanner);
          }
        } else {
          if (adornment == '*' && valid_symbols[T_STRONG]) {
            return parse_inner_inline_markup(scanner, IM_STRONG);
          }
          if (adornment == '`' && valid_symbols[T_LITERAL]) {
            return parse_inner_inline_markup(scanner, IM_LITERAL);
          }
          if (adornment == '|' && valid_symbols[T_SUBSTITUTION_REFERENCE]) {
            return parse_inner_inline_markup(scanner, IM_SUBSTITUTION_REFERENCE);
          }
          if (adornment == '[' && valid_symbols[T_FOOTNOTE_REFERENCE]) {
            return parse_inner_inline_markup(scanner, IM_FOOTNOTE_REFERENCE);
          }
        }
      }
      if (is_space(scanner->lookahead)) {
        break;
      }
      return parse_text(scanner);
    }
    scanner->advance(scanner);
    overline_length++;
  }

  // Mark the transition token
  lexer->mark_end(lexer);

  // Consume all whitespaces.
  while (is_space(scanner->lookahead) && !is_newline(scanner->lookahead)) {
    scanner->advance(scanner);
  }

  if (!is_newline(scanner->lookahead)) {
    if (valid_symbols[T_TEXT]) {
      lexer->result_symbol = T_TEXT;
      return true;
    }
    return false;
  }

  scanner->advance(scanner);

  bool is_empty = true;
  while (!is_newline(scanner->lookahead)) {
    if (!is_space(scanner->lookahead)) {
      is_empty = false;
    }
    scanner->advance(scanner);
  }

  if (is_empty) {
    // Transitions need to be at least 4 chars long
    if (overline_length >= 4 && valid_symbols[T_TRANSITION]) {
      lexer->result_symbol = T_TRANSITION;
      return true;
    }
    if (valid_symbols[T_TEXT]) {
      lexer->result_symbol = T_TEXT;
      return true;
    }
    return false;
  }

  scanner->advance(scanner);

  int underline_length = 0;

  while (!is_newline(scanner->lookahead)) {
    if (scanner->lookahead != adornment) {
      if (is_space(scanner->lookahead)) {
        break;
      }
      if (valid_symbols[T_TEXT]) {
        lexer->result_symbol = T_TEXT;
        return true;
      }
      return false;
    }
    scanner->advance(scanner);
    underline_length++;
  }

  // Consume all whitespaces.
  while (is_space(scanner->lookahead) && !is_newline(scanner->lookahead)) {
    scanner->advance(scanner);
  }

  if (!is_newline(scanner->lookahead)) {
    if (valid_symbols[T_TEXT]) {
      lexer->result_symbol = T_TEXT;
      return true;
    }
    return false;
  }

  // The overline_length and the underline_length length must match
  if (overline_length >= 1 && overline_length == underline_length) {
    lexer->result_symbol = T_OVERLINE;
    return true;
  }

  if (valid_symbols[T_TEXT]) {
    lexer->result_symbol = T_TEXT;
    return true;
  }
  return false;
}

bool parse_underline(RSTScanner* scanner)
{
  const bool* valid_symbols = scanner->valid_symbols;
  TSLexer* lexer = scanner->lexer;
  int32_t adornment = scanner->lookahead;

  if (!is_adornment_char(scanner->lookahead)
      || (!valid_symbols[T_UNDERLINE] && !valid_symbols[T_TRANSITION])) {
    return false;
  }

  int underline_length = 0;
  while (!is_newline(scanner->lookahead)) {
    if (scanner->lookahead != adornment) {
      if (is_space(scanner->lookahead)) {
        break;
      }
      return false;
    }
    scanner->advance(scanner);
    underline_length++;
  }

  lexer->mark_end(lexer);

  // Consume all whitespaces.
  while (is_space(scanner->lookahead) && !is_newline(scanner->lookahead)) {
    scanner->advance(scanner);
  }

  if (!is_newline(scanner->lookahead)) {
    if (valid_symbols[T_TEXT]) {
      lexer->result_symbol = T_TEXT;
      return true;
    }
    return false;
  }

  // Transitions need to be at least 4 chars long
  if (underline_length >= 4 && valid_symbols[T_TRANSITION]) {
    lexer->result_symbol = T_TRANSITION;
    return true;
  }

  if (underline_length >= 1 && valid_symbols[T_UNDERLINE]) {
    lexer->result_symbol = T_UNDERLINE;
    return true;
  }

  if (valid_symbols[T_TEXT]) {
    lexer->result_symbol = T_TEXT;
    return true;
  }
  return false;
}

bool parse_char_bullet(RSTScanner* scanner)
{
  const bool* valid_symbols = scanner->valid_symbols;
  TSLexer* lexer = scanner->lexer;

  if (!is_char_bullet(scanner->lookahead) || !valid_symbols[T_CHAR_BULLET]) {
    return false;
  }

  scanner->advance(scanner);
  bool ok = parse_inner_list_element(scanner, 1, T_CHAR_BULLET);
  if (ok) {
    return true;
  }

  return parse_text(scanner);
}

bool parse_numeric_bullet(RSTScanner* scanner)
{
  const bool* valid_symbols = scanner->valid_symbols;

  if (!valid_symbols[T_NUMERIC_BULLET]) {
    return false;
  }

  bool parenthesized = false;
  if (scanner->lookahead == '(') {
    scanner->advance(scanner);
    parenthesized = true;
  }

  if (is_numeric_bullet(scanner->lookahead)) {
    return parse_inner_numeric_bullet(scanner, parenthesized);
  }

  return false;
}

bool parse_inner_numeric_bullet(RSTScanner* scanner, bool parenthesized)
{
  const bool* valid_symbols = scanner->valid_symbols;
  TSLexer* lexer = scanner->lexer;

  if (!is_numeric_bullet(scanner->lookahead) || !valid_symbols[T_NUMERIC_BULLET]) {
    return false;
  }

  scanner->advance(scanner);
  int consumed_chars = 1;

  if (is_numeric_bullet_simple(scanner->previous)) {
    while (is_numeric_bullet_simple(scanner->lookahead) && scanner->lookahead != '#') {
      scanner->advance(scanner);
      consumed_chars++;
    }
  } else if (is_numeric_bullet_abc_lower(scanner->previous)) {
    if (is_numeric_bullet_roman_lower(scanner->previous)) {
      while (is_numeric_bullet_roman_lower(scanner->lookahead)) {
        scanner->advance(scanner);
        consumed_chars++;
      }
    }
  } else if (is_numeric_bullet_abc_upper(scanner->previous)) {
    if (is_numeric_bullet_roman_upper(scanner->previous)) {
      while (is_numeric_bullet_roman_upper(scanner->lookahead)) {
        scanner->advance(scanner);
        consumed_chars++;
      }
    }
  } else {
    return false;
  }

  if ((parenthesized && scanner->lookahead == ')')
      || (!parenthesized && (scanner->lookahead == '.' || scanner->lookahead == ')'))) {
    scanner->advance(scanner);
    consumed_chars++;
    consumed_chars += parenthesized ? 1 : 0;
    bool ok = parse_inner_list_element(scanner, consumed_chars, T_NUMERIC_BULLET);
    if (ok) {
      return true;
    }
  } else {
    if (is_alphanumeric(scanner->lookahead) && valid_symbols[T_REFERENCE]) {
      return parse_inline_reference(scanner);
    }
    if (valid_symbols[T_TEXT]) {
      lexer->mark_end(lexer);
      lexer->result_symbol = T_TEXT;
      return true;
    }
    return false;
  }
  return parse_text(scanner);
}

bool parse_explict_markup_start(RSTScanner* scanner)
{
  TSLexer* lexer = scanner->lexer;
  const bool* valid_symbols = scanner->valid_symbols;

  if (scanner->lookahead != '.' || !valid_symbols[T_EXPLICIT_MARKUP_START]) {
    return false;
  }

  scanner->advance(scanner);

  if (scanner->lookahead != '.') {
    return false;
  }

  scanner->advance(scanner);

  bool ok = parse_inner_list_element(scanner, 2, T_EXPLICIT_MARKUP_START);
  if (ok) {
    return true;
  }

  return false;
}

/// The previous token had to be a valid bullet.
bool parse_inner_list_element(RSTScanner* scanner, int consumed_chars, enum TokenType token_type)
{
  const bool* valid_symbols = scanner->valid_symbols;
  TSLexer* lexer = scanner->lexer;

  if (!valid_symbols[token_type]) {
    return false;
  }

  if (is_space(scanner->lookahead)) {
    lexer->mark_end(lexer);
    lexer->result_symbol = token_type;

    // Set indent level to the first non-whitespace char
    const int indent = scanner->back(scanner) + consumed_chars + get_indent_level(scanner);

    // If it's an empty line and T_EXPLICIT_MARKUP_START, then it's an empty comment.
    // Empty comments don't consume any following indented text.
    if (is_newline(scanner->lookahead) && token_type == T_EXPLICIT_MARKUP_START) {
      bool is_empty = true;
      scanner->advance(scanner);
      while (!is_newline(scanner->lookahead)) {
        if (!is_space(scanner->lookahead)) {
          is_empty = false;
          break;
        }
        scanner->advance(scanner);
      }
      if (is_empty && valid_symbols[T_EMPTY_COMMENT]) {
        lexer->result_symbol = T_EMPTY_COMMENT;
        return true;
      }
    }

    scanner->push(scanner, indent);
    return true;
  }

  return false;
}

bool parse_label(RSTScanner* scanner)
{
  const bool* valid_symbols = scanner->valid_symbols;
  TSLexer* lexer = scanner->lexer;

  if (scanner->lookahead != '['
      || !(valid_symbols[T_FOOTNOTE_LABEL] || valid_symbols[T_CITATION_LABEL])) {
    return false;
  }
  scanner->advance(scanner);

  if (is_number(scanner->lookahead) && valid_symbols[T_FOOTNOTE_LABEL]) {
    while (is_number(scanner->lookahead)) {
      scanner->advance(scanner);
    }
    if (scanner->lookahead != ']' && valid_symbols[T_CITATION_LABEL]) {
      return parse_inner_label(scanner, T_CITATION_LABEL);
    }
  } else if (scanner->lookahead == '*' && valid_symbols[T_FOOTNOTE_LABEL]) {
    scanner->advance(scanner);
  } else if (scanner->lookahead == '#' && valid_symbols[T_FOOTNOTE_LABEL]) {
    scanner->advance(scanner);
    if (is_alphanumeric(scanner->lookahead)) {
      return parse_inner_label(scanner, T_FOOTNOTE_LABEL);
    }
  } else if (is_alphanumeric(scanner->lookahead) && valid_symbols[T_CITATION_LABEL]) {
    return parse_inner_label(scanner, T_CITATION_LABEL);
  } else {
    return false;
  }

  if (scanner->lookahead != ']') {
    return false;
  }

  scanner->advance(scanner);

  if (is_space(scanner->lookahead)) {
    lexer->mark_end(lexer);
    lexer->result_symbol = T_FOOTNOTE_LABEL;
    return true;
  }

  return false;
}

bool parse_inner_label(RSTScanner* scanner, enum TokenType token_type)
{
  const bool* valid_symbols = scanner->valid_symbols;
  TSLexer* lexer = scanner->lexer;

  if (!(is_alphanumeric(scanner->lookahead) || is_internal_reference_char(scanner->lookahead))
      || !valid_symbols[token_type]) {
    return false;
  }

  bool internal_symbol = false;
  while (is_alphanumeric(scanner->lookahead) || is_internal_reference_char(scanner->lookahead)) {
    if (is_internal_reference_char(scanner->lookahead)) {
      if (internal_symbol) {
        return false;
      }
      internal_symbol = true;
    } else {
      internal_symbol = false;
    }
    scanner->advance(scanner);
  }

  if (scanner->lookahead != ']') {
    return false;
  }

  scanner->advance(scanner);

  if (is_space(scanner->lookahead)) {
    lexer->mark_end(lexer);
    lexer->result_symbol = token_type;
    return true;
  }

  return false;
}

bool parse_target_name(RSTScanner* scanner)
{
  const bool* valid_symbols = scanner->valid_symbols;
  TSLexer* lexer = scanner->lexer;

  if (scanner->lookahead != '_' || !valid_symbols[T_TARGET_NAME]) {
    return false;
  }

  scanner->advance(scanner);

  if (scanner->lookahead == '_') {
    scanner->advance(scanner);
  } else if (scanner->lookahead == '`') {
    // Find ending "`:".
    while (true) {
      if (scanner->lookahead == '`') {
        scanner->advance(scanner);
        if (scanner->lookahead == ':') {
          break;
        }
      }

      if (is_newline(scanner->lookahead)) {
        break;
      }

      scanner->advance(scanner);
    }
  } else {
    bool is_escaped = false;
    while (true) {
      if (scanner->lookahead == '\\') {
        scanner->advance(scanner);
        is_escaped = true;
      } else {
        is_escaped = false;
      }

      if (is_newline(scanner->lookahead)) {
        break;
      }

      if (scanner->lookahead == ':' && !is_escaped) {
        break;
      }
      scanner->advance(scanner);
    }
  }

  // check for ': '
  if (scanner->lookahead != ':') {
    return false;
  }

  scanner->advance(scanner);

  if (is_space(scanner->lookahead)) {
    lexer->mark_end(lexer);
    lexer->result_symbol = T_TARGET_NAME;
    return true;
  }

  return false;
}

bool parse_anonymous_target_mark(RSTScanner* scanner)
{
  const bool* valid_symbols = scanner->valid_symbols;
  TSLexer* lexer = scanner->lexer;

  if (scanner->lookahead != '_' || !valid_symbols[T_ANONYMOUS_TARGET_MARK]) {
    return false;
  }

  scanner->advance(scanner);

  if (scanner->lookahead != '_') {
    return false;
  }

  scanner->advance(scanner);

  if (is_space(scanner->lookahead)) {
    lexer->mark_end(lexer);
    lexer->result_symbol = T_ANONYMOUS_TARGET_MARK;
    return true;
  }

  return false;
}

bool parse_directive_mark(RSTScanner* scanner)
{
  const bool* valid_symbols = scanner->valid_symbols;
  TSLexer* lexer = scanner->lexer;

  if (!is_alphanumeric(scanner->lookahead) || !valid_symbols[T_DIRECTIVE_MARK]) {
    return false;
  }

  scanner->advance(scanner);

  bool internal_symbol = false;
  while (is_alphanumeric(scanner->lookahead) || is_internal_reference_char(scanner->lookahead)) {
    if (is_internal_reference_char(scanner->lookahead)) {
      if (internal_symbol) {
        break;
      }
      internal_symbol = true;
    } else {
      internal_symbol = false;
    }
    scanner->advance(scanner);
  }

  if (scanner->lookahead != ':' || scanner->previous != ':') {
    return parse_text(scanner);
  }
  scanner->advance(scanner);

  if (is_space(scanner->lookahead)) {
    lexer->mark_end(lexer);
    lexer->result_symbol = T_DIRECTIVE_MARK;
    return true;
  }

  return false;
}

bool parse_substitution_mark(RSTScanner* scanner)
{
  const bool* valid_symbols = scanner->valid_symbols;
  TSLexer* lexer = scanner->lexer;

  if (scanner->lookahead != '|' || !valid_symbols[T_SUBSTITUTION_MARK]) {
    return false;
  }

  scanner->advance(scanner);

  if (!is_space(scanner->lookahead)) {
    bool ok = parse_inner_inline_markup(scanner, IM_SUBSTITUTION_REFERENCE);
    if (ok
        && lexer->result_symbol == T_SUBSTITUTION_REFERENCE
        && is_space(scanner->lookahead)
        && !is_newline(scanner->lookahead)) {
      lexer->result_symbol = T_SUBSTITUTION_MARK;
      return true;
    }
  }
  return false;
}

bool parse_literal_block_mark(RSTScanner* scanner)
{
  const bool* valid_symbols = scanner->valid_symbols;
  TSLexer* lexer = scanner->lexer;

  if (scanner->lookahead != ':' || !valid_symbols[T_LITERAL_BLOCK_MARK]) {
    return false;
  }

  scanner->advance(scanner);

  if (scanner->lookahead != ':') {
    return false;
  }

  scanner->advance(scanner);

  return parse_innner_literal_block_mark(scanner);
}

bool parse_innner_literal_block_mark(RSTScanner* scanner)
{
  const bool* valid_symbols = scanner->valid_symbols;
  TSLexer* lexer = scanner->lexer;

  if (!is_space(scanner->lookahead) || !valid_symbols[T_LITERAL_BLOCK_MARK]) {
    return false;
  }

  lexer->mark_end(lexer);

  // Consume all whitespaces.
  while (is_space(scanner->lookahead) && !is_newline(scanner->lookahead)) {
    scanner->advance(scanner);
  }

  if (!is_newline(scanner->lookahead)) {
    return false;
  }

  scanner->advance(scanner);

  // Make sure there is blank line
  while (!is_newline(scanner->lookahead)) {
    if (!is_space(scanner->lookahead)) {
      return false;
    }
    scanner->advance(scanner);
  }

  // Check if it's a quoted literal block
  scanner->advance(scanner);
  int indent = get_indent_level(scanner);
  if (indent != scanner->back(scanner) || !is_adornment_char(scanner->lookahead)) {
    scanner->push(scanner, scanner->back(scanner) + 1);
  }
  lexer->result_symbol = T_LITERAL_BLOCK_MARK;
  return true;
}

bool parse_quoted_literal_block(RSTScanner* scanner)
{
  const bool* valid_symbols = scanner->valid_symbols;
  TSLexer* lexer = scanner->lexer;

  if (!is_adornment_char(scanner->lookahead) || !valid_symbols[T_QUOTED_LITERAL_BLOCK]) {
    return false;
  }

  int32_t adornment = scanner->lookahead;

  while (true) {
    while (!is_newline(scanner->lookahead)) {
      scanner->advance(scanner);
    }
    lexer->mark_end(lexer);

    scanner->advance(scanner);

    // Check if it's an empty line.
    int indent = get_indent_level(scanner);
    if (indent == 0 && scanner->lookahead != adornment) {
      break;
    }

    if (scanner->lookahead != adornment) {
      if (valid_symbols[T_TEXT]) {
        lexer->result_symbol = T_TEXT;
        return true;
      }
      return false;
    }
  }
  lexer->result_symbol = T_QUOTED_LITERAL_BLOCK;
  return true;
}

bool parse_line_block_mark(RSTScanner* scanner)
{
  const bool* valid_symbols = scanner->valid_symbols;
  TSLexer* lexer = scanner->lexer;

  if (scanner->lookahead != '|' || !valid_symbols[T_LINE_BLOCK_MARK]) {
    return false;
  }

  scanner->advance(scanner);

  if (is_space(scanner->lookahead)) {
    return parse_inner_list_element(scanner, 1, T_LINE_BLOCK_MARK);
  }

  return false;
}

bool parse_attribution_mark(RSTScanner* scanner)
{
  const bool* valid_symbols = scanner->valid_symbols;
  TSLexer* lexer = scanner->lexer;

  if (!is_attribution_mark(scanner->lookahead) || !valid_symbols[T_ATTRIBUTION_MARK]) {
    return false;
  }

  int consumed_chars = 0;
  if (scanner->lookahead == '-') {
    while (scanner->lookahead == '-') {
      consumed_chars++;
      scanner->advance(scanner);
    }

    if (consumed_chars < 2 || consumed_chars > 3) {
      return false;
    }
  } else {
    scanner->advance(scanner);
    consumed_chars++;
  }

  return parse_inner_list_element(scanner, consumed_chars, T_ATTRIBUTION_MARK);
}

bool parse_doctest_block_mark(RSTScanner* scanner)
{
  const bool* valid_symbols = scanner->valid_symbols;
  TSLexer* lexer = scanner->lexer;

  if (scanner->lookahead != '>' || !valid_symbols[T_DOCTEST_BLOCK_MARK]) {
    return false;
  }

  int consumed_chars = 0;
  while (scanner->lookahead == '>') {
    consumed_chars++;
    scanner->advance(scanner);
  }

  if (consumed_chars == 3 && is_space(scanner->lookahead)) {
    lexer->mark_end(lexer);
    lexer->result_symbol = T_DOCTEST_BLOCK_MARK;
    return true;
  }
  return false;
}

bool parse_inline_markup(RSTScanner* scanner)
{
  const bool* valid_symbols = scanner->valid_symbols;
  TSLexer* lexer = scanner->lexer;
  scanner->advance(scanner);

  unsigned type = 0;

  if (scanner->previous == '*' && scanner->lookahead == '*' && valid_symbols[T_STRONG]) {
    type = IM_STRONG;
  } else if (scanner->previous == '*' && valid_symbols[T_EMPHASIS]) {
    type = IM_EMPHASIS;
  } else if (scanner->previous == '`' && scanner->lookahead == '`' && valid_symbols[T_LITERAL]) {
    type = IM_LITERAL;
  } else if (scanner->previous == '`' && (valid_symbols[T_INTERPRETED_TEXT] || valid_symbols[T_REFERENCE])) {
    type = IM_INTERPRETED_TEXT | IM_REFERENCE;
  } else if (scanner->previous == '|' && valid_symbols[T_SUBSTITUTION_REFERENCE]) {
    type = IM_SUBSTITUTION_REFERENCE;
  } else if (scanner->previous == '_' && scanner->lookahead == '`' && valid_symbols[T_INLINE_TARGET]) {
    type = IM_INLINE_TARGET;
  } else if (scanner->previous == '[' && valid_symbols[T_FOOTNOTE_REFERENCE]) {
    type = IM_FOOTNOTE_REFERENCE;
  }

  // Skip one char for tokens that start with a double char
  if (type & (IM_STRONG | IM_LITERAL | IM_INLINE_TARGET)) {
    scanner->advance(scanner);
  }

  // The next character can't be a white space
  if (is_space(scanner->lookahead)) {
    if (type & IM_EMPHASIS) {
      bool ok = parse_inner_list_element(scanner, 1, T_CHAR_BULLET);
      if (ok) {
        return true;
      }
    }
    if (valid_symbols[T_TEXT]) {
      lexer->mark_end(lexer);
      lexer->result_symbol = T_TEXT;
      return true;
    }
    return false;
  }

  return parse_inner_inline_markup(scanner, type);
}

bool parse_inner_inline_markup(RSTScanner* scanner, unsigned type)
{
  const bool* valid_symbols = scanner->valid_symbols;
  TSLexer* lexer = scanner->lexer;

  int consumed_chars = 0;
  bool word_found = false;
  bool is_escaped = false;

  while (!is_newline(scanner->lookahead)) {
    // Skip escaped chars
    if (scanner->lookahead == '\\') {
      is_escaped = true;
      scanner->advance(scanner);
      if (is_newline(scanner->lookahead)) {
        break;
      }
    } else {
      is_escaped = false;
    }

    // Mark the end of the word if a space was found
    if (!word_found && is_space(scanner->lookahead)) {
      word_found = true;
      lexer->mark_end(lexer);
    }

    // Mark the end of the word if a start char was found
    if (!word_found && is_start_char(scanner->lookahead)) {
      word_found = true;
      lexer->mark_end(lexer);
    }

    // Check if it's a terminal character
    if (consumed_chars > 0 && !is_space(scanner->previous) && is_inline_markup_end_char(scanner->lookahead)
        // Literal is the only inline markup that doesn't care if the previous
        // char is '\'
        && (!is_escaped || (type & IM_LITERAL))) {
      scanner->advance(scanner);

      bool is_valid = true;
      bool advance = false;

      if ((type & IM_STRONG) && scanner->previous == '*' && scanner->lookahead == '*') {
        lexer->result_symbol = T_STRONG;
        while (scanner->lookahead == '*') {
          scanner->advance(scanner);
          consumed_chars++;
        }
      } else if ((type & IM_EMPHASIS) && scanner->previous == '*') {
        lexer->result_symbol = T_EMPHASIS;
      } else if ((type & IM_LITERAL) && scanner->previous == '`' && scanner->lookahead == '`') {
        lexer->result_symbol = T_LITERAL;
        while (scanner->lookahead == '`') {
          scanner->advance(scanner);
          consumed_chars++;
        }
      } else if ((type & IM_INLINE_TARGET) && scanner->previous == '`') {
        lexer->result_symbol = T_INLINE_TARGET;
      } else if ((type & IM_REFERENCE) && scanner->previous == '`' && scanner->lookahead == '_') {
        lexer->result_symbol = T_REFERENCE;

        // Check for annonymous references
        scanner->advance(scanner);
        consumed_chars++;
        if (scanner->lookahead == '_') {
          advance = true;
        }
      } else if ((type & IM_INTERPRETED_TEXT) && scanner->previous == '`') {
        lexer->result_symbol = T_INTERPRETED_TEXT;
      } else if ((type & IM_FOOTNOTE_REFERENCE) && scanner->previous == ']' && scanner->lookahead == '_') {
        lexer->result_symbol = T_FOOTNOTE_REFERENCE;
        advance = true;
      } else if ((type & IM_SUBSTITUTION_REFERENCE) && scanner->previous == '|') {
        lexer->result_symbol = T_SUBSTITUTION_REFERENCE;
      } else {
        is_valid = false;
      }

      if (advance) {
        scanner->advance(scanner);
        consumed_chars++;
      }

      // The next char should be a whitespace or an end char
      if (is_valid && is_space(scanner->lookahead) || is_end_char(scanner->lookahead)) {
        lexer->mark_end(lexer);
        return true;
      }
    } else {
      scanner->advance(scanner);
    }

    consumed_chars++;
  }

  if (valid_symbols[T_TEXT]) {
    lexer->result_symbol = T_TEXT;
    if (!word_found && is_newline(scanner->lookahead)) {
      lexer->mark_end(lexer);
    }
    return true;
  }

  return false;
}

bool parse_inline_reference(RSTScanner* scanner)
{
  const bool* valid_symbols = scanner->valid_symbols;
  TSLexer* lexer = scanner->lexer;

  if (!is_alphanumeric(scanner->lookahead) || !valid_symbols[T_REFERENCE]) {
    return false;
  }

  bool internal_symbol = false;
  while (is_alphanumeric(scanner->lookahead) || is_internal_reference_char(scanner->lookahead)) {
    if (is_internal_reference_char(scanner->lookahead)) {
      if (internal_symbol) {
        break;
      }
      // Mark the end of the worl?d.
      lexer->mark_end(lexer);
      internal_symbol = true;
    } else {
      internal_symbol = false;
    }
    scanner->advance(scanner);
  }

  // Only an annonymous reference can contain
  // and end with two consecutives '_'.
  if (scanner->lookahead == '_' && scanner->previous == '_') {
    scanner->advance(scanner);
  }

  if (scanner->previous == '_' && (is_space(scanner->lookahead) || is_end_char(scanner->lookahead))) {
    lexer->mark_end(lexer);
    lexer->result_symbol = T_REFERENCE;
    return true;
  }

  if (valid_symbols[T_TEXT]) {
    lexer->result_symbol = T_TEXT;
    return true;
  }

  return false;
}

bool parse_text(RSTScanner* scanner)
{
  TSLexer* lexer = scanner->lexer;
  const bool* valid_symbols = scanner->valid_symbols;
  if (!valid_symbols[T_TEXT]) {
    return false;
  }

  if (is_start_char(scanner->lookahead)) {
    scanner->advance(scanner);
    lexer->mark_end(lexer);
    lexer->result_symbol = T_TEXT;
    return true;
  }

  // Text tokens stop at a whitespace or start char
  while (!is_space(scanner->lookahead) && !is_start_char(scanner->lookahead)) {
    scanner->advance(scanner);
  }

  lexer->mark_end(lexer);
  lexer->result_symbol = T_TEXT;
  return true;
}
