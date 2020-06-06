#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 151
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 66
#define ALIAS_COUNT 1
#define TOKEN_COUNT 22
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5

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
  aux_sym_footnote_token1 = 11,
  aux_sym_citation_token1 = 12,
  aux_sym_target_token1 = 13,
  aux_sym__link_token1 = 14,
  anon_sym___ = 15,
  aux_sym_directive_token1 = 16,
  aux_sym_substitution_definition_token1 = 17,
  aux_sym__embed_directive_token1 = 18,
  anon_sym_COLON_COLON = 19,
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
  sym__citation_block = 40,
  sym_citation = 41,
  sym__hyperlink_target_block = 42,
  sym_target = 43,
  aux_sym__link = 44,
  sym__anoynymous_hyperlink_target_block = 45,
  sym__anonymous_target = 46,
  sym__directive_block = 47,
  sym_directive = 48,
  sym__substitution_definition_block = 49,
  sym_substitution_definition = 50,
  sym__embed_directive = 51,
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
  aux_sym__directive_block_repeat1 = 64,
  aux_sym__substitution_definition_block_repeat1 = 65,
  alias_sym_list_item = 66,
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
  [aux_sym_footnote_token1] = "footnote_token1",
  [aux_sym_citation_token1] = "citation_token1",
  [aux_sym_target_token1] = "target_token1",
  [aux_sym__link_token1] = "_link_token1",
  [anon_sym___] = "__",
  [aux_sym_directive_token1] = "directive_token1",
  [aux_sym_substitution_definition_token1] = "substitution_definition_token1",
  [aux_sym__embed_directive_token1] = "_embed_directive_token1",
  [anon_sym_COLON_COLON] = "::",
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
  [sym__citation_block] = "_citation_block",
  [sym_citation] = "citation",
  [sym__hyperlink_target_block] = "_hyperlink_target_block",
  [sym_target] = "target",
  [aux_sym__link] = "_link",
  [sym__anoynymous_hyperlink_target_block] = "_anoynymous_hyperlink_target_block",
  [sym__anonymous_target] = "target",
  [sym__directive_block] = "_directive_block",
  [sym_directive] = "directive",
  [sym__substitution_definition_block] = "_substitution_definition_block",
  [sym_substitution_definition] = "substitution_definition",
  [sym__embed_directive] = "_embed_directive",
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
  [aux_sym_footnote_token1] = aux_sym_footnote_token1,
  [aux_sym_citation_token1] = aux_sym_citation_token1,
  [aux_sym_target_token1] = aux_sym_target_token1,
  [aux_sym__link_token1] = aux_sym__link_token1,
  [anon_sym___] = anon_sym___,
  [aux_sym_directive_token1] = aux_sym_directive_token1,
  [aux_sym_substitution_definition_token1] = aux_sym_substitution_definition_token1,
  [aux_sym__embed_directive_token1] = aux_sym__embed_directive_token1,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
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
  [sym__citation_block] = sym__citation_block,
  [sym_citation] = sym_citation,
  [sym__hyperlink_target_block] = sym__hyperlink_target_block,
  [sym_target] = sym_target,
  [aux_sym__link] = aux_sym__link,
  [sym__anoynymous_hyperlink_target_block] = sym__anoynymous_hyperlink_target_block,
  [sym__anonymous_target] = sym_target,
  [sym__directive_block] = sym__directive_block,
  [sym_directive] = sym_directive,
  [sym__substitution_definition_block] = sym__substitution_definition_block,
  [sym_substitution_definition] = sym_substitution_definition,
  [sym__embed_directive] = sym__embed_directive,
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
  [aux_sym_footnote_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_citation_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_target_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__link_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym___] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_directive_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_substitution_definition_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__embed_directive_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
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
  [sym__substitution_definition_block] = {
    .visible = false,
    .named = true,
  },
  [sym_substitution_definition] = {
    .visible = true,
    .named = true,
  },
  [sym__embed_directive] = {
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
      if (eof) ADVANCE(51);
      if (lookahead == '\t') ADVANCE(56);
      if (lookahead == 11) ADVANCE(57);
      if (lookahead == '\f') ADVANCE(58);
      if (lookahead == ' ') ADVANCE(55);
      if (lookahead == '#') ADVANCE(67);
      if (lookahead == '*' ||
          lookahead == 8226 ||
          lookahead == 8227 ||
          lookahead == 8259) ADVANCE(73);
      if (lookahead == '+') ADVANCE(75);
      if (lookahead == '-') ADVANCE(74);
      if (lookahead == '.') ADVANCE(71);
      if (lookahead == '/') ADVANCE(76);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == '_') ADVANCE(72);
      if (lookahead == '|') ADVANCE(61);
      if (lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'I' ||
          lookahead == 'L' ||
          lookahead == 'M' ||
          lookahead == 'V' ||
          lookahead == 'X') ADVANCE(68);
      if (lookahead == 'c' ||
          lookahead == 'd' ||
          lookahead == 'i' ||
          lookahead == 'l' ||
          lookahead == 'm' ||
          lookahead == 'v' ||
          lookahead == 'x') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(67);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(56);
      if (lookahead == 11) ADVANCE(57);
      if (lookahead == '\f') ADVANCE(58);
      if (lookahead == ' ') ADVANCE(55);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == ':') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(4);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == '*') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 4:
      if (lookahead == '+') ADVANCE(44);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '/') ADVANCE(44);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(34);
      if (lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'I' ||
          lookahead == 'L' ||
          lookahead == 'M' ||
          lookahead == 'V' ||
          lookahead == 'X') ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(34);
      if (lookahead == 'c' ||
          lookahead == 'd' ||
          lookahead == 'i' ||
          lookahead == 'l' ||
          lookahead == 'm' ||
          lookahead == 'v' ||
          lookahead == 'x') ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(40);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(64);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == '_') ADVANCE(27);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(64);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(65);
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == '`') ADVANCE(11);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(65);
      if (lookahead == '`') ADVANCE(27);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(78);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(28);
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == '`') ADVANCE(11);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(82);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '[') ADVANCE(3);
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == '|') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 20:
      if (lookahead == '[') ADVANCE(46);
      END_STATE();
    case 21:
      if (lookahead == ']') ADVANCE(38);
      END_STATE();
    case 22:
      if (lookahead == ']') ADVANCE(38);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 23:
      if (lookahead == ']') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 24:
      if (lookahead == ']') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == ']') ADVANCE(39);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == '_') ADVANCE(10);
      if (lookahead == '`') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(12);
      END_STATE();
    case 27:
      if (lookahead == '_') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(11);
      END_STATE();
    case 28:
      if (lookahead == '`') ADVANCE(10);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == '|') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(80);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(79);
      if (lookahead == '\r') ADVANCE(32);
      if (lookahead == '|') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(29);
      END_STATE();
    case 31:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f') ADVANCE(36);
      if (lookahead == ' ') ADVANCE(37);
      if (lookahead == ',') ADVANCE(2);
      if (lookahead == '=') ADVANCE(45);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 32:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(29);
      END_STATE();
    case 33:
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 34:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(53);
      END_STATE();
    case 35:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(19);
      END_STATE();
    case 36:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(60);
      END_STATE();
    case 37:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 38:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(62);
      END_STATE();
    case 39:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(63);
      END_STATE();
    case 40:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(20);
      END_STATE();
    case 41:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead == ',') ADVANCE(2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 42:
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '_') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 43:
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '_') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 47:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 48:
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(59);
      END_STATE();
    case 49:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(29);
      END_STATE();
    case 50:
      if (eof) ADVANCE(51);
      if (lookahead == '#') ADVANCE(67);
      if (lookahead == '*' ||
          lookahead == 8226 ||
          lookahead == 8227 ||
          lookahead == 8259) ADVANCE(73);
      if (lookahead == '+') ADVANCE(75);
      if (lookahead == '-') ADVANCE(74);
      if (lookahead == '.') ADVANCE(71);
      if (lookahead == '/') ADVANCE(76);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == '_') ADVANCE(72);
      if (lookahead == '|') ADVANCE(61);
      if (lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'I' ||
          lookahead == 'L' ||
          lookahead == 'M' ||
          lookahead == 'V' ||
          lookahead == 'X') ADVANCE(68);
      if (lookahead == 'c' ||
          lookahead == 'd' ||
          lookahead == 'i' ||
          lookahead == 'l' ||
          lookahead == 'm' ||
          lookahead == 'v' ||
          lookahead == 'x') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(67);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym__char_bullet);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym__numeric_bullet);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_TAB);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_3);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym__field_name);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_option_list_item_token1);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_footnote_token1);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_citation_token1);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_target_token1);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == '`') ADVANCE(10);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym__link_token1);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym__link_token1);
      if (lookahead == '.') ADVANCE(34);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym__link_token1);
      if (lookahead == '.') ADVANCE(34);
      if (lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'I' ||
          lookahead == 'L' ||
          lookahead == 'M' ||
          lookahead == 'V' ||
          lookahead == 'X') ADVANCE(6);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym__link_token1);
      if (lookahead == '.') ADVANCE(34);
      if (lookahead == 'c' ||
          lookahead == 'd' ||
          lookahead == 'i' ||
          lookahead == 'l' ||
          lookahead == 'm' ||
          lookahead == 'v' ||
          lookahead == 'x') ADVANCE(7);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym__link_token1);
      if (lookahead == '.') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym__link_token1);
      if (lookahead == '.') ADVANCE(35);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym__link_token1);
      if (lookahead == '_') ADVANCE(77);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym__link_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(52);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym__link_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(52);
      if (lookahead == '-') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym__link_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym__link_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym___);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '_') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_substitution_definition_token1);
      if (lookahead == '|') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(29);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_substitution_definition_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(29);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym__embed_directive_token1);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '_') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 50, .external_lex_state = 1},
  [2] = {.lex_state = 50, .external_lex_state = 1},
  [3] = {.lex_state = 50, .external_lex_state = 1},
  [4] = {.lex_state = 50, .external_lex_state = 1},
  [5] = {.lex_state = 1, .external_lex_state = 1},
  [6] = {.lex_state = 1, .external_lex_state = 1},
  [7] = {.lex_state = 1, .external_lex_state = 1},
  [8] = {.lex_state = 1, .external_lex_state = 1},
  [9] = {.lex_state = 1, .external_lex_state = 2},
  [10] = {.lex_state = 1, .external_lex_state = 2},
  [11] = {.lex_state = 1, .external_lex_state = 2},
  [12] = {.lex_state = 1, .external_lex_state = 2},
  [13] = {.lex_state = 1, .external_lex_state = 2},
  [14] = {.lex_state = 1, .external_lex_state = 2},
  [15] = {.lex_state = 1, .external_lex_state = 2},
  [16] = {.lex_state = 1, .external_lex_state = 2},
  [17] = {.lex_state = 47, .external_lex_state = 2},
  [18] = {.lex_state = 0, .external_lex_state = 2},
  [19] = {.lex_state = 47, .external_lex_state = 1},
  [20] = {.lex_state = 47, .external_lex_state = 2},
  [21] = {.lex_state = 47, .external_lex_state = 1},
  [22] = {.lex_state = 47, .external_lex_state = 1},
  [23] = {.lex_state = 47, .external_lex_state = 1},
  [24] = {.lex_state = 47, .external_lex_state = 1},
  [25] = {.lex_state = 0, .external_lex_state = 2},
  [26] = {.lex_state = 0, .external_lex_state = 2},
  [27] = {.lex_state = 47, .external_lex_state = 1},
  [28] = {.lex_state = 47, .external_lex_state = 1},
  [29] = {.lex_state = 0, .external_lex_state = 2},
  [30] = {.lex_state = 0, .external_lex_state = 2},
  [31] = {.lex_state = 0, .external_lex_state = 2},
  [32] = {.lex_state = 0, .external_lex_state = 2},
  [33] = {.lex_state = 0, .external_lex_state = 2},
  [34] = {.lex_state = 0, .external_lex_state = 2},
  [35] = {.lex_state = 1, .external_lex_state = 2},
  [36] = {.lex_state = 0, .external_lex_state = 2},
  [37] = {.lex_state = 0, .external_lex_state = 2},
  [38] = {.lex_state = 47, .external_lex_state = 1},
  [39] = {.lex_state = 0, .external_lex_state = 2},
  [40] = {.lex_state = 47, .external_lex_state = 1},
  [41] = {.lex_state = 47, .external_lex_state = 1},
  [42] = {.lex_state = 0, .external_lex_state = 2},
  [43] = {.lex_state = 47, .external_lex_state = 1},
  [44] = {.lex_state = 0, .external_lex_state = 2},
  [45] = {.lex_state = 47, .external_lex_state = 1},
  [46] = {.lex_state = 47, .external_lex_state = 1},
  [47] = {.lex_state = 1, .external_lex_state = 2},
  [48] = {.lex_state = 0, .external_lex_state = 2},
  [49] = {.lex_state = 0, .external_lex_state = 2},
  [50] = {.lex_state = 0, .external_lex_state = 2},
  [51] = {.lex_state = 47, .external_lex_state = 2},
  [52] = {.lex_state = 47, .external_lex_state = 1},
  [53] = {.lex_state = 47, .external_lex_state = 1},
  [54] = {.lex_state = 47, .external_lex_state = 2},
  [55] = {.lex_state = 0, .external_lex_state = 2},
  [56] = {.lex_state = 0, .external_lex_state = 2},
  [57] = {.lex_state = 0, .external_lex_state = 2},
  [58] = {.lex_state = 47, .external_lex_state = 2},
  [59] = {.lex_state = 47, .external_lex_state = 2},
  [60] = {.lex_state = 47, .external_lex_state = 2},
  [61] = {.lex_state = 47, .external_lex_state = 2},
  [62] = {.lex_state = 47, .external_lex_state = 2},
  [63] = {.lex_state = 1, .external_lex_state = 2},
  [64] = {.lex_state = 47, .external_lex_state = 2},
  [65] = {.lex_state = 47, .external_lex_state = 2},
  [66] = {.lex_state = 47, .external_lex_state = 2},
  [67] = {.lex_state = 47, .external_lex_state = 2},
  [68] = {.lex_state = 47, .external_lex_state = 2},
  [69] = {.lex_state = 47, .external_lex_state = 2},
  [70] = {.lex_state = 47, .external_lex_state = 2},
  [71] = {.lex_state = 47, .external_lex_state = 2},
  [72] = {.lex_state = 47, .external_lex_state = 2},
  [73] = {.lex_state = 47, .external_lex_state = 2},
  [74] = {.lex_state = 47, .external_lex_state = 2},
  [75] = {.lex_state = 47, .external_lex_state = 2},
  [76] = {.lex_state = 47, .external_lex_state = 2},
  [77] = {.lex_state = 47, .external_lex_state = 2},
  [78] = {.lex_state = 47, .external_lex_state = 2},
  [79] = {.lex_state = 47, .external_lex_state = 2},
  [80] = {.lex_state = 47, .external_lex_state = 2},
  [81] = {.lex_state = 47, .external_lex_state = 2},
  [82] = {.lex_state = 47, .external_lex_state = 2},
  [83] = {.lex_state = 47, .external_lex_state = 2},
  [84] = {.lex_state = 47, .external_lex_state = 2},
  [85] = {.lex_state = 47, .external_lex_state = 2},
  [86] = {.lex_state = 47, .external_lex_state = 2},
  [87] = {.lex_state = 47, .external_lex_state = 2},
  [88] = {.lex_state = 47, .external_lex_state = 2},
  [89] = {.lex_state = 47, .external_lex_state = 2},
  [90] = {.lex_state = 47, .external_lex_state = 2},
  [91] = {.lex_state = 47, .external_lex_state = 2},
  [92] = {.lex_state = 47, .external_lex_state = 2},
  [93] = {.lex_state = 1, .external_lex_state = 2},
  [94] = {.lex_state = 0, .external_lex_state = 1},
  [95] = {.lex_state = 0, .external_lex_state = 1},
  [96] = {.lex_state = 0, .external_lex_state = 1},
  [97] = {.lex_state = 0, .external_lex_state = 1},
  [98] = {.lex_state = 48, .external_lex_state = 2},
  [99] = {.lex_state = 1, .external_lex_state = 2},
  [100] = {.lex_state = 0, .external_lex_state = 2},
  [101] = {.lex_state = 0, .external_lex_state = 2},
  [102] = {.lex_state = 48, .external_lex_state = 2},
  [103] = {.lex_state = 0, .external_lex_state = 2},
  [104] = {.lex_state = 0, .external_lex_state = 2},
  [105] = {.lex_state = 0, .external_lex_state = 2},
  [106] = {.lex_state = 0, .external_lex_state = 2},
  [107] = {.lex_state = 1, .external_lex_state = 2},
  [108] = {.lex_state = 0, .external_lex_state = 2},
  [109] = {.lex_state = 0, .external_lex_state = 1},
  [110] = {.lex_state = 0, .external_lex_state = 1},
  [111] = {.lex_state = 0, .external_lex_state = 1},
  [112] = {.lex_state = 0, .external_lex_state = 1},
  [113] = {.lex_state = 0, .external_lex_state = 1},
  [114] = {.lex_state = 0, .external_lex_state = 1},
  [115] = {.lex_state = 0, .external_lex_state = 2},
  [116] = {.lex_state = 0, .external_lex_state = 2},
  [117] = {.lex_state = 0, .external_lex_state = 1},
  [118] = {.lex_state = 0, .external_lex_state = 1},
  [119] = {.lex_state = 0, .external_lex_state = 1},
  [120] = {.lex_state = 0, .external_lex_state = 1},
  [121] = {.lex_state = 0, .external_lex_state = 1},
  [122] = {.lex_state = 0, .external_lex_state = 2},
  [123] = {.lex_state = 0, .external_lex_state = 1},
  [124] = {.lex_state = 0, .external_lex_state = 1},
  [125] = {.lex_state = 0, .external_lex_state = 1},
  [126] = {.lex_state = 0, .external_lex_state = 2},
  [127] = {.lex_state = 0, .external_lex_state = 1},
  [128] = {.lex_state = 0, .external_lex_state = 1},
  [129] = {.lex_state = 1, .external_lex_state = 2},
  [130] = {.lex_state = 0, .external_lex_state = 1},
  [131] = {.lex_state = 0, .external_lex_state = 1},
  [132] = {.lex_state = 0, .external_lex_state = 1},
  [133] = {.lex_state = 0, .external_lex_state = 1},
  [134] = {.lex_state = 0, .external_lex_state = 1},
  [135] = {.lex_state = 0, .external_lex_state = 2},
  [136] = {.lex_state = 47, .external_lex_state = 2},
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
    [aux_sym_footnote_token1] = ACTIONS(1),
    [aux_sym_citation_token1] = ACTIONS(1),
    [aux_sym_target_token1] = ACTIONS(1),
    [aux_sym__link_token1] = ACTIONS(1),
    [anon_sym___] = ACTIONS(1),
    [aux_sym_directive_token1] = ACTIONS(1),
    [aux_sym_substitution_definition_token1] = ACTIONS(1),
    [sym__eol] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(115),
    [sym__body_elements] = STATE(2),
    [sym_paragraph] = STATE(114),
    [sym__lists] = STATE(114),
    [sym_bullet_list] = STATE(114),
    [sym__bullet_list_item] = STATE(113),
    [sym_enumerated_list] = STATE(114),
    [sym__enumerated_list_item] = STATE(111),
    [sym_field_list] = STATE(114),
    [sym_field] = STATE(110),
    [sym_option_list] = STATE(114),
    [sym_option_list_item] = STATE(109),
    [sym_line_block] = STATE(114),
    [sym__single_line_block] = STATE(97),
    [sym__markup_blocks] = STATE(114),
    [sym__footnote_block] = STATE(114),
    [sym_footnote] = STATE(96),
    [sym__citation_block] = STATE(114),
    [sym_citation] = STATE(123),
    [sym__hyperlink_target_block] = STATE(114),
    [sym_target] = STATE(117),
    [sym__anoynymous_hyperlink_target_block] = STATE(114),
    [sym__anonymous_target] = STATE(118),
    [sym__directive_block] = STATE(114),
    [sym_directive] = STATE(119),
    [sym__substitution_definition_block] = STATE(114),
    [sym_substitution_definition] = STATE(120),
    [aux_sym__line] = STATE(27),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_paragraph_repeat1] = STATE(17),
    [aux_sym_bullet_list_repeat1] = STATE(29),
    [aux_sym_enumerated_list_repeat1] = STATE(30),
    [aux_sym_field_list_repeat1] = STATE(31),
    [aux_sym_option_list_repeat1] = STATE(32),
    [aux_sym_line_block_repeat1] = STATE(33),
    [aux_sym__footnote_block_repeat1] = STATE(34),
    [aux_sym__citation_block_repeat1] = STATE(35),
    [aux_sym__hyperlink_target_block_repeat1] = STATE(36),
    [aux_sym__anoynymous_hyperlink_target_block_repeat1] = STATE(37),
    [aux_sym__directive_block_repeat1] = STATE(18),
    [aux_sym__substitution_definition_block_repeat1] = STATE(39),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym__char_bullet] = ACTIONS(7),
    [sym__numeric_bullet] = ACTIONS(9),
    [anon_sym_COLON] = ACTIONS(11),
    [aux_sym_option_list_item_token1] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(15),
    [aux_sym_footnote_token1] = ACTIONS(17),
    [aux_sym_citation_token1] = ACTIONS(19),
    [aux_sym_target_token1] = ACTIONS(21),
    [aux_sym__link_token1] = ACTIONS(23),
    [anon_sym___] = ACTIONS(25),
    [aux_sym_directive_token1] = ACTIONS(27),
    [aux_sym_substitution_definition_token1] = ACTIONS(29),
    [sym__eol] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(31),
  },
  [2] = {
    [sym__body_elements] = STATE(3),
    [sym_paragraph] = STATE(114),
    [sym__lists] = STATE(114),
    [sym_bullet_list] = STATE(114),
    [sym__bullet_list_item] = STATE(113),
    [sym_enumerated_list] = STATE(114),
    [sym__enumerated_list_item] = STATE(111),
    [sym_field_list] = STATE(114),
    [sym_field] = STATE(110),
    [sym_option_list] = STATE(114),
    [sym_option_list_item] = STATE(109),
    [sym_line_block] = STATE(114),
    [sym__single_line_block] = STATE(97),
    [sym__markup_blocks] = STATE(114),
    [sym__footnote_block] = STATE(114),
    [sym_footnote] = STATE(96),
    [sym__citation_block] = STATE(114),
    [sym_citation] = STATE(123),
    [sym__hyperlink_target_block] = STATE(114),
    [sym_target] = STATE(117),
    [sym__anoynymous_hyperlink_target_block] = STATE(114),
    [sym__anonymous_target] = STATE(118),
    [sym__directive_block] = STATE(114),
    [sym_directive] = STATE(119),
    [sym__substitution_definition_block] = STATE(114),
    [sym_substitution_definition] = STATE(120),
    [aux_sym__line] = STATE(27),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_paragraph_repeat1] = STATE(17),
    [aux_sym_bullet_list_repeat1] = STATE(29),
    [aux_sym_enumerated_list_repeat1] = STATE(30),
    [aux_sym_field_list_repeat1] = STATE(31),
    [aux_sym_option_list_repeat1] = STATE(32),
    [aux_sym_line_block_repeat1] = STATE(33),
    [aux_sym__footnote_block_repeat1] = STATE(34),
    [aux_sym__citation_block_repeat1] = STATE(35),
    [aux_sym__hyperlink_target_block_repeat1] = STATE(36),
    [aux_sym__anoynymous_hyperlink_target_block_repeat1] = STATE(37),
    [aux_sym__directive_block_repeat1] = STATE(18),
    [aux_sym__substitution_definition_block_repeat1] = STATE(39),
    [ts_builtin_sym_end] = ACTIONS(33),
    [sym__char_bullet] = ACTIONS(7),
    [sym__numeric_bullet] = ACTIONS(9),
    [anon_sym_COLON] = ACTIONS(11),
    [aux_sym_option_list_item_token1] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(15),
    [aux_sym_footnote_token1] = ACTIONS(17),
    [aux_sym_citation_token1] = ACTIONS(19),
    [aux_sym_target_token1] = ACTIONS(21),
    [aux_sym__link_token1] = ACTIONS(23),
    [anon_sym___] = ACTIONS(25),
    [aux_sym_directive_token1] = ACTIONS(27),
    [aux_sym_substitution_definition_token1] = ACTIONS(29),
    [sym__eol] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(35),
  },
  [3] = {
    [sym__body_elements] = STATE(3),
    [sym_paragraph] = STATE(114),
    [sym__lists] = STATE(114),
    [sym_bullet_list] = STATE(114),
    [sym__bullet_list_item] = STATE(113),
    [sym_enumerated_list] = STATE(114),
    [sym__enumerated_list_item] = STATE(111),
    [sym_field_list] = STATE(114),
    [sym_field] = STATE(110),
    [sym_option_list] = STATE(114),
    [sym_option_list_item] = STATE(109),
    [sym_line_block] = STATE(114),
    [sym__single_line_block] = STATE(97),
    [sym__markup_blocks] = STATE(114),
    [sym__footnote_block] = STATE(114),
    [sym_footnote] = STATE(96),
    [sym__citation_block] = STATE(114),
    [sym_citation] = STATE(123),
    [sym__hyperlink_target_block] = STATE(114),
    [sym_target] = STATE(117),
    [sym__anoynymous_hyperlink_target_block] = STATE(114),
    [sym__anonymous_target] = STATE(118),
    [sym__directive_block] = STATE(114),
    [sym_directive] = STATE(119),
    [sym__substitution_definition_block] = STATE(114),
    [sym_substitution_definition] = STATE(120),
    [aux_sym__line] = STATE(27),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_paragraph_repeat1] = STATE(17),
    [aux_sym_bullet_list_repeat1] = STATE(29),
    [aux_sym_enumerated_list_repeat1] = STATE(30),
    [aux_sym_field_list_repeat1] = STATE(31),
    [aux_sym_option_list_repeat1] = STATE(32),
    [aux_sym_line_block_repeat1] = STATE(33),
    [aux_sym__footnote_block_repeat1] = STATE(34),
    [aux_sym__citation_block_repeat1] = STATE(35),
    [aux_sym__hyperlink_target_block_repeat1] = STATE(36),
    [aux_sym__anoynymous_hyperlink_target_block_repeat1] = STATE(37),
    [aux_sym__directive_block_repeat1] = STATE(18),
    [aux_sym__substitution_definition_block_repeat1] = STATE(39),
    [ts_builtin_sym_end] = ACTIONS(37),
    [sym__char_bullet] = ACTIONS(39),
    [sym__numeric_bullet] = ACTIONS(42),
    [anon_sym_COLON] = ACTIONS(45),
    [aux_sym_option_list_item_token1] = ACTIONS(48),
    [anon_sym_PIPE] = ACTIONS(51),
    [aux_sym_footnote_token1] = ACTIONS(54),
    [aux_sym_citation_token1] = ACTIONS(57),
    [aux_sym_target_token1] = ACTIONS(60),
    [aux_sym__link_token1] = ACTIONS(63),
    [anon_sym___] = ACTIONS(66),
    [aux_sym_directive_token1] = ACTIONS(69),
    [aux_sym_substitution_definition_token1] = ACTIONS(72),
    [sym__eol] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(75),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(80), 2,
      aux_sym_citation_token1,
      aux_sym__link_token1,
    ACTIONS(78), 12,
      sym__blank_line,
      ts_builtin_sym_end,
      sym__char_bullet,
      sym__numeric_bullet,
      anon_sym_COLON,
      aux_sym_option_list_item_token1,
      anon_sym_PIPE,
      aux_sym_footnote_token1,
      aux_sym_target_token1,
      anon_sym___,
      aux_sym_directive_token1,
      aux_sym_substitution_definition_token1,
  [22] = 2,
    ACTIONS(84), 2,
      sym__eol,
      sym__blank_line,
    ACTIONS(82), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [33] = 2,
    ACTIONS(88), 2,
      sym__eol,
      sym__blank_line,
    ACTIONS(86), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [44] = 2,
    ACTIONS(92), 2,
      sym__eol,
      sym__blank_line,
    ACTIONS(90), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [55] = 2,
    ACTIONS(96), 2,
      sym__eol,
      sym__blank_line,
    ACTIONS(94), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [66] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(98), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [76] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(100), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [86] = 2,
    ACTIONS(96), 1,
      sym__eol,
    ACTIONS(102), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [96] = 2,
    ACTIONS(92), 1,
      sym__eol,
    ACTIONS(104), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [106] = 2,
    ACTIONS(88), 1,
      sym__eol,
    ACTIONS(106), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [116] = 2,
    ACTIONS(84), 1,
      sym__eol,
    ACTIONS(108), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [126] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(110), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [136] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(112), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [146] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(114), 1,
      aux_sym__link_token1,
    STATE(53), 1,
      aux_sym__line,
    STATE(54), 1,
      aux_sym_paragraph_repeat1,
  [159] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(27), 1,
      aux_sym_directive_token1,
    STATE(26), 1,
      aux_sym__directive_block_repeat1,
    STATE(95), 1,
      sym_directive,
  [172] = 3,
    ACTIONS(116), 1,
      aux_sym__link_token1,
    STATE(19), 1,
      aux_sym__link,
    ACTIONS(119), 2,
      sym__eol,
      sym__blank_line,
  [183] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(121), 1,
      aux_sym__link_token1,
    STATE(38), 1,
      aux_sym__line,
    STATE(112), 1,
      sym__field_body,
  [196] = 3,
    ACTIONS(123), 1,
      aux_sym__link_token1,
    STATE(28), 1,
      aux_sym__line,
    ACTIONS(125), 2,
      sym__eol,
      sym__blank_line,
  [207] = 3,
    ACTIONS(127), 1,
      aux_sym__link_token1,
    STATE(19), 1,
      aux_sym__link,
    ACTIONS(129), 2,
      sym__eol,
      sym__blank_line,
  [218] = 3,
    ACTIONS(127), 1,
      aux_sym__link_token1,
    STATE(19), 1,
      aux_sym__link,
    ACTIONS(131), 2,
      sym__eol,
      sym__blank_line,
  [229] = 3,
    ACTIONS(123), 1,
      aux_sym__link_token1,
    STATE(28), 1,
      aux_sym__line,
    ACTIONS(133), 2,
      sym__eol,
      sym__blank_line,
  [240] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(135), 1,
      aux_sym_substitution_definition_token1,
    STATE(25), 1,
      aux_sym__substitution_definition_block_repeat1,
    STATE(140), 1,
      sym_substitution_definition,
  [253] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(138), 1,
      aux_sym_directive_token1,
    STATE(26), 1,
      aux_sym__directive_block_repeat1,
    STATE(141), 1,
      sym_directive,
  [266] = 4,
    ACTIONS(123), 1,
      aux_sym__link_token1,
    ACTIONS(141), 1,
      sym__eol,
    ACTIONS(143), 1,
      sym__blank_line,
    STATE(28), 1,
      aux_sym__line,
  [279] = 3,
    ACTIONS(145), 1,
      aux_sym__link_token1,
    STATE(28), 1,
      aux_sym__line,
    ACTIONS(148), 2,
      sym__eol,
      sym__blank_line,
  [290] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(7), 1,
      sym__char_bullet,
    STATE(56), 1,
      aux_sym_bullet_list_repeat1,
    STATE(134), 1,
      sym__bullet_list_item,
  [303] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(9), 1,
      sym__numeric_bullet,
    STATE(55), 1,
      aux_sym_enumerated_list_repeat1,
    STATE(133), 1,
      sym__enumerated_list_item,
  [316] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(11), 1,
      anon_sym_COLON,
    STATE(57), 1,
      aux_sym_field_list_repeat1,
    STATE(132), 1,
      sym_field,
  [329] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(13), 1,
      aux_sym_option_list_item_token1,
    STATE(50), 1,
      aux_sym_option_list_repeat1,
    STATE(131), 1,
      sym_option_list_item,
  [342] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(15), 1,
      anon_sym_PIPE,
    STATE(49), 1,
      aux_sym_line_block_repeat1,
    STATE(130), 1,
      sym__single_line_block,
  [355] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(17), 1,
      aux_sym_footnote_token1,
    STATE(48), 1,
      aux_sym__footnote_block_repeat1,
    STATE(128), 1,
      sym_footnote,
  [368] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(150), 1,
      aux_sym_citation_token1,
    STATE(47), 1,
      aux_sym__citation_block_repeat1,
    STATE(94), 1,
      sym_citation,
  [381] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(21), 1,
      aux_sym_target_token1,
    STATE(44), 1,
      aux_sym__hyperlink_target_block_repeat1,
    STATE(125), 1,
      sym_target,
  [394] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(25), 1,
      anon_sym___,
    STATE(42), 1,
      aux_sym__anoynymous_hyperlink_target_block_repeat1,
    STATE(124), 1,
      sym__anonymous_target,
  [407] = 3,
    ACTIONS(123), 1,
      aux_sym__link_token1,
    STATE(28), 1,
      aux_sym__line,
    ACTIONS(152), 2,
      sym__eol,
      sym__blank_line,
  [418] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(29), 1,
      aux_sym_substitution_definition_token1,
    STATE(25), 1,
      aux_sym__substitution_definition_block_repeat1,
    STATE(121), 1,
      sym_substitution_definition,
  [431] = 3,
    ACTIONS(123), 1,
      aux_sym__link_token1,
    STATE(28), 1,
      aux_sym__line,
    ACTIONS(154), 2,
      sym__eol,
      sym__blank_line,
  [442] = 3,
    ACTIONS(123), 1,
      aux_sym__link_token1,
    STATE(28), 1,
      aux_sym__line,
    ACTIONS(156), 2,
      sym__eol,
      sym__blank_line,
  [453] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(158), 1,
      anon_sym___,
    STATE(42), 1,
      aux_sym__anoynymous_hyperlink_target_block_repeat1,
    STATE(142), 1,
      sym__anonymous_target,
  [466] = 3,
    ACTIONS(123), 1,
      aux_sym__link_token1,
    STATE(28), 1,
      aux_sym__line,
    ACTIONS(161), 2,
      sym__eol,
      sym__blank_line,
  [477] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(163), 1,
      aux_sym_target_token1,
    STATE(44), 1,
      aux_sym__hyperlink_target_block_repeat1,
    STATE(143), 1,
      sym_target,
  [490] = 3,
    ACTIONS(123), 1,
      aux_sym__link_token1,
    STATE(28), 1,
      aux_sym__line,
    ACTIONS(166), 2,
      sym__eol,
      sym__blank_line,
  [501] = 3,
    ACTIONS(123), 1,
      aux_sym__link_token1,
    STATE(28), 1,
      aux_sym__line,
    ACTIONS(168), 2,
      sym__eol,
      sym__blank_line,
  [512] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(170), 1,
      aux_sym_citation_token1,
    STATE(47), 1,
      aux_sym__citation_block_repeat1,
    STATE(144), 1,
      sym_citation,
  [525] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(173), 1,
      aux_sym_footnote_token1,
    STATE(48), 1,
      aux_sym__footnote_block_repeat1,
    STATE(145), 1,
      sym_footnote,
  [538] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(176), 1,
      anon_sym_PIPE,
    STATE(49), 1,
      aux_sym_line_block_repeat1,
    STATE(146), 1,
      sym__single_line_block,
  [551] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(179), 1,
      aux_sym_option_list_item_token1,
    STATE(50), 1,
      aux_sym_option_list_repeat1,
    STATE(147), 1,
      sym_option_list_item,
  [564] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(182), 1,
      aux_sym__link_token1,
    STATE(70), 1,
      aux_sym__line,
    STATE(138), 1,
      sym__field_body,
  [577] = 3,
    ACTIONS(123), 1,
      aux_sym__link_token1,
    STATE(28), 1,
      aux_sym__line,
    ACTIONS(184), 2,
      sym__eol,
      sym__blank_line,
  [588] = 4,
    ACTIONS(123), 1,
      aux_sym__link_token1,
    ACTIONS(141), 1,
      sym__eol,
    ACTIONS(186), 1,
      sym__blank_line,
    STATE(28), 1,
      aux_sym__line,
  [601] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(188), 1,
      aux_sym__link_token1,
    STATE(54), 1,
      aux_sym_paragraph_repeat1,
    STATE(59), 1,
      aux_sym__line,
  [614] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(191), 1,
      sym__numeric_bullet,
    STATE(55), 1,
      aux_sym_enumerated_list_repeat1,
    STATE(149), 1,
      sym__enumerated_list_item,
  [627] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(194), 1,
      sym__char_bullet,
    STATE(56), 1,
      aux_sym_bullet_list_repeat1,
    STATE(150), 1,
      sym__bullet_list_item,
  [640] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(197), 1,
      anon_sym_COLON,
    STATE(57), 1,
      aux_sym_field_list_repeat1,
    STATE(148), 1,
      sym_field,
  [653] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(200), 1,
      aux_sym__link_token1,
    STATE(52), 1,
      aux_sym__line,
  [663] = 3,
    ACTIONS(141), 1,
      sym__eol,
    ACTIONS(202), 1,
      aux_sym__link_token1,
    STATE(79), 1,
      aux_sym__line,
  [673] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(204), 1,
      aux_sym__link_token1,
    STATE(41), 1,
      aux_sym__line,
  [683] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(206), 1,
      aux_sym__link_token1,
    STATE(75), 1,
      aux_sym__link,
  [693] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(208), 1,
      aux_sym__link_token1,
    STATE(77), 1,
      aux_sym__link,
  [703] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(210), 1,
      aux_sym__embed_directive_token1,
    STATE(139), 1,
      sym__embed_directive,
  [713] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(212), 1,
      aux_sym__link_token1,
    STATE(83), 1,
      aux_sym__line,
  [723] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(214), 1,
      aux_sym__link_token1,
    STATE(85), 1,
      aux_sym__line,
  [733] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(216), 1,
      aux_sym__link_token1,
    STATE(88), 1,
      aux_sym__line,
  [743] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(218), 1,
      aux_sym__link_token1,
    STATE(89), 1,
      aux_sym__line,
  [753] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(220), 1,
      aux_sym__link_token1,
    STATE(90), 1,
      aux_sym__line,
  [763] = 3,
    ACTIONS(184), 1,
      sym__eol,
    ACTIONS(202), 1,
      aux_sym__link_token1,
    STATE(79), 1,
      aux_sym__line,
  [773] = 3,
    ACTIONS(152), 1,
      sym__eol,
    ACTIONS(202), 1,
      aux_sym__link_token1,
    STATE(79), 1,
      aux_sym__line,
  [783] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(222), 1,
      aux_sym__link_token1,
    STATE(69), 1,
      aux_sym__line,
  [793] = 3,
    ACTIONS(119), 1,
      sym__eol,
    ACTIONS(224), 1,
      aux_sym__link_token1,
    STATE(72), 1,
      aux_sym__link,
  [803] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(227), 1,
      aux_sym__link_token1,
    STATE(43), 1,
      aux_sym__line,
  [813] = 3,
    ACTIONS(125), 1,
      sym__eol,
    ACTIONS(202), 1,
      aux_sym__link_token1,
    STATE(79), 1,
      aux_sym__line,
  [823] = 3,
    ACTIONS(129), 1,
      sym__eol,
    ACTIONS(229), 1,
      aux_sym__link_token1,
    STATE(72), 1,
      aux_sym__link,
  [833] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(231), 1,
      aux_sym__link_token1,
    STATE(40), 1,
      aux_sym__line,
  [843] = 3,
    ACTIONS(131), 1,
      sym__eol,
    ACTIONS(229), 1,
      aux_sym__link_token1,
    STATE(72), 1,
      aux_sym__link,
  [853] = 3,
    ACTIONS(133), 1,
      sym__eol,
    ACTIONS(202), 1,
      aux_sym__link_token1,
    STATE(79), 1,
      aux_sym__line,
  [863] = 3,
    ACTIONS(148), 1,
      sym__eol,
    ACTIONS(233), 1,
      aux_sym__link_token1,
    STATE(79), 1,
      aux_sym__line,
  [873] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(236), 1,
      aux_sym__link_token1,
    STATE(21), 1,
      aux_sym__line,
  [883] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(238), 1,
      aux_sym__link_token1,
    STATE(74), 1,
      aux_sym__line,
  [893] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(240), 1,
      aux_sym__link_token1,
    STATE(22), 1,
      aux_sym__link,
  [903] = 3,
    ACTIONS(168), 1,
      sym__eol,
    ACTIONS(202), 1,
      aux_sym__link_token1,
    STATE(79), 1,
      aux_sym__line,
  [913] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(242), 1,
      aux_sym__link_token1,
    STATE(23), 1,
      aux_sym__link,
  [923] = 3,
    ACTIONS(166), 1,
      sym__eol,
    ACTIONS(202), 1,
      aux_sym__link_token1,
    STATE(79), 1,
      aux_sym__line,
  [933] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(244), 1,
      aux_sym__link_token1,
    STATE(24), 1,
      aux_sym__line,
  [943] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(246), 1,
      aux_sym__link_token1,
    STATE(78), 1,
      aux_sym__line,
  [953] = 3,
    ACTIONS(161), 1,
      sym__eol,
    ACTIONS(202), 1,
      aux_sym__link_token1,
    STATE(79), 1,
      aux_sym__line,
  [963] = 3,
    ACTIONS(156), 1,
      sym__eol,
    ACTIONS(202), 1,
      aux_sym__link_token1,
    STATE(79), 1,
      aux_sym__line,
  [973] = 3,
    ACTIONS(154), 1,
      sym__eol,
    ACTIONS(202), 1,
      aux_sym__link_token1,
    STATE(79), 1,
      aux_sym__line,
  [983] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(248), 1,
      aux_sym__link_token1,
    STATE(45), 1,
      aux_sym__line,
  [993] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(250), 1,
      aux_sym__link_token1,
    STATE(46), 1,
      aux_sym__line,
  [1003] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(252), 1,
      aux_sym__embed_directive_token1,
    STATE(127), 1,
      sym__embed_directive,
  [1013] = 2,
    ACTIONS(254), 1,
      sym__eol,
    ACTIONS(256), 1,
      sym__blank_line,
  [1020] = 2,
    ACTIONS(258), 1,
      sym__eol,
    ACTIONS(260), 1,
      sym__blank_line,
  [1027] = 2,
    ACTIONS(262), 1,
      sym__eol,
    ACTIONS(264), 1,
      sym__blank_line,
  [1034] = 2,
    ACTIONS(266), 1,
      sym__eol,
    ACTIONS(268), 1,
      sym__blank_line,
  [1041] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(270), 1,
      sym__field_name,
  [1048] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(272), 1,
      anon_sym_COLON_COLON,
  [1055] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(274), 1,
      anon_sym_COLON,
  [1062] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(276), 1,
      sym__numeric_bullet,
  [1069] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(278), 1,
      sym__field_name,
  [1076] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(280), 1,
      anon_sym_COLON,
  [1083] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(282), 1,
      aux_sym_option_list_item_token1,
  [1090] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(284), 1,
      anon_sym_PIPE,
  [1097] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(286), 1,
      aux_sym_footnote_token1,
  [1104] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(288), 1,
      aux_sym_citation_token1,
  [1111] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(290), 1,
      aux_sym_target_token1,
  [1118] = 2,
    ACTIONS(292), 1,
      sym__eol,
    ACTIONS(294), 1,
      sym__blank_line,
  [1125] = 2,
    ACTIONS(296), 1,
      sym__eol,
    ACTIONS(298), 1,
      sym__blank_line,
  [1132] = 2,
    ACTIONS(300), 1,
      sym__eol,
    ACTIONS(302), 1,
      sym__blank_line,
  [1139] = 1,
    ACTIONS(304), 2,
      sym__eol,
      sym__blank_line,
  [1144] = 2,
    ACTIONS(306), 1,
      sym__eol,
    ACTIONS(308), 1,
      sym__blank_line,
  [1151] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(310), 1,
      sym__blank_line,
  [1158] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(312), 1,
      ts_builtin_sym_end,
  [1165] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(314), 1,
      sym__char_bullet,
  [1172] = 2,
    ACTIONS(316), 1,
      sym__eol,
    ACTIONS(318), 1,
      sym__blank_line,
  [1179] = 2,
    ACTIONS(320), 1,
      sym__eol,
    ACTIONS(322), 1,
      sym__blank_line,
  [1186] = 2,
    ACTIONS(258), 1,
      sym__eol,
    ACTIONS(324), 1,
      sym__blank_line,
  [1193] = 2,
    ACTIONS(326), 1,
      sym__eol,
    ACTIONS(328), 1,
      sym__blank_line,
  [1200] = 2,
    ACTIONS(326), 1,
      sym__eol,
    ACTIONS(330), 1,
      sym__blank_line,
  [1207] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(332), 1,
      anon_sym_COLON,
  [1214] = 2,
    ACTIONS(254), 1,
      sym__eol,
    ACTIONS(334), 1,
      sym__blank_line,
  [1221] = 2,
    ACTIONS(320), 1,
      sym__eol,
    ACTIONS(336), 1,
      sym__blank_line,
  [1228] = 2,
    ACTIONS(316), 1,
      sym__eol,
    ACTIONS(338), 1,
      sym__blank_line,
  [1235] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(340), 1,
      anon_sym___,
  [1242] = 1,
    ACTIONS(342), 2,
      sym__eol,
      sym__blank_line,
  [1247] = 2,
    ACTIONS(262), 1,
      sym__eol,
    ACTIONS(344), 1,
      sym__blank_line,
  [1254] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(346), 1,
      anon_sym_COLON_COLON,
  [1261] = 2,
    ACTIONS(266), 1,
      sym__eol,
    ACTIONS(348), 1,
      sym__blank_line,
  [1268] = 2,
    ACTIONS(292), 1,
      sym__eol,
    ACTIONS(350), 1,
      sym__blank_line,
  [1275] = 2,
    ACTIONS(296), 1,
      sym__eol,
    ACTIONS(352), 1,
      sym__blank_line,
  [1282] = 2,
    ACTIONS(300), 1,
      sym__eol,
    ACTIONS(354), 1,
      sym__blank_line,
  [1289] = 2,
    ACTIONS(306), 1,
      sym__eol,
    ACTIONS(356), 1,
      sym__blank_line,
  [1296] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(358), 1,
      aux_sym_directive_token1,
  [1303] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(360), 1,
      aux_sym__link_token1,
  [1310] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(362), 1,
      aux_sym_substitution_definition_token1,
  [1317] = 1,
    ACTIONS(304), 1,
      sym__eol,
  [1321] = 1,
    ACTIONS(342), 1,
      sym__eol,
  [1325] = 1,
    ACTIONS(326), 1,
      sym__eol,
  [1329] = 1,
    ACTIONS(258), 1,
      sym__eol,
  [1333] = 1,
    ACTIONS(320), 1,
      sym__eol,
  [1337] = 1,
    ACTIONS(316), 1,
      sym__eol,
  [1341] = 1,
    ACTIONS(254), 1,
      sym__eol,
  [1345] = 1,
    ACTIONS(262), 1,
      sym__eol,
  [1349] = 1,
    ACTIONS(266), 1,
      sym__eol,
  [1353] = 1,
    ACTIONS(292), 1,
      sym__eol,
  [1357] = 1,
    ACTIONS(296), 1,
      sym__eol,
  [1361] = 1,
    ACTIONS(300), 1,
      sym__eol,
  [1365] = 1,
    ACTIONS(306), 1,
      sym__eol,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 22,
  [SMALL_STATE(6)] = 33,
  [SMALL_STATE(7)] = 44,
  [SMALL_STATE(8)] = 55,
  [SMALL_STATE(9)] = 66,
  [SMALL_STATE(10)] = 76,
  [SMALL_STATE(11)] = 86,
  [SMALL_STATE(12)] = 96,
  [SMALL_STATE(13)] = 106,
  [SMALL_STATE(14)] = 116,
  [SMALL_STATE(15)] = 126,
  [SMALL_STATE(16)] = 136,
  [SMALL_STATE(17)] = 146,
  [SMALL_STATE(18)] = 159,
  [SMALL_STATE(19)] = 172,
  [SMALL_STATE(20)] = 183,
  [SMALL_STATE(21)] = 196,
  [SMALL_STATE(22)] = 207,
  [SMALL_STATE(23)] = 218,
  [SMALL_STATE(24)] = 229,
  [SMALL_STATE(25)] = 240,
  [SMALL_STATE(26)] = 253,
  [SMALL_STATE(27)] = 266,
  [SMALL_STATE(28)] = 279,
  [SMALL_STATE(29)] = 290,
  [SMALL_STATE(30)] = 303,
  [SMALL_STATE(31)] = 316,
  [SMALL_STATE(32)] = 329,
  [SMALL_STATE(33)] = 342,
  [SMALL_STATE(34)] = 355,
  [SMALL_STATE(35)] = 368,
  [SMALL_STATE(36)] = 381,
  [SMALL_STATE(37)] = 394,
  [SMALL_STATE(38)] = 407,
  [SMALL_STATE(39)] = 418,
  [SMALL_STATE(40)] = 431,
  [SMALL_STATE(41)] = 442,
  [SMALL_STATE(42)] = 453,
  [SMALL_STATE(43)] = 466,
  [SMALL_STATE(44)] = 477,
  [SMALL_STATE(45)] = 490,
  [SMALL_STATE(46)] = 501,
  [SMALL_STATE(47)] = 512,
  [SMALL_STATE(48)] = 525,
  [SMALL_STATE(49)] = 538,
  [SMALL_STATE(50)] = 551,
  [SMALL_STATE(51)] = 564,
  [SMALL_STATE(52)] = 577,
  [SMALL_STATE(53)] = 588,
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
  [SMALL_STATE(91)] = 983,
  [SMALL_STATE(92)] = 993,
  [SMALL_STATE(93)] = 1003,
  [SMALL_STATE(94)] = 1013,
  [SMALL_STATE(95)] = 1020,
  [SMALL_STATE(96)] = 1027,
  [SMALL_STATE(97)] = 1034,
  [SMALL_STATE(98)] = 1041,
  [SMALL_STATE(99)] = 1048,
  [SMALL_STATE(100)] = 1055,
  [SMALL_STATE(101)] = 1062,
  [SMALL_STATE(102)] = 1069,
  [SMALL_STATE(103)] = 1076,
  [SMALL_STATE(104)] = 1083,
  [SMALL_STATE(105)] = 1090,
  [SMALL_STATE(106)] = 1097,
  [SMALL_STATE(107)] = 1104,
  [SMALL_STATE(108)] = 1111,
  [SMALL_STATE(109)] = 1118,
  [SMALL_STATE(110)] = 1125,
  [SMALL_STATE(111)] = 1132,
  [SMALL_STATE(112)] = 1139,
  [SMALL_STATE(113)] = 1144,
  [SMALL_STATE(114)] = 1151,
  [SMALL_STATE(115)] = 1158,
  [SMALL_STATE(116)] = 1165,
  [SMALL_STATE(117)] = 1172,
  [SMALL_STATE(118)] = 1179,
  [SMALL_STATE(119)] = 1186,
  [SMALL_STATE(120)] = 1193,
  [SMALL_STATE(121)] = 1200,
  [SMALL_STATE(122)] = 1207,
  [SMALL_STATE(123)] = 1214,
  [SMALL_STATE(124)] = 1221,
  [SMALL_STATE(125)] = 1228,
  [SMALL_STATE(126)] = 1235,
  [SMALL_STATE(127)] = 1242,
  [SMALL_STATE(128)] = 1247,
  [SMALL_STATE(129)] = 1254,
  [SMALL_STATE(130)] = 1261,
  [SMALL_STATE(131)] = 1268,
  [SMALL_STATE(132)] = 1275,
  [SMALL_STATE(133)] = 1282,
  [SMALL_STATE(134)] = 1289,
  [SMALL_STATE(135)] = 1296,
  [SMALL_STATE(136)] = 1303,
  [SMALL_STATE(137)] = 1310,
  [SMALL_STATE(138)] = 1317,
  [SMALL_STATE(139)] = 1321,
  [SMALL_STATE(140)] = 1325,
  [SMALL_STATE(141)] = 1329,
  [SMALL_STATE(142)] = 1333,
  [SMALL_STATE(143)] = 1337,
  [SMALL_STATE(144)] = 1341,
  [SMALL_STATE(145)] = 1345,
  [SMALL_STATE(146)] = 1349,
  [SMALL_STATE(147)] = 1353,
  [SMALL_STATE(148)] = 1357,
  [SMALL_STATE(149)] = 1361,
  [SMALL_STATE(150)] = 1365,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(76),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(60),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(102),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(73),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(5),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(91),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(92),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(6),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(27),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(7),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(8),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(93),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(3),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__body_elements, 2),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__body_elements, 2),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_block, 1),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 1),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__anonymous_target, 1),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__link, 2), SHIFT_REPEAT(19),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__link, 2),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__anonymous_target, 3),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 3),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_block, 3),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__substitution_definition_block_repeat1, 2), SHIFT_REPEAT(63),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__directive_block_repeat1, 2), SHIFT_REPEAT(11),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 1),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__line, 2), SHIFT_REPEAT(28),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__line, 2),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_body, 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bullet_list_item, 2),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__enumerated_list_item, 2),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__anoynymous_hyperlink_target_block_repeat1, 2), SHIFT_REPEAT(12),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_list_item, 2),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hyperlink_target_block_repeat1, 2), SHIFT_REPEAT(13),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footnote, 2),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_citation, 2),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__citation_block_repeat1, 2), SHIFT_REPEAT(64),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__footnote_block_repeat1, 2), SHIFT_REPEAT(65),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_block_repeat1, 2), SHIFT_REPEAT(14),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_option_list_repeat1, 2), SHIFT_REPEAT(66),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__embed_directive, 4),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(59),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enumerated_list_repeat1, 2), SHIFT_REPEAT(67),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bullet_list_repeat1, 2), SHIFT_REPEAT(68),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_list_repeat1, 2), SHIFT_REPEAT(98),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__link, 2), SHIFT_REPEAT(72),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [233] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__line, 2), SHIFT_REPEAT(79),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__citation_block, 2),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directive_block, 2),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__footnote_block, 1),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_block, 1),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enumerated_list_repeat1, 2, .production_id = 1),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_list_repeat1, 2),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_option_list_repeat1, 2),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_block_repeat1, 2),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__footnote_block_repeat1, 2),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__citation_block_repeat1, 2),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hyperlink_target_block_repeat1, 2),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_list, 1),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_list, 1),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumerated_list, 1, .production_id = 1),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 5),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bullet_list, 1, .production_id = 1),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [312] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bullet_list_repeat1, 2, .production_id = 1),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hyperlink_target_block, 1),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__anoynymous_hyperlink_target_block, 1),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directive_block, 1),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__substitution_definition_block, 1),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__substitution_definition_block, 2),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__citation_block, 1),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__anoynymous_hyperlink_target_block, 2),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hyperlink_target_block, 2),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__anoynymous_hyperlink_target_block_repeat1, 2),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_substitution_definition, 2),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__footnote_block, 2),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_block, 2),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_list, 2),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_list, 2),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumerated_list, 2, .production_id = 2),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bullet_list, 2, .production_id = 2),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__directive_block_repeat1, 2),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__substitution_definition_block_repeat1, 2),
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
