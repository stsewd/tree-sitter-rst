#ifndef TREE_SITTER_RST_PARSER_H_
#define TREE_SITTER_RST_PARSER_H_

#include <stdbool.h>
#include <tree_sitter/parser.h>

bool parse_line(TSLexer* lexer, const bool* valid_symbols);
bool parse_overline(TSLexer* lexer, const bool* valid_symbols);
bool parse_underline(TSLexer* lexer, const bool* valid_symbols);
bool parse_char_bullet(TSLexer* lexer, const bool* valid_symbols);
bool parse_numeric_bullet(TSLexer* lexer, const bool* valid_symbols);
bool parse_field_name(TSLexer* lexer, const bool* valid_symbols);
bool parse_inline_markup(TSLexer* lexer, const bool* valid_symbols);
bool parse_inline_reference(TSLexer* lexer, const bool* valid_symbols);
bool parse_text(TSLexer* lexer, const bool* valid_symbols);

#endif /* TREE_SITTER_RST_PARSER_H_ */
