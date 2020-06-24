#include <stdlib.h>

#include "tree_sitter_rst/scanner.h"

RSTScanner* new_rst_scanner()
{
  RSTScanner* scanner = malloc(sizeof(RSTScanner));
  scanner->indent_stack = malloc(sizeof(int) * RST_SCANNER_STACK_MAX_CAPACITY);
  scanner->length = 0;

  scanner->push = rst_scanner_push;
  scanner->pop = rst_scanner_pop;
  scanner->serialize = rst_scanner_serialize;
  scanner->deserialize = rst_scanner_deserialize;

  return scanner;
}

void destroy_rst_scanner(RSTScanner* scanner)
{
  free(scanner->indent_stack);
  free(scanner);
}

void rst_scanner_push(RSTScanner* scanner, int value)
{
  if (scanner->length >= RST_SCANNER_STACK_MAX_CAPACITY) {
    return;
  }
  scanner->indent_stack[scanner->length++] = value;
}

int rst_scanner_pop(RSTScanner* scanner)
{
  if (scanner->length <= 0) {
    return 0;
  }
  return scanner->indent_stack[--scanner->length];
}

unsigned rst_scanner_serialize(RSTScanner* scanner, char* buffer)
{
  return 0;
}

void rst_scanner_deserialize(RSTScanner* scanner, char* buffer, unsigned length)
{
}
