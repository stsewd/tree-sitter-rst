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
  [6] = {.lex_state = 1, .external_lex_state = 1},
  [7] = {.lex_state = 1, .external_lex_state = 2},
  [8] = {.lex_state = 1, .external_lex_state = 1},
  [9] = {.lex_state = 1, .external_lex_state = 1},
  [10] = {.lex_state = 1, .external_lex_state = 1},
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
  [22] = {.lex_state = 20, .external_lex_state = 1},
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
  [34] = {.lex_state = 1, .external_lex_state = 2},
  [35] = {.lex_state = 20, .external_lex_state = 1},
  [36] = {.lex_state = 20, .external_lex_state = 2},
  [37] = {.lex_state = 20, .external_lex_state = 1},
  [38] = {.lex_state = 20, .external_lex_state = 1},
  [39] = {.lex_state = 23, .external_lex_state = 2},
  [40] = {.lex_state = 20, .external_lex_state = 1},
  [41] = {.lex_state = 20, .external_lex_state = 1},
  [42] = {.lex_state = 20, .external_lex_state = 1},
  [43] = {.lex_state = 20, .external_lex_state = 1},
  [44] = {.lex_state = 20, .external_lex_state = 1},
  [45] = {.lex_state = 0, .external_lex_state = 2},
  [46] = {.lex_state = 0, .external_lex_state = 2},
  [47] = {.lex_state = 0, .external_lex_state = 2},
  [48] = {.lex_state = 23, .external_lex_state = 2},
  [49] = {.lex_state = 0, .external_lex_state = 2},
  [50] = {.lex_state = 0, .external_lex_state = 2},
  [51] = {.lex_state = 0, .external_lex_state = 2},
  [52] = {.lex_state = 20, .external_lex_state = 1},
  [53] = {.lex_state = 20, .external_lex_state = 2},
  [54] = {.lex_state = 20, .external_lex_state = 1},
  [55] = {.lex_state = 20, .external_lex_state = 2},
  [56] = {.lex_state = 0, .external_lex_state = 2},
  [57] = {.lex_state = 23, .external_lex_state = 2},
  [58] = {.lex_state = 20, .external_lex_state = 2},
  [59] = {.lex_state = 20, .external_lex_state = 2},
  [60] = {.lex_state = 20, .external_lex_state = 2},
  [61] = {.lex_state = 20, .external_lex_state = 2},
  [62] = {.lex_state = 1, .external_lex_state = 2},
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
  [95] = {.lex_state = 0, .external_lex_state = 2},
  [96] = {.lex_state = 18, .external_lex_state = 2},
  [97] = {.lex_state = 0, .external_lex_state = 2},
  [98] = {.lex_state = 22, .external_lex_state = 2},
  [99] = {.lex_state = 0, .external_lex_state = 2},
  [100] = {.lex_state = 0, .external_lex_state = 2},
  [101] = {.lex_state = 0, .external_lex_state = 1},
  [102] = {.lex_state = 0, .external_lex_state = 1},
  [103] = {.lex_state = 0, .external_lex_state = 1},
  [104] = {.lex_state = 1, .external_lex_state = 2},
  [105] = {.lex_state = 22, .external_lex_state = 2},
  [106] = {.lex_state = 0, .external_lex_state = 1},
  [107] = {.lex_state = 0, .external_lex_state = 1},
  [108] = {.lex_state = 0, .external_lex_state = 1},
  [109] = {.lex_state = 0, .external_lex_state = 1},
  [110] = {.lex_state = 0, .external_lex_state = 1},
  [111] = {.lex_state = 0, .external_lex_state = 1},
  [112] = {.lex_state = 23, .external_lex_state = 2},
  [113] = {.lex_state = 0, .external_lex_state = 2},
  [114] = {.lex_state = 0, .external_lex_state = 2},
  [115] = {.lex_state = 1, .external_lex_state = 2},
  [116] = {.lex_state = 1, .external_lex_state = 2},
  [117] = {.lex_state = 0, .external_lex_state = 2},
  [118] = {.lex_state = 0, .external_lex_state = 2},
  [119] = {.lex_state = 0, .external_lex_state = 1},
  [120] = {.lex_state = 21, .external_lex_state = 2},
  [121] = {.lex_state = 0, .external_lex_state = 2},
  [122] = {.lex_state = 1, .external_lex_state = 2},
  [123] = {.lex_state = 0, .external_lex_state = 1},
  [124] = {.lex_state = 21, .external_lex_state = 2},
  [125] = {.lex_state = 0, .external_lex_state = 1},
  [126] = {.lex_state = 0, .external_lex_state = 1},
  [127] = {.lex_state = 1, .external_lex_state = 2},
  [128] = {.lex_state = 0, .external_lex_state = 2},
  [129] = {.lex_state = 0, .external_lex_state = 1},
  [130] = {.lex_state = 1, .external_lex_state = 2},
  [131] = {.lex_state = 0, .external_lex_state = 1},
  [132] = {.lex_state = 0, .external_lex_state = 1},
  [133] = {.lex_state = 0, .external_lex_state = 1},
  [134] = {.lex_state = 0, .external_lex_state = 1},
  [135] = {.lex_state = 23, .external_lex_state = 2},
  [136] = {.lex_state = 0, .external_lex_state = 2},
  [137] = {.lex_state = 20, .external_lex_state = 2},
  [138] = {.lex_state = 0, .external_lex_state = 2},
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
    [sym_document] = STATE(138),
    [sym__body_elements] = STATE(2),
    [sym_paragraph] = STATE(103),
    [sym__lists] = STATE(103),
    [sym_bullet_list] = STATE(103),
    [sym__bullet_list_item] = STATE(107),
    [sym_enumerated_list] = STATE(103),
    [sym__enumerated_list_item] = STATE(119),
    [sym_field_list] = STATE(103),
    [sym_field] = STATE(111),
    [sym_option_list] = STATE(103),
    [sym_option_list_item] = STATE(110),
    [sym_line_block] = STATE(103),
    [sym__single_line_block] = STATE(109),
    [sym__markup_blocks] = STATE(103),
    [sym__footnote_block] = STATE(103),
    [sym_footnote] = STATE(108),
    [sym__citation_block] = STATE(103),
    [sym_citation] = STATE(91),
    [sym__hyperlink_target_block] = STATE(103),
    [sym_target] = STATE(106),
    [sym__anoynymous_hyperlink_target_block] = STATE(103),
    [sym__anonymous_target] = STATE(102),
    [aux_sym__line] = STATE(37),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_paragraph_repeat1] = STATE(36),
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
    [sym__body_elements] = STATE(3),
    [sym_paragraph] = STATE(103),
    [sym__lists] = STATE(103),
    [sym_bullet_list] = STATE(103),
    [sym__bullet_list_item] = STATE(107),
    [sym_enumerated_list] = STATE(103),
    [sym__enumerated_list_item] = STATE(119),
    [sym_field_list] = STATE(103),
    [sym_field] = STATE(111),
    [sym_option_list] = STATE(103),
    [sym_option_list_item] = STATE(110),
    [sym_line_block] = STATE(103),
    [sym__single_line_block] = STATE(109),
    [sym__markup_blocks] = STATE(103),
    [sym__footnote_block] = STATE(103),
    [sym_footnote] = STATE(108),
    [sym__citation_block] = STATE(103),
    [sym_citation] = STATE(91),
    [sym__hyperlink_target_block] = STATE(103),
    [sym_target] = STATE(106),
    [sym__anoynymous_hyperlink_target_block] = STATE(103),
    [sym__anonymous_target] = STATE(102),
    [aux_sym__line] = STATE(37),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_paragraph_repeat1] = STATE(36),
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
    [sym__char_bullet] = ACTIONS(7),
    [sym__numeric_bullet] = ACTIONS(9),
    [anon_sym_COLON] = ACTIONS(11),
    [aux_sym_option_list_item_token1] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(15),
    [sym__markup_start] = ACTIONS(17),
    [anon_sym___] = ACTIONS(19),
    [aux_sym__line_token1] = ACTIONS(21),
    [sym__eol] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(27),
  },
  [3] = {
    [sym__body_elements] = STATE(3),
    [sym_paragraph] = STATE(103),
    [sym__lists] = STATE(103),
    [sym_bullet_list] = STATE(103),
    [sym__bullet_list_item] = STATE(107),
    [sym_enumerated_list] = STATE(103),
    [sym__enumerated_list_item] = STATE(119),
    [sym_field_list] = STATE(103),
    [sym_field] = STATE(111),
    [sym_option_list] = STATE(103),
    [sym_option_list_item] = STATE(110),
    [sym_line_block] = STATE(103),
    [sym__single_line_block] = STATE(109),
    [sym__markup_blocks] = STATE(103),
    [sym__footnote_block] = STATE(103),
    [sym_footnote] = STATE(108),
    [sym__citation_block] = STATE(103),
    [sym_citation] = STATE(91),
    [sym__hyperlink_target_block] = STATE(103),
    [sym_target] = STATE(106),
    [sym__anoynymous_hyperlink_target_block] = STATE(103),
    [sym__anonymous_target] = STATE(102),
    [aux_sym__line] = STATE(37),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_paragraph_repeat1] = STATE(36),
    [aux_sym_bullet_list_repeat1] = STATE(39),
    [aux_sym_enumerated_list_repeat1] = STATE(24),
    [aux_sym_field_list_repeat1] = STATE(25),
    [aux_sym_option_list_repeat1] = STATE(26),
    [aux_sym_line_block_repeat1] = STATE(27),
    [aux_sym__footnote_block_repeat1] = STATE(28),
    [aux_sym__citation_block_repeat1] = STATE(29),
    [aux_sym__hyperlink_target_block_repeat1] = STATE(30),
    [aux_sym__anoynymous_hyperlink_target_block_repeat1] = STATE(31),
    [ts_builtin_sym_end] = ACTIONS(29),
    [sym__char_bullet] = ACTIONS(31),
    [sym__numeric_bullet] = ACTIONS(34),
    [anon_sym_COLON] = ACTIONS(37),
    [aux_sym_option_list_item_token1] = ACTIONS(40),
    [anon_sym_PIPE] = ACTIONS(43),
    [sym__markup_start] = ACTIONS(46),
    [anon_sym___] = ACTIONS(49),
    [aux_sym__line_token1] = ACTIONS(52),
    [sym__eol] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(55),
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
    STATE(115), 1,
      sym__label,
    ACTIONS(62), 2,
      aux_sym__label_token1,
      anon_sym_POUND,
    ACTIONS(64), 2,
      aux_sym__label_token2,
      anon_sym_STAR,
  [36] = 2,
    ACTIONS(70), 2,
      sym__eol,
      sym__blank_line,
    ACTIONS(68), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [47] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(74), 1,
      anon_sym_POUND,
    STATE(122), 1,
      sym__label,
    ACTIONS(72), 3,
      aux_sym__label_token1,
      aux_sym__label_token2,
      anon_sym_STAR,
  [62] = 2,
    ACTIONS(78), 2,
      sym__eol,
      sym__blank_line,
    ACTIONS(76), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [73] = 2,
    ACTIONS(82), 2,
      sym__eol,
      sym__blank_line,
    ACTIONS(80), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [84] = 2,
    ACTIONS(86), 2,
      sym__eol,
      sym__blank_line,
    ACTIONS(84), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [95] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(62), 1,
      anon_sym_POUND,
    STATE(115), 1,
      sym__label,
    ACTIONS(64), 3,
      aux_sym__label_token1,
      aux_sym__label_token2,
      anon_sym_STAR,
  [110] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(88), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [120] = 2,
    ACTIONS(82), 1,
      sym__eol,
    ACTIONS(90), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [130] = 2,
    ACTIONS(86), 1,
      sym__eol,
    ACTIONS(92), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [140] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(94), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [150] = 2,
    ACTIONS(70), 1,
      sym__eol,
    ACTIONS(96), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [160] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(98), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [170] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(100), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [180] = 2,
    ACTIONS(78), 1,
      sym__eol,
    ACTIONS(102), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [190] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(104), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [200] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(106), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [210] = 3,
    ACTIONS(108), 1,
      aux_sym__line_token1,
    STATE(52), 1,
      aux_sym__line,
    ACTIONS(110), 2,
      sym__eol,
      sym__blank_line,
  [221] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(112), 1,
      aux_sym__line_token1,
    STATE(38), 1,
      aux_sym__line,
    STATE(101), 1,
      sym__field_body,
  [234] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(9), 1,
      sym__numeric_bullet,
    STATE(48), 1,
      aux_sym_enumerated_list_repeat1,
    STATE(134), 1,
      sym__enumerated_list_item,
  [247] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(11), 1,
      anon_sym_COLON,
    STATE(50), 1,
      aux_sym_field_list_repeat1,
    STATE(133), 1,
      sym_field,
  [260] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(13), 1,
      aux_sym_option_list_item_token1,
    STATE(56), 1,
      aux_sym_option_list_repeat1,
    STATE(132), 1,
      sym_option_list_item,
  [273] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(15), 1,
      anon_sym_PIPE,
    STATE(49), 1,
      aux_sym_line_block_repeat1,
    STATE(131), 1,
      sym__single_line_block,
  [286] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(114), 1,
      sym__markup_start,
    STATE(51), 1,
      aux_sym__footnote_block_repeat1,
    STATE(129), 1,
      sym_footnote,
  [299] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(116), 1,
      sym__markup_start,
    STATE(45), 1,
      aux_sym__citation_block_repeat1,
    STATE(126), 1,
      sym_citation,
  [312] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(118), 1,
      sym__markup_start,
    STATE(47), 1,
      aux_sym__hyperlink_target_block_repeat1,
    STATE(125), 1,
      sym_target,
  [325] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(19), 1,
      anon_sym___,
    STATE(46), 1,
      aux_sym__anoynymous_hyperlink_target_block_repeat1,
    STATE(123), 1,
      sym__anonymous_target,
  [338] = 3,
    ACTIONS(108), 1,
      aux_sym__line_token1,
    STATE(52), 1,
      aux_sym__line,
    ACTIONS(120), 2,
      sym__eol,
      sym__blank_line,
  [349] = 3,
    ACTIONS(108), 1,
      aux_sym__line_token1,
    STATE(52), 1,
      aux_sym__line,
    ACTIONS(122), 2,
      sym__eol,
      sym__blank_line,
  [360] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(124), 1,
      anon_sym_LBRACK,
    ACTIONS(126), 1,
      anon_sym__,
    ACTIONS(128), 1,
      anon_sym___,
  [373] = 3,
    ACTIONS(108), 1,
      aux_sym__line_token1,
    STATE(52), 1,
      aux_sym__line,
    ACTIONS(130), 2,
      sym__eol,
      sym__blank_line,
  [384] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(132), 1,
      aux_sym__line_token1,
    STATE(54), 1,
      aux_sym__line,
    STATE(55), 1,
      aux_sym_paragraph_repeat1,
  [397] = 4,
    ACTIONS(108), 1,
      aux_sym__line_token1,
    ACTIONS(134), 1,
      sym__eol,
    ACTIONS(136), 1,
      sym__blank_line,
    STATE(52), 1,
      aux_sym__line,
  [410] = 3,
    ACTIONS(108), 1,
      aux_sym__line_token1,
    STATE(52), 1,
      aux_sym__line,
    ACTIONS(138), 2,
      sym__eol,
      sym__blank_line,
  [421] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(7), 1,
      sym__char_bullet,
    STATE(57), 1,
      aux_sym_bullet_list_repeat1,
    STATE(90), 1,
      sym__bullet_list_item,
  [434] = 3,
    ACTIONS(108), 1,
      aux_sym__line_token1,
    STATE(52), 1,
      aux_sym__line,
    ACTIONS(140), 2,
      sym__eol,
      sym__blank_line,
  [445] = 3,
    ACTIONS(108), 1,
      aux_sym__line_token1,
    STATE(52), 1,
      aux_sym__line,
    ACTIONS(142), 2,
      sym__eol,
      sym__blank_line,
  [456] = 3,
    ACTIONS(108), 1,
      aux_sym__line_token1,
    STATE(52), 1,
      aux_sym__line,
    ACTIONS(144), 2,
      sym__eol,
      sym__blank_line,
  [467] = 3,
    ACTIONS(108), 1,
      aux_sym__line_token1,
    STATE(52), 1,
      aux_sym__line,
    ACTIONS(146), 2,
      sym__eol,
      sym__blank_line,
  [478] = 3,
    ACTIONS(108), 1,
      aux_sym__line_token1,
    STATE(52), 1,
      aux_sym__line,
    ACTIONS(148), 2,
      sym__eol,
      sym__blank_line,
  [489] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(150), 1,
      sym__markup_start,
    STATE(45), 1,
      aux_sym__citation_block_repeat1,
    STATE(150), 1,
      sym_citation,
  [502] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(153), 1,
      anon_sym___,
    STATE(46), 1,
      aux_sym__anoynymous_hyperlink_target_block_repeat1,
    STATE(148), 1,
      sym__anonymous_target,
  [515] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(156), 1,
      sym__markup_start,
    STATE(47), 1,
      aux_sym__hyperlink_target_block_repeat1,
    STATE(149), 1,
      sym_target,
  [528] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(159), 1,
      sym__numeric_bullet,
    STATE(48), 1,
      aux_sym_enumerated_list_repeat1,
    STATE(144), 1,
      sym__enumerated_list_item,
  [541] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(162), 1,
      anon_sym_PIPE,
    STATE(49), 1,
      aux_sym_line_block_repeat1,
    STATE(147), 1,
      sym__single_line_block,
  [554] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(165), 1,
      anon_sym_COLON,
    STATE(50), 1,
      aux_sym_field_list_repeat1,
    STATE(145), 1,
      sym_field,
  [567] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(168), 1,
      sym__markup_start,
    STATE(51), 1,
      aux_sym__footnote_block_repeat1,
    STATE(142), 1,
      sym_footnote,
  [580] = 3,
    ACTIONS(171), 1,
      aux_sym__line_token1,
    STATE(52), 1,
      aux_sym__line,
    ACTIONS(174), 2,
      sym__eol,
      sym__blank_line,
  [591] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(176), 1,
      aux_sym__line_token1,
    STATE(73), 1,
      aux_sym__line,
    STATE(141), 1,
      sym__field_body,
  [604] = 4,
    ACTIONS(108), 1,
      aux_sym__line_token1,
    ACTIONS(134), 1,
      sym__eol,
    ACTIONS(178), 1,
      sym__blank_line,
    STATE(52), 1,
      aux_sym__line,
  [617] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(180), 1,
      aux_sym__line_token1,
    STATE(55), 1,
      aux_sym_paragraph_repeat1,
    STATE(84), 1,
      aux_sym__line,
  [630] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(183), 1,
      aux_sym_option_list_item_token1,
    STATE(56), 1,
      aux_sym_option_list_repeat1,
    STATE(146), 1,
      sym_option_list_item,
  [643] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(186), 1,
      sym__char_bullet,
    STATE(57), 1,
      aux_sym_bullet_list_repeat1,
    STATE(143), 1,
      sym__bullet_list_item,
  [656] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(189), 1,
      aux_sym__line_token1,
    STATE(44), 1,
      aux_sym__line,
  [666] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(191), 1,
      aux_sym__line_token1,
    STATE(66), 1,
      aux_sym__line,
  [676] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(193), 1,
      aux_sym__line_token1,
    STATE(33), 1,
      aux_sym__line,
  [686] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(195), 1,
      aux_sym__line_token1,
    STATE(35), 1,
      aux_sym__line,
  [696] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(197), 1,
      anon_sym__,
    ACTIONS(199), 1,
      anon_sym___,
  [706] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(201), 1,
      aux_sym__line_token1,
    STATE(81), 1,
      aux_sym__line,
  [716] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(203), 1,
      aux_sym__line_token1,
    STATE(82), 1,
      aux_sym__line,
  [726] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(205), 1,
      aux_sym__line_token1,
    STATE(83), 1,
      aux_sym__line,
  [736] = 3,
    ACTIONS(110), 1,
      sym__eol,
    ACTIONS(207), 1,
      aux_sym__line_token1,
    STATE(78), 1,
      aux_sym__line,
  [746] = 3,
    ACTIONS(146), 1,
      sym__eol,
    ACTIONS(207), 1,
      aux_sym__line_token1,
    STATE(78), 1,
      aux_sym__line,
  [756] = 3,
    ACTIONS(142), 1,
      sym__eol,
    ACTIONS(207), 1,
      aux_sym__line_token1,
    STATE(78), 1,
      aux_sym__line,
  [766] = 3,
    ACTIONS(140), 1,
      sym__eol,
    ACTIONS(207), 1,
      aux_sym__line_token1,
    STATE(78), 1,
      aux_sym__line,
  [776] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(209), 1,
      aux_sym__line_token1,
    STATE(67), 1,
      aux_sym__line,
  [786] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(211), 1,
      aux_sym__line_token1,
    STATE(68), 1,
      aux_sym__line,
  [796] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(126), 1,
      anon_sym__,
    ACTIONS(128), 1,
      anon_sym___,
  [806] = 3,
    ACTIONS(138), 1,
      sym__eol,
    ACTIONS(207), 1,
      aux_sym__line_token1,
    STATE(78), 1,
      aux_sym__line,
  [816] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(213), 1,
      aux_sym__line_token1,
    STATE(32), 1,
      aux_sym__line,
  [826] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(215), 1,
      aux_sym__line_token1,
    STATE(69), 1,
      aux_sym__line,
  [836] = 3,
    ACTIONS(144), 1,
      sym__eol,
    ACTIONS(207), 1,
      aux_sym__line_token1,
    STATE(78), 1,
      aux_sym__line,
  [846] = 3,
    ACTIONS(148), 1,
      sym__eol,
    ACTIONS(207), 1,
      aux_sym__line_token1,
    STATE(78), 1,
      aux_sym__line,
  [856] = 3,
    ACTIONS(174), 1,
      sym__eol,
    ACTIONS(217), 1,
      aux_sym__line_token1,
    STATE(78), 1,
      aux_sym__line,
  [866] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(220), 1,
      aux_sym__line_token1,
    STATE(76), 1,
      aux_sym__line,
  [876] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(222), 1,
      aux_sym__line_token1,
    STATE(77), 1,
      aux_sym__line,
  [886] = 3,
    ACTIONS(130), 1,
      sym__eol,
    ACTIONS(207), 1,
      aux_sym__line_token1,
    STATE(78), 1,
      aux_sym__line,
  [896] = 3,
    ACTIONS(122), 1,
      sym__eol,
    ACTIONS(207), 1,
      aux_sym__line_token1,
    STATE(78), 1,
      aux_sym__line,
  [906] = 3,
    ACTIONS(120), 1,
      sym__eol,
    ACTIONS(207), 1,
      aux_sym__line_token1,
    STATE(78), 1,
      aux_sym__line,
  [916] = 3,
    ACTIONS(134), 1,
      sym__eol,
    ACTIONS(207), 1,
      aux_sym__line_token1,
    STATE(78), 1,
      aux_sym__line,
  [926] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(224), 1,
      aux_sym__line_token1,
    STATE(22), 1,
      aux_sym__line,
  [936] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(226), 1,
      aux_sym__line_token1,
    STATE(43), 1,
      aux_sym__line,
  [946] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(228), 1,
      aux_sym__line_token1,
    STATE(41), 1,
      aux_sym__line,
  [956] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(230), 1,
      aux_sym__line_token1,
    STATE(40), 1,
      aux_sym__line,
  [966] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(232), 1,
      aux_sym__line_token1,
    STATE(42), 1,
      aux_sym__line,
  [976] = 2,
    ACTIONS(234), 1,
      sym__eol,
    ACTIONS(236), 1,
      sym__blank_line,
  [983] = 2,
    ACTIONS(238), 1,
      sym__eol,
    ACTIONS(240), 1,
      sym__blank_line,
  [990] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(242), 1,
      sym__citation_label,
  [997] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(244), 1,
      anon_sym_LBRACK,
  [1004] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(246), 1,
      anon_sym_LBRACK,
  [1011] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(248), 1,
      sym__markup_start,
  [1018] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(250), 1,
      sym__citation_label,
  [1025] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(252), 1,
      anon_sym_COLON,
  [1032] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(254), 1,
      sym__reference_name,
  [1039] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(256), 1,
      anon_sym_COLON,
  [1046] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(258), 1,
      sym__markup_start,
  [1053] = 1,
    ACTIONS(260), 2,
      sym__eol,
      sym__blank_line,
  [1058] = 2,
    ACTIONS(262), 1,
      sym__eol,
    ACTIONS(264), 1,
      sym__blank_line,
  [1065] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(266), 1,
      sym__blank_line,
  [1072] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(268), 1,
      anon_sym_RBRACK,
  [1079] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(270), 1,
      sym__reference_name,
  [1086] = 2,
    ACTIONS(272), 1,
      sym__eol,
    ACTIONS(274), 1,
      sym__blank_line,
  [1093] = 2,
    ACTIONS(234), 1,
      sym__eol,
    ACTIONS(276), 1,
      sym__blank_line,
  [1100] = 2,
    ACTIONS(278), 1,
      sym__eol,
    ACTIONS(280), 1,
      sym__blank_line,
  [1107] = 2,
    ACTIONS(282), 1,
      sym__eol,
    ACTIONS(284), 1,
      sym__blank_line,
  [1114] = 2,
    ACTIONS(286), 1,
      sym__eol,
    ACTIONS(288), 1,
      sym__blank_line,
  [1121] = 2,
    ACTIONS(290), 1,
      sym__eol,
    ACTIONS(292), 1,
      sym__blank_line,
  [1128] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(294), 1,
      sym__numeric_bullet,
  [1135] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(296), 1,
      anon_sym_COLON,
  [1142] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(298), 1,
      anon_sym_COLON,
  [1149] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(300), 1,
      anon_sym_RBRACK,
  [1156] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(302), 1,
      anon_sym_RBRACK,
  [1163] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(304), 1,
      aux_sym_option_list_item_token1,
  [1170] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(306), 1,
      anon_sym_PIPE,
  [1177] = 2,
    ACTIONS(308), 1,
      sym__eol,
    ACTIONS(310), 1,
      sym__blank_line,
  [1184] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(312), 1,
      sym__field_name,
  [1191] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(314), 1,
      anon_sym_COLON,
  [1198] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(316), 1,
      anon_sym_RBRACK,
  [1205] = 2,
    ACTIONS(262), 1,
      sym__eol,
    ACTIONS(318), 1,
      sym__blank_line,
  [1212] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(320), 1,
      sym__field_name,
  [1219] = 2,
    ACTIONS(272), 1,
      sym__eol,
    ACTIONS(322), 1,
      sym__blank_line,
  [1226] = 2,
    ACTIONS(238), 1,
      sym__eol,
    ACTIONS(324), 1,
      sym__blank_line,
  [1233] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(326), 1,
      anon_sym_LBRACK,
  [1240] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(328), 1,
      sym__markup_start,
  [1247] = 2,
    ACTIONS(278), 1,
      sym__eol,
    ACTIONS(330), 1,
      sym__blank_line,
  [1254] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
  [1261] = 2,
    ACTIONS(282), 1,
      sym__eol,
    ACTIONS(334), 1,
      sym__blank_line,
  [1268] = 2,
    ACTIONS(286), 1,
      sym__eol,
    ACTIONS(336), 1,
      sym__blank_line,
  [1275] = 2,
    ACTIONS(290), 1,
      sym__eol,
    ACTIONS(338), 1,
      sym__blank_line,
  [1282] = 2,
    ACTIONS(308), 1,
      sym__eol,
    ACTIONS(340), 1,
      sym__blank_line,
  [1289] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(342), 1,
      sym__char_bullet,
  [1296] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(344), 1,
      anon_sym_COLON,
  [1303] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(346), 1,
      aux_sym__line_token1,
  [1310] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(348), 1,
      ts_builtin_sym_end,
  [1317] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(350), 1,
      anon_sym_COLON,
  [1324] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(352), 1,
      anon_sym___,
  [1331] = 1,
    ACTIONS(260), 1,
      sym__eol,
  [1335] = 1,
    ACTIONS(278), 1,
      sym__eol,
  [1339] = 1,
    ACTIONS(234), 1,
      sym__eol,
  [1343] = 1,
    ACTIONS(308), 1,
      sym__eol,
  [1347] = 1,
    ACTIONS(290), 1,
      sym__eol,
  [1351] = 1,
    ACTIONS(286), 1,
      sym__eol,
  [1355] = 1,
    ACTIONS(282), 1,
      sym__eol,
  [1359] = 1,
    ACTIONS(262), 1,
      sym__eol,
  [1363] = 1,
    ACTIONS(272), 1,
      sym__eol,
  [1367] = 1,
    ACTIONS(238), 1,
      sym__eol,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 18,
  [SMALL_STATE(6)] = 36,
  [SMALL_STATE(7)] = 47,
  [SMALL_STATE(8)] = 62,
  [SMALL_STATE(9)] = 73,
  [SMALL_STATE(10)] = 84,
  [SMALL_STATE(11)] = 95,
  [SMALL_STATE(12)] = 110,
  [SMALL_STATE(13)] = 120,
  [SMALL_STATE(14)] = 130,
  [SMALL_STATE(15)] = 140,
  [SMALL_STATE(16)] = 150,
  [SMALL_STATE(17)] = 160,
  [SMALL_STATE(18)] = 170,
  [SMALL_STATE(19)] = 180,
  [SMALL_STATE(20)] = 190,
  [SMALL_STATE(21)] = 200,
  [SMALL_STATE(22)] = 210,
  [SMALL_STATE(23)] = 221,
  [SMALL_STATE(24)] = 234,
  [SMALL_STATE(25)] = 247,
  [SMALL_STATE(26)] = 260,
  [SMALL_STATE(27)] = 273,
  [SMALL_STATE(28)] = 286,
  [SMALL_STATE(29)] = 299,
  [SMALL_STATE(30)] = 312,
  [SMALL_STATE(31)] = 325,
  [SMALL_STATE(32)] = 338,
  [SMALL_STATE(33)] = 349,
  [SMALL_STATE(34)] = 360,
  [SMALL_STATE(35)] = 373,
  [SMALL_STATE(36)] = 384,
  [SMALL_STATE(37)] = 397,
  [SMALL_STATE(38)] = 410,
  [SMALL_STATE(39)] = 421,
  [SMALL_STATE(40)] = 434,
  [SMALL_STATE(41)] = 445,
  [SMALL_STATE(42)] = 456,
  [SMALL_STATE(43)] = 467,
  [SMALL_STATE(44)] = 478,
  [SMALL_STATE(45)] = 489,
  [SMALL_STATE(46)] = 502,
  [SMALL_STATE(47)] = 515,
  [SMALL_STATE(48)] = 528,
  [SMALL_STATE(49)] = 541,
  [SMALL_STATE(50)] = 554,
  [SMALL_STATE(51)] = 567,
  [SMALL_STATE(52)] = 580,
  [SMALL_STATE(53)] = 591,
  [SMALL_STATE(54)] = 604,
  [SMALL_STATE(55)] = 617,
  [SMALL_STATE(56)] = 630,
  [SMALL_STATE(57)] = 643,
  [SMALL_STATE(58)] = 656,
  [SMALL_STATE(59)] = 666,
  [SMALL_STATE(60)] = 676,
  [SMALL_STATE(61)] = 686,
  [SMALL_STATE(62)] = 696,
  [SMALL_STATE(63)] = 706,
  [SMALL_STATE(64)] = 716,
  [SMALL_STATE(65)] = 726,
  [SMALL_STATE(66)] = 736,
  [SMALL_STATE(67)] = 746,
  [SMALL_STATE(68)] = 756,
  [SMALL_STATE(69)] = 766,
  [SMALL_STATE(70)] = 776,
  [SMALL_STATE(71)] = 786,
  [SMALL_STATE(72)] = 796,
  [SMALL_STATE(73)] = 806,
  [SMALL_STATE(74)] = 816,
  [SMALL_STATE(75)] = 826,
  [SMALL_STATE(76)] = 836,
  [SMALL_STATE(77)] = 846,
  [SMALL_STATE(78)] = 856,
  [SMALL_STATE(79)] = 866,
  [SMALL_STATE(80)] = 876,
  [SMALL_STATE(81)] = 886,
  [SMALL_STATE(82)] = 896,
  [SMALL_STATE(83)] = 906,
  [SMALL_STATE(84)] = 916,
  [SMALL_STATE(85)] = 926,
  [SMALL_STATE(86)] = 936,
  [SMALL_STATE(87)] = 946,
  [SMALL_STATE(88)] = 956,
  [SMALL_STATE(89)] = 966,
  [SMALL_STATE(90)] = 976,
  [SMALL_STATE(91)] = 983,
  [SMALL_STATE(92)] = 990,
  [SMALL_STATE(93)] = 997,
  [SMALL_STATE(94)] = 1004,
  [SMALL_STATE(95)] = 1011,
  [SMALL_STATE(96)] = 1018,
  [SMALL_STATE(97)] = 1025,
  [SMALL_STATE(98)] = 1032,
  [SMALL_STATE(99)] = 1039,
  [SMALL_STATE(100)] = 1046,
  [SMALL_STATE(101)] = 1053,
  [SMALL_STATE(102)] = 1058,
  [SMALL_STATE(103)] = 1065,
  [SMALL_STATE(104)] = 1072,
  [SMALL_STATE(105)] = 1079,
  [SMALL_STATE(106)] = 1086,
  [SMALL_STATE(107)] = 1093,
  [SMALL_STATE(108)] = 1100,
  [SMALL_STATE(109)] = 1107,
  [SMALL_STATE(110)] = 1114,
  [SMALL_STATE(111)] = 1121,
  [SMALL_STATE(112)] = 1128,
  [SMALL_STATE(113)] = 1135,
  [SMALL_STATE(114)] = 1142,
  [SMALL_STATE(115)] = 1149,
  [SMALL_STATE(116)] = 1156,
  [SMALL_STATE(117)] = 1163,
  [SMALL_STATE(118)] = 1170,
  [SMALL_STATE(119)] = 1177,
  [SMALL_STATE(120)] = 1184,
  [SMALL_STATE(121)] = 1191,
  [SMALL_STATE(122)] = 1198,
  [SMALL_STATE(123)] = 1205,
  [SMALL_STATE(124)] = 1212,
  [SMALL_STATE(125)] = 1219,
  [SMALL_STATE(126)] = 1226,
  [SMALL_STATE(127)] = 1233,
  [SMALL_STATE(128)] = 1240,
  [SMALL_STATE(129)] = 1247,
  [SMALL_STATE(130)] = 1254,
  [SMALL_STATE(131)] = 1261,
  [SMALL_STATE(132)] = 1268,
  [SMALL_STATE(133)] = 1275,
  [SMALL_STATE(134)] = 1282,
  [SMALL_STATE(135)] = 1289,
  [SMALL_STATE(136)] = 1296,
  [SMALL_STATE(137)] = 1303,
  [SMALL_STATE(138)] = 1310,
  [SMALL_STATE(139)] = 1317,
  [SMALL_STATE(140)] = 1324,
  [SMALL_STATE(141)] = 1331,
  [SMALL_STATE(142)] = 1335,
  [SMALL_STATE(143)] = 1339,
  [SMALL_STATE(144)] = 1343,
  [SMALL_STATE(145)] = 1347,
  [SMALL_STATE(146)] = 1351,
  [SMALL_STATE(147)] = 1355,
  [SMALL_STATE(148)] = 1359,
  [SMALL_STATE(149)] = 1363,
  [SMALL_STATE(150)] = 1367,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(74),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(60),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(124),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(61),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(9),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(34),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(10),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(37),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(3),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__body_elements, 2),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__body_elements, 2),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 3),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 4),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_block, 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__anonymous_target, 1),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 6),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bullet_list_item, 2),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__enumerated_list_item, 2),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_list_item, 2),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 1),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_body, 1),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 5),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_citation, 6),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__anonymous_target, 3),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footnote, 6),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_block, 3),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__citation_block_repeat1, 2), SHIFT_REPEAT(93),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__anoynymous_hyperlink_target_block_repeat1, 2), SHIFT_REPEAT(14),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hyperlink_target_block_repeat1, 2), SHIFT_REPEAT(62),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enumerated_list_repeat1, 2), SHIFT_REPEAT(64),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_block_repeat1, 2), SHIFT_REPEAT(13),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_list_repeat1, 2), SHIFT_REPEAT(120),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__footnote_block_repeat1, 2), SHIFT_REPEAT(94),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__line, 2), SHIFT_REPEAT(52),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__line, 2),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(84),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_option_list_repeat1, 2), SHIFT_REPEAT(63),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bullet_list_repeat1, 2), SHIFT_REPEAT(65),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__line, 2), SHIFT_REPEAT(78),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bullet_list, 2, .production_id = 2),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__citation_block, 1),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__footnote_block_repeat1, 2),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hyperlink_target_block_repeat1, 2),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 5),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__anoynymous_hyperlink_target_block, 1),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hyperlink_target_block, 1),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bullet_list, 1, .production_id = 1),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__footnote_block, 1),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_block, 1),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_list, 1),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_list, 1),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enumerated_list_repeat1, 2, .production_id = 1),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_list_repeat1, 2),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_option_list_repeat1, 2),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_block_repeat1, 2),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumerated_list, 1, .production_id = 1),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__anoynymous_hyperlink_target_block, 2),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hyperlink_target_block, 2),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__citation_block, 2),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__citation_block_repeat1, 2),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__footnote_block, 2),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_block, 2),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_list, 2),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_list, 2),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumerated_list, 2, .production_id = 2),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bullet_list_repeat1, 2, .production_id = 1),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [348] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__anoynymous_hyperlink_target_block_repeat1, 2),
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
