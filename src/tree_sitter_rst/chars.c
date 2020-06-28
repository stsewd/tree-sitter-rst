#include "tree_sitter_rst/chars.h"

bool is_newline(int32_t c)
{
  const int32_t newline_chars[] = {
    CHAR_EOF,
    CHAR_NEWLINE,
    CHAR_CARRIAGE_RETURN,
  };
  const int length = 3;
  for (int i = 0; i < length; i++) {
    if (c == newline_chars[i]) {
      return true;
    }
  }
  return false;
}

bool is_space(int32_t c)
{
  const int32_t space_chars[] = {
    CHAR_SPACE,
    CHAR_FORM_FEED,
    CHAR_TAB,
    CHAR_VERTICAL_TAB,
  };
  const int length = 4;
  bool is_space_char = false;
  for (int i = 0; i < length; i++) {
    if (c == space_chars[i]) {
      is_space_char = true;
      break;
    }
  }
  return is_space_char || is_newline(c);
}

bool is_number(int32_t c)
{
  const int32_t numbers[] = {
    '0',
    '1',
    '2',
    '3',
    '4',
    '5',
    '6',
    '7',
    '8',
    '9',
  };
  const int length = 10;
  for (int i = 0; i < length; i++) {
    if (c == numbers[i]) {
      return true;
    }
  }
  return false;
}

bool is_abc_lower(int32_t c)
{
  const int32_t abc[] = {
    'a',
    'b',
    'c',
    'd',
    'e',
    'f',
    'g',
    'h',
    'i',
    'j',
    'k',
    'l',
    'm',
    'n',
    'o',
    'p',
    'q',
    'r',
    's',
    't',
    'u',
    'v',
    'w',
    'x',
    'y',
    'z',
  };
  const int length = 26;
  for (int i = 0; i < length; i++) {
    if (c == abc[i]) {
      return true;
    }
  }
  return false;
}

bool is_abc_upper(int32_t c)
{
  const int32_t abc[] = {
    'A',
    'B',
    'C',
    'D',
    'E',
    'F',
    'G',
    'H',
    'I',
    'J',
    'K',
    'L',
    'M',
    'N',
    'O',
    'P',
    'Q',
    'R',
    'S',
    'T',
    'U',
    'V',
    'W',
    'X',
    'Y',
    'Z',
  };
  const int length = 26;
  for (int i = 0; i < length; i++) {
    if (c == abc[i]) {
      return true;
    }
  }
  return false;
}

bool is_abc(int32_t c)
{
  return is_abc_lower(c) || is_abc_upper(c);
}

bool is_alphanumeric(int32_t c)
{
  return is_abc(c) || is_number(c);
}

bool is_adornment_char(int32_t c)
{
  const int32_t adornment_chars[] = {
    '!',
    '"',
    '#',
    '$',
    '%',
    '&',
    '\'',
    '(',
    ')',
    '*',
    '+',
    ',',
    '-',
    '.',
    '/',
    ':',
    ';',
    '<',
    '=',
    '>',
    '?',
    '@',
    '[',
    '\\',
    ']',
    '^',
    '_',
    '`',
    '{',
    '|',
    '}',
    '~',
  };
  const int length = 32;
  for (int i = 0; i < length; i++) {
    if (c == adornment_chars[i]) {
      return true;
    }
  }
  return false;
}

bool is_start_char(int32_t c)
{
  const int32_t valid_chars[] = {
    '-',
    ':',
    '/',
    '\'',
    '"',
    '<',
    '(',
    '[',
    '{',
  };
  const int length = 9;
  for (int i = 0; i < length; i++) {
    if (c == valid_chars[i]) {
      return true;
    }
  }
  return false;
}

bool is_end_char(int32_t c)
{
  const int32_t valid_chars[] = {
    '-',
    '.',
    ',',
    ':',
    ';',
    '!',
    '?',
    '\\',
    '/',
    '\'',
    '"',
    ')',
    ']',
    '}',
    '>',
  };
  const int length = 15;
  for (int i = 0; i < length; i++) {
    if (c == valid_chars[i]) {
      return true;
    }
  }
  return false;
}

bool is_inline_markup_start_char(int32_t c)
{
  const int32_t inline_markup_chars[] = {
    '*', // *emphasis*, and **strong**.
    '`', // `interpreted text`, ``literals``, `hyperlink references`_, and `anonymous references`__.
    '|', // |substitution references|.
    '_', // _`inline internal target`.
    '[', // [foot-note]_.
  };
  const int length = 5;
  for (int i = 0; i < length; i++) {
    if (c == inline_markup_chars[i]) {
      return true;
    }
  }
  return false;
}

bool is_inline_markup_end_char(int32_t c)
{
  const int32_t inline_markup_chars[] = {
    '*', // *emphasis*, and **strong**.
    '`', // `interpreted text`, ``literals``, _`inline internal target`,
    // `hyperlink references`_, and `anonymous references`__.
    '|', // |substitution references|.
    ']', // [foot-note]_.
  };
  const int length = 4;
  for (int i = 0; i < length; i++) {
    if (c == inline_markup_chars[i]) {
      return true;
    }
  }
  return false;
}

bool is_internal_reference_char(int32_t c)
{
  const int32_t internal_chars[] = { '-', '_', '.', ':', '+' };
  const int length = 5;
  for (int i = 0; i < length; i++) {
    if (c == internal_chars[i]) {
      return true;
    }
  }
  return false;
}

bool is_char_bullet(int32_t c)
{
  const int32_t bullets[] = {
    '*',
    '+',
    '-',
    8226, // '•'
    8227, // '‣'
    8259, // '⁃'
  };
  const int length = 6;
  for (int i = 0; i < length; i++) {
    if (c == bullets[i]) {
      return true;
    }
  }
  return false;
}

bool is_numeric_bullet(int32_t c)
{
  return (
      is_numeric_bullet_simple(c)
      || is_numeric_bullet_roman_lower(c)
      || is_numeric_bullet_roman_upper(c)
      || is_numeric_bullet_abc_lower(c)
      || is_numeric_bullet_abc_upper(c));
}

bool is_numeric_bullet_simple(int32_t c)
{
  return is_number(c) || c == '#';
}

bool is_numeric_bullet_roman_lower(int32_t c)
{
  const int32_t valid_chars[] = {
    'i',
    'v',
    'x',
    'l',
    'c',
    'd',
    'm',
  };
  const int length = 7;
  for (int i = 0; i < length; i++) {
    if (c == valid_chars[i]) {
      return true;
    }
  }
  return false;
}

bool is_numeric_bullet_roman_upper(int32_t c)
{
  const int32_t valid_chars[] = {
    'I',
    'V',
    'X',
    'L',
    'C',
    'D',
    'M',
  };
  const int length = 7;
  for (int i = 0; i < length; i++) {
    if (c == valid_chars[i]) {
      return true;
    }
  }
  return false;
}

bool is_numeric_bullet_abc_lower(int32_t c)
{
  return is_abc_lower(c);
}

bool is_numeric_bullet_abc_upper(int32_t c)
{
  return is_abc_upper(c);
}

int get_indent_level(TSLexer* lexer)
{
  int32_t current = lexer->lookahead;
  int indent = 0;

  while (true) {
    if (current == CHAR_SPACE || current == CHAR_VERTICAL_TAB || current == CHAR_FORM_FEED) {
      indent += 1;
    } else if (current == CHAR_TAB) {
      indent += TAB_STOP;
    } else {
      break;
    }
    lexer->advance(lexer, true);
    current = lexer->lookahead;
  }

  return indent;
}
