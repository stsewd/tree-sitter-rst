#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 151
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 64
#define ALIAS_COUNT 1
#define TOKEN_COUNT 26
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
  aux_sym__reference_name_token1 = 21,
  aux_sym__reference_name_token2 = 22,
  aux_sym__line_token1 = 23,
  sym__eol = 24,
  sym__blank_line = 25,
  sym_document = 26,
  sym__body_elements = 27,
  sym_paragraph = 28,
  sym__lists = 29,
  sym_bullet_list = 30,
  sym__bullet_list_item = 31,
  sym_enumerated_list = 32,
  sym__enumerated_list_item = 33,
  sym_field_list = 34,
  sym_field = 35,
  sym__field_body = 36,
  sym_option_list = 37,
  sym_option_list_item = 38,
  sym_line_block = 39,
  sym__single_line_block = 40,
  sym__markup_blocks = 41,
  sym__footnote_block = 42,
  sym_footnote = 43,
  sym__label = 44,
  sym__citation_block = 45,
  sym_citation = 46,
  sym__hyperlink_target_block = 47,
  sym_target = 48,
  sym__reference_name = 49,
  sym__anoynymous_hyperlink_target_block = 50,
  sym__anonymous_target = 51,
  aux_sym__line = 52,
  aux_sym_document_repeat1 = 53,
  aux_sym_paragraph_repeat1 = 54,
  aux_sym_bullet_list_repeat1 = 55,
  aux_sym_enumerated_list_repeat1 = 56,
  aux_sym_field_list_repeat1 = 57,
  aux_sym_option_list_repeat1 = 58,
  aux_sym_line_block_repeat1 = 59,
  aux_sym__footnote_block_repeat1 = 60,
  aux_sym__citation_block_repeat1 = 61,
  aux_sym__hyperlink_target_block_repeat1 = 62,
  aux_sym__anoynymous_hyperlink_target_block_repeat1 = 63,
  alias_sym_list_item = 64,
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
  [aux_sym__reference_name_token1] = "_reference_name_token1",
  [aux_sym__reference_name_token2] = "_reference_name_token2",
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
  [sym__reference_name] = "_reference_name",
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
  [aux_sym__reference_name_token1] = aux_sym__reference_name_token1,
  [aux_sym__reference_name_token2] = aux_sym__reference_name_token2,
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
  [sym__reference_name] = sym__reference_name,
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
  [aux_sym__reference_name_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__reference_name_token2] = {
    .visible = false,
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
  [sym__reference_name] = {
    .visible = false,
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
      if (eof) ADVANCE(26);
      if (lookahead == '\t') ADVANCE(31);
      if (lookahead == 11) ADVANCE(32);
      if (lookahead == '\f') ADVANCE(33);
      if (lookahead == ' ') ADVANCE(30);
      if (lookahead == '#') ADVANCE(42);
      if (lookahead == '*') ADVANCE(46);
      if (lookahead == '+') ADVANCE(67);
      if (lookahead == '-') ADVANCE(66);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == '/') ADVANCE(68);
      if (lookahead == ':') ADVANCE(29);
      if (lookahead == '[') ADVANCE(38);
      if (lookahead == ']') ADVANCE(39);
      if (lookahead == '_') ADVANCE(51);
      if (lookahead == '|') ADVANCE(36);
      if (lookahead == 8226 ||
          lookahead == 8227 ||
          lookahead == 8259) ADVANCE(65);
      if (lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'I' ||
          lookahead == 'L' ||
          lookahead == 'M' ||
          lookahead == 'V' ||
          lookahead == 'X') ADVANCE(47);
      if (lookahead == 'c' ||
          lookahead == 'd' ||
          lookahead == 'i' ||
          lookahead == 'l' ||
          lookahead == 'm' ||
          lookahead == 'v' ||
          lookahead == 'x') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(49);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(58);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(31);
      if (lookahead == 11) ADVANCE(32);
      if (lookahead == '\f') ADVANCE(33);
      if (lookahead == ' ') ADVANCE(30);
      if (lookahead == '#') ADVANCE(43);
      if (lookahead == '*') ADVANCE(45);
      if (lookahead == '[') ADVANCE(38);
      if (lookahead == ']') ADVANCE(39);
      if (lookahead == '_') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '+') ADVANCE(20);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '/') ADVANCE(20);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'I' ||
          lookahead == 'L' ||
          lookahead == 'M' ||
          lookahead == 'V' ||
          lookahead == 'X') ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == 'c' ||
          lookahead == 'd' ||
          lookahead == 'i' ||
          lookahead == 'l' ||
          lookahead == 'm' ||
          lookahead == 'v' ||
          lookahead == 'x') ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == '_') ADVANCE(8);
      if (lookahead == '`') ADVANCE(55);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 9:
      if (lookahead == '_') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(55);
      END_STATE();
    case 10:
      if (lookahead == '`') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '_') ADVANCE(56);
      END_STATE();
    case 11:
      if (lookahead == '`') ADVANCE(57);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f') ADVANCE(17);
      if (lookahead == ' ') ADVANCE(18);
      if (lookahead == ',') ADVANCE(2);
      if (lookahead == '=') ADVANCE(22);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 14:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(28);
      END_STATE();
    case 15:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 16:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(37);
      END_STATE();
    case 17:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(35);
      END_STATE();
    case 18:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead == ',') ADVANCE(2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 23:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(58);
      END_STATE();
    case 24:
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(34);
      END_STATE();
    case 25:
      if (eof) ADVANCE(26);
      if (lookahead == '#') ADVANCE(59);
      if (lookahead == '*' ||
          lookahead == 8226 ||
          lookahead == 8227 ||
          lookahead == 8259) ADVANCE(65);
      if (lookahead == '+') ADVANCE(67);
      if (lookahead == '-') ADVANCE(66);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == '/') ADVANCE(68);
      if (lookahead == ':') ADVANCE(29);
      if (lookahead == '_') ADVANCE(64);
      if (lookahead == '|') ADVANCE(36);
      if (lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'I' ||
          lookahead == 'L' ||
          lookahead == 'M' ||
          lookahead == 'V' ||
          lookahead == 'X') ADVANCE(60);
      if (lookahead == 'c' ||
          lookahead == 'd' ||
          lookahead == 'i' ||
          lookahead == 'l' ||
          lookahead == 'm' ||
          lookahead == 'v' ||
          lookahead == 'x') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(59);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(58);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym__char_bullet);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym__numeric_bullet);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_TAB);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_3);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym__field_name);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_option_list_item_token1);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym__markup_start);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '.') ADVANCE(14);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym__label_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(27);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym__citation_label);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(13);
      if (lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'I' ||
          lookahead == 'L' ||
          lookahead == 'M' ||
          lookahead == 'V' ||
          lookahead == 'X') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym__citation_label);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(13);
      if (lookahead == 'c' ||
          lookahead == 'd' ||
          lookahead == 'i' ||
          lookahead == 'l' ||
          lookahead == 'm' ||
          lookahead == 'v' ||
          lookahead == 'x') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym__citation_label);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym__citation_label);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '_') ADVANCE(52);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym___);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym__reference_name_token1);
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == '_') ADVANCE(8);
      if (lookahead == '`') ADVANCE(55);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym__reference_name_token1);
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == '`') ADVANCE(9);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym__reference_name_token1);
      if (lookahead == '_') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym__reference_name_token1);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(9);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym__reference_name_token2);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym__line_token1);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '.') ADVANCE(14);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'I' ||
          lookahead == 'L' ||
          lookahead == 'M' ||
          lookahead == 'V' ||
          lookahead == 'X') ADVANCE(5);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == 'c' ||
          lookahead == 'd' ||
          lookahead == 'i' ||
          lookahead == 'l' ||
          lookahead == 'm' ||
          lookahead == 'v' ||
          lookahead == 'x') ADVANCE(6);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '.') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '.') ADVANCE(16);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '_') ADVANCE(52);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(27);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead == '-') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 25, .external_lex_state = 1},
  [2] = {.lex_state = 25, .external_lex_state = 1},
  [3] = {.lex_state = 25, .external_lex_state = 1},
  [4] = {.lex_state = 25, .external_lex_state = 1},
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
  [22] = {.lex_state = 10, .external_lex_state = 2},
  [23] = {.lex_state = 0, .external_lex_state = 2},
  [24] = {.lex_state = 10, .external_lex_state = 2},
  [25] = {.lex_state = 23, .external_lex_state = 1},
  [26] = {.lex_state = 23, .external_lex_state = 2},
  [27] = {.lex_state = 25, .external_lex_state = 2},
  [28] = {.lex_state = 25, .external_lex_state = 2},
  [29] = {.lex_state = 0, .external_lex_state = 2},
  [30] = {.lex_state = 0, .external_lex_state = 2},
  [31] = {.lex_state = 0, .external_lex_state = 2},
  [32] = {.lex_state = 0, .external_lex_state = 2},
  [33] = {.lex_state = 0, .external_lex_state = 2},
  [34] = {.lex_state = 0, .external_lex_state = 2},
  [35] = {.lex_state = 0, .external_lex_state = 2},
  [36] = {.lex_state = 23, .external_lex_state = 1},
  [37] = {.lex_state = 23, .external_lex_state = 1},
  [38] = {.lex_state = 1, .external_lex_state = 2},
  [39] = {.lex_state = 23, .external_lex_state = 1},
  [40] = {.lex_state = 23, .external_lex_state = 2},
  [41] = {.lex_state = 23, .external_lex_state = 1},
  [42] = {.lex_state = 23, .external_lex_state = 1},
  [43] = {.lex_state = 23, .external_lex_state = 1},
  [44] = {.lex_state = 23, .external_lex_state = 1},
  [45] = {.lex_state = 23, .external_lex_state = 1},
  [46] = {.lex_state = 23, .external_lex_state = 2},
  [47] = {.lex_state = 0, .external_lex_state = 2},
  [48] = {.lex_state = 23, .external_lex_state = 1},
  [49] = {.lex_state = 0, .external_lex_state = 2},
  [50] = {.lex_state = 0, .external_lex_state = 2},
  [51] = {.lex_state = 0, .external_lex_state = 2},
  [52] = {.lex_state = 0, .external_lex_state = 2},
  [53] = {.lex_state = 23, .external_lex_state = 1},
  [54] = {.lex_state = 23, .external_lex_state = 1},
  [55] = {.lex_state = 23, .external_lex_state = 2},
  [56] = {.lex_state = 23, .external_lex_state = 1},
  [57] = {.lex_state = 25, .external_lex_state = 2},
  [58] = {.lex_state = 0, .external_lex_state = 2},
  [59] = {.lex_state = 25, .external_lex_state = 2},
  [60] = {.lex_state = 23, .external_lex_state = 2},
  [61] = {.lex_state = 23, .external_lex_state = 2},
  [62] = {.lex_state = 23, .external_lex_state = 2},
  [63] = {.lex_state = 23, .external_lex_state = 2},
  [64] = {.lex_state = 23, .external_lex_state = 2},
  [65] = {.lex_state = 1, .external_lex_state = 2},
  [66] = {.lex_state = 23, .external_lex_state = 2},
  [67] = {.lex_state = 23, .external_lex_state = 2},
  [68] = {.lex_state = 23, .external_lex_state = 2},
  [69] = {.lex_state = 23, .external_lex_state = 2},
  [70] = {.lex_state = 23, .external_lex_state = 2},
  [71] = {.lex_state = 23, .external_lex_state = 2},
  [72] = {.lex_state = 23, .external_lex_state = 2},
  [73] = {.lex_state = 23, .external_lex_state = 2},
  [74] = {.lex_state = 23, .external_lex_state = 2},
  [75] = {.lex_state = 23, .external_lex_state = 2},
  [76] = {.lex_state = 1, .external_lex_state = 2},
  [77] = {.lex_state = 23, .external_lex_state = 2},
  [78] = {.lex_state = 23, .external_lex_state = 2},
  [79] = {.lex_state = 23, .external_lex_state = 2},
  [80] = {.lex_state = 23, .external_lex_state = 2},
  [81] = {.lex_state = 23, .external_lex_state = 2},
  [82] = {.lex_state = 23, .external_lex_state = 2},
  [83] = {.lex_state = 23, .external_lex_state = 2},
  [84] = {.lex_state = 23, .external_lex_state = 2},
  [85] = {.lex_state = 23, .external_lex_state = 2},
  [86] = {.lex_state = 23, .external_lex_state = 2},
  [87] = {.lex_state = 23, .external_lex_state = 2},
  [88] = {.lex_state = 23, .external_lex_state = 2},
  [89] = {.lex_state = 23, .external_lex_state = 2},
  [90] = {.lex_state = 23, .external_lex_state = 2},
  [91] = {.lex_state = 23, .external_lex_state = 2},
  [92] = {.lex_state = 0, .external_lex_state = 1},
  [93] = {.lex_state = 0, .external_lex_state = 1},
  [94] = {.lex_state = 1, .external_lex_state = 2},
  [95] = {.lex_state = 1, .external_lex_state = 2},
  [96] = {.lex_state = 0, .external_lex_state = 1},
  [97] = {.lex_state = 0, .external_lex_state = 1},
  [98] = {.lex_state = 21, .external_lex_state = 2},
  [99] = {.lex_state = 0, .external_lex_state = 1},
  [100] = {.lex_state = 24, .external_lex_state = 2},
  [101] = {.lex_state = 0, .external_lex_state = 1},
  [102] = {.lex_state = 0, .external_lex_state = 2},
  [103] = {.lex_state = 0, .external_lex_state = 1},
  [104] = {.lex_state = 21, .external_lex_state = 2},
  [105] = {.lex_state = 0, .external_lex_state = 2},
  [106] = {.lex_state = 0, .external_lex_state = 2},
  [107] = {.lex_state = 25, .external_lex_state = 2},
  [108] = {.lex_state = 25, .external_lex_state = 2},
  [109] = {.lex_state = 1, .external_lex_state = 2},
  [110] = {.lex_state = 0, .external_lex_state = 1},
  [111] = {.lex_state = 0, .external_lex_state = 1},
  [112] = {.lex_state = 1, .external_lex_state = 2},
  [113] = {.lex_state = 0, .external_lex_state = 2},
  [114] = {.lex_state = 0, .external_lex_state = 1},
  [115] = {.lex_state = 0, .external_lex_state = 2},
  [116] = {.lex_state = 1, .external_lex_state = 2},
  [117] = {.lex_state = 1, .external_lex_state = 2},
  [118] = {.lex_state = 0, .external_lex_state = 1},
  [119] = {.lex_state = 0, .external_lex_state = 2},
  [120] = {.lex_state = 0, .external_lex_state = 1},
  [121] = {.lex_state = 0, .external_lex_state = 2},
  [122] = {.lex_state = 0, .external_lex_state = 2},
  [123] = {.lex_state = 0, .external_lex_state = 1},
  [124] = {.lex_state = 24, .external_lex_state = 2},
  [125] = {.lex_state = 0, .external_lex_state = 1},
  [126] = {.lex_state = 1, .external_lex_state = 2},
  [127] = {.lex_state = 0, .external_lex_state = 2},
  [128] = {.lex_state = 0, .external_lex_state = 1},
  [129] = {.lex_state = 1, .external_lex_state = 2},
  [130] = {.lex_state = 0, .external_lex_state = 1},
  [131] = {.lex_state = 0, .external_lex_state = 1},
  [132] = {.lex_state = 0, .external_lex_state = 1},
  [133] = {.lex_state = 0, .external_lex_state = 1},
  [134] = {.lex_state = 0, .external_lex_state = 1},
  [135] = {.lex_state = 23, .external_lex_state = 2},
  [136] = {.lex_state = 0, .external_lex_state = 2},
  [137] = {.lex_state = 0, .external_lex_state = 2},
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
    [sym_document] = STATE(113),
    [sym__body_elements] = STATE(2),
    [sym_paragraph] = STATE(93),
    [sym__lists] = STATE(93),
    [sym_bullet_list] = STATE(93),
    [sym__bullet_list_item] = STATE(111),
    [sym_enumerated_list] = STATE(93),
    [sym__enumerated_list_item] = STATE(110),
    [sym_field_list] = STATE(93),
    [sym_field] = STATE(99),
    [sym_option_list] = STATE(93),
    [sym_option_list_item] = STATE(120),
    [sym_line_block] = STATE(93),
    [sym__single_line_block] = STATE(97),
    [sym__markup_blocks] = STATE(93),
    [sym__footnote_block] = STATE(93),
    [sym_footnote] = STATE(103),
    [sym__citation_block] = STATE(93),
    [sym_citation] = STATE(114),
    [sym__hyperlink_target_block] = STATE(93),
    [sym_target] = STATE(92),
    [sym__anoynymous_hyperlink_target_block] = STATE(93),
    [sym__anonymous_target] = STATE(96),
    [aux_sym__line] = STATE(25),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_paragraph_repeat1] = STATE(26),
    [aux_sym_bullet_list_repeat1] = STATE(27),
    [aux_sym_enumerated_list_repeat1] = STATE(28),
    [aux_sym_field_list_repeat1] = STATE(29),
    [aux_sym_option_list_repeat1] = STATE(30),
    [aux_sym_line_block_repeat1] = STATE(31),
    [aux_sym__footnote_block_repeat1] = STATE(32),
    [aux_sym__citation_block_repeat1] = STATE(33),
    [aux_sym__hyperlink_target_block_repeat1] = STATE(34),
    [aux_sym__anoynymous_hyperlink_target_block_repeat1] = STATE(35),
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
    [sym_paragraph] = STATE(93),
    [sym__lists] = STATE(93),
    [sym_bullet_list] = STATE(93),
    [sym__bullet_list_item] = STATE(111),
    [sym_enumerated_list] = STATE(93),
    [sym__enumerated_list_item] = STATE(110),
    [sym_field_list] = STATE(93),
    [sym_field] = STATE(99),
    [sym_option_list] = STATE(93),
    [sym_option_list_item] = STATE(120),
    [sym_line_block] = STATE(93),
    [sym__single_line_block] = STATE(97),
    [sym__markup_blocks] = STATE(93),
    [sym__footnote_block] = STATE(93),
    [sym_footnote] = STATE(103),
    [sym__citation_block] = STATE(93),
    [sym_citation] = STATE(114),
    [sym__hyperlink_target_block] = STATE(93),
    [sym_target] = STATE(92),
    [sym__anoynymous_hyperlink_target_block] = STATE(93),
    [sym__anonymous_target] = STATE(96),
    [aux_sym__line] = STATE(25),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_paragraph_repeat1] = STATE(26),
    [aux_sym_bullet_list_repeat1] = STATE(27),
    [aux_sym_enumerated_list_repeat1] = STATE(28),
    [aux_sym_field_list_repeat1] = STATE(29),
    [aux_sym_option_list_repeat1] = STATE(30),
    [aux_sym_line_block_repeat1] = STATE(31),
    [aux_sym__footnote_block_repeat1] = STATE(32),
    [aux_sym__citation_block_repeat1] = STATE(33),
    [aux_sym__hyperlink_target_block_repeat1] = STATE(34),
    [aux_sym__anoynymous_hyperlink_target_block_repeat1] = STATE(35),
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
    [sym_paragraph] = STATE(93),
    [sym__lists] = STATE(93),
    [sym_bullet_list] = STATE(93),
    [sym__bullet_list_item] = STATE(111),
    [sym_enumerated_list] = STATE(93),
    [sym__enumerated_list_item] = STATE(110),
    [sym_field_list] = STATE(93),
    [sym_field] = STATE(99),
    [sym_option_list] = STATE(93),
    [sym_option_list_item] = STATE(120),
    [sym_line_block] = STATE(93),
    [sym__single_line_block] = STATE(97),
    [sym__markup_blocks] = STATE(93),
    [sym__footnote_block] = STATE(93),
    [sym_footnote] = STATE(103),
    [sym__citation_block] = STATE(93),
    [sym_citation] = STATE(114),
    [sym__hyperlink_target_block] = STATE(93),
    [sym_target] = STATE(92),
    [sym__anoynymous_hyperlink_target_block] = STATE(93),
    [sym__anonymous_target] = STATE(96),
    [aux_sym__line] = STATE(25),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_paragraph_repeat1] = STATE(26),
    [aux_sym_bullet_list_repeat1] = STATE(27),
    [aux_sym_enumerated_list_repeat1] = STATE(28),
    [aux_sym_field_list_repeat1] = STATE(29),
    [aux_sym_option_list_repeat1] = STATE(30),
    [aux_sym_line_block_repeat1] = STATE(31),
    [aux_sym__footnote_block_repeat1] = STATE(32),
    [aux_sym__citation_block_repeat1] = STATE(33),
    [aux_sym__hyperlink_target_block_repeat1] = STATE(34),
    [aux_sym__anoynymous_hyperlink_target_block_repeat1] = STATE(35),
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
    STATE(116), 1,
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
    STATE(109), 1,
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
    STATE(116), 1,
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
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(90), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [130] = 2,
    ACTIONS(3), 1,
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
    ACTIONS(78), 1,
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
    ACTIONS(82), 1,
      sym__eol,
    ACTIONS(100), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [180] = 2,
    ACTIONS(86), 1,
      sym__eol,
    ACTIONS(102), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [190] = 2,
    ACTIONS(70), 1,
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
    ACTIONS(3), 1,
      sym__eol,
    STATE(115), 1,
      sym__reference_name,
    ACTIONS(108), 2,
      aux_sym__reference_name_token1,
      aux_sym__reference_name_token2,
  [221] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(110), 1,
      sym__markup_start,
    STATE(23), 1,
      aux_sym__hyperlink_target_block_repeat1,
    STATE(150), 1,
      sym_target,
  [234] = 3,
    ACTIONS(3), 1,
      sym__eol,
    STATE(139), 1,
      sym__reference_name,
    ACTIONS(113), 2,
      aux_sym__reference_name_token1,
      aux_sym__reference_name_token2,
  [245] = 4,
    ACTIONS(115), 1,
      aux_sym__line_token1,
    ACTIONS(117), 1,
      sym__eol,
    ACTIONS(119), 1,
      sym__blank_line,
    STATE(53), 1,
      aux_sym__line,
  [258] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(121), 1,
      aux_sym__line_token1,
    STATE(54), 1,
      aux_sym__line,
    STATE(55), 1,
      aux_sym_paragraph_repeat1,
  [271] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(7), 1,
      sym__char_bullet,
    STATE(57), 1,
      aux_sym_bullet_list_repeat1,
    STATE(134), 1,
      sym__bullet_list_item,
  [284] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(9), 1,
      sym__numeric_bullet,
    STATE(59), 1,
      aux_sym_enumerated_list_repeat1,
    STATE(133), 1,
      sym__enumerated_list_item,
  [297] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(11), 1,
      anon_sym_COLON,
    STATE(47), 1,
      aux_sym_field_list_repeat1,
    STATE(132), 1,
      sym_field,
  [310] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(13), 1,
      aux_sym_option_list_item_token1,
    STATE(49), 1,
      aux_sym_option_list_repeat1,
    STATE(131), 1,
      sym_option_list_item,
  [323] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(15), 1,
      anon_sym_PIPE,
    STATE(51), 1,
      aux_sym_line_block_repeat1,
    STATE(130), 1,
      sym__single_line_block,
  [336] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(123), 1,
      sym__markup_start,
    STATE(58), 1,
      aux_sym__footnote_block_repeat1,
    STATE(128), 1,
      sym_footnote,
  [349] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(125), 1,
      sym__markup_start,
    STATE(50), 1,
      aux_sym__citation_block_repeat1,
    STATE(125), 1,
      sym_citation,
  [362] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(127), 1,
      sym__markup_start,
    STATE(23), 1,
      aux_sym__hyperlink_target_block_repeat1,
    STATE(123), 1,
      sym_target,
  [375] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(19), 1,
      anon_sym___,
    STATE(52), 1,
      aux_sym__anoynymous_hyperlink_target_block_repeat1,
    STATE(118), 1,
      sym__anonymous_target,
  [388] = 3,
    ACTIONS(115), 1,
      aux_sym__line_token1,
    STATE(53), 1,
      aux_sym__line,
    ACTIONS(129), 2,
      sym__eol,
      sym__blank_line,
  [399] = 3,
    ACTIONS(115), 1,
      aux_sym__line_token1,
    STATE(53), 1,
      aux_sym__line,
    ACTIONS(131), 2,
      sym__eol,
      sym__blank_line,
  [410] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(133), 1,
      anon_sym_LBRACK,
    ACTIONS(135), 1,
      anon_sym__,
    ACTIONS(137), 1,
      anon_sym___,
  [423] = 3,
    ACTIONS(115), 1,
      aux_sym__line_token1,
    STATE(53), 1,
      aux_sym__line,
    ACTIONS(139), 2,
      sym__eol,
      sym__blank_line,
  [434] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(141), 1,
      aux_sym__line_token1,
    STATE(75), 1,
      aux_sym__line,
    STATE(141), 1,
      sym__field_body,
  [447] = 3,
    ACTIONS(115), 1,
      aux_sym__line_token1,
    STATE(53), 1,
      aux_sym__line,
    ACTIONS(143), 2,
      sym__eol,
      sym__blank_line,
  [458] = 3,
    ACTIONS(115), 1,
      aux_sym__line_token1,
    STATE(53), 1,
      aux_sym__line,
    ACTIONS(145), 2,
      sym__eol,
      sym__blank_line,
  [469] = 3,
    ACTIONS(115), 1,
      aux_sym__line_token1,
    STATE(53), 1,
      aux_sym__line,
    ACTIONS(147), 2,
      sym__eol,
      sym__blank_line,
  [480] = 3,
    ACTIONS(115), 1,
      aux_sym__line_token1,
    STATE(53), 1,
      aux_sym__line,
    ACTIONS(149), 2,
      sym__eol,
      sym__blank_line,
  [491] = 3,
    ACTIONS(115), 1,
      aux_sym__line_token1,
    STATE(53), 1,
      aux_sym__line,
    ACTIONS(151), 2,
      sym__eol,
      sym__blank_line,
  [502] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(153), 1,
      aux_sym__line_token1,
    STATE(45), 1,
      aux_sym__line,
    STATE(101), 1,
      sym__field_body,
  [515] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(155), 1,
      anon_sym_COLON,
    STATE(47), 1,
      aux_sym_field_list_repeat1,
    STATE(145), 1,
      sym_field,
  [528] = 3,
    ACTIONS(115), 1,
      aux_sym__line_token1,
    STATE(53), 1,
      aux_sym__line,
    ACTIONS(158), 2,
      sym__eol,
      sym__blank_line,
  [539] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(160), 1,
      aux_sym_option_list_item_token1,
    STATE(49), 1,
      aux_sym_option_list_repeat1,
    STATE(146), 1,
      sym_option_list_item,
  [552] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(163), 1,
      sym__markup_start,
    STATE(50), 1,
      aux_sym__citation_block_repeat1,
    STATE(142), 1,
      sym_citation,
  [565] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(166), 1,
      anon_sym_PIPE,
    STATE(51), 1,
      aux_sym_line_block_repeat1,
    STATE(147), 1,
      sym__single_line_block,
  [578] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(169), 1,
      anon_sym___,
    STATE(52), 1,
      aux_sym__anoynymous_hyperlink_target_block_repeat1,
    STATE(149), 1,
      sym__anonymous_target,
  [591] = 3,
    ACTIONS(172), 1,
      aux_sym__line_token1,
    STATE(53), 1,
      aux_sym__line,
    ACTIONS(175), 2,
      sym__eol,
      sym__blank_line,
  [602] = 4,
    ACTIONS(115), 1,
      aux_sym__line_token1,
    ACTIONS(117), 1,
      sym__eol,
    ACTIONS(177), 1,
      sym__blank_line,
    STATE(53), 1,
      aux_sym__line,
  [615] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(179), 1,
      aux_sym__line_token1,
    STATE(55), 1,
      aux_sym_paragraph_repeat1,
    STATE(84), 1,
      aux_sym__line,
  [628] = 3,
    ACTIONS(115), 1,
      aux_sym__line_token1,
    STATE(53), 1,
      aux_sym__line,
    ACTIONS(182), 2,
      sym__eol,
      sym__blank_line,
  [639] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(184), 1,
      sym__char_bullet,
    STATE(57), 1,
      aux_sym_bullet_list_repeat1,
    STATE(143), 1,
      sym__bullet_list_item,
  [652] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(187), 1,
      sym__markup_start,
    STATE(58), 1,
      aux_sym__footnote_block_repeat1,
    STATE(148), 1,
      sym_footnote,
  [665] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(190), 1,
      sym__numeric_bullet,
    STATE(59), 1,
      aux_sym_enumerated_list_repeat1,
    STATE(144), 1,
      sym__enumerated_list_item,
  [678] = 3,
    ACTIONS(182), 1,
      sym__eol,
    ACTIONS(193), 1,
      aux_sym__line_token1,
    STATE(80), 1,
      aux_sym__line,
  [688] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(195), 1,
      aux_sym__line_token1,
    STATE(70), 1,
      aux_sym__line,
  [698] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(197), 1,
      aux_sym__line_token1,
    STATE(37), 1,
      aux_sym__line,
  [708] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(199), 1,
      aux_sym__line_token1,
    STATE(39), 1,
      aux_sym__line,
  [718] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(201), 1,
      aux_sym__line_token1,
    STATE(48), 1,
      aux_sym__line,
  [728] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(203), 1,
      anon_sym__,
    ACTIONS(205), 1,
      anon_sym___,
  [738] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(207), 1,
      aux_sym__line_token1,
    STATE(83), 1,
      aux_sym__line,
  [748] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(209), 1,
      aux_sym__line_token1,
    STATE(85), 1,
      aux_sym__line,
  [758] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(211), 1,
      aux_sym__line_token1,
    STATE(86), 1,
      aux_sym__line,
  [768] = 3,
    ACTIONS(143), 1,
      sym__eol,
    ACTIONS(193), 1,
      aux_sym__line_token1,
    STATE(80), 1,
      aux_sym__line,
  [778] = 3,
    ACTIONS(145), 1,
      sym__eol,
    ACTIONS(193), 1,
      aux_sym__line_token1,
    STATE(80), 1,
      aux_sym__line,
  [788] = 3,
    ACTIONS(147), 1,
      sym__eol,
    ACTIONS(193), 1,
      aux_sym__line_token1,
    STATE(80), 1,
      aux_sym__line,
  [798] = 3,
    ACTIONS(149), 1,
      sym__eol,
    ACTIONS(193), 1,
      aux_sym__line_token1,
    STATE(80), 1,
      aux_sym__line,
  [808] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(213), 1,
      aux_sym__line_token1,
    STATE(69), 1,
      aux_sym__line,
  [818] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(215), 1,
      aux_sym__line_token1,
    STATE(71), 1,
      aux_sym__line,
  [828] = 3,
    ACTIONS(151), 1,
      sym__eol,
    ACTIONS(193), 1,
      aux_sym__line_token1,
    STATE(80), 1,
      aux_sym__line,
  [838] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(135), 1,
      anon_sym__,
    ACTIONS(137), 1,
      anon_sym___,
  [848] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(217), 1,
      aux_sym__line_token1,
    STATE(72), 1,
      aux_sym__line,
  [858] = 3,
    ACTIONS(158), 1,
      sym__eol,
    ACTIONS(193), 1,
      aux_sym__line_token1,
    STATE(80), 1,
      aux_sym__line,
  [868] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(219), 1,
      aux_sym__line_token1,
    STATE(36), 1,
      aux_sym__line,
  [878] = 3,
    ACTIONS(175), 1,
      sym__eol,
    ACTIONS(221), 1,
      aux_sym__line_token1,
    STATE(80), 1,
      aux_sym__line,
  [888] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(224), 1,
      aux_sym__line_token1,
    STATE(60), 1,
      aux_sym__line,
  [898] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(226), 1,
      aux_sym__line_token1,
    STATE(78), 1,
      aux_sym__line,
  [908] = 3,
    ACTIONS(139), 1,
      sym__eol,
    ACTIONS(193), 1,
      aux_sym__line_token1,
    STATE(80), 1,
      aux_sym__line,
  [918] = 3,
    ACTIONS(117), 1,
      sym__eol,
    ACTIONS(193), 1,
      aux_sym__line_token1,
    STATE(80), 1,
      aux_sym__line,
  [928] = 3,
    ACTIONS(131), 1,
      sym__eol,
    ACTIONS(193), 1,
      aux_sym__line_token1,
    STATE(80), 1,
      aux_sym__line,
  [938] = 3,
    ACTIONS(129), 1,
      sym__eol,
    ACTIONS(193), 1,
      aux_sym__line_token1,
    STATE(80), 1,
      aux_sym__line,
  [948] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(228), 1,
      aux_sym__line_token1,
    STATE(56), 1,
      aux_sym__line,
  [958] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(230), 1,
      aux_sym__line_token1,
    STATE(41), 1,
      aux_sym__line,
  [968] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(232), 1,
      aux_sym__line_token1,
    STATE(42), 1,
      aux_sym__line,
  [978] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(234), 1,
      aux_sym__line_token1,
    STATE(43), 1,
      aux_sym__line,
  [988] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(236), 1,
      aux_sym__line_token1,
    STATE(44), 1,
      aux_sym__line,
  [998] = 2,
    ACTIONS(238), 1,
      sym__eol,
    ACTIONS(240), 1,
      sym__blank_line,
  [1005] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(242), 1,
      sym__blank_line,
  [1012] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(244), 1,
      anon_sym_LBRACK,
  [1019] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(246), 1,
      anon_sym_LBRACK,
  [1026] = 2,
    ACTIONS(248), 1,
      sym__eol,
    ACTIONS(250), 1,
      sym__blank_line,
  [1033] = 2,
    ACTIONS(252), 1,
      sym__eol,
    ACTIONS(254), 1,
      sym__blank_line,
  [1040] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(256), 1,
      sym__citation_label,
  [1047] = 2,
    ACTIONS(258), 1,
      sym__eol,
    ACTIONS(260), 1,
      sym__blank_line,
  [1054] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(262), 1,
      sym__field_name,
  [1061] = 1,
    ACTIONS(264), 2,
      sym__eol,
      sym__blank_line,
  [1066] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(266), 1,
      aux_sym_option_list_item_token1,
  [1073] = 2,
    ACTIONS(268), 1,
      sym__eol,
    ACTIONS(270), 1,
      sym__blank_line,
  [1080] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(272), 1,
      sym__citation_label,
  [1087] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(274), 1,
      sym__markup_start,
  [1094] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(276), 1,
      anon_sym_COLON,
  [1101] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(278), 1,
      sym__numeric_bullet,
  [1108] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(280), 1,
      sym__char_bullet,
  [1115] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(282), 1,
      anon_sym_RBRACK,
  [1122] = 2,
    ACTIONS(284), 1,
      sym__eol,
    ACTIONS(286), 1,
      sym__blank_line,
  [1129] = 2,
    ACTIONS(288), 1,
      sym__eol,
    ACTIONS(290), 1,
      sym__blank_line,
  [1136] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(292), 1,
      anon_sym_RBRACK,
  [1143] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(294), 1,
      ts_builtin_sym_end,
  [1150] = 2,
    ACTIONS(296), 1,
      sym__eol,
    ACTIONS(298), 1,
      sym__blank_line,
  [1157] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(300), 1,
      anon_sym_COLON,
  [1164] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(302), 1,
      anon_sym_RBRACK,
  [1171] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(304), 1,
      anon_sym_RBRACK,
  [1178] = 2,
    ACTIONS(248), 1,
      sym__eol,
    ACTIONS(306), 1,
      sym__blank_line,
  [1185] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(308), 1,
      anon_sym_COLON,
  [1192] = 2,
    ACTIONS(310), 1,
      sym__eol,
    ACTIONS(312), 1,
      sym__blank_line,
  [1199] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(314), 1,
      anon_sym_COLON,
  [1206] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(316), 1,
      anon_sym_COLON,
  [1213] = 2,
    ACTIONS(238), 1,
      sym__eol,
    ACTIONS(318), 1,
      sym__blank_line,
  [1220] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(320), 1,
      sym__field_name,
  [1227] = 2,
    ACTIONS(296), 1,
      sym__eol,
    ACTIONS(322), 1,
      sym__blank_line,
  [1234] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(324), 1,
      anon_sym_LBRACK,
  [1241] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(326), 1,
      anon_sym_PIPE,
  [1248] = 2,
    ACTIONS(268), 1,
      sym__eol,
    ACTIONS(328), 1,
      sym__blank_line,
  [1255] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(330), 1,
      anon_sym_LBRACK,
  [1262] = 2,
    ACTIONS(252), 1,
      sym__eol,
    ACTIONS(332), 1,
      sym__blank_line,
  [1269] = 2,
    ACTIONS(310), 1,
      sym__eol,
    ACTIONS(334), 1,
      sym__blank_line,
  [1276] = 2,
    ACTIONS(258), 1,
      sym__eol,
    ACTIONS(336), 1,
      sym__blank_line,
  [1283] = 2,
    ACTIONS(284), 1,
      sym__eol,
    ACTIONS(338), 1,
      sym__blank_line,
  [1290] = 2,
    ACTIONS(288), 1,
      sym__eol,
    ACTIONS(340), 1,
      sym__blank_line,
  [1297] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(342), 1,
      aux_sym__line_token1,
  [1304] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(344), 1,
      anon_sym_COLON,
  [1311] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(346), 1,
      anon_sym___,
  [1318] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(348), 1,
      sym__markup_start,
  [1325] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(350), 1,
      anon_sym_COLON,
  [1332] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(352), 1,
      sym__markup_start,
  [1339] = 1,
    ACTIONS(264), 1,
      sym__eol,
  [1343] = 1,
    ACTIONS(296), 1,
      sym__eol,
  [1347] = 1,
    ACTIONS(288), 1,
      sym__eol,
  [1351] = 1,
    ACTIONS(284), 1,
      sym__eol,
  [1355] = 1,
    ACTIONS(258), 1,
      sym__eol,
  [1359] = 1,
    ACTIONS(310), 1,
      sym__eol,
  [1363] = 1,
    ACTIONS(252), 1,
      sym__eol,
  [1367] = 1,
    ACTIONS(268), 1,
      sym__eol,
  [1371] = 1,
    ACTIONS(248), 1,
      sym__eol,
  [1375] = 1,
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
  [SMALL_STATE(25)] = 245,
  [SMALL_STATE(26)] = 258,
  [SMALL_STATE(27)] = 271,
  [SMALL_STATE(28)] = 284,
  [SMALL_STATE(29)] = 297,
  [SMALL_STATE(30)] = 310,
  [SMALL_STATE(31)] = 323,
  [SMALL_STATE(32)] = 336,
  [SMALL_STATE(33)] = 349,
  [SMALL_STATE(34)] = 362,
  [SMALL_STATE(35)] = 375,
  [SMALL_STATE(36)] = 388,
  [SMALL_STATE(37)] = 399,
  [SMALL_STATE(38)] = 410,
  [SMALL_STATE(39)] = 423,
  [SMALL_STATE(40)] = 434,
  [SMALL_STATE(41)] = 447,
  [SMALL_STATE(42)] = 458,
  [SMALL_STATE(43)] = 469,
  [SMALL_STATE(44)] = 480,
  [SMALL_STATE(45)] = 491,
  [SMALL_STATE(46)] = 502,
  [SMALL_STATE(47)] = 515,
  [SMALL_STATE(48)] = 528,
  [SMALL_STATE(49)] = 539,
  [SMALL_STATE(50)] = 552,
  [SMALL_STATE(51)] = 565,
  [SMALL_STATE(52)] = 578,
  [SMALL_STATE(53)] = 591,
  [SMALL_STATE(54)] = 602,
  [SMALL_STATE(55)] = 615,
  [SMALL_STATE(56)] = 628,
  [SMALL_STATE(57)] = 639,
  [SMALL_STATE(58)] = 652,
  [SMALL_STATE(59)] = 665,
  [SMALL_STATE(60)] = 678,
  [SMALL_STATE(61)] = 688,
  [SMALL_STATE(62)] = 698,
  [SMALL_STATE(63)] = 708,
  [SMALL_STATE(64)] = 718,
  [SMALL_STATE(65)] = 728,
  [SMALL_STATE(66)] = 738,
  [SMALL_STATE(67)] = 748,
  [SMALL_STATE(68)] = 758,
  [SMALL_STATE(69)] = 768,
  [SMALL_STATE(70)] = 778,
  [SMALL_STATE(71)] = 788,
  [SMALL_STATE(72)] = 798,
  [SMALL_STATE(73)] = 808,
  [SMALL_STATE(74)] = 818,
  [SMALL_STATE(75)] = 828,
  [SMALL_STATE(76)] = 838,
  [SMALL_STATE(77)] = 848,
  [SMALL_STATE(78)] = 858,
  [SMALL_STATE(79)] = 868,
  [SMALL_STATE(80)] = 878,
  [SMALL_STATE(81)] = 888,
  [SMALL_STATE(82)] = 898,
  [SMALL_STATE(83)] = 908,
  [SMALL_STATE(84)] = 918,
  [SMALL_STATE(85)] = 928,
  [SMALL_STATE(86)] = 938,
  [SMALL_STATE(87)] = 948,
  [SMALL_STATE(88)] = 958,
  [SMALL_STATE(89)] = 968,
  [SMALL_STATE(90)] = 978,
  [SMALL_STATE(91)] = 988,
  [SMALL_STATE(92)] = 998,
  [SMALL_STATE(93)] = 1005,
  [SMALL_STATE(94)] = 1012,
  [SMALL_STATE(95)] = 1019,
  [SMALL_STATE(96)] = 1026,
  [SMALL_STATE(97)] = 1033,
  [SMALL_STATE(98)] = 1040,
  [SMALL_STATE(99)] = 1047,
  [SMALL_STATE(100)] = 1054,
  [SMALL_STATE(101)] = 1061,
  [SMALL_STATE(102)] = 1066,
  [SMALL_STATE(103)] = 1073,
  [SMALL_STATE(104)] = 1080,
  [SMALL_STATE(105)] = 1087,
  [SMALL_STATE(106)] = 1094,
  [SMALL_STATE(107)] = 1101,
  [SMALL_STATE(108)] = 1108,
  [SMALL_STATE(109)] = 1115,
  [SMALL_STATE(110)] = 1122,
  [SMALL_STATE(111)] = 1129,
  [SMALL_STATE(112)] = 1136,
  [SMALL_STATE(113)] = 1143,
  [SMALL_STATE(114)] = 1150,
  [SMALL_STATE(115)] = 1157,
  [SMALL_STATE(116)] = 1164,
  [SMALL_STATE(117)] = 1171,
  [SMALL_STATE(118)] = 1178,
  [SMALL_STATE(119)] = 1185,
  [SMALL_STATE(120)] = 1192,
  [SMALL_STATE(121)] = 1199,
  [SMALL_STATE(122)] = 1206,
  [SMALL_STATE(123)] = 1213,
  [SMALL_STATE(124)] = 1220,
  [SMALL_STATE(125)] = 1227,
  [SMALL_STATE(126)] = 1234,
  [SMALL_STATE(127)] = 1241,
  [SMALL_STATE(128)] = 1248,
  [SMALL_STATE(129)] = 1255,
  [SMALL_STATE(130)] = 1262,
  [SMALL_STATE(131)] = 1269,
  [SMALL_STATE(132)] = 1276,
  [SMALL_STATE(133)] = 1283,
  [SMALL_STATE(134)] = 1290,
  [SMALL_STATE(135)] = 1297,
  [SMALL_STATE(136)] = 1304,
  [SMALL_STATE(137)] = 1311,
  [SMALL_STATE(138)] = 1318,
  [SMALL_STATE(139)] = 1325,
  [SMALL_STATE(140)] = 1332,
  [SMALL_STATE(141)] = 1339,
  [SMALL_STATE(142)] = 1343,
  [SMALL_STATE(143)] = 1347,
  [SMALL_STATE(144)] = 1351,
  [SMALL_STATE(145)] = 1355,
  [SMALL_STATE(146)] = 1359,
  [SMALL_STATE(147)] = 1363,
  [SMALL_STATE(148)] = 1367,
  [SMALL_STATE(149)] = 1371,
  [SMALL_STATE(150)] = 1375,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(79),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(62),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(124),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(63),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(8),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(38),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(9),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(25),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(3),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__body_elements, 2),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__body_elements, 2),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 4),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_block, 1),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__anonymous_target, 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 3),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hyperlink_target_block_repeat1, 2), SHIFT_REPEAT(65),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bullet_list_item, 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__enumerated_list_item, 2),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_list_item, 2),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 6),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footnote, 6),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_citation, 6),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 5),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_body, 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_list_repeat1, 2), SHIFT_REPEAT(100),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_block, 3),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_option_list_repeat1, 2), SHIFT_REPEAT(66),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__citation_block_repeat1, 2), SHIFT_REPEAT(94),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_block_repeat1, 2), SHIFT_REPEAT(16),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__anoynymous_hyperlink_target_block_repeat1, 2), SHIFT_REPEAT(18),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__line, 2), SHIFT_REPEAT(53),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__line, 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(84),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__anonymous_target, 3),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bullet_list_repeat1, 2), SHIFT_REPEAT(68),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__footnote_block_repeat1, 2), SHIFT_REPEAT(95),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enumerated_list_repeat1, 2), SHIFT_REPEAT(67),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__line, 2), SHIFT_REPEAT(80),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hyperlink_target_block, 1),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__anoynymous_hyperlink_target_block, 1),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_block, 1),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_list, 1),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 5),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_option_list_repeat1, 2),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__footnote_block, 1),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__footnote_block_repeat1, 2),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_list_repeat1, 2),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enumerated_list_repeat1, 2, .production_id = 1),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bullet_list_repeat1, 2, .production_id = 1),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumerated_list, 1, .production_id = 1),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bullet_list, 1, .production_id = 1),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [294] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__citation_block, 1),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__anoynymous_hyperlink_target_block, 2),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_list, 1),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hyperlink_target_block, 2),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__citation_block, 2),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_block_repeat1, 2),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__footnote_block, 2),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_block, 2),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_list, 2),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_list, 2),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumerated_list, 2, .production_id = 2),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bullet_list, 2, .production_id = 2),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__anoynymous_hyperlink_target_block_repeat1, 2),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hyperlink_target_block_repeat1, 2),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__citation_block_repeat1, 2),
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
