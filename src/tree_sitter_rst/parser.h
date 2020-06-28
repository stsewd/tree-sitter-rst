#ifndef TREE_SITTER_RST_PARSER_H_
#define TREE_SITTER_RST_PARSER_H_

#include "tree_sitter_rst/scanner.h"

bool parse_indent(RSTScanner *scanner);
bool parse_overline(RSTScanner *scanner);
bool parse_underline(RSTScanner *scanner);
bool parse_char_bullet(RSTScanner *scanner);
bool parse_numeric_bullet(RSTScanner *scanner);
bool parse_field_name(RSTScanner *scanner);
bool parse_explict_markup_start(RSTScanner *scanner);
bool parse_inline_markup(RSTScanner *scanner);
bool parse_inline_reference(RSTScanner *scanner);
bool parse_text(RSTScanner *scanner);

#endif /* TREE_SITTER_RST_PARSER_H_ */
