#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 163
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 75
#define ALIAS_COUNT 0
#define TOKEN_COUNT 26
#define EXTERNAL_TOKEN_COUNT 4
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4

enum {
  aux_sym__bullet_list_item_token1 = 1,
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
  sym__newline = 22,
  sym__blankline = 23,
  sym__text = 24,
  sym_emphasis = 25,
  sym_document = 26,
  sym__body_elements = 27,
  sym_paragraph = 28,
  sym__list = 29,
  sym_bullet_list = 30,
  sym__bullet_list_item = 31,
  sym_enumerated_list = 32,
  sym__enumerated_list_item = 33,
  sym_field_list = 34,
  sym_field = 35,
  sym_option_list = 36,
  sym_option_list_item = 37,
  sym_line_block = 38,
  sym__single_line_block = 39,
  sym__markup_block = 40,
  sym__footnote_block = 41,
  sym_footnote = 42,
  sym__citation_block = 43,
  sym_citation = 44,
  sym__hyperlink_target_block = 45,
  sym_target = 46,
  sym__anoynymous_hyperlink_target_block = 47,
  sym__anonymous_target = 48,
  sym__directive_block = 49,
  sym_directive = 50,
  sym__substitution_definition_block = 51,
  sym_substitution_definition = 52,
  sym__embed_directive = 53,
  sym__comment_block = 54,
  sym_comment = 55,
  sym__line = 56,
  sym__inline_markup = 57,
  aux_sym_document_repeat1 = 58,
  aux_sym_paragraph_repeat1 = 59,
  aux_sym_bullet_list_repeat1 = 60,
  aux_sym__bullet_list_item_repeat1 = 61,
  aux_sym_enumerated_list_repeat1 = 62,
  aux_sym_field_list_repeat1 = 63,
  aux_sym_option_list_repeat1 = 64,
  aux_sym_line_block_repeat1 = 65,
  aux_sym__footnote_block_repeat1 = 66,
  aux_sym__citation_block_repeat1 = 67,
  aux_sym__hyperlink_target_block_repeat1 = 68,
  aux_sym__anoynymous_hyperlink_target_block_repeat1 = 69,
  aux_sym__directive_block_repeat1 = 70,
  aux_sym__substitution_definition_block_repeat1 = 71,
  aux_sym__comment_block_repeat1 = 72,
  aux_sym__line_repeat1 = 73,
  aux_sym__line_repeat2 = 74,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__bullet_list_item_token1] = "_bullet_list_item_token1",
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
  [sym__newline] = "_newline",
  [sym__blankline] = "_blankline",
  [sym__text] = "_text",
  [sym_emphasis] = "emphasis",
  [sym_document] = "document",
  [sym__body_elements] = "_body_elements",
  [sym_paragraph] = "paragraph",
  [sym__list] = "_list",
  [sym_bullet_list] = "bullet_list",
  [sym__bullet_list_item] = "list_item",
  [sym_enumerated_list] = "enumerated_list",
  [sym__enumerated_list_item] = "list_item",
  [sym_field_list] = "field_list",
  [sym_field] = "field",
  [sym_option_list] = "option_list",
  [sym_option_list_item] = "option_list_item",
  [sym_line_block] = "line_block",
  [sym__single_line_block] = "_single_line_block",
  [sym__markup_block] = "_markup_block",
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
  [sym__line] = "_line",
  [sym__inline_markup] = "_inline_markup",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_paragraph_repeat1] = "paragraph_repeat1",
  [aux_sym_bullet_list_repeat1] = "bullet_list_repeat1",
  [aux_sym__bullet_list_item_repeat1] = "_bullet_list_item_repeat1",
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
  [aux_sym__line_repeat1] = "_line_repeat1",
  [aux_sym__line_repeat2] = "_line_repeat2",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym__bullet_list_item_token1] = aux_sym__bullet_list_item_token1,
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
  [sym__newline] = sym__newline,
  [sym__blankline] = sym__blankline,
  [sym__text] = sym__text,
  [sym_emphasis] = sym_emphasis,
  [sym_document] = sym_document,
  [sym__body_elements] = sym__body_elements,
  [sym_paragraph] = sym_paragraph,
  [sym__list] = sym__list,
  [sym_bullet_list] = sym_bullet_list,
  [sym__bullet_list_item] = sym__bullet_list_item,
  [sym_enumerated_list] = sym_enumerated_list,
  [sym__enumerated_list_item] = sym__bullet_list_item,
  [sym_field_list] = sym_field_list,
  [sym_field] = sym_field,
  [sym_option_list] = sym_option_list,
  [sym_option_list_item] = sym_option_list_item,
  [sym_line_block] = sym_line_block,
  [sym__single_line_block] = sym__single_line_block,
  [sym__markup_block] = sym__markup_block,
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
  [sym__line] = sym__line,
  [sym__inline_markup] = sym__inline_markup,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_paragraph_repeat1] = aux_sym_paragraph_repeat1,
  [aux_sym_bullet_list_repeat1] = aux_sym_bullet_list_repeat1,
  [aux_sym__bullet_list_item_repeat1] = aux_sym__bullet_list_item_repeat1,
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
  [aux_sym__line_repeat1] = aux_sym__line_repeat1,
  [aux_sym__line_repeat2] = aux_sym__line_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__bullet_list_item_token1] = {
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
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym__blankline] = {
    .visible = false,
    .named = true,
  },
  [sym__text] = {
    .visible = false,
    .named = true,
  },
  [sym_emphasis] = {
    .visible = true,
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
  [sym__list] = {
    .visible = false,
    .named = true,
  },
  [sym_bullet_list] = {
    .visible = true,
    .named = true,
  },
  [sym__bullet_list_item] = {
    .visible = true,
    .named = true,
  },
  [sym_enumerated_list] = {
    .visible = true,
    .named = true,
  },
  [sym__enumerated_list_item] = {
    .visible = true,
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
  [sym__markup_block] = {
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
  [sym__line] = {
    .visible = false,
    .named = true,
  },
  [sym__inline_markup] = {
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
  [aux_sym_bullet_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__bullet_list_item_repeat1] = {
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
  [aux_sym__line_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__line_repeat2] = {
    .visible = false,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[1][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(60);
      if (lookahead == '\t') ADVANCE(77);
      if (lookahead == 11) ADVANCE(78);
      if (lookahead == '\f') ADVANCE(79);
      if (lookahead == ' ') ADVANCE(76);
      if (lookahead == '|') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(61);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(24);
      if (lookahead == '*') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 3:
      if (lookahead == '+') ADVANCE(53);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '/') ADVANCE(53);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(89);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(88);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(41);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(48);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(87);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(71);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(71);
      if (lookahead == '_') ADVANCE(29);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(71);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '_') ADVANCE(17);
      if (lookahead == '`') ADVANCE(12);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '`') ADVANCE(29);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(30);
      if (lookahead == '_') ADVANCE(17);
      if (lookahead == '`') ADVANCE(12);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(16);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(45);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '[') ADVANCE(2);
      if (lookahead == '_') ADVANCE(28);
      if (lookahead == '|') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 21:
      if (lookahead == '[') ADVANCE(55);
      END_STATE();
    case 22:
      if (lookahead == ']') ADVANCE(46);
      END_STATE();
    case 23:
      if (lookahead == ']') ADVANCE(46);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 24:
      if (lookahead == ']') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead == ']') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == ']') ADVANCE(47);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == '_') ADVANCE(74);
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
      if (lookahead == '|') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(36);
      END_STATE();
    case 32:
      if (lookahead == '|') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(81);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(80);
      if (lookahead == '\r') ADVANCE(36);
      if (lookahead == '|') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 34:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(81);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(80);
      if (lookahead == '\r') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 35:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f') ADVANCE(43);
      if (lookahead == ' ') ADVANCE(44);
      if (lookahead == ',') ADVANCE(1);
      if (lookahead == '=') ADVANCE(54);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 36:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 37:
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
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
          lookahead == ' ') ADVANCE(62);
      if (lookahead == '-') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 40:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 41:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(63);
      END_STATE();
    case 42:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(63);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '_') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 43:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(65);
      END_STATE();
    case 44:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 45:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(64);
      END_STATE();
    case 46:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(69);
      END_STATE();
    case 47:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(70);
      END_STATE();
    case 48:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(21);
      END_STATE();
    case 49:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(57);
      if (lookahead == '.') ADVANCE(6);
      END_STATE();
    case 50:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(43);
      if (lookahead == ',') ADVANCE(1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 51:
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '_') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 52:
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '_') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 56:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(61);
      END_STATE();
    case 57:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(73);
      END_STATE();
    case 58:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(31);
      END_STATE();
    case 59:
      if (eof) ADVANCE(60);
      if (lookahead == '\t') ADVANCE(77);
      if (lookahead == 11) ADVANCE(78);
      if (lookahead == '\f') ADVANCE(79);
      if (lookahead == ' ') ADVANCE(76);
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == '*' ||
          lookahead == 8226 ||
          lookahead == 8227 ||
          lookahead == 8259) ADVANCE(38);
      if (lookahead == '+') ADVANCE(40);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == '.') ADVANCE(5);
      if (lookahead == '/') ADVANCE(53);
      if (lookahead == ':') ADVANCE(10);
      if (lookahead == '_') ADVANCE(27);
      if (lookahead == '|') ADVANCE(67);
      if (lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'I' ||
          lookahead == 'L' ||
          lookahead == 'M' ||
          lookahead == 'V' ||
          lookahead == 'X') ADVANCE(82);
      if (lookahead == 'c' ||
          lookahead == 'd' ||
          lookahead == 'i' ||
          lookahead == 'l' ||
          lookahead == 'm' ||
          lookahead == 'v' ||
          lookahead == 'x') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(85);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym__bullet_list_item_token1);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym__char_bullet);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym__enumerated_list_item_token1);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_field_token1);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_option_list_item_token1);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(68);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym__single_line_block_token1);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_footnote_token1);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_citation_token1);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_target_token1);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == '`') ADVANCE(11);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_target_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym___);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '_') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_TAB);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_3);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_substitution_definition_token1);
      if (lookahead == '|') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_substitution_definition_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym__embed_directive_token1);
      if (lookahead == '.') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '_') ADVANCE(51);
      if (lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'I' ||
          lookahead == 'L' ||
          lookahead == 'M' ||
          lookahead == 'V' ||
          lookahead == 'X') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym__embed_directive_token1);
      if (lookahead == '.') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '_') ADVANCE(51);
      if (lookahead == 'c' ||
          lookahead == 'd' ||
          lookahead == 'i' ||
          lookahead == 'l' ||
          lookahead == 'm' ||
          lookahead == 'v' ||
          lookahead == 'x') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym__embed_directive_token1);
      if (lookahead == '.') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '_') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym__embed_directive_token1);
      if (lookahead == '.') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '_') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym__embed_directive_token1);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '_') ADVANCE(51);
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
          lookahead == ' ') ADVANCE(20);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 59, .external_lex_state = 1},
  [2] = {.lex_state = 59, .external_lex_state = 1},
  [3] = {.lex_state = 59, .external_lex_state = 1},
  [4] = {.lex_state = 59, .external_lex_state = 1},
  [5] = {.lex_state = 59, .external_lex_state = 1},
  [6] = {.lex_state = 59, .external_lex_state = 1},
  [7] = {.lex_state = 59, .external_lex_state = 1},
  [8] = {.lex_state = 59, .external_lex_state = 2},
  [9] = {.lex_state = 59, .external_lex_state = 2},
  [10] = {.lex_state = 59, .external_lex_state = 2},
  [11] = {.lex_state = 59, .external_lex_state = 2},
  [12] = {.lex_state = 59, .external_lex_state = 2},
  [13] = {.lex_state = 0, .external_lex_state = 2},
  [14] = {.lex_state = 59, .external_lex_state = 3},
  [15] = {.lex_state = 0, .external_lex_state = 2},
  [16] = {.lex_state = 59, .external_lex_state = 3},
  [17] = {.lex_state = 59, .external_lex_state = 4},
  [18] = {.lex_state = 59, .external_lex_state = 4},
  [19] = {.lex_state = 59, .external_lex_state = 4},
  [20] = {.lex_state = 59, .external_lex_state = 3},
  [21] = {.lex_state = 59, .external_lex_state = 3},
  [22] = {.lex_state = 59, .external_lex_state = 4},
  [23] = {.lex_state = 0, .external_lex_state = 2},
  [24] = {.lex_state = 59, .external_lex_state = 4},
  [25] = {.lex_state = 0, .external_lex_state = 2},
  [26] = {.lex_state = 59, .external_lex_state = 4},
  [27] = {.lex_state = 59, .external_lex_state = 4},
  [28] = {.lex_state = 59, .external_lex_state = 4},
  [29] = {.lex_state = 59, .external_lex_state = 4},
  [30] = {.lex_state = 0, .external_lex_state = 2},
  [31] = {.lex_state = 59, .external_lex_state = 4},
  [32] = {.lex_state = 59, .external_lex_state = 4},
  [33] = {.lex_state = 56, .external_lex_state = 3},
  [34] = {.lex_state = 56, .external_lex_state = 3},
  [35] = {.lex_state = 56, .external_lex_state = 3},
  [36] = {.lex_state = 56, .external_lex_state = 3},
  [37] = {.lex_state = 49, .external_lex_state = 4},
  [38] = {.lex_state = 59, .external_lex_state = 4},
  [39] = {.lex_state = 59, .external_lex_state = 4},
  [40] = {.lex_state = 59, .external_lex_state = 4},
  [41] = {.lex_state = 59, .external_lex_state = 4},
  [42] = {.lex_state = 59, .external_lex_state = 4},
  [43] = {.lex_state = 59, .external_lex_state = 4},
  [44] = {.lex_state = 9, .external_lex_state = 4},
  [45] = {.lex_state = 59, .external_lex_state = 4},
  [46] = {.lex_state = 59, .external_lex_state = 4},
  [47] = {.lex_state = 59, .external_lex_state = 4},
  [48] = {.lex_state = 49, .external_lex_state = 4},
  [49] = {.lex_state = 56, .external_lex_state = 3},
  [50] = {.lex_state = 56, .external_lex_state = 3},
  [51] = {.lex_state = 56, .external_lex_state = 3},
  [52] = {.lex_state = 56, .external_lex_state = 3},
  [53] = {.lex_state = 56, .external_lex_state = 3},
  [54] = {.lex_state = 56, .external_lex_state = 3},
  [55] = {.lex_state = 56, .external_lex_state = 3},
  [56] = {.lex_state = 59, .external_lex_state = 4},
  [57] = {.lex_state = 59, .external_lex_state = 4},
  [58] = {.lex_state = 59, .external_lex_state = 4},
  [59] = {.lex_state = 9, .external_lex_state = 4},
  [60] = {.lex_state = 59, .external_lex_state = 4},
  [61] = {.lex_state = 59, .external_lex_state = 4},
  [62] = {.lex_state = 59, .external_lex_state = 4},
  [63] = {.lex_state = 59, .external_lex_state = 4},
  [64] = {.lex_state = 49, .external_lex_state = 3},
  [65] = {.lex_state = 56, .external_lex_state = 4},
  [66] = {.lex_state = 56, .external_lex_state = 4},
  [67] = {.lex_state = 59, .external_lex_state = 4},
  [68] = {.lex_state = 59, .external_lex_state = 4},
  [69] = {.lex_state = 56, .external_lex_state = 4},
  [70] = {.lex_state = 56, .external_lex_state = 4},
  [71] = {.lex_state = 56, .external_lex_state = 4},
  [72] = {.lex_state = 56, .external_lex_state = 4},
  [73] = {.lex_state = 56, .external_lex_state = 4},
  [74] = {.lex_state = 56, .external_lex_state = 4},
  [75] = {.lex_state = 0, .external_lex_state = 2},
  [76] = {.lex_state = 56, .external_lex_state = 4},
  [77] = {.lex_state = 56, .external_lex_state = 4},
  [78] = {.lex_state = 56, .external_lex_state = 4},
  [79] = {.lex_state = 56, .external_lex_state = 4},
  [80] = {.lex_state = 56, .external_lex_state = 4},
  [81] = {.lex_state = 56, .external_lex_state = 4},
  [82] = {.lex_state = 56, .external_lex_state = 4},
  [83] = {.lex_state = 56, .external_lex_state = 4},
  [84] = {.lex_state = 56, .external_lex_state = 4},
  [85] = {.lex_state = 56, .external_lex_state = 4},
  [86] = {.lex_state = 56, .external_lex_state = 4},
  [87] = {.lex_state = 56, .external_lex_state = 4},
  [88] = {.lex_state = 56, .external_lex_state = 4},
  [89] = {.lex_state = 56, .external_lex_state = 4},
  [90] = {.lex_state = 56, .external_lex_state = 4},
  [91] = {.lex_state = 56, .external_lex_state = 4},
  [92] = {.lex_state = 56, .external_lex_state = 4},
  [93] = {.lex_state = 56, .external_lex_state = 4},
  [94] = {.lex_state = 56, .external_lex_state = 4},
  [95] = {.lex_state = 56, .external_lex_state = 4},
  [96] = {.lex_state = 56, .external_lex_state = 4},
  [97] = {.lex_state = 56, .external_lex_state = 4},
  [98] = {.lex_state = 56, .external_lex_state = 4},
  [99] = {.lex_state = 49, .external_lex_state = 3},
  [100] = {.lex_state = 59, .external_lex_state = 4},
  [101] = {.lex_state = 0, .external_lex_state = 3},
  [102] = {.lex_state = 59, .external_lex_state = 4},
  [103] = {.lex_state = 0, .external_lex_state = 3},
  [104] = {.lex_state = 0, .external_lex_state = 3},
  [105] = {.lex_state = 0, .external_lex_state = 3},
  [106] = {.lex_state = 0, .external_lex_state = 3},
  [107] = {.lex_state = 59, .external_lex_state = 4},
  [108] = {.lex_state = 59, .external_lex_state = 4},
  [109] = {.lex_state = 9, .external_lex_state = 4},
  [110] = {.lex_state = 59, .external_lex_state = 4},
  [111] = {.lex_state = 59, .external_lex_state = 4},
  [112] = {.lex_state = 59, .external_lex_state = 4},
  [113] = {.lex_state = 59, .external_lex_state = 4},
  [114] = {.lex_state = 49, .external_lex_state = 4},
  [115] = {.lex_state = 0, .external_lex_state = 3},
  [116] = {.lex_state = 0, .external_lex_state = 3},
  [117] = {.lex_state = 0, .external_lex_state = 3},
  [118] = {.lex_state = 0, .external_lex_state = 3},
  [119] = {.lex_state = 0, .external_lex_state = 3},
  [120] = {.lex_state = 0, .external_lex_state = 3},
  [121] = {.lex_state = 0, .external_lex_state = 3},
  [122] = {.lex_state = 59, .external_lex_state = 4},
  [123] = {.lex_state = 0, .external_lex_state = 3},
  [124] = {.lex_state = 0, .external_lex_state = 3},
  [125] = {.lex_state = 49, .external_lex_state = 4},
  [126] = {.lex_state = 49, .external_lex_state = 4},
  [127] = {.lex_state = 0, .external_lex_state = 4},
  [128] = {.lex_state = 0, .external_lex_state = 3},
  [129] = {.lex_state = 0, .external_lex_state = 3},
  [130] = {.lex_state = 0, .external_lex_state = 3},
  [131] = {.lex_state = 0, .external_lex_state = 3},
  [132] = {.lex_state = 0, .external_lex_state = 3},
  [133] = {.lex_state = 0, .external_lex_state = 3},
  [134] = {.lex_state = 0, .external_lex_state = 3},
  [135] = {.lex_state = 0, .external_lex_state = 3},
  [136] = {.lex_state = 0, .external_lex_state = 3},
  [137] = {.lex_state = 0, .external_lex_state = 3},
  [138] = {.lex_state = 59, .external_lex_state = 4},
  [139] = {.lex_state = 0, .external_lex_state = 3},
  [140] = {.lex_state = 59, .external_lex_state = 4},
  [141] = {.lex_state = 0, .external_lex_state = 3},
  [142] = {.lex_state = 0, .external_lex_state = 3},
  [143] = {.lex_state = 59, .external_lex_state = 4},
  [144] = {.lex_state = 0, .external_lex_state = 3},
  [145] = {.lex_state = 0, .external_lex_state = 3},
  [146] = {.lex_state = 0, .external_lex_state = 3},
  [147] = {.lex_state = 0, .external_lex_state = 4},
  [148] = {.lex_state = 0, .external_lex_state = 4},
  [149] = {.lex_state = 0, .external_lex_state = 4},
  [150] = {.lex_state = 0, .external_lex_state = 4},
  [151] = {.lex_state = 0, .external_lex_state = 4},
  [152] = {.lex_state = 0, .external_lex_state = 4},
  [153] = {.lex_state = 0, .external_lex_state = 4},
  [154] = {.lex_state = 0, .external_lex_state = 4},
  [155] = {.lex_state = 0, .external_lex_state = 4},
  [156] = {.lex_state = 0, .external_lex_state = 4},
  [157] = {.lex_state = 0, .external_lex_state = 4},
  [158] = {.lex_state = 0, .external_lex_state = 4},
  [159] = {.lex_state = 0, .external_lex_state = 4},
  [160] = {.lex_state = 0, .external_lex_state = 4},
  [161] = {.lex_state = 0, .external_lex_state = 4},
  [162] = {.lex_state = 0, .external_lex_state = 4},
};

