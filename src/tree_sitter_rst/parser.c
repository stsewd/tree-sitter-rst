#include "parser.h"

#include "chars.h"
#include "table.h"
#include "tokens.h"
#include <stdio.h>

static bool parse_indent(RSTScanner* scanner)
{
  const bool* valid_symbols = scanner->valid_symbols;
  TSLexer* lexer = scanner->lexer;

  lexer->mark_end(lexer);

  int indent = 0;
  int newlines = 0;
  while (true) {
    if (scanner->lookahead == CHAR_SPACE
        || scanner->lookahead == CHAR_VERTICAL_TAB
        || scanner->lookahead == CHAR_FORM_FEED
        || scanner->lookahead == CHAR_NBSP) {
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
  // T_INDENT is only valid when there are no blank lines preceding the
  // indented content. With blank lines, T_BLANKLINE must be emitted first.
  if (indent > current_indent && valid_symbols[T_INDENT]
      && (newlines == 0 || !valid_symbols[T_BLANKLINE])) {
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

    if ((newlines > 1 || scanner->lookahead == CHAR_EOF) && valid_symbols[T_BLANKLINE]) {
      lexer->result_symbol = T_BLANKLINE;
      return true;
    }

    if (newlines == 1 && valid_symbols[T_NEWLINE_INDENT] && indent > current_indent) {
      scanner->push(scanner, indent);
      lexer->result_symbol = T_NEWLINE_INDENT;
      return true;
    }

    if (valid_symbols[T_NEWLINE]) {
      lexer->result_symbol = T_NEWLINE;
      return true;
    }
  }
  return false;
}

static bool parse_overline(RSTScanner* scanner)
{
  const bool* valid_symbols = scanner->valid_symbols;
  TSLexer* lexer = scanner->lexer;
  int32_t adornment = scanner->lookahead;
  uint32_t start_col = lexer->get_column(lexer);

  if (!is_adornment_char(scanner->lookahead)
      || (!valid_symbols[T_OVERLINE] && !valid_symbols[T_TRANSITION])) {
    return false;
  }

  scanner->advance(scanner);
  lexer->mark_end(lexer);
  int overline_length = 1;

  while (true) {
    if (scanner->lookahead != adornment) {
      bool ok = fallback_adornment(scanner, adornment, overline_length);
      if (ok) {
        return true;
      }
      if (is_space(scanner->lookahead)) {
        break;
      }
      // '+' followed by '-'/'='/'+' is the start of a grid-table border
      // — try it before giving up to parse_text.
      if (adornment == '+' && overline_length == 1
          && (scanner->lookahead == '-' || scanner->lookahead == '='
              || scanner->lookahead == '+')) {
        if (try_grid_table_after_plus(scanner, start_col)) {
          return true;
        }
      }
      return parse_text(scanner, false);
    }
    scanner->advance(scanner);
    overline_length++;
  }

  // Mark the transition token
  lexer->mark_end(lexer);

  consume_inline_whitespace(scanner);

  if (!is_newline(scanner->lookahead)) {
    // '=== ===' is a simple-table border, not a section adornment with
    // trailing text. Try the table interpretation before parse_text.
    if (adornment == '=' && scanner->lookahead == '='
        && try_simple_table_after_run(scanner, start_col)) {
      return true;
    }
    return parse_text(scanner, false);
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
    return parse_text(scanner, false);
  }

  scanner->advance(scanner);

  int underline_length = 0;

  while (!is_newline(scanner->lookahead)) {
    if (scanner->lookahead != adornment) {
      if (is_space(scanner->lookahead)) {
        break;
      }
      return parse_text(scanner, false);
    }
    scanner->advance(scanner);
    underline_length++;
  }

  consume_inline_whitespace(scanner);

  if (!is_newline(scanner->lookahead)) {
    return parse_text(scanner, false);
  }

  // The overline_length and the underline_length length must match
  if (overline_length >= 1 && overline_length == underline_length) {
    lexer->result_symbol = T_OVERLINE;
    return true;
  }

  return parse_text(scanner, false);
}

static bool parse_underline(RSTScanner* scanner)
{
  const bool* valid_symbols = scanner->valid_symbols;
  TSLexer* lexer = scanner->lexer;
  int32_t adornment = scanner->lookahead;

  if (!is_adornment_char(scanner->lookahead)
      || (!valid_symbols[T_UNDERLINE] && !valid_symbols[T_TRANSITION])) {
    return false;
  }

  scanner->advance(scanner);
  lexer->mark_end(lexer);
  int underline_length = 1;

  while (!is_newline(scanner->lookahead)) {
    if (scanner->lookahead != adornment) {
      bool ok = fallback_adornment(scanner, adornment, underline_length);
      if (ok) {
        return true;
      }
      if (is_space(scanner->lookahead)) {
        break;
      }
      return parse_text(scanner, false);
    }
    scanner->advance(scanner);
    underline_length++;
  }

  // Mark the transition token
  lexer->mark_end(lexer);

  consume_inline_whitespace(scanner);

  if (!is_newline(scanner->lookahead)) {
    return parse_text(scanner, false);
  }

  // ``::`` on its own line is the literal-block marker, not a section
  // underline. The spec requires the underline to be at least as long as
  // the title text, and a two-character ``::`` is much more often a literal
  // block marker than a one- or two-letter title's adornment. Hand the token
  // off to ``parse_inner_literal_block_mark`` if the parser is willing to
  // accept it. Without this check ``parse_underline`` greedily consumes the
  // ``::`` and the indented block that follows is parsed as a block_quote
  // (#27).
  // Transitions need to be at least 4 chars long
  if (underline_length >= 4 && valid_symbols[T_TRANSITION]) {
    lexer->result_symbol = T_TRANSITION;
    return true;
  }

  // ``::`` on its own line is the literal-block marker, not a section
  // underline. The spec requires the underline to be at least as long as the
  // title text, and ``::`` only matches a one- or two-character title --
  // which essentially never appears in real documents, while the literal
  // block reading is everywhere. Refuse the underline so the parser doesn't
  // commit the preceding line to a title (#27). The subsequent indented
  // block still ends up inside the paragraph rather than a literal_block,
  // but that's a downstream limitation -- the structural fix here is what
  // unblocks correct section nesting.
  if (adornment == ':' && underline_length == 2) {
    return false;
  }

  if (underline_length >= 1 && valid_symbols[T_UNDERLINE]) {
    lexer->result_symbol = T_UNDERLINE;
    return true;
  }

  return parse_text(scanner, false);
}

/// If the adnorment is not valid, try to parse a different token.
///
/// Lots of adornments are also valid tokens, so we need to check for each one of them.
static bool fallback_adornment(RSTScanner* scanner, int32_t adornment, int adornment_length)
{
  const bool* valid_symbols = scanner->valid_symbols;
  TSLexer* lexer = scanner->lexer;

  if (adornment_length == 1) {
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
      if (adornment == ':' && (valid_symbols[T_ROLE_NAME_PREFIX] || valid_symbols[T_ROLE_NAME_SUFFIX])) {
        bool ok = parse_inner_role(scanner);
        if (ok) {
          return true;
        }
        return parse_text(scanner, false);
      }
      if (adornment == ':' && valid_symbols[T_FIELD_MARK]) {
        bool ok = parse_inner_field_mark(scanner);
        if (ok) {
          return true;
        }
        return parse_text(scanner, false);
      }
      if (adornment == '`' && (valid_symbols[T_INTERPRETED_TEXT] || valid_symbols[T_INTERPRETED_TEXT_PREFIX])) {
        return parse_inner_inline_markup(scanner, IM_INTERPRETED_TEXT | IM_INTERPRETED_TEXT_PREFIX);
      }
      if (adornment == '|' && valid_symbols[T_SUBSTITUTION_REFERENCE]) {
        return parse_inner_inline_markup(scanner, IM_SUBSTITUTION_REFERENCE);
      }
      if (adornment == '_' && scanner->lookahead == '`' && valid_symbols[T_INLINE_TARGET]) {
        return parse_inner_inline_markup(scanner, IM_INLINE_TARGET);
      }
      if (adornment == '[' && (valid_symbols[T_FOOTNOTE_REFERENCE] || valid_symbols[T_CITATION_REFERENCE])) {
        return parse_inner_inline_markup(scanner, IM_FOOTNOTE_REFERENCE | IM_CITATION_REFERENCE);
      }
      if (adornment == '#'
          && (scanner->lookahead == '.' || scanner->lookahead == ')')) {
        scanner->advance(scanner);
        bool ok = parse_inner_list_element(scanner, 2, T_NUMERIC_BULLET);
        if (ok) {
          return true;
        }
      }
      if (adornment == '(' && is_numeric_bullet(scanner->lookahead) && valid_symbols[T_NUMERIC_BULLET]) {
        return parse_inner_numeric_bullet(scanner, true);
      }
    }
  } else if (adornment_length >= 2) {
    if (is_space(scanner->lookahead)) {
      if (adornment_length == 3
          && adornment == '>'
          && valid_symbols[T_DOCTEST_BLOCK_MARK]) {
        lexer->mark_end(lexer);
        lexer->result_symbol = T_DOCTEST_BLOCK_MARK;
        return true;
      }
      if (adornment_length == 2 && adornment == '.') {
        return parse_inner_list_element(scanner, 2, T_EXPLICIT_MARKUP_START);
      }
      if (adornment_length == 2
          && adornment == '_'
          && valid_symbols[T_ANONYMOUS_TARGET_MARK]) {
        lexer->mark_end(lexer);
        lexer->result_symbol = T_ANONYMOUS_TARGET_MARK;
        return true;
      }
      if (adornment_length == 2
          && adornment == ':'
          && (valid_symbols[T_LITERAL_INDENTED_BLOCK_MARK] || valid_symbols[T_LITERAL_QUOTED_BLOCK_MARK])) {
        return parse_inner_literal_block_mark(scanner);
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
      if (adornment == '[' && (valid_symbols[T_FOOTNOTE_REFERENCE] || valid_symbols[T_CITATION_REFERENCE])) {
        return parse_inner_inline_markup(scanner, IM_FOOTNOTE_REFERENCE | IM_CITATION_REFERENCE);
      }
    }
  }
  return false;
}

static bool parse_char_bullet(RSTScanner* scanner)
{
  const bool* valid_symbols = scanner->valid_symbols;

  if (!is_char_bullet(scanner->lookahead) || !valid_symbols[T_CHAR_BULLET]) {
    return false;
  }

  scanner->advance(scanner);
  bool ok = parse_inner_list_element(scanner, 1, T_CHAR_BULLET);
  if (ok) {
    return true;
  }

  return parse_text(scanner, true);
}

static bool parse_numeric_bullet(RSTScanner* scanner)
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

static bool parse_inner_numeric_bullet(RSTScanner* scanner, bool parenthesized)
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
    if (is_abc(scanner->lookahead) && valid_symbols[T_STANDALONE_HYPERLINK]) {
      return parse_inner_standalone_hyperlink(scanner);
    }
    if (is_alphanumeric(scanner->lookahead) && valid_symbols[T_REFERENCE]) {
      return parse_reference(scanner);
    }
    if (valid_symbols[T_TEXT]) {
      lexer->mark_end(lexer);
      lexer->result_symbol = T_TEXT;
      return true;
    }
    return false;
  }
  return parse_text(scanner, true);
}

