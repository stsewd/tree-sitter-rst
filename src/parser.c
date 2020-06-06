#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 169
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 70
#define ALIAS_COUNT 1
#define TOKEN_COUNT 28
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
  aux_sym__link_token1 = 23,
  anon_sym_COLON_COLON = 24,
  sym__type = 25,
  sym__eol = 26,
  sym__blank_line = 27,
  sym_document = 28,
  sym__body_elements = 29,
  sym_paragraph = 30,
  sym__lists = 31,
  sym_bullet_list = 32,
  sym__bullet_list_item = 33,
  sym_enumerated_list = 34,
  sym__enumerated_list_item = 35,
  sym_field_list = 36,
  sym_field = 37,
  sym__field_body = 38,
  sym_option_list = 39,
  sym_option_list_item = 40,
  sym_line_block = 41,
  sym__single_line_block = 42,
  sym__markup_blocks = 43,
  sym__footnote_block = 44,
  sym_footnote = 45,
  sym__label = 46,
  sym__citation_block = 47,
  sym_citation = 48,
  sym__hyperlink_target_block = 49,
  sym_target = 50,
  sym__reference_name = 51,
  aux_sym__link = 52,
  sym__anoynymous_hyperlink_target_block = 53,
  sym__anonymous_target = 54,
  sym__directive_block = 55,
  sym_directive = 56,
  aux_sym__line = 57,
  aux_sym_document_repeat1 = 58,
  aux_sym_paragraph_repeat1 = 59,
  aux_sym_bullet_list_repeat1 = 60,
  aux_sym_enumerated_list_repeat1 = 61,
  aux_sym_field_list_repeat1 = 62,
  aux_sym_option_list_repeat1 = 63,
  aux_sym_line_block_repeat1 = 64,
  aux_sym__footnote_block_repeat1 = 65,
  aux_sym__citation_block_repeat1 = 66,
  aux_sym__hyperlink_target_block_repeat1 = 67,
  aux_sym__anoynymous_hyperlink_target_block_repeat1 = 68,
  aux_sym__directive_block_repeat1 = 69,
  alias_sym_list_item = 70,
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
  [aux_sym__link_token1] = "_link_token1",
  [anon_sym_COLON_COLON] = "::",
  [sym__type] = "_type",
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
  [aux_sym__link] = "_link",
  [sym__anoynymous_hyperlink_target_block] = "_anoynymous_hyperlink_target_block",
  [sym__anonymous_target] = "target",
  [sym__directive_block] = "_directive_block",
  [sym_directive] = "directive",
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
  [aux_sym__directive_block_repeat1] = "_directive_block_repeat1",
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
  [aux_sym__link_token1] = aux_sym__link_token1,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [sym__type] = sym__type,
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
  [aux_sym__link] = aux_sym__link,
  [sym__anoynymous_hyperlink_target_block] = sym__anoynymous_hyperlink_target_block,
  [sym__anonymous_target] = sym_target,
  [sym__directive_block] = sym__directive_block,
  [sym_directive] = sym_directive,
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
  [aux_sym__directive_block_repeat1] = aux_sym__directive_block_repeat1,
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
  [aux_sym__link_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym__type] = {
    .visible = false,
    .named = true,
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
  [aux_sym__link] = {
    .visible = false,
    .named = false,
  },
  [sym__anoynymous_hyperlink_target_block] = {
    .visible = false,
    .named = true,
  },
  [sym__anonymous_target] = {
    .visible = true,
    .named = true,
  },
  [sym__directive_block] = {
    .visible = false,
    .named = true,
  },
  [sym_directive] = {
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
  [aux_sym__directive_block_repeat1] = {
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
      if (eof) ADVANCE(29);
      if (lookahead == '\t') ADVANCE(34);
      if (lookahead == 11) ADVANCE(35);
      if (lookahead == '\f') ADVANCE(36);
      if (lookahead == ' ') ADVANCE(33);
      if (lookahead == '#') ADVANCE(45);
      if (lookahead == '*') ADVANCE(49);
      if (lookahead == '+') ADVANCE(70);
      if (lookahead == '-') ADVANCE(69);
      if (lookahead == '.') ADVANCE(66);
      if (lookahead == '/') ADVANCE(71);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == '[') ADVANCE(41);
      if (lookahead == ']') ADVANCE(42);
      if (lookahead == '_') ADVANCE(54);
      if (lookahead == '|') ADVANCE(39);
      if (lookahead == 8226 ||
          lookahead == 8227 ||
          lookahead == 8259) ADVANCE(68);
      if (lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'I' ||
          lookahead == 'L' ||
          lookahead == 'M' ||
          lookahead == 'V' ||
          lookahead == 'X') ADVANCE(50);
      if (lookahead == 'c' ||
          lookahead == 'd' ||
          lookahead == 'i' ||
          lookahead == 'l' ||
          lookahead == 'm' ||
          lookahead == 'v' ||
          lookahead == 'x') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(52);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(61);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(34);
      if (lookahead == 11) ADVANCE(35);
      if (lookahead == '\f') ADVANCE(36);
      if (lookahead == ' ') ADVANCE(33);
      if (lookahead == '#') ADVANCE(46);
      if (lookahead == '*') ADVANCE(48);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == '[') ADVANCE(41);
      if (lookahead == ']') ADVANCE(42);
      if (lookahead == '_') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '+') ADVANCE(23);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '/') ADVANCE(23);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'I' ||
          lookahead == 'L' ||
          lookahead == 'M' ||
          lookahead == 'V' ||
          lookahead == 'X') ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == 'c' ||
          lookahead == 'd' ||
          lookahead == 'i' ||
          lookahead == 'l' ||
          lookahead == 'm' ||
          lookahead == 'v' ||
          lookahead == 'x') ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == ':') ADVANCE(72);
      END_STATE();
    case 9:
      if (lookahead == ':') ADVANCE(13);
      if (lookahead == '_') ADVANCE(9);
      if (lookahead == '`') ADVANCE(58);
      if (lookahead != 0) ADVANCE(56);
      END_STATE();
    case 10:
      if (lookahead == '[') ADVANCE(41);
      if (lookahead == '_') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 11:
      if (lookahead == '_') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(58);
      END_STATE();
    case 12:
      if (lookahead == '`') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '_') ADVANCE(59);
      END_STATE();
    case 13:
      if (lookahead == '`') ADVANCE(60);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f') ADVANCE(19);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == ',') ADVANCE(2);
      if (lookahead == '=') ADVANCE(25);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 16:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(31);
      END_STATE();
    case 17:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(31);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 18:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(40);
      END_STATE();
    case 19:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(38);
      END_STATE();
    case 20:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead == ',') ADVANCE(2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '_') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 26:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(61);
      END_STATE();
    case 27:
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(37);
      END_STATE();
    case 28:
      if (eof) ADVANCE(29);
      if (lookahead == '#') ADVANCE(62);
      if (lookahead == '*' ||
          lookahead == 8226 ||
          lookahead == 8227 ||
          lookahead == 8259) ADVANCE(68);
      if (lookahead == '+') ADVANCE(70);
      if (lookahead == '-') ADVANCE(69);
      if (lookahead == '.') ADVANCE(66);
      if (lookahead == '/') ADVANCE(71);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == '_') ADVANCE(67);
      if (lookahead == '|') ADVANCE(39);
      if (lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'I' ||
          lookahead == 'L' ||
          lookahead == 'M' ||
          lookahead == 'V' ||
          lookahead == 'X') ADVANCE(63);
      if (lookahead == 'c' ||
          lookahead == 'd' ||
          lookahead == 'i' ||
          lookahead == 'l' ||
          lookahead == 'm' ||
          lookahead == 'v' ||
          lookahead == 'x') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(62);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(61);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym__char_bullet);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym__numeric_bullet);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_TAB);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_3);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym__field_name);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_option_list_item_token1);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym__markup_start);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '.') ADVANCE(16);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym__label_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(30);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym__citation_label);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(15);
      if (lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'I' ||
          lookahead == 'L' ||
          lookahead == 'M' ||
          lookahead == 'V' ||
          lookahead == 'X') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym__citation_label);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(15);
      if (lookahead == 'c' ||
          lookahead == 'd' ||
          lookahead == 'i' ||
          lookahead == 'l' ||
          lookahead == 'm' ||
          lookahead == 'v' ||
          lookahead == 'x') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym__citation_label);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym__citation_label);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '_') ADVANCE(55);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym___);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym__reference_name_token1);
      if (lookahead == ':') ADVANCE(13);
      if (lookahead == '_') ADVANCE(9);
      if (lookahead == '`') ADVANCE(58);
      if (lookahead != 0) ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym__reference_name_token1);
      if (lookahead == ':') ADVANCE(13);
      if (lookahead == '`') ADVANCE(11);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym__reference_name_token1);
      if (lookahead == '_') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym__reference_name_token1);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(11);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym__reference_name_token2);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym__link_token1);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym__link_token1);
      if (lookahead == '.') ADVANCE(16);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym__link_token1);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'I' ||
          lookahead == 'L' ||
          lookahead == 'M' ||
          lookahead == 'V' ||
          lookahead == 'X') ADVANCE(5);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym__link_token1);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == 'c' ||
          lookahead == 'd' ||
          lookahead == 'i' ||
          lookahead == 'l' ||
          lookahead == 'm' ||
          lookahead == 'v' ||
          lookahead == 'x') ADVANCE(6);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym__link_token1);
      if (lookahead == '.') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym__link_token1);
      if (lookahead == '.') ADVANCE(18);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym__link_token1);
      if (lookahead == '_') ADVANCE(55);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym__link_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(30);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym__link_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead == '-') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym__link_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym__link_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym__type);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '_') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 28, .external_lex_state = 1},
  [2] = {.lex_state = 28, .external_lex_state = 1},
  [3] = {.lex_state = 28, .external_lex_state = 1},
  [4] = {.lex_state = 28, .external_lex_state = 1},
  [5] = {.lex_state = 1, .external_lex_state = 2},
  [6] = {.lex_state = 1, .external_lex_state = 2},
  [7] = {.lex_state = 1, .external_lex_state = 1},
  [8] = {.lex_state = 1, .external_lex_state = 1},
  [9] = {.lex_state = 1, .external_lex_state = 1},
  [10] = {.lex_state = 1, .external_lex_state = 2},
  [11] = {.lex_state = 1, .external_lex_state = 1},
  [12] = {.lex_state = 1, .external_lex_state = 1},
  [13] = {.lex_state = 1, .external_lex_state = 2},
  [14] = {.lex_state = 1, .external_lex_state = 2},
  [15] = {.lex_state = 1, .external_lex_state = 2},
  [16] = {.lex_state = 1, .external_lex_state = 2},
  [17] = {.lex_state = 1, .external_lex_state = 2},
  [18] = {.lex_state = 1, .external_lex_state = 2},
  [19] = {.lex_state = 1, .external_lex_state = 2},
  [20] = {.lex_state = 10, .external_lex_state = 2},
  [21] = {.lex_state = 1, .external_lex_state = 2},
  [22] = {.lex_state = 1, .external_lex_state = 2},
  [23] = {.lex_state = 1, .external_lex_state = 2},
  [24] = {.lex_state = 1, .external_lex_state = 2},
  [25] = {.lex_state = 12, .external_lex_state = 2},
  [26] = {.lex_state = 26, .external_lex_state = 2},
  [27] = {.lex_state = 0, .external_lex_state = 2},
  [28] = {.lex_state = 0, .external_lex_state = 2},
  [29] = {.lex_state = 0, .external_lex_state = 2},
  [30] = {.lex_state = 0, .external_lex_state = 2},
  [31] = {.lex_state = 0, .external_lex_state = 2},
  [32] = {.lex_state = 0, .external_lex_state = 2},
  [33] = {.lex_state = 0, .external_lex_state = 2},
  [34] = {.lex_state = 26, .external_lex_state = 1},
  [35] = {.lex_state = 26, .external_lex_state = 1},
  [36] = {.lex_state = 26, .external_lex_state = 1},
  [37] = {.lex_state = 26, .external_lex_state = 1},
  [38] = {.lex_state = 26, .external_lex_state = 1},
  [39] = {.lex_state = 12, .external_lex_state = 2},
  [40] = {.lex_state = 0, .external_lex_state = 2},
  [41] = {.lex_state = 26, .external_lex_state = 1},
  [42] = {.lex_state = 26, .external_lex_state = 2},
  [43] = {.lex_state = 28, .external_lex_state = 2},
  [44] = {.lex_state = 28, .external_lex_state = 2},
  [45] = {.lex_state = 26, .external_lex_state = 2},
  [46] = {.lex_state = 0, .external_lex_state = 2},
  [47] = {.lex_state = 26, .external_lex_state = 1},
  [48] = {.lex_state = 26, .external_lex_state = 1},
  [49] = {.lex_state = 26, .external_lex_state = 1},
  [50] = {.lex_state = 26, .external_lex_state = 1},
  [51] = {.lex_state = 26, .external_lex_state = 1},
  [52] = {.lex_state = 26, .external_lex_state = 1},
  [53] = {.lex_state = 0, .external_lex_state = 2},
  [54] = {.lex_state = 0, .external_lex_state = 2},
  [55] = {.lex_state = 0, .external_lex_state = 2},
  [56] = {.lex_state = 26, .external_lex_state = 1},
  [57] = {.lex_state = 26, .external_lex_state = 1},
  [58] = {.lex_state = 26, .external_lex_state = 1},
  [59] = {.lex_state = 26, .external_lex_state = 2},
  [60] = {.lex_state = 0, .external_lex_state = 2},
  [61] = {.lex_state = 28, .external_lex_state = 2},
  [62] = {.lex_state = 0, .external_lex_state = 2},
  [63] = {.lex_state = 28, .external_lex_state = 2},
  [64] = {.lex_state = 0, .external_lex_state = 2},
  [65] = {.lex_state = 0, .external_lex_state = 2},
  [66] = {.lex_state = 26, .external_lex_state = 2},
  [67] = {.lex_state = 26, .external_lex_state = 2},
  [68] = {.lex_state = 26, .external_lex_state = 2},
  [69] = {.lex_state = 26, .external_lex_state = 2},
  [70] = {.lex_state = 1, .external_lex_state = 2},
  [71] = {.lex_state = 26, .external_lex_state = 2},
  [72] = {.lex_state = 26, .external_lex_state = 2},
  [73] = {.lex_state = 26, .external_lex_state = 2},
  [74] = {.lex_state = 26, .external_lex_state = 2},
  [75] = {.lex_state = 26, .external_lex_state = 2},
  [76] = {.lex_state = 26, .external_lex_state = 2},
  [77] = {.lex_state = 26, .external_lex_state = 2},
  [78] = {.lex_state = 1, .external_lex_state = 2},
  [79] = {.lex_state = 26, .external_lex_state = 2},
  [80] = {.lex_state = 26, .external_lex_state = 2},
  [81] = {.lex_state = 26, .external_lex_state = 2},
  [82] = {.lex_state = 26, .external_lex_state = 2},
  [83] = {.lex_state = 26, .external_lex_state = 2},
  [84] = {.lex_state = 26, .external_lex_state = 2},
  [85] = {.lex_state = 26, .external_lex_state = 2},
  [86] = {.lex_state = 26, .external_lex_state = 2},
  [87] = {.lex_state = 26, .external_lex_state = 2},
  [88] = {.lex_state = 26, .external_lex_state = 2},
  [89] = {.lex_state = 26, .external_lex_state = 2},
  [90] = {.lex_state = 26, .external_lex_state = 2},
  [91] = {.lex_state = 26, .external_lex_state = 2},
  [92] = {.lex_state = 26, .external_lex_state = 2},
  [93] = {.lex_state = 26, .external_lex_state = 2},
  [94] = {.lex_state = 26, .external_lex_state = 2},
  [95] = {.lex_state = 26, .external_lex_state = 2},
  [96] = {.lex_state = 26, .external_lex_state = 2},
  [97] = {.lex_state = 26, .external_lex_state = 2},
  [98] = {.lex_state = 26, .external_lex_state = 2},
  [99] = {.lex_state = 26, .external_lex_state = 2},
  [100] = {.lex_state = 26, .external_lex_state = 2},
  [101] = {.lex_state = 26, .external_lex_state = 2},
  [102] = {.lex_state = 0, .external_lex_state = 1},
  [103] = {.lex_state = 0, .external_lex_state = 2},
  [104] = {.lex_state = 1, .external_lex_state = 2},
  [105] = {.lex_state = 0, .external_lex_state = 2},
  [106] = {.lex_state = 28, .external_lex_state = 2},
  [107] = {.lex_state = 28, .external_lex_state = 2},
  [108] = {.lex_state = 1, .external_lex_state = 2},
  [109] = {.lex_state = 24, .external_lex_state = 2},
  [110] = {.lex_state = 27, .external_lex_state = 2},
  [111] = {.lex_state = 1, .external_lex_state = 2},
  [112] = {.lex_state = 0, .external_lex_state = 1},
  [113] = {.lex_state = 0, .external_lex_state = 2},
  [114] = {.lex_state = 0, .external_lex_state = 2},
  [115] = {.lex_state = 24, .external_lex_state = 2},
  [116] = {.lex_state = 1, .external_lex_state = 2},
  [117] = {.lex_state = 26, .external_lex_state = 2},
  [118] = {.lex_state = 0, .external_lex_state = 2},
  [119] = {.lex_state = 0, .external_lex_state = 1},
  [120] = {.lex_state = 0, .external_lex_state = 1},
  [121] = {.lex_state = 0, .external_lex_state = 1},
  [122] = {.lex_state = 0, .external_lex_state = 1},
  [123] = {.lex_state = 0, .external_lex_state = 1},
  [124] = {.lex_state = 1, .external_lex_state = 2},
  [125] = {.lex_state = 1, .external_lex_state = 2},
  [126] = {.lex_state = 0, .external_lex_state = 1},
  [127] = {.lex_state = 0, .external_lex_state = 2},
  [128] = {.lex_state = 0, .external_lex_state = 2},
  [129] = {.lex_state = 0, .external_lex_state = 2},
  [130] = {.lex_state = 0, .external_lex_state = 1},
  [131] = {.lex_state = 0, .external_lex_state = 1},
  [132] = {.lex_state = 0, .external_lex_state = 2},
  [133] = {.lex_state = 0, .external_lex_state = 1},
  [134] = {.lex_state = 27, .external_lex_state = 2},
  [135] = {.lex_state = 0, .external_lex_state = 2},
  [136] = {.lex_state = 0, .external_lex_state = 1},
  [137] = {.lex_state = 0, .external_lex_state = 2},
  [138] = {.lex_state = 0, .external_lex_state = 1},
  [139] = {.lex_state = 0, .external_lex_state = 2},
  [140] = {.lex_state = 1, .external_lex_state = 2},
  [141] = {.lex_state = 10, .external_lex_state = 2},
  [142] = {.lex_state = 0, .external_lex_state = 2},
  [143] = {.lex_state = 0, .external_lex_state = 1},
  [144] = {.lex_state = 0, .external_lex_state = 1},
  [145] = {.lex_state = 0, .external_lex_state = 1},
  [146] = {.lex_state = 1, .external_lex_state = 2},
  [147] = {.lex_state = 0, .external_lex_state = 1},
  [148] = {.lex_state = 1, .external_lex_state = 2},
  [149] = {.lex_state = 0, .external_lex_state = 1},
  [150] = {.lex_state = 0, .external_lex_state = 1},
  [151] = {.lex_state = 0, .external_lex_state = 2},
  [152] = {.lex_state = 1, .external_lex_state = 2},
  [153] = {.lex_state = 0, .external_lex_state = 1},
  [154] = {.lex_state = 0, .external_lex_state = 1},
  [155] = {.lex_state = 10, .external_lex_state = 2},
  [156] = {.lex_state = 0, .external_lex_state = 1},
  [157] = {.lex_state = 0, .external_lex_state = 2},
  [158] = {.lex_state = 0, .external_lex_state = 2},
  [159] = {.lex_state = 0, .external_lex_state = 2},
  [160] = {.lex_state = 0, .external_lex_state = 2},
  [161] = {.lex_state = 0, .external_lex_state = 2},
  [162] = {.lex_state = 0, .external_lex_state = 2},
  [163] = {.lex_state = 0, .external_lex_state = 2},
  [164] = {.lex_state = 0, .external_lex_state = 2},
  [165] = {.lex_state = 0, .external_lex_state = 2},
  [166] = {.lex_state = 0, .external_lex_state = 2},
  [167] = {.lex_state = 0, .external_lex_state = 2},
  [168] = {.lex_state = 0, .external_lex_state = 2},
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
    [aux_sym__link_token1] = ACTIONS(1),
    [sym__eol] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(151),
    [sym__body_elements] = STATE(2),
    [sym_paragraph] = STATE(156),
    [sym__lists] = STATE(156),
    [sym_bullet_list] = STATE(156),
    [sym__bullet_list_item] = STATE(102),
    [sym_enumerated_list] = STATE(156),
    [sym__enumerated_list_item] = STATE(133),
    [sym_field_list] = STATE(156),
    [sym_field] = STATE(131),
    [sym_option_list] = STATE(156),
    [sym_option_list_item] = STATE(130),
    [sym_line_block] = STATE(156),
    [sym__single_line_block] = STATE(126),
    [sym__markup_blocks] = STATE(156),
    [sym__footnote_block] = STATE(156),
    [sym_footnote] = STATE(123),
    [sym__citation_block] = STATE(156),
    [sym_citation] = STATE(122),
    [sym__hyperlink_target_block] = STATE(156),
    [sym_target] = STATE(121),
    [sym__anoynymous_hyperlink_target_block] = STATE(156),
    [sym__anonymous_target] = STATE(120),
    [sym__directive_block] = STATE(156),
    [sym_directive] = STATE(119),
    [aux_sym__line] = STATE(47),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_paragraph_repeat1] = STATE(45),
    [aux_sym_bullet_list_repeat1] = STATE(44),
    [aux_sym_enumerated_list_repeat1] = STATE(43),
    [aux_sym_field_list_repeat1] = STATE(46),
    [aux_sym_option_list_repeat1] = STATE(27),
    [aux_sym_line_block_repeat1] = STATE(28),
    [aux_sym__footnote_block_repeat1] = STATE(29),
    [aux_sym__citation_block_repeat1] = STATE(30),
    [aux_sym__hyperlink_target_block_repeat1] = STATE(31),
    [aux_sym__anoynymous_hyperlink_target_block_repeat1] = STATE(32),
    [aux_sym__directive_block_repeat1] = STATE(33),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym__char_bullet] = ACTIONS(7),
    [sym__numeric_bullet] = ACTIONS(9),
    [anon_sym_COLON] = ACTIONS(11),
    [aux_sym_option_list_item_token1] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(15),
    [sym__markup_start] = ACTIONS(17),
    [anon_sym___] = ACTIONS(19),
    [aux_sym__link_token1] = ACTIONS(21),
    [sym__eol] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(23),
  },
  [2] = {
    [sym__body_elements] = STATE(3),
    [sym_paragraph] = STATE(156),
    [sym__lists] = STATE(156),
    [sym_bullet_list] = STATE(156),
    [sym__bullet_list_item] = STATE(102),
    [sym_enumerated_list] = STATE(156),
    [sym__enumerated_list_item] = STATE(133),
    [sym_field_list] = STATE(156),
    [sym_field] = STATE(131),
    [sym_option_list] = STATE(156),
    [sym_option_list_item] = STATE(130),
    [sym_line_block] = STATE(156),
    [sym__single_line_block] = STATE(126),
    [sym__markup_blocks] = STATE(156),
    [sym__footnote_block] = STATE(156),
    [sym_footnote] = STATE(123),
    [sym__citation_block] = STATE(156),
    [sym_citation] = STATE(122),
    [sym__hyperlink_target_block] = STATE(156),
    [sym_target] = STATE(121),
    [sym__anoynymous_hyperlink_target_block] = STATE(156),
    [sym__anonymous_target] = STATE(120),
    [sym__directive_block] = STATE(156),
    [sym_directive] = STATE(119),
    [aux_sym__line] = STATE(47),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_paragraph_repeat1] = STATE(45),
    [aux_sym_bullet_list_repeat1] = STATE(44),
    [aux_sym_enumerated_list_repeat1] = STATE(43),
    [aux_sym_field_list_repeat1] = STATE(46),
    [aux_sym_option_list_repeat1] = STATE(27),
    [aux_sym_line_block_repeat1] = STATE(28),
    [aux_sym__footnote_block_repeat1] = STATE(29),
    [aux_sym__citation_block_repeat1] = STATE(30),
    [aux_sym__hyperlink_target_block_repeat1] = STATE(31),
    [aux_sym__anoynymous_hyperlink_target_block_repeat1] = STATE(32),
    [aux_sym__directive_block_repeat1] = STATE(33),
    [ts_builtin_sym_end] = ACTIONS(25),
    [sym__char_bullet] = ACTIONS(7),
    [sym__numeric_bullet] = ACTIONS(9),
    [anon_sym_COLON] = ACTIONS(11),
    [aux_sym_option_list_item_token1] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(15),
    [sym__markup_start] = ACTIONS(17),
    [anon_sym___] = ACTIONS(19),
    [aux_sym__link_token1] = ACTIONS(21),
    [sym__eol] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(27),
  },
  [3] = {
    [sym__body_elements] = STATE(3),
    [sym_paragraph] = STATE(156),
    [sym__lists] = STATE(156),
    [sym_bullet_list] = STATE(156),
    [sym__bullet_list_item] = STATE(102),
    [sym_enumerated_list] = STATE(156),
    [sym__enumerated_list_item] = STATE(133),
    [sym_field_list] = STATE(156),
    [sym_field] = STATE(131),
    [sym_option_list] = STATE(156),
    [sym_option_list_item] = STATE(130),
    [sym_line_block] = STATE(156),
    [sym__single_line_block] = STATE(126),
    [sym__markup_blocks] = STATE(156),
    [sym__footnote_block] = STATE(156),
    [sym_footnote] = STATE(123),
    [sym__citation_block] = STATE(156),
    [sym_citation] = STATE(122),
    [sym__hyperlink_target_block] = STATE(156),
    [sym_target] = STATE(121),
    [sym__anoynymous_hyperlink_target_block] = STATE(156),
    [sym__anonymous_target] = STATE(120),
    [sym__directive_block] = STATE(156),
    [sym_directive] = STATE(119),
    [aux_sym__line] = STATE(47),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_paragraph_repeat1] = STATE(45),
    [aux_sym_bullet_list_repeat1] = STATE(44),
    [aux_sym_enumerated_list_repeat1] = STATE(43),
    [aux_sym_field_list_repeat1] = STATE(46),
    [aux_sym_option_list_repeat1] = STATE(27),
    [aux_sym_line_block_repeat1] = STATE(28),
    [aux_sym__footnote_block_repeat1] = STATE(29),
    [aux_sym__citation_block_repeat1] = STATE(30),
    [aux_sym__hyperlink_target_block_repeat1] = STATE(31),
    [aux_sym__anoynymous_hyperlink_target_block_repeat1] = STATE(32),
    [aux_sym__directive_block_repeat1] = STATE(33),
    [ts_builtin_sym_end] = ACTIONS(29),
    [sym__char_bullet] = ACTIONS(31),
    [sym__numeric_bullet] = ACTIONS(34),
    [anon_sym_COLON] = ACTIONS(37),
    [aux_sym_option_list_item_token1] = ACTIONS(40),
    [anon_sym_PIPE] = ACTIONS(43),
    [sym__markup_start] = ACTIONS(46),
    [anon_sym___] = ACTIONS(49),
    [aux_sym__link_token1] = ACTIONS(52),
    [sym__eol] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(55),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(60), 1,
      aux_sym__link_token1,
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
  [36] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(70), 1,
      anon_sym_POUND,
    STATE(124), 1,
      sym__label,
    ACTIONS(68), 3,
      aux_sym__label_token1,
      aux_sym__label_token2,
      anon_sym_STAR,
  [51] = 2,
    ACTIONS(74), 2,
      sym__eol,
      sym__blank_line,
    ACTIONS(72), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
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
  [84] = 4,
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
  [99] = 2,
    ACTIONS(86), 2,
      sym__eol,
      sym__blank_line,
    ACTIONS(84), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [110] = 2,
    ACTIONS(90), 2,
      sym__eol,
      sym__blank_line,
    ACTIONS(88), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [121] = 2,
    ACTIONS(82), 1,
      sym__eol,
    ACTIONS(92), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [131] = 2,
    ACTIONS(78), 1,
      sym__eol,
    ACTIONS(94), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [141] = 2,
    ACTIONS(74), 1,
      sym__eol,
    ACTIONS(96), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [151] = 2,
    ACTIONS(86), 1,
      sym__eol,
    ACTIONS(98), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [161] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(100), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [171] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(102), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [181] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(104), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [191] = 5,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(106), 1,
      anon_sym_LBRACK,
    ACTIONS(108), 1,
      anon_sym__,
    ACTIONS(110), 1,
      anon_sym___,
    ACTIONS(112), 1,
      sym__type,
  [207] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(114), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [217] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(116), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [227] = 2,
    ACTIONS(90), 1,
      sym__eol,
    ACTIONS(118), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [237] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(120), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [247] = 3,
    ACTIONS(3), 1,
      sym__eol,
    STATE(132), 1,
      sym__reference_name,
    ACTIONS(122), 2,
      aux_sym__reference_name_token1,
      aux_sym__reference_name_token2,
  [258] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(124), 1,
      aux_sym__link_token1,
    STATE(38), 1,
      aux_sym__line,
    STATE(112), 1,
      sym__field_body,
  [271] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(13), 1,
      aux_sym_option_list_item_token1,
    STATE(54), 1,
      aux_sym_option_list_repeat1,
    STATE(150), 1,
      sym_option_list_item,
  [284] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(15), 1,
      anon_sym_PIPE,
    STATE(60), 1,
      aux_sym_line_block_repeat1,
    STATE(149), 1,
      sym__single_line_block,
  [297] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(126), 1,
      sym__markup_start,
    STATE(40), 1,
      aux_sym__footnote_block_repeat1,
    STATE(147), 1,
      sym_footnote,
  [310] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(128), 1,
      sym__markup_start,
    STATE(64), 1,
      aux_sym__citation_block_repeat1,
    STATE(145), 1,
      sym_citation,
  [323] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(130), 1,
      sym__markup_start,
    STATE(55), 1,
      aux_sym__hyperlink_target_block_repeat1,
    STATE(144), 1,
      sym_target,
  [336] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(19), 1,
      anon_sym___,
    STATE(62), 1,
      aux_sym__anoynymous_hyperlink_target_block_repeat1,
    STATE(143), 1,
      sym__anonymous_target,
  [349] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(132), 1,
      sym__markup_start,
    STATE(53), 1,
      aux_sym__directive_block_repeat1,
    STATE(136), 1,
      sym_directive,
  [362] = 3,
    ACTIONS(134), 1,
      aux_sym__link_token1,
    STATE(56), 1,
      aux_sym__line,
    ACTIONS(136), 2,
      sym__eol,
      sym__blank_line,
  [373] = 3,
    ACTIONS(134), 1,
      aux_sym__link_token1,
    STATE(56), 1,
      aux_sym__line,
    ACTIONS(138), 2,
      sym__eol,
      sym__blank_line,
  [384] = 3,
    ACTIONS(140), 1,
      aux_sym__link_token1,
    STATE(41), 1,
      aux_sym__link,
    ACTIONS(142), 2,
      sym__eol,
      sym__blank_line,
  [395] = 3,
    ACTIONS(134), 1,
      aux_sym__link_token1,
    STATE(56), 1,
      aux_sym__line,
    ACTIONS(144), 2,
      sym__eol,
      sym__blank_line,
  [406] = 3,
    ACTIONS(134), 1,
      aux_sym__link_token1,
    STATE(56), 1,
      aux_sym__line,
    ACTIONS(146), 2,
      sym__eol,
      sym__blank_line,
  [417] = 3,
    ACTIONS(3), 1,
      sym__eol,
    STATE(157), 1,
      sym__reference_name,
    ACTIONS(148), 2,
      aux_sym__reference_name_token1,
      aux_sym__reference_name_token2,
  [428] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(150), 1,
      sym__markup_start,
    STATE(40), 1,
      aux_sym__footnote_block_repeat1,
    STATE(166), 1,
      sym_footnote,
  [441] = 3,
    ACTIONS(153), 1,
      aux_sym__link_token1,
    STATE(41), 1,
      aux_sym__link,
    ACTIONS(156), 2,
      sym__eol,
      sym__blank_line,
  [452] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(158), 1,
      aux_sym__link_token1,
    STATE(84), 1,
      aux_sym__line,
    STATE(159), 1,
      sym__field_body,
  [465] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(9), 1,
      sym__numeric_bullet,
    STATE(63), 1,
      aux_sym_enumerated_list_repeat1,
    STATE(154), 1,
      sym__enumerated_list_item,
  [478] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(7), 1,
      sym__char_bullet,
    STATE(61), 1,
      aux_sym_bullet_list_repeat1,
    STATE(138), 1,
      sym__bullet_list_item,
  [491] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(160), 1,
      aux_sym__link_token1,
    STATE(58), 1,
      aux_sym__line,
    STATE(59), 1,
      aux_sym_paragraph_repeat1,
  [504] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(11), 1,
      anon_sym_COLON,
    STATE(65), 1,
      aux_sym_field_list_repeat1,
    STATE(153), 1,
      sym_field,
  [517] = 4,
    ACTIONS(134), 1,
      aux_sym__link_token1,
    ACTIONS(162), 1,
      sym__eol,
    ACTIONS(164), 1,
      sym__blank_line,
    STATE(56), 1,
      aux_sym__line,
  [530] = 3,
    ACTIONS(140), 1,
      aux_sym__link_token1,
    STATE(41), 1,
      aux_sym__link,
    ACTIONS(166), 2,
      sym__eol,
      sym__blank_line,
  [541] = 3,
    ACTIONS(134), 1,
      aux_sym__link_token1,
    STATE(56), 1,
      aux_sym__line,
    ACTIONS(168), 2,
      sym__eol,
      sym__blank_line,
  [552] = 3,
    ACTIONS(134), 1,
      aux_sym__link_token1,
    STATE(56), 1,
      aux_sym__line,
    ACTIONS(170), 2,
      sym__eol,
      sym__blank_line,
  [563] = 3,
    ACTIONS(134), 1,
      aux_sym__link_token1,
    STATE(56), 1,
      aux_sym__line,
    ACTIONS(172), 2,
      sym__eol,
      sym__blank_line,
  [574] = 3,
    ACTIONS(134), 1,
      aux_sym__link_token1,
    STATE(56), 1,
      aux_sym__line,
    ACTIONS(174), 2,
      sym__eol,
      sym__blank_line,
  [585] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(176), 1,
      sym__markup_start,
    STATE(53), 1,
      aux_sym__directive_block_repeat1,
    STATE(168), 1,
      sym_directive,
  [598] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(179), 1,
      aux_sym_option_list_item_token1,
    STATE(54), 1,
      aux_sym_option_list_repeat1,
    STATE(160), 1,
      sym_option_list_item,
  [611] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(182), 1,
      sym__markup_start,
    STATE(55), 1,
      aux_sym__hyperlink_target_block_repeat1,
    STATE(165), 1,
      sym_target,
  [624] = 3,
    ACTIONS(185), 1,
      aux_sym__link_token1,
    STATE(56), 1,
      aux_sym__line,
    ACTIONS(188), 2,
      sym__eol,
      sym__blank_line,
  [635] = 3,
    ACTIONS(140), 1,
      aux_sym__link_token1,
    STATE(41), 1,
      aux_sym__link,
    ACTIONS(190), 2,
      sym__eol,
      sym__blank_line,
  [646] = 4,
    ACTIONS(134), 1,
      aux_sym__link_token1,
    ACTIONS(162), 1,
      sym__eol,
    ACTIONS(192), 1,
      sym__blank_line,
    STATE(56), 1,
      aux_sym__line,
  [659] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(194), 1,
      aux_sym__link_token1,
    STATE(59), 1,
      aux_sym_paragraph_repeat1,
    STATE(92), 1,
      aux_sym__line,
  [672] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(197), 1,
      anon_sym_PIPE,
    STATE(60), 1,
      aux_sym_line_block_repeat1,
    STATE(161), 1,
      sym__single_line_block,
  [685] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(200), 1,
      sym__char_bullet,
    STATE(61), 1,
      aux_sym_bullet_list_repeat1,
    STATE(162), 1,
      sym__bullet_list_item,
  [698] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(203), 1,
      anon_sym___,
    STATE(62), 1,
      aux_sym__anoynymous_hyperlink_target_block_repeat1,
    STATE(158), 1,
      sym__anonymous_target,
  [711] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(206), 1,
      sym__numeric_bullet,
    STATE(63), 1,
      aux_sym_enumerated_list_repeat1,
    STATE(163), 1,
      sym__enumerated_list_item,
  [724] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(209), 1,
      sym__markup_start,
    STATE(64), 1,
      aux_sym__citation_block_repeat1,
    STATE(167), 1,
      sym_citation,
  [737] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(212), 1,
      anon_sym_COLON,
    STATE(65), 1,
      aux_sym_field_list_repeat1,
    STATE(164), 1,
      sym_field,
  [750] = 3,
    ACTIONS(144), 1,
      sym__eol,
    ACTIONS(215), 1,
      aux_sym__link_token1,
    STATE(90), 1,
      aux_sym__line,
  [760] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(217), 1,
      aux_sym__link_token1,
    STATE(75), 1,
      aux_sym__link,
  [770] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(219), 1,
      aux_sym__link_token1,
    STATE(35), 1,
      aux_sym__line,
  [780] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(221), 1,
      aux_sym__link_token1,
    STATE(37), 1,
      aux_sym__line,
  [790] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(223), 1,
      anon_sym__,
    ACTIONS(225), 1,
      anon_sym___,
  [800] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(227), 1,
      aux_sym__link_token1,
    STATE(88), 1,
      aux_sym__link,
  [810] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(229), 1,
      aux_sym__link_token1,
    STATE(66), 1,
      aux_sym__line,
  [820] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(231), 1,
      aux_sym__link_token1,
    STATE(93), 1,
      aux_sym__line,
  [830] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(233), 1,
      aux_sym__link_token1,
    STATE(94), 1,
      aux_sym__line,
  [840] = 3,
    ACTIONS(190), 1,
      sym__eol,
    ACTIONS(235), 1,
      aux_sym__link_token1,
    STATE(85), 1,
      aux_sym__link,
  [850] = 3,
    ACTIONS(174), 1,
      sym__eol,
    ACTIONS(215), 1,
      aux_sym__link_token1,
    STATE(90), 1,
      aux_sym__line,
  [860] = 3,
    ACTIONS(170), 1,
      sym__eol,
    ACTIONS(215), 1,
      aux_sym__link_token1,
    STATE(90), 1,
      aux_sym__line,
  [870] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(108), 1,
      anon_sym__,
    ACTIONS(110), 1,
      anon_sym___,
  [880] = 3,
    ACTIONS(168), 1,
      sym__eol,
    ACTIONS(215), 1,
      aux_sym__link_token1,
    STATE(90), 1,
      aux_sym__line,
  [890] = 3,
    ACTIONS(142), 1,
      sym__eol,
    ACTIONS(235), 1,
      aux_sym__link_token1,
    STATE(85), 1,
      aux_sym__link,
  [900] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(237), 1,
      aux_sym__link_token1,
    STATE(76), 1,
      aux_sym__line,
  [910] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(239), 1,
      aux_sym__link_token1,
    STATE(77), 1,
      aux_sym__line,
  [920] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(241), 1,
      aux_sym__link_token1,
    STATE(34), 1,
      aux_sym__line,
  [930] = 3,
    ACTIONS(146), 1,
      sym__eol,
    ACTIONS(215), 1,
      aux_sym__link_token1,
    STATE(90), 1,
      aux_sym__line,
  [940] = 3,
    ACTIONS(156), 1,
      sym__eol,
    ACTIONS(243), 1,
      aux_sym__link_token1,
    STATE(85), 1,
      aux_sym__link,
  [950] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(246), 1,
      aux_sym__link_token1,
    STATE(79), 1,
      aux_sym__line,
  [960] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(248), 1,
      aux_sym__link_token1,
    STATE(80), 1,
      aux_sym__link,
  [970] = 3,
    ACTIONS(166), 1,
      sym__eol,
    ACTIONS(235), 1,
      aux_sym__link_token1,
    STATE(85), 1,
      aux_sym__link,
  [980] = 3,
    ACTIONS(172), 1,
      sym__eol,
    ACTIONS(215), 1,
      aux_sym__link_token1,
    STATE(90), 1,
      aux_sym__line,
  [990] = 3,
    ACTIONS(188), 1,
      sym__eol,
    ACTIONS(250), 1,
      aux_sym__link_token1,
    STATE(90), 1,
      aux_sym__line,
  [1000] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(253), 1,
      aux_sym__link_token1,
    STATE(89), 1,
      aux_sym__line,
  [1010] = 3,
    ACTIONS(162), 1,
      sym__eol,
    ACTIONS(215), 1,
      aux_sym__link_token1,
    STATE(90), 1,
      aux_sym__line,
  [1020] = 3,
    ACTIONS(138), 1,
      sym__eol,
    ACTIONS(215), 1,
      aux_sym__link_token1,
    STATE(90), 1,
      aux_sym__line,
  [1030] = 3,
    ACTIONS(136), 1,
      sym__eol,
    ACTIONS(215), 1,
      aux_sym__link_token1,
    STATE(90), 1,
      aux_sym__line,
  [1040] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(255), 1,
      aux_sym__link_token1,
    STATE(51), 1,
      aux_sym__line,
  [1050] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(257), 1,
      aux_sym__link_token1,
    STATE(57), 1,
      aux_sym__link,
  [1060] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(259), 1,
      aux_sym__link_token1,
    STATE(52), 1,
      aux_sym__line,
  [1070] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(261), 1,
      aux_sym__link_token1,
    STATE(50), 1,
      aux_sym__line,
  [1080] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(263), 1,
      aux_sym__link_token1,
    STATE(49), 1,
      aux_sym__line,
  [1090] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(265), 1,
      aux_sym__link_token1,
    STATE(36), 1,
      aux_sym__link,
  [1100] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(267), 1,
      aux_sym__link_token1,
    STATE(48), 1,
      aux_sym__link,
  [1110] = 2,
    ACTIONS(269), 1,
      sym__eol,
    ACTIONS(271), 1,
      sym__blank_line,
  [1117] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(273), 1,
      anon_sym_COLON,
  [1124] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(275), 1,
      anon_sym_LBRACK,
  [1131] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(277), 1,
      anon_sym_COLON,
  [1138] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(279), 1,
      sym__numeric_bullet,
  [1145] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(281), 1,
      sym__char_bullet,
  [1152] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(283), 1,
      anon_sym_LBRACK,
  [1159] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(285), 1,
      sym__citation_label,
  [1166] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(287), 1,
      sym__field_name,
  [1173] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(289), 1,
      anon_sym_COLON_COLON,
  [1180] = 1,
    ACTIONS(291), 2,
      sym__eol,
      sym__blank_line,
  [1185] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(293), 1,
      anon_sym_COLON,
  [1192] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(295), 1,
      aux_sym_option_list_item_token1,
  [1199] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(297), 1,
      sym__citation_label,
  [1206] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(299), 1,
      anon_sym_RBRACK,
  [1213] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(301), 1,
      aux_sym__link_token1,
  [1220] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(303), 1,
      anon_sym_COLON,
  [1227] = 2,
    ACTIONS(305), 1,
      sym__eol,
    ACTIONS(307), 1,
      sym__blank_line,
  [1234] = 2,
    ACTIONS(309), 1,
      sym__eol,
    ACTIONS(311), 1,
      sym__blank_line,
  [1241] = 2,
    ACTIONS(313), 1,
      sym__eol,
    ACTIONS(315), 1,
      sym__blank_line,
  [1248] = 2,
    ACTIONS(317), 1,
      sym__eol,
    ACTIONS(319), 1,
      sym__blank_line,
  [1255] = 2,
    ACTIONS(321), 1,
      sym__eol,
    ACTIONS(323), 1,
      sym__blank_line,
  [1262] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(325), 1,
      anon_sym_RBRACK,
  [1269] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(327), 1,
      anon_sym_RBRACK,
  [1276] = 2,
    ACTIONS(329), 1,
      sym__eol,
    ACTIONS(331), 1,
      sym__blank_line,
  [1283] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(333), 1,
      anon_sym_PIPE,
  [1290] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(335), 1,
      sym__markup_start,
  [1297] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(337), 1,
      sym__markup_start,
  [1304] = 2,
    ACTIONS(339), 1,
      sym__eol,
    ACTIONS(341), 1,
      sym__blank_line,
  [1311] = 2,
    ACTIONS(343), 1,
      sym__eol,
    ACTIONS(345), 1,
      sym__blank_line,
  [1318] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(347), 1,
      anon_sym_COLON,
  [1325] = 2,
    ACTIONS(349), 1,
      sym__eol,
    ACTIONS(351), 1,
      sym__blank_line,
  [1332] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(353), 1,
      sym__field_name,
  [1339] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(355), 1,
      anon_sym_COLON,
  [1346] = 2,
    ACTIONS(305), 1,
      sym__eol,
    ACTIONS(357), 1,
      sym__blank_line,
  [1353] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(359), 1,
      sym__markup_start,
  [1360] = 2,
    ACTIONS(269), 1,
      sym__eol,
    ACTIONS(361), 1,
      sym__blank_line,
  [1367] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(363), 1,
      anon_sym___,
  [1374] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(365), 1,
      anon_sym_RBRACK,
  [1381] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(112), 1,
      sym__type,
  [1388] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(367), 1,
      sym__markup_start,
  [1395] = 2,
    ACTIONS(309), 1,
      sym__eol,
    ACTIONS(369), 1,
      sym__blank_line,
  [1402] = 2,
    ACTIONS(313), 1,
      sym__eol,
    ACTIONS(371), 1,
      sym__blank_line,
  [1409] = 2,
    ACTIONS(317), 1,
      sym__eol,
    ACTIONS(373), 1,
      sym__blank_line,
  [1416] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(375), 1,
      anon_sym_LBRACK,
  [1423] = 2,
    ACTIONS(321), 1,
      sym__eol,
    ACTIONS(377), 1,
      sym__blank_line,
  [1430] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(379), 1,
      anon_sym_LBRACK,
  [1437] = 2,
    ACTIONS(329), 1,
      sym__eol,
    ACTIONS(381), 1,
      sym__blank_line,
  [1444] = 2,
    ACTIONS(339), 1,
      sym__eol,
    ACTIONS(383), 1,
      sym__blank_line,
  [1451] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(385), 1,
      ts_builtin_sym_end,
  [1458] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(387), 1,
      anon_sym_COLON_COLON,
  [1465] = 2,
    ACTIONS(343), 1,
      sym__eol,
    ACTIONS(389), 1,
      sym__blank_line,
  [1472] = 2,
    ACTIONS(349), 1,
      sym__eol,
    ACTIONS(391), 1,
      sym__blank_line,
  [1479] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(393), 1,
      sym__type,
  [1486] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(395), 1,
      sym__blank_line,
  [1493] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(397), 1,
      anon_sym_COLON,
  [1500] = 1,
    ACTIONS(309), 1,
      sym__eol,
  [1504] = 1,
    ACTIONS(291), 1,
      sym__eol,
  [1508] = 1,
    ACTIONS(339), 1,
      sym__eol,
  [1512] = 1,
    ACTIONS(329), 1,
      sym__eol,
  [1516] = 1,
    ACTIONS(269), 1,
      sym__eol,
  [1520] = 1,
    ACTIONS(349), 1,
      sym__eol,
  [1524] = 1,
    ACTIONS(343), 1,
      sym__eol,
  [1528] = 1,
    ACTIONS(313), 1,
      sym__eol,
  [1532] = 1,
    ACTIONS(321), 1,
      sym__eol,
  [1536] = 1,
    ACTIONS(317), 1,
      sym__eol,
  [1540] = 1,
    ACTIONS(305), 1,
      sym__eol,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 18,
  [SMALL_STATE(6)] = 36,
  [SMALL_STATE(7)] = 51,
  [SMALL_STATE(8)] = 62,
  [SMALL_STATE(9)] = 73,
  [SMALL_STATE(10)] = 84,
  [SMALL_STATE(11)] = 99,
  [SMALL_STATE(12)] = 110,
  [SMALL_STATE(13)] = 121,
  [SMALL_STATE(14)] = 131,
  [SMALL_STATE(15)] = 141,
  [SMALL_STATE(16)] = 151,
  [SMALL_STATE(17)] = 161,
  [SMALL_STATE(18)] = 171,
  [SMALL_STATE(19)] = 181,
  [SMALL_STATE(20)] = 191,
  [SMALL_STATE(21)] = 207,
  [SMALL_STATE(22)] = 217,
  [SMALL_STATE(23)] = 227,
  [SMALL_STATE(24)] = 237,
  [SMALL_STATE(25)] = 247,
  [SMALL_STATE(26)] = 258,
  [SMALL_STATE(27)] = 271,
  [SMALL_STATE(28)] = 284,
  [SMALL_STATE(29)] = 297,
  [SMALL_STATE(30)] = 310,
  [SMALL_STATE(31)] = 323,
  [SMALL_STATE(32)] = 336,
  [SMALL_STATE(33)] = 349,
  [SMALL_STATE(34)] = 362,
  [SMALL_STATE(35)] = 373,
  [SMALL_STATE(36)] = 384,
  [SMALL_STATE(37)] = 395,
  [SMALL_STATE(38)] = 406,
  [SMALL_STATE(39)] = 417,
  [SMALL_STATE(40)] = 428,
  [SMALL_STATE(41)] = 441,
  [SMALL_STATE(42)] = 452,
  [SMALL_STATE(43)] = 465,
  [SMALL_STATE(44)] = 478,
  [SMALL_STATE(45)] = 491,
  [SMALL_STATE(46)] = 504,
  [SMALL_STATE(47)] = 517,
  [SMALL_STATE(48)] = 530,
  [SMALL_STATE(49)] = 541,
  [SMALL_STATE(50)] = 552,
  [SMALL_STATE(51)] = 563,
  [SMALL_STATE(52)] = 574,
  [SMALL_STATE(53)] = 585,
  [SMALL_STATE(54)] = 598,
  [SMALL_STATE(55)] = 611,
  [SMALL_STATE(56)] = 624,
  [SMALL_STATE(57)] = 635,
  [SMALL_STATE(58)] = 646,
  [SMALL_STATE(59)] = 659,
  [SMALL_STATE(60)] = 672,
  [SMALL_STATE(61)] = 685,
  [SMALL_STATE(62)] = 698,
  [SMALL_STATE(63)] = 711,
  [SMALL_STATE(64)] = 724,
  [SMALL_STATE(65)] = 737,
  [SMALL_STATE(66)] = 750,
  [SMALL_STATE(67)] = 760,
  [SMALL_STATE(68)] = 770,
  [SMALL_STATE(69)] = 780,
  [SMALL_STATE(70)] = 790,
  [SMALL_STATE(71)] = 800,
  [SMALL_STATE(72)] = 810,
  [SMALL_STATE(73)] = 820,
  [SMALL_STATE(74)] = 830,
  [SMALL_STATE(75)] = 840,
  [SMALL_STATE(76)] = 850,
  [SMALL_STATE(77)] = 860,
  [SMALL_STATE(78)] = 870,
  [SMALL_STATE(79)] = 880,
  [SMALL_STATE(80)] = 890,
  [SMALL_STATE(81)] = 900,
  [SMALL_STATE(82)] = 910,
  [SMALL_STATE(83)] = 920,
  [SMALL_STATE(84)] = 930,
  [SMALL_STATE(85)] = 940,
  [SMALL_STATE(86)] = 950,
  [SMALL_STATE(87)] = 960,
  [SMALL_STATE(88)] = 970,
  [SMALL_STATE(89)] = 980,
  [SMALL_STATE(90)] = 990,
  [SMALL_STATE(91)] = 1000,
  [SMALL_STATE(92)] = 1010,
  [SMALL_STATE(93)] = 1020,
  [SMALL_STATE(94)] = 1030,
  [SMALL_STATE(95)] = 1040,
  [SMALL_STATE(96)] = 1050,
  [SMALL_STATE(97)] = 1060,
  [SMALL_STATE(98)] = 1070,
  [SMALL_STATE(99)] = 1080,
  [SMALL_STATE(100)] = 1090,
  [SMALL_STATE(101)] = 1100,
  [SMALL_STATE(102)] = 1110,
  [SMALL_STATE(103)] = 1117,
  [SMALL_STATE(104)] = 1124,
  [SMALL_STATE(105)] = 1131,
  [SMALL_STATE(106)] = 1138,
  [SMALL_STATE(107)] = 1145,
  [SMALL_STATE(108)] = 1152,
  [SMALL_STATE(109)] = 1159,
  [SMALL_STATE(110)] = 1166,
  [SMALL_STATE(111)] = 1173,
  [SMALL_STATE(112)] = 1180,
  [SMALL_STATE(113)] = 1185,
  [SMALL_STATE(114)] = 1192,
  [SMALL_STATE(115)] = 1199,
  [SMALL_STATE(116)] = 1206,
  [SMALL_STATE(117)] = 1213,
  [SMALL_STATE(118)] = 1220,
  [SMALL_STATE(119)] = 1227,
  [SMALL_STATE(120)] = 1234,
  [SMALL_STATE(121)] = 1241,
  [SMALL_STATE(122)] = 1248,
  [SMALL_STATE(123)] = 1255,
  [SMALL_STATE(124)] = 1262,
  [SMALL_STATE(125)] = 1269,
  [SMALL_STATE(126)] = 1276,
  [SMALL_STATE(127)] = 1283,
  [SMALL_STATE(128)] = 1290,
  [SMALL_STATE(129)] = 1297,
  [SMALL_STATE(130)] = 1304,
  [SMALL_STATE(131)] = 1311,
  [SMALL_STATE(132)] = 1318,
  [SMALL_STATE(133)] = 1325,
  [SMALL_STATE(134)] = 1332,
  [SMALL_STATE(135)] = 1339,
  [SMALL_STATE(136)] = 1346,
  [SMALL_STATE(137)] = 1353,
  [SMALL_STATE(138)] = 1360,
  [SMALL_STATE(139)] = 1367,
  [SMALL_STATE(140)] = 1374,
  [SMALL_STATE(141)] = 1381,
  [SMALL_STATE(142)] = 1388,
  [SMALL_STATE(143)] = 1395,
  [SMALL_STATE(144)] = 1402,
  [SMALL_STATE(145)] = 1409,
  [SMALL_STATE(146)] = 1416,
  [SMALL_STATE(147)] = 1423,
  [SMALL_STATE(148)] = 1430,
  [SMALL_STATE(149)] = 1437,
  [SMALL_STATE(150)] = 1444,
  [SMALL_STATE(151)] = 1451,
  [SMALL_STATE(152)] = 1458,
  [SMALL_STATE(153)] = 1465,
  [SMALL_STATE(154)] = 1472,
  [SMALL_STATE(155)] = 1479,
  [SMALL_STATE(156)] = 1486,
  [SMALL_STATE(157)] = 1493,
  [SMALL_STATE(158)] = 1500,
  [SMALL_STATE(159)] = 1504,
  [SMALL_STATE(160)] = 1508,
  [SMALL_STATE(161)] = 1512,
  [SMALL_STATE(162)] = 1516,
  [SMALL_STATE(163)] = 1520,
  [SMALL_STATE(164)] = 1524,
  [SMALL_STATE(165)] = 1528,
  [SMALL_STATE(166)] = 1532,
  [SMALL_STATE(167)] = 1536,
  [SMALL_STATE(168)] = 1540,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(83),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(68),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(134),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(69),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(9),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(20),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(11),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(47),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(3),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__body_elements, 2),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__body_elements, 2),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 3),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_block, 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__anonymous_target, 1),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 4),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bullet_list_item, 2),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__enumerated_list_item, 2),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 5),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_list_item, 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_body, 1),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__footnote_block_repeat1, 2), SHIFT_REPEAT(108),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__link, 2), SHIFT_REPEAT(41),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__link, 2),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 1),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__anonymous_target, 3),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 5),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_citation, 6),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_block, 3),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footnote, 6),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__directive_block_repeat1, 2), SHIFT_REPEAT(155),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_option_list_repeat1, 2), SHIFT_REPEAT(72),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hyperlink_target_block_repeat1, 2), SHIFT_REPEAT(70),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__line, 2), SHIFT_REPEAT(56),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__line, 2),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 6),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(92),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_block_repeat1, 2), SHIFT_REPEAT(13),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bullet_list_repeat1, 2), SHIFT_REPEAT(74),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__anoynymous_hyperlink_target_block_repeat1, 2), SHIFT_REPEAT(16),
  [206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enumerated_list_repeat1, 2), SHIFT_REPEAT(73),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__citation_block_repeat1, 2), SHIFT_REPEAT(104),
  [212] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_list_repeat1, 2), SHIFT_REPEAT(110),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [243] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__link, 2), SHIFT_REPEAT(85),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__line, 2), SHIFT_REPEAT(90),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bullet_list, 1, .production_id = 1),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_list_repeat1, 2),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enumerated_list_repeat1, 2, .production_id = 1),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bullet_list_repeat1, 2, .production_id = 1),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 5),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_option_list_repeat1, 2),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directive_block, 1),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__anoynymous_hyperlink_target_block, 1),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hyperlink_target_block, 1),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__citation_block, 1),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__footnote_block, 1),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_block, 1),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_block_repeat1, 2),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__footnote_block_repeat1, 2),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__citation_block_repeat1, 2),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_list, 1),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_list, 1),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumerated_list, 1, .production_id = 1),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directive_block, 2),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hyperlink_target_block_repeat1, 2),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bullet_list, 2, .production_id = 2),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__anoynymous_hyperlink_target_block_repeat1, 2),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__directive_block_repeat1, 2),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__anoynymous_hyperlink_target_block, 2),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hyperlink_target_block, 2),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__citation_block, 2),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__footnote_block, 2),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_block, 2),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_list, 2),
  [385] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_list, 2),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumerated_list, 2, .production_id = 2),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
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
