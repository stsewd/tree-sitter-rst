#ifndef TREE_SITTER_RST_SCANNER_H
#define TREE_SITTER_RST_SCANNER_H

#define RST_SCANNER_STACK_MAX_CAPACITY 99

typedef struct RSTScanner RSTScanner;

struct RSTScanner {
  int* indent_stack;
  int length;

  void (*push)(RSTScanner* scanner, int value);
  int (*pop)(RSTScanner* scanner);

  unsigned (*serialize)(RSTScanner* scanner, char* buffer);
  void (*deserialize)(RSTScanner* scanner, char* buffer, unsigned length);
};

RSTScanner* new_rst_scanner();
void destroy_rst_scanner(RSTScanner* scanner);

void rst_scanner_push(RSTScanner* scanner, int value);
int rst_scanner_pop(RSTScanner* scanner);

unsigned rst_scanner_serialize(RSTScanner* scanner, char* buffer);
void rst_scanner_deserialize(RSTScanner* scanner, char* buffer, unsigned length);

#endif /* ifndef TREE_SITTER_RST_SCANNER_H */