static bool parse_explict_markup_start(RSTScanner* scanner)
{
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

static bool parse_inner_list_element(RSTScanner* scanner, int consumed_chars, enum TokenType token_type)
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
    int indent = scanner->back(scanner) + consumed_chars + get_indent_level(scanner);

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
    } else if (token_type == T_EXPLICIT_MARKUP_START) {
      advance_to_next_line(scanner);

      // The first non-empty line after the marker
      // determines the indentation of the body.
      indent = skip_blank_lines_get_indent(scanner);
      if (indent <= scanner->back(scanner)) {
        indent = scanner->back(scanner) + 1;
      }
    } else if (token_type == T_NUMERIC_BULLET) {
      // Check if the next line is an underline.
      // In that case, the list item is just a normal text from a title,
      // the underline must be at least as long as the title
      // https://github.com/stsewd/tree-sitter-rst/issues/30.

      // Go to the next line.
      consumed_chars = indent;
      while (!is_newline(scanner->lookahead)) {
        consumed_chars++;
        scanner->advance(scanner);
      }
      scanner->advance(scanner);

      // Check if that line is a valid underline.
      int32_t adornment = scanner->lookahead;
      int adornment_length = 0;
      if (is_adornment_char(adornment)) {
        while (true) {
          if (is_newline(scanner->lookahead)) {
            break;
          }
          if (scanner->lookahead != adornment) {
            adornment_length = -1;
            break;
          }
          adornment_length++;
          scanner->advance(scanner);
        }
      }
      if (adornment_length > 0 && adornment_length >= consumed_chars) {
        return parse_text(scanner, false);
      }
    }

    scanner->push(scanner, indent);
    return true;
  }

  return false;
}

