#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 113
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 53
#define ALIAS_COUNT 1
#define TOKEN_COUNT 22
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
  sym__citation_label = 18,
  aux_sym__line_token1 = 19,
  sym__eol = 20,
  sym__blank_line = 21,
  sym_document = 22,
  sym__body_elements = 23,
  sym_paragraph = 24,
  sym__lists = 25,
  sym_bullet_list = 26,
  sym__bullet_list_item = 27,
  sym_enumerated_list = 28,
  sym__enumerated_list_item = 29,
  sym_field_list = 30,
  sym_field = 31,
  sym__field_body = 32,
  sym_option_list = 33,
  sym_option_list_item = 34,
  sym_line_block = 35,
  sym__single_line_block = 36,
  sym__markup_blocks = 37,
  sym__footnote_block = 38,
  sym_footnote = 39,
  sym__label = 40,
  sym__citation_block = 41,
  sym_citation = 42,
  aux_sym__line = 43,
  aux_sym_document_repeat1 = 44,
  aux_sym_paragraph_repeat1 = 45,
  aux_sym_bullet_list_repeat1 = 46,
  aux_sym_enumerated_list_repeat1 = 47,
  aux_sym_field_list_repeat1 = 48,
  aux_sym_option_list_repeat1 = 49,
  aux_sym_line_block_repeat1 = 50,
  aux_sym__footnote_block_repeat1 = 51,
  aux_sym__citation_block_repeat1 = 52,
  alias_sym_list_item = 53,
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
  [sym__citation_label] = "_citation_label",
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
  [sym__citation_block] = "_citation_block",
  [sym_citation] = "citation",
  [aux_sym__line] = "_line",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_paragraph_repeat1] = "paragraph_repeat1",
  [aux_sym_bullet_list_repeat1] = "bullet_list_repeat1",
  [aux_sym_enumerated_list_repeat1] = "enumerated_list_repeat1",
  [aux_sym_field_list_repeat1] = "field_list_repeat1",
  [aux_sym_option_list_repeat1] = "option_list_repeat1",
  [aux_sym_line_block_repeat1] = "line_block_repeat1",
  [aux_sym__footnote_block_repeat1] = "_footnote_block_repeat1",
  [aux_sym__citation_block_repeat1] = "_citation_block_repeat1",
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
  [sym__citation_label] = sym__citation_label,
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
  [sym__citation_block] = sym__citation_block,
  [sym_citation] = sym_citation,
  [aux_sym__line] = aux_sym__line,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_paragraph_repeat1] = aux_sym_paragraph_repeat1,
  [aux_sym_bullet_list_repeat1] = aux_sym_bullet_list_repeat1,
  [aux_sym_enumerated_list_repeat1] = aux_sym_enumerated_list_repeat1,
  [aux_sym_field_list_repeat1] = aux_sym_field_list_repeat1,
  [aux_sym_option_list_repeat1] = aux_sym_option_list_repeat1,
  [aux_sym_line_block_repeat1] = aux_sym_line_block_repeat1,
  [aux_sym__footnote_block_repeat1] = aux_sym__footnote_block_repeat1,
  [aux_sym__citation_block_repeat1] = aux_sym__citation_block_repeat1,
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
  [sym__citation_label] = {
    .visible = false,
    .named = true,
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
  [sym__citation_block] = {
    .visible = false,
    .named = true,
  },
  [sym_citation] = {
    .visible = true,
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
  [aux_sym__citation_block_repeat1] = {
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
      if (eof) ADVANCE(22);
      if (lookahead == '\t') ADVANCE(27);
      if (lookahead == 11) ADVANCE(28);
      if (lookahead == '\f') ADVANCE(29);
      if (lookahead == ' ') ADVANCE(26);
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '*') ADVANCE(42);
      if (lookahead == '+') ADVANCE(55);
      if (lookahead == '-') ADVANCE(54);
      if (lookahead == '.') ADVANCE(52);
      if (lookahead == '/') ADVANCE(56);
      if (lookahead == ':') ADVANCE(25);
      if (lookahead == '[') ADVANCE(34);
      if (lookahead == ']') ADVANCE(35);
      if (lookahead == '|') ADVANCE(32);
      if (lookahead == 8226 ||
          lookahead == 8227 ||
          lookahead == 8259) ADVANCE(53);
      if (lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'I' ||
          lookahead == 'L' ||
          lookahead == 'M' ||
          lookahead == 'V' ||
          lookahead == 'X') ADVANCE(43);
      if (lookahead == 'c' ||
          lookahead == 'd' ||
          lookahead == 'i' ||
          lookahead == 'l' ||
          lookahead == 'm' ||
          lookahead == 'v' ||
          lookahead == 'x') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(47);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(27);
      if (lookahead == 11) ADVANCE(28);
      if (lookahead == '\f') ADVANCE(29);
      if (lookahead == ' ') ADVANCE(26);
      if (lookahead == '#') ADVANCE(39);
      if (lookahead == '*') ADVANCE(41);
      if (lookahead == '[') ADVANCE(34);
      if (lookahead == ']') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '+') ADVANCE(16);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '/') ADVANCE(16);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'I' ||
          lookahead == 'L' ||
          lookahead == 'M' ||
          lookahead == 'V' ||
          lookahead == 'X') ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == 'c' ||
          lookahead == 'd' ||
          lookahead == 'i' ||
          lookahead == 'l' ||
          lookahead == 'm' ||
          lookahead == 'v' ||
          lookahead == 'x') ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f') ADVANCE(13);
      if (lookahead == ' ') ADVANCE(14);
      if (lookahead == ',') ADVANCE(2);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 10:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(24);
      END_STATE();
    case 11:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(24);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 12:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(33);
      END_STATE();
    case 13:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(31);
      END_STATE();
    case 14:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(13);
      if (lookahead == ',') ADVANCE(2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 19:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(47);
      END_STATE();
    case 20:
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(30);
      END_STATE();
    case 21:
      if (eof) ADVANCE(22);
      if (lookahead == '#') ADVANCE(48);
      if (lookahead == '*' ||
          lookahead == 8226 ||
          lookahead == 8227 ||
          lookahead == 8259) ADVANCE(53);
      if (lookahead == '+') ADVANCE(55);
      if (lookahead == '-') ADVANCE(54);
      if (lookahead == '.') ADVANCE(52);
      if (lookahead == '/') ADVANCE(56);
      if (lookahead == ':') ADVANCE(25);
      if (lookahead == '|') ADVANCE(32);
      if (lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'I' ||
          lookahead == 'L' ||
          lookahead == 'M' ||
          lookahead == 'V' ||
          lookahead == 'X') ADVANCE(49);
      if (lookahead == 'c' ||
          lookahead == 'd' ||
          lookahead == 'i' ||
          lookahead == 'l' ||
          lookahead == 'm' ||
          lookahead == 'v' ||
          lookahead == 'x') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(47);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym__char_bullet);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym__numeric_bullet);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_TAB);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_3);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym__field_name);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_option_list_item_token1);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym__markup_start);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '.') ADVANCE(10);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym__label_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(23);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym__citation_label);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(9);
      if (lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'I' ||
          lookahead == 'L' ||
          lookahead == 'M' ||
          lookahead == 'V' ||
          lookahead == 'X') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym__citation_label);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(9);
      if (lookahead == 'c' ||
          lookahead == 'd' ||
          lookahead == 'i' ||
          lookahead == 'l' ||
          lookahead == 'm' ||
          lookahead == 'v' ||
          lookahead == 'x') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym__citation_label);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym__citation_label);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym__line_token1);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '.') ADVANCE(10);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'I' ||
          lookahead == 'L' ||
          lookahead == 'M' ||
          lookahead == 'V' ||
          lookahead == 'X') ADVANCE(5);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == 'c' ||
          lookahead == 'd' ||
          lookahead == 'i' ||
          lookahead == 'l' ||
          lookahead == 'm' ||
          lookahead == 'v' ||
          lookahead == 'x') ADVANCE(6);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '.') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '.') ADVANCE(12);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(23);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead == '-') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 56:
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
  [1] = {.lex_state = 21, .external_lex_state = 1},
  [2] = {.lex_state = 21, .external_lex_state = 1},
  [3] = {.lex_state = 21, .external_lex_state = 1},
  [4] = {.lex_state = 21, .external_lex_state = 1},
  [5] = {.lex_state = 1, .external_lex_state = 2},
  [6] = {.lex_state = 1, .external_lex_state = 2},
  [7] = {.lex_state = 1, .external_lex_state = 1},
  [8] = {.lex_state = 1, .external_lex_state = 2},
  [9] = {.lex_state = 1, .external_lex_state = 2},
  [10] = {.lex_state = 1, .external_lex_state = 2},
  [11] = {.lex_state = 1, .external_lex_state = 2},
  [12] = {.lex_state = 1, .external_lex_state = 2},
  [13] = {.lex_state = 1, .external_lex_state = 2},
  [14] = {.lex_state = 1, .external_lex_state = 2},
  [15] = {.lex_state = 1, .external_lex_state = 2},
  [16] = {.lex_state = 19, .external_lex_state = 1},
  [17] = {.lex_state = 19, .external_lex_state = 2},
  [18] = {.lex_state = 19, .external_lex_state = 1},
  [19] = {.lex_state = 0, .external_lex_state = 2},
  [20] = {.lex_state = 19, .external_lex_state = 1},
  [21] = {.lex_state = 19, .external_lex_state = 1},
  [22] = {.lex_state = 19, .external_lex_state = 2},
  [23] = {.lex_state = 21, .external_lex_state = 2},
  [24] = {.lex_state = 21, .external_lex_state = 2},
  [25] = {.lex_state = 0, .external_lex_state = 2},
  [26] = {.lex_state = 0, .external_lex_state = 2},
  [27] = {.lex_state = 0, .external_lex_state = 2},
  [28] = {.lex_state = 0, .external_lex_state = 2},
  [29] = {.lex_state = 0, .external_lex_state = 2},
  [30] = {.lex_state = 19, .external_lex_state = 1},
  [31] = {.lex_state = 19, .external_lex_state = 1},
  [32] = {.lex_state = 0, .external_lex_state = 2},
  [33] = {.lex_state = 19, .external_lex_state = 1},
  [34] = {.lex_state = 19, .external_lex_state = 1},
  [35] = {.lex_state = 0, .external_lex_state = 2},
  [36] = {.lex_state = 0, .external_lex_state = 2},
  [37] = {.lex_state = 0, .external_lex_state = 2},
  [38] = {.lex_state = 21, .external_lex_state = 2},
  [39] = {.lex_state = 21, .external_lex_state = 2},
  [40] = {.lex_state = 19, .external_lex_state = 2},
  [41] = {.lex_state = 19, .external_lex_state = 2},
  [42] = {.lex_state = 19, .external_lex_state = 1},
  [43] = {.lex_state = 19, .external_lex_state = 1},
  [44] = {.lex_state = 19, .external_lex_state = 2},
  [45] = {.lex_state = 19, .external_lex_state = 2},
  [46] = {.lex_state = 19, .external_lex_state = 2},
  [47] = {.lex_state = 19, .external_lex_state = 2},
  [48] = {.lex_state = 19, .external_lex_state = 2},
  [49] = {.lex_state = 19, .external_lex_state = 2},
  [50] = {.lex_state = 19, .external_lex_state = 2},
  [51] = {.lex_state = 19, .external_lex_state = 2},
  [52] = {.lex_state = 19, .external_lex_state = 2},
  [53] = {.lex_state = 19, .external_lex_state = 2},
  [54] = {.lex_state = 19, .external_lex_state = 2},
  [55] = {.lex_state = 19, .external_lex_state = 2},
  [56] = {.lex_state = 19, .external_lex_state = 2},
  [57] = {.lex_state = 19, .external_lex_state = 2},
  [58] = {.lex_state = 19, .external_lex_state = 2},
  [59] = {.lex_state = 19, .external_lex_state = 2},
  [60] = {.lex_state = 19, .external_lex_state = 2},
  [61] = {.lex_state = 19, .external_lex_state = 2},
  [62] = {.lex_state = 19, .external_lex_state = 2},
  [63] = {.lex_state = 19, .external_lex_state = 2},
  [64] = {.lex_state = 19, .external_lex_state = 2},
  [65] = {.lex_state = 0, .external_lex_state = 2},
  [66] = {.lex_state = 0, .external_lex_state = 1},
  [67] = {.lex_state = 1, .external_lex_state = 2},
  [68] = {.lex_state = 1, .external_lex_state = 2},
  [69] = {.lex_state = 20, .external_lex_state = 2},
  [70] = {.lex_state = 17, .external_lex_state = 2},
  [71] = {.lex_state = 0, .external_lex_state = 1},
  [72] = {.lex_state = 0, .external_lex_state = 1},
  [73] = {.lex_state = 1, .external_lex_state = 2},
  [74] = {.lex_state = 17, .external_lex_state = 2},
  [75] = {.lex_state = 1, .external_lex_state = 2},
  [76] = {.lex_state = 1, .external_lex_state = 2},
  [77] = {.lex_state = 0, .external_lex_state = 1},
  [78] = {.lex_state = 0, .external_lex_state = 1},
  [79] = {.lex_state = 0, .external_lex_state = 1},
  [80] = {.lex_state = 0, .external_lex_state = 1},
  [81] = {.lex_state = 0, .external_lex_state = 1},
  [82] = {.lex_state = 1, .external_lex_state = 2},
  [83] = {.lex_state = 0, .external_lex_state = 1},
  [84] = {.lex_state = 0, .external_lex_state = 1},
  [85] = {.lex_state = 0, .external_lex_state = 2},
  [86] = {.lex_state = 1, .external_lex_state = 2},
  [87] = {.lex_state = 0, .external_lex_state = 1},
  [88] = {.lex_state = 1, .external_lex_state = 2},
  [89] = {.lex_state = 0, .external_lex_state = 1},
  [90] = {.lex_state = 0, .external_lex_state = 1},
  [91] = {.lex_state = 0, .external_lex_state = 1},
  [92] = {.lex_state = 19, .external_lex_state = 2},
  [93] = {.lex_state = 0, .external_lex_state = 2},
  [94] = {.lex_state = 0, .external_lex_state = 1},
  [95] = {.lex_state = 0, .external_lex_state = 2},
  [96] = {.lex_state = 0, .external_lex_state = 2},
  [97] = {.lex_state = 0, .external_lex_state = 2},
  [98] = {.lex_state = 0, .external_lex_state = 2},
  [99] = {.lex_state = 21, .external_lex_state = 2},
  [100] = {.lex_state = 21, .external_lex_state = 2},
  [101] = {.lex_state = 0, .external_lex_state = 2},
  [102] = {.lex_state = 1, .external_lex_state = 2},
  [103] = {.lex_state = 0, .external_lex_state = 1},
  [104] = {.lex_state = 20, .external_lex_state = 2},
  [105] = {.lex_state = 0, .external_lex_state = 2},
  [106] = {.lex_state = 0, .external_lex_state = 2},
  [107] = {.lex_state = 0, .external_lex_state = 2},
  [108] = {.lex_state = 0, .external_lex_state = 2},
  [109] = {.lex_state = 0, .external_lex_state = 2},
  [110] = {.lex_state = 0, .external_lex_state = 2},
  [111] = {.lex_state = 0, .external_lex_state = 2},
  [112] = {.lex_state = 0, .external_lex_state = 2},
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
    [sym__citation_label] = ACTIONS(1),
    [aux_sym__line_token1] = ACTIONS(1),
    [sym__eol] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(85),
    [sym__body_elements] = STATE(2),
    [sym_paragraph] = STATE(83),
    [sym__lists] = STATE(83),
    [sym_bullet_list] = STATE(83),
    [sym__bullet_list_item] = STATE(78),
    [sym_enumerated_list] = STATE(83),
    [sym__enumerated_list_item] = STATE(77),
    [sym_field_list] = STATE(83),
    [sym_field] = STATE(72),
    [sym_option_list] = STATE(83),
    [sym_option_list_item] = STATE(94),
    [sym_line_block] = STATE(83),
    [sym__single_line_block] = STATE(80),
    [sym__markup_blocks] = STATE(83),
    [sym__footnote_block] = STATE(83),
    [sym_footnote] = STATE(71),
    [sym__citation_block] = STATE(83),
    [sym_citation] = STATE(103),
    [aux_sym__line] = STATE(21),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_paragraph_repeat1] = STATE(22),
    [aux_sym_bullet_list_repeat1] = STATE(23),
    [aux_sym_enumerated_list_repeat1] = STATE(24),
    [aux_sym_field_list_repeat1] = STATE(25),
    [aux_sym_option_list_repeat1] = STATE(26),
    [aux_sym_line_block_repeat1] = STATE(27),
    [aux_sym__footnote_block_repeat1] = STATE(28),
    [aux_sym__citation_block_repeat1] = STATE(29),
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
    [sym_paragraph] = STATE(83),
    [sym__lists] = STATE(83),
    [sym_bullet_list] = STATE(83),
    [sym__bullet_list_item] = STATE(78),
    [sym_enumerated_list] = STATE(83),
    [sym__enumerated_list_item] = STATE(77),
    [sym_field_list] = STATE(83),
    [sym_field] = STATE(72),
    [sym_option_list] = STATE(83),
    [sym_option_list_item] = STATE(94),
    [sym_line_block] = STATE(83),
    [sym__single_line_block] = STATE(80),
    [sym__markup_blocks] = STATE(83),
    [sym__footnote_block] = STATE(83),
    [sym_footnote] = STATE(71),
    [sym__citation_block] = STATE(83),
    [sym_citation] = STATE(103),
    [aux_sym__line] = STATE(21),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_paragraph_repeat1] = STATE(22),
    [aux_sym_bullet_list_repeat1] = STATE(23),
    [aux_sym_enumerated_list_repeat1] = STATE(24),
    [aux_sym_field_list_repeat1] = STATE(25),
    [aux_sym_option_list_repeat1] = STATE(26),
    [aux_sym_line_block_repeat1] = STATE(27),
    [aux_sym__footnote_block_repeat1] = STATE(28),
    [aux_sym__citation_block_repeat1] = STATE(29),
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
    [sym_paragraph] = STATE(83),
    [sym__lists] = STATE(83),
    [sym_bullet_list] = STATE(83),
    [sym__bullet_list_item] = STATE(78),
    [sym_enumerated_list] = STATE(83),
    [sym__enumerated_list_item] = STATE(77),
    [sym_field_list] = STATE(83),
    [sym_field] = STATE(72),
    [sym_option_list] = STATE(83),
    [sym_option_list_item] = STATE(94),
    [sym_line_block] = STATE(83),
    [sym__single_line_block] = STATE(80),
    [sym__markup_blocks] = STATE(83),
    [sym__footnote_block] = STATE(83),
    [sym_footnote] = STATE(71),
    [sym__citation_block] = STATE(83),
    [sym_citation] = STATE(103),
    [aux_sym__line] = STATE(21),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_paragraph_repeat1] = STATE(22),
    [aux_sym_bullet_list_repeat1] = STATE(23),
    [aux_sym_enumerated_list_repeat1] = STATE(24),
    [aux_sym_field_list_repeat1] = STATE(25),
    [aux_sym_option_list_repeat1] = STATE(26),
    [aux_sym_line_block_repeat1] = STATE(27),
    [aux_sym__footnote_block_repeat1] = STATE(28),
    [aux_sym__citation_block_repeat1] = STATE(29),
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
  [17] = 5,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(61), 1,
      sym__citation_label,
    STATE(76), 1,
      sym__label,
    ACTIONS(57), 2,
      aux_sym__label_token1,
      anon_sym_POUND,
    ACTIONS(59), 2,
      aux_sym__label_token2,
      anon_sym_STAR,
  [35] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(65), 1,
      anon_sym_POUND,
    STATE(73), 1,
      sym__label,
    ACTIONS(63), 3,
      aux_sym__label_token1,
      aux_sym__label_token2,
      anon_sym_STAR,
  [50] = 2,
    ACTIONS(69), 2,
      sym__eol,
      sym__blank_line,
    ACTIONS(67), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [61] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(57), 1,
      anon_sym_POUND,
    STATE(76), 1,
      sym__label,
    ACTIONS(59), 3,
      aux_sym__label_token1,
      aux_sym__label_token2,
      anon_sym_STAR,
  [76] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(71), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [86] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(73), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [96] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(75), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [106] = 2,
    ACTIONS(69), 1,
      sym__eol,
    ACTIONS(77), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [116] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(79), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [126] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(81), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [136] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(83), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [146] = 3,
    ACTIONS(85), 1,
      aux_sym__line_token1,
    STATE(43), 1,
      aux_sym__line,
    ACTIONS(87), 2,
      sym__eol,
      sym__blank_line,
  [157] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(89), 1,
      aux_sym__line_token1,
    STATE(45), 1,
      aux_sym__line,
    STATE(105), 1,
      sym__field_body,
  [170] = 3,
    ACTIONS(85), 1,
      aux_sym__line_token1,
    STATE(43), 1,
      aux_sym__line,
    ACTIONS(91), 2,
      sym__eol,
      sym__blank_line,
  [181] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(93), 1,
      sym__markup_start,
    STATE(19), 1,
      aux_sym__citation_block_repeat1,
    STATE(106), 1,
      sym_citation,
  [194] = 3,
    ACTIONS(85), 1,
      aux_sym__line_token1,
    STATE(43), 1,
      aux_sym__line,
    ACTIONS(96), 2,
      sym__eol,
      sym__blank_line,
  [205] = 4,
    ACTIONS(85), 1,
      aux_sym__line_token1,
    ACTIONS(98), 1,
      sym__eol,
    ACTIONS(100), 1,
      sym__blank_line,
    STATE(43), 1,
      aux_sym__line,
  [218] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(102), 1,
      aux_sym__line_token1,
    STATE(40), 1,
      aux_sym_paragraph_repeat1,
    STATE(42), 1,
      aux_sym__line,
  [231] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(7), 1,
      sym__char_bullet,
    STATE(39), 1,
      aux_sym_bullet_list_repeat1,
    STATE(91), 1,
      sym__bullet_list_item,
  [244] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(9), 1,
      sym__numeric_bullet,
    STATE(38), 1,
      aux_sym_enumerated_list_repeat1,
    STATE(90), 1,
      sym__enumerated_list_item,
  [257] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(11), 1,
      anon_sym_COLON,
    STATE(37), 1,
      aux_sym_field_list_repeat1,
    STATE(89), 1,
      sym_field,
  [270] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(13), 1,
      aux_sym_option_list_item_token1,
    STATE(36), 1,
      aux_sym_option_list_repeat1,
    STATE(66), 1,
      sym_option_list_item,
  [283] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(15), 1,
      anon_sym_PIPE,
    STATE(35), 1,
      aux_sym_line_block_repeat1,
    STATE(87), 1,
      sym__single_line_block,
  [296] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(104), 1,
      sym__markup_start,
    STATE(32), 1,
      aux_sym__footnote_block_repeat1,
    STATE(84), 1,
      sym_footnote,
  [309] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(106), 1,
      sym__markup_start,
    STATE(19), 1,
      aux_sym__citation_block_repeat1,
    STATE(81), 1,
      sym_citation,
  [322] = 3,
    ACTIONS(85), 1,
      aux_sym__line_token1,
    STATE(43), 1,
      aux_sym__line,
    ACTIONS(108), 2,
      sym__eol,
      sym__blank_line,
  [333] = 3,
    ACTIONS(85), 1,
      aux_sym__line_token1,
    STATE(43), 1,
      aux_sym__line,
    ACTIONS(110), 2,
      sym__eol,
      sym__blank_line,
  [344] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(112), 1,
      sym__markup_start,
    STATE(32), 1,
      aux_sym__footnote_block_repeat1,
    STATE(107), 1,
      sym_footnote,
  [357] = 3,
    ACTIONS(85), 1,
      aux_sym__line_token1,
    STATE(43), 1,
      aux_sym__line,
    ACTIONS(115), 2,
      sym__eol,
      sym__blank_line,
  [368] = 3,
    ACTIONS(85), 1,
      aux_sym__line_token1,
    STATE(43), 1,
      aux_sym__line,
    ACTIONS(117), 2,
      sym__eol,
      sym__blank_line,
  [379] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(119), 1,
      anon_sym_PIPE,
    STATE(35), 1,
      aux_sym_line_block_repeat1,
    STATE(108), 1,
      sym__single_line_block,
  [392] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(122), 1,
      aux_sym_option_list_item_token1,
    STATE(36), 1,
      aux_sym_option_list_repeat1,
    STATE(109), 1,
      sym_option_list_item,
  [405] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(125), 1,
      anon_sym_COLON,
    STATE(37), 1,
      aux_sym_field_list_repeat1,
    STATE(110), 1,
      sym_field,
  [418] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(128), 1,
      sym__numeric_bullet,
    STATE(38), 1,
      aux_sym_enumerated_list_repeat1,
    STATE(111), 1,
      sym__enumerated_list_item,
  [431] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(131), 1,
      sym__char_bullet,
    STATE(39), 1,
      aux_sym_bullet_list_repeat1,
    STATE(112), 1,
      sym__bullet_list_item,
  [444] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(134), 1,
      aux_sym__line_token1,
    STATE(40), 1,
      aux_sym_paragraph_repeat1,
    STATE(64), 1,
      aux_sym__line,
  [457] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(137), 1,
      aux_sym__line_token1,
    STATE(20), 1,
      aux_sym__line,
    STATE(79), 1,
      sym__field_body,
  [470] = 4,
    ACTIONS(85), 1,
      aux_sym__line_token1,
    ACTIONS(98), 1,
      sym__eol,
    ACTIONS(139), 1,
      sym__blank_line,
    STATE(43), 1,
      aux_sym__line,
  [483] = 3,
    ACTIONS(141), 1,
      aux_sym__line_token1,
    STATE(43), 1,
      aux_sym__line,
    ACTIONS(144), 2,
      sym__eol,
      sym__blank_line,
  [494] = 3,
    ACTIONS(108), 1,
      sym__eol,
    ACTIONS(146), 1,
      aux_sym__line_token1,
    STATE(46), 1,
      aux_sym__line,
  [504] = 3,
    ACTIONS(96), 1,
      sym__eol,
    ACTIONS(146), 1,
      aux_sym__line_token1,
    STATE(46), 1,
      aux_sym__line,
  [514] = 3,
    ACTIONS(144), 1,
      sym__eol,
    ACTIONS(148), 1,
      aux_sym__line_token1,
    STATE(46), 1,
      aux_sym__line,
  [524] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(151), 1,
      aux_sym__line_token1,
    STATE(51), 1,
      aux_sym__line,
  [534] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(153), 1,
      aux_sym__line_token1,
    STATE(54), 1,
      aux_sym__line,
  [544] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(155), 1,
      aux_sym__line_token1,
    STATE(53), 1,
      aux_sym__line,
  [554] = 3,
    ACTIONS(115), 1,
      sym__eol,
    ACTIONS(146), 1,
      aux_sym__line_token1,
    STATE(46), 1,
      aux_sym__line,
  [564] = 3,
    ACTIONS(87), 1,
      sym__eol,
    ACTIONS(146), 1,
      aux_sym__line_token1,
    STATE(46), 1,
      aux_sym__line,
  [574] = 3,
    ACTIONS(110), 1,
      sym__eol,
    ACTIONS(146), 1,
      aux_sym__line_token1,
    STATE(46), 1,
      aux_sym__line,
  [584] = 3,
    ACTIONS(117), 1,
      sym__eol,
    ACTIONS(146), 1,
      aux_sym__line_token1,
    STATE(46), 1,
      aux_sym__line,
  [594] = 3,
    ACTIONS(91), 1,
      sym__eol,
    ACTIONS(146), 1,
      aux_sym__line_token1,
    STATE(46), 1,
      aux_sym__line,
  [604] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(157), 1,
      aux_sym__line_token1,
    STATE(44), 1,
      aux_sym__line,
  [614] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(159), 1,
      aux_sym__line_token1,
    STATE(18), 1,
      aux_sym__line,
  [624] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(161), 1,
      aux_sym__line_token1,
    STATE(34), 1,
      aux_sym__line,
  [634] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(163), 1,
      aux_sym__line_token1,
    STATE(52), 1,
      aux_sym__line,
  [644] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(165), 1,
      aux_sym__line_token1,
    STATE(16), 1,
      aux_sym__line,
  [654] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(167), 1,
      aux_sym__line_token1,
    STATE(50), 1,
      aux_sym__line,
  [664] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(169), 1,
      aux_sym__line_token1,
    STATE(33), 1,
      aux_sym__line,
  [674] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(171), 1,
      aux_sym__line_token1,
    STATE(30), 1,
      aux_sym__line,
  [684] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(173), 1,
      aux_sym__line_token1,
    STATE(31), 1,
      aux_sym__line,
  [694] = 3,
    ACTIONS(98), 1,
      sym__eol,
    ACTIONS(146), 1,
      aux_sym__line_token1,
    STATE(46), 1,
      aux_sym__line,
  [704] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(175), 1,
      sym__markup_start,
  [711] = 2,
    ACTIONS(177), 1,
      sym__eol,
    ACTIONS(179), 1,
      sym__blank_line,
  [718] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(181), 1,
      anon_sym_LBRACK,
  [725] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(183), 1,
      anon_sym_LBRACK,
  [732] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(185), 1,
      sym__field_name,
  [739] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(187), 1,
      sym__citation_label,
  [746] = 2,
    ACTIONS(189), 1,
      sym__eol,
    ACTIONS(191), 1,
      sym__blank_line,
  [753] = 2,
    ACTIONS(193), 1,
      sym__eol,
    ACTIONS(195), 1,
      sym__blank_line,
  [760] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(197), 1,
      anon_sym_RBRACK,
  [767] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(199), 1,
      sym__citation_label,
  [774] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(201), 1,
      anon_sym_RBRACK,
  [781] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(203), 1,
      anon_sym_RBRACK,
  [788] = 2,
    ACTIONS(205), 1,
      sym__eol,
    ACTIONS(207), 1,
      sym__blank_line,
  [795] = 2,
    ACTIONS(209), 1,
      sym__eol,
    ACTIONS(211), 1,
      sym__blank_line,
  [802] = 1,
    ACTIONS(213), 2,
      sym__eol,
      sym__blank_line,
  [807] = 2,
    ACTIONS(215), 1,
      sym__eol,
    ACTIONS(217), 1,
      sym__blank_line,
  [814] = 2,
    ACTIONS(219), 1,
      sym__eol,
    ACTIONS(221), 1,
      sym__blank_line,
  [821] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(223), 1,
      anon_sym_LBRACK,
  [828] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(225), 1,
      sym__blank_line,
  [835] = 2,
    ACTIONS(189), 1,
      sym__eol,
    ACTIONS(227), 1,
      sym__blank_line,
  [842] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(229), 1,
      ts_builtin_sym_end,
  [849] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(231), 1,
      anon_sym_LBRACK,
  [856] = 2,
    ACTIONS(215), 1,
      sym__eol,
    ACTIONS(233), 1,
      sym__blank_line,
  [863] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(235), 1,
      anon_sym_RBRACK,
  [870] = 2,
    ACTIONS(193), 1,
      sym__eol,
    ACTIONS(237), 1,
      sym__blank_line,
  [877] = 2,
    ACTIONS(205), 1,
      sym__eol,
    ACTIONS(239), 1,
      sym__blank_line,
  [884] = 2,
    ACTIONS(209), 1,
      sym__eol,
    ACTIONS(241), 1,
      sym__blank_line,
  [891] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(243), 1,
      aux_sym__line_token1,
  [898] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(245), 1,
      anon_sym_COLON,
  [905] = 2,
    ACTIONS(177), 1,
      sym__eol,
    ACTIONS(247), 1,
      sym__blank_line,
  [912] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(249), 1,
      sym__markup_start,
  [919] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(251), 1,
      anon_sym_PIPE,
  [926] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(253), 1,
      aux_sym_option_list_item_token1,
  [933] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(255), 1,
      anon_sym_COLON,
  [940] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(257), 1,
      sym__numeric_bullet,
  [947] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(259), 1,
      sym__char_bullet,
  [954] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(261), 1,
      anon_sym_COLON,
  [961] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(263), 1,
      anon_sym_LBRACK,
  [968] = 2,
    ACTIONS(219), 1,
      sym__eol,
    ACTIONS(265), 1,
      sym__blank_line,
  [975] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(267), 1,
      sym__field_name,
  [982] = 1,
    ACTIONS(213), 1,
      sym__eol,
  [986] = 1,
    ACTIONS(219), 1,
      sym__eol,
  [990] = 1,
    ACTIONS(189), 1,
      sym__eol,
  [994] = 1,
    ACTIONS(215), 1,
      sym__eol,
  [998] = 1,
    ACTIONS(177), 1,
      sym__eol,
  [1002] = 1,
    ACTIONS(193), 1,
      sym__eol,
  [1006] = 1,
    ACTIONS(205), 1,
      sym__eol,
  [1010] = 1,
    ACTIONS(209), 1,
      sym__eol,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 17,
  [SMALL_STATE(6)] = 35,
  [SMALL_STATE(7)] = 50,
  [SMALL_STATE(8)] = 61,
  [SMALL_STATE(9)] = 76,
  [SMALL_STATE(10)] = 86,
  [SMALL_STATE(11)] = 96,
  [SMALL_STATE(12)] = 106,
  [SMALL_STATE(13)] = 116,
  [SMALL_STATE(14)] = 126,
  [SMALL_STATE(15)] = 136,
  [SMALL_STATE(16)] = 146,
  [SMALL_STATE(17)] = 157,
  [SMALL_STATE(18)] = 170,
  [SMALL_STATE(19)] = 181,
  [SMALL_STATE(20)] = 194,
  [SMALL_STATE(21)] = 205,
  [SMALL_STATE(22)] = 218,
  [SMALL_STATE(23)] = 231,
  [SMALL_STATE(24)] = 244,
  [SMALL_STATE(25)] = 257,
  [SMALL_STATE(26)] = 270,
  [SMALL_STATE(27)] = 283,
  [SMALL_STATE(28)] = 296,
  [SMALL_STATE(29)] = 309,
  [SMALL_STATE(30)] = 322,
  [SMALL_STATE(31)] = 333,
  [SMALL_STATE(32)] = 344,
  [SMALL_STATE(33)] = 357,
  [SMALL_STATE(34)] = 368,
  [SMALL_STATE(35)] = 379,
  [SMALL_STATE(36)] = 392,
  [SMALL_STATE(37)] = 405,
  [SMALL_STATE(38)] = 418,
  [SMALL_STATE(39)] = 431,
  [SMALL_STATE(40)] = 444,
  [SMALL_STATE(41)] = 457,
  [SMALL_STATE(42)] = 470,
  [SMALL_STATE(43)] = 483,
  [SMALL_STATE(44)] = 494,
  [SMALL_STATE(45)] = 504,
  [SMALL_STATE(46)] = 514,
  [SMALL_STATE(47)] = 524,
  [SMALL_STATE(48)] = 534,
  [SMALL_STATE(49)] = 544,
  [SMALL_STATE(50)] = 554,
  [SMALL_STATE(51)] = 564,
  [SMALL_STATE(52)] = 574,
  [SMALL_STATE(53)] = 584,
  [SMALL_STATE(54)] = 594,
  [SMALL_STATE(55)] = 604,
  [SMALL_STATE(56)] = 614,
  [SMALL_STATE(57)] = 624,
  [SMALL_STATE(58)] = 634,
  [SMALL_STATE(59)] = 644,
  [SMALL_STATE(60)] = 654,
  [SMALL_STATE(61)] = 664,
  [SMALL_STATE(62)] = 674,
  [SMALL_STATE(63)] = 684,
  [SMALL_STATE(64)] = 694,
  [SMALL_STATE(65)] = 704,
  [SMALL_STATE(66)] = 711,
  [SMALL_STATE(67)] = 718,
  [SMALL_STATE(68)] = 725,
  [SMALL_STATE(69)] = 732,
  [SMALL_STATE(70)] = 739,
  [SMALL_STATE(71)] = 746,
  [SMALL_STATE(72)] = 753,
  [SMALL_STATE(73)] = 760,
  [SMALL_STATE(74)] = 767,
  [SMALL_STATE(75)] = 774,
  [SMALL_STATE(76)] = 781,
  [SMALL_STATE(77)] = 788,
  [SMALL_STATE(78)] = 795,
  [SMALL_STATE(79)] = 802,
  [SMALL_STATE(80)] = 807,
  [SMALL_STATE(81)] = 814,
  [SMALL_STATE(82)] = 821,
  [SMALL_STATE(83)] = 828,
  [SMALL_STATE(84)] = 835,
  [SMALL_STATE(85)] = 842,
  [SMALL_STATE(86)] = 849,
  [SMALL_STATE(87)] = 856,
  [SMALL_STATE(88)] = 863,
  [SMALL_STATE(89)] = 870,
  [SMALL_STATE(90)] = 877,
  [SMALL_STATE(91)] = 884,
  [SMALL_STATE(92)] = 891,
  [SMALL_STATE(93)] = 898,
  [SMALL_STATE(94)] = 905,
  [SMALL_STATE(95)] = 912,
  [SMALL_STATE(96)] = 919,
  [SMALL_STATE(97)] = 926,
  [SMALL_STATE(98)] = 933,
  [SMALL_STATE(99)] = 940,
  [SMALL_STATE(100)] = 947,
  [SMALL_STATE(101)] = 954,
  [SMALL_STATE(102)] = 961,
  [SMALL_STATE(103)] = 968,
  [SMALL_STATE(104)] = 975,
  [SMALL_STATE(105)] = 982,
  [SMALL_STATE(106)] = 986,
  [SMALL_STATE(107)] = 990,
  [SMALL_STATE(108)] = 994,
  [SMALL_STATE(109)] = 998,
  [SMALL_STATE(110)] = 1002,
  [SMALL_STATE(111)] = 1006,
  [SMALL_STATE(112)] = 1010,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(62),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(63),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(104),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(61),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(7),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(102),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(21),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(3),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__body_elements, 2),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__body_elements, 2),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_block, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_citation, 6),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_block, 3),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__citation_block_repeat1, 2), SHIFT_REPEAT(67),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_body, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 1),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bullet_list_item, 2),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__enumerated_list_item, 2),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__footnote_block_repeat1, 2), SHIFT_REPEAT(68),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_list_item, 2),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footnote, 6),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_block_repeat1, 2), SHIFT_REPEAT(12),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_option_list_repeat1, 2), SHIFT_REPEAT(60),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_list_repeat1, 2), SHIFT_REPEAT(69),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enumerated_list_repeat1, 2), SHIFT_REPEAT(58),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bullet_list_repeat1, 2), SHIFT_REPEAT(55),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(64),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__line, 2), SHIFT_REPEAT(43),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__line, 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__line, 2), SHIFT_REPEAT(46),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__citation_block_repeat1, 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_list, 2),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__footnote_block, 1),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_list, 1),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumerated_list, 1, .production_id = 1),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bullet_list, 1, .production_id = 1),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 5),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_block, 1),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__citation_block, 2),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__footnote_block, 2),
  [229] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_block, 2),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_list, 2),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumerated_list, 2, .production_id = 2),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bullet_list, 2, .production_id = 2),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_list, 1),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__footnote_block_repeat1, 2),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_block_repeat1, 2),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_option_list_repeat1, 2),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_list_repeat1, 2),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enumerated_list_repeat1, 2, .production_id = 1),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bullet_list_repeat1, 2, .production_id = 1),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__citation_block, 1),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
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
