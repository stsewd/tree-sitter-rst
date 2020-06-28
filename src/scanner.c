#include <tree_sitter/parser.h>

#include "tree_sitter_rst/scanner.c"
#include "tree_sitter_rst/tokens.h"

void* tree_sitter_rst_external_scanner_create()
{
  return new_rst_scanner();
}

void tree_sitter_rst_external_scanner_destroy(void* payload)
{
  destroy_rst_scanner(payload);
}

unsigned tree_sitter_rst_external_scanner_serialize(
    void* payload,
    char* buffer)
{
  RSTScanner* scanner = payload;
  return scanner->serialize(scanner, buffer);
}

void tree_sitter_rst_external_scanner_deserialize(
    void* payload,
    const char* buffer,
    unsigned length)
{
  RSTScanner* scanner = payload;
  scanner->deserialize(scanner, buffer, length);
}

bool tree_sitter_rst_external_scanner_scan(
    void* payload,
    TSLexer* lexer,
    const bool* valid_symbols)
{
  RSTScanner* scanner = (RSTScanner*)payload;
  return scanner->scan(scanner, lexer, valid_symbols);
}
