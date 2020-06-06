#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 131
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 58
#define ALIAS_COUNT 1
#define TOKEN_COUNT 24
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
  anon_sym__ = 19,
  sym__reference_name = 20,
  aux_sym__line_token1 = 21,
  sym__eol = 22,
  sym__blank_line = 23,
  sym_document = 24,
  sym__body_elements = 25,
  sym_paragraph = 26,
  sym__lists = 27,
  sym_bullet_list = 28,
  sym__bullet_list_item = 29,
  sym_enumerated_list = 30,
  sym__enumerated_list_item = 31,
  sym_field_list = 32,
  sym_field = 33,
  sym__field_body = 34,
  sym_option_list = 35,
  sym_option_list_item = 36,
  sym_line_block = 37,
  sym__single_line_block = 38,
  sym__markup_blocks = 39,
  sym__footnote_block = 40,
  sym_footnote = 41,
  sym__label = 42,
  sym__citation_block = 43,
  sym_citation = 44,
  sym__hyperlink_target_block = 45,
  sym_hyperlink_target = 46,
  aux_sym__line = 47,
  aux_sym_document_repeat1 = 48,
  aux_sym_paragraph_repeat1 = 49,
  aux_sym_bullet_list_repeat1 = 50,
  aux_sym_enumerated_list_repeat1 = 51,
  aux_sym_field_list_repeat1 = 52,
  aux_sym_option_list_repeat1 = 53,
  aux_sym_line_block_repeat1 = 54,
  aux_sym__footnote_block_repeat1 = 55,
  aux_sym__citation_block_repeat1 = 56,
  aux_sym__hyperlink_target_block_repeat1 = 57,
  alias_sym_list_item = 58,
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
  [anon_sym__] = "_",
  [sym__reference_name] = "_reference_name",
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
  [sym__hyperlink_target_block] = "_hyperlink_target_block",
  [sym_hyperlink_target] = "hyperlink_target",
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
  [aux_sym__hyperlink_target_block_repeat1] = "_hyperlink_target_block_repeat1",
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
  [anon_sym__] = anon_sym__,
  [sym__reference_name] = sym__reference_name,
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
  [sym__hyperlink_target_block] = sym__hyperlink_target_block,
  [sym_hyperlink_target] = sym_hyperlink_target,
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
  [aux_sym__hyperlink_target_block_repeat1] = aux_sym__hyperlink_target_block_repeat1,
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
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [sym__reference_name] = {
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
  [sym__hyperlink_target_block] = {
    .visible = false,
    .named = true,
  },
  [sym_hyperlink_target] = {
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
  [aux_sym__hyperlink_target_block_repeat1] = {
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
      if (eof) ADVANCE(24);
      if (lookahead == '\t') ADVANCE(29);
      if (lookahead == 11) ADVANCE(30);
      if (lookahead == '\f') ADVANCE(31);
      if (lookahead == ' ') ADVANCE(28);
      if (lookahead == '#') ADVANCE(40);
      if (lookahead == '*') ADVANCE(44);
      if (lookahead == '+') ADVANCE(60);
      if (lookahead == '-') ADVANCE(59);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == ':') ADVANCE(27);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == ']') ADVANCE(37);
      if (lookahead == '_') ADVANCE(49);
      if (lookahead == '|') ADVANCE(34);
      if (lookahead == 8226 ||
          lookahead == 8227 ||
          lookahead == 8259) ADVANCE(58);
      if (lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'I' ||
          lookahead == 'L' ||
          lookahead == 'M' ||
          lookahead == 'V' ||
          lookahead == 'X') ADVANCE(45);
      if (lookahead == 'c' ||
          lookahead == 'd' ||
          lookahead == 'i' ||
          lookahead == 'l' ||
          lookahead == 'm' ||
          lookahead == 'v' ||
          lookahead == 'x') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(47);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(52);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(29);
      if (lookahead == 11) ADVANCE(30);
      if (lookahead == '\f') ADVANCE(31);
      if (lookahead == ' ') ADVANCE(28);
      if (lookahead == '#') ADVANCE(41);
      if (lookahead == '*') ADVANCE(43);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == ']') ADVANCE(37);
      if (lookahead == '_') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '+') ADVANCE(17);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '/') ADVANCE(17);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'I' ||
          lookahead == 'L' ||
          lookahead == 'M' ||
          lookahead == 'V' ||
          lookahead == 'X') ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == 'c' ||
          lookahead == 'd' ||
          lookahead == 'i' ||
          lookahead == 'l' ||
          lookahead == 'm' ||
          lookahead == 'v' ||
          lookahead == 'x') ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '_') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(50);
      END_STATE();
    case 9:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f') ADVANCE(14);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == ',') ADVANCE(2);
      if (lookahead == '=') ADVANCE(19);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 11:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(26);
      END_STATE();
    case 12:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 13:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(35);
      END_STATE();
    case 14:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(33);
      END_STATE();
    case 15:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead == ',') ADVANCE(2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 20:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(52);
      END_STATE();
    case 21:
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(32);
      END_STATE();
    case 22:
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '_') ADVANCE(51);
      END_STATE();
    case 23:
      if (eof) ADVANCE(24);
      if (lookahead == '#') ADVANCE(53);
      if (lookahead == '*' ||
          lookahead == 8226 ||
          lookahead == 8227 ||
          lookahead == 8259) ADVANCE(58);
      if (lookahead == '+') ADVANCE(60);
      if (lookahead == '-') ADVANCE(59);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == ':') ADVANCE(27);
      if (lookahead == '|') ADVANCE(34);
      if (lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'I' ||
          lookahead == 'L' ||
          lookahead == 'M' ||
          lookahead == 'V' ||
          lookahead == 'X') ADVANCE(54);
      if (lookahead == 'c' ||
          lookahead == 'd' ||
          lookahead == 'i' ||
          lookahead == 'l' ||
          lookahead == 'm' ||
          lookahead == 'v' ||
          lookahead == 'x') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(53);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(52);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym__char_bullet);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym__numeric_bullet);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_TAB);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_3);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym__field_name);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_option_list_item_token1);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym__markup_start);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '.') ADVANCE(11);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym__label_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(25);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym__citation_label);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(10);
      if (lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'I' ||
          lookahead == 'L' ||
          lookahead == 'M' ||
          lookahead == 'V' ||
          lookahead == 'X') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym__citation_label);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(10);
      if (lookahead == 'c' ||
          lookahead == 'd' ||
          lookahead == 'i' ||
          lookahead == 'l' ||
          lookahead == 'm' ||
          lookahead == 'v' ||
          lookahead == 'x') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym__citation_label);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym__citation_label);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym__reference_name);
      if (lookahead == '_') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym__reference_name);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(8);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym__line_token1);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '.') ADVANCE(11);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'I' ||
          lookahead == 'L' ||
          lookahead == 'M' ||
          lookahead == 'V' ||
          lookahead == 'X') ADVANCE(5);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == 'c' ||
          lookahead == 'd' ||
          lookahead == 'i' ||
          lookahead == 'l' ||
          lookahead == 'm' ||
          lookahead == 'v' ||
          lookahead == 'x') ADVANCE(6);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '.') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '.') ADVANCE(13);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(25);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead == '-') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 23, .external_lex_state = 1},
  [2] = {.lex_state = 23, .external_lex_state = 1},
  [3] = {.lex_state = 23, .external_lex_state = 1},
  [4] = {.lex_state = 23, .external_lex_state = 1},
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
  [16] = {.lex_state = 1, .external_lex_state = 2},
  [17] = {.lex_state = 1, .external_lex_state = 2},
  [18] = {.lex_state = 20, .external_lex_state = 1},
  [19] = {.lex_state = 20, .external_lex_state = 2},
  [20] = {.lex_state = 20, .external_lex_state = 2},
  [21] = {.lex_state = 23, .external_lex_state = 2},
  [22] = {.lex_state = 23, .external_lex_state = 2},
  [23] = {.lex_state = 0, .external_lex_state = 2},
  [24] = {.lex_state = 0, .external_lex_state = 2},
  [25] = {.lex_state = 0, .external_lex_state = 2},
  [26] = {.lex_state = 0, .external_lex_state = 2},
  [27] = {.lex_state = 0, .external_lex_state = 2},
  [28] = {.lex_state = 0, .external_lex_state = 2},
  [29] = {.lex_state = 20, .external_lex_state = 1},
  [30] = {.lex_state = 20, .external_lex_state = 1},
  [31] = {.lex_state = 20, .external_lex_state = 2},
  [32] = {.lex_state = 20, .external_lex_state = 1},
  [33] = {.lex_state = 20, .external_lex_state = 1},
  [34] = {.lex_state = 20, .external_lex_state = 1},
  [35] = {.lex_state = 20, .external_lex_state = 1},
  [36] = {.lex_state = 20, .external_lex_state = 2},
  [37] = {.lex_state = 20, .external_lex_state = 1},
  [38] = {.lex_state = 0, .external_lex_state = 2},
  [39] = {.lex_state = 0, .external_lex_state = 2},
  [40] = {.lex_state = 0, .external_lex_state = 2},
  [41] = {.lex_state = 23, .external_lex_state = 2},
  [42] = {.lex_state = 0, .external_lex_state = 2},
  [43] = {.lex_state = 23, .external_lex_state = 2},
  [44] = {.lex_state = 0, .external_lex_state = 2},
  [45] = {.lex_state = 0, .external_lex_state = 2},
  [46] = {.lex_state = 20, .external_lex_state = 1},
  [47] = {.lex_state = 20, .external_lex_state = 1},
  [48] = {.lex_state = 20, .external_lex_state = 1},
  [49] = {.lex_state = 20, .external_lex_state = 2},
  [50] = {.lex_state = 20, .external_lex_state = 2},
  [51] = {.lex_state = 20, .external_lex_state = 2},
  [52] = {.lex_state = 20, .external_lex_state = 2},
  [53] = {.lex_state = 1, .external_lex_state = 2},
  [54] = {.lex_state = 20, .external_lex_state = 2},
  [55] = {.lex_state = 20, .external_lex_state = 2},
  [56] = {.lex_state = 20, .external_lex_state = 2},
  [57] = {.lex_state = 20, .external_lex_state = 2},
  [58] = {.lex_state = 20, .external_lex_state = 2},
  [59] = {.lex_state = 20, .external_lex_state = 2},
  [60] = {.lex_state = 20, .external_lex_state = 2},
  [61] = {.lex_state = 20, .external_lex_state = 2},
  [62] = {.lex_state = 20, .external_lex_state = 2},
  [63] = {.lex_state = 20, .external_lex_state = 2},
  [64] = {.lex_state = 20, .external_lex_state = 2},
  [65] = {.lex_state = 20, .external_lex_state = 2},
  [66] = {.lex_state = 20, .external_lex_state = 2},
  [67] = {.lex_state = 20, .external_lex_state = 2},
  [68] = {.lex_state = 20, .external_lex_state = 2},
  [69] = {.lex_state = 20, .external_lex_state = 2},
  [70] = {.lex_state = 20, .external_lex_state = 2},
  [71] = {.lex_state = 20, .external_lex_state = 2},
  [72] = {.lex_state = 20, .external_lex_state = 2},
  [73] = {.lex_state = 20, .external_lex_state = 2},
  [74] = {.lex_state = 23, .external_lex_state = 2},
  [75] = {.lex_state = 1, .external_lex_state = 2},
  [76] = {.lex_state = 1, .external_lex_state = 2},
  [77] = {.lex_state = 1, .external_lex_state = 2},
  [78] = {.lex_state = 1, .external_lex_state = 2},
  [79] = {.lex_state = 22, .external_lex_state = 2},
  [80] = {.lex_state = 22, .external_lex_state = 2},
  [81] = {.lex_state = 21, .external_lex_state = 2},
  [82] = {.lex_state = 18, .external_lex_state = 2},
  [83] = {.lex_state = 18, .external_lex_state = 2},
  [84] = {.lex_state = 0, .external_lex_state = 2},
  [85] = {.lex_state = 0, .external_lex_state = 2},
  [86] = {.lex_state = 0, .external_lex_state = 1},
  [87] = {.lex_state = 0, .external_lex_state = 1},
  [88] = {.lex_state = 0, .external_lex_state = 1},
  [89] = {.lex_state = 0, .external_lex_state = 1},
  [90] = {.lex_state = 0, .external_lex_state = 1},
  [91] = {.lex_state = 0, .external_lex_state = 2},
  [92] = {.lex_state = 0, .external_lex_state = 2},
  [93] = {.lex_state = 1, .external_lex_state = 2},
  [94] = {.lex_state = 0, .external_lex_state = 1},
  [95] = {.lex_state = 0, .external_lex_state = 1},
  [96] = {.lex_state = 0, .external_lex_state = 1},
  [97] = {.lex_state = 0, .external_lex_state = 1},
  [98] = {.lex_state = 1, .external_lex_state = 2},
  [99] = {.lex_state = 0, .external_lex_state = 2},
  [100] = {.lex_state = 23, .external_lex_state = 2},
  [101] = {.lex_state = 0, .external_lex_state = 2},
  [102] = {.lex_state = 0, .external_lex_state = 1},
  [103] = {.lex_state = 0, .external_lex_state = 2},
  [104] = {.lex_state = 0, .external_lex_state = 1},
  [105] = {.lex_state = 1, .external_lex_state = 2},
  [106] = {.lex_state = 0, .external_lex_state = 1},
  [107] = {.lex_state = 1, .external_lex_state = 2},
  [108] = {.lex_state = 0, .external_lex_state = 1},
  [109] = {.lex_state = 1, .external_lex_state = 2},
  [110] = {.lex_state = 0, .external_lex_state = 1},
  [111] = {.lex_state = 0, .external_lex_state = 1},
  [112] = {.lex_state = 0, .external_lex_state = 1},
  [113] = {.lex_state = 0, .external_lex_state = 1},
  [114] = {.lex_state = 0, .external_lex_state = 1},
  [115] = {.lex_state = 20, .external_lex_state = 2},
  [116] = {.lex_state = 0, .external_lex_state = 2},
  [117] = {.lex_state = 0, .external_lex_state = 2},
  [118] = {.lex_state = 0, .external_lex_state = 2},
  [119] = {.lex_state = 21, .external_lex_state = 2},
  [120] = {.lex_state = 0, .external_lex_state = 2},
  [121] = {.lex_state = 1, .external_lex_state = 2},
  [122] = {.lex_state = 0, .external_lex_state = 2},
  [123] = {.lex_state = 0, .external_lex_state = 2},
  [124] = {.lex_state = 0, .external_lex_state = 2},
  [125] = {.lex_state = 0, .external_lex_state = 2},
  [126] = {.lex_state = 0, .external_lex_state = 2},
  [127] = {.lex_state = 0, .external_lex_state = 2},
  [128] = {.lex_state = 0, .external_lex_state = 2},
  [129] = {.lex_state = 0, .external_lex_state = 2},
  [130] = {.lex_state = 0, .external_lex_state = 2},
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
    [anon_sym__] = ACTIONS(1),
    [aux_sym__line_token1] = ACTIONS(1),
    [sym__eol] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(116),
    [sym__body_elements] = STATE(2),
    [sym_paragraph] = STATE(104),
    [sym__lists] = STATE(104),
    [sym_bullet_list] = STATE(104),
    [sym__bullet_list_item] = STATE(97),
    [sym_enumerated_list] = STATE(104),
    [sym__enumerated_list_item] = STATE(96),
    [sym_field_list] = STATE(104),
    [sym_field] = STATE(95),
    [sym_option_list] = STATE(104),
    [sym_option_list_item] = STATE(94),
    [sym_line_block] = STATE(104),
    [sym__single_line_block] = STATE(90),
    [sym__markup_blocks] = STATE(104),
    [sym__footnote_block] = STATE(104),
    [sym_footnote] = STATE(88),
    [sym__citation_block] = STATE(104),
    [sym_citation] = STATE(87),
    [sym__hyperlink_target_block] = STATE(104),
    [sym_hyperlink_target] = STATE(86),
    [aux_sym__line] = STATE(33),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_paragraph_repeat1] = STATE(20),
    [aux_sym_bullet_list_repeat1] = STATE(21),
    [aux_sym_enumerated_list_repeat1] = STATE(22),
    [aux_sym_field_list_repeat1] = STATE(23),
    [aux_sym_option_list_repeat1] = STATE(24),
    [aux_sym_line_block_repeat1] = STATE(25),
    [aux_sym__footnote_block_repeat1] = STATE(26),
    [aux_sym__citation_block_repeat1] = STATE(27),
    [aux_sym__hyperlink_target_block_repeat1] = STATE(28),
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
    [sym_paragraph] = STATE(104),
    [sym__lists] = STATE(104),
    [sym_bullet_list] = STATE(104),
    [sym__bullet_list_item] = STATE(97),
    [sym_enumerated_list] = STATE(104),
    [sym__enumerated_list_item] = STATE(96),
    [sym_field_list] = STATE(104),
    [sym_field] = STATE(95),
    [sym_option_list] = STATE(104),
    [sym_option_list_item] = STATE(94),
    [sym_line_block] = STATE(104),
    [sym__single_line_block] = STATE(90),
    [sym__markup_blocks] = STATE(104),
    [sym__footnote_block] = STATE(104),
    [sym_footnote] = STATE(88),
    [sym__citation_block] = STATE(104),
    [sym_citation] = STATE(87),
    [sym__hyperlink_target_block] = STATE(104),
    [sym_hyperlink_target] = STATE(86),
    [aux_sym__line] = STATE(33),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_paragraph_repeat1] = STATE(20),
    [aux_sym_bullet_list_repeat1] = STATE(21),
    [aux_sym_enumerated_list_repeat1] = STATE(22),
    [aux_sym_field_list_repeat1] = STATE(23),
    [aux_sym_option_list_repeat1] = STATE(24),
    [aux_sym_line_block_repeat1] = STATE(25),
    [aux_sym__footnote_block_repeat1] = STATE(26),
    [aux_sym__citation_block_repeat1] = STATE(27),
    [aux_sym__hyperlink_target_block_repeat1] = STATE(28),
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
    [sym_paragraph] = STATE(104),
    [sym__lists] = STATE(104),
    [sym_bullet_list] = STATE(104),
    [sym__bullet_list_item] = STATE(97),
    [sym_enumerated_list] = STATE(104),
    [sym__enumerated_list_item] = STATE(96),
    [sym_field_list] = STATE(104),
    [sym_field] = STATE(95),
    [sym_option_list] = STATE(104),
    [sym_option_list_item] = STATE(94),
    [sym_line_block] = STATE(104),
    [sym__single_line_block] = STATE(90),
    [sym__markup_blocks] = STATE(104),
    [sym__footnote_block] = STATE(104),
    [sym_footnote] = STATE(88),
    [sym__citation_block] = STATE(104),
    [sym_citation] = STATE(87),
    [sym__hyperlink_target_block] = STATE(104),
    [sym_hyperlink_target] = STATE(86),
    [aux_sym__line] = STATE(33),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_paragraph_repeat1] = STATE(20),
    [aux_sym_bullet_list_repeat1] = STATE(21),
    [aux_sym_enumerated_list_repeat1] = STATE(22),
    [aux_sym_field_list_repeat1] = STATE(23),
    [aux_sym_option_list_repeat1] = STATE(24),
    [aux_sym_line_block_repeat1] = STATE(25),
    [aux_sym__footnote_block_repeat1] = STATE(26),
    [aux_sym__citation_block_repeat1] = STATE(27),
    [aux_sym__hyperlink_target_block_repeat1] = STATE(28),
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
    STATE(93), 1,
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
    STATE(105), 1,
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
    STATE(93), 1,
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
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(77), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [116] = 2,
    ACTIONS(69), 1,
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
  [146] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(85), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [156] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(87), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [166] = 3,
    ACTIONS(89), 1,
      aux_sym__line_token1,
    STATE(46), 1,
      aux_sym__line,
    ACTIONS(91), 2,
      sym__eol,
      sym__blank_line,
  [177] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(93), 1,
      aux_sym__line_token1,
    STATE(34), 1,
      aux_sym__line,
    STATE(89), 1,
      sym__field_body,
  [190] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(95), 1,
      aux_sym__line_token1,
    STATE(36), 1,
      aux_sym_paragraph_repeat1,
    STATE(48), 1,
      aux_sym__line,
  [203] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(7), 1,
      sym__char_bullet,
    STATE(41), 1,
      aux_sym_bullet_list_repeat1,
    STATE(114), 1,
      sym__bullet_list_item,
  [216] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(9), 1,
      sym__numeric_bullet,
    STATE(43), 1,
      aux_sym_enumerated_list_repeat1,
    STATE(113), 1,
      sym__enumerated_list_item,
  [229] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(11), 1,
      anon_sym_COLON,
    STATE(45), 1,
      aux_sym_field_list_repeat1,
    STATE(112), 1,
      sym_field,
  [242] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(13), 1,
      aux_sym_option_list_item_token1,
    STATE(42), 1,
      aux_sym_option_list_repeat1,
    STATE(111), 1,
      sym_option_list_item,
  [255] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(15), 1,
      anon_sym_PIPE,
    STATE(40), 1,
      aux_sym_line_block_repeat1,
    STATE(110), 1,
      sym__single_line_block,
  [268] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(97), 1,
      sym__markup_start,
    STATE(44), 1,
      aux_sym__footnote_block_repeat1,
    STATE(108), 1,
      sym_footnote,
  [281] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(99), 1,
      sym__markup_start,
    STATE(39), 1,
      aux_sym__citation_block_repeat1,
    STATE(106), 1,
      sym_citation,
  [294] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(101), 1,
      sym__markup_start,
    STATE(38), 1,
      aux_sym__hyperlink_target_block_repeat1,
    STATE(102), 1,
      sym_hyperlink_target,
  [307] = 3,
    ACTIONS(89), 1,
      aux_sym__line_token1,
    STATE(46), 1,
      aux_sym__line,
    ACTIONS(103), 2,
      sym__eol,
      sym__blank_line,
  [318] = 3,
    ACTIONS(89), 1,
      aux_sym__line_token1,
    STATE(46), 1,
      aux_sym__line,
    ACTIONS(105), 2,
      sym__eol,
      sym__blank_line,
  [329] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(107), 1,
      aux_sym__line_token1,
    STATE(63), 1,
      aux_sym__line,
    STATE(122), 1,
      sym__field_body,
  [342] = 3,
    ACTIONS(89), 1,
      aux_sym__line_token1,
    STATE(46), 1,
      aux_sym__line,
    ACTIONS(109), 2,
      sym__eol,
      sym__blank_line,
  [353] = 4,
    ACTIONS(89), 1,
      aux_sym__line_token1,
    ACTIONS(111), 1,
      sym__eol,
    ACTIONS(113), 1,
      sym__blank_line,
    STATE(46), 1,
      aux_sym__line,
  [366] = 3,
    ACTIONS(89), 1,
      aux_sym__line_token1,
    STATE(46), 1,
      aux_sym__line,
    ACTIONS(115), 2,
      sym__eol,
      sym__blank_line,
  [377] = 3,
    ACTIONS(89), 1,
      aux_sym__line_token1,
    STATE(46), 1,
      aux_sym__line,
    ACTIONS(117), 2,
      sym__eol,
      sym__blank_line,
  [388] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(119), 1,
      aux_sym__line_token1,
    STATE(36), 1,
      aux_sym_paragraph_repeat1,
    STATE(50), 1,
      aux_sym__line,
  [401] = 3,
    ACTIONS(89), 1,
      aux_sym__line_token1,
    STATE(46), 1,
      aux_sym__line,
    ACTIONS(122), 2,
      sym__eol,
      sym__blank_line,
  [412] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(124), 1,
      sym__markup_start,
    STATE(38), 1,
      aux_sym__hyperlink_target_block_repeat1,
    STATE(124), 1,
      sym_hyperlink_target,
  [425] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(127), 1,
      sym__markup_start,
    STATE(39), 1,
      aux_sym__citation_block_repeat1,
    STATE(125), 1,
      sym_citation,
  [438] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(130), 1,
      anon_sym_PIPE,
    STATE(40), 1,
      aux_sym_line_block_repeat1,
    STATE(127), 1,
      sym__single_line_block,
  [451] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(133), 1,
      sym__char_bullet,
    STATE(41), 1,
      aux_sym_bullet_list_repeat1,
    STATE(123), 1,
      sym__bullet_list_item,
  [464] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(136), 1,
      aux_sym_option_list_item_token1,
    STATE(42), 1,
      aux_sym_option_list_repeat1,
    STATE(128), 1,
      sym_option_list_item,
  [477] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(139), 1,
      sym__numeric_bullet,
    STATE(43), 1,
      aux_sym_enumerated_list_repeat1,
    STATE(130), 1,
      sym__enumerated_list_item,
  [490] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(142), 1,
      sym__markup_start,
    STATE(44), 1,
      aux_sym__footnote_block_repeat1,
    STATE(126), 1,
      sym_footnote,
  [503] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(145), 1,
      anon_sym_COLON,
    STATE(45), 1,
      aux_sym_field_list_repeat1,
    STATE(129), 1,
      sym_field,
  [516] = 3,
    ACTIONS(148), 1,
      aux_sym__line_token1,
    STATE(46), 1,
      aux_sym__line,
    ACTIONS(151), 2,
      sym__eol,
      sym__blank_line,
  [527] = 3,
    ACTIONS(89), 1,
      aux_sym__line_token1,
    STATE(46), 1,
      aux_sym__line,
    ACTIONS(153), 2,
      sym__eol,
      sym__blank_line,
  [538] = 4,
    ACTIONS(89), 1,
      aux_sym__line_token1,
    ACTIONS(111), 1,
      sym__eol,
    ACTIONS(155), 1,
      sym__blank_line,
    STATE(46), 1,
      aux_sym__line,
  [551] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(157), 1,
      aux_sym__line_token1,
    STATE(35), 1,
      aux_sym__line,
  [561] = 3,
    ACTIONS(111), 1,
      sym__eol,
    ACTIONS(159), 1,
      aux_sym__line_token1,
    STATE(66), 1,
      aux_sym__line,
  [571] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(161), 1,
      aux_sym__line_token1,
    STATE(30), 1,
      aux_sym__line,
  [581] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(163), 1,
      aux_sym__line_token1,
    STATE(32), 1,
      aux_sym__line,
  [591] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(165), 1,
      anon_sym_LBRACK,
    ACTIONS(167), 1,
      anon_sym__,
  [601] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(169), 1,
      aux_sym__line_token1,
    STATE(68), 1,
      aux_sym__line,
  [611] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(171), 1,
      aux_sym__line_token1,
    STATE(69), 1,
      aux_sym__line,
  [621] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(173), 1,
      aux_sym__line_token1,
    STATE(70), 1,
      aux_sym__line,
  [631] = 3,
    ACTIONS(153), 1,
      sym__eol,
    ACTIONS(159), 1,
      aux_sym__line_token1,
    STATE(66), 1,
      aux_sym__line,
  [641] = 3,
    ACTIONS(122), 1,
      sym__eol,
    ACTIONS(159), 1,
      aux_sym__line_token1,
    STATE(66), 1,
      aux_sym__line,
  [651] = 3,
    ACTIONS(91), 1,
      sym__eol,
    ACTIONS(159), 1,
      aux_sym__line_token1,
    STATE(66), 1,
      aux_sym__line,
  [661] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(175), 1,
      aux_sym__line_token1,
    STATE(57), 1,
      aux_sym__line,
  [671] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(177), 1,
      aux_sym__line_token1,
    STATE(58), 1,
      aux_sym__line,
  [681] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(179), 1,
      aux_sym__line_token1,
    STATE(59), 1,
      aux_sym__line,
  [691] = 3,
    ACTIONS(115), 1,
      sym__eol,
    ACTIONS(159), 1,
      aux_sym__line_token1,
    STATE(66), 1,
      aux_sym__line,
  [701] = 3,
    ACTIONS(117), 1,
      sym__eol,
    ACTIONS(159), 1,
      aux_sym__line_token1,
    STATE(66), 1,
      aux_sym__line,
  [711] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(181), 1,
      aux_sym__line_token1,
    STATE(29), 1,
      aux_sym__line,
  [721] = 3,
    ACTIONS(151), 1,
      sym__eol,
    ACTIONS(183), 1,
      aux_sym__line_token1,
    STATE(66), 1,
      aux_sym__line,
  [731] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(186), 1,
      aux_sym__line_token1,
    STATE(64), 1,
      aux_sym__line,
  [741] = 3,
    ACTIONS(109), 1,
      sym__eol,
    ACTIONS(159), 1,
      aux_sym__line_token1,
    STATE(66), 1,
      aux_sym__line,
  [751] = 3,
    ACTIONS(105), 1,
      sym__eol,
    ACTIONS(159), 1,
      aux_sym__line_token1,
    STATE(66), 1,
      aux_sym__line,
  [761] = 3,
    ACTIONS(103), 1,
      sym__eol,
    ACTIONS(159), 1,
      aux_sym__line_token1,
    STATE(66), 1,
      aux_sym__line,
  [771] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(188), 1,
      aux_sym__line_token1,
    STATE(47), 1,
      aux_sym__line,
  [781] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(190), 1,
      aux_sym__line_token1,
    STATE(37), 1,
      aux_sym__line,
  [791] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(192), 1,
      aux_sym__line_token1,
    STATE(18), 1,
      aux_sym__line,
  [801] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(194), 1,
      sym__char_bullet,
  [808] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(167), 1,
      anon_sym__,
  [815] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(196), 1,
      anon_sym__,
  [822] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
  [829] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(200), 1,
      anon_sym_LBRACK,
  [836] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(202), 1,
      sym__reference_name,
  [843] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(204), 1,
      sym__reference_name,
  [850] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(206), 1,
      sym__field_name,
  [857] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(208), 1,
      sym__citation_label,
  [864] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(210), 1,
      sym__citation_label,
  [871] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(212), 1,
      sym__markup_start,
  [878] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(214), 1,
      anon_sym_COLON,
  [885] = 2,
    ACTIONS(216), 1,
      sym__eol,
    ACTIONS(218), 1,
      sym__blank_line,
  [892] = 2,
    ACTIONS(220), 1,
      sym__eol,
    ACTIONS(222), 1,
      sym__blank_line,
  [899] = 2,
    ACTIONS(224), 1,
      sym__eol,
    ACTIONS(226), 1,
      sym__blank_line,
  [906] = 1,
    ACTIONS(228), 2,
      sym__eol,
      sym__blank_line,
  [911] = 2,
    ACTIONS(230), 1,
      sym__eol,
    ACTIONS(232), 1,
      sym__blank_line,
  [918] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(234), 1,
      anon_sym_PIPE,
  [925] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(236), 1,
      anon_sym_COLON,
  [932] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(238), 1,
      anon_sym_RBRACK,
  [939] = 2,
    ACTIONS(240), 1,
      sym__eol,
    ACTIONS(242), 1,
      sym__blank_line,
  [946] = 2,
    ACTIONS(244), 1,
      sym__eol,
    ACTIONS(246), 1,
      sym__blank_line,
  [953] = 2,
    ACTIONS(248), 1,
      sym__eol,
    ACTIONS(250), 1,
      sym__blank_line,
  [960] = 2,
    ACTIONS(252), 1,
      sym__eol,
    ACTIONS(254), 1,
      sym__blank_line,
  [967] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(256), 1,
      anon_sym_RBRACK,
  [974] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(258), 1,
      aux_sym_option_list_item_token1,
  [981] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(260), 1,
      sym__numeric_bullet,
  [988] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(262), 1,
      anon_sym_COLON,
  [995] = 2,
    ACTIONS(216), 1,
      sym__eol,
    ACTIONS(264), 1,
      sym__blank_line,
  [1002] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(266), 1,
      anon_sym_COLON,
  [1009] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(268), 1,
      sym__blank_line,
  [1016] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(270), 1,
      anon_sym_RBRACK,
  [1023] = 2,
    ACTIONS(220), 1,
      sym__eol,
    ACTIONS(272), 1,
      sym__blank_line,
  [1030] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(274), 1,
      anon_sym_LBRACK,
  [1037] = 2,
    ACTIONS(224), 1,
      sym__eol,
    ACTIONS(276), 1,
      sym__blank_line,
  [1044] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(278), 1,
      anon_sym_LBRACK,
  [1051] = 2,
    ACTIONS(230), 1,
      sym__eol,
    ACTIONS(280), 1,
      sym__blank_line,
  [1058] = 2,
    ACTIONS(240), 1,
      sym__eol,
    ACTIONS(282), 1,
      sym__blank_line,
  [1065] = 2,
    ACTIONS(244), 1,
      sym__eol,
    ACTIONS(284), 1,
      sym__blank_line,
  [1072] = 2,
    ACTIONS(248), 1,
      sym__eol,
    ACTIONS(286), 1,
      sym__blank_line,
  [1079] = 2,
    ACTIONS(252), 1,
      sym__eol,
    ACTIONS(288), 1,
      sym__blank_line,
  [1086] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(290), 1,
      aux_sym__line_token1,
  [1093] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(292), 1,
      ts_builtin_sym_end,
  [1100] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(294), 1,
      sym__markup_start,
  [1107] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(296), 1,
      sym__markup_start,
  [1114] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(298), 1,
      sym__field_name,
  [1121] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(300), 1,
      anon_sym_COLON,
  [1128] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(302), 1,
      anon_sym_RBRACK,
  [1135] = 1,
    ACTIONS(228), 1,
      sym__eol,
  [1139] = 1,
    ACTIONS(252), 1,
      sym__eol,
  [1143] = 1,
    ACTIONS(216), 1,
      sym__eol,
  [1147] = 1,
    ACTIONS(220), 1,
      sym__eol,
  [1151] = 1,
    ACTIONS(224), 1,
      sym__eol,
  [1155] = 1,
    ACTIONS(230), 1,
      sym__eol,
  [1159] = 1,
    ACTIONS(240), 1,
      sym__eol,
  [1163] = 1,
    ACTIONS(244), 1,
      sym__eol,
  [1167] = 1,
    ACTIONS(248), 1,
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
  [SMALL_STATE(17)] = 156,
  [SMALL_STATE(18)] = 166,
  [SMALL_STATE(19)] = 177,
  [SMALL_STATE(20)] = 190,
  [SMALL_STATE(21)] = 203,
  [SMALL_STATE(22)] = 216,
  [SMALL_STATE(23)] = 229,
  [SMALL_STATE(24)] = 242,
  [SMALL_STATE(25)] = 255,
  [SMALL_STATE(26)] = 268,
  [SMALL_STATE(27)] = 281,
  [SMALL_STATE(28)] = 294,
  [SMALL_STATE(29)] = 307,
  [SMALL_STATE(30)] = 318,
  [SMALL_STATE(31)] = 329,
  [SMALL_STATE(32)] = 342,
  [SMALL_STATE(33)] = 353,
  [SMALL_STATE(34)] = 366,
  [SMALL_STATE(35)] = 377,
  [SMALL_STATE(36)] = 388,
  [SMALL_STATE(37)] = 401,
  [SMALL_STATE(38)] = 412,
  [SMALL_STATE(39)] = 425,
  [SMALL_STATE(40)] = 438,
  [SMALL_STATE(41)] = 451,
  [SMALL_STATE(42)] = 464,
  [SMALL_STATE(43)] = 477,
  [SMALL_STATE(44)] = 490,
  [SMALL_STATE(45)] = 503,
  [SMALL_STATE(46)] = 516,
  [SMALL_STATE(47)] = 527,
  [SMALL_STATE(48)] = 538,
  [SMALL_STATE(49)] = 551,
  [SMALL_STATE(50)] = 561,
  [SMALL_STATE(51)] = 571,
  [SMALL_STATE(52)] = 581,
  [SMALL_STATE(53)] = 591,
  [SMALL_STATE(54)] = 601,
  [SMALL_STATE(55)] = 611,
  [SMALL_STATE(56)] = 621,
  [SMALL_STATE(57)] = 631,
  [SMALL_STATE(58)] = 641,
  [SMALL_STATE(59)] = 651,
  [SMALL_STATE(60)] = 661,
  [SMALL_STATE(61)] = 671,
  [SMALL_STATE(62)] = 681,
  [SMALL_STATE(63)] = 691,
  [SMALL_STATE(64)] = 701,
  [SMALL_STATE(65)] = 711,
  [SMALL_STATE(66)] = 721,
  [SMALL_STATE(67)] = 731,
  [SMALL_STATE(68)] = 741,
  [SMALL_STATE(69)] = 751,
  [SMALL_STATE(70)] = 761,
  [SMALL_STATE(71)] = 771,
  [SMALL_STATE(72)] = 781,
  [SMALL_STATE(73)] = 791,
  [SMALL_STATE(74)] = 801,
  [SMALL_STATE(75)] = 808,
  [SMALL_STATE(76)] = 815,
  [SMALL_STATE(77)] = 822,
  [SMALL_STATE(78)] = 829,
  [SMALL_STATE(79)] = 836,
  [SMALL_STATE(80)] = 843,
  [SMALL_STATE(81)] = 850,
  [SMALL_STATE(82)] = 857,
  [SMALL_STATE(83)] = 864,
  [SMALL_STATE(84)] = 871,
  [SMALL_STATE(85)] = 878,
  [SMALL_STATE(86)] = 885,
  [SMALL_STATE(87)] = 892,
  [SMALL_STATE(88)] = 899,
  [SMALL_STATE(89)] = 906,
  [SMALL_STATE(90)] = 911,
  [SMALL_STATE(91)] = 918,
  [SMALL_STATE(92)] = 925,
  [SMALL_STATE(93)] = 932,
  [SMALL_STATE(94)] = 939,
  [SMALL_STATE(95)] = 946,
  [SMALL_STATE(96)] = 953,
  [SMALL_STATE(97)] = 960,
  [SMALL_STATE(98)] = 967,
  [SMALL_STATE(99)] = 974,
  [SMALL_STATE(100)] = 981,
  [SMALL_STATE(101)] = 988,
  [SMALL_STATE(102)] = 995,
  [SMALL_STATE(103)] = 1002,
  [SMALL_STATE(104)] = 1009,
  [SMALL_STATE(105)] = 1016,
  [SMALL_STATE(106)] = 1023,
  [SMALL_STATE(107)] = 1030,
  [SMALL_STATE(108)] = 1037,
  [SMALL_STATE(109)] = 1044,
  [SMALL_STATE(110)] = 1051,
  [SMALL_STATE(111)] = 1058,
  [SMALL_STATE(112)] = 1065,
  [SMALL_STATE(113)] = 1072,
  [SMALL_STATE(114)] = 1079,
  [SMALL_STATE(115)] = 1086,
  [SMALL_STATE(116)] = 1093,
  [SMALL_STATE(117)] = 1100,
  [SMALL_STATE(118)] = 1107,
  [SMALL_STATE(119)] = 1114,
  [SMALL_STATE(120)] = 1121,
  [SMALL_STATE(121)] = 1128,
  [SMALL_STATE(122)] = 1135,
  [SMALL_STATE(123)] = 1139,
  [SMALL_STATE(124)] = 1143,
  [SMALL_STATE(125)] = 1147,
  [SMALL_STATE(126)] = 1151,
  [SMALL_STATE(127)] = 1155,
  [SMALL_STATE(128)] = 1159,
  [SMALL_STATE(129)] = 1163,
  [SMALL_STATE(130)] = 1167,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(65),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(51),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(119),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(52),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(7),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(53),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(33),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(3),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__body_elements, 2),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__body_elements, 2),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_block, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_citation, 6),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bullet_list_item, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__enumerated_list_item, 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_list_item, 2),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_body, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_block, 3),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(50),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footnote, 6),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hyperlink_target_block_repeat1, 2), SHIFT_REPEAT(76),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__citation_block_repeat1, 2), SHIFT_REPEAT(77),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_block_repeat1, 2), SHIFT_REPEAT(13),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bullet_list_repeat1, 2), SHIFT_REPEAT(56),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_option_list_repeat1, 2), SHIFT_REPEAT(54),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enumerated_list_repeat1, 2), SHIFT_REPEAT(55),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__footnote_block_repeat1, 2), SHIFT_REPEAT(78),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_list_repeat1, 2), SHIFT_REPEAT(81),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__line, 2), SHIFT_REPEAT(46),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__line, 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hyperlink_target, 6),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__line, 2), SHIFT_REPEAT(66),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bullet_list_repeat1, 2, .production_id = 1),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__footnote_block_repeat1, 2),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hyperlink_target_block, 1),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__citation_block, 1),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__footnote_block, 1),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 5),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_block, 1),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_block_repeat1, 2),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_list, 1),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_list, 1),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumerated_list, 1, .production_id = 1),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bullet_list, 1, .production_id = 1),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_option_list_repeat1, 2),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enumerated_list_repeat1, 2, .production_id = 1),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_list_repeat1, 2),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hyperlink_target_block, 2),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__citation_block, 2),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__footnote_block, 2),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_block, 2),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_list, 2),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_list, 2),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumerated_list, 2, .production_id = 2),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bullet_list, 2, .production_id = 2),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [292] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hyperlink_target_block_repeat1, 2),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__citation_block_repeat1, 2),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
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
