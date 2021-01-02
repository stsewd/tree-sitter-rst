build:
	tree-sitter generate

release: build format
	tree-sitter build-wasm
	# GitHub pages doesn't like symbolic links
	cp tree-sitter-rst.wasm docs/js/tree-sitter-rst.wasm

test: build
	tree-sitter test

update-examples:
	# https://sourceforge.net/p/docutils/code/HEAD/tree/trunk/docutils/test/functional/input/
	rm -rf test/examples/
	curl \
	  https://sourceforge.net/code-snapshots/svn/d/do/docutils/code/docutils-code-r8531-trunk-docutils-test-functional-input.zip \
	  --create-dirs \
	  -o test/examples/examples.zip
	unzip -jq test/examples/examples.zip "*.txt" -d test/examples
	rm test/examples/examples.zip
	rename .txt .rst test/examples/*.txt

parse-examples:
	# Tables aren't supported yet
	tree-sitter parse -q \
	  test/examples/*.rst \
	  !test/examples/table_colspan.rst

serve: build
	tree-sitter build-wasm
	tree-sitter web-ui

format:
	clang-format -i \
	  --style="{BasedOnStyle: webkit, IndentWidth: 2}" \
	  src/scanner.c \
	  src/tree_sitter_rst/*

.PHONY: build test format serve release update-examples parse-examples
