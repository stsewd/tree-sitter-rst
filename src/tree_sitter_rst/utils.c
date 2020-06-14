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


bool is_char_bullet(int32_t c) {
  for (int i = 0; i < CHAR_BULLETS_LENGTH; i++) {
    if (c == CHAR_BULLETS[i]) {
      return true;
    }
  }
  return false;
}
