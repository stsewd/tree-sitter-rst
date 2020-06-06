#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 135
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 65
#define ALIAS_COUNT 1
#define TOKEN_COUNT 23
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4

enum {
  aux_sym_paragraph_token1 = 1,
  sym__char_bullet = 2,
  aux_sym__enumerated_list_item_token1 = 3,
  aux_sym_field_token1 = 4,
  aux_sym_option_list_item_token1 = 5,
  anon_sym_PIPE = 6,
  aux_sym__single_line_block_token1 = 7,
  aux_sym_footnote_token1 = 8,
  aux_sym_citation_token1 = 9,
  aux_sym_target_token1 = 10,
  aux_sym_target_token2 = 11,
  anon_sym___ = 12,
  aux_sym_directive_token1 = 13,
  anon_sym_ = 14,
  anon_sym_TAB = 15,
  anon_sym_2 = 16,
  anon_sym_3 = 17,
  aux_sym_substitution_definition_token1 = 18,
  aux_sym__embed_directive_token1 = 19,
  anon_sym_COLON_COLON = 20,
  sym__eol = 21,
  sym__blank_line = 22,
  sym_document = 23,
  sym__body_elements = 24,
  sym_paragraph = 25,
  sym__lists = 26,
  sym_bullet_list = 27,
  sym__bullet_list_item = 28,
  sym_enumerated_list = 29,
  sym__enumerated_list_item = 30,
  sym_field_list = 31,
  sym_field = 32,
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
  sym__anoynymous_hyperlink_target_block = 44,
  sym__anonymous_target = 45,
  sym__directive_block = 46,
  sym_directive = 47,
  sym__substitution_definition_block = 48,
  sym_substitution_definition = 49,
  sym__embed_directive = 50,
  aux_sym_document_repeat1 = 51,
  aux_sym_paragraph_repeat1 = 52,
  aux_sym_paragraph_repeat2 = 53,
  aux_sym_bullet_list_repeat1 = 54,
  aux_sym_enumerated_list_repeat1 = 55,
  aux_sym_field_list_repeat1 = 56,
  aux_sym_option_list_repeat1 = 57,
  aux_sym_line_block_repeat1 = 58,
  aux_sym__footnote_block_repeat1 = 59,
  aux_sym__citation_block_repeat1 = 60,
  aux_sym__hyperlink_target_block_repeat1 = 61,
  aux_sym__anoynymous_hyperlink_target_block_repeat1 = 62,
  aux_sym__directive_block_repeat1 = 63,
  aux_sym__substitution_definition_block_repeat1 = 64,
  alias_sym_list_item = 65,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_paragraph_token1] = "paragraph_token1",
  [sym__char_bullet] = "_char_bullet",
  [aux_sym__enumerated_list_item_token1] = "_enumerated_list_item_token1",
  [aux_sym_field_token1] = "field_token1",
  [aux_sym_option_list_item_token1] = "option_list_item_token1",
  [anon_sym_PIPE] = "|",
  [aux_sym__single_line_block_token1] = "_single_line_block_token1",
  [aux_sym_footnote_token1] = "footnote_token1",
  [aux_sym_citation_token1] = "citation_token1",
  [aux_sym_target_token1] = "target_token1",
  [aux_sym_target_token2] = "target_token2",
  [anon_sym___] = "__",
  [aux_sym_directive_token1] = "directive_token1",
  [anon_sym_] = " ",
  [anon_sym_TAB] = "\t",
  [anon_sym_2] = "",
  [anon_sym_3] = "\f",
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
  [sym__anoynymous_hyperlink_target_block] = "_anoynymous_hyperlink_target_block",
  [sym__anonymous_target] = "target",
  [sym__directive_block] = "_directive_block",
  [sym_directive] = "directive",
  [sym__substitution_definition_block] = "_substitution_definition_block",
  [sym_substitution_definition] = "substitution_definition",
  [sym__embed_directive] = "_embed_directive",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_paragraph_repeat1] = "paragraph_repeat1",
  [aux_sym_paragraph_repeat2] = "paragraph_repeat2",
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
  [aux_sym_paragraph_token1] = aux_sym_paragraph_token1,
  [sym__char_bullet] = sym__char_bullet,
  [aux_sym__enumerated_list_item_token1] = aux_sym__enumerated_list_item_token1,
  [aux_sym_field_token1] = aux_sym_field_token1,
  [aux_sym_option_list_item_token1] = aux_sym_option_list_item_token1,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [aux_sym__single_line_block_token1] = aux_sym__single_line_block_token1,
  [aux_sym_footnote_token1] = aux_sym_footnote_token1,
  [aux_sym_citation_token1] = aux_sym_citation_token1,
  [aux_sym_target_token1] = aux_sym_target_token1,
  [aux_sym_target_token2] = aux_sym_target_token2,
  [anon_sym___] = anon_sym___,
  [aux_sym_directive_token1] = aux_sym_directive_token1,
  [anon_sym_] = anon_sym_,
  [anon_sym_TAB] = anon_sym_TAB,
  [anon_sym_2] = anon_sym_2,
  [anon_sym_3] = anon_sym_3,
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
  [sym__anoynymous_hyperlink_target_block] = sym__anoynymous_hyperlink_target_block,
  [sym__anonymous_target] = sym_target,
  [sym__directive_block] = sym__directive_block,
  [sym_directive] = sym_directive,
  [sym__substitution_definition_block] = sym__substitution_definition_block,
  [sym_substitution_definition] = sym_substitution_definition,
  [sym__embed_directive] = sym__embed_directive,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_paragraph_repeat1] = aux_sym_paragraph_repeat1,
  [aux_sym_paragraph_repeat2] = aux_sym_paragraph_repeat2,
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
  [aux_sym_paragraph_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__char_bullet] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__enumerated_list_item_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_field_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_option_list_item_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__single_line_block_token1] = {
    .visible = false,
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
  [aux_sym_target_token2] = {
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
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_paragraph_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_paragraph_repeat2] = {
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
      if (eof) ADVANCE(54);
      if (lookahead == '\t') ADVANCE(81);
      if (lookahead == 11) ADVANCE(82);
      if (lookahead == '\f') ADVANCE(83);
      if (lookahead == ' ') ADVANCE(80);
      if (lookahead == '#') ADVANCE(56);
      if (lookahead == '*' ||
          lookahead == 8226 ||
          lookahead == 8227 ||
          lookahead == 8259) ADVANCE(62);
      if (lookahead == '+') ADVANCE(64);
      if (lookahead == '-') ADVANCE(63);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == '_') ADVANCE(61);
      if (lookahead == '|') ADVANCE(71);
      if (lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'I' ||
          lookahead == 'L' ||
          lookahead == 'M' ||
          lookahead == 'V' ||
          lookahead == 'X') ADVANCE(57);
      if (lookahead == 'c' ||
          lookahead == 'd' ||
          lookahead == 'i' ||
          lookahead == 'l' ||
          lookahead == 'm' ||
          lookahead == 'v' ||
          lookahead == 'x') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(56);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(81);
      if (lookahead == 11) ADVANCE(82);
      if (lookahead == '\f') ADVANCE(83);
      if (lookahead == ' ') ADVANCE(80);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == ':') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(4);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(24);
      if (lookahead == '*') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 4:
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '/') ADVANCE(47);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'I' ||
          lookahead == 'L' ||
          lookahead == 'M' ||
          lookahead == 'V' ||
          lookahead == 'X') ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == 'c' ||
          lookahead == 'd' ||
          lookahead == 'i' ||
          lookahead == 'l' ||
          lookahead == 'm' ||
          lookahead == 'v' ||
          lookahead == 'x') ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(42);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(75);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == '_') ADVANCE(28);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(75);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(76);
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == '`') ADVANCE(11);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(76);
      if (lookahead == '`') ADVANCE(28);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(79);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(29);
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == '`') ADVANCE(11);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(87);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(39);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '[') ADVANCE(3);
      if (lookahead == '_') ADVANCE(27);
      if (lookahead == '|') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 21:
      if (lookahead == '[') ADVANCE(49);
      END_STATE();
    case 22:
      if (lookahead == ']') ADVANCE(40);
      END_STATE();
    case 23:
      if (lookahead == ']') ADVANCE(40);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 24:
      if (lookahead == ']') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead == ']') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == ']') ADVANCE(41);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == '_') ADVANCE(10);
      if (lookahead == '`') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(12);
      END_STATE();
    case 28:
      if (lookahead == '_') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(11);
      END_STATE();
    case 29:
      if (lookahead == '`') ADVANCE(10);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == '|') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(85);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(84);
      if (lookahead == '\r') ADVANCE(33);
      if (lookahead == '|') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(30);
      END_STATE();
    case 32:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f') ADVANCE(37);
      if (lookahead == ' ') ADVANCE(38);
      if (lookahead == ',') ADVANCE(2);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(30);
      END_STATE();
    case 34:
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 35:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(68);
      END_STATE();
    case 36:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(20);
      END_STATE();
    case 37:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(70);
      END_STATE();
    case 38:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 39:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(69);
      END_STATE();
    case 40:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(73);
      END_STATE();
    case 41:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(74);
      END_STATE();
    case 42:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(21);
      END_STATE();
    case 43:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(51);
      END_STATE();
    case 44:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(37);
      if (lookahead == ',') ADVANCE(2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 45:
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '_') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 46:
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '_') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 50:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 51:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 52:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(30);
      END_STATE();
    case 53:
      if (eof) ADVANCE(54);
      if (lookahead == '#') ADVANCE(56);
      if (lookahead == '*' ||
          lookahead == 8226 ||
          lookahead == 8227 ||
          lookahead == 8259) ADVANCE(62);
      if (lookahead == '+') ADVANCE(64);
      if (lookahead == '-') ADVANCE(63);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == '_') ADVANCE(61);
      if (lookahead == '|') ADVANCE(71);
      if (lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'I' ||
          lookahead == 'L' ||
          lookahead == 'M' ||
          lookahead == 'V' ||
          lookahead == 'X') ADVANCE(57);
      if (lookahead == 'c' ||
          lookahead == 'd' ||
          lookahead == 'i' ||
          lookahead == 'l' ||
          lookahead == 'm' ||
          lookahead == 'v' ||
          lookahead == 'x') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(56);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_paragraph_token1);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_paragraph_token1);
      if (lookahead == '.') ADVANCE(35);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_paragraph_token1);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'I' ||
          lookahead == 'L' ||
          lookahead == 'M' ||
          lookahead == 'V' ||
          lookahead == 'X') ADVANCE(6);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_paragraph_token1);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == 'c' ||
          lookahead == 'd' ||
          lookahead == 'i' ||
          lookahead == 'l' ||
          lookahead == 'm' ||
          lookahead == 'v' ||
          lookahead == 'x') ADVANCE(7);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_paragraph_token1);
      if (lookahead == '.') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_paragraph_token1);
      if (lookahead == '.') ADVANCE(36);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_paragraph_token1);
      if (lookahead == '_') ADVANCE(78);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_paragraph_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(67);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_paragraph_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(67);
      if (lookahead == '-') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_paragraph_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_paragraph_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_paragraph_token1);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(19);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym__char_bullet);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym__enumerated_list_item_token1);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_field_token1);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_option_list_item_token1);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(72);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym__single_line_block_token1);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_footnote_token1);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_citation_token1);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_target_token1);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == '`') ADVANCE(10);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_target_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym___);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '_') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_TAB);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_3);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_substitution_definition_token1);
      if (lookahead == '|') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(30);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_substitution_definition_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(30);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym__embed_directive_token1);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '_') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 53, .external_lex_state = 1},
  [2] = {.lex_state = 53, .external_lex_state = 1},
  [3] = {.lex_state = 53, .external_lex_state = 1},
  [4] = {.lex_state = 53, .external_lex_state = 1},
  [5] = {.lex_state = 1, .external_lex_state = 1},
  [6] = {.lex_state = 1, .external_lex_state = 2},
  [7] = {.lex_state = 1, .external_lex_state = 2},
  [8] = {.lex_state = 1, .external_lex_state = 2},
  [9] = {.lex_state = 0, .external_lex_state = 2},
  [10] = {.lex_state = 0, .external_lex_state = 2},
  [11] = {.lex_state = 50, .external_lex_state = 1},
  [12] = {.lex_state = 1, .external_lex_state = 2},
  [13] = {.lex_state = 0, .external_lex_state = 2},
  [14] = {.lex_state = 0, .external_lex_state = 2},
  [15] = {.lex_state = 0, .external_lex_state = 2},
  [16] = {.lex_state = 0, .external_lex_state = 2},
  [17] = {.lex_state = 0, .external_lex_state = 2},
  [18] = {.lex_state = 0, .external_lex_state = 2},
  [19] = {.lex_state = 0, .external_lex_state = 2},
  [20] = {.lex_state = 0, .external_lex_state = 2},
  [21] = {.lex_state = 50, .external_lex_state = 2},
  [22] = {.lex_state = 50, .external_lex_state = 1},
  [23] = {.lex_state = 0, .external_lex_state = 2},
  [24] = {.lex_state = 50, .external_lex_state = 1},
  [25] = {.lex_state = 50, .external_lex_state = 1},
  [26] = {.lex_state = 50, .external_lex_state = 1},
  [27] = {.lex_state = 50, .external_lex_state = 1},
  [28] = {.lex_state = 50, .external_lex_state = 1},
  [29] = {.lex_state = 50, .external_lex_state = 1},
  [30] = {.lex_state = 50, .external_lex_state = 1},
  [31] = {.lex_state = 50, .external_lex_state = 1},
  [32] = {.lex_state = 50, .external_lex_state = 2},
  [33] = {.lex_state = 0, .external_lex_state = 2},
  [34] = {.lex_state = 0, .external_lex_state = 2},
  [35] = {.lex_state = 0, .external_lex_state = 2},
  [36] = {.lex_state = 0, .external_lex_state = 2},
  [37] = {.lex_state = 0, .external_lex_state = 2},
  [38] = {.lex_state = 1, .external_lex_state = 2},
  [39] = {.lex_state = 0, .external_lex_state = 2},
  [40] = {.lex_state = 0, .external_lex_state = 2},
  [41] = {.lex_state = 0, .external_lex_state = 2},
  [42] = {.lex_state = 0, .external_lex_state = 2},
  [43] = {.lex_state = 50, .external_lex_state = 1},
  [44] = {.lex_state = 50, .external_lex_state = 1},
  [45] = {.lex_state = 50, .external_lex_state = 2},
  [46] = {.lex_state = 50, .external_lex_state = 2},
  [47] = {.lex_state = 50, .external_lex_state = 2},
  [48] = {.lex_state = 50, .external_lex_state = 2},
  [49] = {.lex_state = 50, .external_lex_state = 2},
  [50] = {.lex_state = 50, .external_lex_state = 2},
  [51] = {.lex_state = 50, .external_lex_state = 2},
  [52] = {.lex_state = 50, .external_lex_state = 2},
  [53] = {.lex_state = 50, .external_lex_state = 2},
  [54] = {.lex_state = 50, .external_lex_state = 2},
  [55] = {.lex_state = 50, .external_lex_state = 2},
  [56] = {.lex_state = 50, .external_lex_state = 2},
  [57] = {.lex_state = 50, .external_lex_state = 2},
  [58] = {.lex_state = 50, .external_lex_state = 2},
  [59] = {.lex_state = 0, .external_lex_state = 2},
  [60] = {.lex_state = 50, .external_lex_state = 2},
  [61] = {.lex_state = 50, .external_lex_state = 2},
  [62] = {.lex_state = 50, .external_lex_state = 2},
  [63] = {.lex_state = 50, .external_lex_state = 2},
  [64] = {.lex_state = 50, .external_lex_state = 2},
  [65] = {.lex_state = 50, .external_lex_state = 2},
  [66] = {.lex_state = 50, .external_lex_state = 2},
  [67] = {.lex_state = 50, .external_lex_state = 2},
  [68] = {.lex_state = 50, .external_lex_state = 2},
  [69] = {.lex_state = 50, .external_lex_state = 2},
  [70] = {.lex_state = 50, .external_lex_state = 2},
  [71] = {.lex_state = 50, .external_lex_state = 2},
  [72] = {.lex_state = 1, .external_lex_state = 2},
  [73] = {.lex_state = 50, .external_lex_state = 2},
  [74] = {.lex_state = 1, .external_lex_state = 2},
  [75] = {.lex_state = 43, .external_lex_state = 1},
  [76] = {.lex_state = 43, .external_lex_state = 1},
  [77] = {.lex_state = 50, .external_lex_state = 2},
  [78] = {.lex_state = 50, .external_lex_state = 2},
  [79] = {.lex_state = 0, .external_lex_state = 2},
  [80] = {.lex_state = 0, .external_lex_state = 2},
  [81] = {.lex_state = 0, .external_lex_state = 1},
  [82] = {.lex_state = 0, .external_lex_state = 1},
  [83] = {.lex_state = 0, .external_lex_state = 1},
  [84] = {.lex_state = 0, .external_lex_state = 2},
  [85] = {.lex_state = 0, .external_lex_state = 1},
  [86] = {.lex_state = 0, .external_lex_state = 1},
  [87] = {.lex_state = 0, .external_lex_state = 1},
  [88] = {.lex_state = 0, .external_lex_state = 1},
  [89] = {.lex_state = 0, .external_lex_state = 1},
  [90] = {.lex_state = 0, .external_lex_state = 1},
  [91] = {.lex_state = 50, .external_lex_state = 2},
  [92] = {.lex_state = 0, .external_lex_state = 2},
  [93] = {.lex_state = 0, .external_lex_state = 2},
  [94] = {.lex_state = 0, .external_lex_state = 2},
  [95] = {.lex_state = 0, .external_lex_state = 1},
  [96] = {.lex_state = 1, .external_lex_state = 2},
  [97] = {.lex_state = 0, .external_lex_state = 2},
  [98] = {.lex_state = 0, .external_lex_state = 2},
  [99] = {.lex_state = 1, .external_lex_state = 2},
  [100] = {.lex_state = 0, .external_lex_state = 1},
  [101] = {.lex_state = 0, .external_lex_state = 1},
  [102] = {.lex_state = 0, .external_lex_state = 1},
  [103] = {.lex_state = 0, .external_lex_state = 1},
  [104] = {.lex_state = 0, .external_lex_state = 1},
  [105] = {.lex_state = 0, .external_lex_state = 2},
  [106] = {.lex_state = 0, .external_lex_state = 1},
  [107] = {.lex_state = 0, .external_lex_state = 2},
  [108] = {.lex_state = 0, .external_lex_state = 1},
  [109] = {.lex_state = 43, .external_lex_state = 2},
  [110] = {.lex_state = 43, .external_lex_state = 2},
  [111] = {.lex_state = 1, .external_lex_state = 2},
  [112] = {.lex_state = 0, .external_lex_state = 1},
  [113] = {.lex_state = 0, .external_lex_state = 1},
  [114] = {.lex_state = 0, .external_lex_state = 1},
  [115] = {.lex_state = 0, .external_lex_state = 1},
  [116] = {.lex_state = 0, .external_lex_state = 1},
  [117] = {.lex_state = 0, .external_lex_state = 1},
  [118] = {.lex_state = 0, .external_lex_state = 1},
  [119] = {.lex_state = 0, .external_lex_state = 1},
  [120] = {.lex_state = 0, .external_lex_state = 1},
  [121] = {.lex_state = 0, .external_lex_state = 2},
  [122] = {.lex_state = 0, .external_lex_state = 2},
  [123] = {.lex_state = 0, .external_lex_state = 2},
  [124] = {.lex_state = 0, .external_lex_state = 2},
  [125] = {.lex_state = 0, .external_lex_state = 2},
  [126] = {.lex_state = 0, .external_lex_state = 2},
  [127] = {.lex_state = 0, .external_lex_state = 2},
  [128] = {.lex_state = 0, .external_lex_state = 2},
  [129] = {.lex_state = 0, .external_lex_state = 2},
  [130] = {.lex_state = 0, .external_lex_state = 2},
  [131] = {.lex_state = 0, .external_lex_state = 2},
  [132] = {.lex_state = 0, .external_lex_state = 2},
  [133] = {.lex_state = 0, .external_lex_state = 2},
  [134] = {.lex_state = 0, .external_lex_state = 2},
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
    [aux_sym_paragraph_token1] = ACTIONS(1),
    [sym__char_bullet] = ACTIONS(1),
    [aux_sym__enumerated_list_item_token1] = ACTIONS(1),
    [aux_sym_field_token1] = ACTIONS(1),
    [aux_sym_option_list_item_token1] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [aux_sym__single_line_block_token1] = ACTIONS(1),
    [aux_sym_footnote_token1] = ACTIONS(1),
    [aux_sym_citation_token1] = ACTIONS(1),
    [aux_sym_target_token1] = ACTIONS(1),
    [anon_sym___] = ACTIONS(1),
    [aux_sym_directive_token1] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_TAB] = ACTIONS(1),
    [anon_sym_2] = ACTIONS(1),
    [anon_sym_3] = ACTIONS(1),
    [aux_sym_substitution_definition_token1] = ACTIONS(1),
    [sym__eol] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(84),
    [sym__body_elements] = STATE(3),
    [sym_paragraph] = STATE(100),
    [sym__lists] = STATE(100),
    [sym_bullet_list] = STATE(100),
    [sym__bullet_list_item] = STATE(101),
    [sym_enumerated_list] = STATE(100),
    [sym__enumerated_list_item] = STATE(102),
    [sym_field_list] = STATE(100),
    [sym_field] = STATE(103),
    [sym_option_list] = STATE(100),
    [sym_option_list_item] = STATE(104),
    [sym_line_block] = STATE(100),
    [sym__single_line_block] = STATE(119),
    [sym__markup_blocks] = STATE(100),
    [sym__footnote_block] = STATE(100),
    [sym_footnote] = STATE(120),
    [sym__citation_block] = STATE(100),
    [sym_citation] = STATE(118),
    [sym__hyperlink_target_block] = STATE(100),
    [sym_target] = STATE(117),
    [sym__anoynymous_hyperlink_target_block] = STATE(100),
    [sym__anonymous_target] = STATE(116),
    [sym__directive_block] = STATE(100),
    [sym_directive] = STATE(115),
    [sym__substitution_definition_block] = STATE(100),
    [sym_substitution_definition] = STATE(114),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_paragraph_repeat1] = STATE(31),
    [aux_sym_paragraph_repeat2] = STATE(32),
    [aux_sym_bullet_list_repeat1] = STATE(33),
    [aux_sym_enumerated_list_repeat1] = STATE(34),
    [aux_sym_field_list_repeat1] = STATE(35),
    [aux_sym_option_list_repeat1] = STATE(36),
    [aux_sym_line_block_repeat1] = STATE(10),
    [aux_sym__footnote_block_repeat1] = STATE(37),
    [aux_sym__citation_block_repeat1] = STATE(38),
    [aux_sym__hyperlink_target_block_repeat1] = STATE(39),
    [aux_sym__anoynymous_hyperlink_target_block_repeat1] = STATE(18),
    [aux_sym__directive_block_repeat1] = STATE(41),
    [aux_sym__substitution_definition_block_repeat1] = STATE(42),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_paragraph_token1] = ACTIONS(7),
    [sym__char_bullet] = ACTIONS(9),
    [aux_sym__enumerated_list_item_token1] = ACTIONS(11),
    [aux_sym_field_token1] = ACTIONS(13),
    [aux_sym_option_list_item_token1] = ACTIONS(15),
    [anon_sym_PIPE] = ACTIONS(17),
    [aux_sym__single_line_block_token1] = ACTIONS(19),
    [aux_sym_footnote_token1] = ACTIONS(21),
    [aux_sym_citation_token1] = ACTIONS(23),
    [aux_sym_target_token1] = ACTIONS(25),
    [anon_sym___] = ACTIONS(27),
    [aux_sym_directive_token1] = ACTIONS(29),
    [aux_sym_substitution_definition_token1] = ACTIONS(31),
    [sym__eol] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(33),
  },
  [2] = {
    [sym__body_elements] = STATE(2),
    [sym_paragraph] = STATE(100),
    [sym__lists] = STATE(100),
    [sym_bullet_list] = STATE(100),
    [sym__bullet_list_item] = STATE(101),
    [sym_enumerated_list] = STATE(100),
    [sym__enumerated_list_item] = STATE(102),
    [sym_field_list] = STATE(100),
    [sym_field] = STATE(103),
    [sym_option_list] = STATE(100),
    [sym_option_list_item] = STATE(104),
    [sym_line_block] = STATE(100),
    [sym__single_line_block] = STATE(119),
    [sym__markup_blocks] = STATE(100),
    [sym__footnote_block] = STATE(100),
    [sym_footnote] = STATE(120),
    [sym__citation_block] = STATE(100),
    [sym_citation] = STATE(118),
    [sym__hyperlink_target_block] = STATE(100),
    [sym_target] = STATE(117),
    [sym__anoynymous_hyperlink_target_block] = STATE(100),
    [sym__anonymous_target] = STATE(116),
    [sym__directive_block] = STATE(100),
    [sym_directive] = STATE(115),
    [sym__substitution_definition_block] = STATE(100),
    [sym_substitution_definition] = STATE(114),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_paragraph_repeat1] = STATE(31),
    [aux_sym_paragraph_repeat2] = STATE(32),
    [aux_sym_bullet_list_repeat1] = STATE(33),
    [aux_sym_enumerated_list_repeat1] = STATE(34),
    [aux_sym_field_list_repeat1] = STATE(35),
    [aux_sym_option_list_repeat1] = STATE(36),
    [aux_sym_line_block_repeat1] = STATE(10),
    [aux_sym__footnote_block_repeat1] = STATE(37),
    [aux_sym__citation_block_repeat1] = STATE(38),
    [aux_sym__hyperlink_target_block_repeat1] = STATE(39),
    [aux_sym__anoynymous_hyperlink_target_block_repeat1] = STATE(18),
    [aux_sym__directive_block_repeat1] = STATE(41),
    [aux_sym__substitution_definition_block_repeat1] = STATE(42),
    [ts_builtin_sym_end] = ACTIONS(35),
    [aux_sym_paragraph_token1] = ACTIONS(37),
    [sym__char_bullet] = ACTIONS(40),
    [aux_sym__enumerated_list_item_token1] = ACTIONS(43),
    [aux_sym_field_token1] = ACTIONS(46),
    [aux_sym_option_list_item_token1] = ACTIONS(49),
    [anon_sym_PIPE] = ACTIONS(52),
    [aux_sym__single_line_block_token1] = ACTIONS(55),
    [aux_sym_footnote_token1] = ACTIONS(58),
    [aux_sym_citation_token1] = ACTIONS(61),
    [aux_sym_target_token1] = ACTIONS(64),
    [anon_sym___] = ACTIONS(67),
    [aux_sym_directive_token1] = ACTIONS(70),
    [aux_sym_substitution_definition_token1] = ACTIONS(73),
    [sym__eol] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(76),
  },
  [3] = {
    [sym__body_elements] = STATE(2),
    [sym_paragraph] = STATE(100),
    [sym__lists] = STATE(100),
    [sym_bullet_list] = STATE(100),
    [sym__bullet_list_item] = STATE(101),
    [sym_enumerated_list] = STATE(100),
    [sym__enumerated_list_item] = STATE(102),
    [sym_field_list] = STATE(100),
    [sym_field] = STATE(103),
    [sym_option_list] = STATE(100),
    [sym_option_list_item] = STATE(104),
    [sym_line_block] = STATE(100),
    [sym__single_line_block] = STATE(119),
    [sym__markup_blocks] = STATE(100),
    [sym__footnote_block] = STATE(100),
    [sym_footnote] = STATE(120),
    [sym__citation_block] = STATE(100),
    [sym_citation] = STATE(118),
    [sym__hyperlink_target_block] = STATE(100),
    [sym_target] = STATE(117),
    [sym__anoynymous_hyperlink_target_block] = STATE(100),
    [sym__anonymous_target] = STATE(116),
    [sym__directive_block] = STATE(100),
    [sym_directive] = STATE(115),
    [sym__substitution_definition_block] = STATE(100),
    [sym_substitution_definition] = STATE(114),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_paragraph_repeat1] = STATE(31),
    [aux_sym_paragraph_repeat2] = STATE(32),
    [aux_sym_bullet_list_repeat1] = STATE(33),
    [aux_sym_enumerated_list_repeat1] = STATE(34),
    [aux_sym_field_list_repeat1] = STATE(35),
    [aux_sym_option_list_repeat1] = STATE(36),
    [aux_sym_line_block_repeat1] = STATE(10),
    [aux_sym__footnote_block_repeat1] = STATE(37),
    [aux_sym__citation_block_repeat1] = STATE(38),
    [aux_sym__hyperlink_target_block_repeat1] = STATE(39),
    [aux_sym__anoynymous_hyperlink_target_block_repeat1] = STATE(18),
    [aux_sym__directive_block_repeat1] = STATE(41),
    [aux_sym__substitution_definition_block_repeat1] = STATE(42),
    [ts_builtin_sym_end] = ACTIONS(79),
    [aux_sym_paragraph_token1] = ACTIONS(7),
    [sym__char_bullet] = ACTIONS(9),
    [aux_sym__enumerated_list_item_token1] = ACTIONS(11),
    [aux_sym_field_token1] = ACTIONS(13),
    [aux_sym_option_list_item_token1] = ACTIONS(15),
    [anon_sym_PIPE] = ACTIONS(17),
    [aux_sym__single_line_block_token1] = ACTIONS(19),
    [aux_sym_footnote_token1] = ACTIONS(21),
    [aux_sym_citation_token1] = ACTIONS(23),
    [aux_sym_target_token1] = ACTIONS(25),
    [anon_sym___] = ACTIONS(27),
    [aux_sym_directive_token1] = ACTIONS(29),
    [aux_sym_substitution_definition_token1] = ACTIONS(31),
    [sym__eol] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(81),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(85), 3,
      aux_sym_paragraph_token1,
      anon_sym_PIPE,
      aux_sym_citation_token1,
    ACTIONS(83), 12,
      sym__blank_line,
      ts_builtin_sym_end,
      sym__char_bullet,
      aux_sym__enumerated_list_item_token1,
      aux_sym_field_token1,
      aux_sym_option_list_item_token1,
      aux_sym__single_line_block_token1,
      aux_sym_footnote_token1,
      aux_sym_target_token1,
      anon_sym___,
      aux_sym_directive_token1,
      aux_sym_substitution_definition_token1,
  [23] = 2,
    ACTIONS(89), 2,
      sym__eol,
      sym__blank_line,
    ACTIONS(87), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [34] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(91), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [44] = 2,
    ACTIONS(89), 1,
      sym__eol,
    ACTIONS(93), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [54] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(95), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [64] = 5,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(97), 1,
      anon_sym_PIPE,
    ACTIONS(100), 1,
      aux_sym__single_line_block_token1,
    STATE(9), 1,
      aux_sym_line_block_repeat1,
    STATE(130), 1,
      sym__single_line_block,
  [80] = 5,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(19), 1,
      aux_sym__single_line_block_token1,
    ACTIONS(103), 1,
      anon_sym_PIPE,
    STATE(9), 1,
      aux_sym_line_block_repeat1,
    STATE(106), 1,
      sym__single_line_block,
  [96] = 4,
    ACTIONS(105), 1,
      aux_sym_paragraph_token1,
    ACTIONS(107), 1,
      sym__eol,
    ACTIONS(109), 1,
      sym__blank_line,
    STATE(22), 1,
      aux_sym_paragraph_repeat1,
  [109] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(111), 1,
      aux_sym_citation_token1,
    STATE(12), 1,
      aux_sym__citation_block_repeat1,
    STATE(128), 1,
      sym_citation,
  [122] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(114), 1,
      aux_sym_footnote_token1,
    STATE(13), 1,
      aux_sym__footnote_block_repeat1,
    STATE(129), 1,
      sym_footnote,
  [135] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(117), 1,
      aux_sym_option_list_item_token1,
    STATE(14), 1,
      aux_sym_option_list_repeat1,
    STATE(131), 1,
      sym_option_list_item,
  [148] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(120), 1,
      aux_sym_target_token1,
    STATE(15), 1,
      aux_sym__hyperlink_target_block_repeat1,
    STATE(126), 1,
      sym_target,
  [161] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(123), 1,
      aux_sym_field_token1,
    STATE(16), 1,
      aux_sym_field_list_repeat1,
    STATE(132), 1,
      sym_field,
  [174] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(126), 1,
      anon_sym___,
    STATE(17), 1,
      aux_sym__anoynymous_hyperlink_target_block_repeat1,
    STATE(121), 1,
      sym__anonymous_target,
  [187] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(27), 1,
      anon_sym___,
    STATE(17), 1,
      aux_sym__anoynymous_hyperlink_target_block_repeat1,
    STATE(85), 1,
      sym__anonymous_target,
  [200] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(129), 1,
      sym__char_bullet,
    STATE(19), 1,
      aux_sym_bullet_list_repeat1,
    STATE(134), 1,
      sym__bullet_list_item,
  [213] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(132), 1,
      aux_sym_directive_token1,
    STATE(20), 1,
      aux_sym__directive_block_repeat1,
    STATE(122), 1,
      sym_directive,
  [226] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(135), 1,
      aux_sym_paragraph_token1,
    STATE(21), 1,
      aux_sym_paragraph_repeat2,
    STATE(63), 1,
      aux_sym_paragraph_repeat1,
  [239] = 3,
    ACTIONS(138), 1,
      aux_sym_paragraph_token1,
    STATE(22), 1,
      aux_sym_paragraph_repeat1,
    ACTIONS(141), 2,
      sym__eol,
      sym__blank_line,
  [250] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(143), 1,
      aux_sym_substitution_definition_token1,
    STATE(23), 1,
      aux_sym__substitution_definition_block_repeat1,
    STATE(123), 1,
      sym_substitution_definition,
  [263] = 3,
    ACTIONS(105), 1,
      aux_sym_paragraph_token1,
    STATE(22), 1,
      aux_sym_paragraph_repeat1,
    ACTIONS(146), 2,
      sym__eol,
      sym__blank_line,
  [274] = 3,
    ACTIONS(105), 1,
      aux_sym_paragraph_token1,
    STATE(22), 1,
      aux_sym_paragraph_repeat1,
    ACTIONS(148), 2,
      sym__eol,
      sym__blank_line,
  [285] = 3,
    ACTIONS(105), 1,
      aux_sym_paragraph_token1,
    STATE(22), 1,
      aux_sym_paragraph_repeat1,
    ACTIONS(150), 2,
      sym__eol,
      sym__blank_line,
  [296] = 3,
    ACTIONS(105), 1,
      aux_sym_paragraph_token1,
    STATE(22), 1,
      aux_sym_paragraph_repeat1,
    ACTIONS(152), 2,
      sym__eol,
      sym__blank_line,
  [307] = 3,
    ACTIONS(105), 1,
      aux_sym_paragraph_token1,
    STATE(22), 1,
      aux_sym_paragraph_repeat1,
    ACTIONS(154), 2,
      sym__eol,
      sym__blank_line,
  [318] = 3,
    ACTIONS(105), 1,
      aux_sym_paragraph_token1,
    STATE(22), 1,
      aux_sym_paragraph_repeat1,
    ACTIONS(156), 2,
      sym__eol,
      sym__blank_line,
  [329] = 3,
    ACTIONS(105), 1,
      aux_sym_paragraph_token1,
    STATE(22), 1,
      aux_sym_paragraph_repeat1,
    ACTIONS(158), 2,
      sym__eol,
      sym__blank_line,
  [340] = 4,
    ACTIONS(105), 1,
      aux_sym_paragraph_token1,
    ACTIONS(107), 1,
      sym__eol,
    ACTIONS(160), 1,
      sym__blank_line,
    STATE(22), 1,
      aux_sym_paragraph_repeat1,
  [353] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(162), 1,
      aux_sym_paragraph_token1,
    STATE(11), 1,
      aux_sym_paragraph_repeat1,
    STATE(21), 1,
      aux_sym_paragraph_repeat2,
  [366] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(9), 1,
      sym__char_bullet,
    STATE(19), 1,
      aux_sym_bullet_list_repeat1,
    STATE(90), 1,
      sym__bullet_list_item,
  [379] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(11), 1,
      aux_sym__enumerated_list_item_token1,
    STATE(40), 1,
      aux_sym_enumerated_list_repeat1,
    STATE(95), 1,
      sym__enumerated_list_item,
  [392] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(13), 1,
      aux_sym_field_token1,
    STATE(16), 1,
      aux_sym_field_list_repeat1,
    STATE(113), 1,
      sym_field,
  [405] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(15), 1,
      aux_sym_option_list_item_token1,
    STATE(14), 1,
      aux_sym_option_list_repeat1,
    STATE(86), 1,
      sym_option_list_item,
  [418] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(21), 1,
      aux_sym_footnote_token1,
    STATE(13), 1,
      aux_sym__footnote_block_repeat1,
    STATE(82), 1,
      sym_footnote,
  [431] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(164), 1,
      aux_sym_citation_token1,
    STATE(12), 1,
      aux_sym__citation_block_repeat1,
    STATE(81), 1,
      sym_citation,
  [444] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(25), 1,
      aux_sym_target_token1,
    STATE(15), 1,
      aux_sym__hyperlink_target_block_repeat1,
    STATE(83), 1,
      sym_target,
  [457] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(166), 1,
      aux_sym__enumerated_list_item_token1,
    STATE(40), 1,
      aux_sym_enumerated_list_repeat1,
    STATE(133), 1,
      sym__enumerated_list_item,
  [470] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(29), 1,
      aux_sym_directive_token1,
    STATE(20), 1,
      aux_sym__directive_block_repeat1,
    STATE(87), 1,
      sym_directive,
  [483] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(31), 1,
      aux_sym_substitution_definition_token1,
    STATE(23), 1,
      aux_sym__substitution_definition_block_repeat1,
    STATE(89), 1,
      sym_substitution_definition,
  [496] = 3,
    ACTIONS(105), 1,
      aux_sym_paragraph_token1,
    STATE(22), 1,
      aux_sym_paragraph_repeat1,
    ACTIONS(169), 2,
      sym__eol,
      sym__blank_line,
  [507] = 3,
    ACTIONS(105), 1,
      aux_sym_paragraph_token1,
    STATE(22), 1,
      aux_sym_paragraph_repeat1,
    ACTIONS(171), 2,
      sym__eol,
      sym__blank_line,
  [518] = 3,
    ACTIONS(158), 1,
      sym__eol,
    ACTIONS(173), 1,
      aux_sym_paragraph_token1,
    STATE(67), 1,
      aux_sym_paragraph_repeat1,
  [528] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(175), 1,
      aux_sym_paragraph_token1,
    STATE(27), 1,
      aux_sym_paragraph_repeat1,
  [538] = 3,
    ACTIONS(171), 1,
      sym__eol,
    ACTIONS(173), 1,
      aux_sym_paragraph_token1,
    STATE(67), 1,
      aux_sym_paragraph_repeat1,
  [548] = 3,
    ACTIONS(154), 1,
      sym__eol,
    ACTIONS(173), 1,
      aux_sym_paragraph_token1,
    STATE(67), 1,
      aux_sym_paragraph_repeat1,
  [558] = 3,
    ACTIONS(156), 1,
      sym__eol,
    ACTIONS(173), 1,
      aux_sym_paragraph_token1,
    STATE(67), 1,
      aux_sym_paragraph_repeat1,
  [568] = 3,
    ACTIONS(169), 1,
      sym__eol,
    ACTIONS(173), 1,
      aux_sym_paragraph_token1,
    STATE(67), 1,
      aux_sym_paragraph_repeat1,
  [578] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(177), 1,
      aux_sym_paragraph_token1,
    STATE(28), 1,
      aux_sym_paragraph_repeat1,
  [588] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(179), 1,
      aux_sym_paragraph_token1,
    STATE(24), 1,
      aux_sym_paragraph_repeat1,
  [598] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(181), 1,
      aux_sym_paragraph_token1,
    STATE(65), 1,
      aux_sym_paragraph_repeat1,
  [608] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(183), 1,
      aux_sym_paragraph_token1,
    STATE(61), 1,
      aux_sym_paragraph_repeat1,
  [618] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(185), 1,
      aux_sym_paragraph_token1,
    STATE(49), 1,
      aux_sym_paragraph_repeat1,
  [628] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(187), 1,
      aux_sym_paragraph_token1,
    STATE(45), 1,
      aux_sym_paragraph_repeat1,
  [638] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(189), 1,
      aux_sym_paragraph_token1,
    STATE(48), 1,
      aux_sym_paragraph_repeat1,
  [648] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(191), 1,
      aux_sym_paragraph_token1,
    STATE(47), 1,
      aux_sym_paragraph_repeat1,
  [658] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(193), 1,
      anon_sym_PIPE,
    ACTIONS(195), 1,
      aux_sym__single_line_block_token1,
  [668] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(197), 1,
      aux_sym_paragraph_token1,
    STATE(50), 1,
      aux_sym_paragraph_repeat1,
  [678] = 3,
    ACTIONS(152), 1,
      sym__eol,
    ACTIONS(173), 1,
      aux_sym_paragraph_token1,
    STATE(67), 1,
      aux_sym_paragraph_repeat1,
  [688] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(199), 1,
      aux_sym_paragraph_token1,
    STATE(25), 1,
      aux_sym_paragraph_repeat1,
  [698] = 3,
    ACTIONS(107), 1,
      sym__eol,
    ACTIONS(173), 1,
      aux_sym_paragraph_token1,
    STATE(67), 1,
      aux_sym_paragraph_repeat1,
  [708] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(201), 1,
      aux_sym_paragraph_token1,
    STATE(30), 1,
      aux_sym_paragraph_repeat1,
  [718] = 3,
    ACTIONS(150), 1,
      sym__eol,
    ACTIONS(173), 1,
      aux_sym_paragraph_token1,
    STATE(67), 1,
      aux_sym_paragraph_repeat1,
  [728] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(203), 1,
      aux_sym_paragraph_token1,
    STATE(68), 1,
      aux_sym_paragraph_repeat1,
  [738] = 3,
    ACTIONS(141), 1,
      sym__eol,
    ACTIONS(205), 1,
      aux_sym_paragraph_token1,
    STATE(67), 1,
      aux_sym_paragraph_repeat1,
  [748] = 3,
    ACTIONS(146), 1,
      sym__eol,
    ACTIONS(173), 1,
      aux_sym_paragraph_token1,
    STATE(67), 1,
      aux_sym_paragraph_repeat1,
  [758] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(208), 1,
      aux_sym_paragraph_token1,
    STATE(70), 1,
      aux_sym_paragraph_repeat1,
  [768] = 3,
    ACTIONS(148), 1,
      sym__eol,
    ACTIONS(173), 1,
      aux_sym_paragraph_token1,
    STATE(67), 1,
      aux_sym_paragraph_repeat1,
  [778] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(210), 1,
      aux_sym_paragraph_token1,
    STATE(29), 1,
      aux_sym_paragraph_repeat1,
  [788] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(212), 1,
      aux_sym__embed_directive_token1,
    STATE(127), 1,
      sym__embed_directive,
  [798] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(214), 1,
      aux_sym_paragraph_token1,
    STATE(44), 1,
      aux_sym_paragraph_repeat1,
  [808] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(216), 1,
      aux_sym__embed_directive_token1,
    STATE(108), 1,
      sym__embed_directive,
  [818] = 2,
    ACTIONS(218), 1,
      aux_sym_target_token2,
    ACTIONS(220), 2,
      sym__eol,
      sym__blank_line,
  [826] = 2,
    ACTIONS(222), 1,
      aux_sym_target_token2,
    ACTIONS(224), 2,
      sym__eol,
      sym__blank_line,
  [834] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(226), 1,
      aux_sym_paragraph_token1,
    STATE(43), 1,
      aux_sym_paragraph_repeat1,
  [844] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(228), 1,
      aux_sym_paragraph_token1,
    STATE(26), 1,
      aux_sym_paragraph_repeat1,
  [854] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(230), 1,
      aux_sym_target_token1,
  [861] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(232), 1,
      aux_sym__enumerated_list_item_token1,
  [868] = 2,
    ACTIONS(234), 1,
      sym__eol,
    ACTIONS(236), 1,
      sym__blank_line,
  [875] = 2,
    ACTIONS(238), 1,
      sym__eol,
    ACTIONS(240), 1,
      sym__blank_line,
  [882] = 2,
    ACTIONS(242), 1,
      sym__eol,
    ACTIONS(244), 1,
      sym__blank_line,
  [889] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(246), 1,
      ts_builtin_sym_end,
  [896] = 2,
    ACTIONS(248), 1,
      sym__eol,
    ACTIONS(250), 1,
      sym__blank_line,
  [903] = 2,
    ACTIONS(252), 1,
      sym__eol,
    ACTIONS(254), 1,
      sym__blank_line,
  [910] = 2,
    ACTIONS(256), 1,
      sym__eol,
    ACTIONS(258), 1,
      sym__blank_line,
  [917] = 1,
    ACTIONS(260), 2,
      sym__eol,
      sym__blank_line,
  [922] = 2,
    ACTIONS(262), 1,
      sym__eol,
    ACTIONS(264), 1,
      sym__blank_line,
  [929] = 2,
    ACTIONS(266), 1,
      sym__eol,
    ACTIONS(268), 1,
      sym__blank_line,
  [936] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(270), 1,
      aux_sym_paragraph_token1,
  [943] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(272), 1,
      aux_sym_substitution_definition_token1,
  [950] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(274), 1,
      aux_sym_directive_token1,
  [957] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(276), 1,
      anon_sym___,
  [964] = 2,
    ACTIONS(278), 1,
      sym__eol,
    ACTIONS(280), 1,
      sym__blank_line,
  [971] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(282), 1,
      aux_sym_citation_token1,
  [978] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(284), 1,
      aux_sym_footnote_token1,
  [985] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(286), 1,
      aux_sym_option_list_item_token1,
  [992] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(288), 1,
      anon_sym_COLON_COLON,
  [999] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(290), 1,
      sym__blank_line,
  [1006] = 2,
    ACTIONS(266), 1,
      sym__eol,
    ACTIONS(292), 1,
      sym__blank_line,
  [1013] = 2,
    ACTIONS(278), 1,
      sym__eol,
    ACTIONS(294), 1,
      sym__blank_line,
  [1020] = 2,
    ACTIONS(296), 1,
      sym__eol,
    ACTIONS(298), 1,
      sym__blank_line,
  [1027] = 2,
    ACTIONS(252), 1,
      sym__eol,
    ACTIONS(300), 1,
      sym__blank_line,
  [1034] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(302), 1,
      aux_sym_field_token1,
  [1041] = 2,
    ACTIONS(304), 1,
      sym__eol,
    ACTIONS(306), 1,
      sym__blank_line,
  [1048] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(308), 1,
      sym__char_bullet,
  [1055] = 1,
    ACTIONS(310), 2,
      sym__eol,
      sym__blank_line,
  [1060] = 2,
    ACTIONS(224), 1,
      sym__eol,
    ACTIONS(312), 1,
      aux_sym_target_token2,
  [1067] = 2,
    ACTIONS(220), 1,
      sym__eol,
    ACTIONS(314), 1,
      aux_sym_target_token2,
  [1074] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(316), 1,
      anon_sym_COLON_COLON,
  [1081] = 1,
    ACTIONS(318), 2,
      sym__eol,
      sym__blank_line,
  [1086] = 2,
    ACTIONS(296), 1,
      sym__eol,
    ACTIONS(320), 1,
      sym__blank_line,
  [1093] = 2,
    ACTIONS(262), 1,
      sym__eol,
    ACTIONS(322), 1,
      sym__blank_line,
  [1100] = 2,
    ACTIONS(256), 1,
      sym__eol,
    ACTIONS(324), 1,
      sym__blank_line,
  [1107] = 2,
    ACTIONS(248), 1,
      sym__eol,
    ACTIONS(326), 1,
      sym__blank_line,
  [1114] = 2,
    ACTIONS(242), 1,
      sym__eol,
    ACTIONS(328), 1,
      sym__blank_line,
  [1121] = 2,
    ACTIONS(234), 1,
      sym__eol,
    ACTIONS(330), 1,
      sym__blank_line,
  [1128] = 2,
    ACTIONS(304), 1,
      sym__eol,
    ACTIONS(332), 1,
      sym__blank_line,
  [1135] = 2,
    ACTIONS(238), 1,
      sym__eol,
    ACTIONS(334), 1,
      sym__blank_line,
  [1142] = 1,
    ACTIONS(248), 1,
      sym__eol,
  [1146] = 1,
    ACTIONS(256), 1,
      sym__eol,
  [1150] = 1,
    ACTIONS(262), 1,
      sym__eol,
  [1154] = 1,
    ACTIONS(260), 1,
      sym__eol,
  [1158] = 1,
    ACTIONS(318), 1,
      sym__eol,
  [1162] = 1,
    ACTIONS(242), 1,
      sym__eol,
  [1166] = 1,
    ACTIONS(310), 1,
      sym__eol,
  [1170] = 1,
    ACTIONS(234), 1,
      sym__eol,
  [1174] = 1,
    ACTIONS(238), 1,
      sym__eol,
  [1178] = 1,
    ACTIONS(304), 1,
      sym__eol,
  [1182] = 1,
    ACTIONS(252), 1,
      sym__eol,
  [1186] = 1,
    ACTIONS(296), 1,
      sym__eol,
  [1190] = 1,
    ACTIONS(278), 1,
      sym__eol,
  [1194] = 1,
    ACTIONS(266), 1,
      sym__eol,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 23,
  [SMALL_STATE(6)] = 34,
  [SMALL_STATE(7)] = 44,
  [SMALL_STATE(8)] = 54,
  [SMALL_STATE(9)] = 64,
  [SMALL_STATE(10)] = 80,
  [SMALL_STATE(11)] = 96,
  [SMALL_STATE(12)] = 109,
  [SMALL_STATE(13)] = 122,
  [SMALL_STATE(14)] = 135,
  [SMALL_STATE(15)] = 148,
  [SMALL_STATE(16)] = 161,
  [SMALL_STATE(17)] = 174,
  [SMALL_STATE(18)] = 187,
  [SMALL_STATE(19)] = 200,
  [SMALL_STATE(20)] = 213,
  [SMALL_STATE(21)] = 226,
  [SMALL_STATE(22)] = 239,
  [SMALL_STATE(23)] = 250,
  [SMALL_STATE(24)] = 263,
  [SMALL_STATE(25)] = 274,
  [SMALL_STATE(26)] = 285,
  [SMALL_STATE(27)] = 296,
  [SMALL_STATE(28)] = 307,
  [SMALL_STATE(29)] = 318,
  [SMALL_STATE(30)] = 329,
  [SMALL_STATE(31)] = 340,
  [SMALL_STATE(32)] = 353,
  [SMALL_STATE(33)] = 366,
  [SMALL_STATE(34)] = 379,
  [SMALL_STATE(35)] = 392,
  [SMALL_STATE(36)] = 405,
  [SMALL_STATE(37)] = 418,
  [SMALL_STATE(38)] = 431,
  [SMALL_STATE(39)] = 444,
  [SMALL_STATE(40)] = 457,
  [SMALL_STATE(41)] = 470,
  [SMALL_STATE(42)] = 483,
  [SMALL_STATE(43)] = 496,
  [SMALL_STATE(44)] = 507,
  [SMALL_STATE(45)] = 518,
  [SMALL_STATE(46)] = 528,
  [SMALL_STATE(47)] = 538,
  [SMALL_STATE(48)] = 548,
  [SMALL_STATE(49)] = 558,
  [SMALL_STATE(50)] = 568,
  [SMALL_STATE(51)] = 578,
  [SMALL_STATE(52)] = 588,
  [SMALL_STATE(53)] = 598,
  [SMALL_STATE(54)] = 608,
  [SMALL_STATE(55)] = 618,
  [SMALL_STATE(56)] = 628,
  [SMALL_STATE(57)] = 638,
  [SMALL_STATE(58)] = 648,
  [SMALL_STATE(59)] = 658,
  [SMALL_STATE(60)] = 668,
  [SMALL_STATE(61)] = 678,
  [SMALL_STATE(62)] = 688,
  [SMALL_STATE(63)] = 698,
  [SMALL_STATE(64)] = 708,
  [SMALL_STATE(65)] = 718,
  [SMALL_STATE(66)] = 728,
  [SMALL_STATE(67)] = 738,
  [SMALL_STATE(68)] = 748,
  [SMALL_STATE(69)] = 758,
  [SMALL_STATE(70)] = 768,
  [SMALL_STATE(71)] = 778,
  [SMALL_STATE(72)] = 788,
  [SMALL_STATE(73)] = 798,
  [SMALL_STATE(74)] = 808,
  [SMALL_STATE(75)] = 818,
  [SMALL_STATE(76)] = 826,
  [SMALL_STATE(77)] = 834,
  [SMALL_STATE(78)] = 844,
  [SMALL_STATE(79)] = 854,
  [SMALL_STATE(80)] = 861,
  [SMALL_STATE(81)] = 868,
  [SMALL_STATE(82)] = 875,
  [SMALL_STATE(83)] = 882,
  [SMALL_STATE(84)] = 889,
  [SMALL_STATE(85)] = 896,
  [SMALL_STATE(86)] = 903,
  [SMALL_STATE(87)] = 910,
  [SMALL_STATE(88)] = 917,
  [SMALL_STATE(89)] = 922,
  [SMALL_STATE(90)] = 929,
  [SMALL_STATE(91)] = 936,
  [SMALL_STATE(92)] = 943,
  [SMALL_STATE(93)] = 950,
  [SMALL_STATE(94)] = 957,
  [SMALL_STATE(95)] = 964,
  [SMALL_STATE(96)] = 971,
  [SMALL_STATE(97)] = 978,
  [SMALL_STATE(98)] = 985,
  [SMALL_STATE(99)] = 992,
  [SMALL_STATE(100)] = 999,
  [SMALL_STATE(101)] = 1006,
  [SMALL_STATE(102)] = 1013,
  [SMALL_STATE(103)] = 1020,
  [SMALL_STATE(104)] = 1027,
  [SMALL_STATE(105)] = 1034,
  [SMALL_STATE(106)] = 1041,
  [SMALL_STATE(107)] = 1048,
  [SMALL_STATE(108)] = 1055,
  [SMALL_STATE(109)] = 1060,
  [SMALL_STATE(110)] = 1067,
  [SMALL_STATE(111)] = 1074,
  [SMALL_STATE(112)] = 1081,
  [SMALL_STATE(113)] = 1086,
  [SMALL_STATE(114)] = 1093,
  [SMALL_STATE(115)] = 1100,
  [SMALL_STATE(116)] = 1107,
  [SMALL_STATE(117)] = 1114,
  [SMALL_STATE(118)] = 1121,
  [SMALL_STATE(119)] = 1128,
  [SMALL_STATE(120)] = 1135,
  [SMALL_STATE(121)] = 1142,
  [SMALL_STATE(122)] = 1146,
  [SMALL_STATE(123)] = 1150,
  [SMALL_STATE(124)] = 1154,
  [SMALL_STATE(125)] = 1158,
  [SMALL_STATE(126)] = 1162,
  [SMALL_STATE(127)] = 1166,
  [SMALL_STATE(128)] = 1170,
  [SMALL_STATE(129)] = 1174,
  [SMALL_STATE(130)] = 1178,
  [SMALL_STATE(131)] = 1182,
  [SMALL_STATE(132)] = 1186,
  [SMALL_STATE(133)] = 1190,
  [SMALL_STATE(134)] = 1194,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(31),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(77),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(73),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(51),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(64),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(119),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(71),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(46),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(78),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(76),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(75),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(5),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(74),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(2),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__body_elements, 2),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__body_elements, 2),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_block_repeat1, 2), SHIFT_REPEAT(130),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_block_repeat1, 2), SHIFT_REPEAT(55),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__citation_block_repeat1, 2), SHIFT_REPEAT(53),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__footnote_block_repeat1, 2), SHIFT_REPEAT(54),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_option_list_repeat1, 2), SHIFT_REPEAT(56),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hyperlink_target_block_repeat1, 2), SHIFT_REPEAT(109),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_list_repeat1, 2), SHIFT_REPEAT(57),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__anoynymous_hyperlink_target_block_repeat1, 2), SHIFT_REPEAT(110),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bullet_list_repeat1, 2), SHIFT_REPEAT(60),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__directive_block_repeat1, 2), SHIFT_REPEAT(7),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat2, 2), SHIFT_REPEAT(63),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(22),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__substitution_definition_block_repeat1, 2), SHIFT_REPEAT(72),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__embed_directive, 4),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_citation, 2),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footnote, 2),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 2),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_block, 2),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_list_item, 2),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 1),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enumerated_list_repeat1, 2), SHIFT_REPEAT(58),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bullet_list_item, 2),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__enumerated_list_item, 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_line_block_repeat1, 2),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_block_repeat1, 2),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(67),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__anonymous_target, 1),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 1),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hyperlink_target_block_repeat1, 2),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enumerated_list_repeat1, 2, .production_id = 1),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__citation_block, 2),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__footnote_block, 2),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hyperlink_target_block, 2),
  [246] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__anoynymous_hyperlink_target_block, 2),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_list, 2),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directive_block, 2),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 2),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__substitution_definition_block, 2),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bullet_list, 2, .production_id = 2),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat2, 2),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__substitution_definition_block_repeat1, 2),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__directive_block_repeat1, 2),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__anoynymous_hyperlink_target_block_repeat1, 2),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumerated_list, 2, .production_id = 2),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__citation_block_repeat1, 2),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__footnote_block_repeat1, 2),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_option_list_repeat1, 2),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bullet_list, 1, .production_id = 1),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumerated_list, 1, .production_id = 1),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_list, 1),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_list, 1),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_list_repeat1, 2),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_block, 2),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bullet_list_repeat1, 2, .production_id = 1),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_substitution_definition, 2),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__anonymous_target, 2),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_list, 2),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__substitution_definition_block, 1),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directive_block, 1),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__anoynymous_hyperlink_target_block, 1),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hyperlink_target_block, 1),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__citation_block, 1),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_block, 1),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__footnote_block, 1),
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
