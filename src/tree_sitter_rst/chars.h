#ifndef TREE_SITTER_RST_CHARS_H_
#define TREE_SITTER_RST_CHARS_H_

#include <stdbool.h>

bool is_newline(int32_t c);
bool is_space(int32_t c);
bool is_number(int32_t c);
bool is_abc_lower(int32_t c);
bool is_abc_upper(int32_t c);
bool is_abc(int32_t c);
bool is_alphanumeric(int32_t c);

bool is_adornment_char(int32_t c);

bool is_start_char(int32_t c);
bool is_end_char(int32_t c);
bool is_inline_markup_start_char(int32_t c);
bool is_inline_markup_end_char(int32_t c);

bool is_internal_reference_char(int32_t c);

bool is_char_bullet(int32_t c);
bool is_numeric_bullet(int32_t c);
bool is_numeric_bullet_simple(int32_t c);
bool is_numeric_bullet_roman_lower(int32_t c);
bool is_numeric_bullet_roman_upper(int32_t c);
bool is_numeric_bullet_abc_lower(int32_t c);
bool is_numeric_bullet_abc_upper(int32_t c);

#endif /* ifndef TREE_SITTER_RST_CHARS_H_ */
