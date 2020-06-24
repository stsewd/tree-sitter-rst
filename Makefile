build:
	tree-sitter generate

test: build
	tree-sitter test

format:
	clang-format -i \
	  --style="{BasedOnStyle: webkit, IndentWidth: 2}" \
	  src/scanner.c \
	  src/tree_sitter_rst/*

.PHONY: build test format
