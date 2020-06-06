#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 93
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 49
#define ALIAS_COUNT 1
#define TOKEN_COUNT 21
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6

enum {
  sym__char_bullet = 1,
  sym__numeric_bullet = 2,
  anon_sym_COLON = 3,
  anon_sym_ = 4,
  anon_sym_TAB = 5,
  anon_sym_2 = 6,
  anon_sym_3 = 7,
  sym__field_name = 8,
  aux_sym_option_list_item_token1 = 9,
  anon_sym_PIPE = 10,
  sym__markup_start = 11,
  anon_sym_LBRACK = 12,
  anon_sym_RBRACK = 13,
  aux_sym__label_token1 = 14,
  anon_sym_POUND = 15,
  aux_sym__label_token2 = 16,
  anon_sym_STAR = 17,
  aux_sym__line_token1 = 18,
  sym__eol = 19,
  sym__blank_line = 20,
  sym_document = 21,
  sym__body_elements = 22,
  sym_paragraph = 23,
  sym__lists = 24,
  sym_bullet_list = 25,
  sym__bullet_list_item = 26,
  sym_enumerated_list = 27,
  sym__enumerated_list_item = 28,
  sym_field_list = 29,
  sym_field = 30,
  sym__field_body = 31,
  sym_option_list = 32,
  sym_option_list_item = 33,
  sym_line_block = 34,
  sym__single_line_block = 35,
  sym__markup_blocks = 36,
  sym__footnote_block = 37,
  sym_footnote = 38,
  sym__label = 39,
  aux_sym__line = 40,
  aux_sym_document_repeat1 = 41,
  aux_sym_paragraph_repeat1 = 42,
  aux_sym_bullet_list_repeat1 = 43,
  aux_sym_enumerated_list_repeat1 = 44,
  aux_sym_field_list_repeat1 = 45,
  aux_sym_option_list_repeat1 = 46,
  aux_sym_line_block_repeat1 = 47,
  aux_sym__footnote_block_repeat1 = 48,
  alias_sym_list_item = 49,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__char_bullet] = "_char_bullet",
  [sym__numeric_bullet] = "_numeric_bullet",
  [anon_sym_COLON] = ":",
  [anon_sym_] = " ",
  [anon_sym_TAB] = "\t",
  [anon_sym_2] = "",
  [anon_sym_3] = "\f",
  [sym__field_name] = "_field_name",
  [aux_sym_option_list_item_token1] = "option_list_item_token1",
  [anon_sym_PIPE] = "|",
  [sym__markup_start] = "_markup_start",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [aux_sym__label_token1] = "_label_token1",
  [anon_sym_POUND] = "#",
  [aux_sym__label_token2] = "_label_token2",
  [anon_sym_STAR] = "*",
  [aux_sym__line_token1] = "_line_token1",
  [sym__eol] = "_eol",
  [sym__blank_line] = "_blank_line",
  [sym_document] = "document",
  [sym__body_elements] = "_body_elements",
  [sym_paragraph] = "paragraph",
  [sym__lists] = "_lists",
  [sym_bullet_list] = "bullet_list",
  [sym__bullet_list_item] = "_bullet_list_item",
  [sym_enumerated_list] = "enumerated_list",
  [sym__enumerated_list_item] = "_enumerated_list_item",
  [sym_field_list] = "field_list",
  [sym_field] = "field",
  [sym__field_body] = "_field_body",
  [sym_option_list] = "option_list",
  [sym_option_list_item] = "option_list_item",
  [sym_line_block] = "line_block",
  [sym__single_line_block] = "_single_line_block",
  [sym__markup_blocks] = "_markup_blocks",
  [sym__footnote_block] = "_footnote_block",
  [sym_footnote] = "footnote",
  [sym__label] = "_label",
  [aux_sym__line] = "_line",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_paragraph_repeat1] = "paragraph_repeat1",
  [aux_sym_bullet_list_repeat1] = "bullet_list_repeat1",
  [aux_sym_enumerated_list_repeat1] = "enumerated_list_repeat1",
  [aux_sym_field_list_repeat1] = "field_list_repeat1",
  [aux_sym_option_list_repeat1] = "option_list_repeat1",
  [aux_sym_line_block_repeat1] = "line_block_repeat1",
  [aux_sym__footnote_block_repeat1] = "_footnote_block_repeat1",
  [alias_sym_list_item] = "list_item",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__char_bullet] = sym__char_bullet,
  [sym__numeric_bullet] = sym__numeric_bullet,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_] = anon_sym_,
  [anon_sym_TAB] = anon_sym_TAB,
  [anon_sym_2] = anon_sym_2,
  [anon_sym_3] = anon_sym_3,
  [sym__field_name] = sym__field_name,
  [aux_sym_option_list_item_token1] = aux_sym_option_list_item_token1,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [sym__markup_start] = sym__markup_start,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [aux_sym__label_token1] = aux_sym__label_token1,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym__label_token2] = aux_sym__label_token2,
  [anon_sym_STAR] = anon_sym_STAR,
  [aux_sym__line_token1] = aux_sym__line_token1,
  [sym__eol] = sym__eol,
  [sym__blank_line] = sym__blank_line,
  [sym_document] = sym_document,
  [sym__body_elements] = sym__body_elements,
  [sym_paragraph] = sym_paragraph,
  [sym__lists] = sym__lists,
  [sym_bullet_list] = sym_bullet_list,
  [sym__bullet_list_item] = sym__bullet_list_item,
  [sym_enumerated_list] = sym_enumerated_list,
  [sym__enumerated_list_item] = sym__enumerated_list_item,
  [sym_field_list] = sym_field_list,
  [sym_field] = sym_field,
  [sym__field_body] = sym__field_body,
  [sym_option_list] = sym_option_list,
  [sym_option_list_item] = sym_option_list_item,
  [sym_line_block] = sym_line_block,
  [sym__single_line_block] = sym__single_line_block,
  [sym__markup_blocks] = sym__markup_blocks,
  [sym__footnote_block] = sym__footnote_block,
  [sym_footnote] = sym_footnote,
  [sym__label] = sym__label,
  [aux_sym__line] = aux_sym__line,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_paragraph_repeat1] = aux_sym_paragraph_repeat1,
  [aux_sym_bullet_list_repeat1] = aux_sym_bullet_list_repeat1,
  [aux_sym_enumerated_list_repeat1] = aux_sym_enumerated_list_repeat1,
  [aux_sym_field_list_repeat1] = aux_sym_field_list_repeat1,
  [aux_sym_option_list_repeat1] = aux_sym_option_list_repeat1,
  [aux_sym_line_block_repeat1] = aux_sym_line_block_repeat1,
  [aux_sym__footnote_block_repeat1] = aux_sym__footnote_block_repeat1,
  [alias_sym_list_item] = alias_sym_list_item,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__char_bullet] = {
    .visible = false,
    .named = true,
  },
  [sym__numeric_bullet] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TAB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_3] = {
    .visible = true,
    .named = false,
  },
  [sym__field_name] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_option_list_item_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [sym__markup_start] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__label_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__label_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__line_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__eol] = {
    .visible = false,
    .named = true,
  },
  [sym__blank_line] = {
    .visible = false,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym__body_elements] = {
    .visible = false,
    .named = true,
  },
  [sym_paragraph] = {
    .visible = true,
    .named = true,
  },
  [sym__lists] = {
    .visible = false,
    .named = true,
  },
  [sym_bullet_list] = {
    .visible = true,
    .named = true,
  },
  [sym__bullet_list_item] = {
    .visible = false,
    .named = true,
  },
  [sym_enumerated_list] = {
    .visible = true,
    .named = true,
  },
  [sym__enumerated_list_item] = {
    .visible = false,
    .named = true,
  },
  [sym_field_list] = {
    .visible = true,
    .named = true,
  },
  [sym_field] = {
    .visible = true,
    .named = true,
  },
  [sym__field_body] = {
    .visible = false,
    .named = true,
  },
  [sym_option_list] = {
    .visible = true,
    .named = true,
  },
  [sym_option_list_item] = {
    .visible = true,
    .named = true,
  },
  [sym_line_block] = {
    .visible = true,
    .named = true,
  },
  [sym__single_line_block] = {
    .visible = false,
    .named = true,
  },
  [sym__markup_blocks] = {
    .visible = false,
    .named = true,
  },
  [sym__footnote_block] = {
    .visible = false,
    .named = true,
  },
  [sym_footnote] = {
    .visible = true,
    .named = true,
  },
  [sym__label] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__line] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_paragraph_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bullet_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enumerated_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_field_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_option_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_line_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__footnote_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_list_item] = {
    .visible = true,
    .named = true,
  },
};