static bool parse_field_mark(RSTScanner* scanner)
{
  const bool* valid_symbols = scanner->valid_symbols;
  TSLexer* lexer = scanner->lexer;

  if (scanner->lookahead != ':' || !valid_symbols[T_FIELD_MARK]) {
    return false;
  }

  scanner->advance(scanner);
  lexer->mark_end(lexer);

  if (is_space(scanner->lookahead)) {
    return parse_text(scanner, true);
  }

  bool ok = parse_inner_field_mark(scanner);
  if (ok) {
    return true;
  }
  return parse_text(scanner, false);
}

static bool parse_inner_field_mark(RSTScanner* scanner)
{
  const bool* valid_symbols = scanner->valid_symbols;
  TSLexer* lexer = scanner->lexer;

  if (!valid_symbols[T_FIELD_MARK]) {
    return false;
  }

  bool is_escaped = false;
  while (!is_newline(scanner->lookahead)) {
    if (scanner->lookahead == '/') {
      scanner->advance(scanner);
      is_escaped = true;
    } else {
      is_escaped = false;
    }

    if (scanner->lookahead == ':' && !is_space(scanner->previous) && !is_escaped) {
      scanner->advance(scanner);
      if (is_space(scanner->lookahead)) {
        break;
      }
    }

    scanner->advance(scanner);
  }

  if (scanner->previous == ':' && is_space(scanner->lookahead)) {
    lexer->result_symbol = T_FIELD_MARK;
    return true;
  }
  return false;
}

static bool parse_field_mark_end(RSTScanner* scanner)
{
  const bool* valid_symbols = scanner->valid_symbols;
  TSLexer* lexer = scanner->lexer;

  if (scanner->lookahead != ':' || !valid_symbols[T_FIELD_MARK_END]) {
    return false;
  }

  scanner->advance(scanner);
  lexer->mark_end(lexer);

  if (is_space(scanner->lookahead)) {
    // Consume all whitespaces.
    get_indent_level(scanner);
    advance_to_next_line(scanner);

    // The first non-empty line after the field name marker
    // determines the indentation of the field body.
    int indent = skip_blank_lines_get_indent(scanner);
    if (indent > scanner->back(scanner)) {
      scanner->push(scanner, indent);
    } else {
      scanner->push(scanner, scanner->back(scanner) + 1);
    }

    lexer->result_symbol = T_FIELD_MARK_END;
    return true;
  }

  return parse_text(scanner, false);
}

static bool parse_label(RSTScanner* scanner)
{
  const bool* valid_symbols = scanner->valid_symbols;
  TSLexer* lexer = scanner->lexer;

  if (scanner->lookahead != '['
      || !(valid_symbols[T_FOOTNOTE_LABEL] || valid_symbols[T_CITATION_LABEL])) {
    return false;
  }
  scanner->advance(scanner);
  unsigned type = parse_inner_label_name(scanner);
  if ((type == IM_CITATION_REFERENCE && valid_symbols[T_CITATION_LABEL])
      || (type == IM_FOOTNOTE_REFERENCE && valid_symbols[T_FOOTNOTE_LABEL])) {
    scanner->advance(scanner);
    if (is_space(scanner->lookahead)) {
      lexer->mark_end(lexer);
      if (type == IM_CITATION_REFERENCE) {
        lexer->result_symbol = T_CITATION_LABEL;
      } else if (type == IM_FOOTNOTE_REFERENCE) {
        lexer->result_symbol = T_FOOTNOTE_LABEL;
      }
      return true;
    }
  }

  return false;
}

