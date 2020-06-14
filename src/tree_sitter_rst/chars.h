#ifndef TREE_SITTER_RST_CHARS_H_
#define TREE_SITTER_RST_CHARS_H_

#define NEWLINE_CHARS_LENGTH 3
const int32_t NEWLINE_CHARS[NEWLINE_CHARS_LENGTH] = {
  '\n', '\r', '\0',
};


#define START_CHARS_LENGTH 9
const int32_t START_CHARS[START_CHARS_LENGTH] = {
  '-', ':', '/', '\'', '"', '<', '(', '[', '{',
};


#define END_CHARS_LENGTH 15
const int32_t END_CHARS[END_CHARS_LENGTH] = {
  '-', '.', ',', ':', ';', '!', '?', '\\', '/', '\'', '"', ')', ']', '}', '>',
};


#define CHAR_BULLETS_LENGTH 6
const int32_t CHAR_BULLETS[CHAR_BULLETS_LENGTH] = {
  '*', '+', '-', '•', '‣', '⁃',
};

#endif /* ifndef TREE_SITTER_RST_CHARS_H_ */