static TSSymbol ts_alias_sequences[3][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_list_item,
  },
  [2] = {
    [1] = alias_sym_list_item,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(19);
      if (lookahead == '\t') ADVANCE(24);
      if (lookahead == 11) ADVANCE(25);
      if (lookahead == '\f') ADVANCE(26);
      if (lookahead == ' ') ADVANCE(23);
      if (lookahead == '#') ADVANCE(35);
      if (lookahead == '*') ADVANCE(39);
      if (lookahead == '+') ADVANCE(48);
      if (lookahead == '-') ADVANCE(47);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == '/') ADVANCE(49);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == '[') ADVANCE(31);
      if (lookahead == ']') ADVANCE(32);
      if (lookahead == '|') ADVANCE(29);
      if (lookahead == 8226 ||
          lookahead == 8227 ||
          lookahead == 8259) ADVANCE(46);
      if (lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'I' ||
          lookahead == 'L' ||
          lookahead == 'M' ||
          lookahead == 'V' ||
          lookahead == 'X') ADVANCE(42);
      if (lookahead == 'c' ||
          lookahead == 'd' ||
          lookahead == 'i' ||
          lookahead == 'l' ||
          lookahead == 'm' ||
          lookahead == 'v' ||
          lookahead == 'x') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(41);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(40);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(24);
      if (lookahead == 11) ADVANCE(25);
      if (lookahead == '\f') ADVANCE(26);
      if (lookahead == ' ') ADVANCE(23);
      if (lookahead == '#') ADVANCE(36);
      if (lookahead == '*') ADVANCE(38);
      if (lookahead == '[') ADVANCE(31);
      if (lookahead == ']') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '+') ADVANCE(14);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '/') ADVANCE(14);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'I' ||
          lookahead == 'L' ||
          lookahead == 'M' ||
          lookahead == 'V' ||
          lookahead == 'X') ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == 'c' ||
          lookahead == 'd' ||
          lookahead == 'i' ||
          lookahead == 'l' ||
          lookahead == 'm' ||
          lookahead == 'v' ||
          lookahead == 'x') ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f') ADVANCE(11);
      if (lookahead == ' ') ADVANCE(12);
      if (lookahead == ',') ADVANCE(2);
      if (lookahead == '=') ADVANCE(15);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(21);
      END_STATE();
    case 10:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(30);
      END_STATE();
    case 11:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(28);
      END_STATE();
    case 12:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead == ',') ADVANCE(2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 16:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(40);
      END_STATE();
    case 17:
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(27);
      END_STATE();
    case 18:
      if (eof) ADVANCE(19);
      if (lookahead == '#') ADVANCE(41);
      if (lookahead == '*' ||
          lookahead == 8226 ||
          lookahead == 8227 ||
          lookahead == 8259) ADVANCE(46);
      if (lookahead == '+') ADVANCE(48);
      if (lookahead == '-') ADVANCE(47);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == '/') ADVANCE(49);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == '|') ADVANCE(29);
      if (lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'I' ||
          lookahead == 'L' ||
          lookahead == 'M' ||
          lookahead == 'V' ||
          lookahead == 'X') ADVANCE(42);
      if (lookahead == 'c' ||
          lookahead == 'd' ||
          lookahead == 'i' ||
          lookahead == 'l' ||
          lookahead == 'm' ||
          lookahead == 'v' ||
          lookahead == 'x') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(41);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(40);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym__char_bullet);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym__numeric_bullet);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_TAB);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_3);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym__field_name);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_option_list_item_token1);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym__markup_start);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == '.') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '.') ADVANCE(9);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym__label_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(20);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym__line_token1);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '.') ADVANCE(9);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'I' ||
          lookahead == 'L' ||
          lookahead == 'M' ||
          lookahead == 'V' ||
          lookahead == 'X') ADVANCE(5);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == 'c' ||
          lookahead == 'd' ||
          lookahead == 'i' ||
          lookahead == 'l' ||
          lookahead == 'm' ||
          lookahead == 'v' ||
          lookahead == 'x') ADVANCE(6);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '.') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '.') ADVANCE(10);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(20);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead == '-') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 18, .external_lex_state = 1},
  [2] = {.lex_state = 18, .external_lex_state = 1},
  [3] = {.lex_state = 18, .external_lex_state = 1},
  [4] = {.lex_state = 18, .external_lex_state = 1},
  [5] = {.lex_state = 1, .external_lex_state = 2},
  [6] = {.lex_state = 1, .external_lex_state = 1},
  [7] = {.lex_state = 1, .external_lex_state = 2},
  [8] = {.lex_state = 1, .external_lex_state = 2},
  [9] = {.lex_state = 1, .external_lex_state = 2},
  [10] = {.lex_state = 1, .external_lex_state = 2},
  [11] = {.lex_state = 1, .external_lex_state = 2},
  [12] = {.lex_state = 1, .external_lex_state = 2},
  [13] = {.lex_state = 16, .external_lex_state = 1},
  [14] = {.lex_state = 18, .external_lex_state = 2},
  [15] = {.lex_state = 16, .external_lex_state = 1},
  [16] = {.lex_state = 0, .external_lex_state = 2},
  [17] = {.lex_state = 0, .external_lex_state = 2},
  [18] = {.lex_state = 16, .external_lex_state = 2},
  [19] = {.lex_state = 0, .external_lex_state = 2},
  [20] = {.lex_state = 16, .external_lex_state = 1},
  [21] = {.lex_state = 16, .external_lex_state = 2},
  [22] = {.lex_state = 18, .external_lex_state = 2},
  [23] = {.lex_state = 18, .external_lex_state = 2},
  [24] = {.lex_state = 0, .external_lex_state = 2},
  [25] = {.lex_state = 0, .external_lex_state = 2},
  [26] = {.lex_state = 0, .external_lex_state = 2},
  [27] = {.lex_state = 0, .external_lex_state = 2},
  [28] = {.lex_state = 16, .external_lex_state = 1},
  [29] = {.lex_state = 16, .external_lex_state = 1},
  [30] = {.lex_state = 16, .external_lex_state = 1},
  [31] = {.lex_state = 16, .external_lex_state = 1},
  [32] = {.lex_state = 0, .external_lex_state = 2},
  [33] = {.lex_state = 18, .external_lex_state = 2},
  [34] = {.lex_state = 16, .external_lex_state = 2},
  [35] = {.lex_state = 16, .external_lex_state = 2},
  [36] = {.lex_state = 16, .external_lex_state = 1},
  [37] = {.lex_state = 16, .external_lex_state = 1},
  [38] = {.lex_state = 16, .external_lex_state = 2},
  [39] = {.lex_state = 16, .external_lex_state = 2},
  [40] = {.lex_state = 16, .external_lex_state = 2},
  [41] = {.lex_state = 16, .external_lex_state = 2},
  [42] = {.lex_state = 16, .external_lex_state = 2},
  [43] = {.lex_state = 16, .external_lex_state = 2},
  [44] = {.lex_state = 16, .external_lex_state = 2},
  [45] = {.lex_state = 16, .external_lex_state = 2},
  [46] = {.lex_state = 16, .external_lex_state = 2},
  [47] = {.lex_state = 16, .external_lex_state = 2},
  [48] = {.lex_state = 16, .external_lex_state = 2},
  [49] = {.lex_state = 16, .external_lex_state = 2},
  [50] = {.lex_state = 16, .external_lex_state = 2},
  [51] = {.lex_state = 16, .external_lex_state = 2},
  [52] = {.lex_state = 16, .external_lex_state = 2},
  [53] = {.lex_state = 16, .external_lex_state = 2},
  [54] = {.lex_state = 16, .external_lex_state = 2},
  [55] = {.lex_state = 16, .external_lex_state = 2},
  [56] = {.lex_state = 0, .external_lex_state = 1},
  [57] = {.lex_state = 16, .external_lex_state = 2},
  [58] = {.lex_state = 0, .external_lex_state = 1},
  [59] = {.lex_state = 1, .external_lex_state = 2},
  [60] = {.lex_state = 0, .external_lex_state = 1},
  [61] = {.lex_state = 17, .external_lex_state = 2},
  [62] = {.lex_state = 1, .external_lex_state = 2},
  [63] = {.lex_state = 0, .external_lex_state = 2},
  [64] = {.lex_state = 17, .external_lex_state = 2},
  [65] = {.lex_state = 0, .external_lex_state = 1},
  [66] = {.lex_state = 0, .external_lex_state = 1},
  [67] = {.lex_state = 0, .external_lex_state = 1},
  [68] = {.lex_state = 0, .external_lex_state = 1},
  [69] = {.lex_state = 0, .external_lex_state = 1},
  [70] = {.lex_state = 0, .external_lex_state = 2},
  [71] = {.lex_state = 1, .external_lex_state = 2},
  [72] = {.lex_state = 0, .external_lex_state = 1},
  [73] = {.lex_state = 0, .external_lex_state = 1},
  [74] = {.lex_state = 0, .external_lex_state = 1},
  [75] = {.lex_state = 1, .external_lex_state = 2},
  [76] = {.lex_state = 0, .external_lex_state = 2},
  [77] = {.lex_state = 0, .external_lex_state = 2},
  [78] = {.lex_state = 0, .external_lex_state = 2},
  [79] = {.lex_state = 0, .external_lex_state = 1},
  [80] = {.lex_state = 0, .external_lex_state = 2},
  [81] = {.lex_state = 18, .external_lex_state = 2},
  [82] = {.lex_state = 18, .external_lex_state = 2},
  [83] = {.lex_state = 0, .external_lex_state = 2},
  [84] = {.lex_state = 0, .external_lex_state = 1},
  [85] = {.lex_state = 0, .external_lex_state = 1},
  [86] = {.lex_state = 0, .external_lex_state = 2},
  [87] = {.lex_state = 0, .external_lex_state = 2},
  [88] = {.lex_state = 0, .external_lex_state = 2},
  [89] = {.lex_state = 0, .external_lex_state = 2},
  [90] = {.lex_state = 0, .external_lex_state = 2},
  [91] = {.lex_state = 0, .external_lex_state = 2},
  [92] = {.lex_state = 0, .external_lex_state = 2},
};