static unsigned parse_inner_label_name(RSTScanner* scanner)
{
  unsigned type = IM_NONE;
  if (is_number(scanner->lookahead)) {
    while (is_number(scanner->lookahead)) {
      scanner->advance(scanner);
    }
    if (scanner->lookahead == ']') {
      type = IM_FOOTNOTE_REFERENCE;
    } else {
      if (parse_inner_alphanumeric_label(scanner)) {
        type = IM_CITATION_REFERENCE;
      }
    }
  } else if (scanner->lookahead == '*') {
    type = IM_FOOTNOTE_REFERENCE;
    scanner->advance(scanner);
  } else if (scanner->lookahead == '#') {
    scanner->advance(scanner);
    if (scanner->lookahead == ']') {
      type = IM_FOOTNOTE_REFERENCE;
    } else if (is_alphanumeric(scanner->lookahead)) {
      if (parse_inner_alphanumeric_label(scanner)) {
        type = IM_FOOTNOTE_REFERENCE;
      }
    }
  } else if (is_alphanumeric(scanner->lookahead)) {
    if (parse_inner_alphanumeric_label(scanner)) {
      type = IM_CITATION_REFERENCE;
    }
  } else {
    return IM_NONE;
  }

  if (scanner->lookahead == ']') {
    return type;
  }

  return IM_NONE;
}

static bool parse_inner_alphanumeric_label(RSTScanner* scanner)
{
  if (!(is_alphanumeric(scanner->lookahead)
          || is_internal_reference_char(scanner->lookahead))) {
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

  if (scanner->lookahead == ']') {
    return true;
  }

  return false;
}

static bool parse_target_name(RSTScanner* scanner)
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

static bool parse_anonymous_target_mark(RSTScanner* scanner)
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

static bool parse_directive_name(RSTScanner* scanner)
{
  const bool* valid_symbols = scanner->valid_symbols;
  TSLexer* lexer = scanner->lexer;

  if (!is_alphanumeric(scanner->lookahead) || !valid_symbols[T_DIRECTIVE_NAME]) {
    return false;
  }

  scanner->advance(scanner);

  bool internal_symbol = false;
  bool keep_parsing = true;
  while (is_alphanumeric(scanner->lookahead)
      || is_internal_reference_char(scanner->lookahead)
      || is_inline_space(scanner->lookahead)) {
    // Directive names can have one (and only one) space before `::`.
    if (is_inline_space(scanner->lookahead)) {
      lexer->mark_end(lexer);
      scanner->advance(scanner);
      scanner->advance(scanner);
      keep_parsing = false;
      break;
    }
    if (is_internal_reference_char(scanner->lookahead)) {
      if (internal_symbol) {
        break;
      }
      internal_symbol = true;
      lexer->mark_end(lexer);
    } else {
      internal_symbol = false;
    }
    scanner->advance(scanner);
  }

  if (scanner->lookahead != ':' || scanner->previous != ':') {
    return parse_text(scanner, keep_parsing);
  }
  scanner->advance(scanner);

  if (is_space(scanner->lookahead)) {
    lexer->result_symbol = T_DIRECTIVE_NAME;
    return true;
  }

  return false;
}

static bool parse_substitution_mark(RSTScanner* scanner)
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

static bool parse_literal_block_mark(RSTScanner* scanner)
{
  const bool* valid_symbols = scanner->valid_symbols;

  if (scanner->lookahead != ':'
      || !(valid_symbols[T_LITERAL_INDENTED_BLOCK_MARK] || valid_symbols[T_LITERAL_QUOTED_BLOCK_MARK])) {
    return false;
  }

  scanner->advance(scanner);

  if (scanner->lookahead != ':') {
    if (valid_symbols[T_ROLE_NAME_PREFIX] || valid_symbols[T_ROLE_NAME_SUFFIX]) {
      return parse_inner_role(scanner);
    }
    return false;
  }

  scanner->advance(scanner);

  return parse_inner_literal_block_mark(scanner);
}

static bool parse_inner_literal_block_mark(RSTScanner* scanner)
{
  const bool* valid_symbols = scanner->valid_symbols;
  TSLexer* lexer = scanner->lexer;

  if (!is_space(scanner->lookahead)
      || !(valid_symbols[T_LITERAL_INDENTED_BLOCK_MARK] || valid_symbols[T_LITERAL_QUOTED_BLOCK_MARK])) {
    return false;
  }

  lexer->mark_end(lexer);

  consume_inline_whitespace(scanner);

  if (!is_newline(scanner->lookahead)) {
    return parse_text(scanner, false);
  }

  scanner->advance(scanner);

  // Make sure there is blank line
  while (!is_newline(scanner->lookahead)) {
    if (!is_space(scanner->lookahead)) {
      return false;
    }
    scanner->advance(scanner);
  }
  scanner->advance(scanner);

  // Skip all whitespaces and newlines and
  // get the indentation level of the first non-empty line.
  int indent = -1;
  while (scanner->lookahead != CHAR_EOF) {
    int local_indent = get_indent_level(scanner);
    if (!is_newline(scanner->lookahead)) {
      indent = local_indent;
      break;
    }
    scanner->advance(scanner);
  }

  // Literal blocks need to be indented, and quoted literal blocks
  // need to start with an adornment at the same indentation level.
  if (indent > scanner->back(scanner)) {
    scanner->push(scanner, scanner->back(scanner) + 1);
    lexer->result_symbol = T_LITERAL_INDENTED_BLOCK_MARK;
  } else if (indent == scanner->back(scanner) && is_adornment_char(scanner->lookahead)) {
    lexer->result_symbol = T_LITERAL_QUOTED_BLOCK_MARK;
  } else {
    return false;
  }
  if (!valid_symbols[lexer->result_symbol]) {
    return false;
  }
  return true;
}

static bool parse_quoted_literal_block(RSTScanner* scanner)
{
  const bool* valid_symbols = scanner->valid_symbols;
  TSLexer* lexer = scanner->lexer;

  if (!is_adornment_char(scanner->lookahead) || !valid_symbols[T_QUOTED_LITERAL_BLOCK]) {
    return false;
  }

  int32_t adornment = scanner->lookahead;
  int current_indent = scanner->back(scanner);

  while (true) {
    while (!is_newline(scanner->lookahead)) {
      scanner->advance(scanner);
    }
    lexer->mark_end(lexer);

    scanner->advance(scanner);

    // Check if it's an empty line or if the indentation was broken.
    int indent = get_indent_level(scanner);
    if (indent != current_indent || scanner->lookahead != adornment) {
      break;
    }
  }
  lexer->result_symbol = T_QUOTED_LITERAL_BLOCK;
  return true;
}

static bool parse_line_block_mark(RSTScanner* scanner)
{
  const bool* valid_symbols = scanner->valid_symbols;

  if (scanner->lookahead != '|' || !valid_symbols[T_LINE_BLOCK_MARK]) {
    return false;
  }

  scanner->advance(scanner);

  if (is_space(scanner->lookahead)) {
    return parse_inner_list_element(scanner, 1, T_LINE_BLOCK_MARK);
  }

  return false;
}

static bool parse_attribution_mark(RSTScanner* scanner)
{
  const bool* valid_symbols = scanner->valid_symbols;

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
      // A single dash followed by a space is a char bullet, not an attribution.
      // parse_char_bullet can't be tried after this point because we've already
      // advanced past the dash, so handle the fallback here.
      if (consumed_chars == 1 && is_space(scanner->lookahead) && valid_symbols[T_CHAR_BULLET]) {
        return parse_inner_list_element(scanner, 1, T_CHAR_BULLET);
      }
      return false;
    }
  } else {
    scanner->advance(scanner);
    consumed_chars++;
  }

  return parse_inner_list_element(scanner, consumed_chars, T_ATTRIBUTION_MARK);
}

