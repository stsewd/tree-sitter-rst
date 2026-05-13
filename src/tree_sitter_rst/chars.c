#include "chars.h"
#include "punctuation_chars.h"
#include <string.h>

static bool is_newline(int32_t c)
{
  switch (c) {
    case CHAR_EOF:
    case CHAR_NEWLINE:
    case CHAR_CARRIAGE_RETURN:
      return true;
    default:
      return false;
  }
}

static bool is_inline_space(int32_t c)
{
  switch (c) {
    case CHAR_SPACE:
    case CHAR_FORM_FEED:
    case CHAR_TAB:
    case CHAR_VERTICAL_TAB:
    case CHAR_NBSP:
      return true;
    default:
      return false;
  }
}

static bool is_space(int32_t c)
{
  return is_inline_space(c) || is_newline(c);
}

static bool is_number(int32_t c)
{
  return c >= '0' && c <= '9';
}

static bool is_abc_lower(int32_t c)
{
  return c >= 'a' && c <= 'z';
}

static bool is_abc_upper(int32_t c)
{
  return c >= 'A' && c <= 'Z';
}

static bool is_abc(int32_t c)
{
  return is_abc_lower(c) || is_abc_upper(c);
}

static bool is_alphanumeric(int32_t c)
{
  return is_abc(c) || is_number(c);
}

/// Check if it's an adornment char.
///
/// Adornment characters are used for sections and transitions.
/// These are the ASCII punctuation characters between '!' (0x21) and '~' (0x7e),
/// excluding the alphanumeric-adjacent characters '0'-'9', 'A'-'Z', 'a'-'z'.
static bool is_adornment_char(int32_t c)
{
  switch (c) {
    case '!':
    case '"':
    case '#':
    case '$':
    case '%':
    case '&':
    case '\'':
    case '(':
    case ')':
    case '*':
    case '+':
    case ',':
    case '-':
    case '.':
    case '/':
    case ':':
    case ';':
    case '<':
    case '=':
    case '>':
    case '?':
    case '@':
    case '[':
    case '\\':
    case ']':
    case '^':
    case '_':
    case '`':
    case '{':
    case '|':
    case '}':
    case '~':
      return true;
    default:
      return false;
  }
}

static bool is_delim_char(int32_t c)
{
  int length = sizeof(delim_chars) / sizeof(int32_t);
  for (int i = 0; i < length; i++) {
    if (c == delim_chars[i]) {
      return true;
    }
  }
  length = sizeof(delim_chars_range) / sizeof(delim_chars_range[0]);
  for (int i = 0; i < length; i++) {
    if (c >= delim_chars_range[i][0] && c <= delim_chars_range[i][1]) {
      return true;
    }
  }
  return false;
}

/// Check if it's a start char.
///
/// Some tokens can start after non-whitespace chars.
static bool is_start_char(int32_t c)
{
  int length = sizeof(start_chars) / sizeof(int32_t);
  for (int i = 0; i < length; i++) {
    if (c == start_chars[i]) {
      return true;
    }
  }
  return is_delim_char(c);
}

/// Check if it's an end char.
///
/// Some tokens can end after non-whitespace chars.
static bool is_end_char(int32_t c)
{
  int length = sizeof(end_chars) / sizeof(int32_t);
  for (int i = 0; i < length; i++) {
    if (c == end_chars[i]) {
      return true;
    }
  }
  return is_delim_char(c);
}

static bool is_inline_markup_start_char(int32_t c)
{
  switch (c) {
    case '*': // *emphasis*, and **strong**.
    case '`': // `interpreted text`, ``literals``, `hyperlink references`_, `anonymous references`__.
    case '|': // |substitution references|.
    case '_': // _`inline internal target`.
    case '[': // [foot-note]_.
      return true;
    default:
      return false;
  }
}

static bool is_inline_markup_end_char(int32_t c)
{
  switch (c) {
    case '*': // *emphasis*, and **strong**.
    case '`': // `interpreted text`, ``literals``, _`inline internal target`,
              // `hyperlink references`_, `anonymous references`__.
    case '|': // |substitution references|.
    case ']': // [foot-note]_.
      return true;
    default:
      return false;
  }
}

