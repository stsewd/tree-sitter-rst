#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 153
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 74
#define ALIAS_COUNT 0
#define TOKEN_COUNT 27
#define EXTERNAL_TOKEN_COUNT 6
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4

enum {
  anon_sym_ = 1,
  anon_sym_TAB = 2,
  anon_sym_2 = 3,
  anon_sym_3 = 4,
  aux_sym_field_token1 = 5,
  aux_sym_field_token2 = 6,
  aux_sym_option_list_item_token1 = 7,
  anon_sym_PIPE = 8,
  aux_sym__single_line_block_token1 = 9,
  aux_sym_footnote_token1 = 10,
  aux_sym_citation_token1 = 11,
  aux_sym_target_token1 = 12,
  aux_sym_target_token2 = 13,
  anon_sym___ = 14,
  aux_sym_directive_token1 = 15,
  aux_sym_substitution_definition_token1 = 16,
  aux_sym__embed_directive_token1 = 17,
  anon_sym_COLON_COLON = 18,
  anon_sym_DOT_DOT = 19,
  aux_sym__line_token1 = 20,
  sym__newline = 21,
  sym__blankline = 22,
  sym__char_bullet = 23,
  sym__numeric_bullet = 24,
  sym__text = 25,
  sym_emphasis = 26,
  sym_document = 27,
  sym__body_elements = 28,
  sym_paragraph = 29,
  sym__list = 30,
  sym_bullet_list = 31,
  sym__bullet_list_item = 32,
  sym_enumerated_list = 33,
  sym__numeric_list_item = 34,
  sym_field_list = 35,
  sym_field = 36,
  sym_option_list = 37,
  sym_option_list_item = 38,
  sym_line_block = 39,
  sym__single_line_block = 40,
  sym__markup_block = 41,
  sym__footnote_block = 42,
  sym_footnote = 43,
  sym__citation_block = 44,
  sym_citation = 45,
  sym__hyperlink_target_block = 46,
  sym_target = 47,
  sym__anoynymous_hyperlink_target_block = 48,
  sym__anonymous_target = 49,
  sym__directive_block = 50,
  sym_directive = 51,
  sym__substitution_definition_block = 52,
  sym_substitution_definition = 53,
  sym__embed_directive = 54,
  sym__comment_block = 55,
  sym_comment = 56,
  aux_sym__line = 57,
  sym__inline_markup = 58,
  aux_sym_document_repeat1 = 59,
  aux_sym_paragraph_repeat1 = 60,
  aux_sym_bullet_list_repeat1 = 61,
  aux_sym_enumerated_list_repeat1 = 62,
  aux_sym_field_list_repeat1 = 63,
  aux_sym_field_repeat1 = 64,
  aux_sym_option_list_repeat1 = 65,
  aux_sym_line_block_repeat1 = 66,
  aux_sym__footnote_block_repeat1 = 67,
  aux_sym__citation_block_repeat1 = 68,
  aux_sym__hyperlink_target_block_repeat1 = 69,
  aux_sym__anoynymous_hyperlink_target_block_repeat1 = 70,
  aux_sym__directive_block_repeat1 = 71,
  aux_sym__substitution_definition_block_repeat1 = 72,
  aux_sym__comment_block_repeat1 = 73,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_] = " ",
  [anon_sym_TAB] = "\t",
  [anon_sym_2] = "",
  [anon_sym_3] = "\f",
  [aux_sym_field_token1] = "field_token1",
  [aux_sym_field_token2] = "field_token2",
  [aux_sym_option_list_item_token1] = "option_list_item_token1",
  [anon_sym_PIPE] = "|",
  [aux_sym__single_line_block_token1] = "_single_line_block_token1",
  [aux_sym_footnote_token1] = "footnote_token1",
  [aux_sym_citation_token1] = "citation_token1",
  [aux_sym_target_token1] = "target_token1",
  [aux_sym_target_token2] = "target_token2",
  [anon_sym___] = "__",
  [aux_sym_directive_token1] = "directive_token1",
  [aux_sym_substitution_definition_token1] = "substitution_definition_token1",
  [aux_sym__embed_directive_token1] = "_embed_directive_token1",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_DOT_DOT] = "..",
  [aux_sym__line_token1] = "_line_token1",
  [sym__newline] = "_newline",
  [sym__blankline] = "_blankline",
  [sym__char_bullet] = "_char_bullet",
  [sym__numeric_bullet] = "_numeric_bullet",
  [sym__text] = "_text",
  [sym_emphasis] = "emphasis",
  [sym_document] = "document",
  [sym__body_elements] = "_body_elements",
  [sym_paragraph] = "paragraph",
  [sym__list] = "_list",
  [sym_bullet_list] = "bullet_list",
  [sym__bullet_list_item] = "list_item",
  [sym_enumerated_list] = "enumerated_list",
  [sym__numeric_list_item] = "list_item",
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
  [aux_sym__line] = "_line",
  [sym__inline_markup] = "_inline_markup",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_paragraph_repeat1] = "paragraph_repeat1",
  [aux_sym_bullet_list_repeat1] = "bullet_list_repeat1",
  [aux_sym_enumerated_list_repeat1] = "enumerated_list_repeat1",
  [aux_sym_field_list_repeat1] = "field_list_repeat1",
  [aux_sym_field_repeat1] = "field_repeat1",
  [aux_sym_option_list_repeat1] = "option_list_repeat1",
  [aux_sym_line_block_repeat1] = "line_block_repeat1",
  [aux_sym__footnote_block_repeat1] = "_footnote_block_repeat1",
  [aux_sym__citation_block_repeat1] = "_citation_block_repeat1",
  [aux_sym__hyperlink_target_block_repeat1] = "_hyperlink_target_block_repeat1",
  [aux_sym__anoynymous_hyperlink_target_block_repeat1] = "_anoynymous_hyperlink_target_block_repeat1",
  [aux_sym__directive_block_repeat1] = "_directive_block_repeat1",
  [aux_sym__substitution_definition_block_repeat1] = "_substitution_definition_block_repeat1",
  [aux_sym__comment_block_repeat1] = "_comment_block_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_] = anon_sym_,
  [anon_sym_TAB] = anon_sym_TAB,
  [anon_sym_2] = anon_sym_2,
  [anon_sym_3] = anon_sym_3,
  [aux_sym_field_token1] = aux_sym_field_token1,
  [aux_sym_field_token2] = aux_sym_field_token2,
  [aux_sym_option_list_item_token1] = aux_sym_option_list_item_token1,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [aux_sym__single_line_block_token1] = aux_sym__single_line_block_token1,
  [aux_sym_footnote_token1] = aux_sym_footnote_token1,
  [aux_sym_citation_token1] = aux_sym_citation_token1,
  [aux_sym_target_token1] = aux_sym_target_token1,
  [aux_sym_target_token2] = aux_sym_target_token2,
  [anon_sym___] = anon_sym___,
  [aux_sym_directive_token1] = aux_sym_directive_token1,
  [aux_sym_substitution_definition_token1] = aux_sym_substitution_definition_token1,
  [aux_sym__embed_directive_token1] = aux_sym__embed_directive_token1,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [aux_sym__line_token1] = aux_sym__line_token1,
  [sym__newline] = sym__newline,
  [sym__blankline] = sym__blankline,
  [sym__char_bullet] = sym__char_bullet,
  [sym__numeric_bullet] = sym__numeric_bullet,
  [sym__text] = sym__text,
  [sym_emphasis] = sym_emphasis,
  [sym_document] = sym_document,
  [sym__body_elements] = sym__body_elements,
  [sym_paragraph] = sym_paragraph,
  [sym__list] = sym__list,
  [sym_bullet_list] = sym_bullet_list,
  [sym__bullet_list_item] = sym__bullet_list_item,
  [sym_enumerated_list] = sym_enumerated_list,
  [sym__numeric_list_item] = sym__bullet_list_item,
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
  [aux_sym__line] = aux_sym__line,
  [sym__inline_markup] = sym__inline_markup,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_paragraph_repeat1] = aux_sym_paragraph_repeat1,
  [aux_sym_bullet_list_repeat1] = aux_sym_bullet_list_repeat1,
  [aux_sym_enumerated_list_repeat1] = aux_sym_enumerated_list_repeat1,
  [aux_sym_field_list_repeat1] = aux_sym_field_list_repeat1,
  [aux_sym_field_repeat1] = aux_sym_field_repeat1,
  [aux_sym_option_list_repeat1] = aux_sym_option_list_repeat1,
  [aux_sym_line_block_repeat1] = aux_sym_line_block_repeat1,
  [aux_sym__footnote_block_repeat1] = aux_sym__footnote_block_repeat1,
  [aux_sym__citation_block_repeat1] = aux_sym__citation_block_repeat1,
  [aux_sym__hyperlink_target_block_repeat1] = aux_sym__hyperlink_target_block_repeat1,
  [aux_sym__anoynymous_hyperlink_target_block_repeat1] = aux_sym__anoynymous_hyperlink_target_block_repeat1,
  [aux_sym__directive_block_repeat1] = aux_sym__directive_block_repeat1,
  [aux_sym__substitution_definition_block_repeat1] = aux_sym__substitution_definition_block_repeat1,
  [aux_sym__comment_block_repeat1] = aux_sym__comment_block_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
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
  [aux_sym_field_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_field_token2] = {
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
  [aux_sym__line_token1] = {
    .visible = false,
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
  [sym__char_bullet] = {
    .visible = false,
    .named = true,
  },
  [sym__numeric_bullet] = {
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
  [sym__numeric_list_item] = {
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
  [aux_sym__line] = {
    .visible = false,
    .named = false,
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
  [aux_sym_enumerated_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_field_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_field_repeat1] = {
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
};

static TSSymbol ts_alias_sequences[1][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(54);
      if (lookahead == '\t') ADVANCE(56);
      if (lookahead == 11) ADVANCE(57);
      if (lookahead == '\f') ADVANCE(58);
      if (lookahead == ' ') ADVANCE(55);
      if (lookahead == '|') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(60);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(56);
      if (lookahead == 11) ADVANCE(57);
      if (lookahead == '\f') ADVANCE(58);
      if (lookahead == ' ') ADVANCE(55);
      if (lookahead == '.') ADVANCE(7);
      if (lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
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
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '/') ADVANCE(47);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(77);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(76);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(43);
      END_STATE();
    case 9:
      if (lookahead == ':') ADVANCE(67);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(67);
      if (lookahead == '_') ADVANCE(28);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(67);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == '_') ADVANCE(15);
      if (lookahead == '`') ADVANCE(10);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == '`') ADVANCE(28);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(71);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(29);
      if (lookahead == '_') ADVANCE(15);
      if (lookahead == '`') ADVANCE(10);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(75);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(40);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '[') ADVANCE(3);
      if (lookahead == '_') ADVANCE(27);
      if (lookahead == '|') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 20:
      if (lookahead == '[') ADVANCE(49);
      END_STATE();
    case 21:
      if (lookahead == ']') ADVANCE(41);
      END_STATE();
    case 22:
      if (lookahead == ']') ADVANCE(41);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 23:
      if (lookahead == ']') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 24:
      if (lookahead == ']') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == ']') ADVANCE(42);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == '_') ADVANCE(70);
      END_STATE();
    case 27:
      if (lookahead == '_') ADVANCE(9);
      if (lookahead == '`') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(11);
      END_STATE();
    case 28:
      if (lookahead == '_') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(10);
      END_STATE();
    case 29:
      if (lookahead == '`') ADVANCE(9);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == '|') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 31:
      if (lookahead == '|') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 32:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(73);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(72);
      if (lookahead == '\r') ADVANCE(35);
      if (lookahead == '|') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 33:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(73);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(72);
      if (lookahead == '\r') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 34:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f') ADVANCE(38);
      if (lookahead == ' ') ADVANCE(39);
      if (lookahead == ',') ADVANCE(2);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 35:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 36:
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 37:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead == ',') ADVANCE(2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 38:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(61);
      END_STATE();
    case 39:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 40:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(59);
      END_STATE();
    case 41:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(65);
      END_STATE();
    case 42:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(66);
      END_STATE();
    case 43:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(20);
      END_STATE();
    case 44:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(51);
      if (lookahead == '.') ADVANCE(8);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 50:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(60);
      END_STATE();
    case 51:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(69);
      END_STATE();
    case 52:
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(17);
      END_STATE();
    case 53:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(30);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(ts_builtin_sym_end);
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
      ACCEPT_TOKEN(aux_sym_field_token1);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_field_token2);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_option_list_item_token1);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(64);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym__single_line_block_token1);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_footnote_token1);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_citation_token1);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_target_token1);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == '`') ADVANCE(9);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_target_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym___);
      END_STATE();
    case 71:
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
    case 72:
      ACCEPT_TOKEN(aux_sym_substitution_definition_token1);
      if (lookahead == '|') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_substitution_definition_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym__embed_directive_token1);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '_') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(19);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (eof) ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(78);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '.') ADVANCE(6);
      if (lookahead == '/') ADVANCE(47);
      if (lookahead == ':') ADVANCE(52);
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == '|') ADVANCE(63);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 79, .external_lex_state = 1},
  [2] = {.lex_state = 79, .external_lex_state = 1},
  [3] = {.lex_state = 79, .external_lex_state = 1},
  [4] = {.lex_state = 79, .external_lex_state = 1},
  [5] = {.lex_state = 79, .external_lex_state = 2},
  [6] = {.lex_state = 79, .external_lex_state = 3},
  [7] = {.lex_state = 79, .external_lex_state = 2},
  [8] = {.lex_state = 79, .external_lex_state = 3},
  [9] = {.lex_state = 79, .external_lex_state = 2},
  [10] = {.lex_state = 79, .external_lex_state = 2},
  [11] = {.lex_state = 79, .external_lex_state = 2},
  [12] = {.lex_state = 79, .external_lex_state = 3},
  [13] = {.lex_state = 79, .external_lex_state = 3},
  [14] = {.lex_state = 1, .external_lex_state = 4},
  [15] = {.lex_state = 1, .external_lex_state = 4},
  [16] = {.lex_state = 79, .external_lex_state = 3},
  [17] = {.lex_state = 79, .external_lex_state = 3},
  [18] = {.lex_state = 79, .external_lex_state = 3},
  [19] = {.lex_state = 79, .external_lex_state = 3},
  [20] = {.lex_state = 79, .external_lex_state = 3},
  [21] = {.lex_state = 79, .external_lex_state = 3},
  [22] = {.lex_state = 1, .external_lex_state = 5},
  [23] = {.lex_state = 1, .external_lex_state = 5},
  [24] = {.lex_state = 1, .external_lex_state = 5},
  [25] = {.lex_state = 1, .external_lex_state = 5},
  [26] = {.lex_state = 79, .external_lex_state = 5},
  [27] = {.lex_state = 79, .external_lex_state = 5},
  [28] = {.lex_state = 1, .external_lex_state = 5},
  [29] = {.lex_state = 1, .external_lex_state = 5},
  [30] = {.lex_state = 1, .external_lex_state = 5},
  [31] = {.lex_state = 1, .external_lex_state = 5},
  [32] = {.lex_state = 0, .external_lex_state = 6},
  [33] = {.lex_state = 79, .external_lex_state = 5},
  [34] = {.lex_state = 79, .external_lex_state = 5},
  [35] = {.lex_state = 1, .external_lex_state = 5},
  [36] = {.lex_state = 79, .external_lex_state = 5},
  [37] = {.lex_state = 50, .external_lex_state = 4},
  [38] = {.lex_state = 79, .external_lex_state = 5},
  [39] = {.lex_state = 50, .external_lex_state = 4},
  [40] = {.lex_state = 0, .external_lex_state = 7},
  [41] = {.lex_state = 0, .external_lex_state = 6},
  [42] = {.lex_state = 79, .external_lex_state = 5},
  [43] = {.lex_state = 79, .external_lex_state = 5},
  [44] = {.lex_state = 79, .external_lex_state = 5},
  [45] = {.lex_state = 44, .external_lex_state = 5},
  [46] = {.lex_state = 79, .external_lex_state = 5},
  [47] = {.lex_state = 79, .external_lex_state = 3},
  [48] = {.lex_state = 79, .external_lex_state = 5},
  [49] = {.lex_state = 79, .external_lex_state = 5},
  [50] = {.lex_state = 1, .external_lex_state = 5},
  [51] = {.lex_state = 50, .external_lex_state = 4},
  [52] = {.lex_state = 50, .external_lex_state = 4},
  [53] = {.lex_state = 50, .external_lex_state = 4},
  [54] = {.lex_state = 50, .external_lex_state = 4},
  [55] = {.lex_state = 50, .external_lex_state = 4},
  [56] = {.lex_state = 44, .external_lex_state = 5},
  [57] = {.lex_state = 50, .external_lex_state = 4},
  [58] = {.lex_state = 79, .external_lex_state = 5},
  [59] = {.lex_state = 50, .external_lex_state = 4},
  [60] = {.lex_state = 79, .external_lex_state = 5},
  [61] = {.lex_state = 79, .external_lex_state = 5},
  [62] = {.lex_state = 0, .external_lex_state = 7},
  [63] = {.lex_state = 79, .external_lex_state = 5},
  [64] = {.lex_state = 50, .external_lex_state = 5},
  [65] = {.lex_state = 50, .external_lex_state = 5},
  [66] = {.lex_state = 79, .external_lex_state = 5},
  [67] = {.lex_state = 50, .external_lex_state = 5},
  [68] = {.lex_state = 44, .external_lex_state = 4},
  [69] = {.lex_state = 44, .external_lex_state = 4},
  [70] = {.lex_state = 50, .external_lex_state = 5},
  [71] = {.lex_state = 50, .external_lex_state = 5},
  [72] = {.lex_state = 50, .external_lex_state = 5},
  [73] = {.lex_state = 50, .external_lex_state = 5},
  [74] = {.lex_state = 50, .external_lex_state = 5},
  [75] = {.lex_state = 50, .external_lex_state = 5},
  [76] = {.lex_state = 50, .external_lex_state = 5},
  [77] = {.lex_state = 50, .external_lex_state = 5},
  [78] = {.lex_state = 50, .external_lex_state = 5},
  [79] = {.lex_state = 50, .external_lex_state = 5},
  [80] = {.lex_state = 1, .external_lex_state = 5},
  [81] = {.lex_state = 50, .external_lex_state = 5},
  [82] = {.lex_state = 50, .external_lex_state = 5},
  [83] = {.lex_state = 50, .external_lex_state = 5},
  [84] = {.lex_state = 50, .external_lex_state = 5},
  [85] = {.lex_state = 50, .external_lex_state = 5},
  [86] = {.lex_state = 50, .external_lex_state = 5},
  [87] = {.lex_state = 50, .external_lex_state = 5},
  [88] = {.lex_state = 50, .external_lex_state = 5},
  [89] = {.lex_state = 50, .external_lex_state = 5},
  [90] = {.lex_state = 50, .external_lex_state = 5},
  [91] = {.lex_state = 50, .external_lex_state = 5},
  [92] = {.lex_state = 50, .external_lex_state = 5},
  [93] = {.lex_state = 1, .external_lex_state = 5},
  [94] = {.lex_state = 0, .external_lex_state = 4},
  [95] = {.lex_state = 44, .external_lex_state = 5},
  [96] = {.lex_state = 0, .external_lex_state = 4},
  [97] = {.lex_state = 0, .external_lex_state = 4},
  [98] = {.lex_state = 0, .external_lex_state = 4},
  [99] = {.lex_state = 0, .external_lex_state = 4},
  [100] = {.lex_state = 0, .external_lex_state = 4},
  [101] = {.lex_state = 0, .external_lex_state = 4},
  [102] = {.lex_state = 0, .external_lex_state = 4},
  [103] = {.lex_state = 0, .external_lex_state = 4},
  [104] = {.lex_state = 0, .external_lex_state = 4},
  [105] = {.lex_state = 1, .external_lex_state = 5},
  [106] = {.lex_state = 0, .external_lex_state = 4},
  [107] = {.lex_state = 0, .external_lex_state = 4},
  [108] = {.lex_state = 0, .external_lex_state = 4},
  [109] = {.lex_state = 0, .external_lex_state = 4},
  [110] = {.lex_state = 0, .external_lex_state = 4},
  [111] = {.lex_state = 0, .external_lex_state = 4},
  [112] = {.lex_state = 0, .external_lex_state = 4},
  [113] = {.lex_state = 1, .external_lex_state = 5},
  [114] = {.lex_state = 0, .external_lex_state = 4},
  [115] = {.lex_state = 0, .external_lex_state = 7},
  [116] = {.lex_state = 0, .external_lex_state = 6},
  [117] = {.lex_state = 0, .external_lex_state = 4},
  [118] = {.lex_state = 0, .external_lex_state = 4},
  [119] = {.lex_state = 44, .external_lex_state = 5},
  [120] = {.lex_state = 44, .external_lex_state = 5},
  [121] = {.lex_state = 0, .external_lex_state = 4},
  [122] = {.lex_state = 0, .external_lex_state = 4},
  [123] = {.lex_state = 0, .external_lex_state = 5},
  [124] = {.lex_state = 0, .external_lex_state = 4},
  [125] = {.lex_state = 0, .external_lex_state = 4},
  [126] = {.lex_state = 0, .external_lex_state = 4},
  [127] = {.lex_state = 0, .external_lex_state = 4},
  [128] = {.lex_state = 0, .external_lex_state = 4},
  [129] = {.lex_state = 1, .external_lex_state = 5},
  [130] = {.lex_state = 79, .external_lex_state = 5},
  [131] = {.lex_state = 79, .external_lex_state = 5},
  [132] = {.lex_state = 79, .external_lex_state = 5},
  [133] = {.lex_state = 79, .external_lex_state = 5},
  [134] = {.lex_state = 79, .external_lex_state = 5},
  [135] = {.lex_state = 79, .external_lex_state = 5},
  [136] = {.lex_state = 79, .external_lex_state = 5},
  [137] = {.lex_state = 0, .external_lex_state = 4},
  [138] = {.lex_state = 0, .external_lex_state = 5},
  [139] = {.lex_state = 0, .external_lex_state = 5},
  [140] = {.lex_state = 0, .external_lex_state = 5},
  [141] = {.lex_state = 0, .external_lex_state = 5},
  [142] = {.lex_state = 0, .external_lex_state = 5},
  [143] = {.lex_state = 0, .external_lex_state = 5},
  [144] = {.lex_state = 0, .external_lex_state = 5},
  [145] = {.lex_state = 0, .external_lex_state = 5},
  [146] = {.lex_state = 0, .external_lex_state = 5},
  [147] = {.lex_state = 0, .external_lex_state = 5},
  [148] = {.lex_state = 0, .external_lex_state = 5},
  [149] = {.lex_state = 0, .external_lex_state = 5},
  [150] = {.lex_state = 0, .external_lex_state = 5},
  [151] = {.lex_state = 0, .external_lex_state = 5},
  [152] = {.lex_state = 0, .external_lex_state = 5},
};