static bool parse_doctest_block_mark(RSTScanner* scanner)
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

static bool parse_inline_markup(RSTScanner* scanner)
{
  const bool* valid_symbols = scanner->valid_symbols;
  TSLexer* lexer = scanner->lexer;
  scanner->advance(scanner);
  lexer->mark_end(lexer);

  unsigned type = 0;

  if (scanner->previous == '*' && scanner->lookahead == '*' && valid_symbols[T_STRONG]) {
    type = IM_STRONG;
  } else if (scanner->previous == '*' && valid_symbols[T_EMPHASIS]) {
    type = IM_EMPHASIS;
  } else if (scanner->previous == '`' && scanner->lookahead == '`' && valid_symbols[T_LITERAL]) {
    type = IM_LITERAL;
  } else if (scanner->previous == '`' && (valid_symbols[T_INTERPRETED_TEXT] || valid_symbols[T_INTERPRETED_TEXT_PREFIX])) {
    type = IM_INTERPRETED_TEXT | IM_INTERPRETED_TEXT_PREFIX;
  } else if (scanner->previous == '|' && valid_symbols[T_SUBSTITUTION_REFERENCE]) {
    type = IM_SUBSTITUTION_REFERENCE;
  } else if (scanner->previous == '_' && scanner->lookahead == '`' && valid_symbols[T_INLINE_TARGET]) {
    type = IM_INLINE_TARGET;
  } else if (scanner->previous == '[' && (valid_symbols[T_FOOTNOTE_REFERENCE] || valid_symbols[T_CITATION_REFERENCE])) {
    type = IM_FOOTNOTE_REFERENCE | IM_CITATION_REFERENCE;
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

static bool parse_inner_inline_markup(RSTScanner* scanner, unsigned type)
{
  const bool* valid_symbols = scanner->valid_symbols;
  TSLexer* lexer = scanner->lexer;

  int consumed_chars = 0;
  bool word_found = false;
  bool is_escaped = false;

  // If a reference may close this `\``-introduced markup, skip the
  // word-boundary mark_end calls during the scan so the after-first-backtick
  // mark_end (set by parse_inline_markup) is preserved. When the close is
  // `\`_` / `\`__` we emit T_REFERENCE_OPEN_BACKTICK with that span.
  bool reference_possible = valid_symbols[T_REFERENCE_OPEN_BACKTICK]
      && (type & (IM_INTERPRETED_TEXT | IM_INTERPRETED_TEXT_PREFIX));

  if (type & IM_FOOTNOTE_REFERENCE || type & IM_CITATION_REFERENCE) {
    unsigned final_type = parse_inner_label_name(scanner);
    if ((final_type == IM_FOOTNOTE_REFERENCE && type & IM_FOOTNOTE_REFERENCE)
        || (final_type == IM_CITATION_REFERENCE && type & IM_CITATION_REFERENCE)) {
      scanner->advance(scanner);
      if (scanner->lookahead == '_') {
        scanner->advance(scanner);
        if (is_space(scanner->lookahead) || is_end_char(scanner->lookahead)) {
          lexer->mark_end(lexer);
          if (final_type == IM_CITATION_REFERENCE) {
            lexer->result_symbol = T_CITATION_REFERENCE;
          } else if (final_type == IM_FOOTNOTE_REFERENCE) {
            lexer->result_symbol = T_FOOTNOTE_REFERENCE;
          }
          return true;
        }
      }
    }
    return parse_text(scanner, false);
  }

  while (scanner->lookahead != CHAR_EOF) {
    // Skip indentation
    if (is_newline(scanner->lookahead)) {
      if (!word_found) {
        word_found = true;
        if (!reference_possible) {
          lexer->mark_end(lexer);
        }
      }
      scanner->advance(scanner);
      int indent = get_indent_level(scanner);
      if (indent != scanner->back(scanner) || is_newline(scanner->lookahead)) {
        break;
      }
    }

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
      if (!reference_possible) {
        lexer->mark_end(lexer);
      }
    }

    // Mark the end of the word if a start char was found
    if (!word_found && is_start_char(scanner->lookahead)) {
      word_found = true;
      if (!reference_possible) {
        lexer->mark_end(lexer);
      }
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
      } else if ((type & IM_INTERPRETED_TEXT || type & IM_INTERPRETED_TEXT_PREFIX) && scanner->previous == '`') {
        // `\`text\`_` / `\`text\`__` -- emit just the opening backtick as
        // T_REFERENCE_OPEN_BACKTICK so the name / URI / end mark can be
        // separated by subsequent scanner calls. mark_end is preserved at
        // after-first-backtick because reference_possible suppressed the
        // word-boundary mark_end during the scan.
        if (scanner->lookahead == '_' && reference_possible) {
          lexer->result_symbol = T_REFERENCE_OPEN_BACKTICK;
          return true;
        }
        if (scanner->lookahead == ':' && type & IM_INTERPRETED_TEXT_PREFIX && valid_symbols[T_INTERPRETED_TEXT_PREFIX]) {
          lexer->mark_end(lexer);
          scanner->advance(scanner);
          bool ok = parse_role_name(scanner);
          if (ok) {
            lexer->result_symbol = T_INTERPRETED_TEXT_PREFIX;
            return true;
          }
          if (valid_symbols[T_INTERPRETED_TEXT]) {
            lexer->result_symbol = T_INTERPRETED_TEXT;
            return true;
          }
          is_valid = false;
        } else {
          lexer->result_symbol = T_INTERPRETED_TEXT;
        }
      } else if ((type & IM_SUBSTITUTION_REFERENCE) && scanner->previous == '|') {
        lexer->result_symbol = T_SUBSTITUTION_REFERENCE;
        // Substitution references can end with '__'.
        if (scanner->lookahead == '_') {
          scanner->advance(scanner);
          if (scanner->lookahead == '_') {
            advance = true;
          }
        }
      } else {
        is_valid = false;
      }

      if (advance) {
        scanner->advance(scanner);
        consumed_chars++;
      }

      // The next char should be a whitespace or an end char
      if (is_valid && (is_space(scanner->lookahead) || is_end_char(scanner->lookahead))) {
        lexer->mark_end(lexer);
        return true;
      }
    } else {
      scanner->advance(scanner);
    }

    consumed_chars++;
  }

  if (!word_found && is_newline(scanner->lookahead)) {
    return parse_text(scanner, true);
  }
  return parse_text(scanner, false);
}

