#include "./utils.h"

#define NEWLINE_CHARS_LENGHT 3
const int32_t NEWLINE_CHARS[NEWLINE_CHARS_LENGHT] = {
  '\n', '\r', '\0',
};

bool is_newline(int32_t c) {
  for (int i = 0; i < NEWLINE_CHARS_LENGHT; i++) {
    if (c == NEWLINE_CHARS[i]) {
      return true;
    }
  }
  return false;
}


#define END_CHARS_LENGHT 15
const int32_t END_CHARS[END_CHARS_LENGHT] = {
  '-', '.', ',', ':', ';', '!', '?', '\\', '/', '\'', '"', ')', ']', '}', '>',
};

bool is_end_char(int32_t c) {
  for (int i = 0; i < END_CHARS_LENGHT; i++) {
    if (c == END_CHARS[i]) {
      return true;
    }
  }
  return false;
}
