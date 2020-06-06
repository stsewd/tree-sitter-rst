#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 185
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 75
#define ALIAS_COUNT 1
#define TOKEN_COUNT 29
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
  aux_sym_substitution_definition_token1 = 26,
  sym__eol = 27,
  sym__blank_line = 28,
  sym_document = 29,
  sym__body_elements = 30,
  sym_paragraph = 31,
  sym__lists = 32,
  sym_bullet_list = 33,
  sym__bullet_list_item = 34,
  sym_enumerated_list = 35,
  sym__enumerated_list_item = 36,
  sym_field_list = 37,
  sym_field = 38,
  sym__field_body = 39,
  sym_option_list = 40,
  sym_option_list_item = 41,
  sym_line_block = 42,
  sym__single_line_block = 43,
  sym__markup_blocks = 44,
  sym__footnote_block = 45,
  sym_footnote = 46,
  sym__label = 47,
  sym__citation_block = 48,
  sym_citation = 49,
  sym__hyperlink_target_block = 50,
  sym_target = 51,
  sym__reference_name = 52,
  aux_sym__link = 53,
  sym__anoynymous_hyperlink_target_block = 54,
  sym__anonymous_target = 55,
  sym__directive_block = 56,
  sym_directive = 57,
  sym__embed_directive = 58,
  sym__substitution_definition_block = 59,
  sym_substitution_definition = 60,
  aux_sym__line = 61,
  aux_sym_document_repeat1 = 62,
  aux_sym_paragraph_repeat1 = 63,
  aux_sym_bullet_list_repeat1 = 64,
  aux_sym_enumerated_list_repeat1 = 65,
  aux_sym_field_list_repeat1 = 66,
  aux_sym_option_list_repeat1 = 67,
  aux_sym_line_block_repeat1 = 68,
  aux_sym__footnote_block_repeat1 = 69,
  aux_sym__citation_block_repeat1 = 70,
  aux_sym__hyperlink_target_block_repeat1 = 71,
  aux_sym__anoynymous_hyperlink_target_block_repeat1 = 72,
  aux_sym__directive_block_repeat1 = 73,
  aux_sym__substitution_definition_block_repeat1 = 74,
  alias_sym_list_item = 75,
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
  [aux_sym_substitution_definition_token1] = "substitution_definition_token1",
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
  [sym__embed_directive] = "_embed_directive",
  [sym__substitution_definition_block] = "_substitution_definition_block",
  [sym_substitution_definition] = "substitution_definition",
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
  [aux_sym__substitution_definition_block_repeat1] = "_substitution_definition_block_repeat1",
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
  [aux_sym_substitution_definition_token1] = aux_sym_substitution_definition_token1,
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
  [sym__embed_directive] = sym__embed_directive,
  [sym__substitution_definition_block] = sym__substitution_definition_block,
  [sym_substitution_definition] = sym_substitution_definition,
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
  [aux_sym__substitution_definition_block_repeat1] = aux_sym__substitution_definition_block_repeat1,
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
  [aux_sym_substitution_definition_token1] = {
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
  [sym__embed_directive] = {
    .visible = false,
    .named = true,
  },
  [sym__substitution_definition_block] = {
    .visible = false,
    .named = true,
  },
  [sym_substitution_definition] = {
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
  [aux_sym__substitution_definition_block_repeat1] = {
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
      if (eof) ADVANCE(32);
      if (lookahead == '\t') ADVANCE(37);
      if (lookahead == 11) ADVANCE(38);
      if (lookahead == '\f') ADVANCE(39);
      if (lookahead == ' ') ADVANCE(36);
      if (lookahead == '#') ADVANCE(48);
      if (lookahead == '*') ADVANCE(52);
      if (lookahead == '+') ADVANCE(73);
      if (lookahead == '-') ADVANCE(72);
      if (lookahead == '.') ADVANCE(69);
      if (lookahead == '/') ADVANCE(74);
      if (lookahead == ':') ADVANCE(35);
      if (lookahead == '[') ADVANCE(44);
      if (lookahead == ']') ADVANCE(45);
      if (lookahead == '_') ADVANCE(57);
      if (lookahead == '|') ADVANCE(42);
      if (lookahead == 8226 ||
          lookahead == 8227 ||
          lookahead == 8259) ADVANCE(71);
      if (lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'I' ||
          lookahead == 'L' ||
          lookahead == 'M' ||
          lookahead == 'V' ||
          lookahead == 'X') ADVANCE(53);
      if (lookahead == 'c' ||
          lookahead == 'd' ||
          lookahead == 'i' ||
          lookahead == 'l' ||
          lookahead == 'm' ||
          lookahead == 'v' ||
          lookahead == 'x') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(55);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(37);
      if (lookahead == 11) ADVANCE(38);
      if (lookahead == '\f') ADVANCE(39);
      if (lookahead == ' ') ADVANCE(36);
      if (lookahead == ':') ADVANCE(9);
      if (lookahead == '[') ADVANCE(44);
      if (lookahead == ']') ADVANCE(45);
      if (lookahead == '_') ADVANCE(57);
      if (lookahead == '|') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(4);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(49);
      if (lookahead == '*') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 4:
      if (lookahead == '+') ADVANCE(25);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '/') ADVANCE(25);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'I' ||
          lookahead == 'L' ||
          lookahead == 'M' ||
          lookahead == 'V' ||
          lookahead == 'X') ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == 'c' ||
          lookahead == 'd' ||
          lookahead == 'i' ||
          lookahead == 'l' ||
          lookahead == 'm' ||
          lookahead == 'v' ||
          lookahead == 'x') ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == ':') ADVANCE(75);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(13);
      if (lookahead == '_') ADVANCE(10);
      if (lookahead == '`') ADVANCE(61);
      if (lookahead != 0) ADVANCE(59);
      END_STATE();
    case 11:
      if (lookahead == '_') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(61);
      END_STATE();
    case 12:
      if (lookahead == '`') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '_') ADVANCE(62);
      END_STATE();
    case 13:
      if (lookahead == '`') ADVANCE(63);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '|') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f') ADVANCE(21);
      if (lookahead == ' ') ADVANCE(22);
      if (lookahead == ',') ADVANCE(2);
      if (lookahead == '=') ADVANCE(27);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(14);
      END_STATE();
    case 17:
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 18:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(34);
      END_STATE();
    case 19:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(34);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 20:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(43);
      END_STATE();
    case 21:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(41);
      END_STATE();
    case 22:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead == ',') ADVANCE(2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '_') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 28:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 29:
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(40);
      END_STATE();
    case 30:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(14);
      END_STATE();
    case 31:
      if (eof) ADVANCE(32);
      if (lookahead == '#') ADVANCE(65);
      if (lookahead == '*' ||
          lookahead == 8226 ||
          lookahead == 8227 ||
          lookahead == 8259) ADVANCE(71);
      if (lookahead == '+') ADVANCE(73);
      if (lookahead == '-') ADVANCE(72);
      if (lookahead == '.') ADVANCE(69);
      if (lookahead == '/') ADVANCE(74);
      if (lookahead == ':') ADVANCE(35);
      if (lookahead == '_') ADVANCE(70);
      if (lookahead == '|') ADVANCE(42);
      if (lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'I' ||
          lookahead == 'L' ||
          lookahead == 'M' ||
          lookahead == 'V' ||
          lookahead == 'X') ADVANCE(66);
      if (lookahead == 'c' ||
          lookahead == 'd' ||
          lookahead == 'i' ||
          lookahead == 'l' ||
          lookahead == 'm' ||
          lookahead == 'v' ||
          lookahead == 'x') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(65);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym__char_bullet);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym__numeric_bullet);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_TAB);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_3);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym__field_name);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_option_list_item_token1);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym__markup_start);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '.') ADVANCE(18);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym__label_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(33);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym__citation_label);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(17);
      if (lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'I' ||
          lookahead == 'L' ||
          lookahead == 'M' ||
          lookahead == 'V' ||
          lookahead == 'X') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym__citation_label);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(17);
      if (lookahead == 'c' ||
          lookahead == 'd' ||
          lookahead == 'i' ||
          lookahead == 'l' ||
          lookahead == 'm' ||
          lookahead == 'v' ||
          lookahead == 'x') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym__citation_label);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym__citation_label);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '_') ADVANCE(58);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym___);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym__reference_name_token1);
      if (lookahead == ':') ADVANCE(13);
      if (lookahead == '_') ADVANCE(10);
      if (lookahead == '`') ADVANCE(61);
      if (lookahead != 0) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym__reference_name_token1);
      if (lookahead == ':') ADVANCE(13);
      if (lookahead == '`') ADVANCE(11);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym__reference_name_token1);
      if (lookahead == '_') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym__reference_name_token1);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(11);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym__reference_name_token2);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym__link_token1);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym__link_token1);
      if (lookahead == '.') ADVANCE(18);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym__link_token1);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'I' ||
          lookahead == 'L' ||
          lookahead == 'M' ||
          lookahead == 'V' ||
          lookahead == 'X') ADVANCE(6);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym__link_token1);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == 'c' ||
          lookahead == 'd' ||
          lookahead == 'i' ||
          lookahead == 'l' ||
          lookahead == 'm' ||
          lookahead == 'v' ||
          lookahead == 'x') ADVANCE(7);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym__link_token1);
      if (lookahead == '.') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym__link_token1);
      if (lookahead == '.') ADVANCE(20);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym__link_token1);
      if (lookahead == '_') ADVANCE(58);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym__link_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(33);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym__link_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(33);
      if (lookahead == '-') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym__link_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym__link_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym__type);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '_') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_substitution_definition_token1);
      if (lookahead == '|') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(14);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 31, .external_lex_state = 1},
  [2] = {.lex_state = 31, .external_lex_state = 1},
  [3] = {.lex_state = 31, .external_lex_state = 1},
  [4] = {.lex_state = 31, .external_lex_state = 1},
  [5] = {.lex_state = 1, .external_lex_state = 2},
  [6] = {.lex_state = 3, .external_lex_state = 2},
  [7] = {.lex_state = 1, .external_lex_state = 1},
  [8] = {.lex_state = 1, .external_lex_state = 1},
  [9] = {.lex_state = 1, .external_lex_state = 1},
  [10] = {.lex_state = 3, .external_lex_state = 2},
  [11] = {.lex_state = 3, .external_lex_state = 2},
  [12] = {.lex_state = 1, .external_lex_state = 1},
  [13] = {.lex_state = 1, .external_lex_state = 1},
  [14] = {.lex_state = 1, .external_lex_state = 2},
  [15] = {.lex_state = 1, .external_lex_state = 2},
  [16] = {.lex_state = 1, .external_lex_state = 2},
  [17] = {.lex_state = 1, .external_lex_state = 2},
  [18] = {.lex_state = 1, .external_lex_state = 2},
  [19] = {.lex_state = 1, .external_lex_state = 2},
  [20] = {.lex_state = 1, .external_lex_state = 2},
  [21] = {.lex_state = 1, .external_lex_state = 2},
  [22] = {.lex_state = 1, .external_lex_state = 2},
  [23] = {.lex_state = 1, .external_lex_state = 2},
  [24] = {.lex_state = 1, .external_lex_state = 2},
  [25] = {.lex_state = 1, .external_lex_state = 2},
  [26] = {.lex_state = 1, .external_lex_state = 2},
  [27] = {.lex_state = 28, .external_lex_state = 1},
  [28] = {.lex_state = 28, .external_lex_state = 1},
  [29] = {.lex_state = 0, .external_lex_state = 2},
  [30] = {.lex_state = 0, .external_lex_state = 2},
  [31] = {.lex_state = 0, .external_lex_state = 2},
  [32] = {.lex_state = 0, .external_lex_state = 2},
  [33] = {.lex_state = 0, .external_lex_state = 2},
  [34] = {.lex_state = 0, .external_lex_state = 2},
  [35] = {.lex_state = 0, .external_lex_state = 2},
  [36] = {.lex_state = 28, .external_lex_state = 1},
  [37] = {.lex_state = 28, .external_lex_state = 1},
  [38] = {.lex_state = 28, .external_lex_state = 1},
  [39] = {.lex_state = 28, .external_lex_state = 1},
  [40] = {.lex_state = 28, .external_lex_state = 1},
  [41] = {.lex_state = 12, .external_lex_state = 2},
  [42] = {.lex_state = 12, .external_lex_state = 2},
  [43] = {.lex_state = 0, .external_lex_state = 2},
  [44] = {.lex_state = 31, .external_lex_state = 2},
  [45] = {.lex_state = 31, .external_lex_state = 2},
  [46] = {.lex_state = 28, .external_lex_state = 2},
  [47] = {.lex_state = 28, .external_lex_state = 1},
  [48] = {.lex_state = 0, .external_lex_state = 2},
  [49] = {.lex_state = 28, .external_lex_state = 2},
  [50] = {.lex_state = 28, .external_lex_state = 1},
  [51] = {.lex_state = 28, .external_lex_state = 1},
  [52] = {.lex_state = 28, .external_lex_state = 1},
  [53] = {.lex_state = 28, .external_lex_state = 1},
  [54] = {.lex_state = 28, .external_lex_state = 1},
  [55] = {.lex_state = 0, .external_lex_state = 2},
  [56] = {.lex_state = 0, .external_lex_state = 2},
  [57] = {.lex_state = 0, .external_lex_state = 2},
  [58] = {.lex_state = 0, .external_lex_state = 2},
  [59] = {.lex_state = 0, .external_lex_state = 2},
  [60] = {.lex_state = 0, .external_lex_state = 2},
  [61] = {.lex_state = 28, .external_lex_state = 1},
  [62] = {.lex_state = 28, .external_lex_state = 2},
  [63] = {.lex_state = 28, .external_lex_state = 1},
  [64] = {.lex_state = 28, .external_lex_state = 2},
  [65] = {.lex_state = 0, .external_lex_state = 2},
  [66] = {.lex_state = 31, .external_lex_state = 2},
  [67] = {.lex_state = 0, .external_lex_state = 2},
  [68] = {.lex_state = 31, .external_lex_state = 2},
  [69] = {.lex_state = 0, .external_lex_state = 2},
  [70] = {.lex_state = 28, .external_lex_state = 2},
  [71] = {.lex_state = 28, .external_lex_state = 2},
  [72] = {.lex_state = 28, .external_lex_state = 2},
  [73] = {.lex_state = 28, .external_lex_state = 2},
  [74] = {.lex_state = 1, .external_lex_state = 2},
  [75] = {.lex_state = 1, .external_lex_state = 2},
  [76] = {.lex_state = 1, .external_lex_state = 2},
  [77] = {.lex_state = 28, .external_lex_state = 2},
  [78] = {.lex_state = 28, .external_lex_state = 2},
  [79] = {.lex_state = 28, .external_lex_state = 2},
  [80] = {.lex_state = 28, .external_lex_state = 2},
  [81] = {.lex_state = 28, .external_lex_state = 2},
  [82] = {.lex_state = 28, .external_lex_state = 2},
  [83] = {.lex_state = 28, .external_lex_state = 2},
  [84] = {.lex_state = 1, .external_lex_state = 2},
  [85] = {.lex_state = 28, .external_lex_state = 2},
  [86] = {.lex_state = 28, .external_lex_state = 2},
  [87] = {.lex_state = 1, .external_lex_state = 2},
  [88] = {.lex_state = 28, .external_lex_state = 2},
  [89] = {.lex_state = 28, .external_lex_state = 2},
  [90] = {.lex_state = 28, .external_lex_state = 2},
  [91] = {.lex_state = 28, .external_lex_state = 2},
  [92] = {.lex_state = 28, .external_lex_state = 2},
  [93] = {.lex_state = 28, .external_lex_state = 2},
  [94] = {.lex_state = 28, .external_lex_state = 2},
  [95] = {.lex_state = 28, .external_lex_state = 2},
  [96] = {.lex_state = 28, .external_lex_state = 2},
  [97] = {.lex_state = 28, .external_lex_state = 2},
  [98] = {.lex_state = 28, .external_lex_state = 2},
  [99] = {.lex_state = 1, .external_lex_state = 2},
  [100] = {.lex_state = 28, .external_lex_state = 2},
  [101] = {.lex_state = 28, .external_lex_state = 2},
  [102] = {.lex_state = 28, .external_lex_state = 2},
  [103] = {.lex_state = 28, .external_lex_state = 2},
  [104] = {.lex_state = 28, .external_lex_state = 2},
  [105] = {.lex_state = 28, .external_lex_state = 2},
  [106] = {.lex_state = 28, .external_lex_state = 2},
  [107] = {.lex_state = 28, .external_lex_state = 2},
  [108] = {.lex_state = 28, .external_lex_state = 2},
  [109] = {.lex_state = 28, .external_lex_state = 2},
  [110] = {.lex_state = 0, .external_lex_state = 1},
  [111] = {.lex_state = 0, .external_lex_state = 2},
  [112] = {.lex_state = 1, .external_lex_state = 2},
  [113] = {.lex_state = 1, .external_lex_state = 2},
  [114] = {.lex_state = 29, .external_lex_state = 2},
  [115] = {.lex_state = 31, .external_lex_state = 2},
  [116] = {.lex_state = 31, .external_lex_state = 2},
  [117] = {.lex_state = 0, .external_lex_state = 1},
  [118] = {.lex_state = 1, .external_lex_state = 2},
  [119] = {.lex_state = 26, .external_lex_state = 2},
  [120] = {.lex_state = 0, .external_lex_state = 2},
  [121] = {.lex_state = 0, .external_lex_state = 1},
  [122] = {.lex_state = 0, .external_lex_state = 2},
  [123] = {.lex_state = 0, .external_lex_state = 1},
  [124] = {.lex_state = 0, .external_lex_state = 2},
  [125] = {.lex_state = 1, .external_lex_state = 2},
  [126] = {.lex_state = 1, .external_lex_state = 2},
  [127] = {.lex_state = 1, .external_lex_state = 2},
  [128] = {.lex_state = 0, .external_lex_state = 2},
  [129] = {.lex_state = 0, .external_lex_state = 1},
  [130] = {.lex_state = 0, .external_lex_state = 1},
  [131] = {.lex_state = 0, .external_lex_state = 1},
  [132] = {.lex_state = 0, .external_lex_state = 1},
  [133] = {.lex_state = 0, .external_lex_state = 1},
  [134] = {.lex_state = 0, .external_lex_state = 1},
  [135] = {.lex_state = 29, .external_lex_state = 2},
  [136] = {.lex_state = 0, .external_lex_state = 2},
  [137] = {.lex_state = 0, .external_lex_state = 2},
  [138] = {.lex_state = 0, .external_lex_state = 2},
  [139] = {.lex_state = 0, .external_lex_state = 2},
  [140] = {.lex_state = 0, .external_lex_state = 2},
  [141] = {.lex_state = 0, .external_lex_state = 2},
  [142] = {.lex_state = 0, .external_lex_state = 1},
  [143] = {.lex_state = 0, .external_lex_state = 1},
  [144] = {.lex_state = 0, .external_lex_state = 2},
  [145] = {.lex_state = 0, .external_lex_state = 1},
  [146] = {.lex_state = 26, .external_lex_state = 2},
  [147] = {.lex_state = 0, .external_lex_state = 2},
  [148] = {.lex_state = 1, .external_lex_state = 2},
  [149] = {.lex_state = 0, .external_lex_state = 1},
  [150] = {.lex_state = 0, .external_lex_state = 2},
  [151] = {.lex_state = 28, .external_lex_state = 2},
  [152] = {.lex_state = 0, .external_lex_state = 1},
  [153] = {.lex_state = 1, .external_lex_state = 2},
  [154] = {.lex_state = 0, .external_lex_state = 1},
  [155] = {.lex_state = 0, .external_lex_state = 2},
  [156] = {.lex_state = 0, .external_lex_state = 1},
  [157] = {.lex_state = 0, .external_lex_state = 1},
  [158] = {.lex_state = 0, .external_lex_state = 1},
  [159] = {.lex_state = 1, .external_lex_state = 2},
  [160] = {.lex_state = 0, .external_lex_state = 1},
  [161] = {.lex_state = 1, .external_lex_state = 2},
  [162] = {.lex_state = 0, .external_lex_state = 1},
  [163] = {.lex_state = 0, .external_lex_state = 1},
  [164] = {.lex_state = 1, .external_lex_state = 2},
  [165] = {.lex_state = 1, .external_lex_state = 2},
  [166] = {.lex_state = 0, .external_lex_state = 1},
  [167] = {.lex_state = 0, .external_lex_state = 1},
  [168] = {.lex_state = 0, .external_lex_state = 1},
  [169] = {.lex_state = 0, .external_lex_state = 1},
  [170] = {.lex_state = 0, .external_lex_state = 2},
  [171] = {.lex_state = 0, .external_lex_state = 2},
  [172] = {.lex_state = 0, .external_lex_state = 2},
  [173] = {.lex_state = 0, .external_lex_state = 2},
  [174] = {.lex_state = 0, .external_lex_state = 2},
  [175] = {.lex_state = 0, .external_lex_state = 2},
  [176] = {.lex_state = 0, .external_lex_state = 2},
  [177] = {.lex_state = 0, .external_lex_state = 2},
  [178] = {.lex_state = 0, .external_lex_state = 2},
  [179] = {.lex_state = 0, .external_lex_state = 2},
  [180] = {.lex_state = 0, .external_lex_state = 2},
  [181] = {.lex_state = 0, .external_lex_state = 2},
  [182] = {.lex_state = 0, .external_lex_state = 2},
  [183] = {.lex_state = 0, .external_lex_state = 2},
  [184] = {.lex_state = 0, .external_lex_state = 2},
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
    [sym_document] = STATE(147),
    [sym__body_elements] = STATE(2),
    [sym_paragraph] = STATE(149),
    [sym__lists] = STATE(149),
    [sym_bullet_list] = STATE(149),
    [sym__bullet_list_item] = STATE(169),
    [sym_enumerated_list] = STATE(149),
    [sym__enumerated_list_item] = STATE(110),
    [sym_field_list] = STATE(149),
    [sym_field] = STATE(145),
    [sym_option_list] = STATE(149),
    [sym_option_list_item] = STATE(143),
    [sym_line_block] = STATE(149),
    [sym__single_line_block] = STATE(142),
    [sym__markup_blocks] = STATE(149),
    [sym__footnote_block] = STATE(149),
    [sym_footnote] = STATE(134),
    [sym__citation_block] = STATE(149),
    [sym_citation] = STATE(133),
    [sym__hyperlink_target_block] = STATE(149),
    [sym_target] = STATE(132),
    [sym__anoynymous_hyperlink_target_block] = STATE(149),
    [sym__anonymous_target] = STATE(131),
    [sym__directive_block] = STATE(149),
    [sym_directive] = STATE(130),
    [sym__substitution_definition_block] = STATE(149),
    [sym_substitution_definition] = STATE(129),
    [aux_sym__line] = STATE(47),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_paragraph_repeat1] = STATE(46),
    [aux_sym_bullet_list_repeat1] = STATE(45),
    [aux_sym_enumerated_list_repeat1] = STATE(44),
    [aux_sym_field_list_repeat1] = STATE(43),
    [aux_sym_option_list_repeat1] = STATE(48),
    [aux_sym_line_block_repeat1] = STATE(29),
    [aux_sym__footnote_block_repeat1] = STATE(30),
    [aux_sym__citation_block_repeat1] = STATE(31),
    [aux_sym__hyperlink_target_block_repeat1] = STATE(32),
    [aux_sym__anoynymous_hyperlink_target_block_repeat1] = STATE(33),
    [aux_sym__directive_block_repeat1] = STATE(34),
    [aux_sym__substitution_definition_block_repeat1] = STATE(35),
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
    [sym_paragraph] = STATE(149),
    [sym__lists] = STATE(149),
    [sym_bullet_list] = STATE(149),
    [sym__bullet_list_item] = STATE(169),
    [sym_enumerated_list] = STATE(149),
    [sym__enumerated_list_item] = STATE(110),
    [sym_field_list] = STATE(149),
    [sym_field] = STATE(145),
    [sym_option_list] = STATE(149),
    [sym_option_list_item] = STATE(143),
    [sym_line_block] = STATE(149),
    [sym__single_line_block] = STATE(142),
    [sym__markup_blocks] = STATE(149),
    [sym__footnote_block] = STATE(149),
    [sym_footnote] = STATE(134),
    [sym__citation_block] = STATE(149),
    [sym_citation] = STATE(133),
    [sym__hyperlink_target_block] = STATE(149),
    [sym_target] = STATE(132),
    [sym__anoynymous_hyperlink_target_block] = STATE(149),
    [sym__anonymous_target] = STATE(131),
    [sym__directive_block] = STATE(149),
    [sym_directive] = STATE(130),
    [sym__substitution_definition_block] = STATE(149),
    [sym_substitution_definition] = STATE(129),
    [aux_sym__line] = STATE(47),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_paragraph_repeat1] = STATE(46),
    [aux_sym_bullet_list_repeat1] = STATE(45),
    [aux_sym_enumerated_list_repeat1] = STATE(44),
    [aux_sym_field_list_repeat1] = STATE(43),
    [aux_sym_option_list_repeat1] = STATE(48),
    [aux_sym_line_block_repeat1] = STATE(29),
    [aux_sym__footnote_block_repeat1] = STATE(30),
    [aux_sym__citation_block_repeat1] = STATE(31),
    [aux_sym__hyperlink_target_block_repeat1] = STATE(32),
    [aux_sym__anoynymous_hyperlink_target_block_repeat1] = STATE(33),
    [aux_sym__directive_block_repeat1] = STATE(34),
    [aux_sym__substitution_definition_block_repeat1] = STATE(35),
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
    [sym_paragraph] = STATE(149),
    [sym__lists] = STATE(149),
    [sym_bullet_list] = STATE(149),
    [sym__bullet_list_item] = STATE(169),
    [sym_enumerated_list] = STATE(149),
    [sym__enumerated_list_item] = STATE(110),
    [sym_field_list] = STATE(149),
    [sym_field] = STATE(145),
    [sym_option_list] = STATE(149),
    [sym_option_list_item] = STATE(143),
    [sym_line_block] = STATE(149),
    [sym__single_line_block] = STATE(142),
    [sym__markup_blocks] = STATE(149),
    [sym__footnote_block] = STATE(149),
    [sym_footnote] = STATE(134),
    [sym__citation_block] = STATE(149),
    [sym_citation] = STATE(133),
    [sym__hyperlink_target_block] = STATE(149),
    [sym_target] = STATE(132),
    [sym__anoynymous_hyperlink_target_block] = STATE(149),
    [sym__anonymous_target] = STATE(131),
    [sym__directive_block] = STATE(149),
    [sym_directive] = STATE(130),
    [sym__substitution_definition_block] = STATE(149),
    [sym_substitution_definition] = STATE(129),
    [aux_sym__line] = STATE(47),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_paragraph_repeat1] = STATE(46),
    [aux_sym_bullet_list_repeat1] = STATE(45),
    [aux_sym_enumerated_list_repeat1] = STATE(44),
    [aux_sym_field_list_repeat1] = STATE(43),
    [aux_sym_option_list_repeat1] = STATE(48),
    [aux_sym_line_block_repeat1] = STATE(29),
    [aux_sym__footnote_block_repeat1] = STATE(30),
    [aux_sym__citation_block_repeat1] = STATE(31),
    [aux_sym__hyperlink_target_block_repeat1] = STATE(32),
    [aux_sym__anoynymous_hyperlink_target_block_repeat1] = STATE(33),
    [aux_sym__directive_block_repeat1] = STATE(34),
    [aux_sym__substitution_definition_block_repeat1] = STATE(35),
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
  [18] = 7,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(62), 1,
      anon_sym_LBRACK,
    ACTIONS(64), 1,
      anon_sym__,
    ACTIONS(66), 1,
      anon_sym___,
    ACTIONS(68), 1,
      sym__type,
    ACTIONS(70), 1,
      aux_sym_substitution_definition_token1,
    STATE(117), 1,
      sym__embed_directive,
  [40] = 5,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(76), 1,
      sym__citation_label,
    STATE(148), 1,
      sym__label,
    ACTIONS(72), 2,
      aux_sym__label_token1,
      anon_sym_POUND,
    ACTIONS(74), 2,
      aux_sym__label_token2,
      anon_sym_STAR,
  [58] = 2,
    ACTIONS(80), 2,
      sym__eol,
      sym__blank_line,
    ACTIONS(78), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [69] = 2,
    ACTIONS(84), 2,
      sym__eol,
      sym__blank_line,
    ACTIONS(82), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [80] = 2,
    ACTIONS(88), 2,
      sym__eol,
      sym__blank_line,
    ACTIONS(86), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [91] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(92), 1,
      anon_sym_POUND,
    STATE(125), 1,
      sym__label,
    ACTIONS(90), 3,
      aux_sym__label_token1,
      aux_sym__label_token2,
      anon_sym_STAR,
  [106] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(72), 1,
      anon_sym_POUND,
    STATE(148), 1,
      sym__label,
    ACTIONS(74), 3,
      aux_sym__label_token1,
      aux_sym__label_token2,
      anon_sym_STAR,
  [121] = 2,
    ACTIONS(96), 2,
      sym__eol,
      sym__blank_line,
    ACTIONS(94), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [132] = 2,
    ACTIONS(100), 2,
      sym__eol,
      sym__blank_line,
    ACTIONS(98), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [143] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(102), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [153] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(104), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [163] = 2,
    ACTIONS(100), 1,
      sym__eol,
    ACTIONS(106), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [173] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(108), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [183] = 2,
    ACTIONS(80), 1,
      sym__eol,
    ACTIONS(110), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [193] = 2,
    ACTIONS(88), 1,
      sym__eol,
    ACTIONS(112), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [203] = 2,
    ACTIONS(84), 1,
      sym__eol,
    ACTIONS(114), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [213] = 2,
    ACTIONS(96), 1,
      sym__eol,
    ACTIONS(116), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [223] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(118), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [233] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(120), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [243] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(122), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [253] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(124), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [263] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(126), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [273] = 3,
    ACTIONS(128), 1,
      aux_sym__link_token1,
    STATE(40), 1,
      aux_sym__link,
    ACTIONS(130), 2,
      sym__eol,
      sym__blank_line,
  [284] = 3,
    ACTIONS(128), 1,
      aux_sym__link_token1,
    STATE(40), 1,
      aux_sym__link,
    ACTIONS(132), 2,
      sym__eol,
      sym__blank_line,
  [295] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(15), 1,
      anon_sym_PIPE,
    STATE(60), 1,
      aux_sym_line_block_repeat1,
    STATE(162), 1,
      sym__single_line_block,
  [308] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(134), 1,
      sym__markup_start,
    STATE(69), 1,
      aux_sym__footnote_block_repeat1,
    STATE(160), 1,
      sym_footnote,
  [321] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(136), 1,
      sym__markup_start,
    STATE(65), 1,
      aux_sym__citation_block_repeat1,
    STATE(158), 1,
      sym_citation,
  [334] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(138), 1,
      sym__markup_start,
    STATE(59), 1,
      aux_sym__hyperlink_target_block_repeat1,
    STATE(157), 1,
      sym_target,
  [347] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(19), 1,
      anon_sym___,
    STATE(57), 1,
      aux_sym__anoynymous_hyperlink_target_block_repeat1,
    STATE(156), 1,
      sym__anonymous_target,
  [360] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(140), 1,
      sym__markup_start,
    STATE(67), 1,
      aux_sym__directive_block_repeat1,
    STATE(154), 1,
      sym_directive,
  [373] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(142), 1,
      sym__markup_start,
    STATE(56), 1,
      aux_sym__substitution_definition_block_repeat1,
    STATE(152), 1,
      sym_substitution_definition,
  [386] = 3,
    ACTIONS(144), 1,
      aux_sym__link_token1,
    STATE(61), 1,
      aux_sym__line,
    ACTIONS(146), 2,
      sym__eol,
      sym__blank_line,
  [397] = 3,
    ACTIONS(144), 1,
      aux_sym__link_token1,
    STATE(61), 1,
      aux_sym__line,
    ACTIONS(148), 2,
      sym__eol,
      sym__blank_line,
  [408] = 3,
    ACTIONS(144), 1,
      aux_sym__link_token1,
    STATE(61), 1,
      aux_sym__line,
    ACTIONS(150), 2,
      sym__eol,
      sym__blank_line,
  [419] = 3,
    ACTIONS(144), 1,
      aux_sym__link_token1,
    STATE(61), 1,
      aux_sym__line,
    ACTIONS(152), 2,
      sym__eol,
      sym__blank_line,
  [430] = 3,
    ACTIONS(154), 1,
      aux_sym__link_token1,
    STATE(40), 1,
      aux_sym__link,
    ACTIONS(157), 2,
      sym__eol,
      sym__blank_line,
  [441] = 3,
    ACTIONS(3), 1,
      sym__eol,
    STATE(170), 1,
      sym__reference_name,
    ACTIONS(159), 2,
      aux_sym__reference_name_token1,
      aux_sym__reference_name_token2,
  [452] = 3,
    ACTIONS(3), 1,
      sym__eol,
    STATE(141), 1,
      sym__reference_name,
    ACTIONS(161), 2,
      aux_sym__reference_name_token1,
      aux_sym__reference_name_token2,
  [463] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(11), 1,
      anon_sym_COLON,
    STATE(55), 1,
      aux_sym_field_list_repeat1,
    STATE(166), 1,
      sym_field,
  [476] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(9), 1,
      sym__numeric_bullet,
    STATE(68), 1,
      aux_sym_enumerated_list_repeat1,
    STATE(167), 1,
      sym__enumerated_list_item,
  [489] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(7), 1,
      sym__char_bullet,
    STATE(66), 1,
      aux_sym_bullet_list_repeat1,
    STATE(168), 1,
      sym__bullet_list_item,
  [502] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(163), 1,
      aux_sym__link_token1,
    STATE(63), 1,
      aux_sym__line,
    STATE(64), 1,
      aux_sym_paragraph_repeat1,
  [515] = 4,
    ACTIONS(144), 1,
      aux_sym__link_token1,
    ACTIONS(165), 1,
      sym__eol,
    ACTIONS(167), 1,
      sym__blank_line,
    STATE(61), 1,
      aux_sym__line,
  [528] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(13), 1,
      aux_sym_option_list_item_token1,
    STATE(58), 1,
      aux_sym_option_list_repeat1,
    STATE(163), 1,
      sym_option_list_item,
  [541] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(169), 1,
      aux_sym__link_token1,
    STATE(38), 1,
      aux_sym__line,
    STATE(123), 1,
      sym__field_body,
  [554] = 3,
    ACTIONS(144), 1,
      aux_sym__link_token1,
    STATE(61), 1,
      aux_sym__line,
    ACTIONS(171), 2,
      sym__eol,
      sym__blank_line,
  [565] = 3,
    ACTIONS(128), 1,
      aux_sym__link_token1,
    STATE(40), 1,
      aux_sym__link,
    ACTIONS(173), 2,
      sym__eol,
      sym__blank_line,
  [576] = 3,
    ACTIONS(144), 1,
      aux_sym__link_token1,
    STATE(61), 1,
      aux_sym__line,
    ACTIONS(175), 2,
      sym__eol,
      sym__blank_line,
  [587] = 3,
    ACTIONS(144), 1,
      aux_sym__link_token1,
    STATE(61), 1,
      aux_sym__line,
    ACTIONS(177), 2,
      sym__eol,
      sym__blank_line,
  [598] = 3,
    ACTIONS(144), 1,
      aux_sym__link_token1,
    STATE(61), 1,
      aux_sym__line,
    ACTIONS(179), 2,
      sym__eol,
      sym__blank_line,
  [609] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(181), 1,
      anon_sym_COLON,
    STATE(55), 1,
      aux_sym_field_list_repeat1,
    STATE(177), 1,
      sym_field,
  [622] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(184), 1,
      sym__markup_start,
    STATE(56), 1,
      aux_sym__substitution_definition_block_repeat1,
    STATE(182), 1,
      sym_substitution_definition,
  [635] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(187), 1,
      anon_sym___,
    STATE(57), 1,
      aux_sym__anoynymous_hyperlink_target_block_repeat1,
    STATE(184), 1,
      sym__anonymous_target,
  [648] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(190), 1,
      aux_sym_option_list_item_token1,
    STATE(58), 1,
      aux_sym_option_list_repeat1,
    STATE(178), 1,
      sym_option_list_item,
  [661] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(193), 1,
      sym__markup_start,
    STATE(59), 1,
      aux_sym__hyperlink_target_block_repeat1,
    STATE(173), 1,
      sym_target,
  [674] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(196), 1,
      anon_sym_PIPE,
    STATE(60), 1,
      aux_sym_line_block_repeat1,
    STATE(179), 1,
      sym__single_line_block,
  [687] = 3,
    ACTIONS(199), 1,
      aux_sym__link_token1,
    STATE(61), 1,
      aux_sym__line,
    ACTIONS(202), 2,
      sym__eol,
      sym__blank_line,
  [698] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(204), 1,
      aux_sym__link_token1,
    STATE(90), 1,
      aux_sym__line,
    STATE(171), 1,
      sym__field_body,
  [711] = 4,
    ACTIONS(144), 1,
      aux_sym__link_token1,
    ACTIONS(165), 1,
      sym__eol,
    ACTIONS(206), 1,
      sym__blank_line,
    STATE(61), 1,
      aux_sym__line,
  [724] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(208), 1,
      aux_sym__link_token1,
    STATE(64), 1,
      aux_sym_paragraph_repeat1,
    STATE(101), 1,
      aux_sym__line,
  [737] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(211), 1,
      sym__markup_start,
    STATE(65), 1,
      aux_sym__citation_block_repeat1,
    STATE(181), 1,
      sym_citation,
  [750] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(214), 1,
      sym__char_bullet,
    STATE(66), 1,
      aux_sym_bullet_list_repeat1,
    STATE(175), 1,
      sym__bullet_list_item,
  [763] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(217), 1,
      sym__markup_start,
    STATE(67), 1,
      aux_sym__directive_block_repeat1,
    STATE(183), 1,
      sym_directive,
  [776] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(220), 1,
      sym__numeric_bullet,
    STATE(68), 1,
      aux_sym_enumerated_list_repeat1,
    STATE(176), 1,
      sym__enumerated_list_item,
  [789] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(223), 1,
      sym__markup_start,
    STATE(69), 1,
      aux_sym__footnote_block_repeat1,
    STATE(180), 1,
      sym_footnote,
  [802] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(226), 1,
      aux_sym__link_token1,
    STATE(51), 1,
      aux_sym__link,
  [812] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(228), 1,
      aux_sym__link_token1,
    STATE(81), 1,
      aux_sym__link,
  [822] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(230), 1,
      aux_sym__link_token1,
    STATE(37), 1,
      aux_sym__line,
  [832] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(232), 1,
      aux_sym__link_token1,
    STATE(39), 1,
      aux_sym__line,
  [842] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(234), 1,
      sym__type,
    STATE(172), 1,
      sym__embed_directive,
  [852] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(234), 1,
      sym__type,
    STATE(174), 1,
      sym__embed_directive,
  [862] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(236), 1,
      anon_sym__,
    ACTIONS(238), 1,
      anon_sym___,
  [872] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(240), 1,
      aux_sym__link_token1,
    STATE(95), 1,
      aux_sym__link,
  [882] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(242), 1,
      aux_sym__link_token1,
    STATE(100), 1,
      aux_sym__line,
  [892] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(244), 1,
      aux_sym__link_token1,
    STATE(102), 1,
      aux_sym__line,
  [902] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(246), 1,
      aux_sym__link_token1,
    STATE(103), 1,
      aux_sym__line,
  [912] = 3,
    ACTIONS(130), 1,
      sym__eol,
    ACTIONS(248), 1,
      aux_sym__link_token1,
    STATE(92), 1,
      aux_sym__link,
  [922] = 3,
    ACTIONS(177), 1,
      sym__eol,
    ACTIONS(250), 1,
      aux_sym__link_token1,
    STATE(97), 1,
      aux_sym__line,
  [932] = 3,
    ACTIONS(175), 1,
      sym__eol,
    ACTIONS(250), 1,
      aux_sym__link_token1,
    STATE(97), 1,
      aux_sym__line,
  [942] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(64), 1,
      anon_sym__,
    ACTIONS(66), 1,
      anon_sym___,
  [952] = 3,
    ACTIONS(171), 1,
      sym__eol,
    ACTIONS(250), 1,
      aux_sym__link_token1,
    STATE(97), 1,
      aux_sym__line,
  [962] = 3,
    ACTIONS(132), 1,
      sym__eol,
    ACTIONS(248), 1,
      aux_sym__link_token1,
    STATE(92), 1,
      aux_sym__link,
  [972] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(68), 1,
      sym__type,
    STATE(117), 1,
      sym__embed_directive,
  [982] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(252), 1,
      aux_sym__link_token1,
    STATE(82), 1,
      aux_sym__line,
  [992] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(254), 1,
      aux_sym__link_token1,
    STATE(83), 1,
      aux_sym__line,
  [1002] = 3,
    ACTIONS(150), 1,
      sym__eol,
    ACTIONS(250), 1,
      aux_sym__link_token1,
    STATE(97), 1,
      aux_sym__line,
  [1012] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(256), 1,
      aux_sym__link_token1,
    STATE(36), 1,
      aux_sym__line,
  [1022] = 3,
    ACTIONS(157), 1,
      sym__eol,
    ACTIONS(258), 1,
      aux_sym__link_token1,
    STATE(92), 1,
      aux_sym__link,
  [1032] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(261), 1,
      aux_sym__link_token1,
    STATE(85), 1,
      aux_sym__line,
  [1042] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(263), 1,
      aux_sym__link_token1,
    STATE(86), 1,
      aux_sym__link,
  [1052] = 3,
    ACTIONS(173), 1,
      sym__eol,
    ACTIONS(248), 1,
      aux_sym__link_token1,
    STATE(92), 1,
      aux_sym__link,
  [1062] = 3,
    ACTIONS(179), 1,
      sym__eol,
    ACTIONS(250), 1,
      aux_sym__link_token1,
    STATE(97), 1,
      aux_sym__line,
  [1072] = 3,
    ACTIONS(202), 1,
      sym__eol,
    ACTIONS(265), 1,
      aux_sym__link_token1,
    STATE(97), 1,
      aux_sym__line,
  [1082] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(268), 1,
      aux_sym__link_token1,
    STATE(96), 1,
      aux_sym__line,
  [1092] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(68), 1,
      sym__type,
    STATE(121), 1,
      sym__embed_directive,
  [1102] = 3,
    ACTIONS(152), 1,
      sym__eol,
    ACTIONS(250), 1,
      aux_sym__link_token1,
    STATE(97), 1,
      aux_sym__line,
  [1112] = 3,
    ACTIONS(165), 1,
      sym__eol,
    ACTIONS(250), 1,
      aux_sym__link_token1,
    STATE(97), 1,
      aux_sym__line,
  [1122] = 3,
    ACTIONS(148), 1,
      sym__eol,
    ACTIONS(250), 1,
      aux_sym__link_token1,
    STATE(97), 1,
      aux_sym__line,
  [1132] = 3,
    ACTIONS(146), 1,
      sym__eol,
    ACTIONS(250), 1,
      aux_sym__link_token1,
    STATE(97), 1,
      aux_sym__line,
  [1142] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(270), 1,
      aux_sym__link_token1,
    STATE(27), 1,
      aux_sym__link,
  [1152] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(272), 1,
      aux_sym__link_token1,
    STATE(53), 1,
      aux_sym__line,
  [1162] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(274), 1,
      aux_sym__link_token1,
    STATE(52), 1,
      aux_sym__line,
  [1172] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(276), 1,
      aux_sym__link_token1,
    STATE(54), 1,
      aux_sym__line,
  [1182] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(278), 1,
      aux_sym__link_token1,
    STATE(50), 1,
      aux_sym__line,
  [1192] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(280), 1,
      aux_sym__link_token1,
    STATE(28), 1,
      aux_sym__link,
  [1202] = 2,
    ACTIONS(282), 1,
      sym__eol,
    ACTIONS(284), 1,
      sym__blank_line,
  [1209] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(286), 1,
      anon_sym_COLON,
  [1216] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(288), 1,
      anon_sym_LBRACK,
  [1223] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(290), 1,
      anon_sym_LBRACK,
  [1230] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(292), 1,
      sym__field_name,
  [1237] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(294), 1,
      sym__numeric_bullet,
  [1244] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(296), 1,
      sym__char_bullet,
  [1251] = 1,
    ACTIONS(298), 2,
      sym__eol,
      sym__blank_line,
  [1256] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(300), 1,
      anon_sym_COLON_COLON,
  [1263] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(302), 1,
      sym__citation_label,
  [1270] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(304), 1,
      sym__markup_start,
  [1277] = 1,
    ACTIONS(306), 2,
      sym__eol,
      sym__blank_line,
  [1282] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(308), 1,
      anon_sym_COLON,
  [1289] = 1,
    ACTIONS(310), 2,
      sym__eol,
      sym__blank_line,
  [1294] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(312), 1,
      anon_sym_COLON,
  [1301] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(314), 1,
      anon_sym_RBRACK,
  [1308] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(316), 1,
      anon_sym_RBRACK,
  [1315] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(318), 1,
      aux_sym_substitution_definition_token1,
  [1322] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(320), 1,
      anon_sym_COLON,
  [1329] = 2,
    ACTIONS(322), 1,
      sym__eol,
    ACTIONS(324), 1,
      sym__blank_line,
  [1336] = 2,
    ACTIONS(326), 1,
      sym__eol,
    ACTIONS(328), 1,
      sym__blank_line,
  [1343] = 2,
    ACTIONS(330), 1,
      sym__eol,
    ACTIONS(332), 1,
      sym__blank_line,
  [1350] = 2,
    ACTIONS(334), 1,
      sym__eol,
    ACTIONS(336), 1,
      sym__blank_line,
  [1357] = 2,
    ACTIONS(338), 1,
      sym__eol,
    ACTIONS(340), 1,
      sym__blank_line,
  [1364] = 2,
    ACTIONS(342), 1,
      sym__eol,
    ACTIONS(344), 1,
      sym__blank_line,
  [1371] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(346), 1,
      sym__field_name,
  [1378] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(348), 1,
      sym__markup_start,
  [1385] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(350), 1,
      aux_sym_option_list_item_token1,
  [1392] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(352), 1,
      anon_sym_PIPE,
  [1399] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(354), 1,
      anon_sym_COLON,
  [1406] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(356), 1,
      sym__markup_start,
  [1413] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(358), 1,
      anon_sym_COLON,
  [1420] = 2,
    ACTIONS(360), 1,
      sym__eol,
    ACTIONS(362), 1,
      sym__blank_line,
  [1427] = 2,
    ACTIONS(364), 1,
      sym__eol,
    ACTIONS(366), 1,
      sym__blank_line,
  [1434] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(368), 1,
      sym__markup_start,
  [1441] = 2,
    ACTIONS(370), 1,
      sym__eol,
    ACTIONS(372), 1,
      sym__blank_line,
  [1448] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(374), 1,
      sym__citation_label,
  [1455] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(376), 1,
      ts_builtin_sym_end,
  [1462] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(378), 1,
      anon_sym_RBRACK,
  [1469] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(380), 1,
      sym__blank_line,
  [1476] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(382), 1,
      sym__markup_start,
  [1483] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(384), 1,
      aux_sym__link_token1,
  [1490] = 2,
    ACTIONS(322), 1,
      sym__eol,
    ACTIONS(386), 1,
      sym__blank_line,
  [1497] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(70), 1,
      aux_sym_substitution_definition_token1,
  [1504] = 2,
    ACTIONS(326), 1,
      sym__eol,
    ACTIONS(388), 1,
      sym__blank_line,
  [1511] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(390), 1,
      anon_sym___,
  [1518] = 2,
    ACTIONS(330), 1,
      sym__eol,
    ACTIONS(392), 1,
      sym__blank_line,
  [1525] = 2,
    ACTIONS(334), 1,
      sym__eol,
    ACTIONS(394), 1,
      sym__blank_line,
  [1532] = 2,
    ACTIONS(338), 1,
      sym__eol,
    ACTIONS(396), 1,
      sym__blank_line,
  [1539] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(398), 1,
      anon_sym_LBRACK,
  [1546] = 2,
    ACTIONS(342), 1,
      sym__eol,
    ACTIONS(400), 1,
      sym__blank_line,
  [1553] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(402), 1,
      anon_sym_LBRACK,
  [1560] = 2,
    ACTIONS(360), 1,
      sym__eol,
    ACTIONS(404), 1,
      sym__blank_line,
  [1567] = 2,
    ACTIONS(364), 1,
      sym__eol,
    ACTIONS(406), 1,
      sym__blank_line,
  [1574] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(408), 1,
      anon_sym_RBRACK,
  [1581] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(410), 1,
      anon_sym_COLON_COLON,
  [1588] = 2,
    ACTIONS(370), 1,
      sym__eol,
    ACTIONS(412), 1,
      sym__blank_line,
  [1595] = 2,
    ACTIONS(282), 1,
      sym__eol,
    ACTIONS(414), 1,
      sym__blank_line,
  [1602] = 2,
    ACTIONS(416), 1,
      sym__eol,
    ACTIONS(418), 1,
      sym__blank_line,
  [1609] = 2,
    ACTIONS(416), 1,
      sym__eol,
    ACTIONS(420), 1,
      sym__blank_line,
  [1616] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(422), 1,
      anon_sym_COLON,
  [1623] = 1,
    ACTIONS(310), 1,
      sym__eol,
  [1627] = 1,
    ACTIONS(306), 1,
      sym__eol,
  [1631] = 1,
    ACTIONS(334), 1,
      sym__eol,
  [1635] = 1,
    ACTIONS(298), 1,
      sym__eol,
  [1639] = 1,
    ACTIONS(416), 1,
      sym__eol,
  [1643] = 1,
    ACTIONS(282), 1,
      sym__eol,
  [1647] = 1,
    ACTIONS(370), 1,
      sym__eol,
  [1651] = 1,
    ACTIONS(364), 1,
      sym__eol,
  [1655] = 1,
    ACTIONS(360), 1,
      sym__eol,
  [1659] = 1,
    ACTIONS(342), 1,
      sym__eol,
  [1663] = 1,
    ACTIONS(338), 1,
      sym__eol,
  [1667] = 1,
    ACTIONS(322), 1,
      sym__eol,
  [1671] = 1,
    ACTIONS(326), 1,
      sym__eol,
  [1675] = 1,
    ACTIONS(330), 1,
      sym__eol,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 18,
  [SMALL_STATE(6)] = 40,
  [SMALL_STATE(7)] = 58,
  [SMALL_STATE(8)] = 69,
  [SMALL_STATE(9)] = 80,
  [SMALL_STATE(10)] = 91,
  [SMALL_STATE(11)] = 106,
  [SMALL_STATE(12)] = 121,
  [SMALL_STATE(13)] = 132,
  [SMALL_STATE(14)] = 143,
  [SMALL_STATE(15)] = 153,
  [SMALL_STATE(16)] = 163,
  [SMALL_STATE(17)] = 173,
  [SMALL_STATE(18)] = 183,
  [SMALL_STATE(19)] = 193,
  [SMALL_STATE(20)] = 203,
  [SMALL_STATE(21)] = 213,
  [SMALL_STATE(22)] = 223,
  [SMALL_STATE(23)] = 233,
  [SMALL_STATE(24)] = 243,
  [SMALL_STATE(25)] = 253,
  [SMALL_STATE(26)] = 263,
  [SMALL_STATE(27)] = 273,
  [SMALL_STATE(28)] = 284,
  [SMALL_STATE(29)] = 295,
  [SMALL_STATE(30)] = 308,
  [SMALL_STATE(31)] = 321,
  [SMALL_STATE(32)] = 334,
  [SMALL_STATE(33)] = 347,
  [SMALL_STATE(34)] = 360,
  [SMALL_STATE(35)] = 373,
  [SMALL_STATE(36)] = 386,
  [SMALL_STATE(37)] = 397,
  [SMALL_STATE(38)] = 408,
  [SMALL_STATE(39)] = 419,
  [SMALL_STATE(40)] = 430,
  [SMALL_STATE(41)] = 441,
  [SMALL_STATE(42)] = 452,
  [SMALL_STATE(43)] = 463,
  [SMALL_STATE(44)] = 476,
  [SMALL_STATE(45)] = 489,
  [SMALL_STATE(46)] = 502,
  [SMALL_STATE(47)] = 515,
  [SMALL_STATE(48)] = 528,
  [SMALL_STATE(49)] = 541,
  [SMALL_STATE(50)] = 554,
  [SMALL_STATE(51)] = 565,
  [SMALL_STATE(52)] = 576,
  [SMALL_STATE(53)] = 587,
  [SMALL_STATE(54)] = 598,
  [SMALL_STATE(55)] = 609,
  [SMALL_STATE(56)] = 622,
  [SMALL_STATE(57)] = 635,
  [SMALL_STATE(58)] = 648,
  [SMALL_STATE(59)] = 661,
  [SMALL_STATE(60)] = 674,
  [SMALL_STATE(61)] = 687,
  [SMALL_STATE(62)] = 698,
  [SMALL_STATE(63)] = 711,
  [SMALL_STATE(64)] = 724,
  [SMALL_STATE(65)] = 737,
  [SMALL_STATE(66)] = 750,
  [SMALL_STATE(67)] = 763,
  [SMALL_STATE(68)] = 776,
  [SMALL_STATE(69)] = 789,
  [SMALL_STATE(70)] = 802,
  [SMALL_STATE(71)] = 812,
  [SMALL_STATE(72)] = 822,
  [SMALL_STATE(73)] = 832,
  [SMALL_STATE(74)] = 842,
  [SMALL_STATE(75)] = 852,
  [SMALL_STATE(76)] = 862,
  [SMALL_STATE(77)] = 872,
  [SMALL_STATE(78)] = 882,
  [SMALL_STATE(79)] = 892,
  [SMALL_STATE(80)] = 902,
  [SMALL_STATE(81)] = 912,
  [SMALL_STATE(82)] = 922,
  [SMALL_STATE(83)] = 932,
  [SMALL_STATE(84)] = 942,
  [SMALL_STATE(85)] = 952,
  [SMALL_STATE(86)] = 962,
  [SMALL_STATE(87)] = 972,
  [SMALL_STATE(88)] = 982,
  [SMALL_STATE(89)] = 992,
  [SMALL_STATE(90)] = 1002,
  [SMALL_STATE(91)] = 1012,
  [SMALL_STATE(92)] = 1022,
  [SMALL_STATE(93)] = 1032,
  [SMALL_STATE(94)] = 1042,
  [SMALL_STATE(95)] = 1052,
  [SMALL_STATE(96)] = 1062,
  [SMALL_STATE(97)] = 1072,
  [SMALL_STATE(98)] = 1082,
  [SMALL_STATE(99)] = 1092,
  [SMALL_STATE(100)] = 1102,
  [SMALL_STATE(101)] = 1112,
  [SMALL_STATE(102)] = 1122,
  [SMALL_STATE(103)] = 1132,
  [SMALL_STATE(104)] = 1142,
  [SMALL_STATE(105)] = 1152,
  [SMALL_STATE(106)] = 1162,
  [SMALL_STATE(107)] = 1172,
  [SMALL_STATE(108)] = 1182,
  [SMALL_STATE(109)] = 1192,
  [SMALL_STATE(110)] = 1202,
  [SMALL_STATE(111)] = 1209,
  [SMALL_STATE(112)] = 1216,
  [SMALL_STATE(113)] = 1223,
  [SMALL_STATE(114)] = 1230,
  [SMALL_STATE(115)] = 1237,
  [SMALL_STATE(116)] = 1244,
  [SMALL_STATE(117)] = 1251,
  [SMALL_STATE(118)] = 1256,
  [SMALL_STATE(119)] = 1263,
  [SMALL_STATE(120)] = 1270,
  [SMALL_STATE(121)] = 1277,
  [SMALL_STATE(122)] = 1282,
  [SMALL_STATE(123)] = 1289,
  [SMALL_STATE(124)] = 1294,
  [SMALL_STATE(125)] = 1301,
  [SMALL_STATE(126)] = 1308,
  [SMALL_STATE(127)] = 1315,
  [SMALL_STATE(128)] = 1322,
  [SMALL_STATE(129)] = 1329,
  [SMALL_STATE(130)] = 1336,
  [SMALL_STATE(131)] = 1343,
  [SMALL_STATE(132)] = 1350,
  [SMALL_STATE(133)] = 1357,
  [SMALL_STATE(134)] = 1364,
  [SMALL_STATE(135)] = 1371,
  [SMALL_STATE(136)] = 1378,
  [SMALL_STATE(137)] = 1385,
  [SMALL_STATE(138)] = 1392,
  [SMALL_STATE(139)] = 1399,
  [SMALL_STATE(140)] = 1406,
  [SMALL_STATE(141)] = 1413,
  [SMALL_STATE(142)] = 1420,
  [SMALL_STATE(143)] = 1427,
  [SMALL_STATE(144)] = 1434,
  [SMALL_STATE(145)] = 1441,
  [SMALL_STATE(146)] = 1448,
  [SMALL_STATE(147)] = 1455,
  [SMALL_STATE(148)] = 1462,
  [SMALL_STATE(149)] = 1469,
  [SMALL_STATE(150)] = 1476,
  [SMALL_STATE(151)] = 1483,
  [SMALL_STATE(152)] = 1490,
  [SMALL_STATE(153)] = 1497,
  [SMALL_STATE(154)] = 1504,
  [SMALL_STATE(155)] = 1511,
  [SMALL_STATE(156)] = 1518,
  [SMALL_STATE(157)] = 1525,
  [SMALL_STATE(158)] = 1532,
  [SMALL_STATE(159)] = 1539,
  [SMALL_STATE(160)] = 1546,
  [SMALL_STATE(161)] = 1553,
  [SMALL_STATE(162)] = 1560,
  [SMALL_STATE(163)] = 1567,
  [SMALL_STATE(164)] = 1574,
  [SMALL_STATE(165)] = 1581,
  [SMALL_STATE(166)] = 1588,
  [SMALL_STATE(167)] = 1595,
  [SMALL_STATE(168)] = 1602,
  [SMALL_STATE(169)] = 1609,
  [SMALL_STATE(170)] = 1616,
  [SMALL_STATE(171)] = 1623,
  [SMALL_STATE(172)] = 1627,
  [SMALL_STATE(173)] = 1631,
  [SMALL_STATE(174)] = 1635,
  [SMALL_STATE(175)] = 1639,
  [SMALL_STATE(176)] = 1643,
  [SMALL_STATE(177)] = 1647,
  [SMALL_STATE(178)] = 1651,
  [SMALL_STATE(179)] = 1655,
  [SMALL_STATE(180)] = 1659,
  [SMALL_STATE(181)] = 1663,
  [SMALL_STATE(182)] = 1667,
  [SMALL_STATE(183)] = 1671,
  [SMALL_STATE(184)] = 1675,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(91),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(72),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(135),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(73),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(12),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(5),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(8),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(47),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(3),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__body_elements, 2),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__body_elements, 2),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__embed_directive, 2),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__anonymous_target, 1),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 3),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_block, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 4),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 6),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 5),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bullet_list_item, 2),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__enumerated_list_item, 2),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_body, 1),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_list_item, 2),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__link, 2), SHIFT_REPEAT(40),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__link, 2),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 1),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__embed_directive, 4),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__anonymous_target, 3),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_citation, 6),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footnote, 6),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_block, 3),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_list_repeat1, 2), SHIFT_REPEAT(114),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__substitution_definition_block_repeat1, 2), SHIFT_REPEAT(127),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__anoynymous_hyperlink_target_block_repeat1, 2), SHIFT_REPEAT(20),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_option_list_repeat1, 2), SHIFT_REPEAT(78),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hyperlink_target_block_repeat1, 2), SHIFT_REPEAT(76),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_block_repeat1, 2), SHIFT_REPEAT(21),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__line, 2), SHIFT_REPEAT(61),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__line, 2),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(101),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__citation_block_repeat1, 2), SHIFT_REPEAT(112),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bullet_list_repeat1, 2), SHIFT_REPEAT(80),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__directive_block_repeat1, 2), SHIFT_REPEAT(75),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enumerated_list_repeat1, 2), SHIFT_REPEAT(79),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__footnote_block_repeat1, 2), SHIFT_REPEAT(113),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__link, 2), SHIFT_REPEAT(92),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__line, 2), SHIFT_REPEAT(97),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumerated_list, 1, .production_id = 1),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enumerated_list_repeat1, 2, .production_id = 1),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bullet_list_repeat1, 2, .production_id = 1),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 2),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__directive_block_repeat1, 2),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_substitution_definition, 4),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 5),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_list_repeat1, 2),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__substitution_definition_block, 1),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directive_block, 1),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__anoynymous_hyperlink_target_block, 1),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hyperlink_target_block, 1),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__citation_block, 1),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__footnote_block, 1),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__substitution_definition_block_repeat1, 2),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_option_list_repeat1, 2),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_block_repeat1, 2),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__footnote_block_repeat1, 2),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_block, 1),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_list, 1),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__citation_block_repeat1, 2),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_list, 1),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [376] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hyperlink_target_block_repeat1, 2),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__substitution_definition_block, 2),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directive_block, 2),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__anoynymous_hyperlink_target_block_repeat1, 2),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__anoynymous_hyperlink_target_block, 2),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hyperlink_target_block, 2),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__citation_block, 2),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__footnote_block, 2),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_block, 2),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_list, 2),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_list, 2),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumerated_list, 2, .production_id = 2),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bullet_list, 2, .production_id = 2),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bullet_list, 1, .production_id = 1),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
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
