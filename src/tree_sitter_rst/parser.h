#ifndef TREE_SITTER_RST_PARSER_H_
#define TREE_SITTER_RST_PARSER_H_

#include <tree_sitter/parser.h>
#include <stdbool.h>

bool parse_list_bullet(TSLexer *lexer, const bool *valid_symbols);
bool parse_enumerated_list_bullet(TSLexer *lexer, const bool *valid_symbols);
bool parse_inline_markup(TSLexer *lexer, const bool *valid_symbols);
bool parse_inline_reference(TSLexer *lexer, const bool *valid_symbols);
bool parse_text(TSLexer *lexer, const bool *valid_symbols);

#endif /* TREE_SITTER_RST_PARSER_H_ */
