ifeq ($(OS),Windows_NT)
$(error Windows is not supported)
endif

LANGUAGE_NAME := tree-sitter-rst
HOMEPAGE_URL := https://github.com/stsewd/tree-sitter-rst
VERSION := 0.2.0

# repository
SRC_DIR := src

TS ?= tree-sitter

# install directory layout
PREFIX ?= /usr/local
DATADIR ?= $(PREFIX)/share
INCLUDEDIR ?= $(PREFIX)/include
LIBDIR ?= $(PREFIX)/lib
PCLIBDIR ?= $(LIBDIR)/pkgconfig

# source/object files
PARSER := $(SRC_DIR)/parser.c
EXTRAS := $(filter-out $(PARSER),$(wildcard $(SRC_DIR)/*.c))
OBJS := $(patsubst %.c,%.o,$(PARSER) $(EXTRAS))

# flags
ARFLAGS ?= rcs
override CFLAGS += -I$(SRC_DIR) -std=c11 -fPIC

# ABI versioning
SONAME_MAJOR = $(shell sed -n 's/\#define LANGUAGE_VERSION //p' $(PARSER))
SONAME_MINOR = $(word 1,$(subst ., ,$(VERSION)))

# OS-specific bits
ifeq ($(shell uname),Darwin)
	SOEXT = dylib
	SOEXTVER_MAJOR = $(SONAME_MAJOR).$(SOEXT)
	SOEXTVER = $(SONAME_MAJOR).$(SONAME_MINOR).$(SOEXT)
	LINKSHARED = -dynamiclib -Wl,-install_name,$(LIBDIR)/lib$(LANGUAGE_NAME).$(SOEXTVER),-rpath,@executable_path/../Frameworks
else
	SOEXT = so
	SOEXTVER_MAJOR = $(SOEXT).$(SONAME_MAJOR)
	SOEXTVER = $(SOEXT).$(SONAME_MAJOR).$(SONAME_MINOR)
	LINKSHARED = -shared -Wl,-soname,lib$(LANGUAGE_NAME).$(SOEXTVER)
endif
ifneq ($(filter $(shell uname),FreeBSD NetBSD DragonFly),)
	PCLIBDIR := $(PREFIX)/libdata/pkgconfig
endif

all: lib$(LANGUAGE_NAME).a lib$(LANGUAGE_NAME).$(SOEXT) $(LANGUAGE_NAME).pc

lib$(LANGUAGE_NAME).a: $(OBJS)
	$(AR) $(ARFLAGS) $@ $^

lib$(LANGUAGE_NAME).$(SOEXT): $(OBJS)
	$(CC) $(LDFLAGS) $(LINKSHARED) $^ $(LDLIBS) -o $@
ifneq ($(STRIP),)
	$(STRIP) $@
endif

$(LANGUAGE_NAME).pc: bindings/c/$(LANGUAGE_NAME).pc.in
	sed -e 's|@PROJECT_VERSION@|$(VERSION)|' \
		-e 's|@CMAKE_INSTALL_LIBDIR@|$(LIBDIR:$(PREFIX)/%=%)|' \
		-e 's|@CMAKE_INSTALL_INCLUDEDIR@|$(INCLUDEDIR:$(PREFIX)/%=%)|' \
		-e 's|@PROJECT_DESCRIPTION@|$(DESCRIPTION)|' \
		-e 's|@PROJECT_HOMEPAGE_URL@|$(HOMEPAGE_URL)|' \
		-e 's|@CMAKE_INSTALL_PREFIX@|$(PREFIX)|' $< > $@

$(PARSER): $(SRC_DIR)/grammar.json
	$(TS) generate $^

install: all
	install -d '$(DESTDIR)$(DATADIR)'/tree-sitter/queries/rst '$(DESTDIR)$(INCLUDEDIR)'/tree_sitter '$(DESTDIR)$(PCLIBDIR)' '$(DESTDIR)$(LIBDIR)'
	install -m644 bindings/c/tree_sitter/$(LANGUAGE_NAME).h '$(DESTDIR)$(INCLUDEDIR)'/tree_sitter/$(LANGUAGE_NAME).h
	install -m644 $(LANGUAGE_NAME).pc '$(DESTDIR)$(PCLIBDIR)'/$(LANGUAGE_NAME).pc
	install -m644 lib$(LANGUAGE_NAME).a '$(DESTDIR)$(LIBDIR)'/lib$(LANGUAGE_NAME).a
	install -m755 lib$(LANGUAGE_NAME).$(SOEXT) '$(DESTDIR)$(LIBDIR)'/lib$(LANGUAGE_NAME).$(SOEXTVER)
	ln -sf lib$(LANGUAGE_NAME).$(SOEXTVER) '$(DESTDIR)$(LIBDIR)'/lib$(LANGUAGE_NAME).$(SOEXTVER_MAJOR)
	ln -sf lib$(LANGUAGE_NAME).$(SOEXTVER_MAJOR) '$(DESTDIR)$(LIBDIR)'/lib$(LANGUAGE_NAME).$(SOEXT)
	install -m644 queries/*.scm '$(DESTDIR)$(DATADIR)'/tree-sitter/queries/rst

uninstall:
	$(RM) '$(DESTDIR)$(LIBDIR)'/lib$(LANGUAGE_NAME).a \
		'$(DESTDIR)$(LIBDIR)'/lib$(LANGUAGE_NAME).$(SOEXTVER) \
		'$(DESTDIR)$(LIBDIR)'/lib$(LANGUAGE_NAME).$(SOEXTVER_MAJOR) \
		'$(DESTDIR)$(LIBDIR)'/lib$(LANGUAGE_NAME).$(SOEXT) \
		'$(DESTDIR)$(INCLUDEDIR)'/tree_sitter/$(LANGUAGE_NAME).h \
		'$(DESTDIR)$(PCLIBDIR)'/$(LANGUAGE_NAME).pc
	$(RM) -r '$(DESTDIR)$(DATADIR)'/tree-sitter/queries/rst

clean:
	$(RM) $(OBJS) $(LANGUAGE_NAME).pc lib$(LANGUAGE_NAME).a lib$(LANGUAGE_NAME).$(SOEXT)

test:
	$(TS) test

release: all format
	npm run prestart
	# GitHub pages doesn't like symbolic links
	cp tree-sitter-rst.wasm docs/js/tree-sitter-parser.wasm

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
	npm run parse -- -q test/examples/*.rst

serve: all
	npm run prestart
	npm run start

format:
	clang-format -i \
	  --style="{BasedOnStyle: webkit, IndentWidth: 2, IndentCaseLabels: true}" \
	  src/scanner.c \
	  src/tree_sitter_rst/*

# Lint targets — run all three with `make lint`
# clang-tidy uses --line-filter so only hand-written files are reported;
# generated parser.c files are compiled for analysis but their diagnostics
# are suppressed.
CLANG_TIDY_LINE_FILTER := [{"name":"src/scanner.c"},{"name":"tree_sitter_rst/scanner.c"},{"name":"tree_sitter_rst/chars.c"},{"name":"tree_sitter_rst/table.c"}]

lint: lint-format lint-tidy lint-cppcheck

lint-format:
	clang-format --dry-run --Werror \
	  --style="{BasedOnStyle: webkit, IndentWidth: 2, IndentCaseLabels: true}" \
	  src/scanner.c \
	  src/tree_sitter_rst/*

lint-tidy:
	clang-tidy \
	  --line-filter='$(CLANG_TIDY_LINE_FILTER)' \
	  src/scanner.c \
	  -- -Isrc/ -std=c11

lint-cppcheck:
	cppcheck --enable=warning,performance \
	  --error-exitcode=1 \
	  --suppress=missingIncludeSystem \
	  --suppress='uninitvar:*/parser.c' \
	  --suppress='cstyleCast:*/parser.c' \
	  -Isrc/ \
	  src/scanner.c

# Python lint/format targets (use ruff; configured in pyproject.toml).
# Only hand-written Python is linted/formatted. The bindings under
# `bindings/python/` and `setup.py` are scaffolded by `tree-sitter init`
# and are excluded via the [tool.ruff] config in pyproject.toml.
PYTHON_SOURCES := utils

format-python:
	ruff format $(PYTHON_SOURCES)
	ruff check --fix $(PYTHON_SOURCES)

lint-python: lint-python-format lint-python-check

lint-python-format:
	ruff format --check $(PYTHON_SOURCES)

lint-python-check:
	ruff check $(PYTHON_SOURCES)

gen-punctuation-chars:
	./utils/gen_punctuation_chars.py > ./src/tree_sitter_rst/punctuation_chars.h

# Regenerate parser sources from grammar.js / tree-sitter.json. This only
# rewrites src/parser.c, src/grammar.json, and src/node-types.json — it
# leaves the language bindings (Makefile, setup.py, pyproject.toml,
# bindings/**) alone. Refreshing those is a manual `tree-sitter init
# --update` operation.
generate-bindings:
	$(TS) generate

wasm:
	$(TS) build --wasm

.PHONY: all install uninstall clean test release update-examples parse-examples serve format lint lint-format lint-tidy lint-cppcheck format-python lint-python lint-python-format lint-python-check generate-bindings wasm