enum {
  ts_external_token__newline = 0,
  ts_external_token__blankline = 1,
  ts_external_token__char_bullet = 2,
  ts_external_token__numeric_bullet = 3,
  ts_external_token__text = 4,
  ts_external_token_emphasis = 5,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__newline] = sym__newline,
  [ts_external_token__blankline] = sym__blankline,
  [ts_external_token__char_bullet] = sym__char_bullet,
  [ts_external_token__numeric_bullet] = sym__numeric_bullet,
  [ts_external_token__text] = sym__text,
  [ts_external_token_emphasis] = sym_emphasis,
};

static bool ts_external_scanner_states[8][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__newline] = true,
    [ts_external_token__blankline] = true,
    [ts_external_token__char_bullet] = true,
    [ts_external_token__numeric_bullet] = true,
    [ts_external_token__text] = true,
    [ts_external_token_emphasis] = true,
  },
  [2] = {
    [ts_external_token__newline] = true,
    [ts_external_token__blankline] = true,
    [ts_external_token__text] = true,
    [ts_external_token_emphasis] = true,
  },
  [3] = {
    [ts_external_token__newline] = true,
    [ts_external_token__text] = true,
    [ts_external_token_emphasis] = true,
  },
  [4] = {
    [ts_external_token__newline] = true,
    [ts_external_token__blankline] = true,
  },
  [5] = {
    [ts_external_token__newline] = true,
  },
  [6] = {
    [ts_external_token__newline] = true,
    [ts_external_token__numeric_bullet] = true,
  },
  [7] = {
    [ts_external_token__newline] = true,
    [ts_external_token__char_bullet] = true,
  },
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_TAB] = ACTIONS(1),
    [anon_sym_2] = ACTIONS(1),
    [anon_sym_3] = ACTIONS(1),
    [aux_sym_field_token2] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [sym__newline] = ACTIONS(3),
    [sym__blankline] = ACTIONS(1),
    [sym__char_bullet] = ACTIONS(1),
    [sym__numeric_bullet] = ACTIONS(1),
    [sym__text] = ACTIONS(1),
    [sym_emphasis] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(123),
    [sym__body_elements] = STATE(3),
    [sym_paragraph] = STATE(122),
    [sym__list] = STATE(122),
    [sym_bullet_list] = STATE(122),
    [sym__bullet_list_item] = STATE(121),
    [sym_enumerated_list] = STATE(122),
    [sym__numeric_list_item] = STATE(104),
    [sym_field_list] = STATE(122),
    [sym_field] = STATE(102),
    [sym_option_list] = STATE(122),
    [sym_option_list_item] = STATE(99),
    [sym_line_block] = STATE(122),
    [sym__single_line_block] = STATE(98),
    [sym__markup_block] = STATE(122),
    [sym__footnote_block] = STATE(122),
    [sym_footnote] = STATE(100),
    [sym__citation_block] = STATE(122),
    [sym_citation] = STATE(97),
    [sym__hyperlink_target_block] = STATE(122),
    [sym_target] = STATE(106),
    [sym__anoynymous_hyperlink_target_block] = STATE(122),
    [sym__anonymous_target] = STATE(107),
    [sym__directive_block] = STATE(122),
    [sym_directive] = STATE(108),
    [sym__substitution_definition_block] = STATE(122),
    [sym_substitution_definition] = STATE(109),
    [sym__comment_block] = STATE(122),
    [sym_comment] = STATE(110),
    [aux_sym__line] = STATE(7),
    [sym__inline_markup] = STATE(7),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_paragraph_repeat1] = STATE(6),
    [aux_sym_bullet_list_repeat1] = STATE(40),
    [aux_sym_enumerated_list_repeat1] = STATE(41),
    [aux_sym_field_list_repeat1] = STATE(42),
    [aux_sym_option_list_repeat1] = STATE(43),
    [aux_sym_line_block_repeat1] = STATE(27),
    [aux_sym__footnote_block_repeat1] = STATE(44),
    [aux_sym__citation_block_repeat1] = STATE(45),
    [aux_sym__hyperlink_target_block_repeat1] = STATE(46),
    [aux_sym__anoynymous_hyperlink_target_block_repeat1] = STATE(33),
    [aux_sym__directive_block_repeat1] = STATE(48),
    [aux_sym__substitution_definition_block_repeat1] = STATE(49),
    [aux_sym__comment_block_repeat1] = STATE(50),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_field_token1] = ACTIONS(7),
    [aux_sym_option_list_item_token1] = ACTIONS(9),
    [anon_sym_PIPE] = ACTIONS(11),
    [aux_sym__single_line_block_token1] = ACTIONS(13),
    [aux_sym_footnote_token1] = ACTIONS(15),
    [aux_sym_citation_token1] = ACTIONS(17),
    [aux_sym_target_token1] = ACTIONS(19),
    [anon_sym___] = ACTIONS(21),
    [aux_sym_directive_token1] = ACTIONS(23),
    [aux_sym_substitution_definition_token1] = ACTIONS(25),
    [anon_sym_DOT_DOT] = ACTIONS(27),
    [aux_sym__line_token1] = ACTIONS(29),
    [sym__newline] = ACTIONS(3),
    [sym__blankline] = ACTIONS(31),
    [sym__char_bullet] = ACTIONS(33),
    [sym__numeric_bullet] = ACTIONS(35),
    [sym__text] = ACTIONS(37),
    [sym_emphasis] = ACTIONS(37),
  },
  [2] = {
    [sym__body_elements] = STATE(2),
    [sym_paragraph] = STATE(122),
    [sym__list] = STATE(122),
    [sym_bullet_list] = STATE(122),
    [sym__bullet_list_item] = STATE(121),
    [sym_enumerated_list] = STATE(122),
    [sym__numeric_list_item] = STATE(104),
    [sym_field_list] = STATE(122),
    [sym_field] = STATE(102),
    [sym_option_list] = STATE(122),
    [sym_option_list_item] = STATE(99),
    [sym_line_block] = STATE(122),
    [sym__single_line_block] = STATE(98),
    [sym__markup_block] = STATE(122),
    [sym__footnote_block] = STATE(122),
    [sym_footnote] = STATE(100),
    [sym__citation_block] = STATE(122),
    [sym_citation] = STATE(97),
    [sym__hyperlink_target_block] = STATE(122),
    [sym_target] = STATE(106),
    [sym__anoynymous_hyperlink_target_block] = STATE(122),
    [sym__anonymous_target] = STATE(107),
    [sym__directive_block] = STATE(122),
    [sym_directive] = STATE(108),
    [sym__substitution_definition_block] = STATE(122),
    [sym_substitution_definition] = STATE(109),
    [sym__comment_block] = STATE(122),
    [sym_comment] = STATE(110),
    [aux_sym__line] = STATE(7),
    [sym__inline_markup] = STATE(7),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_paragraph_repeat1] = STATE(6),
    [aux_sym_bullet_list_repeat1] = STATE(40),
    [aux_sym_enumerated_list_repeat1] = STATE(41),
    [aux_sym_field_list_repeat1] = STATE(42),
    [aux_sym_option_list_repeat1] = STATE(43),
    [aux_sym_line_block_repeat1] = STATE(27),
    [aux_sym__footnote_block_repeat1] = STATE(44),
    [aux_sym__citation_block_repeat1] = STATE(45),
    [aux_sym__hyperlink_target_block_repeat1] = STATE(46),
    [aux_sym__anoynymous_hyperlink_target_block_repeat1] = STATE(33),
    [aux_sym__directive_block_repeat1] = STATE(48),
    [aux_sym__substitution_definition_block_repeat1] = STATE(49),
    [aux_sym__comment_block_repeat1] = STATE(50),
    [ts_builtin_sym_end] = ACTIONS(39),
    [aux_sym_field_token1] = ACTIONS(41),
    [aux_sym_option_list_item_token1] = ACTIONS(44),
    [anon_sym_PIPE] = ACTIONS(47),
    [aux_sym__single_line_block_token1] = ACTIONS(50),
    [aux_sym_footnote_token1] = ACTIONS(53),
    [aux_sym_citation_token1] = ACTIONS(56),
    [aux_sym_target_token1] = ACTIONS(59),
    [anon_sym___] = ACTIONS(62),
    [aux_sym_directive_token1] = ACTIONS(65),
    [aux_sym_substitution_definition_token1] = ACTIONS(68),
    [anon_sym_DOT_DOT] = ACTIONS(71),
    [aux_sym__line_token1] = ACTIONS(74),
    [sym__newline] = ACTIONS(3),
    [sym__blankline] = ACTIONS(77),
    [sym__char_bullet] = ACTIONS(80),
    [sym__numeric_bullet] = ACTIONS(83),
    [sym__text] = ACTIONS(86),
    [sym_emphasis] = ACTIONS(86),
  },
  [3] = {
    [sym__body_elements] = STATE(2),
    [sym_paragraph] = STATE(122),
    [sym__list] = STATE(122),
    [sym_bullet_list] = STATE(122),
    [sym__bullet_list_item] = STATE(121),
    [sym_enumerated_list] = STATE(122),
    [sym__numeric_list_item] = STATE(104),
    [sym_field_list] = STATE(122),
    [sym_field] = STATE(102),
    [sym_option_list] = STATE(122),
    [sym_option_list_item] = STATE(99),
    [sym_line_block] = STATE(122),
    [sym__single_line_block] = STATE(98),
    [sym__markup_block] = STATE(122),
    [sym__footnote_block] = STATE(122),
    [sym_footnote] = STATE(100),
    [sym__citation_block] = STATE(122),
    [sym_citation] = STATE(97),
    [sym__hyperlink_target_block] = STATE(122),
    [sym_target] = STATE(106),
    [sym__anoynymous_hyperlink_target_block] = STATE(122),
    [sym__anonymous_target] = STATE(107),
    [sym__directive_block] = STATE(122),
    [sym_directive] = STATE(108),
    [sym__substitution_definition_block] = STATE(122),
    [sym_substitution_definition] = STATE(109),
    [sym__comment_block] = STATE(122),
    [sym_comment] = STATE(110),
    [aux_sym__line] = STATE(7),
    [sym__inline_markup] = STATE(7),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_paragraph_repeat1] = STATE(6),
    [aux_sym_bullet_list_repeat1] = STATE(40),
    [aux_sym_enumerated_list_repeat1] = STATE(41),
    [aux_sym_field_list_repeat1] = STATE(42),
    [aux_sym_option_list_repeat1] = STATE(43),
    [aux_sym_line_block_repeat1] = STATE(27),
    [aux_sym__footnote_block_repeat1] = STATE(44),
    [aux_sym__citation_block_repeat1] = STATE(45),
    [aux_sym__hyperlink_target_block_repeat1] = STATE(46),
    [aux_sym__anoynymous_hyperlink_target_block_repeat1] = STATE(33),
    [aux_sym__directive_block_repeat1] = STATE(48),
    [aux_sym__substitution_definition_block_repeat1] = STATE(49),
    [aux_sym__comment_block_repeat1] = STATE(50),
    [ts_builtin_sym_end] = ACTIONS(89),
    [aux_sym_field_token1] = ACTIONS(7),
    [aux_sym_option_list_item_token1] = ACTIONS(9),
    [anon_sym_PIPE] = ACTIONS(11),
    [aux_sym__single_line_block_token1] = ACTIONS(13),
    [aux_sym_footnote_token1] = ACTIONS(15),
    [aux_sym_citation_token1] = ACTIONS(17),
    [aux_sym_target_token1] = ACTIONS(19),
    [anon_sym___] = ACTIONS(21),
    [aux_sym_directive_token1] = ACTIONS(23),
    [aux_sym_substitution_definition_token1] = ACTIONS(25),
    [anon_sym_DOT_DOT] = ACTIONS(27),
    [aux_sym__line_token1] = ACTIONS(29),
    [sym__newline] = ACTIONS(3),
    [sym__blankline] = ACTIONS(91),
    [sym__char_bullet] = ACTIONS(33),
    [sym__numeric_bullet] = ACTIONS(35),
    [sym__text] = ACTIONS(37),
    [sym_emphasis] = ACTIONS(37),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(95), 4,
      anon_sym_PIPE,
      aux_sym_citation_token1,
      anon_sym_DOT_DOT,
      aux_sym__line_token1,
    ACTIONS(93), 14,
      sym__blankline,
      sym__char_bullet,
      sym__numeric_bullet,
      sym__text,
      sym_emphasis,
      ts_builtin_sym_end,
      aux_sym_field_token1,
      aux_sym_option_list_item_token1,
      aux_sym__single_line_block_token1,
      aux_sym_footnote_token1,
      aux_sym_target_token1,
      anon_sym___,
      aux_sym_directive_token1,
      aux_sym_substitution_definition_token1,
  [26] = 3,
    ACTIONS(100), 2,
      sym__newline,
      sym__blankline,
    STATE(5), 2,
      aux_sym__line,
      sym__inline_markup,
    ACTIONS(97), 3,
      sym__text,
      sym_emphasis,
      aux_sym__line_token1,
  [40] = 4,
    ACTIONS(3), 1,
      sym__newline,
    STATE(8), 1,
      aux_sym_paragraph_repeat1,
    STATE(9), 2,
      aux_sym__line,
      sym__inline_markup,
    ACTIONS(102), 3,
      sym__text,
      sym_emphasis,
      aux_sym__line_token1,
  [56] = 4,
    ACTIONS(106), 1,
      sym__newline,
    ACTIONS(108), 1,
      sym__blankline,
    STATE(5), 2,
      aux_sym__line,
      sym__inline_markup,
    ACTIONS(104), 3,
      sym__text,
      sym_emphasis,
      aux_sym__line_token1,
  [72] = 4,
    ACTIONS(3), 1,
      sym__newline,
    STATE(8), 1,
      aux_sym_paragraph_repeat1,
    STATE(12), 2,
      aux_sym__line,
      sym__inline_markup,
    ACTIONS(110), 3,
      sym__text,
      sym_emphasis,
      aux_sym__line_token1,
  [88] = 4,
    ACTIONS(106), 1,
      sym__newline,
    ACTIONS(113), 1,
      sym__blankline,
    STATE(5), 2,
      aux_sym__line,
      sym__inline_markup,
    ACTIONS(104), 3,
      sym__text,
      sym_emphasis,
      aux_sym__line_token1,
  [104] = 3,
    ACTIONS(115), 2,
      sym__newline,
      sym__blankline,
    STATE(5), 2,
      aux_sym__line,
      sym__inline_markup,
    ACTIONS(104), 3,
      sym__text,
      sym_emphasis,
      aux_sym__line_token1,
  [118] = 3,
    ACTIONS(117), 2,
      sym__newline,
      sym__blankline,
    STATE(5), 2,
      aux_sym__line,
      sym__inline_markup,
    ACTIONS(104), 3,
      sym__text,
      sym_emphasis,
      aux_sym__line_token1,
  [132] = 3,
    ACTIONS(106), 1,
      sym__newline,
    STATE(19), 2,
      aux_sym__line,
      sym__inline_markup,
    ACTIONS(119), 3,
      sym__text,
      sym_emphasis,
      aux_sym__line_token1,
  [145] = 3,
    ACTIONS(3), 1,
      sym__newline,
    STATE(20), 2,
      aux_sym__line,
      sym__inline_markup,
    ACTIONS(121), 3,
      sym__text,
      sym_emphasis,
      aux_sym__line_token1,
  [158] = 2,
    ACTIONS(125), 2,
      sym__newline,
      sym__blankline,
    ACTIONS(123), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [169] = 2,
    ACTIONS(129), 2,
      sym__newline,
      sym__blankline,
    ACTIONS(127), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [180] = 3,
    ACTIONS(3), 1,
      sym__newline,
    STATE(21), 2,
      aux_sym__line,
      sym__inline_markup,
    ACTIONS(131), 3,
      sym__text,
      sym_emphasis,
      aux_sym__line_token1,
  [193] = 3,
    ACTIONS(3), 1,
      sym__newline,
    STATE(10), 2,
      aux_sym__line,
      sym__inline_markup,
    ACTIONS(133), 3,
      sym__text,
      sym_emphasis,
      aux_sym__line_token1,
  [206] = 3,
    ACTIONS(3), 1,
      sym__newline,
    STATE(11), 2,
      aux_sym__line,
      sym__inline_markup,
    ACTIONS(135), 3,
      sym__text,
      sym_emphasis,
      aux_sym__line_token1,
  [219] = 3,
    ACTIONS(100), 1,
      sym__newline,
    STATE(19), 2,
      aux_sym__line,
      sym__inline_markup,
    ACTIONS(137), 3,
      sym__text,
      sym_emphasis,
      aux_sym__line_token1,
  [232] = 3,
    ACTIONS(115), 1,
      sym__newline,
    STATE(19), 2,
      aux_sym__line,
      sym__inline_markup,
    ACTIONS(119), 3,
      sym__text,
      sym_emphasis,
      aux_sym__line_token1,
  [245] = 3,
    ACTIONS(117), 1,
      sym__newline,
    STATE(19), 2,
      aux_sym__line,
      sym__inline_markup,
    ACTIONS(119), 3,
      sym__text,
      sym_emphasis,
      aux_sym__line_token1,
  [258] = 2,
    ACTIONS(125), 1,
      sym__newline,
    ACTIONS(140), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [268] = 2,
    ACTIONS(129), 1,
      sym__newline,
    ACTIONS(142), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [278] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(144), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [288] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(146), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [298] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(148), 1,
      anon_sym_PIPE,
    ACTIONS(151), 1,
      aux_sym__single_line_block_token1,
    STATE(26), 1,
      aux_sym_line_block_repeat1,
    STATE(148), 1,
      sym__single_line_block,
  [314] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(13), 1,
      aux_sym__single_line_block_token1,
    ACTIONS(154), 1,
      anon_sym_PIPE,
    STATE(26), 1,
      aux_sym_line_block_repeat1,
    STATE(124), 1,
      sym__single_line_block,
  [330] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(156), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [340] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(158), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [350] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(160), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [360] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(162), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [370] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(164), 1,
      sym__numeric_bullet,
    STATE(32), 1,
      aux_sym_enumerated_list_repeat1,
    STATE(151), 1,
      sym__numeric_list_item,
  [383] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(21), 1,
      anon_sym___,
    STATE(36), 1,
      aux_sym__anoynymous_hyperlink_target_block_repeat1,
    STATE(101), 1,
      sym__anonymous_target,
  [396] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(167), 1,
      aux_sym_directive_token1,
    STATE(34), 1,
      aux_sym__directive_block_repeat1,
    STATE(143), 1,
      sym_directive,
  [409] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(170), 1,
      anon_sym_DOT_DOT,
    STATE(35), 1,
      aux_sym__comment_block_repeat1,
    STATE(141), 1,
      sym_comment,
  [422] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(173), 1,
      anon_sym___,
    STATE(36), 1,
      aux_sym__anoynymous_hyperlink_target_block_repeat1,
    STATE(144), 1,
      sym__anonymous_target,
  [435] = 3,
    ACTIONS(176), 1,
      aux_sym_field_token2,
    STATE(37), 1,
      aux_sym_field_repeat1,
    ACTIONS(179), 2,
      sym__newline,
      sym__blankline,
  [446] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(181), 1,
      aux_sym_target_token1,
    STATE(38), 1,
      aux_sym__hyperlink_target_block_repeat1,
    STATE(145), 1,
      sym_target,
  [459] = 3,
    ACTIONS(184), 1,
      aux_sym_field_token2,
    STATE(37), 1,
      aux_sym_field_repeat1,
    ACTIONS(186), 2,
      sym__newline,
      sym__blankline,
  [470] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(33), 1,
      sym__char_bullet,
    STATE(62), 1,
      aux_sym_bullet_list_repeat1,
    STATE(128), 1,
      sym__bullet_list_item,
  [483] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(35), 1,
      sym__numeric_bullet,
    STATE(32), 1,
      aux_sym_enumerated_list_repeat1,
    STATE(127), 1,
      sym__numeric_list_item,
  [496] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(7), 1,
      aux_sym_field_token1,
    STATE(61), 1,
      aux_sym_field_list_repeat1,
    STATE(126), 1,
      sym_field,
  [509] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(9), 1,
      aux_sym_option_list_item_token1,
    STATE(60), 1,
      aux_sym_option_list_repeat1,
    STATE(125), 1,
      sym_option_list_item,
  [522] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(15), 1,
      aux_sym_footnote_token1,
    STATE(58), 1,
      aux_sym__footnote_block_repeat1,
    STATE(118), 1,
      sym_footnote,
  [535] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(188), 1,
      aux_sym_citation_token1,
    STATE(56), 1,
      aux_sym__citation_block_repeat1,
    STATE(117), 1,
      sym_citation,
  [548] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      aux_sym_target_token1,
    STATE(38), 1,
      aux_sym__hyperlink_target_block_repeat1,
    STATE(103), 1,
      sym_target,
  [561] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(190), 3,
      sym__text,
      sym_emphasis,
      aux_sym__line_token1,
  [570] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(23), 1,
      aux_sym_directive_token1,
    STATE(34), 1,
      aux_sym__directive_block_repeat1,
    STATE(94), 1,
      sym_directive,
  [583] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(25), 1,
      aux_sym_substitution_definition_token1,
    STATE(63), 1,
      aux_sym__substitution_definition_block_repeat1,
    STATE(137), 1,
      sym_substitution_definition,
  [596] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(192), 1,
      anon_sym_DOT_DOT,
    STATE(35), 1,
      aux_sym__comment_block_repeat1,
    STATE(96), 1,
      sym_comment,
  [609] = 3,
    ACTIONS(184), 1,
      aux_sym_field_token2,
    STATE(37), 1,
      aux_sym_field_repeat1,
    ACTIONS(194), 2,
      sym__newline,
      sym__blankline,
  [620] = 3,
    ACTIONS(184), 1,
      aux_sym_field_token2,
    STATE(37), 1,
      aux_sym_field_repeat1,
    ACTIONS(196), 2,
      sym__newline,
      sym__blankline,
  [631] = 3,
    ACTIONS(184), 1,
      aux_sym_field_token2,
    STATE(37), 1,
      aux_sym_field_repeat1,
    ACTIONS(198), 2,
      sym__newline,
      sym__blankline,
  [642] = 3,
    ACTIONS(184), 1,
      aux_sym_field_token2,
    STATE(37), 1,
      aux_sym_field_repeat1,
    ACTIONS(200), 2,
      sym__newline,
      sym__blankline,
  [653] = 3,
    ACTIONS(184), 1,
      aux_sym_field_token2,
    STATE(37), 1,
      aux_sym_field_repeat1,
    ACTIONS(202), 2,
      sym__newline,
      sym__blankline,
  [664] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(204), 1,
      aux_sym_citation_token1,
    STATE(56), 1,
      aux_sym__citation_block_repeat1,
    STATE(146), 1,
      sym_citation,
  [677] = 3,
    ACTIONS(184), 1,
      aux_sym_field_token2,
    STATE(37), 1,
      aux_sym_field_repeat1,
    ACTIONS(207), 2,
      sym__newline,
      sym__blankline,
  [688] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(209), 1,
      aux_sym_footnote_token1,
    STATE(58), 1,
      aux_sym__footnote_block_repeat1,
    STATE(147), 1,
      sym_footnote,
  [701] = 3,
    ACTIONS(184), 1,
      aux_sym_field_token2,
    STATE(37), 1,
      aux_sym_field_repeat1,
    ACTIONS(212), 2,
      sym__newline,
      sym__blankline,
  [712] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(214), 1,
      aux_sym_option_list_item_token1,
    STATE(60), 1,
      aux_sym_option_list_repeat1,
    STATE(149), 1,
      sym_option_list_item,
  [725] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(217), 1,
      aux_sym_field_token1,
    STATE(61), 1,
      aux_sym_field_list_repeat1,
    STATE(150), 1,
      sym_field,
  [738] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(220), 1,
      sym__char_bullet,
    STATE(62), 1,
      aux_sym_bullet_list_repeat1,
    STATE(152), 1,
      sym__bullet_list_item,
  [751] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(223), 1,
      aux_sym_substitution_definition_token1,
    STATE(63), 1,
      aux_sym__substitution_definition_block_repeat1,
    STATE(142), 1,
      sym_substitution_definition,
  [764] = 3,
    ACTIONS(207), 1,
      sym__newline,
    ACTIONS(226), 1,
      aux_sym_field_token2,
    STATE(65), 1,
      aux_sym_field_repeat1,
  [774] = 3,
    ACTIONS(179), 1,
      sym__newline,
    ACTIONS(228), 1,
      aux_sym_field_token2,
    STATE(65), 1,
      aux_sym_field_repeat1,
  [784] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(231), 1,
      anon_sym_PIPE,
    ACTIONS(233), 1,
      aux_sym__single_line_block_token1,
  [794] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(235), 1,
      aux_sym_field_token2,
    STATE(55), 1,
      aux_sym_field_repeat1,
  [804] = 2,
    ACTIONS(237), 1,
      aux_sym_target_token2,
    ACTIONS(239), 2,
      sym__newline,
      sym__blankline,
  [812] = 2,
    ACTIONS(241), 1,
      aux_sym_target_token2,
    ACTIONS(243), 2,
      sym__newline,
      sym__blankline,
  [820] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(245), 1,
      aux_sym_field_token2,
    STATE(64), 1,
      aux_sym_field_repeat1,
  [830] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(247), 1,
      aux_sym_field_token2,
    STATE(74), 1,
      aux_sym_field_repeat1,
  [840] = 3,
    ACTIONS(202), 1,
      sym__newline,
    ACTIONS(226), 1,
      aux_sym_field_token2,
    STATE(65), 1,
      aux_sym_field_repeat1,
  [850] = 3,
    ACTIONS(200), 1,
      sym__newline,
    ACTIONS(226), 1,
      aux_sym_field_token2,
    STATE(65), 1,
      aux_sym_field_repeat1,
  [860] = 3,
    ACTIONS(186), 1,
      sym__newline,
    ACTIONS(226), 1,
      aux_sym_field_token2,
    STATE(65), 1,
      aux_sym_field_repeat1,
  [870] = 3,
    ACTIONS(198), 1,
      sym__newline,
    ACTIONS(226), 1,
      aux_sym_field_token2,
    STATE(65), 1,
      aux_sym_field_repeat1,
  [880] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(249), 1,
      aux_sym_field_token2,
    STATE(52), 1,
      aux_sym_field_repeat1,
  [890] = 3,
    ACTIONS(196), 1,
      sym__newline,
    ACTIONS(226), 1,
      aux_sym_field_token2,
    STATE(65), 1,
      aux_sym_field_repeat1,
  [900] = 3,
    ACTIONS(194), 1,
      sym__newline,
    ACTIONS(226), 1,
      aux_sym_field_token2,
    STATE(65), 1,
      aux_sym_field_repeat1,
  [910] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(251), 1,
      aux_sym_field_token2,
    STATE(82), 1,
      aux_sym_field_repeat1,
  [920] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(253), 1,
      aux_sym__embed_directive_token1,
    STATE(114), 1,
      sym__embed_directive,
  [930] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(255), 1,
      aux_sym_field_token2,
    STATE(57), 1,
      aux_sym_field_repeat1,
  [940] = 3,
    ACTIONS(212), 1,
      sym__newline,
    ACTIONS(226), 1,
      aux_sym_field_token2,
    STATE(65), 1,
      aux_sym_field_repeat1,
  [950] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(257), 1,
      aux_sym_field_token2,
    STATE(51), 1,
      aux_sym_field_repeat1,
  [960] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(259), 1,
      aux_sym_field_token2,
    STATE(59), 1,
      aux_sym_field_repeat1,
  [970] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(261), 1,
      aux_sym_field_token2,
    STATE(54), 1,
      aux_sym_field_repeat1,
  [980] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(263), 1,
      aux_sym_field_token2,
    STATE(39), 1,
      aux_sym_field_repeat1,
  [990] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(265), 1,
      aux_sym_field_token2,
    STATE(53), 1,
      aux_sym_field_repeat1,
  [1000] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(267), 1,
      aux_sym_field_token2,
    STATE(78), 1,
      aux_sym_field_repeat1,
  [1010] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(269), 1,
      aux_sym_field_token2,
    STATE(77), 1,
      aux_sym_field_repeat1,
  [1020] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(271), 1,
      aux_sym_field_token2,
    STATE(75), 1,
      aux_sym_field_repeat1,
  [1030] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(273), 1,
      aux_sym_field_token2,
    STATE(73), 1,
      aux_sym_field_repeat1,
  [1040] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(275), 1,
      aux_sym_field_token2,
    STATE(72), 1,
      aux_sym_field_repeat1,
  [1050] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(277), 1,
      aux_sym__embed_directive_token1,
    STATE(138), 1,
      sym__embed_directive,
  [1060] = 2,
    ACTIONS(279), 1,
      sym__newline,
    ACTIONS(281), 1,
      sym__blankline,
  [1067] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(283), 1,
      aux_sym_citation_token1,
  [1074] = 2,
    ACTIONS(285), 1,
      sym__newline,
    ACTIONS(287), 1,
      sym__blankline,
  [1081] = 2,
    ACTIONS(289), 1,
      sym__newline,
    ACTIONS(291), 1,
      sym__blankline,
  [1088] = 2,
    ACTIONS(293), 1,
      sym__newline,
    ACTIONS(295), 1,
      sym__blankline,
  [1095] = 2,
    ACTIONS(297), 1,
      sym__newline,
    ACTIONS(299), 1,
      sym__blankline,
  [1102] = 2,
    ACTIONS(301), 1,
      sym__newline,
    ACTIONS(303), 1,
      sym__blankline,
  [1109] = 2,
    ACTIONS(305), 1,
      sym__newline,
    ACTIONS(307), 1,
      sym__blankline,
  [1116] = 2,
    ACTIONS(309), 1,
      sym__newline,
    ACTIONS(311), 1,
      sym__blankline,
  [1123] = 2,
    ACTIONS(313), 1,
      sym__newline,
    ACTIONS(315), 1,
      sym__blankline,
  [1130] = 2,
    ACTIONS(317), 1,
      sym__newline,
    ACTIONS(319), 1,
      sym__blankline,
  [1137] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(321), 1,
      anon_sym_COLON_COLON,
  [1144] = 2,
    ACTIONS(313), 1,
      sym__newline,
    ACTIONS(323), 1,
      sym__blankline,
  [1151] = 2,
    ACTIONS(305), 1,
      sym__newline,
    ACTIONS(325), 1,
      sym__blankline,
  [1158] = 2,
    ACTIONS(279), 1,
      sym__newline,
    ACTIONS(327), 1,
      sym__blankline,
  [1165] = 2,
    ACTIONS(329), 1,
      sym__newline,
    ACTIONS(331), 1,
      sym__blankline,
  [1172] = 2,
    ACTIONS(285), 1,
      sym__newline,
    ACTIONS(333), 1,
      sym__blankline,
  [1179] = 1,
    ACTIONS(335), 2,
      sym__newline,
      sym__blankline,
  [1184] = 1,
    ACTIONS(337), 2,
      sym__newline,
      sym__blankline,
  [1189] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(339), 1,
      anon_sym_COLON_COLON,
  [1196] = 1,
    ACTIONS(341), 2,
      sym__newline,
      sym__blankline,
  [1201] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(343), 1,
      sym__char_bullet,
  [1208] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(345), 1,
      sym__numeric_bullet,
  [1215] = 2,
    ACTIONS(289), 1,
      sym__newline,
    ACTIONS(347), 1,
      sym__blankline,
  [1222] = 2,
    ACTIONS(301), 1,
      sym__newline,
    ACTIONS(349), 1,
      sym__blankline,
  [1229] = 2,
    ACTIONS(239), 1,
      sym__newline,
    ACTIONS(351), 1,
      aux_sym_target_token2,
  [1236] = 2,
    ACTIONS(243), 1,
      sym__newline,
    ACTIONS(353), 1,
      aux_sym_target_token2,
  [1243] = 2,
    ACTIONS(355), 1,
      sym__newline,
    ACTIONS(357), 1,
      sym__blankline,
  [1250] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(359), 1,
      sym__blankline,
  [1257] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(361), 1,
      ts_builtin_sym_end,
  [1264] = 2,
    ACTIONS(293), 1,
      sym__newline,
    ACTIONS(363), 1,
      sym__blankline,
  [1271] = 2,
    ACTIONS(297), 1,
      sym__newline,
    ACTIONS(365), 1,
      sym__blankline,
  [1278] = 2,
    ACTIONS(309), 1,
      sym__newline,
    ACTIONS(367), 1,
      sym__blankline,
  [1285] = 2,
    ACTIONS(317), 1,
      sym__newline,
    ACTIONS(369), 1,
      sym__blankline,
  [1292] = 2,
    ACTIONS(355), 1,
      sym__newline,
    ACTIONS(371), 1,
      sym__blankline,
  [1299] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(373), 1,
      anon_sym_DOT_DOT,
  [1306] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(375), 1,
      aux_sym_field_token1,
  [1313] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(377), 1,
      aux_sym_option_list_item_token1,
  [1320] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(379), 1,
      aux_sym_substitution_definition_token1,
  [1327] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(381), 1,
      aux_sym_footnote_token1,
  [1334] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(383), 1,
      aux_sym_directive_token1,
  [1341] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(385), 1,
      anon_sym___,
  [1348] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(387), 1,
      aux_sym_target_token1,
  [1355] = 2,
    ACTIONS(329), 1,
      sym__newline,
    ACTIONS(389), 1,
      sym__blankline,
  [1362] = 1,
    ACTIONS(341), 1,
      sym__newline,
  [1366] = 1,
    ACTIONS(337), 1,
      sym__newline,
  [1370] = 1,
    ACTIONS(335), 1,
      sym__newline,
  [1374] = 1,
    ACTIONS(285), 1,
      sym__newline,
  [1378] = 1,
    ACTIONS(329), 1,
      sym__newline,
  [1382] = 1,
    ACTIONS(279), 1,
      sym__newline,
  [1386] = 1,
    ACTIONS(305), 1,
      sym__newline,
  [1390] = 1,
    ACTIONS(313), 1,
      sym__newline,
  [1394] = 1,
    ACTIONS(289), 1,
      sym__newline,
  [1398] = 1,
    ACTIONS(301), 1,
      sym__newline,
  [1402] = 1,
    ACTIONS(293), 1,
      sym__newline,
  [1406] = 1,
    ACTIONS(297), 1,
      sym__newline,
  [1410] = 1,
    ACTIONS(309), 1,
      sym__newline,
  [1414] = 1,
    ACTIONS(317), 1,
      sym__newline,
  [1418] = 1,
    ACTIONS(355), 1,
      sym__newline,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 26,
  [SMALL_STATE(6)] = 40,
  [SMALL_STATE(7)] = 56,
  [SMALL_STATE(8)] = 72,
  [SMALL_STATE(9)] = 88,
  [SMALL_STATE(10)] = 104,
  [SMALL_STATE(11)] = 118,
  [SMALL_STATE(12)] = 132,
  [SMALL_STATE(13)] = 145,
  [SMALL_STATE(14)] = 158,
  [SMALL_STATE(15)] = 169,
  [SMALL_STATE(16)] = 180,
  [SMALL_STATE(17)] = 193,
  [SMALL_STATE(18)] = 206,
  [SMALL_STATE(19)] = 219,
  [SMALL_STATE(20)] = 232,
  [SMALL_STATE(21)] = 245,
  [SMALL_STATE(22)] = 258,
  [SMALL_STATE(23)] = 268,
  [SMALL_STATE(24)] = 278,
  [SMALL_STATE(25)] = 288,
  [SMALL_STATE(26)] = 298,
  [SMALL_STATE(27)] = 314,
  [SMALL_STATE(28)] = 330,
  [SMALL_STATE(29)] = 340,
  [SMALL_STATE(30)] = 350,
  [SMALL_STATE(31)] = 360,
  [SMALL_STATE(32)] = 370,
  [SMALL_STATE(33)] = 383,
  [SMALL_STATE(34)] = 396,
  [SMALL_STATE(35)] = 409,
  [SMALL_STATE(36)] = 422,
  [SMALL_STATE(37)] = 435,
  [SMALL_STATE(38)] = 446,
  [SMALL_STATE(39)] = 459,
  [SMALL_STATE(40)] = 470,
  [SMALL_STATE(41)] = 483,
  [SMALL_STATE(42)] = 496,
  [SMALL_STATE(43)] = 509,
  [SMALL_STATE(44)] = 522,
  [SMALL_STATE(45)] = 535,
  [SMALL_STATE(46)] = 548,
  [SMALL_STATE(47)] = 561,
  [SMALL_STATE(48)] = 570,
  [SMALL_STATE(49)] = 583,
  [SMALL_STATE(50)] = 596,
  [SMALL_STATE(51)] = 609,
  [SMALL_STATE(52)] = 620,
  [SMALL_STATE(53)] = 631,
  [SMALL_STATE(54)] = 642,
  [SMALL_STATE(55)] = 653,
  [SMALL_STATE(56)] = 664,
  [SMALL_STATE(57)] = 677,
  [SMALL_STATE(58)] = 688,
  [SMALL_STATE(59)] = 701,
  [SMALL_STATE(60)] = 712,
  [SMALL_STATE(61)] = 725,
  [SMALL_STATE(62)] = 738,
  [SMALL_STATE(63)] = 751,
  [SMALL_STATE(64)] = 764,
  [SMALL_STATE(65)] = 774,
  [SMALL_STATE(66)] = 784,
  [SMALL_STATE(67)] = 794,
  [SMALL_STATE(68)] = 804,
  [SMALL_STATE(69)] = 812,
  [SMALL_STATE(70)] = 820,
  [SMALL_STATE(71)] = 830,
  [SMALL_STATE(72)] = 840,
  [SMALL_STATE(73)] = 850,
  [SMALL_STATE(74)] = 860,
  [SMALL_STATE(75)] = 870,
  [SMALL_STATE(76)] = 880,
  [SMALL_STATE(77)] = 890,
  [SMALL_STATE(78)] = 900,
  [SMALL_STATE(79)] = 910,
  [SMALL_STATE(80)] = 920,
  [SMALL_STATE(81)] = 930,
  [SMALL_STATE(82)] = 940,
  [SMALL_STATE(83)] = 950,
  [SMALL_STATE(84)] = 960,
  [SMALL_STATE(85)] = 970,
  [SMALL_STATE(86)] = 980,
  [SMALL_STATE(87)] = 990,
  [SMALL_STATE(88)] = 1000,
  [SMALL_STATE(89)] = 1010,
  [SMALL_STATE(90)] = 1020,
  [SMALL_STATE(91)] = 1030,
  [SMALL_STATE(92)] = 1040,
  [SMALL_STATE(93)] = 1050,
  [SMALL_STATE(94)] = 1060,
  [SMALL_STATE(95)] = 1067,
  [SMALL_STATE(96)] = 1074,
  [SMALL_STATE(97)] = 1081,
  [SMALL_STATE(98)] = 1088,
  [SMALL_STATE(99)] = 1095,
  [SMALL_STATE(100)] = 1102,
  [SMALL_STATE(101)] = 1109,
  [SMALL_STATE(102)] = 1116,
  [SMALL_STATE(103)] = 1123,
  [SMALL_STATE(104)] = 1130,
  [SMALL_STATE(105)] = 1137,
  [SMALL_STATE(106)] = 1144,
  [SMALL_STATE(107)] = 1151,
  [SMALL_STATE(108)] = 1158,
  [SMALL_STATE(109)] = 1165,
  [SMALL_STATE(110)] = 1172,
  [SMALL_STATE(111)] = 1179,
  [SMALL_STATE(112)] = 1184,
  [SMALL_STATE(113)] = 1189,
  [SMALL_STATE(114)] = 1196,
  [SMALL_STATE(115)] = 1201,
  [SMALL_STATE(116)] = 1208,
  [SMALL_STATE(117)] = 1215,
  [SMALL_STATE(118)] = 1222,
  [SMALL_STATE(119)] = 1229,
  [SMALL_STATE(120)] = 1236,
  [SMALL_STATE(121)] = 1243,
  [SMALL_STATE(122)] = 1250,
  [SMALL_STATE(123)] = 1257,
  [SMALL_STATE(124)] = 1264,
  [SMALL_STATE(125)] = 1271,
  [SMALL_STATE(126)] = 1278,
  [SMALL_STATE(127)] = 1285,
  [SMALL_STATE(128)] = 1292,
  [SMALL_STATE(129)] = 1299,
  [SMALL_STATE(130)] = 1306,
  [SMALL_STATE(131)] = 1313,
  [SMALL_STATE(132)] = 1320,
  [SMALL_STATE(133)] = 1327,
  [SMALL_STATE(134)] = 1334,
  [SMALL_STATE(135)] = 1341,
  [SMALL_STATE(136)] = 1348,
  [SMALL_STATE(137)] = 1355,
  [SMALL_STATE(138)] = 1362,
  [SMALL_STATE(139)] = 1366,
  [SMALL_STATE(140)] = 1370,
  [SMALL_STATE(141)] = 1374,
  [SMALL_STATE(142)] = 1378,
  [SMALL_STATE(143)] = 1382,
  [SMALL_STATE(144)] = 1386,
  [SMALL_STATE(145)] = 1390,
  [SMALL_STATE(146)] = 1394,
  [SMALL_STATE(147)] = 1398,
  [SMALL_STATE(148)] = 1402,
  [SMALL_STATE(149)] = 1406,
  [SMALL_STATE(150)] = 1410,
  [SMALL_STATE(151)] = 1414,
  [SMALL_STATE(152)] = 1418,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(83),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(76),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(98),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(87),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(85),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(67),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(68),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(69),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(15),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(80),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(14),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(7),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(2),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(25),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(31),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(7),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__body_elements, 2),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__body_elements, 2),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__line, 2), SHIFT_REPEAT(5),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__line, 2),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 1),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(12),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bullet_list_item, 3),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__numeric_list_item, 3),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__line, 2), SHIFT_REPEAT(19),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_block_repeat1, 2), SHIFT_REPEAT(148),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_block_repeat1, 2), SHIFT_REPEAT(90),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enumerated_list_repeat1, 2), SHIFT_REPEAT(29),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__directive_block_repeat1, 2), SHIFT_REPEAT(23),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_block_repeat1, 2), SHIFT_REPEAT(22),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__anoynymous_hyperlink_target_block_repeat1, 2), SHIFT_REPEAT(120),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_repeat1, 2), SHIFT_REPEAT(37),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_repeat1, 2),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hyperlink_target_block_repeat1, 2), SHIFT_REPEAT(119),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 2),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_list_item, 2),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_block, 2),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footnote, 2),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_citation, 2),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__citation_block_repeat1, 2), SHIFT_REPEAT(92),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__footnote_block_repeat1, 2), SHIFT_REPEAT(91),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__embed_directive, 4),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_option_list_repeat1, 2), SHIFT_REPEAT(89),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_list_repeat1, 2), SHIFT_REPEAT(88),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bullet_list_repeat1, 2), SHIFT_REPEAT(28),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__substitution_definition_block_repeat1, 2), SHIFT_REPEAT(93),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_repeat1, 2), SHIFT_REPEAT(65),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_line_block_repeat1, 2),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_block_repeat1, 2),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 1),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__anonymous_target, 1),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directive_block, 2),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__citation_block_repeat1, 2),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_block, 2),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__citation_block, 1),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_block, 1),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_list, 1),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__footnote_block, 1),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__anoynymous_hyperlink_target_block, 2),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_list, 1),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hyperlink_target_block, 2),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumerated_list, 1),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hyperlink_target_block, 1),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__anoynymous_hyperlink_target_block, 1),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directive_block, 1),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__substitution_definition_block, 1),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_block, 1),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 2),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__anonymous_target, 2),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_substitution_definition, 2),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bullet_list_repeat1, 2),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enumerated_list_repeat1, 2),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__citation_block, 2),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__footnote_block, 2),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bullet_list, 1),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [361] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_block, 2),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_list, 2),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_list, 2),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumerated_list, 2),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bullet_list, 2),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__comment_block_repeat1, 2),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_list_repeat1, 2),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_option_list_repeat1, 2),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__substitution_definition_block_repeat1, 2),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__footnote_block_repeat1, 2),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__directive_block_repeat1, 2),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__anoynymous_hyperlink_target_block_repeat1, 2),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hyperlink_target_block_repeat1, 2),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__substitution_definition_block, 2),
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