static bool parse_reference(RSTScanner* scanner)
{
  const bool* valid_symbols = scanner->valid_symbols;

  if (is_space(scanner->lookahead) || is_internal_reference_char(scanner->lookahead) || !valid_symbols[T_REFERENCE]) {
    return false;
  }
  scanner->advance(scanner);
  return parse_inner_reference(scanner);
}

static bool parse_inner_reference(RSTScanner* scanner)
{
  TSLexer* lexer = scanner->lexer;

  bool internal_symbol = is_internal_reference_char(scanner->previous);
  bool is_word = false;
  while ((!is_space(scanner->lookahead) && !is_end_char(scanner->lookahead)) || is_internal_reference_char(scanner->lookahead)) {
    // Mark the end of the worl?d.
    if (is_start_char(scanner->lookahead) && !is_word) {
      is_word = true;
      lexer->mark_end(lexer);
    }
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

  // Only an anonymous reference can contain
  // and end with two consecutive '_'.
  if (scanner->lookahead == '_' && scanner->previous == '_') {
    scanner->advance(scanner);
  }

  if (scanner->previous == '_' && (is_space(scanner->lookahead) || is_end_char(scanner->lookahead))) {
    lexer->mark_end(lexer);
    lexer->result_symbol = T_REFERENCE;
    return true;
  }

  return parse_text(scanner, !is_word);
}

// Emit the visible-name portion of a backticked reference. Stops before any
// trailing whitespace that introduces an embedded `<URI>`, before the
// closing `\`` of a phrase reference, or returns false for the empty-text
// embedded form (where the lexer is already at `<`).
static bool parse_reference_name(RSTScanner* scanner)
{
  TSLexer* lexer = scanner->lexer;
  const bool* valid_symbols = scanner->valid_symbols;

  if (!valid_symbols[T_REFERENCE_NAME]) {
    return false;
  }

  // Empty link text (`\`<uri>\`__`) or unexpected close: leave for the
  // literal `<` / T_REFERENCE_END_MARK paths.
  if (scanner->lookahead == '<' || scanner->lookahead == '`'
      || is_space(scanner->lookahead)) {
    return false;
  }

  bool is_escaped = false;
  int consumed = 0;

  while (scanner->lookahead != CHAR_EOF) {
    // Track candidate end at every non-space-to-whitespace transition so the
    // trailing separator before `<URI>` (or before the closing `\``) is not
    // included in the name.
    if (consumed > 0
        && is_space(scanner->lookahead)
        && !is_space(scanner->previous)) {
      lexer->mark_end(lexer);
    }

    if (is_newline(scanner->lookahead)) {
      scanner->advance(scanner);
      int indent = get_indent_level(scanner);
      if (indent != scanner->back(scanner) || is_newline(scanner->lookahead)) {
        return false;
      }
      continue;
    }

    if (scanner->lookahead == '\\' && !is_escaped) {
      is_escaped = true;
      scanner->advance(scanner);
      consumed++;
      continue;
    }

    // Candidate embedded URI: `<` after whitespace. Look ahead for the
    // matching `>` followed by `\`_` / `\`__` -- only then is this an
    // embedded URI and the name ends here. Otherwise `<` is part of the
    // name and we keep scanning past it.
    if (!is_escaped && scanner->lookahead == '<' && is_space(scanner->previous)) {
      scanner->advance(scanner);
      consumed++;
      while (scanner->lookahead != '>' && scanner->lookahead != '`'
          && !is_newline(scanner->lookahead) && scanner->lookahead != CHAR_EOF) {
        scanner->advance(scanner);
        consumed++;
      }
      if (scanner->lookahead == '>') {
        scanner->advance(scanner);
        consumed++;
        if (scanner->lookahead == '`') {
          scanner->advance(scanner);
          if (scanner->lookahead == '_') {
            lexer->result_symbol = T_REFERENCE_NAME;
            return true;
          }
        }
      }
      // Not an embedded URI; continue scanning -- mark_end will be updated
      // by subsequent transitions or by the phrase close below.
      is_escaped = false;
      continue;
    }

    // Phrase close: stop right at the closing `\``.
    if (!is_escaped && scanner->lookahead == '`' && !is_space(scanner->previous)) {
      lexer->mark_end(lexer);
      lexer->result_symbol = T_REFERENCE_NAME;
      return true;
    }

    is_escaped = false;
    scanner->advance(scanner);
    consumed++;
  }

  return false;
}

// Emit the URI content of an embedded URI reference, without the surrounding
// angle brackets. The grammar matches `<` and `>` as literal tokens, so this
// is invoked only when the lexer is positioned just after `<`, and stops
// short of `>` (mark_end before consuming it).
static bool parse_embedded_uri(RSTScanner* scanner)
{
  TSLexer* lexer = scanner->lexer;

  if (!scanner->valid_symbols[T_EMBEDDED_URI]) {
    return false;
  }

  while (scanner->lookahead != '>'
      && !is_newline(scanner->lookahead)
      && scanner->lookahead != '`'
      && scanner->lookahead != CHAR_EOF) {
    scanner->advance(scanner);
  }

  if (scanner->lookahead != '>') {
    return false;
  }

  lexer->mark_end(lexer);
  lexer->result_symbol = T_EMBEDDED_URI;
  return true;
}

// Emit the closing `\`_` or `\`__` of an embedded URI reference.
static bool parse_reference_end_mark(RSTScanner* scanner)
{
  TSLexer* lexer = scanner->lexer;

  if (scanner->lookahead != '`' || !scanner->valid_symbols[T_REFERENCE_END_MARK]) {
    return false;
  }

  scanner->advance(scanner);

  if (scanner->lookahead != '_') {
    return false;
  }
  scanner->advance(scanner);

  // Anonymous embedded reference: trailing `__`.
  if (scanner->lookahead == '_') {
    scanner->advance(scanner);
  }

  if (!is_space(scanner->lookahead) && !is_end_char(scanner->lookahead)) {
    return false;
  }

  lexer->mark_end(lexer);
  lexer->result_symbol = T_REFERENCE_END_MARK;
  return true;
}

static bool parse_standalone_hyperlink(RSTScanner* scanner)
{
  const bool* valid_symbols = scanner->valid_symbols;

  if (!is_abc(scanner->lookahead) || !valid_symbols[T_STANDALONE_HYPERLINK]) {
    return false;
  }
  scanner->advance(scanner);
  return parse_inner_standalone_hyperlink(scanner);
}

static bool parse_inner_standalone_hyperlink(RSTScanner* scanner)
{
  TSLexer* lexer = scanner->lexer;

  // The cast to (char) is safe: is_alphanumeric is true only for ASCII
  // [0-9A-Za-z], which all fit in a single byte.
  enum { MAX_SCHEMA_LEN = 20 };
  char schema[MAX_SCHEMA_LEN];
  unsigned consumed_chars = 0;

  schema[consumed_chars++] = (char)scanner->previous;
  while (consumed_chars < MAX_SCHEMA_LEN && is_alphanumeric(scanner->lookahead)) {
    schema[consumed_chars++] = (char)scanner->lookahead;
    scanner->advance(scanner);
  }

  bool is_word = false;
  if (is_start_char(scanner->lookahead)) {
    lexer->mark_end(lexer);
  }

  bool is_valid = false;
  if (scanner->lookahead == ':') {
    is_valid = is_known_schema(schema, consumed_chars);
  } else if (scanner->lookahead == '@') {
    is_valid = true;
  }

  if (!is_valid) {
    if ((!is_space(scanner->lookahead) && !is_end_char(scanner->lookahead)) || is_internal_reference_char(scanner->lookahead)) {
      return parse_inner_reference(scanner);
    }

    return parse_text(scanner, !is_word);
  }

  scanner->advance(scanner);

  if (scanner->lookahead == '/') {
    scanner->advance(scanner);
  } else if (!is_alphanumeric(scanner->lookahead)) {
    return parse_text(scanner, !is_word);
  }

  consumed_chars = 0;
  bool is_escaped = false;
  while (true) {
    lexer->mark_end(lexer);
    if (scanner->lookahead == '\\') {
      scanner->advance(scanner);
      is_escaped = true;
    } else {
      is_escaped = false;
    }
    if (is_invalid_uri_char(scanner->lookahead)) {
      break;
    }
    if (is_space(scanner->lookahead)
        || (is_end_char(scanner->lookahead) && !is_escaped && scanner->lookahead != '/')) {
      if (is_end_char(scanner->lookahead)) {
        lexer->mark_end(lexer);
        scanner->advance(scanner);
        if (!is_alphanumeric(scanner->lookahead)) {
          lexer->result_symbol = T_STANDALONE_HYPERLINK;
          return true;
        }
      } else {
        break;
      }
    }
    scanner->advance(scanner);
    consumed_chars++;
  }

  if (consumed_chars > 0) {
    lexer->result_symbol = T_STANDALONE_HYPERLINK;
    return true;
  }

  return parse_text(scanner, !is_word);
}

static bool parse_role(RSTScanner* scanner)
{
  const bool* valid_symbols = scanner->valid_symbols;
  TSLexer* lexer = scanner->lexer;

  if (scanner->lookahead != ':'
      || (!valid_symbols[T_ROLE_NAME_SUFFIX] && !valid_symbols[T_ROLE_NAME_PREFIX])) {
    return false;
  }

  scanner->advance(scanner);

  // Mark the end of the word before going deeper.
  lexer->mark_end(lexer);

  if (is_space(scanner->lookahead) && valid_symbols[T_FIELD_MARK_END]) {
    // Consume all whitespaces.
    get_indent_level(scanner);
    lexer->mark_end(lexer);
    advance_to_next_line(scanner);

    // The first non-empty line after the field name marker
    // determines the indentation of the field body.
    int indent = skip_blank_lines_get_indent(scanner);

    if (indent > scanner->back(scanner)) {
      scanner->push(scanner, indent);
    } else {
      scanner->push(scanner, scanner->back(scanner) + 1);
    }

    lexer->result_symbol = T_FIELD_MARK_END;
    return true;
  }

  if (is_alphanumeric(scanner->lookahead)) {
    bool ok = parse_inner_role(scanner);
    if (ok) {
      return true;
    }
  }

  return parse_text(scanner, false);
}

static bool parse_inner_role(RSTScanner* scanner)
{
  const bool* valid_symbols = scanner->valid_symbols;
  TSLexer* lexer = scanner->lexer;

  if (!is_alphanumeric(scanner->lookahead)
      || (!valid_symbols[T_ROLE_NAME_SUFFIX] && !valid_symbols[T_ROLE_NAME_PREFIX])) {
    return false;
  }
  // Mark the end at the previous character (`:`),
  // so that the role name is not included in the T_FIELD_MARK token.
  lexer->mark_end(lexer);
  bool ok = parse_role_name(scanner);
  if (ok) {
    if (scanner->lookahead == '`' && valid_symbols[T_ROLE_NAME_PREFIX]) {
      lexer->mark_end(lexer);
      scanner->advance(scanner);
      if (scanner->lookahead != '`') {
        // Single backtick: valid role prefix syntax :role:`...`
        lexer->result_symbol = T_ROLE_NAME_PREFIX;
        return true;
      }
      // Double backtick after role name is literal syntax, not a role prefix.
    }

    if (is_space(scanner->lookahead) && valid_symbols[T_FIELD_MARK]) {
      lexer->result_symbol = T_FIELD_MARK;
      return true;
    }

    if ((is_space(scanner->lookahead) || is_end_char(scanner->lookahead))
        && valid_symbols[T_ROLE_NAME_SUFFIX]) {
      lexer->mark_end(lexer);
      lexer->result_symbol = T_ROLE_NAME_SUFFIX;
      return true;
    }
  }
  if (valid_symbols[T_FIELD_MARK]) {
    ok = parse_inner_field_mark(scanner);
    if (ok) {
      return true;
    }
  }
  return false;
}

/// This function assumes the previous token was `:` and it's already consumed.
static bool parse_role_name(RSTScanner* scanner)
{
  if (!is_alphanumeric(scanner->lookahead)) {
    return false;
  }

  bool internal_symbol = true;
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

  if (scanner->previous == ':') {
    return true;
  }

  return false;
}

/// Parse normal text.
///
/// Text nodes are separated by white spaces or a start char like `(`
static bool parse_text(RSTScanner* scanner, bool mark_end)
{
  TSLexer* lexer = scanner->lexer;
  const bool* valid_symbols = scanner->valid_symbols;
  if (!valid_symbols[T_TEXT]) {
    return false;
  }

  if (is_start_char(scanner->lookahead)) {
    bool was_backslash = scanner->lookahead == '\\';
    scanner->advance(scanner);
    // Emit a distinct escape_sequence node when the parser expects one,
    // but only when the backslash actually escapes a character (not before
    // a newline or EOF, where RST treats the backslash as literal text).
    if (was_backslash && valid_symbols[T_ESCAPE_SEQUENCE]
        && !is_newline(scanner->lookahead) && scanner->lookahead != '\0') {
      scanner->advance(scanner);
      lexer->mark_end(lexer);
      lexer->result_symbol = T_ESCAPE_SEQUENCE;
      return true;
    }
    // RST backslash escape: pull the next character into the same text
    // token so the next scanner dispatch can't read it as inline markup
    // (e.g. ``\` `` must not open interpreted text).
    if (was_backslash && !is_newline(scanner->lookahead)) {
      scanner->advance(scanner);
    }
  } else {
    while (!is_space(scanner->lookahead)) {
      if (is_start_char(scanner->lookahead)) {
        break;
      }
      scanner->advance(scanner);
    }
  }

  if (mark_end) {
    lexer->mark_end(lexer);
  }
  lexer->result_symbol = T_TEXT;
  return true;
}
