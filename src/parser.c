#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 151
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 62
#define ALIAS_COUNT 1
#define TOKEN_COUNT 25
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
  anon_sym___ = 20,
  sym__reference_name = 21,
  aux_sym__line_token1 = 22,
  sym__eol = 23,
  sym__blank_line = 24,
  sym_document = 25,
  sym__body_elements = 26,
  sym_paragraph = 27,
  sym__lists = 28,
  sym_bullet_list = 29,
  sym__bullet_list_item = 30,
  sym_enumerated_list = 31,
  sym__enumerated_list_item = 32,
  sym_field_list = 33,
  sym_field = 34,
  sym__field_body = 35,
  sym_option_list = 36,
  sym_option_list_item = 37,
  sym_line_block = 38,
  sym__single_line_block = 39,
  sym__markup_blocks = 40,
  sym__footnote_block = 41,
  sym_footnote = 42,
  sym__label = 43,
  sym__citation_block = 44,
  sym_citation = 45,
  sym__hyperlink_target_block = 46,
  sym_target = 47,
  sym__anoynymous_hyperlink_target_block = 48,
  sym__anonymous_target = 49,
  aux_sym__line = 50,
  aux_sym_document_repeat1 = 51,
  aux_sym_paragraph_repeat1 = 52,
  aux_sym_bullet_list_repeat1 = 53,
  aux_sym_enumerated_list_repeat1 = 54,
  aux_sym_field_list_repeat1 = 55,
  aux_sym_option_list_repeat1 = 56,
  aux_sym_line_block_repeat1 = 57,
  aux_sym__footnote_block_repeat1 = 58,
  aux_sym__citation_block_repeat1 = 59,
  aux_sym__hyperlink_target_block_repeat1 = 60,
  aux_sym__anoynymous_hyperlink_target_block_repeat1 = 61,
  alias_sym_list_item = 62,
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
  [anon_sym___] = "__",
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
  [sym_target] = "target",
  [sym__anoynymous_hyperlink_target_block] = "_anoynymous_hyperlink_target_block",
  [sym__anonymous_target] = "target",
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
  [aux_sym__anoynymous_hyperlink_target_block_repeat1] = "_anoynymous_hyperlink_target_block_repeat1",
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
  [anon_sym___] = anon_sym___,
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
  [sym_target] = sym_target,
  [sym__anoynymous_hyperlink_target_block] = sym__anoynymous_hyperlink_target_block,
  [sym__anonymous_target] = sym_target,
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
  [aux_sym__anoynymous_hyperlink_target_block_repeat1] = aux_sym__anoynymous_hyperlink_target_block_repeat1,
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
  [anon_sym___] = {
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
  [sym_target] = {
    .visible = true,
    .named = true,
  },
  [sym__anoynymous_hyperlink_target_block] = {
    .visible = false,
    .named = true,
  },
  [sym__anonymous_target] = {
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
  [aux_sym__anoynymous_hyperlink_target_block_repeat1] = {
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
      if (lookahead == '+') ADVANCE(62);
      if (lookahead == '-') ADVANCE(61);
      if (lookahead == '.') ADVANCE(58);
      if (lookahead == '/') ADVANCE(63);
      if (lookahead == ':') ADVANCE(27);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == ']') ADVANCE(37);
      if (lookahead == '_') ADVANCE(49);
      if (lookahead == '|') ADVANCE(34);
      if (lookahead == 8226 ||
          lookahead == 8227 ||
          lookahead == 8259) ADVANCE(60);
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
          lookahead != '\n') ADVANCE(53);
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
          lookahead != ':') ADVANCE(51);
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
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 21:
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(32);
      END_STATE();
    case 22:
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '_') ADVANCE(52);
      END_STATE();
    case 23:
      if (eof) ADVANCE(24);
      if (lookahead == '#') ADVANCE(54);
      if (lookahead == '*' ||
          lookahead == 8226 ||
          lookahead == 8227 ||
          lookahead == 8259) ADVANCE(60);
      if (lookahead == '+') ADVANCE(62);
      if (lookahead == '-') ADVANCE(61);
      if (lookahead == '.') ADVANCE(58);
      if (lookahead == '/') ADVANCE(63);
      if (lookahead == ':') ADVANCE(27);
      if (lookahead == '_') ADVANCE(59);
      if (lookahead == '|') ADVANCE(34);
      if (lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'I' ||
          lookahead == 'L' ||
          lookahead == 'M' ||
          lookahead == 'V' ||
          lookahead == 'X') ADVANCE(55);
      if (lookahead == 'c' ||
          lookahead == 'd' ||
          lookahead == 'i' ||
          lookahead == 'l' ||
          lookahead == 'm' ||
          lookahead == 'v' ||
          lookahead == 'x') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(54);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
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
      if (lookahead == '_') ADVANCE(50);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym___);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym__reference_name);
      if (lookahead == '_') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym__reference_name);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(8);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym__line_token1);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '.') ADVANCE(11);
      END_STATE();
    case 55:
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
    case 56:
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
    case 57:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '.') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '.') ADVANCE(13);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '_') ADVANCE(50);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(25);
      END_STATE();
    case 61:
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
    case 62:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 63:
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
  [7] = {.lex_state = 1, .external_lex_state = 2},
  [8] = {.lex_state = 1, .external_lex_state = 1},
  [9] = {.lex_state = 1, .external_lex_state = 2},
  [10] = {.lex_state = 1, .external_lex_state = 2},
  [11] = {.lex_state = 1, .external_lex_state = 2},
  [12] = {.lex_state = 1, .external_lex_state = 2},
  [13] = {.lex_state = 1, .external_lex_state = 2},
  [14] = {.lex_state = 1, .external_lex_state = 2},
  [15] = {.lex_state = 1, .external_lex_state = 2},
  [16] = {.lex_state = 1, .external_lex_state = 2},
  [17] = {.lex_state = 1, .external_lex_state = 2},
  [18] = {.lex_state = 1, .external_lex_state = 2},
  [19] = {.lex_state = 1, .external_lex_state = 2},
  [20] = {.lex_state = 1, .external_lex_state = 2},
  [21] = {.lex_state = 1, .external_lex_state = 2},
  [22] = {.lex_state = 20, .external_lex_state = 2},
  [23] = {.lex_state = 20, .external_lex_state = 2},
  [24] = {.lex_state = 23, .external_lex_state = 2},
  [25] = {.lex_state = 0, .external_lex_state = 2},
  [26] = {.lex_state = 0, .external_lex_state = 2},
  [27] = {.lex_state = 0, .external_lex_state = 2},
  [28] = {.lex_state = 0, .external_lex_state = 2},
  [29] = {.lex_state = 0, .external_lex_state = 2},
  [30] = {.lex_state = 0, .external_lex_state = 2},
  [31] = {.lex_state = 0, .external_lex_state = 2},
  [32] = {.lex_state = 20, .external_lex_state = 1},
  [33] = {.lex_state = 20, .external_lex_state = 1},
  [34] = {.lex_state = 20, .external_lex_state = 2},
  [35] = {.lex_state = 20, .external_lex_state = 1},
  [36] = {.lex_state = 20, .external_lex_state = 1},
  [37] = {.lex_state = 20, .external_lex_state = 1},
  [38] = {.lex_state = 20, .external_lex_state = 1},
  [39] = {.lex_state = 23, .external_lex_state = 2},
  [40] = {.lex_state = 1, .external_lex_state = 2},
  [41] = {.lex_state = 20, .external_lex_state = 1},
  [42] = {.lex_state = 20, .external_lex_state = 1},
  [43] = {.lex_state = 0, .external_lex_state = 2},
  [44] = {.lex_state = 20, .external_lex_state = 1},
  [45] = {.lex_state = 20, .external_lex_state = 1},
  [46] = {.lex_state = 0, .external_lex_state = 2},
  [47] = {.lex_state = 0, .external_lex_state = 2},
  [48] = {.lex_state = 23, .external_lex_state = 2},
  [49] = {.lex_state = 0, .external_lex_state = 2},
  [50] = {.lex_state = 0, .external_lex_state = 2},
  [51] = {.lex_state = 0, .external_lex_state = 2},
  [52] = {.lex_state = 20, .external_lex_state = 1},
  [53] = {.lex_state = 20, .external_lex_state = 1},
  [54] = {.lex_state = 20, .external_lex_state = 1},
  [55] = {.lex_state = 20, .external_lex_state = 2},
  [56] = {.lex_state = 0, .external_lex_state = 2},
  [57] = {.lex_state = 23, .external_lex_state = 2},
  [58] = {.lex_state = 20, .external_lex_state = 2},
  [59] = {.lex_state = 20, .external_lex_state = 2},
  [60] = {.lex_state = 20, .external_lex_state = 2},
  [61] = {.lex_state = 1, .external_lex_state = 2},
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
  [72] = {.lex_state = 1, .external_lex_state = 2},
  [73] = {.lex_state = 20, .external_lex_state = 2},
  [74] = {.lex_state = 20, .external_lex_state = 2},
  [75] = {.lex_state = 20, .external_lex_state = 2},
  [76] = {.lex_state = 20, .external_lex_state = 2},
  [77] = {.lex_state = 20, .external_lex_state = 2},
  [78] = {.lex_state = 20, .external_lex_state = 2},
  [79] = {.lex_state = 20, .external_lex_state = 2},
  [80] = {.lex_state = 20, .external_lex_state = 2},
  [81] = {.lex_state = 20, .external_lex_state = 2},
  [82] = {.lex_state = 20, .external_lex_state = 2},
  [83] = {.lex_state = 20, .external_lex_state = 2},
  [84] = {.lex_state = 20, .external_lex_state = 2},
  [85] = {.lex_state = 20, .external_lex_state = 2},
  [86] = {.lex_state = 20, .external_lex_state = 2},
  [87] = {.lex_state = 20, .external_lex_state = 2},
  [88] = {.lex_state = 20, .external_lex_state = 2},
  [89] = {.lex_state = 20, .external_lex_state = 2},
  [90] = {.lex_state = 0, .external_lex_state = 1},
  [91] = {.lex_state = 0, .external_lex_state = 1},
  [92] = {.lex_state = 18, .external_lex_state = 2},
  [93] = {.lex_state = 1, .external_lex_state = 2},
  [94] = {.lex_state = 1, .external_lex_state = 2},
  [95] = {.lex_state = 23, .external_lex_state = 2},
  [96] = {.lex_state = 21, .external_lex_state = 2},
  [97] = {.lex_state = 0, .external_lex_state = 2},
  [98] = {.lex_state = 22, .external_lex_state = 2},
  [99] = {.lex_state = 18, .external_lex_state = 2},
  [100] = {.lex_state = 0, .external_lex_state = 1},
  [101] = {.lex_state = 0, .external_lex_state = 1},
  [102] = {.lex_state = 0, .external_lex_state = 2},
  [103] = {.lex_state = 0, .external_lex_state = 2},
  [104] = {.lex_state = 1, .external_lex_state = 2},
  [105] = {.lex_state = 23, .external_lex_state = 2},
  [106] = {.lex_state = 0, .external_lex_state = 1},
  [107] = {.lex_state = 1, .external_lex_state = 2},
  [108] = {.lex_state = 0, .external_lex_state = 1},
  [109] = {.lex_state = 0, .external_lex_state = 1},
  [110] = {.lex_state = 0, .external_lex_state = 1},
  [111] = {.lex_state = 0, .external_lex_state = 1},
  [112] = {.lex_state = 0, .external_lex_state = 2},
  [113] = {.lex_state = 0, .external_lex_state = 2},
  [114] = {.lex_state = 1, .external_lex_state = 2},
  [115] = {.lex_state = 1, .external_lex_state = 2},
  [116] = {.lex_state = 0, .external_lex_state = 2},
  [117] = {.lex_state = 0, .external_lex_state = 2},
  [118] = {.lex_state = 0, .external_lex_state = 2},
  [119] = {.lex_state = 0, .external_lex_state = 1},
  [120] = {.lex_state = 22, .external_lex_state = 2},
  [121] = {.lex_state = 0, .external_lex_state = 2},
  [122] = {.lex_state = 0, .external_lex_state = 2},
  [123] = {.lex_state = 0, .external_lex_state = 1},
  [124] = {.lex_state = 1, .external_lex_state = 2},
  [125] = {.lex_state = 0, .external_lex_state = 1},
  [126] = {.lex_state = 1, .external_lex_state = 2},
  [127] = {.lex_state = 0, .external_lex_state = 1},
  [128] = {.lex_state = 0, .external_lex_state = 2},
  [129] = {.lex_state = 0, .external_lex_state = 1},
  [130] = {.lex_state = 0, .external_lex_state = 1},
  [131] = {.lex_state = 0, .external_lex_state = 1},
  [132] = {.lex_state = 0, .external_lex_state = 1},
  [133] = {.lex_state = 0, .external_lex_state = 1},
  [134] = {.lex_state = 0, .external_lex_state = 1},
  [135] = {.lex_state = 0, .external_lex_state = 1},
  [136] = {.lex_state = 0, .external_lex_state = 2},
  [137] = {.lex_state = 20, .external_lex_state = 2},
  [138] = {.lex_state = 21, .external_lex_state = 2},
  [139] = {.lex_state = 0, .external_lex_state = 2},
  [140] = {.lex_state = 0, .external_lex_state = 2},
  [141] = {.lex_state = 0, .external_lex_state = 2},
  [142] = {.lex_state = 0, .external_lex_state = 2},
  [143] = {.lex_state = 0, .external_lex_state = 2},
  [144] = {.lex_state = 0, .external_lex_state = 2},
  [145] = {.lex_state = 0, .external_lex_state = 2},
  [146] = {.lex_state = 0, .external_lex_state = 2},
  [147] = {.lex_state = 0, .external_lex_state = 2},
  [148] = {.lex_state = 0, .external_lex_state = 2},
  [149] = {.lex_state = 0, .external_lex_state = 2},
  [150] = {.lex_state = 0, .external_lex_state = 2},
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
    [anon_sym___] = ACTIONS(1),
    [aux_sym__line_token1] = ACTIONS(1),
    [sym__eol] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(136),
    [sym__body_elements] = STATE(3),
    [sym_paragraph] = STATE(135),
    [sym__lists] = STATE(135),
    [sym_bullet_list] = STATE(135),
    [sym__bullet_list_item] = STATE(134),
    [sym_enumerated_list] = STATE(135),
    [sym__enumerated_list_item] = STATE(133),
    [sym_field_list] = STATE(135),
    [sym_field] = STATE(119),
    [sym_option_list] = STATE(135),
    [sym_option_list_item] = STATE(111),
    [sym_line_block] = STATE(135),
    [sym__single_line_block] = STATE(110),
    [sym__markup_blocks] = STATE(135),
    [sym__footnote_block] = STATE(135),
    [sym_footnote] = STATE(109),
    [sym__citation_block] = STATE(135),
    [sym_citation] = STATE(108),
    [sym__hyperlink_target_block] = STATE(135),
    [sym_target] = STATE(91),
    [sym__anoynymous_hyperlink_target_block] = STATE(135),
    [sym__anonymous_target] = STATE(106),
    [aux_sym__line] = STATE(36),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_paragraph_repeat1] = STATE(22),
    [aux_sym_bullet_list_repeat1] = STATE(39),
    [aux_sym_enumerated_list_repeat1] = STATE(24),
    [aux_sym_field_list_repeat1] = STATE(25),
    [aux_sym_option_list_repeat1] = STATE(26),
    [aux_sym_line_block_repeat1] = STATE(27),
    [aux_sym__footnote_block_repeat1] = STATE(28),
    [aux_sym__citation_block_repeat1] = STATE(29),
    [aux_sym__hyperlink_target_block_repeat1] = STATE(30),
    [aux_sym__anoynymous_hyperlink_target_block_repeat1] = STATE(31),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym__char_bullet] = ACTIONS(7),
    [sym__numeric_bullet] = ACTIONS(9),
    [anon_sym_COLON] = ACTIONS(11),
    [aux_sym_option_list_item_token1] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(15),
    [sym__markup_start] = ACTIONS(17),
    [anon_sym___] = ACTIONS(19),
    [aux_sym__line_token1] = ACTIONS(21),
    [sym__eol] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(23),
  },
  [2] = {
    [sym__body_elements] = STATE(2),
    [sym_paragraph] = STATE(135),
    [sym__lists] = STATE(135),
    [sym_bullet_list] = STATE(135),
    [sym__bullet_list_item] = STATE(134),
    [sym_enumerated_list] = STATE(135),
    [sym__enumerated_list_item] = STATE(133),
    [sym_field_list] = STATE(135),
    [sym_field] = STATE(119),
    [sym_option_list] = STATE(135),
    [sym_option_list_item] = STATE(111),
    [sym_line_block] = STATE(135),
    [sym__single_line_block] = STATE(110),
    [sym__markup_blocks] = STATE(135),
    [sym__footnote_block] = STATE(135),
    [sym_footnote] = STATE(109),
    [sym__citation_block] = STATE(135),
    [sym_citation] = STATE(108),
    [sym__hyperlink_target_block] = STATE(135),
    [sym_target] = STATE(91),
    [sym__anoynymous_hyperlink_target_block] = STATE(135),
    [sym__anonymous_target] = STATE(106),
    [aux_sym__line] = STATE(36),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_paragraph_repeat1] = STATE(22),
    [aux_sym_bullet_list_repeat1] = STATE(39),
    [aux_sym_enumerated_list_repeat1] = STATE(24),
    [aux_sym_field_list_repeat1] = STATE(25),
    [aux_sym_option_list_repeat1] = STATE(26),
    [aux_sym_line_block_repeat1] = STATE(27),
    [aux_sym__footnote_block_repeat1] = STATE(28),
    [aux_sym__citation_block_repeat1] = STATE(29),
    [aux_sym__hyperlink_target_block_repeat1] = STATE(30),
    [aux_sym__anoynymous_hyperlink_target_block_repeat1] = STATE(31),
    [ts_builtin_sym_end] = ACTIONS(25),
    [sym__char_bullet] = ACTIONS(27),
    [sym__numeric_bullet] = ACTIONS(30),
    [anon_sym_COLON] = ACTIONS(33),
    [aux_sym_option_list_item_token1] = ACTIONS(36),
    [anon_sym_PIPE] = ACTIONS(39),
    [sym__markup_start] = ACTIONS(42),
    [anon_sym___] = ACTIONS(45),
    [aux_sym__line_token1] = ACTIONS(48),
    [sym__eol] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(51),
  },
  [3] = {
    [sym__body_elements] = STATE(2),
    [sym_paragraph] = STATE(135),
    [sym__lists] = STATE(135),
    [sym_bullet_list] = STATE(135),
    [sym__bullet_list_item] = STATE(134),
    [sym_enumerated_list] = STATE(135),
    [sym__enumerated_list_item] = STATE(133),
    [sym_field_list] = STATE(135),
    [sym_field] = STATE(119),
    [sym_option_list] = STATE(135),
    [sym_option_list_item] = STATE(111),
    [sym_line_block] = STATE(135),
    [sym__single_line_block] = STATE(110),
    [sym__markup_blocks] = STATE(135),
    [sym__footnote_block] = STATE(135),
    [sym_footnote] = STATE(109),
    [sym__citation_block] = STATE(135),
    [sym_citation] = STATE(108),
    [sym__hyperlink_target_block] = STATE(135),
    [sym_target] = STATE(91),
    [sym__anoynymous_hyperlink_target_block] = STATE(135),
    [sym__anonymous_target] = STATE(106),
    [aux_sym__line] = STATE(36),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_paragraph_repeat1] = STATE(22),
    [aux_sym_bullet_list_repeat1] = STATE(39),
    [aux_sym_enumerated_list_repeat1] = STATE(24),
    [aux_sym_field_list_repeat1] = STATE(25),
    [aux_sym_option_list_repeat1] = STATE(26),
    [aux_sym_line_block_repeat1] = STATE(27),
    [aux_sym__footnote_block_repeat1] = STATE(28),
    [aux_sym__citation_block_repeat1] = STATE(29),
    [aux_sym__hyperlink_target_block_repeat1] = STATE(30),
    [aux_sym__anoynymous_hyperlink_target_block_repeat1] = STATE(31),
    [ts_builtin_sym_end] = ACTIONS(54),
    [sym__char_bullet] = ACTIONS(7),
    [sym__numeric_bullet] = ACTIONS(9),
    [anon_sym_COLON] = ACTIONS(11),
    [aux_sym_option_list_item_token1] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(15),
    [sym__markup_start] = ACTIONS(17),
    [anon_sym___] = ACTIONS(19),
    [aux_sym__line_token1] = ACTIONS(21),
    [sym__eol] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(56),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(60), 1,
      aux_sym__line_token1,
    ACTIONS(58), 9,
      sym__blank_line,
      ts_builtin_sym_end,
      sym__char_bullet,
      sym__numeric_bullet,
      anon_sym_COLON,
      aux_sym_option_list_item_token1,
      anon_sym_PIPE,
      sym__markup_start,
      anon_sym___,
  [18] = 5,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(66), 1,
      sym__citation_label,
    STATE(114), 1,
      sym__label,
    ACTIONS(62), 2,
      aux_sym__label_token1,
      anon_sym_POUND,
    ACTIONS(64), 2,
      aux_sym__label_token2,
      anon_sym_STAR,
  [36] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(70), 1,
      anon_sym_POUND,
    STATE(104), 1,
      sym__label,
    ACTIONS(68), 3,
      aux_sym__label_token1,
      aux_sym__label_token2,
      anon_sym_STAR,
  [51] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(62), 1,
      anon_sym_POUND,
    STATE(114), 1,
      sym__label,
    ACTIONS(64), 3,
      aux_sym__label_token1,
      aux_sym__label_token2,
      anon_sym_STAR,
  [66] = 2,
    ACTIONS(74), 2,
      sym__eol,
      sym__blank_line,
    ACTIONS(72), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [77] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(76), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [87] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(78), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [97] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(80), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [107] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(82), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [117] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(84), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [127] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(86), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [137] = 2,
    ACTIONS(74), 1,
      sym__eol,
    ACTIONS(88), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [147] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(90), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [157] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(92), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [167] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(94), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [177] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(96), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [187] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(98), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [197] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(100), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [207] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(102), 1,
      aux_sym__line_token1,
    STATE(54), 1,
      aux_sym__line,
    STATE(55), 1,
      aux_sym_paragraph_repeat1,
  [220] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(104), 1,
      aux_sym__line_token1,
    STATE(37), 1,
      aux_sym__line,
    STATE(101), 1,
      sym__field_body,
  [233] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(9), 1,
      sym__numeric_bullet,
    STATE(48), 1,
      aux_sym_enumerated_list_repeat1,
    STATE(131), 1,
      sym__enumerated_list_item,
  [246] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(11), 1,
      anon_sym_COLON,
    STATE(50), 1,
      aux_sym_field_list_repeat1,
    STATE(130), 1,
      sym_field,
  [259] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(13), 1,
      aux_sym_option_list_item_token1,
    STATE(56), 1,
      aux_sym_option_list_repeat1,
    STATE(129), 1,
      sym_option_list_item,
  [272] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(15), 1,
      anon_sym_PIPE,
    STATE(49), 1,
      aux_sym_line_block_repeat1,
    STATE(127), 1,
      sym__single_line_block,
  [285] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(106), 1,
      sym__markup_start,
    STATE(51), 1,
      aux_sym__footnote_block_repeat1,
    STATE(125), 1,
      sym_footnote,
  [298] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(108), 1,
      sym__markup_start,
    STATE(43), 1,
      aux_sym__citation_block_repeat1,
    STATE(123), 1,
      sym_citation,
  [311] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(110), 1,
      sym__markup_start,
    STATE(47), 1,
      aux_sym__hyperlink_target_block_repeat1,
    STATE(100), 1,
      sym_target,
  [324] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(19), 1,
      anon_sym___,
    STATE(46), 1,
      aux_sym__anoynymous_hyperlink_target_block_repeat1,
    STATE(90), 1,
      sym__anonymous_target,
  [337] = 3,
    ACTIONS(112), 1,
      aux_sym__line_token1,
    STATE(52), 1,
      aux_sym__line,
    ACTIONS(114), 2,
      sym__eol,
      sym__blank_line,
  [348] = 3,
    ACTIONS(112), 1,
      aux_sym__line_token1,
    STATE(52), 1,
      aux_sym__line,
    ACTIONS(116), 2,
      sym__eol,
      sym__blank_line,
  [359] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(118), 1,
      aux_sym__line_token1,
    STATE(73), 1,
      aux_sym__line,
    STATE(142), 1,
      sym__field_body,
  [372] = 3,
    ACTIONS(112), 1,
      aux_sym__line_token1,
    STATE(52), 1,
      aux_sym__line,
    ACTIONS(120), 2,
      sym__eol,
      sym__blank_line,
  [383] = 4,
    ACTIONS(112), 1,
      aux_sym__line_token1,
    ACTIONS(122), 1,
      sym__eol,
    ACTIONS(124), 1,
      sym__blank_line,
    STATE(52), 1,
      aux_sym__line,
  [396] = 3,
    ACTIONS(112), 1,
      aux_sym__line_token1,
    STATE(52), 1,
      aux_sym__line,
    ACTIONS(126), 2,
      sym__eol,
      sym__blank_line,
  [407] = 3,
    ACTIONS(112), 1,
      aux_sym__line_token1,
    STATE(52), 1,
      aux_sym__line,
    ACTIONS(128), 2,
      sym__eol,
      sym__blank_line,
  [418] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(7), 1,
      sym__char_bullet,
    STATE(57), 1,
      aux_sym_bullet_list_repeat1,
    STATE(132), 1,
      sym__bullet_list_item,
  [431] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    ACTIONS(132), 1,
      anon_sym__,
    ACTIONS(134), 1,
      anon_sym___,
  [444] = 3,
    ACTIONS(112), 1,
      aux_sym__line_token1,
    STATE(52), 1,
      aux_sym__line,
    ACTIONS(136), 2,
      sym__eol,
      sym__blank_line,
  [455] = 3,
    ACTIONS(112), 1,
      aux_sym__line_token1,
    STATE(52), 1,
      aux_sym__line,
    ACTIONS(138), 2,
      sym__eol,
      sym__blank_line,
  [466] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(140), 1,
      sym__markup_start,
    STATE(43), 1,
      aux_sym__citation_block_repeat1,
    STATE(150), 1,
      sym_citation,
  [479] = 3,
    ACTIONS(112), 1,
      aux_sym__line_token1,
    STATE(52), 1,
      aux_sym__line,
    ACTIONS(143), 2,
      sym__eol,
      sym__blank_line,
  [490] = 3,
    ACTIONS(112), 1,
      aux_sym__line_token1,
    STATE(52), 1,
      aux_sym__line,
    ACTIONS(145), 2,
      sym__eol,
      sym__blank_line,
  [501] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(147), 1,
      anon_sym___,
    STATE(46), 1,
      aux_sym__anoynymous_hyperlink_target_block_repeat1,
    STATE(148), 1,
      sym__anonymous_target,
  [514] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(150), 1,
      sym__markup_start,
    STATE(47), 1,
      aux_sym__hyperlink_target_block_repeat1,
    STATE(149), 1,
      sym_target,
  [527] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(153), 1,
      sym__numeric_bullet,
    STATE(48), 1,
      aux_sym_enumerated_list_repeat1,
    STATE(144), 1,
      sym__enumerated_list_item,
  [540] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(156), 1,
      anon_sym_PIPE,
    STATE(49), 1,
      aux_sym_line_block_repeat1,
    STATE(147), 1,
      sym__single_line_block,
  [553] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(159), 1,
      anon_sym_COLON,
    STATE(50), 1,
      aux_sym_field_list_repeat1,
    STATE(145), 1,
      sym_field,
  [566] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(162), 1,
      sym__markup_start,
    STATE(51), 1,
      aux_sym__footnote_block_repeat1,
    STATE(141), 1,
      sym_footnote,
  [579] = 3,
    ACTIONS(165), 1,
      aux_sym__line_token1,
    STATE(52), 1,
      aux_sym__line,
    ACTIONS(168), 2,
      sym__eol,
      sym__blank_line,
  [590] = 3,
    ACTIONS(112), 1,
      aux_sym__line_token1,
    STATE(52), 1,
      aux_sym__line,
    ACTIONS(170), 2,
      sym__eol,
      sym__blank_line,
  [601] = 4,
    ACTIONS(112), 1,
      aux_sym__line_token1,
    ACTIONS(122), 1,
      sym__eol,
    ACTIONS(172), 1,
      sym__blank_line,
    STATE(52), 1,
      aux_sym__line,
  [614] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(174), 1,
      aux_sym__line_token1,
    STATE(55), 1,
      aux_sym_paragraph_repeat1,
    STATE(84), 1,
      aux_sym__line,
  [627] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(177), 1,
      aux_sym_option_list_item_token1,
    STATE(56), 1,
      aux_sym_option_list_repeat1,
    STATE(146), 1,
      sym_option_list_item,
  [640] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(180), 1,
      sym__char_bullet,
    STATE(57), 1,
      aux_sym_bullet_list_repeat1,
    STATE(143), 1,
      sym__bullet_list_item,
  [653] = 3,
    ACTIONS(114), 1,
      sym__eol,
    ACTIONS(183), 1,
      aux_sym__line_token1,
    STATE(78), 1,
      aux_sym__line,
  [663] = 3,
    ACTIONS(145), 1,
      sym__eol,
    ACTIONS(183), 1,
      aux_sym__line_token1,
    STATE(78), 1,
      aux_sym__line,
  [673] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(185), 1,
      aux_sym__line_token1,
    STATE(33), 1,
      aux_sym__line,
  [683] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(187), 1,
      anon_sym__,
    ACTIONS(189), 1,
      anon_sym___,
  [693] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(191), 1,
      aux_sym__line_token1,
    STATE(35), 1,
      aux_sym__line,
  [703] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(193), 1,
      aux_sym__line_token1,
    STATE(81), 1,
      aux_sym__line,
  [713] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(195), 1,
      aux_sym__line_token1,
    STATE(82), 1,
      aux_sym__line,
  [723] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(197), 1,
      aux_sym__line_token1,
    STATE(58), 1,
      aux_sym__line,
  [733] = 3,
    ACTIONS(170), 1,
      sym__eol,
    ACTIONS(183), 1,
      aux_sym__line_token1,
    STATE(78), 1,
      aux_sym__line,
  [743] = 3,
    ACTIONS(136), 1,
      sym__eol,
    ACTIONS(183), 1,
      aux_sym__line_token1,
    STATE(78), 1,
      aux_sym__line,
  [753] = 3,
    ACTIONS(128), 1,
      sym__eol,
    ACTIONS(183), 1,
      aux_sym__line_token1,
    STATE(78), 1,
      aux_sym__line,
  [763] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(199), 1,
      aux_sym__line_token1,
    STATE(66), 1,
      aux_sym__line,
  [773] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(201), 1,
      aux_sym__line_token1,
    STATE(59), 1,
      aux_sym__line,
  [783] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(203), 1,
      aux_sym__line_token1,
    STATE(67), 1,
      aux_sym__line,
  [793] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(132), 1,
      anon_sym__,
    ACTIONS(134), 1,
      anon_sym___,
  [803] = 3,
    ACTIONS(126), 1,
      sym__eol,
    ACTIONS(183), 1,
      aux_sym__line_token1,
    STATE(78), 1,
      aux_sym__line,
  [813] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(205), 1,
      aux_sym__line_token1,
    STATE(32), 1,
      aux_sym__line,
  [823] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(207), 1,
      aux_sym__line_token1,
    STATE(68), 1,
      aux_sym__line,
  [833] = 3,
    ACTIONS(138), 1,
      sym__eol,
    ACTIONS(183), 1,
      aux_sym__line_token1,
    STATE(78), 1,
      aux_sym__line,
  [843] = 3,
    ACTIONS(143), 1,
      sym__eol,
    ACTIONS(183), 1,
      aux_sym__line_token1,
    STATE(78), 1,
      aux_sym__line,
  [853] = 3,
    ACTIONS(168), 1,
      sym__eol,
    ACTIONS(209), 1,
      aux_sym__line_token1,
    STATE(78), 1,
      aux_sym__line,
  [863] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(212), 1,
      aux_sym__line_token1,
    STATE(76), 1,
      aux_sym__line,
  [873] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(214), 1,
      aux_sym__line_token1,
    STATE(77), 1,
      aux_sym__line,
  [883] = 3,
    ACTIONS(120), 1,
      sym__eol,
    ACTIONS(183), 1,
      aux_sym__line_token1,
    STATE(78), 1,
      aux_sym__line,
  [893] = 3,
    ACTIONS(116), 1,
      sym__eol,
    ACTIONS(183), 1,
      aux_sym__line_token1,
    STATE(78), 1,
      aux_sym__line,
  [903] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(216), 1,
      aux_sym__line_token1,
    STATE(53), 1,
      aux_sym__line,
  [913] = 3,
    ACTIONS(122), 1,
      sym__eol,
    ACTIONS(183), 1,
      aux_sym__line_token1,
    STATE(78), 1,
      aux_sym__line,
  [923] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(218), 1,
      aux_sym__line_token1,
    STATE(45), 1,
      aux_sym__line,
  [933] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(220), 1,
      aux_sym__line_token1,
    STATE(41), 1,
      aux_sym__line,
  [943] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(222), 1,
      aux_sym__line_token1,
    STATE(38), 1,
      aux_sym__line,
  [953] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(224), 1,
      aux_sym__line_token1,
    STATE(44), 1,
      aux_sym__line,
  [963] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(226), 1,
      aux_sym__line_token1,
    STATE(42), 1,
      aux_sym__line,
  [973] = 2,
    ACTIONS(228), 1,
      sym__eol,
    ACTIONS(230), 1,
      sym__blank_line,
  [980] = 2,
    ACTIONS(232), 1,
      sym__eol,
    ACTIONS(234), 1,
      sym__blank_line,
  [987] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(236), 1,
      sym__citation_label,
  [994] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(238), 1,
      anon_sym_LBRACK,
  [1001] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(240), 1,
      anon_sym_LBRACK,
  [1008] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(242), 1,
      sym__char_bullet,
  [1015] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(244), 1,
      sym__field_name,
  [1022] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(246), 1,
      anon_sym_COLON,
  [1029] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(248), 1,
      sym__reference_name,
  [1036] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(250), 1,
      sym__citation_label,
  [1043] = 2,
    ACTIONS(232), 1,
      sym__eol,
    ACTIONS(252), 1,
      sym__blank_line,
  [1050] = 1,
    ACTIONS(254), 2,
      sym__eol,
      sym__blank_line,
  [1055] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(256), 1,
      anon_sym_COLON,
  [1062] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(258), 1,
      anon_sym_COLON,
  [1069] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(260), 1,
      anon_sym_RBRACK,
  [1076] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(262), 1,
      sym__numeric_bullet,
  [1083] = 2,
    ACTIONS(228), 1,
      sym__eol,
    ACTIONS(264), 1,
      sym__blank_line,
  [1090] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(266), 1,
      anon_sym_RBRACK,
  [1097] = 2,
    ACTIONS(268), 1,
      sym__eol,
    ACTIONS(270), 1,
      sym__blank_line,
  [1104] = 2,
    ACTIONS(272), 1,
      sym__eol,
    ACTIONS(274), 1,
      sym__blank_line,
  [1111] = 2,
    ACTIONS(276), 1,
      sym__eol,
    ACTIONS(278), 1,
      sym__blank_line,
  [1118] = 2,
    ACTIONS(280), 1,
      sym__eol,
    ACTIONS(282), 1,
      sym__blank_line,
  [1125] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(284), 1,
      anon_sym_COLON,
  [1132] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(286), 1,
      anon_sym_COLON,
  [1139] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(288), 1,
      anon_sym_RBRACK,
  [1146] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(290), 1,
      anon_sym_RBRACK,
  [1153] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(292), 1,
      aux_sym_option_list_item_token1,
  [1160] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(294), 1,
      anon_sym_PIPE,
  [1167] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(296), 1,
      sym__markup_start,
  [1174] = 2,
    ACTIONS(298), 1,
      sym__eol,
    ACTIONS(300), 1,
      sym__blank_line,
  [1181] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(302), 1,
      sym__reference_name,
  [1188] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(304), 1,
      anon_sym___,
  [1195] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(306), 1,
      sym__markup_start,
  [1202] = 2,
    ACTIONS(268), 1,
      sym__eol,
    ACTIONS(308), 1,
      sym__blank_line,
  [1209] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(310), 1,
      anon_sym_LBRACK,
  [1216] = 2,
    ACTIONS(272), 1,
      sym__eol,
    ACTIONS(312), 1,
      sym__blank_line,
  [1223] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(314), 1,
      anon_sym_LBRACK,
  [1230] = 2,
    ACTIONS(276), 1,
      sym__eol,
    ACTIONS(316), 1,
      sym__blank_line,
  [1237] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(318), 1,
      sym__markup_start,
  [1244] = 2,
    ACTIONS(280), 1,
      sym__eol,
    ACTIONS(320), 1,
      sym__blank_line,
  [1251] = 2,
    ACTIONS(298), 1,
      sym__eol,
    ACTIONS(322), 1,
      sym__blank_line,
  [1258] = 2,
    ACTIONS(324), 1,
      sym__eol,
    ACTIONS(326), 1,
      sym__blank_line,
  [1265] = 2,
    ACTIONS(328), 1,
      sym__eol,
    ACTIONS(330), 1,
      sym__blank_line,
  [1272] = 2,
    ACTIONS(324), 1,
      sym__eol,
    ACTIONS(332), 1,
      sym__blank_line,
  [1279] = 2,
    ACTIONS(328), 1,
      sym__eol,
    ACTIONS(334), 1,
      sym__blank_line,
  [1286] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(336), 1,
      sym__blank_line,
  [1293] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(338), 1,
      ts_builtin_sym_end,
  [1300] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(340), 1,
      aux_sym__line_token1,
  [1307] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(342), 1,
      sym__field_name,
  [1314] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(344), 1,
      anon_sym_COLON,
  [1321] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(346), 1,
      anon_sym_COLON,
  [1328] = 1,
    ACTIONS(272), 1,
      sym__eol,
  [1332] = 1,
    ACTIONS(254), 1,
      sym__eol,
  [1336] = 1,
    ACTIONS(328), 1,
      sym__eol,
  [1340] = 1,
    ACTIONS(324), 1,
      sym__eol,
  [1344] = 1,
    ACTIONS(298), 1,
      sym__eol,
  [1348] = 1,
    ACTIONS(280), 1,
      sym__eol,
  [1352] = 1,
    ACTIONS(276), 1,
      sym__eol,
  [1356] = 1,
    ACTIONS(228), 1,
      sym__eol,
  [1360] = 1,
    ACTIONS(232), 1,
      sym__eol,
  [1364] = 1,
    ACTIONS(268), 1,
      sym__eol,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 18,
  [SMALL_STATE(6)] = 36,
  [SMALL_STATE(7)] = 51,
  [SMALL_STATE(8)] = 66,
  [SMALL_STATE(9)] = 77,
  [SMALL_STATE(10)] = 87,
  [SMALL_STATE(11)] = 97,
  [SMALL_STATE(12)] = 107,
  [SMALL_STATE(13)] = 117,
  [SMALL_STATE(14)] = 127,
  [SMALL_STATE(15)] = 137,
  [SMALL_STATE(16)] = 147,
  [SMALL_STATE(17)] = 157,
  [SMALL_STATE(18)] = 167,
  [SMALL_STATE(19)] = 177,
  [SMALL_STATE(20)] = 187,
  [SMALL_STATE(21)] = 197,
  [SMALL_STATE(22)] = 207,
  [SMALL_STATE(23)] = 220,
  [SMALL_STATE(24)] = 233,
  [SMALL_STATE(25)] = 246,
  [SMALL_STATE(26)] = 259,
  [SMALL_STATE(27)] = 272,
  [SMALL_STATE(28)] = 285,
  [SMALL_STATE(29)] = 298,
  [SMALL_STATE(30)] = 311,
  [SMALL_STATE(31)] = 324,
  [SMALL_STATE(32)] = 337,
  [SMALL_STATE(33)] = 348,
  [SMALL_STATE(34)] = 359,
  [SMALL_STATE(35)] = 372,
  [SMALL_STATE(36)] = 383,
  [SMALL_STATE(37)] = 396,
  [SMALL_STATE(38)] = 407,
  [SMALL_STATE(39)] = 418,
  [SMALL_STATE(40)] = 431,
  [SMALL_STATE(41)] = 444,
  [SMALL_STATE(42)] = 455,
  [SMALL_STATE(43)] = 466,
  [SMALL_STATE(44)] = 479,
  [SMALL_STATE(45)] = 490,
  [SMALL_STATE(46)] = 501,
  [SMALL_STATE(47)] = 514,
  [SMALL_STATE(48)] = 527,
  [SMALL_STATE(49)] = 540,
  [SMALL_STATE(50)] = 553,
  [SMALL_STATE(51)] = 566,
  [SMALL_STATE(52)] = 579,
  [SMALL_STATE(53)] = 590,
  [SMALL_STATE(54)] = 601,
  [SMALL_STATE(55)] = 614,
  [SMALL_STATE(56)] = 627,
  [SMALL_STATE(57)] = 640,
  [SMALL_STATE(58)] = 653,
  [SMALL_STATE(59)] = 663,
  [SMALL_STATE(60)] = 673,
  [SMALL_STATE(61)] = 683,
  [SMALL_STATE(62)] = 693,
  [SMALL_STATE(63)] = 703,
  [SMALL_STATE(64)] = 713,
  [SMALL_STATE(65)] = 723,
  [SMALL_STATE(66)] = 733,
  [SMALL_STATE(67)] = 743,
  [SMALL_STATE(68)] = 753,
  [SMALL_STATE(69)] = 763,
  [SMALL_STATE(70)] = 773,
  [SMALL_STATE(71)] = 783,
  [SMALL_STATE(72)] = 793,
  [SMALL_STATE(73)] = 803,
  [SMALL_STATE(74)] = 813,
  [SMALL_STATE(75)] = 823,
  [SMALL_STATE(76)] = 833,
  [SMALL_STATE(77)] = 843,
  [SMALL_STATE(78)] = 853,
  [SMALL_STATE(79)] = 863,
  [SMALL_STATE(80)] = 873,
  [SMALL_STATE(81)] = 883,
  [SMALL_STATE(82)] = 893,
  [SMALL_STATE(83)] = 903,
  [SMALL_STATE(84)] = 913,
  [SMALL_STATE(85)] = 923,
  [SMALL_STATE(86)] = 933,
  [SMALL_STATE(87)] = 943,
  [SMALL_STATE(88)] = 953,
  [SMALL_STATE(89)] = 963,
  [SMALL_STATE(90)] = 973,
  [SMALL_STATE(91)] = 980,
  [SMALL_STATE(92)] = 987,
  [SMALL_STATE(93)] = 994,
  [SMALL_STATE(94)] = 1001,
  [SMALL_STATE(95)] = 1008,
  [SMALL_STATE(96)] = 1015,
  [SMALL_STATE(97)] = 1022,
  [SMALL_STATE(98)] = 1029,
  [SMALL_STATE(99)] = 1036,
  [SMALL_STATE(100)] = 1043,
  [SMALL_STATE(101)] = 1050,
  [SMALL_STATE(102)] = 1055,
  [SMALL_STATE(103)] = 1062,
  [SMALL_STATE(104)] = 1069,
  [SMALL_STATE(105)] = 1076,
  [SMALL_STATE(106)] = 1083,
  [SMALL_STATE(107)] = 1090,
  [SMALL_STATE(108)] = 1097,
  [SMALL_STATE(109)] = 1104,
  [SMALL_STATE(110)] = 1111,
  [SMALL_STATE(111)] = 1118,
  [SMALL_STATE(112)] = 1125,
  [SMALL_STATE(113)] = 1132,
  [SMALL_STATE(114)] = 1139,
  [SMALL_STATE(115)] = 1146,
  [SMALL_STATE(116)] = 1153,
  [SMALL_STATE(117)] = 1160,
  [SMALL_STATE(118)] = 1167,
  [SMALL_STATE(119)] = 1174,
  [SMALL_STATE(120)] = 1181,
  [SMALL_STATE(121)] = 1188,
  [SMALL_STATE(122)] = 1195,
  [SMALL_STATE(123)] = 1202,
  [SMALL_STATE(124)] = 1209,
  [SMALL_STATE(125)] = 1216,
  [SMALL_STATE(126)] = 1223,
  [SMALL_STATE(127)] = 1230,
  [SMALL_STATE(128)] = 1237,
  [SMALL_STATE(129)] = 1244,
  [SMALL_STATE(130)] = 1251,
  [SMALL_STATE(131)] = 1258,
  [SMALL_STATE(132)] = 1265,
  [SMALL_STATE(133)] = 1272,
  [SMALL_STATE(134)] = 1279,
  [SMALL_STATE(135)] = 1286,
  [SMALL_STATE(136)] = 1293,
  [SMALL_STATE(137)] = 1300,
  [SMALL_STATE(138)] = 1307,
  [SMALL_STATE(139)] = 1314,
  [SMALL_STATE(140)] = 1321,
  [SMALL_STATE(141)] = 1328,
  [SMALL_STATE(142)] = 1332,
  [SMALL_STATE(143)] = 1336,
  [SMALL_STATE(144)] = 1340,
  [SMALL_STATE(145)] = 1344,
  [SMALL_STATE(146)] = 1348,
  [SMALL_STATE(147)] = 1352,
  [SMALL_STATE(148)] = 1356,
  [SMALL_STATE(149)] = 1360,
  [SMALL_STATE(150)] = 1364,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(74),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(60),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(138),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(62),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(8),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(40),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(10),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(36),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(2),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__body_elements, 2),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__body_elements, 2),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_block, 1),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bullet_list_item, 2),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__enumerated_list_item, 2),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_list_item, 2),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 1),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_body, 1),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 5),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_citation, 6),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__anonymous_target, 3),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__citation_block_repeat1, 2), SHIFT_REPEAT(93),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_block, 3),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footnote, 6),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__anoynymous_hyperlink_target_block_repeat1, 2), SHIFT_REPEAT(13),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hyperlink_target_block_repeat1, 2), SHIFT_REPEAT(61),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enumerated_list_repeat1, 2), SHIFT_REPEAT(64),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_block_repeat1, 2), SHIFT_REPEAT(15),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_list_repeat1, 2), SHIFT_REPEAT(96),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__footnote_block_repeat1, 2), SHIFT_REPEAT(94),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__line, 2), SHIFT_REPEAT(52),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__line, 2),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 6),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(84),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_option_list_repeat1, 2), SHIFT_REPEAT(63),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bullet_list_repeat1, 2), SHIFT_REPEAT(65),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__line, 2), SHIFT_REPEAT(78),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__anoynymous_hyperlink_target_block, 2),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hyperlink_target_block, 1),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bullet_list_repeat1, 2, .production_id = 1),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hyperlink_target_block, 2),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 5),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enumerated_list_repeat1, 2, .production_id = 1),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__anoynymous_hyperlink_target_block, 1),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__citation_block, 1),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__footnote_block, 1),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_block, 1),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_list, 1),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_list_repeat1, 2),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_option_list_repeat1, 2),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_block_repeat1, 2),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__footnote_block_repeat1, 2),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_list, 1),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__anoynymous_hyperlink_target_block_repeat1, 2),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hyperlink_target_block_repeat1, 2),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__citation_block, 2),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__footnote_block, 2),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_block, 2),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__citation_block_repeat1, 2),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_list, 2),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_list, 2),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumerated_list, 2, .production_id = 2),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bullet_list, 2, .production_id = 2),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumerated_list, 1, .production_id = 1),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bullet_list, 1, .production_id = 1),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [338] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
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