/// Check if it's an internal reference char.
///
/// References and some other names can't have two consecutive internal characters.
static bool is_internal_reference_char(int32_t c)
{
  switch (c) {
    case '-':
    case '_':
    case '.':
    case ':':
    case '+':
      return true;
    default:
      return false;
  }
}

/// Check if it's a bullet char.
///
/// Lists use these characters to start an item.
static bool is_char_bullet(int32_t c)
{
  switch (c) {
    case '*':
    case '+':
    case '-':
    case 0x2022: // '•'
    case 0x2023: // '‣'
    case 0x2043: // '⁃'
      return true;
    default:
      return false;
  }
}

/// Check if it's a numeric bullet char.
///
/// Lists cacn use different number formats to start an item.
static bool is_numeric_bullet(int32_t c)
{
  return (
      is_numeric_bullet_simple(c)
      || is_numeric_bullet_roman_lower(c)
      || is_numeric_bullet_roman_upper(c)
      || is_numeric_bullet_abc_lower(c)
      || is_numeric_bullet_abc_upper(c));
}

static bool is_numeric_bullet_simple(int32_t c)
{
  return is_number(c) || c == '#';
}

static bool is_numeric_bullet_roman_lower(int32_t c)
{
  switch (c) {
    case 'i':
    case 'v':
    case 'x':
    case 'l':
    case 'c':
    case 'd':
    case 'm':
      return true;
    default:
      return false;
  }
}

static bool is_numeric_bullet_roman_upper(int32_t c)
{
  switch (c) {
    case 'I':
    case 'V':
    case 'X':
    case 'L':
    case 'C':
    case 'D':
    case 'M':
      return true;
    default:
      return false;
  }
}

static bool is_numeric_bullet_abc_lower(int32_t c)
{
  return is_abc_lower(c);
}

static bool is_numeric_bullet_abc_upper(int32_t c)
{
  return is_abc_upper(c);
}

/// Check if it's a valid attribution char.
///
/// Attribution chars are used to denote the author of a quote.
static bool is_attribution_mark(int32_t c)
{
  return c == '-' || c == CHAR_EMDASH;
}

/// Get the current indentation level.
///
/// The scanner should be set to a char after a newline.
static int get_indent_level(RSTScanner* scanner)
{
  int32_t current = scanner->lookahead;
  int indent = 0;

  while (true) {
    current = scanner->lookahead;
    if (current == CHAR_SPACE || current == CHAR_VERTICAL_TAB || current == CHAR_FORM_FEED) {
      indent += 1;
    } else if (current == CHAR_TAB) {
      indent += TAB_STOP;
    } else {
      break;
    }
    scanner->advance(scanner);
  }

  return indent;
}

static bool is_known_schema(const char* string, unsigned string_len)
{
  static const char* const valid_schemas[] = {
    "http",
    "https",
    "ftp",
    "mailto",
    "telnet",
    "ssh",
  };
  const int length = sizeof(valid_schemas) / sizeof(valid_schemas[0]);
  for (int i = 0; i < length; i++) {
    if (string_len == strlen(valid_schemas[i])
        && memcmp(string, valid_schemas[i], string_len) == 0) {
      return true;
    }
  }
  return false;
}

static bool is_invalid_uri_char(int32_t c)
{
  switch (c) {
    case '^':
    case '}':
    case '{':
    case '\\':
      return true;
    default:
      return false;
  }
}

/// Consume contiguous inline whitespace (spaces/tabs), stopping at a newline or EOF.
static void consume_inline_whitespace(RSTScanner* scanner)
{
  while (is_inline_space(scanner->lookahead)) {
    scanner->advance(scanner);
  }
}

/// Advance the scanner past the current line, so the next lookahead is the
/// first character of the next line (or EOF).
static void advance_to_next_line(RSTScanner* scanner)
{
  while (!is_newline(scanner->lookahead)) {
    scanner->advance(scanner);
  }
  scanner->advance(scanner);
}

/// Skip over blank lines and return the indentation of the first non-empty
/// line. The scanner is left positioned at that line's first non-whitespace
/// character (or at EOF).
static int skip_blank_lines_get_indent(RSTScanner* scanner)
{
  int indent = 0;
  while (true) {
    indent = get_indent_level(scanner);
    if (!is_newline(scanner->lookahead) || scanner->lookahead == CHAR_EOF) {
      break;
    }
    scanner->advance(scanner);
  }
  return indent;
}