enum {
  ts_external_token__eol = 0,
  ts_external_token__blank_line = 1,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__eol] = sym__eol,
  [ts_external_token__blank_line] = sym__blank_line,
};

static bool ts_external_scanner_states[3][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__eol] = true,
    [ts_external_token__blank_line] = true,
  },
  [2] = {
    [ts_external_token__eol] = true,
  },
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__char_bullet] = ACTIONS(1),
    [sym__numeric_bullet] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_TAB] = ACTIONS(1),
    [anon_sym_2] = ACTIONS(1),
    [anon_sym_3] = ACTIONS(1),
    [aux_sym_option_list_item_token1] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [sym__markup_start] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [aux_sym__label_token1] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [aux_sym__line_token1] = ACTIONS(1),
    [sym__eol] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(70),
    [sym__body_elements] = STATE(2),
    [sym_paragraph] = STATE(66),
    [sym__lists] = STATE(66),
    [sym_bullet_list] = STATE(66),
    [sym__bullet_list_item] = STATE(68),
    [sym_enumerated_list] = STATE(66),
    [sym__enumerated_list_item] = STATE(65),
    [sym_field_list] = STATE(66),
    [sym_field] = STATE(60),
    [sym_option_list] = STATE(66),
    [sym_option_list_item] = STATE(79),
    [sym_line_block] = STATE(66),
    [sym__single_line_block] = STATE(85),
    [sym__markup_blocks] = STATE(66),
    [sym__footnote_block] = STATE(66),
    [sym_footnote] = STATE(84),
    [aux_sym__line] = STATE(20),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_paragraph_repeat1] = STATE(21),
    [aux_sym_bullet_list_repeat1] = STATE(22),
    [aux_sym_enumerated_list_repeat1] = STATE(23),
    [aux_sym_field_list_repeat1] = STATE(24),
    [aux_sym_option_list_repeat1] = STATE(25),
    [aux_sym_line_block_repeat1] = STATE(26),
    [aux_sym__footnote_block_repeat1] = STATE(27),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym__char_bullet] = ACTIONS(7),
    [sym__numeric_bullet] = ACTIONS(9),
    [anon_sym_COLON] = ACTIONS(11),
    [aux_sym_option_list_item_token1] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(15),
    [sym__markup_start] = ACTIONS(17),
    [aux_sym__line_token1] = ACTIONS(19),
    [sym__eol] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(21),
  },
  [2] = {
    [sym__body_elements] = STATE(3),
    [sym_paragraph] = STATE(66),
    [sym__lists] = STATE(66),
    [sym_bullet_list] = STATE(66),
    [sym__bullet_list_item] = STATE(68),
    [sym_enumerated_list] = STATE(66),
    [sym__enumerated_list_item] = STATE(65),
    [sym_field_list] = STATE(66),
    [sym_field] = STATE(60),
    [sym_option_list] = STATE(66),
    [sym_option_list_item] = STATE(79),
    [sym_line_block] = STATE(66),
    [sym__single_line_block] = STATE(85),
    [sym__markup_blocks] = STATE(66),
    [sym__footnote_block] = STATE(66),
    [sym_footnote] = STATE(84),
    [aux_sym__line] = STATE(20),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_paragraph_repeat1] = STATE(21),
    [aux_sym_bullet_list_repeat1] = STATE(22),
    [aux_sym_enumerated_list_repeat1] = STATE(23),
    [aux_sym_field_list_repeat1] = STATE(24),
    [aux_sym_option_list_repeat1] = STATE(25),
    [aux_sym_line_block_repeat1] = STATE(26),
    [aux_sym__footnote_block_repeat1] = STATE(27),
    [ts_builtin_sym_end] = ACTIONS(23),
    [sym__char_bullet] = ACTIONS(7),
    [sym__numeric_bullet] = ACTIONS(9),
    [anon_sym_COLON] = ACTIONS(11),
    [aux_sym_option_list_item_token1] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(15),
    [sym__markup_start] = ACTIONS(17),
    [aux_sym__line_token1] = ACTIONS(19),
    [sym__eol] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(25),
  },
  [3] = {
    [sym__body_elements] = STATE(3),
    [sym_paragraph] = STATE(66),
    [sym__lists] = STATE(66),
    [sym_bullet_list] = STATE(66),
    [sym__bullet_list_item] = STATE(68),
    [sym_enumerated_list] = STATE(66),
    [sym__enumerated_list_item] = STATE(65),
    [sym_field_list] = STATE(66),
    [sym_field] = STATE(60),
    [sym_option_list] = STATE(66),
    [sym_option_list_item] = STATE(79),
    [sym_line_block] = STATE(66),
    [sym__single_line_block] = STATE(85),
    [sym__markup_blocks] = STATE(66),
    [sym__footnote_block] = STATE(66),
    [sym_footnote] = STATE(84),
    [aux_sym__line] = STATE(20),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_paragraph_repeat1] = STATE(21),
    [aux_sym_bullet_list_repeat1] = STATE(22),
    [aux_sym_enumerated_list_repeat1] = STATE(23),
    [aux_sym_field_list_repeat1] = STATE(24),
    [aux_sym_option_list_repeat1] = STATE(25),
    [aux_sym_line_block_repeat1] = STATE(26),
    [aux_sym__footnote_block_repeat1] = STATE(27),
    [ts_builtin_sym_end] = ACTIONS(27),
    [sym__char_bullet] = ACTIONS(29),
    [sym__numeric_bullet] = ACTIONS(32),
    [anon_sym_COLON] = ACTIONS(35),
    [aux_sym_option_list_item_token1] = ACTIONS(38),
    [anon_sym_PIPE] = ACTIONS(41),
    [sym__markup_start] = ACTIONS(44),
    [aux_sym__line_token1] = ACTIONS(47),
    [sym__eol] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(50),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(55), 1,
      aux_sym__line_token1,
    ACTIONS(53), 8,
      sym__blank_line,
      ts_builtin_sym_end,
      sym__char_bullet,
      sym__numeric_bullet,
      anon_sym_COLON,
      aux_sym_option_list_item_token1,
      anon_sym_PIPE,
      sym__markup_start,
  [17] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(59), 1,
      anon_sym_POUND,
    STATE(62), 1,
      sym__label,
    ACTIONS(57), 3,
      aux_sym__label_token1,
      aux_sym__label_token2,
      anon_sym_STAR,
  [32] = 2,
    ACTIONS(63), 2,
      sym__eol,
      sym__blank_line,
    ACTIONS(61), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [43] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(67), 1,
      anon_sym_POUND,
    STATE(75), 1,
      sym__label,
    ACTIONS(65), 3,
      aux_sym__label_token1,
      aux_sym__label_token2,
      anon_sym_STAR,
  [58] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(69), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [68] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(71), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [78] = 2,
    ACTIONS(63), 1,
      sym__eol,
    ACTIONS(73), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [88] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(75), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [98] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(77), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [108] = 3,
    ACTIONS(79), 1,
      aux_sym__line_token1,
    STATE(37), 1,
      aux_sym__line,
    ACTIONS(81), 2,
      sym__eol,
      sym__blank_line,
  [119] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(83), 1,
      sym__char_bullet,
    STATE(14), 1,
      aux_sym_bullet_list_repeat1,
    STATE(92), 1,
      sym__bullet_list_item,
  [132] = 3,
    ACTIONS(79), 1,
      aux_sym__line_token1,
    STATE(37), 1,
      aux_sym__line,
    ACTIONS(86), 2,
      sym__eol,
      sym__blank_line,
  [143] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(88), 1,
      sym__markup_start,
    STATE(16), 1,
      aux_sym__footnote_block_repeat1,
    STATE(87), 1,
      sym_footnote,
  [156] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(91), 1,
      anon_sym_PIPE,
    STATE(17), 1,
      aux_sym_line_block_repeat1,
    STATE(88), 1,
      sym__single_line_block,
  [169] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(94), 1,
      aux_sym__line_token1,
    STATE(30), 1,
      aux_sym__line,
    STATE(67), 1,
      sym__field_body,
  [182] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(96), 1,
      aux_sym_option_list_item_token1,
    STATE(19), 1,
      aux_sym_option_list_repeat1,
    STATE(89), 1,
      sym_option_list_item,
  [195] = 4,
    ACTIONS(79), 1,
      aux_sym__line_token1,
    ACTIONS(99), 1,
      sym__eol,
    ACTIONS(101), 1,
      sym__blank_line,
    STATE(37), 1,
      aux_sym__line,
  [208] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(103), 1,
      aux_sym__line_token1,
    STATE(34), 1,
      aux_sym_paragraph_repeat1,
    STATE(36), 1,
      aux_sym__line,
  [221] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(7), 1,
      sym__char_bullet,
    STATE(14), 1,
      aux_sym_bullet_list_repeat1,
    STATE(74), 1,
      sym__bullet_list_item,
  [234] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(9), 1,
      sym__numeric_bullet,
    STATE(33), 1,
      aux_sym_enumerated_list_repeat1,
    STATE(73), 1,
      sym__enumerated_list_item,
  [247] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(11), 1,
      anon_sym_COLON,
    STATE(32), 1,
      aux_sym_field_list_repeat1,
    STATE(72), 1,
      sym_field,
  [260] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(13), 1,
      aux_sym_option_list_item_token1,
    STATE(19), 1,
      aux_sym_option_list_repeat1,
    STATE(69), 1,
      sym_option_list_item,
  [273] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(15), 1,
      anon_sym_PIPE,
    STATE(17), 1,
      aux_sym_line_block_repeat1,
    STATE(56), 1,
      sym__single_line_block,
  [286] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(17), 1,
      sym__markup_start,
    STATE(16), 1,
      aux_sym__footnote_block_repeat1,
    STATE(58), 1,
      sym_footnote,
  [299] = 3,
    ACTIONS(79), 1,
      aux_sym__line_token1,
    STATE(37), 1,
      aux_sym__line,
    ACTIONS(105), 2,
      sym__eol,
      sym__blank_line,
  [310] = 3,
    ACTIONS(79), 1,
      aux_sym__line_token1,
    STATE(37), 1,
      aux_sym__line,
    ACTIONS(107), 2,
      sym__eol,
      sym__blank_line,
  [321] = 3,
    ACTIONS(79), 1,
      aux_sym__line_token1,
    STATE(37), 1,
      aux_sym__line,
    ACTIONS(109), 2,
      sym__eol,
      sym__blank_line,
  [332] = 3,
    ACTIONS(79), 1,
      aux_sym__line_token1,
    STATE(37), 1,
      aux_sym__line,
    ACTIONS(111), 2,
      sym__eol,
      sym__blank_line,
  [343] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(113), 1,
      anon_sym_COLON,
    STATE(32), 1,
      aux_sym_field_list_repeat1,
    STATE(90), 1,
      sym_field,
  [356] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(116), 1,
      sym__numeric_bullet,
    STATE(33), 1,
      aux_sym_enumerated_list_repeat1,
    STATE(91), 1,
      sym__enumerated_list_item,
  [369] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(119), 1,
      aux_sym__line_token1,
    STATE(34), 1,
      aux_sym_paragraph_repeat1,
    STATE(44), 1,
      aux_sym__line,
  [382] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(122), 1,
      aux_sym__line_token1,
    STATE(42), 1,
      aux_sym__line,
    STATE(86), 1,
      sym__field_body,
  [395] = 4,
    ACTIONS(79), 1,
      aux_sym__line_token1,
    ACTIONS(99), 1,
      sym__eol,
    ACTIONS(124), 1,
      sym__blank_line,
    STATE(37), 1,
      aux_sym__line,
  [408] = 3,
    ACTIONS(126), 1,
      aux_sym__line_token1,
    STATE(37), 1,
      aux_sym__line,
    ACTIONS(129), 2,
      sym__eol,
      sym__blank_line,
  [419] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(131), 1,
      aux_sym__line_token1,
    STATE(41), 1,
      aux_sym__line,
  [429] = 3,
    ACTIONS(111), 1,
      sym__eol,
    ACTIONS(133), 1,
      aux_sym__line_token1,
    STATE(40), 1,
      aux_sym__line,
  [439] = 3,
    ACTIONS(129), 1,
      sym__eol,
    ACTIONS(135), 1,
      aux_sym__line_token1,
    STATE(40), 1,
      aux_sym__line,
  [449] = 3,
    ACTIONS(86), 1,
      sym__eol,
    ACTIONS(133), 1,
      aux_sym__line_token1,
    STATE(40), 1,
      aux_sym__line,
  [459] = 3,
    ACTIONS(109), 1,
      sym__eol,
    ACTIONS(133), 1,
      aux_sym__line_token1,
    STATE(40), 1,
      aux_sym__line,
  [469] = 3,
    ACTIONS(107), 1,
      sym__eol,
    ACTIONS(133), 1,
      aux_sym__line_token1,
    STATE(40), 1,
      aux_sym__line,
  [479] = 3,
    ACTIONS(99), 1,
      sym__eol,
    ACTIONS(133), 1,
      aux_sym__line_token1,
    STATE(40), 1,
      aux_sym__line,
  [489] = 3,
    ACTIONS(105), 1,
      sym__eol,
    ACTIONS(133), 1,
      aux_sym__line_token1,
    STATE(40), 1,
      aux_sym__line,
  [499] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(138), 1,
      aux_sym__line_token1,
    STATE(49), 1,
      aux_sym__line,
  [509] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(140), 1,
      aux_sym__line_token1,
    STATE(13), 1,
      aux_sym__line,
  [519] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(142), 1,
      aux_sym__line_token1,
    STATE(15), 1,
      aux_sym__line,
  [529] = 3,
    ACTIONS(81), 1,
      sym__eol,
    ACTIONS(133), 1,
      aux_sym__line_token1,
    STATE(40), 1,
      aux_sym__line,
  [539] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(144), 1,
      aux_sym__line_token1,
    STATE(45), 1,
      aux_sym__line,
  [549] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(146), 1,
      aux_sym__line_token1,
    STATE(43), 1,
      aux_sym__line,
  [559] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(148), 1,
      aux_sym__line_token1,
    STATE(39), 1,
      aux_sym__line,
  [569] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(150), 1,
      aux_sym__line_token1,
    STATE(31), 1,
      aux_sym__line,
  [579] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(152), 1,
      aux_sym__line_token1,
    STATE(28), 1,
      aux_sym__line,
  [589] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(154), 1,
      aux_sym__line_token1,
    STATE(29), 1,
      aux_sym__line,
  [599] = 2,
    ACTIONS(156), 1,
      sym__eol,
    ACTIONS(158), 1,
      sym__blank_line,
  [606] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(160), 1,
      aux_sym__line_token1,
  [613] = 2,
    ACTIONS(162), 1,
      sym__eol,
    ACTIONS(164), 1,
      sym__blank_line,
  [620] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(166), 1,
      anon_sym_LBRACK,
  [627] = 2,
    ACTIONS(168), 1,
      sym__eol,
    ACTIONS(170), 1,
      sym__blank_line,
  [634] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(172), 1,
      sym__field_name,
  [641] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(174), 1,
      anon_sym_RBRACK,
  [648] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(176), 1,
      anon_sym_COLON,
  [655] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(178), 1,
      sym__field_name,
  [662] = 2,
    ACTIONS(180), 1,
      sym__eol,
    ACTIONS(182), 1,
      sym__blank_line,
  [669] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(184), 1,
      sym__blank_line,
  [676] = 1,
    ACTIONS(186), 2,
      sym__eol,
      sym__blank_line,
  [681] = 2,
    ACTIONS(188), 1,
      sym__eol,
    ACTIONS(190), 1,
      sym__blank_line,
  [688] = 2,
    ACTIONS(192), 1,
      sym__eol,
    ACTIONS(194), 1,
      sym__blank_line,
  [695] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(196), 1,
      ts_builtin_sym_end,
  [702] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
  [709] = 2,
    ACTIONS(168), 1,
      sym__eol,
    ACTIONS(200), 1,
      sym__blank_line,
  [716] = 2,
    ACTIONS(180), 1,
      sym__eol,
    ACTIONS(202), 1,
      sym__blank_line,
  [723] = 2,
    ACTIONS(188), 1,
      sym__eol,
    ACTIONS(204), 1,
      sym__blank_line,
  [730] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(206), 1,
      anon_sym_RBRACK,
  [737] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(208), 1,
      sym__markup_start,
  [744] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(210), 1,
      anon_sym_PIPE,
  [751] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(212), 1,
      aux_sym_option_list_item_token1,
  [758] = 2,
    ACTIONS(192), 1,
      sym__eol,
    ACTIONS(214), 1,
      sym__blank_line,
  [765] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(216), 1,
      anon_sym_COLON,
  [772] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(218), 1,
      sym__numeric_bullet,
  [779] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(220), 1,
      sym__char_bullet,
  [786] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(222), 1,
      anon_sym_COLON,
  [793] = 2,
    ACTIONS(162), 1,
      sym__eol,
    ACTIONS(224), 1,
      sym__blank_line,
  [800] = 2,
    ACTIONS(156), 1,
      sym__eol,
    ACTIONS(226), 1,
      sym__blank_line,
  [807] = 1,
    ACTIONS(186), 1,
      sym__eol,
  [811] = 1,
    ACTIONS(162), 1,
      sym__eol,
  [815] = 1,
    ACTIONS(156), 1,
      sym__eol,
  [819] = 1,
    ACTIONS(192), 1,
      sym__eol,
  [823] = 1,
    ACTIONS(168), 1,
      sym__eol,
  [827] = 1,
    ACTIONS(180), 1,
      sym__eol,
  [831] = 1,
    ACTIONS(188), 1,
      sym__eol,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 17,
  [SMALL_STATE(6)] = 32,
  [SMALL_STATE(7)] = 43,
  [SMALL_STATE(8)] = 58,
  [SMALL_STATE(9)] = 68,
  [SMALL_STATE(10)] = 78,
  [SMALL_STATE(11)] = 88,
  [SMALL_STATE(12)] = 98,
  [SMALL_STATE(13)] = 108,
  [SMALL_STATE(14)] = 119,
  [SMALL_STATE(15)] = 132,
  [SMALL_STATE(16)] = 143,
  [SMALL_STATE(17)] = 156,
  [SMALL_STATE(18)] = 169,
  [SMALL_STATE(19)] = 182,
  [SMALL_STATE(20)] = 195,
  [SMALL_STATE(21)] = 208,
  [SMALL_STATE(22)] = 221,
  [SMALL_STATE(23)] = 234,
  [SMALL_STATE(24)] = 247,
  [SMALL_STATE(25)] = 260,
  [SMALL_STATE(26)] = 273,
  [SMALL_STATE(27)] = 286,
  [SMALL_STATE(28)] = 299,
  [SMALL_STATE(29)] = 310,
  [SMALL_STATE(30)] = 321,
  [SMALL_STATE(31)] = 332,
  [SMALL_STATE(32)] = 343,
  [SMALL_STATE(33)] = 356,
  [SMALL_STATE(34)] = 369,
  [SMALL_STATE(35)] = 382,
  [SMALL_STATE(36)] = 395,
  [SMALL_STATE(37)] = 408,
  [SMALL_STATE(38)] = 419,
  [SMALL_STATE(39)] = 429,
  [SMALL_STATE(40)] = 439,
  [SMALL_STATE(41)] = 449,
  [SMALL_STATE(42)] = 459,
  [SMALL_STATE(43)] = 469,
  [SMALL_STATE(44)] = 479,
  [SMALL_STATE(45)] = 489,
  [SMALL_STATE(46)] = 499,
  [SMALL_STATE(47)] = 509,
  [SMALL_STATE(48)] = 519,
  [SMALL_STATE(49)] = 529,
  [SMALL_STATE(50)] = 539,
  [SMALL_STATE(51)] = 549,
  [SMALL_STATE(52)] = 559,
  [SMALL_STATE(53)] = 569,
  [SMALL_STATE(54)] = 579,
  [SMALL_STATE(55)] = 589,
  [SMALL_STATE(56)] = 599,
  [SMALL_STATE(57)] = 606,
  [SMALL_STATE(58)] = 613,
  [SMALL_STATE(59)] = 620,
  [SMALL_STATE(60)] = 627,
  [SMALL_STATE(61)] = 634,
  [SMALL_STATE(62)] = 641,
  [SMALL_STATE(63)] = 648,
  [SMALL_STATE(64)] = 655,
  [SMALL_STATE(65)] = 662,
  [SMALL_STATE(66)] = 669,
  [SMALL_STATE(67)] = 676,
  [SMALL_STATE(68)] = 681,
  [SMALL_STATE(69)] = 688,
  [SMALL_STATE(70)] = 695,
  [SMALL_STATE(71)] = 702,
  [SMALL_STATE(72)] = 709,
  [SMALL_STATE(73)] = 716,
  [SMALL_STATE(74)] = 723,
  [SMALL_STATE(75)] = 730,
  [SMALL_STATE(76)] = 737,
  [SMALL_STATE(77)] = 744,
  [SMALL_STATE(78)] = 751,
  [SMALL_STATE(79)] = 758,
  [SMALL_STATE(80)] = 765,
  [SMALL_STATE(81)] = 772,
  [SMALL_STATE(82)] = 779,
  [SMALL_STATE(83)] = 786,
  [SMALL_STATE(84)] = 793,
  [SMALL_STATE(85)] = 800,
  [SMALL_STATE(86)] = 807,
  [SMALL_STATE(87)] = 811,
  [SMALL_STATE(88)] = 815,
  [SMALL_STATE(89)] = 819,
  [SMALL_STATE(90)] = 823,
  [SMALL_STATE(91)] = 827,
  [SMALL_STATE(92)] = 831,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(54),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(55),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(64),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(53),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(6),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(71),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(20),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(3),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__body_elements, 2),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__body_elements, 2),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_block, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footnote, 6),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bullet_list_repeat1, 2), SHIFT_REPEAT(50),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_block, 3),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__footnote_block_repeat1, 2), SHIFT_REPEAT(59),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_block_repeat1, 2), SHIFT_REPEAT(10),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_option_list_repeat1, 2), SHIFT_REPEAT(52),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bullet_list_item, 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__enumerated_list_item, 2),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_body, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_list_item, 2),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_list_repeat1, 2), SHIFT_REPEAT(61),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enumerated_list_repeat1, 2), SHIFT_REPEAT(51),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(44),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__line, 2), SHIFT_REPEAT(37),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__line, 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__line, 2), SHIFT_REPEAT(40),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_block, 2),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__footnote_block, 2),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_list, 1),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumerated_list, 1, .production_id = 1),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 5),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bullet_list, 1, .production_id = 1),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_list, 2),
  [196] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_list, 2),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumerated_list, 2, .production_id = 2),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bullet_list, 2, .production_id = 2),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__footnote_block_repeat1, 2),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_block_repeat1, 2),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_option_list_repeat1, 2),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_list, 1),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_list_repeat1, 2),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enumerated_list_repeat1, 2, .production_id = 1),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bullet_list_repeat1, 2, .production_id = 1),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__footnote_block, 1),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_block, 1),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_rst_external_scanner_create(void);
void tree_sitter_rst_external_scanner_destroy(void *);
bool tree_sitter_rst_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_rst_external_scanner_serialize(void *, char *);
void tree_sitter_rst_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_rst(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .public_symbol_map = ts_symbol_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .external_scanner = {
      (const bool *)ts_external_scanner_states,
      ts_external_scanner_symbol_map,
      tree_sitter_rst_external_scanner_create,
      tree_sitter_rst_external_scanner_destroy,
      tree_sitter_rst_external_scanner_scan,
      tree_sitter_rst_external_scanner_serialize,
      tree_sitter_rst_external_scanner_deserialize,
    },
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
