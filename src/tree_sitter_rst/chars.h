#ifndef TREE_SITTER_RST_CHARS_H_
#define TREE_SITTER_RST_CHARS_H_

/*
 * Inline Markup
 */

#define START_CHARS_LENGTH 9
const int32_t START_CHARS[START_CHARS_LENGTH] = {
  '-', ':', '/', '\'', '"', '<', '(', '[', '{',
};


#define END_CHARS_LENGTH 15
const int32_t END_CHARS[END_CHARS_LENGTH] = {
  '-', '.', ',', ':', ';', '!', '?', '\\', '/', '\'', '"', ')', ']', '}', '>',
};


/*
 * Lists
 */

#define CHAR_BULLETS_LENGTH 6
const int32_t CHAR_BULLETS[CHAR_BULLETS_LENGTH] = {
  '*',
  '+',
  '-',
  8226,  // '•'
  8227,  // '‣'
  8259,  // '⁃'
};

#define ROMAN_NUMERS_LENGTH 7
const int32_t ROMAN_NUMERS_LOWERCASE[ROMAN_NUMERS_LENGTH] = {
  'i', 'v', 'x', 'l', 'c', 'd', 'm',
};
const int32_t ROMAN_NUMERS_UPPPERCASE[ROMAN_NUMERS_LENGTH] = {
  'I', 'V', 'X', 'L', 'C', 'D', 'M',
};

#endif /* ifndef TREE_SITTER_RST_CHARS_H_ */
