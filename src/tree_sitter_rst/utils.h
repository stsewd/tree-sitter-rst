#ifndef TREE_SITTER_RST_UTILS_H_
#define TREE_SITTER_RST_UTILS_H_

#include <stdbool.h>

bool is_newline(int32_t c);
bool is_start_char(int32_t c);
bool is_end_char(int32_t c);

#endif /* ifndef TREE_SITTER_RST_UTILS_H_ */