enum {
  ts_external_token__newline = 0,
  ts_external_token__blankline = 1,
  ts_external_token__text = 2,
  ts_external_token_emphasis = 3,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__newline] = sym__newline,
  [ts_external_token__blankline] = sym__blankline,
  [ts_external_token__text] = sym__text,
  [ts_external_token_emphasis] = sym_emphasis,
};

static bool ts_external_scanner_states[5][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__newline] = true,
    [ts_external_token__blankline] = true,
    [ts_external_token__text] = true,
    [ts_external_token_emphasis] = true,
  },
  [2] = {
    [ts_external_token__newline] = true,
    [ts_external_token__text] = true,
    [ts_external_token_emphasis] = true,
  },
  [3] = {
    [ts_external_token__newline] = true,
    [ts_external_token__blankline] = true,
  },
  [4] = {
    [ts_external_token__newline] = true,
  },
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym__bullet_list_item_token1] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_TAB] = ACTIONS(1),
    [anon_sym_2] = ACTIONS(1),
    [anon_sym_3] = ACTIONS(1),
    [sym__newline] = ACTIONS(3),
    [sym__blankline] = ACTIONS(1),
    [sym__text] = ACTIONS(1),
    [sym_emphasis] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(127),
    [sym__body_elements] = STATE(2),
    [sym_paragraph] = STATE(123),
    [sym__list] = STATE(123),
    [sym_bullet_list] = STATE(123),
    [sym__bullet_list_item] = STATE(121),
    [sym_enumerated_list] = STATE(123),
    [sym__enumerated_list_item] = STATE(120),
    [sym_field_list] = STATE(123),
    [sym_field] = STATE(106),
    [sym_option_list] = STATE(123),
    [sym_option_list_item] = STATE(104),
    [sym_line_block] = STATE(123),
    [sym__single_line_block] = STATE(128),
    [sym__markup_block] = STATE(123),
    [sym__footnote_block] = STATE(123),
    [sym_footnote] = STATE(130),
    [sym__citation_block] = STATE(123),
    [sym_citation] = STATE(129),
    [sym__hyperlink_target_block] = STATE(123),
    [sym_target] = STATE(118),
    [sym__anoynymous_hyperlink_target_block] = STATE(123),
    [sym__anonymous_target] = STATE(124),
    [sym__directive_block] = STATE(123),
    [sym_directive] = STATE(105),
    [sym__substitution_definition_block] = STATE(123),
    [sym_substitution_definition] = STATE(103),
    [sym__comment_block] = STATE(123),
    [sym_comment] = STATE(141),
    [sym__line] = STATE(131),
    [sym__inline_markup] = STATE(16),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_paragraph_repeat1] = STATE(13),
    [aux_sym_bullet_list_repeat1] = STATE(39),
    [aux_sym_enumerated_list_repeat1] = STATE(40),
    [aux_sym_field_list_repeat1] = STATE(41),
    [aux_sym_option_list_repeat1] = STATE(42),
    [aux_sym_line_block_repeat1] = STATE(28),
    [aux_sym__footnote_block_repeat1] = STATE(43),
    [aux_sym__citation_block_repeat1] = STATE(44),
    [aux_sym__hyperlink_target_block_repeat1] = STATE(45),
    [aux_sym__anoynymous_hyperlink_target_block_repeat1] = STATE(31),
    [aux_sym__directive_block_repeat1] = STATE(46),
    [aux_sym__substitution_definition_block_repeat1] = STATE(47),
    [aux_sym__comment_block_repeat1] = STATE(48),
    [aux_sym__line_repeat2] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym__char_bullet] = ACTIONS(7),
    [aux_sym__enumerated_list_item_token1] = ACTIONS(9),
    [aux_sym_field_token1] = ACTIONS(11),
    [aux_sym_option_list_item_token1] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(15),
    [aux_sym__single_line_block_token1] = ACTIONS(17),
    [aux_sym_footnote_token1] = ACTIONS(19),
    [aux_sym_citation_token1] = ACTIONS(21),
    [aux_sym_target_token1] = ACTIONS(23),
    [anon_sym___] = ACTIONS(25),
    [aux_sym_directive_token1] = ACTIONS(27),
    [aux_sym_substitution_definition_token1] = ACTIONS(29),
    [anon_sym_DOT_DOT] = ACTIONS(31),
    [sym__newline] = ACTIONS(3),
    [sym__blankline] = ACTIONS(33),
    [sym__text] = ACTIONS(35),
    [sym_emphasis] = ACTIONS(35),
  },
  [2] = {
    [sym__body_elements] = STATE(3),
    [sym_paragraph] = STATE(123),
    [sym__list] = STATE(123),
    [sym_bullet_list] = STATE(123),
    [sym__bullet_list_item] = STATE(121),
    [sym_enumerated_list] = STATE(123),
    [sym__enumerated_list_item] = STATE(120),
    [sym_field_list] = STATE(123),
    [sym_field] = STATE(106),
    [sym_option_list] = STATE(123),
    [sym_option_list_item] = STATE(104),
    [sym_line_block] = STATE(123),
    [sym__single_line_block] = STATE(128),
    [sym__markup_block] = STATE(123),
    [sym__footnote_block] = STATE(123),
    [sym_footnote] = STATE(130),
    [sym__citation_block] = STATE(123),
    [sym_citation] = STATE(129),
    [sym__hyperlink_target_block] = STATE(123),
    [sym_target] = STATE(118),
    [sym__anoynymous_hyperlink_target_block] = STATE(123),
    [sym__anonymous_target] = STATE(124),
    [sym__directive_block] = STATE(123),
    [sym_directive] = STATE(105),
    [sym__substitution_definition_block] = STATE(123),
    [sym_substitution_definition] = STATE(103),
    [sym__comment_block] = STATE(123),
    [sym_comment] = STATE(141),
    [sym__line] = STATE(131),
    [sym__inline_markup] = STATE(16),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_paragraph_repeat1] = STATE(13),
    [aux_sym_bullet_list_repeat1] = STATE(39),
    [aux_sym_enumerated_list_repeat1] = STATE(40),
    [aux_sym_field_list_repeat1] = STATE(41),
    [aux_sym_option_list_repeat1] = STATE(42),
    [aux_sym_line_block_repeat1] = STATE(28),
    [aux_sym__footnote_block_repeat1] = STATE(43),
    [aux_sym__citation_block_repeat1] = STATE(44),
    [aux_sym__hyperlink_target_block_repeat1] = STATE(45),
    [aux_sym__anoynymous_hyperlink_target_block_repeat1] = STATE(31),
    [aux_sym__directive_block_repeat1] = STATE(46),
    [aux_sym__substitution_definition_block_repeat1] = STATE(47),
    [aux_sym__comment_block_repeat1] = STATE(48),
    [aux_sym__line_repeat2] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(37),
    [sym__char_bullet] = ACTIONS(7),
    [aux_sym__enumerated_list_item_token1] = ACTIONS(9),
    [aux_sym_field_token1] = ACTIONS(11),
    [aux_sym_option_list_item_token1] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(15),
    [aux_sym__single_line_block_token1] = ACTIONS(17),
    [aux_sym_footnote_token1] = ACTIONS(19),
    [aux_sym_citation_token1] = ACTIONS(21),
    [aux_sym_target_token1] = ACTIONS(23),
    [anon_sym___] = ACTIONS(25),
    [aux_sym_directive_token1] = ACTIONS(27),
    [aux_sym_substitution_definition_token1] = ACTIONS(29),
    [anon_sym_DOT_DOT] = ACTIONS(31),
    [sym__newline] = ACTIONS(3),
    [sym__blankline] = ACTIONS(39),
    [sym__text] = ACTIONS(35),
    [sym_emphasis] = ACTIONS(35),
  },
  [3] = {
    [sym__body_elements] = STATE(3),
    [sym_paragraph] = STATE(123),
    [sym__list] = STATE(123),
    [sym_bullet_list] = STATE(123),
    [sym__bullet_list_item] = STATE(121),
    [sym_enumerated_list] = STATE(123),
    [sym__enumerated_list_item] = STATE(120),
    [sym_field_list] = STATE(123),
    [sym_field] = STATE(106),
    [sym_option_list] = STATE(123),
    [sym_option_list_item] = STATE(104),
    [sym_line_block] = STATE(123),
    [sym__single_line_block] = STATE(128),
    [sym__markup_block] = STATE(123),
    [sym__footnote_block] = STATE(123),
    [sym_footnote] = STATE(130),
    [sym__citation_block] = STATE(123),
    [sym_citation] = STATE(129),
    [sym__hyperlink_target_block] = STATE(123),
    [sym_target] = STATE(118),
    [sym__anoynymous_hyperlink_target_block] = STATE(123),
    [sym__anonymous_target] = STATE(124),
    [sym__directive_block] = STATE(123),
    [sym_directive] = STATE(105),
    [sym__substitution_definition_block] = STATE(123),
    [sym_substitution_definition] = STATE(103),
    [sym__comment_block] = STATE(123),
    [sym_comment] = STATE(141),
    [sym__line] = STATE(131),
    [sym__inline_markup] = STATE(16),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_paragraph_repeat1] = STATE(13),
    [aux_sym_bullet_list_repeat1] = STATE(39),
    [aux_sym_enumerated_list_repeat1] = STATE(40),
    [aux_sym_field_list_repeat1] = STATE(41),
    [aux_sym_option_list_repeat1] = STATE(42),
    [aux_sym_line_block_repeat1] = STATE(28),
    [aux_sym__footnote_block_repeat1] = STATE(43),
    [aux_sym__citation_block_repeat1] = STATE(44),
    [aux_sym__hyperlink_target_block_repeat1] = STATE(45),
    [aux_sym__anoynymous_hyperlink_target_block_repeat1] = STATE(31),
    [aux_sym__directive_block_repeat1] = STATE(46),
    [aux_sym__substitution_definition_block_repeat1] = STATE(47),
    [aux_sym__comment_block_repeat1] = STATE(48),
    [aux_sym__line_repeat2] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(41),
    [sym__char_bullet] = ACTIONS(43),
    [aux_sym__enumerated_list_item_token1] = ACTIONS(46),
    [aux_sym_field_token1] = ACTIONS(49),
    [aux_sym_option_list_item_token1] = ACTIONS(52),
    [anon_sym_PIPE] = ACTIONS(55),
    [aux_sym__single_line_block_token1] = ACTIONS(58),
    [aux_sym_footnote_token1] = ACTIONS(61),
    [aux_sym_citation_token1] = ACTIONS(64),
    [aux_sym_target_token1] = ACTIONS(67),
    [anon_sym___] = ACTIONS(70),
    [aux_sym_directive_token1] = ACTIONS(73),
    [aux_sym_substitution_definition_token1] = ACTIONS(76),
    [anon_sym_DOT_DOT] = ACTIONS(79),
    [sym__newline] = ACTIONS(3),
    [sym__blankline] = ACTIONS(82),
    [sym__text] = ACTIONS(85),
    [sym_emphasis] = ACTIONS(85),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(90), 3,
      anon_sym_PIPE,
      aux_sym_citation_token1,
      anon_sym_DOT_DOT,
    ACTIONS(88), 14,
      sym__blankline,
      sym__text,
      sym_emphasis,
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
  [25] = 4,
    STATE(7), 1,
      aux_sym__line_repeat1,
    ACTIONS(94), 2,
      sym__newline,
      sym__blankline,
    ACTIONS(96), 2,
      sym__text,
      sym_emphasis,
    ACTIONS(92), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [43] = 4,
    STATE(7), 1,
      aux_sym__line_repeat1,
    ACTIONS(96), 2,
      sym__text,
      sym_emphasis,
    ACTIONS(98), 2,
      sym__newline,
      sym__blankline,
    ACTIONS(92), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [61] = 3,
    STATE(7), 1,
      aux_sym__line_repeat1,
    ACTIONS(100), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
    ACTIONS(103), 4,
      sym__newline,
      sym__blankline,
      sym__text,
      sym_emphasis,
  [77] = 4,
    ACTIONS(3), 1,
      sym__newline,
    STATE(10), 1,
      aux_sym__line_repeat1,
    ACTIONS(96), 2,
      sym__text,
      sym_emphasis,
    ACTIONS(105), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [94] = 4,
    ACTIONS(98), 1,
      sym__newline,
    STATE(12), 1,
      aux_sym__line_repeat1,
    ACTIONS(96), 2,
      sym__text,
      sym_emphasis,
    ACTIONS(107), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [111] = 4,
    ACTIONS(3), 1,
      sym__newline,
    STATE(10), 1,
      aux_sym__line_repeat1,
    ACTIONS(103), 2,
      sym__text,
      sym_emphasis,
    ACTIONS(109), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [128] = 4,
    ACTIONS(94), 1,
      sym__newline,
    STATE(12), 1,
      aux_sym__line_repeat1,
    ACTIONS(96), 2,
      sym__text,
      sym_emphasis,
    ACTIONS(107), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [145] = 3,
    STATE(12), 1,
      aux_sym__line_repeat1,
    ACTIONS(103), 3,
      sym__newline,
      sym__text,
      sym_emphasis,
    ACTIONS(112), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [160] = 6,
    ACTIONS(3), 1,
      sym__newline,
    STATE(15), 1,
      aux_sym_paragraph_repeat1,
    STATE(16), 1,
      sym__inline_markup,
    STATE(30), 1,
      aux_sym__line_repeat2,
    STATE(115), 1,
      sym__line,
    ACTIONS(35), 2,
      sym__text,
      sym_emphasis,
  [180] = 3,
    STATE(5), 1,
      aux_sym__line_repeat1,
    ACTIONS(98), 2,
      sym__newline,
      sym__blankline,
    ACTIONS(115), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [194] = 6,
    ACTIONS(3), 1,
      sym__newline,
    STATE(15), 1,
      aux_sym_paragraph_repeat1,
    STATE(17), 1,
      sym__inline_markup,
    STATE(23), 1,
      aux_sym__line_repeat2,
    STATE(162), 1,
      sym__line,
    ACTIONS(117), 2,
      sym__text,
      sym_emphasis,
  [214] = 3,
    STATE(6), 1,
      aux_sym__line_repeat1,
    ACTIONS(122), 2,
      sym__newline,
      sym__blankline,
    ACTIONS(120), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [228] = 3,
    ACTIONS(122), 1,
      sym__newline,
    STATE(9), 1,
      aux_sym__line_repeat1,
    ACTIONS(124), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [241] = 3,
    ACTIONS(3), 1,
      sym__newline,
    STATE(8), 1,
      aux_sym__line_repeat1,
    ACTIONS(126), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [254] = 3,
    ACTIONS(98), 1,
      sym__newline,
    STATE(11), 1,
      aux_sym__line_repeat1,
    ACTIONS(128), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [267] = 2,
    ACTIONS(132), 2,
      sym__newline,
      sym__blankline,
    ACTIONS(130), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [278] = 2,
    ACTIONS(136), 2,
      sym__newline,
      sym__blankline,
    ACTIONS(134), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [289] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(138), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [299] = 4,
    ACTIONS(3), 1,
      sym__newline,
    STATE(19), 1,
      sym__inline_markup,
    STATE(25), 1,
      aux_sym__line_repeat2,
    ACTIONS(140), 2,
      sym__text,
      sym_emphasis,
  [313] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(142), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [323] = 4,
    ACTIONS(3), 1,
      sym__newline,
    STATE(18), 1,
      sym__inline_markup,
    STATE(25), 1,
      aux_sym__line_repeat2,
    ACTIONS(144), 2,
      sym__text,
      sym_emphasis,
  [337] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(147), 1,
      anon_sym_PIPE,
    ACTIONS(150), 1,
      aux_sym__single_line_block_token1,
    STATE(26), 1,
      aux_sym_line_block_repeat1,
    STATE(157), 1,
      sym__single_line_block,
  [353] = 2,
    ACTIONS(132), 1,
      sym__newline,
    ACTIONS(153), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [363] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(17), 1,
      aux_sym__single_line_block_token1,
    ACTIONS(155), 1,
      anon_sym_PIPE,
    STATE(26), 1,
      aux_sym_line_block_repeat1,
    STATE(146), 1,
      sym__single_line_block,
  [379] = 2,
    ACTIONS(136), 1,
      sym__newline,
    ACTIONS(157), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [389] = 4,
    ACTIONS(3), 1,
      sym__newline,
    STATE(14), 1,
      sym__inline_markup,
    STATE(25), 1,
      aux_sym__line_repeat2,
    ACTIONS(159), 2,
      sym__text,
      sym_emphasis,
  [403] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(25), 1,
      anon_sym___,
    STATE(57), 1,
      aux_sym__anoynymous_hyperlink_target_block_repeat1,
    STATE(137), 1,
      sym__anonymous_target,
  [416] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(161), 1,
      sym__char_bullet,
    STATE(32), 1,
      aux_sym_bullet_list_repeat1,
    STATE(161), 1,
      sym__bullet_list_item,
  [429] = 3,
    ACTIONS(164), 1,
      aux_sym__bullet_list_item_token1,
    STATE(36), 1,
      aux_sym__bullet_list_item_repeat1,
    ACTIONS(166), 2,
      sym__newline,
      sym__blankline,
  [440] = 3,
    ACTIONS(164), 1,
      aux_sym__bullet_list_item_token1,
    STATE(36), 1,
      aux_sym__bullet_list_item_repeat1,
    ACTIONS(168), 2,
      sym__newline,
      sym__blankline,
  [451] = 3,
    ACTIONS(164), 1,
      aux_sym__bullet_list_item_token1,
    STATE(36), 1,
      aux_sym__bullet_list_item_repeat1,
    ACTIONS(170), 2,
      sym__newline,
      sym__blankline,
  [462] = 3,
    ACTIONS(172), 1,
      aux_sym__bullet_list_item_token1,
    STATE(36), 1,
      aux_sym__bullet_list_item_repeat1,
    ACTIONS(175), 2,
      sym__newline,
      sym__blankline,
  [473] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(177), 1,
      anon_sym_DOT_DOT,
    STATE(37), 1,
      aux_sym__comment_block_repeat1,
    STATE(150), 1,
      sym_comment,
  [486] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(180), 1,
      aux_sym_substitution_definition_token1,
    STATE(38), 1,
      aux_sym__substitution_definition_block_repeat1,
    STATE(151), 1,
      sym_substitution_definition,
  [499] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(7), 1,
      sym__char_bullet,
    STATE(32), 1,
      aux_sym_bullet_list_repeat1,
    STATE(116), 1,
      sym__bullet_list_item,
  [512] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(9), 1,
      aux_sym__enumerated_list_item_token1,
    STATE(63), 1,
      aux_sym_enumerated_list_repeat1,
    STATE(117), 1,
      sym__enumerated_list_item,
  [525] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(11), 1,
      aux_sym_field_token1,
    STATE(62), 1,
      aux_sym_field_list_repeat1,
    STATE(119), 1,
      sym_field,
  [538] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(13), 1,
      aux_sym_option_list_item_token1,
    STATE(61), 1,
      aux_sym_option_list_repeat1,
    STATE(139), 1,
      sym_option_list_item,
  [551] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      aux_sym_footnote_token1,
    STATE(60), 1,
      aux_sym__footnote_block_repeat1,
    STATE(145), 1,
      sym_footnote,
  [564] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(183), 1,
      aux_sym_citation_token1,
    STATE(59), 1,
      aux_sym__citation_block_repeat1,
    STATE(144), 1,
      sym_citation,
  [577] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(23), 1,
      aux_sym_target_token1,
    STATE(58), 1,
      aux_sym__hyperlink_target_block_repeat1,
    STATE(142), 1,
      sym_target,
  [590] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(27), 1,
      aux_sym_directive_token1,
    STATE(56), 1,
      aux_sym__directive_block_repeat1,
    STATE(136), 1,
      sym_directive,
  [603] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(29), 1,
      aux_sym_substitution_definition_token1,
    STATE(38), 1,
      aux_sym__substitution_definition_block_repeat1,
    STATE(134), 1,
      sym_substitution_definition,
  [616] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(185), 1,
      anon_sym_DOT_DOT,
    STATE(37), 1,
      aux_sym__comment_block_repeat1,
    STATE(132), 1,
      sym_comment,
  [629] = 3,
    ACTIONS(164), 1,
      aux_sym__bullet_list_item_token1,
    STATE(36), 1,
      aux_sym__bullet_list_item_repeat1,
    ACTIONS(187), 2,
      sym__newline,
      sym__blankline,
  [640] = 3,
    ACTIONS(164), 1,
      aux_sym__bullet_list_item_token1,
    STATE(36), 1,
      aux_sym__bullet_list_item_repeat1,
    ACTIONS(189), 2,
      sym__newline,
      sym__blankline,
  [651] = 3,
    ACTIONS(164), 1,
      aux_sym__bullet_list_item_token1,
    STATE(36), 1,
      aux_sym__bullet_list_item_repeat1,
    ACTIONS(191), 2,
      sym__newline,
      sym__blankline,
  [662] = 3,
    ACTIONS(164), 1,
      aux_sym__bullet_list_item_token1,
    STATE(36), 1,
      aux_sym__bullet_list_item_repeat1,
    ACTIONS(193), 2,
      sym__newline,
      sym__blankline,
  [673] = 3,
    ACTIONS(164), 1,
      aux_sym__bullet_list_item_token1,
    STATE(36), 1,
      aux_sym__bullet_list_item_repeat1,
    ACTIONS(195), 2,
      sym__newline,
      sym__blankline,
  [684] = 3,
    ACTIONS(164), 1,
      aux_sym__bullet_list_item_token1,
    STATE(36), 1,
      aux_sym__bullet_list_item_repeat1,
    ACTIONS(197), 2,
      sym__newline,
      sym__blankline,
  [695] = 3,
    ACTIONS(164), 1,
      aux_sym__bullet_list_item_token1,
    STATE(36), 1,
      aux_sym__bullet_list_item_repeat1,
    ACTIONS(199), 2,
      sym__newline,
      sym__blankline,
  [706] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(201), 1,
      aux_sym_directive_token1,
    STATE(56), 1,
      aux_sym__directive_block_repeat1,
    STATE(152), 1,
      sym_directive,
  [719] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(204), 1,
      anon_sym___,
    STATE(57), 1,
      aux_sym__anoynymous_hyperlink_target_block_repeat1,
    STATE(153), 1,
      sym__anonymous_target,
  [732] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(207), 1,
      aux_sym_target_token1,
    STATE(58), 1,
      aux_sym__hyperlink_target_block_repeat1,
    STATE(154), 1,
      sym_target,
  [745] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(210), 1,
      aux_sym_citation_token1,
    STATE(59), 1,
      aux_sym__citation_block_repeat1,
    STATE(155), 1,
      sym_citation,
  [758] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(213), 1,
      aux_sym_footnote_token1,
    STATE(60), 1,
      aux_sym__footnote_block_repeat1,
    STATE(156), 1,
      sym_footnote,
  [771] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(216), 1,
      aux_sym_option_list_item_token1,
    STATE(61), 1,
      aux_sym_option_list_repeat1,
    STATE(158), 1,
      sym_option_list_item,
  [784] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(219), 1,
      aux_sym_field_token1,
    STATE(62), 1,
      aux_sym_field_list_repeat1,
    STATE(159), 1,
      sym_field,
  [797] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(222), 1,
      aux_sym__enumerated_list_item_token1,
    STATE(63), 1,
      aux_sym_enumerated_list_repeat1,
    STATE(160), 1,
      sym__enumerated_list_item,
  [810] = 2,
    ACTIONS(225), 1,
      aux_sym_target_token2,
    ACTIONS(227), 2,
      sym__newline,
      sym__blankline,
  [818] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(229), 1,
      aux_sym__bullet_list_item_token1,
    STATE(33), 1,
      aux_sym__bullet_list_item_repeat1,
  [828] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(231), 1,
      aux_sym__bullet_list_item_token1,
    STATE(50), 1,
      aux_sym__bullet_list_item_repeat1,
  [838] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(233), 1,
      anon_sym_PIPE,
    ACTIONS(235), 1,
      aux_sym__single_line_block_token1,
  [848] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(237), 1,
      aux_sym__embed_directive_token1,
    STATE(147), 1,
      sym__embed_directive,
  [858] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(239), 1,
      aux_sym__bullet_list_item_token1,
    STATE(91), 1,
      aux_sym__bullet_list_item_repeat1,
  [868] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(241), 1,
      aux_sym__bullet_list_item_token1,
    STATE(92), 1,
      aux_sym__bullet_list_item_repeat1,
  [878] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(243), 1,
      aux_sym__bullet_list_item_token1,
    STATE(94), 1,
      aux_sym__bullet_list_item_repeat1,
  [888] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(245), 1,
      aux_sym__bullet_list_item_token1,
    STATE(95), 1,
      aux_sym__bullet_list_item_repeat1,
  [898] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(247), 1,
      aux_sym__bullet_list_item_token1,
    STATE(96), 1,
      aux_sym__bullet_list_item_repeat1,
  [908] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(249), 1,
      aux_sym__bullet_list_item_token1,
    STATE(97), 1,
      aux_sym__bullet_list_item_repeat1,
  [918] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(251), 2,
      sym__text,
      sym_emphasis,
  [926] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(253), 1,
      aux_sym__bullet_list_item_token1,
    STATE(98), 1,
      aux_sym__bullet_list_item_repeat1,
  [936] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(255), 1,
      aux_sym__bullet_list_item_token1,
    STATE(51), 1,
      aux_sym__bullet_list_item_repeat1,
  [946] = 3,
    ACTIONS(166), 1,
      sym__newline,
    ACTIONS(257), 1,
      aux_sym__bullet_list_item_token1,
    STATE(84), 1,
      aux_sym__bullet_list_item_repeat1,
  [956] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(259), 1,
      aux_sym__bullet_list_item_token1,
    STATE(78), 1,
      aux_sym__bullet_list_item_repeat1,
  [966] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(261), 1,
      aux_sym__bullet_list_item_token1,
    STATE(52), 1,
      aux_sym__bullet_list_item_repeat1,
  [976] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(263), 1,
      aux_sym__bullet_list_item_token1,
    STATE(53), 1,
      aux_sym__bullet_list_item_repeat1,
  [986] = 3,
    ACTIONS(168), 1,
      sym__newline,
    ACTIONS(257), 1,
      aux_sym__bullet_list_item_token1,
    STATE(84), 1,
      aux_sym__bullet_list_item_repeat1,
  [996] = 3,
    ACTIONS(170), 1,
      sym__newline,
    ACTIONS(257), 1,
      aux_sym__bullet_list_item_token1,
    STATE(84), 1,
      aux_sym__bullet_list_item_repeat1,
  [1006] = 3,
    ACTIONS(175), 1,
      sym__newline,
    ACTIONS(265), 1,
      aux_sym__bullet_list_item_token1,
    STATE(84), 1,
      aux_sym__bullet_list_item_repeat1,
  [1016] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(268), 1,
      aux_sym__bullet_list_item_token1,
    STATE(49), 1,
      aux_sym__bullet_list_item_repeat1,
  [1026] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(270), 1,
      aux_sym__bullet_list_item_token1,
    STATE(54), 1,
      aux_sym__bullet_list_item_repeat1,
  [1036] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(272), 1,
      aux_sym__bullet_list_item_token1,
    STATE(34), 1,
      aux_sym__bullet_list_item_repeat1,
  [1046] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(274), 1,
      aux_sym__bullet_list_item_token1,
    STATE(55), 1,
      aux_sym__bullet_list_item_repeat1,
  [1056] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(276), 1,
      aux_sym__bullet_list_item_token1,
    STATE(82), 1,
      aux_sym__bullet_list_item_repeat1,
  [1066] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(278), 1,
      aux_sym__bullet_list_item_token1,
    STATE(83), 1,
      aux_sym__bullet_list_item_repeat1,
  [1076] = 3,
    ACTIONS(199), 1,
      sym__newline,
    ACTIONS(257), 1,
      aux_sym__bullet_list_item_token1,
    STATE(84), 1,
      aux_sym__bullet_list_item_repeat1,
  [1086] = 3,
    ACTIONS(197), 1,
      sym__newline,
    ACTIONS(257), 1,
      aux_sym__bullet_list_item_token1,
    STATE(84), 1,
      aux_sym__bullet_list_item_repeat1,
  [1096] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(280), 1,
      aux_sym__bullet_list_item_token1,
    STATE(35), 1,
      aux_sym__bullet_list_item_repeat1,
  [1106] = 3,
    ACTIONS(195), 1,
      sym__newline,
    ACTIONS(257), 1,
      aux_sym__bullet_list_item_token1,
    STATE(84), 1,
      aux_sym__bullet_list_item_repeat1,
  [1116] = 3,
    ACTIONS(193), 1,
      sym__newline,
    ACTIONS(257), 1,
      aux_sym__bullet_list_item_token1,
    STATE(84), 1,
      aux_sym__bullet_list_item_repeat1,
  [1126] = 3,
    ACTIONS(191), 1,
      sym__newline,
    ACTIONS(257), 1,
      aux_sym__bullet_list_item_token1,
    STATE(84), 1,
      aux_sym__bullet_list_item_repeat1,
  [1136] = 3,
    ACTIONS(189), 1,
      sym__newline,
    ACTIONS(257), 1,
      aux_sym__bullet_list_item_token1,
    STATE(84), 1,
      aux_sym__bullet_list_item_repeat1,
  [1146] = 3,
    ACTIONS(187), 1,
      sym__newline,
    ACTIONS(257), 1,
      aux_sym__bullet_list_item_token1,
    STATE(84), 1,
      aux_sym__bullet_list_item_repeat1,
  [1156] = 2,
    ACTIONS(282), 1,
      aux_sym_target_token2,
    ACTIONS(284), 2,
      sym__newline,
      sym__blankline,
  [1164] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(286), 1,
      aux_sym__embed_directive_token1,
    STATE(101), 1,
      sym__embed_directive,
  [1174] = 1,
    ACTIONS(288), 2,
      sym__newline,
      sym__blankline,
  [1179] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(290), 1,
      sym__char_bullet,
  [1186] = 2,
    ACTIONS(292), 1,
      sym__newline,
    ACTIONS(294), 1,
      sym__blankline,
  [1193] = 2,
    ACTIONS(296), 1,
      sym__newline,
    ACTIONS(298), 1,
      sym__blankline,
  [1200] = 2,
    ACTIONS(300), 1,
      sym__newline,
    ACTIONS(302), 1,
      sym__blankline,
  [1207] = 2,
    ACTIONS(304), 1,
      sym__newline,
    ACTIONS(306), 1,
      sym__blankline,
  [1214] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(308), 1,
      anon_sym_COLON_COLON,
  [1221] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(310), 1,
      aux_sym_footnote_token1,
  [1228] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(312), 1,
      aux_sym_citation_token1,
  [1235] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(314), 1,
      aux_sym_target_token1,
  [1242] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(316), 1,
      anon_sym___,
  [1249] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(318), 1,
      aux_sym_directive_token1,
  [1256] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(320), 1,
      aux_sym_substitution_definition_token1,
  [1263] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(322), 1,
      anon_sym_DOT_DOT,
  [1270] = 2,
    ACTIONS(324), 1,
      sym__newline,
    ACTIONS(326), 1,
      sym__blankline,
  [1277] = 2,
    ACTIONS(328), 1,
      sym__newline,
    ACTIONS(330), 1,
      sym__blankline,
  [1284] = 2,
    ACTIONS(332), 1,
      sym__newline,
    ACTIONS(334), 1,
      sym__blankline,
  [1291] = 2,
    ACTIONS(336), 1,
      sym__newline,
    ACTIONS(338), 1,
      sym__blankline,
  [1298] = 2,
    ACTIONS(304), 1,
      sym__newline,
    ACTIONS(340), 1,
      sym__blankline,
  [1305] = 2,
    ACTIONS(332), 1,
      sym__newline,
    ACTIONS(342), 1,
      sym__blankline,
  [1312] = 2,
    ACTIONS(328), 1,
      sym__newline,
    ACTIONS(344), 1,
      sym__blankline,
  [1319] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(346), 1,
      aux_sym_option_list_item_token1,
  [1326] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(348), 1,
      sym__blankline,
  [1333] = 2,
    ACTIONS(350), 1,
      sym__newline,
    ACTIONS(352), 1,
      sym__blankline,
  [1340] = 2,
    ACTIONS(284), 1,
      sym__newline,
    ACTIONS(354), 1,
      aux_sym_target_token2,
  [1347] = 2,
    ACTIONS(227), 1,
      sym__newline,
    ACTIONS(356), 1,
      aux_sym_target_token2,
  [1354] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(358), 1,
      ts_builtin_sym_end,
  [1361] = 2,
    ACTIONS(360), 1,
      sym__newline,
    ACTIONS(362), 1,
      sym__blankline,
  [1368] = 2,
    ACTIONS(364), 1,
      sym__newline,
    ACTIONS(366), 1,
      sym__blankline,
  [1375] = 2,
    ACTIONS(368), 1,
      sym__newline,
    ACTIONS(370), 1,
      sym__blankline,
  [1382] = 2,
    ACTIONS(324), 1,
      sym__newline,
    ACTIONS(372), 1,
      sym__blankline,
  [1389] = 2,
    ACTIONS(374), 1,
      sym__newline,
    ACTIONS(376), 1,
      sym__blankline,
  [1396] = 1,
    ACTIONS(378), 2,
      sym__newline,
      sym__blankline,
  [1401] = 2,
    ACTIONS(292), 1,
      sym__newline,
    ACTIONS(380), 1,
      sym__blankline,
  [1408] = 1,
    ACTIONS(382), 2,
      sym__newline,
      sym__blankline,
  [1413] = 2,
    ACTIONS(300), 1,
      sym__newline,
    ACTIONS(384), 1,
      sym__blankline,
  [1420] = 2,
    ACTIONS(350), 1,
      sym__newline,
    ACTIONS(386), 1,
      sym__blankline,
  [1427] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(388), 1,
      aux_sym__enumerated_list_item_token1,
  [1434] = 2,
    ACTIONS(296), 1,
      sym__newline,
    ACTIONS(390), 1,
      sym__blankline,
  [1441] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(392), 1,
      anon_sym_COLON_COLON,
  [1448] = 2,
    ACTIONS(374), 1,
      sym__newline,
    ACTIONS(394), 1,
      sym__blankline,
  [1455] = 2,
    ACTIONS(336), 1,
      sym__newline,
    ACTIONS(396), 1,
      sym__blankline,
  [1462] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(398), 1,
      aux_sym_field_token1,
  [1469] = 2,
    ACTIONS(364), 1,
      sym__newline,
    ACTIONS(400), 1,
      sym__blankline,
  [1476] = 2,
    ACTIONS(368), 1,
      sym__newline,
    ACTIONS(402), 1,
      sym__blankline,
  [1483] = 2,
    ACTIONS(360), 1,
      sym__newline,
    ACTIONS(404), 1,
      sym__blankline,
  [1490] = 1,
    ACTIONS(288), 1,
      sym__newline,
  [1494] = 1,
    ACTIONS(382), 1,
      sym__newline,
  [1498] = 1,
    ACTIONS(378), 1,
      sym__newline,
  [1502] = 1,
    ACTIONS(374), 1,
      sym__newline,
  [1506] = 1,
    ACTIONS(292), 1,
      sym__newline,
  [1510] = 1,
    ACTIONS(300), 1,
      sym__newline,
  [1514] = 1,
    ACTIONS(350), 1,
      sym__newline,
  [1518] = 1,
    ACTIONS(336), 1,
      sym__newline,
  [1522] = 1,
    ACTIONS(364), 1,
      sym__newline,
  [1526] = 1,
    ACTIONS(368), 1,
      sym__newline,
  [1530] = 1,
    ACTIONS(360), 1,
      sym__newline,
  [1534] = 1,
    ACTIONS(296), 1,
      sym__newline,
  [1538] = 1,
    ACTIONS(304), 1,
      sym__newline,
  [1542] = 1,
    ACTIONS(332), 1,
      sym__newline,
  [1546] = 1,
    ACTIONS(328), 1,
      sym__newline,
  [1550] = 1,
    ACTIONS(324), 1,
      sym__newline,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 25,
  [SMALL_STATE(6)] = 43,
  [SMALL_STATE(7)] = 61,
  [SMALL_STATE(8)] = 77,
  [SMALL_STATE(9)] = 94,
  [SMALL_STATE(10)] = 111,
  [SMALL_STATE(11)] = 128,
  [SMALL_STATE(12)] = 145,
  [SMALL_STATE(13)] = 160,
  [SMALL_STATE(14)] = 180,
  [SMALL_STATE(15)] = 194,
  [SMALL_STATE(16)] = 214,
  [SMALL_STATE(17)] = 228,
  [SMALL_STATE(18)] = 241,
  [SMALL_STATE(19)] = 254,
  [SMALL_STATE(20)] = 267,
  [SMALL_STATE(21)] = 278,
  [SMALL_STATE(22)] = 289,
  [SMALL_STATE(23)] = 299,
  [SMALL_STATE(24)] = 313,
  [SMALL_STATE(25)] = 323,
  [SMALL_STATE(26)] = 337,
  [SMALL_STATE(27)] = 353,
  [SMALL_STATE(28)] = 363,
  [SMALL_STATE(29)] = 379,
  [SMALL_STATE(30)] = 389,
  [SMALL_STATE(31)] = 403,
  [SMALL_STATE(32)] = 416,
  [SMALL_STATE(33)] = 429,
  [SMALL_STATE(34)] = 440,
  [SMALL_STATE(35)] = 451,
  [SMALL_STATE(36)] = 462,
  [SMALL_STATE(37)] = 473,
  [SMALL_STATE(38)] = 486,
  [SMALL_STATE(39)] = 499,
  [SMALL_STATE(40)] = 512,
  [SMALL_STATE(41)] = 525,
  [SMALL_STATE(42)] = 538,
  [SMALL_STATE(43)] = 551,
  [SMALL_STATE(44)] = 564,
  [SMALL_STATE(45)] = 577,
  [SMALL_STATE(46)] = 590,
  [SMALL_STATE(47)] = 603,
  [SMALL_STATE(48)] = 616,
  [SMALL_STATE(49)] = 629,
  [SMALL_STATE(50)] = 640,
  [SMALL_STATE(51)] = 651,
  [SMALL_STATE(52)] = 662,
  [SMALL_STATE(53)] = 673,
  [SMALL_STATE(54)] = 684,
  [SMALL_STATE(55)] = 695,
  [SMALL_STATE(56)] = 706,
  [SMALL_STATE(57)] = 719,
  [SMALL_STATE(58)] = 732,
  [SMALL_STATE(59)] = 745,
  [SMALL_STATE(60)] = 758,
  [SMALL_STATE(61)] = 771,
  [SMALL_STATE(62)] = 784,
  [SMALL_STATE(63)] = 797,
  [SMALL_STATE(64)] = 810,
  [SMALL_STATE(65)] = 818,
  [SMALL_STATE(66)] = 828,
  [SMALL_STATE(67)] = 838,
  [SMALL_STATE(68)] = 848,
  [SMALL_STATE(69)] = 858,
  [SMALL_STATE(70)] = 868,
  [SMALL_STATE(71)] = 878,
  [SMALL_STATE(72)] = 888,
  [SMALL_STATE(73)] = 898,
  [SMALL_STATE(74)] = 908,
  [SMALL_STATE(75)] = 918,
  [SMALL_STATE(76)] = 926,
  [SMALL_STATE(77)] = 936,
  [SMALL_STATE(78)] = 946,
  [SMALL_STATE(79)] = 956,
  [SMALL_STATE(80)] = 966,
  [SMALL_STATE(81)] = 976,
  [SMALL_STATE(82)] = 986,
  [SMALL_STATE(83)] = 996,
  [SMALL_STATE(84)] = 1006,
  [SMALL_STATE(85)] = 1016,
  [SMALL_STATE(86)] = 1026,
  [SMALL_STATE(87)] = 1036,
  [SMALL_STATE(88)] = 1046,
  [SMALL_STATE(89)] = 1056,
  [SMALL_STATE(90)] = 1066,
  [SMALL_STATE(91)] = 1076,
  [SMALL_STATE(92)] = 1086,
  [SMALL_STATE(93)] = 1096,
  [SMALL_STATE(94)] = 1106,
  [SMALL_STATE(95)] = 1116,
  [SMALL_STATE(96)] = 1126,
  [SMALL_STATE(97)] = 1136,
  [SMALL_STATE(98)] = 1146,
  [SMALL_STATE(99)] = 1156,
  [SMALL_STATE(100)] = 1164,
  [SMALL_STATE(101)] = 1174,
  [SMALL_STATE(102)] = 1179,
  [SMALL_STATE(103)] = 1186,
  [SMALL_STATE(104)] = 1193,
  [SMALL_STATE(105)] = 1200,
  [SMALL_STATE(106)] = 1207,
  [SMALL_STATE(107)] = 1214,
  [SMALL_STATE(108)] = 1221,
  [SMALL_STATE(109)] = 1228,
  [SMALL_STATE(110)] = 1235,
  [SMALL_STATE(111)] = 1242,
  [SMALL_STATE(112)] = 1249,
  [SMALL_STATE(113)] = 1256,
  [SMALL_STATE(114)] = 1263,
  [SMALL_STATE(115)] = 1270,
  [SMALL_STATE(116)] = 1277,
  [SMALL_STATE(117)] = 1284,
  [SMALL_STATE(118)] = 1291,
  [SMALL_STATE(119)] = 1298,
  [SMALL_STATE(120)] = 1305,
  [SMALL_STATE(121)] = 1312,
  [SMALL_STATE(122)] = 1319,
  [SMALL_STATE(123)] = 1326,
  [SMALL_STATE(124)] = 1333,
  [SMALL_STATE(125)] = 1340,
  [SMALL_STATE(126)] = 1347,
  [SMALL_STATE(127)] = 1354,
  [SMALL_STATE(128)] = 1361,
  [SMALL_STATE(129)] = 1368,
  [SMALL_STATE(130)] = 1375,
  [SMALL_STATE(131)] = 1382,
  [SMALL_STATE(132)] = 1389,
  [SMALL_STATE(133)] = 1396,
  [SMALL_STATE(134)] = 1401,
  [SMALL_STATE(135)] = 1408,
  [SMALL_STATE(136)] = 1413,
  [SMALL_STATE(137)] = 1420,
  [SMALL_STATE(138)] = 1427,
  [SMALL_STATE(139)] = 1434,
  [SMALL_STATE(140)] = 1441,
  [SMALL_STATE(141)] = 1448,
  [SMALL_STATE(142)] = 1455,
  [SMALL_STATE(143)] = 1462,
  [SMALL_STATE(144)] = 1469,
  [SMALL_STATE(145)] = 1476,
  [SMALL_STATE(146)] = 1483,
  [SMALL_STATE(147)] = 1490,
  [SMALL_STATE(148)] = 1494,
  [SMALL_STATE(149)] = 1498,
  [SMALL_STATE(150)] = 1502,
  [SMALL_STATE(151)] = 1506,
  [SMALL_STATE(152)] = 1510,
  [SMALL_STATE(153)] = 1514,
  [SMALL_STATE(154)] = 1518,
  [SMALL_STATE(155)] = 1522,
  [SMALL_STATE(156)] = 1526,
  [SMALL_STATE(157)] = 1530,
  [SMALL_STATE(158)] = 1534,
  [SMALL_STATE(159)] = 1538,
  [SMALL_STATE(160)] = 1542,
  [SMALL_STATE(161)] = 1546,
  [SMALL_STATE(162)] = 1550,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(85),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(66),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(77),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(80),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(128),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(81),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(86),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(88),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(99),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(64),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(21),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(100),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(20),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(3),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(16),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__body_elements, 2),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__body_elements, 2),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 3),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__line_repeat2, 2),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 2),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__line_repeat1, 2), SHIFT_REPEAT(7),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__line_repeat1, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__line_repeat1, 2), SHIFT_REPEAT(10),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__line_repeat1, 2), SHIFT_REPEAT(12),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(17),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 1),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__line_repeat2, 2), SHIFT_REPEAT(18),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_block_repeat1, 2), SHIFT_REPEAT(157),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_block_repeat1, 2), SHIFT_REPEAT(71),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bullet_list_repeat1, 2), SHIFT_REPEAT(76),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__embed_directive, 4),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__bullet_list_item_repeat1, 2), SHIFT_REPEAT(36),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__bullet_list_item_repeat1, 2),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_block_repeat1, 2), SHIFT_REPEAT(27),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__substitution_definition_block_repeat1, 2), SHIFT_REPEAT(68),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bullet_list_item, 2),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__enumerated_list_item, 2),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_list_item, 2),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_block, 2),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footnote, 2),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_citation, 2),
  [201] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__directive_block_repeat1, 2), SHIFT_REPEAT(29),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__anoynymous_hyperlink_target_block_repeat1, 2), SHIFT_REPEAT(126),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hyperlink_target_block_repeat1, 2), SHIFT_REPEAT(125),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__citation_block_repeat1, 2), SHIFT_REPEAT(69),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__footnote_block_repeat1, 2), SHIFT_REPEAT(70),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_option_list_repeat1, 2), SHIFT_REPEAT(72),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_list_repeat1, 2), SHIFT_REPEAT(73),
  [222] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enumerated_list_repeat1, 2), SHIFT_REPEAT(74),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__anonymous_target, 1),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_line_block_repeat1, 2),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_block_repeat1, 2),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__bullet_list_item_repeat1, 2), SHIFT_REPEAT(84),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 1),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_substitution_definition, 2),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bullet_list_repeat1, 2),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__substitution_definition_block, 1),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_list, 1),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directive_block, 1),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_list, 1),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__footnote_block_repeat1, 2),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__citation_block_repeat1, 2),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hyperlink_target_block_repeat1, 2),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__anoynymous_hyperlink_target_block_repeat1, 2),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__directive_block_repeat1, 2),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__substitution_definition_block_repeat1, 2),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__comment_block_repeat1, 2),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bullet_list, 2),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumerated_list, 2),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hyperlink_target_block, 1),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_list, 2),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumerated_list, 1),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bullet_list, 1),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_option_list_repeat1, 2),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__anoynymous_hyperlink_target_block, 1),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [358] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_block, 1),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__citation_block, 1),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__footnote_block, 1),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 1),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_block, 2),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 2),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__substitution_definition_block, 2),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__anonymous_target, 2),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directive_block, 2),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__anoynymous_hyperlink_target_block, 2),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enumerated_list_repeat1, 2),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_list, 2),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_block, 1),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hyperlink_target_block, 2),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_list_repeat1, 2),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__citation_block, 2),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__footnote_block, 2),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_block, 2),
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
