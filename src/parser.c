#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 147
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 69
#define ALIAS_COUNT 1
#define TOKEN_COUNT 24
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
  anon_sym_DOT_DOT = 21,
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
  sym_option_list = 34,
  sym_option_list_item = 35,
  sym_line_block = 36,
  sym__single_line_block = 37,
  sym__markup_blocks = 38,
  sym__footnote_block = 39,
  sym_footnote = 40,
  sym__citation_block = 41,
  sym_citation = 42,
  sym__hyperlink_target_block = 43,
  sym_target = 44,
  sym__anoynymous_hyperlink_target_block = 45,
  sym__anonymous_target = 46,
  sym__directive_block = 47,
  sym_directive = 48,
  sym__substitution_definition_block = 49,
  sym_substitution_definition = 50,
  sym__embed_directive = 51,
  sym__comment_block = 52,
  sym_comment = 53,
  aux_sym_document_repeat1 = 54,
  aux_sym_paragraph_repeat1 = 55,
  aux_sym_paragraph_repeat2 = 56,
  aux_sym_bullet_list_repeat1 = 57,
  aux_sym_enumerated_list_repeat1 = 58,
  aux_sym_field_list_repeat1 = 59,
  aux_sym_option_list_repeat1 = 60,
  aux_sym_line_block_repeat1 = 61,
  aux_sym__footnote_block_repeat1 = 62,
  aux_sym__citation_block_repeat1 = 63,
  aux_sym__hyperlink_target_block_repeat1 = 64,
  aux_sym__anoynymous_hyperlink_target_block_repeat1 = 65,
  aux_sym__directive_block_repeat1 = 66,
  aux_sym__substitution_definition_block_repeat1 = 67,
  aux_sym__comment_block_repeat1 = 68,
  alias_sym_list_item = 69,
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
  [anon_sym_DOT_DOT] = "..",
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
  [sym__comment_block] = "_comment_block",
  [sym_comment] = "comment",
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
  [aux_sym__comment_block_repeat1] = "_comment_block_repeat1",
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
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
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
  [sym__comment_block] = sym__comment_block,
  [sym_comment] = sym_comment,
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
  [aux_sym__comment_block_repeat1] = aux_sym__comment_block_repeat1,
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
  [anon_sym_DOT_DOT] = {
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
  [sym__comment_block] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
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
  [aux_sym__comment_block_repeat1] = {
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
      if (lookahead == ':') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(4);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == '*') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'I' ||
          lookahead == 'L' ||
          lookahead == 'M' ||
          lookahead == 'V' ||
          lookahead == 'X') ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == 'c' ||
          lookahead == 'd' ||
          lookahead == 'i' ||
          lookahead == 'l' ||
          lookahead == 'm' ||
          lookahead == 'v' ||
          lookahead == 'x') ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(88);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(42);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(75);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == '_') ADVANCE(29);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(75);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(76);
      if (lookahead == '_') ADVANCE(17);
      if (lookahead == '`') ADVANCE(12);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(76);
      if (lookahead == '`') ADVANCE(29);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(79);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(30);
      if (lookahead == '_') ADVANCE(17);
      if (lookahead == '`') ADVANCE(12);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(87);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(16);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == ':') ADVANCE(39);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '[') ADVANCE(3);
      if (lookahead == '_') ADVANCE(28);
      if (lookahead == '|') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 22:
      if (lookahead == '[') ADVANCE(49);
      END_STATE();
    case 23:
      if (lookahead == ']') ADVANCE(40);
      END_STATE();
    case 24:
      if (lookahead == ']') ADVANCE(40);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 25:
      if (lookahead == ']') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 26:
      if (lookahead == ']') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == ']') ADVANCE(41);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '_') ADVANCE(11);
      if (lookahead == '`') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(13);
      END_STATE();
    case 29:
      if (lookahead == '_') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(12);
      END_STATE();
    case 30:
      if (lookahead == '`') ADVANCE(11);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead == '|') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 32:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(85);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(84);
      if (lookahead == '\r') ADVANCE(34);
      if (lookahead == '|') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 33:
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 35:
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 36:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(68);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
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
          lookahead == ' ') ADVANCE(22);
      END_STATE();
    case 43:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(37);
      if (lookahead == ',') ADVANCE(2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 44:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(51);
      if (lookahead == '.') ADVANCE(10);
      END_STATE();
    case 45:
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '_') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
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
          lookahead != ' ') ADVANCE(31);
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
      if (lookahead == '.') ADVANCE(36);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_paragraph_token1);
      if (lookahead == '.') ADVANCE(36);
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
      if (lookahead == '.') ADVANCE(36);
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
      if (lookahead == '.') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_paragraph_token1);
      if (lookahead == '.') ADVANCE(89);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_paragraph_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_paragraph_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_paragraph_token1);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(20);
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
      if (lookahead == '`') ADVANCE(11);
      if (lookahead != 0) ADVANCE(30);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
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
      if (lookahead == '|') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_substitution_definition_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
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
    case 88:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(21);
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
  [6] = {.lex_state = 1, .external_lex_state = 1},
  [7] = {.lex_state = 1, .external_lex_state = 2},
  [8] = {.lex_state = 1, .external_lex_state = 2},
  [9] = {.lex_state = 1, .external_lex_state = 2},
  [10] = {.lex_state = 1, .external_lex_state = 2},
  [11] = {.lex_state = 0, .external_lex_state = 2},
  [12] = {.lex_state = 0, .external_lex_state = 2},
  [13] = {.lex_state = 50, .external_lex_state = 1},
  [14] = {.lex_state = 0, .external_lex_state = 2},
  [15] = {.lex_state = 50, .external_lex_state = 2},
  [16] = {.lex_state = 50, .external_lex_state = 1},
  [17] = {.lex_state = 50, .external_lex_state = 1},
  [18] = {.lex_state = 50, .external_lex_state = 1},
  [19] = {.lex_state = 1, .external_lex_state = 2},
  [20] = {.lex_state = 0, .external_lex_state = 2},
  [21] = {.lex_state = 0, .external_lex_state = 2},
  [22] = {.lex_state = 0, .external_lex_state = 2},
  [23] = {.lex_state = 0, .external_lex_state = 2},
  [24] = {.lex_state = 44, .external_lex_state = 2},
  [25] = {.lex_state = 0, .external_lex_state = 2},
  [26] = {.lex_state = 50, .external_lex_state = 1},
  [27] = {.lex_state = 0, .external_lex_state = 2},
  [28] = {.lex_state = 0, .external_lex_state = 2},
  [29] = {.lex_state = 0, .external_lex_state = 2},
  [30] = {.lex_state = 50, .external_lex_state = 2},
  [31] = {.lex_state = 50, .external_lex_state = 1},
  [32] = {.lex_state = 0, .external_lex_state = 2},
  [33] = {.lex_state = 0, .external_lex_state = 2},
  [34] = {.lex_state = 0, .external_lex_state = 2},
  [35] = {.lex_state = 0, .external_lex_state = 2},
  [36] = {.lex_state = 0, .external_lex_state = 2},
  [37] = {.lex_state = 44, .external_lex_state = 2},
  [38] = {.lex_state = 0, .external_lex_state = 2},
  [39] = {.lex_state = 0, .external_lex_state = 2},
  [40] = {.lex_state = 0, .external_lex_state = 2},
  [41] = {.lex_state = 0, .external_lex_state = 2},
  [42] = {.lex_state = 1, .external_lex_state = 2},
  [43] = {.lex_state = 50, .external_lex_state = 1},
  [44] = {.lex_state = 50, .external_lex_state = 1},
  [45] = {.lex_state = 50, .external_lex_state = 1},
  [46] = {.lex_state = 50, .external_lex_state = 1},
  [47] = {.lex_state = 50, .external_lex_state = 1},
  [48] = {.lex_state = 50, .external_lex_state = 1},
  [49] = {.lex_state = 50, .external_lex_state = 1},
  [50] = {.lex_state = 1, .external_lex_state = 2},
  [51] = {.lex_state = 50, .external_lex_state = 2},
  [52] = {.lex_state = 1, .external_lex_state = 2},
  [53] = {.lex_state = 50, .external_lex_state = 2},
  [54] = {.lex_state = 50, .external_lex_state = 2},
  [55] = {.lex_state = 50, .external_lex_state = 2},
  [56] = {.lex_state = 50, .external_lex_state = 2},
  [57] = {.lex_state = 50, .external_lex_state = 2},
  [58] = {.lex_state = 50, .external_lex_state = 2},
  [59] = {.lex_state = 50, .external_lex_state = 2},
  [60] = {.lex_state = 44, .external_lex_state = 1},
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
  [72] = {.lex_state = 50, .external_lex_state = 2},
  [73] = {.lex_state = 50, .external_lex_state = 2},
  [74] = {.lex_state = 50, .external_lex_state = 2},
  [75] = {.lex_state = 50, .external_lex_state = 2},
  [76] = {.lex_state = 50, .external_lex_state = 2},
  [77] = {.lex_state = 50, .external_lex_state = 2},
  [78] = {.lex_state = 50, .external_lex_state = 2},
  [79] = {.lex_state = 50, .external_lex_state = 2},
  [80] = {.lex_state = 50, .external_lex_state = 2},
  [81] = {.lex_state = 50, .external_lex_state = 2},
  [82] = {.lex_state = 50, .external_lex_state = 2},
  [83] = {.lex_state = 44, .external_lex_state = 1},
  [84] = {.lex_state = 50, .external_lex_state = 2},
  [85] = {.lex_state = 50, .external_lex_state = 2},
  [86] = {.lex_state = 0, .external_lex_state = 2},
  [87] = {.lex_state = 0, .external_lex_state = 1},
  [88] = {.lex_state = 0, .external_lex_state = 2},
  [89] = {.lex_state = 0, .external_lex_state = 1},
  [90] = {.lex_state = 0, .external_lex_state = 1},
  [91] = {.lex_state = 0, .external_lex_state = 1},
  [92] = {.lex_state = 0, .external_lex_state = 1},
  [93] = {.lex_state = 0, .external_lex_state = 1},
  [94] = {.lex_state = 0, .external_lex_state = 2},
  [95] = {.lex_state = 0, .external_lex_state = 1},
  [96] = {.lex_state = 0, .external_lex_state = 1},
  [97] = {.lex_state = 0, .external_lex_state = 2},
  [98] = {.lex_state = 1, .external_lex_state = 2},
  [99] = {.lex_state = 0, .external_lex_state = 1},
  [100] = {.lex_state = 0, .external_lex_state = 1},
  [101] = {.lex_state = 0, .external_lex_state = 1},
  [102] = {.lex_state = 0, .external_lex_state = 1},
  [103] = {.lex_state = 0, .external_lex_state = 1},
  [104] = {.lex_state = 0, .external_lex_state = 1},
  [105] = {.lex_state = 1, .external_lex_state = 2},
  [106] = {.lex_state = 0, .external_lex_state = 1},
  [107] = {.lex_state = 0, .external_lex_state = 2},
  [108] = {.lex_state = 0, .external_lex_state = 1},
  [109] = {.lex_state = 0, .external_lex_state = 2},
  [110] = {.lex_state = 0, .external_lex_state = 2},
  [111] = {.lex_state = 0, .external_lex_state = 2},
  [112] = {.lex_state = 44, .external_lex_state = 2},
  [113] = {.lex_state = 0, .external_lex_state = 2},
  [114] = {.lex_state = 0, .external_lex_state = 1},
  [115] = {.lex_state = 0, .external_lex_state = 1},
  [116] = {.lex_state = 0, .external_lex_state = 1},
  [117] = {.lex_state = 0, .external_lex_state = 1},
  [118] = {.lex_state = 0, .external_lex_state = 1},
  [119] = {.lex_state = 0, .external_lex_state = 1},
  [120] = {.lex_state = 0, .external_lex_state = 1},
  [121] = {.lex_state = 0, .external_lex_state = 1},
  [122] = {.lex_state = 0, .external_lex_state = 1},
  [123] = {.lex_state = 44, .external_lex_state = 2},
  [124] = {.lex_state = 44, .external_lex_state = 2},
  [125] = {.lex_state = 0, .external_lex_state = 1},
  [126] = {.lex_state = 0, .external_lex_state = 1},
  [127] = {.lex_state = 50, .external_lex_state = 2},
  [128] = {.lex_state = 1, .external_lex_state = 2},
  [129] = {.lex_state = 0, .external_lex_state = 2},
  [130] = {.lex_state = 0, .external_lex_state = 1},
  [131] = {.lex_state = 0, .external_lex_state = 2},
  [132] = {.lex_state = 0, .external_lex_state = 2},
  [133] = {.lex_state = 0, .external_lex_state = 2},
  [134] = {.lex_state = 0, .external_lex_state = 2},
  [135] = {.lex_state = 0, .external_lex_state = 2},
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
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [sym__eol] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(94),
    [sym__body_elements] = STATE(3),
    [sym_paragraph] = STATE(92),
    [sym__lists] = STATE(92),
    [sym_bullet_list] = STATE(92),
    [sym__bullet_list_item] = STATE(90),
    [sym_enumerated_list] = STATE(92),
    [sym__enumerated_list_item] = STATE(130),
    [sym_field_list] = STATE(92),
    [sym_field] = STATE(101),
    [sym_option_list] = STATE(92),
    [sym_option_list_item] = STATE(114),
    [sym_line_block] = STATE(92),
    [sym__single_line_block] = STATE(117),
    [sym__markup_blocks] = STATE(92),
    [sym__footnote_block] = STATE(92),
    [sym_footnote] = STATE(119),
    [sym__citation_block] = STATE(92),
    [sym_citation] = STATE(121),
    [sym__hyperlink_target_block] = STATE(92),
    [sym_target] = STATE(125),
    [sym__anoynymous_hyperlink_target_block] = STATE(92),
    [sym__anonymous_target] = STATE(126),
    [sym__directive_block] = STATE(92),
    [sym_directive] = STATE(122),
    [sym__substitution_definition_block] = STATE(92),
    [sym_substitution_definition] = STATE(99),
    [sym__comment_block] = STATE(92),
    [sym_comment] = STATE(102),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_paragraph_repeat1] = STATE(26),
    [aux_sym_paragraph_repeat2] = STATE(15),
    [aux_sym_bullet_list_repeat1] = STATE(32),
    [aux_sym_enumerated_list_repeat1] = STATE(33),
    [aux_sym_field_list_repeat1] = STATE(34),
    [aux_sym_option_list_repeat1] = STATE(35),
    [aux_sym_line_block_repeat1] = STATE(12),
    [aux_sym__footnote_block_repeat1] = STATE(14),
    [aux_sym__citation_block_repeat1] = STATE(37),
    [aux_sym__hyperlink_target_block_repeat1] = STATE(27),
    [aux_sym__anoynymous_hyperlink_target_block_repeat1] = STATE(39),
    [aux_sym__directive_block_repeat1] = STATE(40),
    [aux_sym__substitution_definition_block_repeat1] = STATE(41),
    [aux_sym__comment_block_repeat1] = STATE(42),
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
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [sym__eol] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(35),
  },
  [2] = {
    [sym__body_elements] = STATE(2),
    [sym_paragraph] = STATE(92),
    [sym__lists] = STATE(92),
    [sym_bullet_list] = STATE(92),
    [sym__bullet_list_item] = STATE(90),
    [sym_enumerated_list] = STATE(92),
    [sym__enumerated_list_item] = STATE(130),
    [sym_field_list] = STATE(92),
    [sym_field] = STATE(101),
    [sym_option_list] = STATE(92),
    [sym_option_list_item] = STATE(114),
    [sym_line_block] = STATE(92),
    [sym__single_line_block] = STATE(117),
    [sym__markup_blocks] = STATE(92),
    [sym__footnote_block] = STATE(92),
    [sym_footnote] = STATE(119),
    [sym__citation_block] = STATE(92),
    [sym_citation] = STATE(121),
    [sym__hyperlink_target_block] = STATE(92),
    [sym_target] = STATE(125),
    [sym__anoynymous_hyperlink_target_block] = STATE(92),
    [sym__anonymous_target] = STATE(126),
    [sym__directive_block] = STATE(92),
    [sym_directive] = STATE(122),
    [sym__substitution_definition_block] = STATE(92),
    [sym_substitution_definition] = STATE(99),
    [sym__comment_block] = STATE(92),
    [sym_comment] = STATE(102),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_paragraph_repeat1] = STATE(26),
    [aux_sym_paragraph_repeat2] = STATE(15),
    [aux_sym_bullet_list_repeat1] = STATE(32),
    [aux_sym_enumerated_list_repeat1] = STATE(33),
    [aux_sym_field_list_repeat1] = STATE(34),
    [aux_sym_option_list_repeat1] = STATE(35),
    [aux_sym_line_block_repeat1] = STATE(12),
    [aux_sym__footnote_block_repeat1] = STATE(14),
    [aux_sym__citation_block_repeat1] = STATE(37),
    [aux_sym__hyperlink_target_block_repeat1] = STATE(27),
    [aux_sym__anoynymous_hyperlink_target_block_repeat1] = STATE(39),
    [aux_sym__directive_block_repeat1] = STATE(40),
    [aux_sym__substitution_definition_block_repeat1] = STATE(41),
    [aux_sym__comment_block_repeat1] = STATE(42),
    [ts_builtin_sym_end] = ACTIONS(37),
    [aux_sym_paragraph_token1] = ACTIONS(39),
    [sym__char_bullet] = ACTIONS(42),
    [aux_sym__enumerated_list_item_token1] = ACTIONS(45),
    [aux_sym_field_token1] = ACTIONS(48),
    [aux_sym_option_list_item_token1] = ACTIONS(51),
    [anon_sym_PIPE] = ACTIONS(54),
    [aux_sym__single_line_block_token1] = ACTIONS(57),
    [aux_sym_footnote_token1] = ACTIONS(60),
    [aux_sym_citation_token1] = ACTIONS(63),
    [aux_sym_target_token1] = ACTIONS(66),
    [anon_sym___] = ACTIONS(69),
    [aux_sym_directive_token1] = ACTIONS(72),
    [aux_sym_substitution_definition_token1] = ACTIONS(75),
    [anon_sym_DOT_DOT] = ACTIONS(78),
    [sym__eol] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(81),
  },
  [3] = {
    [sym__body_elements] = STATE(2),
    [sym_paragraph] = STATE(92),
    [sym__lists] = STATE(92),
    [sym_bullet_list] = STATE(92),
    [sym__bullet_list_item] = STATE(90),
    [sym_enumerated_list] = STATE(92),
    [sym__enumerated_list_item] = STATE(130),
    [sym_field_list] = STATE(92),
    [sym_field] = STATE(101),
    [sym_option_list] = STATE(92),
    [sym_option_list_item] = STATE(114),
    [sym_line_block] = STATE(92),
    [sym__single_line_block] = STATE(117),
    [sym__markup_blocks] = STATE(92),
    [sym__footnote_block] = STATE(92),
    [sym_footnote] = STATE(119),
    [sym__citation_block] = STATE(92),
    [sym_citation] = STATE(121),
    [sym__hyperlink_target_block] = STATE(92),
    [sym_target] = STATE(125),
    [sym__anoynymous_hyperlink_target_block] = STATE(92),
    [sym__anonymous_target] = STATE(126),
    [sym__directive_block] = STATE(92),
    [sym_directive] = STATE(122),
    [sym__substitution_definition_block] = STATE(92),
    [sym_substitution_definition] = STATE(99),
    [sym__comment_block] = STATE(92),
    [sym_comment] = STATE(102),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_paragraph_repeat1] = STATE(26),
    [aux_sym_paragraph_repeat2] = STATE(15),
    [aux_sym_bullet_list_repeat1] = STATE(32),
    [aux_sym_enumerated_list_repeat1] = STATE(33),
    [aux_sym_field_list_repeat1] = STATE(34),
    [aux_sym_option_list_repeat1] = STATE(35),
    [aux_sym_line_block_repeat1] = STATE(12),
    [aux_sym__footnote_block_repeat1] = STATE(14),
    [aux_sym__citation_block_repeat1] = STATE(37),
    [aux_sym__hyperlink_target_block_repeat1] = STATE(27),
    [aux_sym__anoynymous_hyperlink_target_block_repeat1] = STATE(39),
    [aux_sym__directive_block_repeat1] = STATE(40),
    [aux_sym__substitution_definition_block_repeat1] = STATE(41),
    [aux_sym__comment_block_repeat1] = STATE(42),
    [ts_builtin_sym_end] = ACTIONS(84),
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
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [sym__eol] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(86),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(90), 4,
      aux_sym_paragraph_token1,
      anon_sym_PIPE,
      aux_sym_citation_token1,
      anon_sym_DOT_DOT,
    ACTIONS(88), 12,
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
  [24] = 2,
    ACTIONS(94), 2,
      sym__eol,
      sym__blank_line,
    ACTIONS(92), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [35] = 2,
    ACTIONS(98), 2,
      sym__eol,
      sym__blank_line,
    ACTIONS(96), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [46] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(100), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [56] = 2,
    ACTIONS(98), 1,
      sym__eol,
    ACTIONS(102), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [66] = 2,
    ACTIONS(94), 1,
      sym__eol,
    ACTIONS(104), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [76] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(106), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [86] = 5,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(108), 1,
      anon_sym_PIPE,
    ACTIONS(111), 1,
      aux_sym__single_line_block_token1,
    STATE(11), 1,
      aux_sym_line_block_repeat1,
    STATE(141), 1,
      sym__single_line_block,
  [102] = 5,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(19), 1,
      aux_sym__single_line_block_token1,
    ACTIONS(114), 1,
      anon_sym_PIPE,
    STATE(11), 1,
      aux_sym_line_block_repeat1,
    STATE(115), 1,
      sym__single_line_block,
  [118] = 4,
    ACTIONS(116), 1,
      aux_sym_paragraph_token1,
    ACTIONS(118), 1,
      sym__eol,
    ACTIONS(120), 1,
      sym__blank_line,
    STATE(31), 1,
      aux_sym_paragraph_repeat1,
  [131] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(21), 1,
      aux_sym_footnote_token1,
    STATE(25), 1,
      aux_sym__footnote_block_repeat1,
    STATE(108), 1,
      sym_footnote,
  [144] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(122), 1,
      aux_sym_paragraph_token1,
    STATE(13), 1,
      aux_sym_paragraph_repeat1,
    STATE(30), 1,
      aux_sym_paragraph_repeat2,
  [157] = 3,
    ACTIONS(116), 1,
      aux_sym_paragraph_token1,
    STATE(31), 1,
      aux_sym_paragraph_repeat1,
    ACTIONS(124), 2,
      sym__eol,
      sym__blank_line,
  [168] = 3,
    ACTIONS(116), 1,
      aux_sym_paragraph_token1,
    STATE(31), 1,
      aux_sym_paragraph_repeat1,
    ACTIONS(126), 2,
      sym__eol,
      sym__blank_line,
  [179] = 3,
    ACTIONS(116), 1,
      aux_sym_paragraph_token1,
    STATE(31), 1,
      aux_sym_paragraph_repeat1,
    ACTIONS(128), 2,
      sym__eol,
      sym__blank_line,
  [190] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(130), 1,
      anon_sym_DOT_DOT,
    STATE(19), 1,
      aux_sym__comment_block_repeat1,
    STATE(132), 1,
      sym_comment,
  [203] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(133), 1,
      aux_sym_substitution_definition_token1,
    STATE(20), 1,
      aux_sym__substitution_definition_block_repeat1,
    STATE(133), 1,
      sym_substitution_definition,
  [216] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(136), 1,
      aux_sym_directive_token1,
    STATE(21), 1,
      aux_sym__directive_block_repeat1,
    STATE(136), 1,
      sym_directive,
  [229] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(139), 1,
      anon_sym___,
    STATE(22), 1,
      aux_sym__anoynymous_hyperlink_target_block_repeat1,
    STATE(138), 1,
      sym__anonymous_target,
  [242] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(142), 1,
      aux_sym_target_token1,
    STATE(23), 1,
      aux_sym__hyperlink_target_block_repeat1,
    STATE(139), 1,
      sym_target,
  [255] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(145), 1,
      aux_sym_citation_token1,
    STATE(24), 1,
      aux_sym__citation_block_repeat1,
    STATE(146), 1,
      sym_citation,
  [268] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(148), 1,
      aux_sym_footnote_token1,
    STATE(25), 1,
      aux_sym__footnote_block_repeat1,
    STATE(140), 1,
      sym_footnote,
  [281] = 4,
    ACTIONS(116), 1,
      aux_sym_paragraph_token1,
    ACTIONS(118), 1,
      sym__eol,
    ACTIONS(151), 1,
      sym__blank_line,
    STATE(31), 1,
      aux_sym_paragraph_repeat1,
  [294] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(25), 1,
      aux_sym_target_token1,
    STATE(23), 1,
      aux_sym__hyperlink_target_block_repeat1,
    STATE(89), 1,
      sym_target,
  [307] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(153), 1,
      aux_sym__enumerated_list_item_token1,
    STATE(28), 1,
      aux_sym_enumerated_list_repeat1,
    STATE(144), 1,
      sym__enumerated_list_item,
  [320] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(156), 1,
      sym__char_bullet,
    STATE(29), 1,
      aux_sym_bullet_list_repeat1,
    STATE(145), 1,
      sym__bullet_list_item,
  [333] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(159), 1,
      aux_sym_paragraph_token1,
    STATE(30), 1,
      aux_sym_paragraph_repeat2,
    STATE(84), 1,
      aux_sym_paragraph_repeat1,
  [346] = 3,
    ACTIONS(162), 1,
      aux_sym_paragraph_token1,
    STATE(31), 1,
      aux_sym_paragraph_repeat1,
    ACTIONS(165), 2,
      sym__eol,
      sym__blank_line,
  [357] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(9), 1,
      sym__char_bullet,
    STATE(29), 1,
      aux_sym_bullet_list_repeat1,
    STATE(87), 1,
      sym__bullet_list_item,
  [370] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(11), 1,
      aux_sym__enumerated_list_item_token1,
    STATE(28), 1,
      aux_sym_enumerated_list_repeat1,
    STATE(120), 1,
      sym__enumerated_list_item,
  [383] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(13), 1,
      aux_sym_field_token1,
    STATE(38), 1,
      aux_sym_field_list_repeat1,
    STATE(118), 1,
      sym_field,
  [396] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(15), 1,
      aux_sym_option_list_item_token1,
    STATE(36), 1,
      aux_sym_option_list_repeat1,
    STATE(91), 1,
      sym_option_list_item,
  [409] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(167), 1,
      aux_sym_option_list_item_token1,
    STATE(36), 1,
      aux_sym_option_list_repeat1,
    STATE(142), 1,
      sym_option_list_item,
  [422] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(170), 1,
      aux_sym_citation_token1,
    STATE(24), 1,
      aux_sym__citation_block_repeat1,
    STATE(100), 1,
      sym_citation,
  [435] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(172), 1,
      aux_sym_field_token1,
    STATE(38), 1,
      aux_sym_field_list_repeat1,
    STATE(143), 1,
      sym_field,
  [448] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(27), 1,
      anon_sym___,
    STATE(22), 1,
      aux_sym__anoynymous_hyperlink_target_block_repeat1,
    STATE(116), 1,
      sym__anonymous_target,
  [461] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(29), 1,
      aux_sym_directive_token1,
    STATE(21), 1,
      aux_sym__directive_block_repeat1,
    STATE(93), 1,
      sym_directive,
  [474] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(31), 1,
      aux_sym_substitution_definition_token1,
    STATE(20), 1,
      aux_sym__substitution_definition_block_repeat1,
    STATE(95), 1,
      sym_substitution_definition,
  [487] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(175), 1,
      anon_sym_DOT_DOT,
    STATE(19), 1,
      aux_sym__comment_block_repeat1,
    STATE(96), 1,
      sym_comment,
  [500] = 3,
    ACTIONS(116), 1,
      aux_sym_paragraph_token1,
    STATE(31), 1,
      aux_sym_paragraph_repeat1,
    ACTIONS(177), 2,
      sym__eol,
      sym__blank_line,
  [511] = 3,
    ACTIONS(116), 1,
      aux_sym_paragraph_token1,
    STATE(31), 1,
      aux_sym_paragraph_repeat1,
    ACTIONS(179), 2,
      sym__eol,
      sym__blank_line,
  [522] = 3,
    ACTIONS(116), 1,
      aux_sym_paragraph_token1,
    STATE(31), 1,
      aux_sym_paragraph_repeat1,
    ACTIONS(181), 2,
      sym__eol,
      sym__blank_line,
  [533] = 3,
    ACTIONS(116), 1,
      aux_sym_paragraph_token1,
    STATE(31), 1,
      aux_sym_paragraph_repeat1,
    ACTIONS(183), 2,
      sym__eol,
      sym__blank_line,
  [544] = 3,
    ACTIONS(116), 1,
      aux_sym_paragraph_token1,
    STATE(31), 1,
      aux_sym_paragraph_repeat1,
    ACTIONS(185), 2,
      sym__eol,
      sym__blank_line,
  [555] = 3,
    ACTIONS(116), 1,
      aux_sym_paragraph_token1,
    STATE(31), 1,
      aux_sym_paragraph_repeat1,
    ACTIONS(187), 2,
      sym__eol,
      sym__blank_line,
  [566] = 3,
    ACTIONS(116), 1,
      aux_sym_paragraph_token1,
    STATE(31), 1,
      aux_sym_paragraph_repeat1,
    ACTIONS(189), 2,
      sym__eol,
      sym__blank_line,
  [577] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(191), 1,
      aux_sym__embed_directive_token1,
    STATE(106), 1,
      sym__embed_directive,
  [587] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(193), 1,
      aux_sym_paragraph_token1,
    STATE(47), 1,
      aux_sym_paragraph_repeat1,
  [597] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(195), 1,
      aux_sym__embed_directive_token1,
    STATE(137), 1,
      sym__embed_directive,
  [607] = 3,
    ACTIONS(124), 1,
      sym__eol,
    ACTIONS(197), 1,
      aux_sym_paragraph_token1,
    STATE(59), 1,
      aux_sym_paragraph_repeat1,
  [617] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(199), 1,
      aux_sym_paragraph_token1,
    STATE(53), 1,
      aux_sym_paragraph_repeat1,
  [627] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(201), 1,
      aux_sym_paragraph_token1,
    STATE(18), 1,
      aux_sym_paragraph_repeat1,
  [637] = 3,
    ACTIONS(126), 1,
      sym__eol,
    ACTIONS(197), 1,
      aux_sym_paragraph_token1,
    STATE(59), 1,
      aux_sym_paragraph_repeat1,
  [647] = 3,
    ACTIONS(128), 1,
      sym__eol,
    ACTIONS(197), 1,
      aux_sym_paragraph_token1,
    STATE(59), 1,
      aux_sym_paragraph_repeat1,
  [657] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(203), 1,
      aux_sym_paragraph_token1,
    STATE(17), 1,
      aux_sym_paragraph_repeat1,
  [667] = 3,
    ACTIONS(165), 1,
      sym__eol,
    ACTIONS(205), 1,
      aux_sym_paragraph_token1,
    STATE(59), 1,
      aux_sym_paragraph_repeat1,
  [677] = 2,
    ACTIONS(208), 1,
      aux_sym_target_token2,
    ACTIONS(210), 2,
      sym__eol,
      sym__blank_line,
  [685] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(212), 1,
      aux_sym_paragraph_token1,
    STATE(56), 1,
      aux_sym_paragraph_repeat1,
  [695] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(214), 1,
      aux_sym_paragraph_token1,
    STATE(57), 1,
      aux_sym_paragraph_repeat1,
  [705] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(216), 1,
      aux_sym_paragraph_token1,
    STATE(45), 1,
      aux_sym_paragraph_repeat1,
  [715] = 3,
    ACTIONS(189), 1,
      sym__eol,
    ACTIONS(197), 1,
      aux_sym_paragraph_token1,
    STATE(59), 1,
      aux_sym_paragraph_repeat1,
  [725] = 3,
    ACTIONS(187), 1,
      sym__eol,
    ACTIONS(197), 1,
      aux_sym_paragraph_token1,
    STATE(59), 1,
      aux_sym_paragraph_repeat1,
  [735] = 3,
    ACTIONS(185), 1,
      sym__eol,
    ACTIONS(197), 1,
      aux_sym_paragraph_token1,
    STATE(59), 1,
      aux_sym_paragraph_repeat1,
  [745] = 3,
    ACTIONS(183), 1,
      sym__eol,
    ACTIONS(197), 1,
      aux_sym_paragraph_token1,
    STATE(59), 1,
      aux_sym_paragraph_repeat1,
  [755] = 3,
    ACTIONS(181), 1,
      sym__eol,
    ACTIONS(197), 1,
      aux_sym_paragraph_token1,
    STATE(59), 1,
      aux_sym_paragraph_repeat1,
  [765] = 3,
    ACTIONS(179), 1,
      sym__eol,
    ACTIONS(197), 1,
      aux_sym_paragraph_token1,
    STATE(59), 1,
      aux_sym_paragraph_repeat1,
  [775] = 3,
    ACTIONS(177), 1,
      sym__eol,
    ACTIONS(197), 1,
      aux_sym_paragraph_token1,
    STATE(59), 1,
      aux_sym_paragraph_repeat1,
  [785] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(218), 1,
      aux_sym_paragraph_token1,
    STATE(43), 1,
      aux_sym_paragraph_repeat1,
  [795] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(220), 1,
      aux_sym_paragraph_token1,
    STATE(44), 1,
      aux_sym_paragraph_repeat1,
  [805] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(222), 1,
      aux_sym_paragraph_token1,
    STATE(64), 1,
      aux_sym_paragraph_repeat1,
  [815] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(224), 1,
      aux_sym_paragraph_token1,
    STATE(65), 1,
      aux_sym_paragraph_repeat1,
  [825] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(226), 1,
      aux_sym_paragraph_token1,
    STATE(66), 1,
      aux_sym_paragraph_repeat1,
  [835] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(228), 1,
      aux_sym_paragraph_token1,
    STATE(67), 1,
      aux_sym_paragraph_repeat1,
  [845] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(230), 1,
      aux_sym_paragraph_token1,
    STATE(68), 1,
      aux_sym_paragraph_repeat1,
  [855] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(232), 1,
      aux_sym_paragraph_token1,
    STATE(69), 1,
      aux_sym_paragraph_repeat1,
  [865] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(234), 1,
      aux_sym_paragraph_token1,
    STATE(70), 1,
      aux_sym_paragraph_repeat1,
  [875] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(236), 1,
      aux_sym_paragraph_token1,
    STATE(48), 1,
      aux_sym_paragraph_repeat1,
  [885] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(238), 1,
      aux_sym_paragraph_token1,
    STATE(46), 1,
      aux_sym_paragraph_repeat1,
  [895] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(240), 1,
      aux_sym_paragraph_token1,
    STATE(16), 1,
      aux_sym_paragraph_repeat1,
  [905] = 2,
    ACTIONS(242), 1,
      aux_sym_target_token2,
    ACTIONS(244), 2,
      sym__eol,
      sym__blank_line,
  [913] = 3,
    ACTIONS(118), 1,
      sym__eol,
    ACTIONS(197), 1,
      aux_sym_paragraph_token1,
    STATE(59), 1,
      aux_sym_paragraph_repeat1,
  [923] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(246), 1,
      aux_sym_paragraph_token1,
    STATE(49), 1,
      aux_sym_paragraph_repeat1,
  [933] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(248), 1,
      anon_sym_PIPE,
    ACTIONS(250), 1,
      aux_sym__single_line_block_token1,
  [943] = 2,
    ACTIONS(252), 1,
      sym__eol,
    ACTIONS(254), 1,
      sym__blank_line,
  [950] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(256), 1,
      aux_sym_directive_token1,
  [957] = 2,
    ACTIONS(258), 1,
      sym__eol,
    ACTIONS(260), 1,
      sym__blank_line,
  [964] = 2,
    ACTIONS(252), 1,
      sym__eol,
    ACTIONS(262), 1,
      sym__blank_line,
  [971] = 2,
    ACTIONS(264), 1,
      sym__eol,
    ACTIONS(266), 1,
      sym__blank_line,
  [978] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(268), 1,
      sym__blank_line,
  [985] = 2,
    ACTIONS(270), 1,
      sym__eol,
    ACTIONS(272), 1,
      sym__blank_line,
  [992] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(274), 1,
      ts_builtin_sym_end,
  [999] = 2,
    ACTIONS(276), 1,
      sym__eol,
    ACTIONS(278), 1,
      sym__blank_line,
  [1006] = 2,
    ACTIONS(280), 1,
      sym__eol,
    ACTIONS(282), 1,
      sym__blank_line,
  [1013] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(284), 1,
      aux_sym__enumerated_list_item_token1,
  [1020] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(286), 1,
      anon_sym_COLON_COLON,
  [1027] = 2,
    ACTIONS(276), 1,
      sym__eol,
    ACTIONS(288), 1,
      sym__blank_line,
  [1034] = 2,
    ACTIONS(290), 1,
      sym__eol,
    ACTIONS(292), 1,
      sym__blank_line,
  [1041] = 2,
    ACTIONS(294), 1,
      sym__eol,
    ACTIONS(296), 1,
      sym__blank_line,
  [1048] = 2,
    ACTIONS(280), 1,
      sym__eol,
    ACTIONS(298), 1,
      sym__blank_line,
  [1055] = 1,
    ACTIONS(300), 2,
      sym__eol,
      sym__blank_line,
  [1060] = 1,
    ACTIONS(302), 2,
      sym__eol,
      sym__blank_line,
  [1065] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(304), 1,
      anon_sym_COLON_COLON,
  [1072] = 1,
    ACTIONS(306), 2,
      sym__eol,
      sym__blank_line,
  [1077] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(308), 1,
      sym__char_bullet,
  [1084] = 2,
    ACTIONS(310), 1,
      sym__eol,
    ACTIONS(312), 1,
      sym__blank_line,
  [1091] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(314), 1,
      aux_sym_field_token1,
  [1098] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(316), 1,
      aux_sym_option_list_item_token1,
  [1105] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(318), 1,
      aux_sym_footnote_token1,
  [1112] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(320), 1,
      aux_sym_citation_token1,
  [1119] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(322), 1,
      aux_sym_target_token1,
  [1126] = 2,
    ACTIONS(264), 1,
      sym__eol,
    ACTIONS(324), 1,
      sym__blank_line,
  [1133] = 2,
    ACTIONS(326), 1,
      sym__eol,
    ACTIONS(328), 1,
      sym__blank_line,
  [1140] = 2,
    ACTIONS(330), 1,
      sym__eol,
    ACTIONS(332), 1,
      sym__blank_line,
  [1147] = 2,
    ACTIONS(326), 1,
      sym__eol,
    ACTIONS(334), 1,
      sym__blank_line,
  [1154] = 2,
    ACTIONS(294), 1,
      sym__eol,
    ACTIONS(336), 1,
      sym__blank_line,
  [1161] = 2,
    ACTIONS(310), 1,
      sym__eol,
    ACTIONS(338), 1,
      sym__blank_line,
  [1168] = 2,
    ACTIONS(340), 1,
      sym__eol,
    ACTIONS(342), 1,
      sym__blank_line,
  [1175] = 2,
    ACTIONS(290), 1,
      sym__eol,
    ACTIONS(344), 1,
      sym__blank_line,
  [1182] = 2,
    ACTIONS(270), 1,
      sym__eol,
    ACTIONS(346), 1,
      sym__blank_line,
  [1189] = 2,
    ACTIONS(244), 1,
      sym__eol,
    ACTIONS(348), 1,
      aux_sym_target_token2,
  [1196] = 2,
    ACTIONS(210), 1,
      sym__eol,
    ACTIONS(350), 1,
      aux_sym_target_token2,
  [1203] = 2,
    ACTIONS(258), 1,
      sym__eol,
    ACTIONS(352), 1,
      sym__blank_line,
  [1210] = 2,
    ACTIONS(330), 1,
      sym__eol,
    ACTIONS(354), 1,
      sym__blank_line,
  [1217] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(356), 1,
      aux_sym_paragraph_token1,
  [1224] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(358), 1,
      anon_sym_DOT_DOT,
  [1231] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(360), 1,
      aux_sym_substitution_definition_token1,
  [1238] = 2,
    ACTIONS(340), 1,
      sym__eol,
    ACTIONS(362), 1,
      sym__blank_line,
  [1245] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(364), 1,
      anon_sym___,
  [1252] = 1,
    ACTIONS(280), 1,
      sym__eol,
  [1256] = 1,
    ACTIONS(276), 1,
      sym__eol,
  [1260] = 1,
    ACTIONS(300), 1,
      sym__eol,
  [1264] = 1,
    ACTIONS(302), 1,
      sym__eol,
  [1268] = 1,
    ACTIONS(270), 1,
      sym__eol,
  [1272] = 1,
    ACTIONS(306), 1,
      sym__eol,
  [1276] = 1,
    ACTIONS(330), 1,
      sym__eol,
  [1280] = 1,
    ACTIONS(258), 1,
      sym__eol,
  [1284] = 1,
    ACTIONS(310), 1,
      sym__eol,
  [1288] = 1,
    ACTIONS(326), 1,
      sym__eol,
  [1292] = 1,
    ACTIONS(264), 1,
      sym__eol,
  [1296] = 1,
    ACTIONS(294), 1,
      sym__eol,
  [1300] = 1,
    ACTIONS(340), 1,
      sym__eol,
  [1304] = 1,
    ACTIONS(252), 1,
      sym__eol,
  [1308] = 1,
    ACTIONS(290), 1,
      sym__eol,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 24,
  [SMALL_STATE(6)] = 35,
  [SMALL_STATE(7)] = 46,
  [SMALL_STATE(8)] = 56,
  [SMALL_STATE(9)] = 66,
  [SMALL_STATE(10)] = 76,
  [SMALL_STATE(11)] = 86,
  [SMALL_STATE(12)] = 102,
  [SMALL_STATE(13)] = 118,
  [SMALL_STATE(14)] = 131,
  [SMALL_STATE(15)] = 144,
  [SMALL_STATE(16)] = 157,
  [SMALL_STATE(17)] = 168,
  [SMALL_STATE(18)] = 179,
  [SMALL_STATE(19)] = 190,
  [SMALL_STATE(20)] = 203,
  [SMALL_STATE(21)] = 216,
  [SMALL_STATE(22)] = 229,
  [SMALL_STATE(23)] = 242,
  [SMALL_STATE(24)] = 255,
  [SMALL_STATE(25)] = 268,
  [SMALL_STATE(26)] = 281,
  [SMALL_STATE(27)] = 294,
  [SMALL_STATE(28)] = 307,
  [SMALL_STATE(29)] = 320,
  [SMALL_STATE(30)] = 333,
  [SMALL_STATE(31)] = 346,
  [SMALL_STATE(32)] = 357,
  [SMALL_STATE(33)] = 370,
  [SMALL_STATE(34)] = 383,
  [SMALL_STATE(35)] = 396,
  [SMALL_STATE(36)] = 409,
  [SMALL_STATE(37)] = 422,
  [SMALL_STATE(38)] = 435,
  [SMALL_STATE(39)] = 448,
  [SMALL_STATE(40)] = 461,
  [SMALL_STATE(41)] = 474,
  [SMALL_STATE(42)] = 487,
  [SMALL_STATE(43)] = 500,
  [SMALL_STATE(44)] = 511,
  [SMALL_STATE(45)] = 522,
  [SMALL_STATE(46)] = 533,
  [SMALL_STATE(47)] = 544,
  [SMALL_STATE(48)] = 555,
  [SMALL_STATE(49)] = 566,
  [SMALL_STATE(50)] = 577,
  [SMALL_STATE(51)] = 587,
  [SMALL_STATE(52)] = 597,
  [SMALL_STATE(53)] = 607,
  [SMALL_STATE(54)] = 617,
  [SMALL_STATE(55)] = 627,
  [SMALL_STATE(56)] = 637,
  [SMALL_STATE(57)] = 647,
  [SMALL_STATE(58)] = 657,
  [SMALL_STATE(59)] = 667,
  [SMALL_STATE(60)] = 677,
  [SMALL_STATE(61)] = 685,
  [SMALL_STATE(62)] = 695,
  [SMALL_STATE(63)] = 705,
  [SMALL_STATE(64)] = 715,
  [SMALL_STATE(65)] = 725,
  [SMALL_STATE(66)] = 735,
  [SMALL_STATE(67)] = 745,
  [SMALL_STATE(68)] = 755,
  [SMALL_STATE(69)] = 765,
  [SMALL_STATE(70)] = 775,
  [SMALL_STATE(71)] = 785,
  [SMALL_STATE(72)] = 795,
  [SMALL_STATE(73)] = 805,
  [SMALL_STATE(74)] = 815,
  [SMALL_STATE(75)] = 825,
  [SMALL_STATE(76)] = 835,
  [SMALL_STATE(77)] = 845,
  [SMALL_STATE(78)] = 855,
  [SMALL_STATE(79)] = 865,
  [SMALL_STATE(80)] = 875,
  [SMALL_STATE(81)] = 885,
  [SMALL_STATE(82)] = 895,
  [SMALL_STATE(83)] = 905,
  [SMALL_STATE(84)] = 913,
  [SMALL_STATE(85)] = 923,
  [SMALL_STATE(86)] = 933,
  [SMALL_STATE(87)] = 943,
  [SMALL_STATE(88)] = 950,
  [SMALL_STATE(89)] = 957,
  [SMALL_STATE(90)] = 964,
  [SMALL_STATE(91)] = 971,
  [SMALL_STATE(92)] = 978,
  [SMALL_STATE(93)] = 985,
  [SMALL_STATE(94)] = 992,
  [SMALL_STATE(95)] = 999,
  [SMALL_STATE(96)] = 1006,
  [SMALL_STATE(97)] = 1013,
  [SMALL_STATE(98)] = 1020,
  [SMALL_STATE(99)] = 1027,
  [SMALL_STATE(100)] = 1034,
  [SMALL_STATE(101)] = 1041,
  [SMALL_STATE(102)] = 1048,
  [SMALL_STATE(103)] = 1055,
  [SMALL_STATE(104)] = 1060,
  [SMALL_STATE(105)] = 1065,
  [SMALL_STATE(106)] = 1072,
  [SMALL_STATE(107)] = 1077,
  [SMALL_STATE(108)] = 1084,
  [SMALL_STATE(109)] = 1091,
  [SMALL_STATE(110)] = 1098,
  [SMALL_STATE(111)] = 1105,
  [SMALL_STATE(112)] = 1112,
  [SMALL_STATE(113)] = 1119,
  [SMALL_STATE(114)] = 1126,
  [SMALL_STATE(115)] = 1133,
  [SMALL_STATE(116)] = 1140,
  [SMALL_STATE(117)] = 1147,
  [SMALL_STATE(118)] = 1154,
  [SMALL_STATE(119)] = 1161,
  [SMALL_STATE(120)] = 1168,
  [SMALL_STATE(121)] = 1175,
  [SMALL_STATE(122)] = 1182,
  [SMALL_STATE(123)] = 1189,
  [SMALL_STATE(124)] = 1196,
  [SMALL_STATE(125)] = 1203,
  [SMALL_STATE(126)] = 1210,
  [SMALL_STATE(127)] = 1217,
  [SMALL_STATE(128)] = 1224,
  [SMALL_STATE(129)] = 1231,
  [SMALL_STATE(130)] = 1238,
  [SMALL_STATE(131)] = 1245,
  [SMALL_STATE(132)] = 1252,
  [SMALL_STATE(133)] = 1256,
  [SMALL_STATE(134)] = 1260,
  [SMALL_STATE(135)] = 1264,
  [SMALL_STATE(136)] = 1268,
  [SMALL_STATE(137)] = 1272,
  [SMALL_STATE(138)] = 1276,
  [SMALL_STATE(139)] = 1280,
  [SMALL_STATE(140)] = 1284,
  [SMALL_STATE(141)] = 1288,
  [SMALL_STATE(142)] = 1292,
  [SMALL_STATE(143)] = 1296,
  [SMALL_STATE(144)] = 1300,
  [SMALL_STATE(145)] = 1304,
  [SMALL_STATE(146)] = 1308,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(26),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(71),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(72),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(63),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(81),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(117),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(51),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(80),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(85),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(83),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(60),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(5),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(50),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(6),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(2),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__body_elements, 2),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__body_elements, 2),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_block_repeat1, 2), SHIFT_REPEAT(141),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_block_repeat1, 2), SHIFT_REPEAT(75),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__embed_directive, 4),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_block_repeat1, 2), SHIFT_REPEAT(8),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__substitution_definition_block_repeat1, 2), SHIFT_REPEAT(52),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__directive_block_repeat1, 2), SHIFT_REPEAT(9),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__anoynymous_hyperlink_target_block_repeat1, 2), SHIFT_REPEAT(124),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hyperlink_target_block_repeat1, 2), SHIFT_REPEAT(123),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__citation_block_repeat1, 2), SHIFT_REPEAT(73),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__footnote_block_repeat1, 2), SHIFT_REPEAT(74),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 1),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enumerated_list_repeat1, 2), SHIFT_REPEAT(78),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bullet_list_repeat1, 2), SHIFT_REPEAT(79),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat2, 2), SHIFT_REPEAT(84),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(31),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_option_list_repeat1, 2), SHIFT_REPEAT(76),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_list_repeat1, 2), SHIFT_REPEAT(77),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bullet_list_item, 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__enumerated_list_item, 2),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 2),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_list_item, 2),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_block, 2),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footnote, 2),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_citation, 2),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(59),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__anonymous_target, 1),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 1),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_line_block_repeat1, 2),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_block_repeat1, 2),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bullet_list, 2, .production_id = 2),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__directive_block_repeat1, 2),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hyperlink_target_block, 2),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bullet_list, 1, .production_id = 1),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_list, 2),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directive_block, 2),
  [274] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__substitution_definition_block, 2),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_block, 2),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enumerated_list_repeat1, 2, .production_id = 1),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__substitution_definition_block, 1),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__citation_block, 2),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_list, 1),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_block, 1),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 2),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__anonymous_target, 2),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_substitution_definition, 2),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bullet_list_repeat1, 2, .production_id = 1),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__footnote_block, 2),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_list_repeat1, 2),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_option_list_repeat1, 2),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__footnote_block_repeat1, 2),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__citation_block_repeat1, 2),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hyperlink_target_block_repeat1, 2),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_list, 1),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_block, 2),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__anoynymous_hyperlink_target_block, 2),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_block, 1),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_list, 2),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__footnote_block, 1),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumerated_list, 2, .production_id = 2),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__citation_block, 1),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directive_block, 1),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hyperlink_target_block, 1),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__anoynymous_hyperlink_target_block, 1),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat2, 2),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__comment_block_repeat1, 2),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__substitution_definition_block_repeat1, 2),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumerated_list, 1, .production_id = 1),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__anoynymous_hyperlink_target_block_repeat1, 2),
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
