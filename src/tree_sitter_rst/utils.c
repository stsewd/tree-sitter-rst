#include "tree_sitter_rst/utils.h"
#include "tree_sitter_rst/chars.h"


bool is_newline(int32_t c) {
  for (int i = 0; i < NEWLINE_CHARS_LENGTH; i++) {
    if (c == NEWLINE_CHARS[i]) {
      return true;
    }
  }
  return false;
}


bool is_start_char(int32_t c) {
  for (int i = 0; i < START_CHARS_LENGTH; i++) {
    if (c == START_CHARS[i]) {
      return true;
    }
  }
  return false;
}



bool is_end_char(int32_t c) {
  for (int i = 0; i < END_CHARS_LENGTH; i++) {
    if (c == END_CHARS[i]) {
      return true;
    }
  }
  return false;
}


bool is_inline_markup_single_char(int32_t c) {
  for (int i = 0; i < CHARS_INLINE_MARKUP_LENGTH; i++) {
    if (c == CHARS_INLINE_MARKUP[i]) {
      return true;
    }
  }
  return false;
}


bool is_inline_markup_double_char(int32_t c) {
  for (int i = 0; i < CHARS_INLINE_MARKUP_DOUBLE_LENGTH; i++) {
    if (c == CHARS_INLINE_MARKUP_DOUBLE[i]) {
      return true;
    }
  }
  return false;
}


bool is_char_bullet(int32_t c) {
  for (int i = 0; i < CHAR_BULLETS_LENGTH; i++) {
    if (c == CHAR_BULLETS[i]) {
      return true;
    }
  }
  return false;
}


bool is_numeric_bullet(int32_t c) {
  return (
    is_numeric_bullet_simple(c)
    || is_numeric_bullet_roman_lower(c)
    || is_numeric_bullet_roman_upper(c)
    || is_numeric_bullet_abc_lower(c)
    || is_numeric_bullet_abc_upper(c)
  );
}

bool is_numeric_bullet_simple(int32_t c) {
  for (int i = 0; i < NUMERIC_BULLETS_SIMPLE_LENGTH; i++) {
    if (c == NUMERIC_BULLETS_SIMPLE[i]) {
      return true;
    }
  }
  return false;
}

bool is_numeric_bullet_roman_lower(int32_t c) {
  for (int i = 0; i < ROMAN_NUMERS_LENGTH; i++) {
    if (c == ROMAN_NUMERS_LOWERCASE[i]) {
      return true;
    }
  }
  return false;
}

bool is_numeric_bullet_roman_upper(int32_t c) {
  for (int i = 0; i < ROMAN_NUMERS_LENGTH; i++) {
    if (c == ROMAN_NUMERS_UPPPERCASE[i]) {
      return true;
    }
  }
  return false;
}

bool is_numeric_bullet_abc_lower(int32_t c) {
  for (int i = 0; i < ABC_LENGTH; i++) {
    if (c == ABC_LOWERCASE[i]) {
      return true;
    }
  }
  return false;
}

bool is_numeric_bullet_abc_upper(int32_t c) {
  for (int i = 0; i < ABC_LENGTH; i++) {
    if (c == ABC_UPPERCASE[i]) {
      return true;
    }
  }
  return false;
}
