#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 153
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 82
#define ALIAS_COUNT 0
#define TOKEN_COUNT 35
#define EXTERNAL_TOKEN_COUNT 14
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
  sym_strong = 27,
  sym_interpreted_text = 28,
  sym_literal = 29,
  sym_substitution_reference = 30,
  sym__inline_target = 31,
  sym_footnote_reference = 32,
  sym_reference = 33,
  sym_standalone_hyperlink = 34,
  sym_document = 35,
  sym__body_elements = 36,
  sym_paragraph = 37,
  sym__list = 38,
  sym_bullet_list = 39,
  sym__bullet_list_item = 40,
  sym_enumerated_list = 41,
  sym__numeric_list_item = 42,
  sym_field_list = 43,
  sym_field = 44,
  sym_option_list = 45,
  sym_option_list_item = 46,
  sym_line_block = 47,
  sym__single_line_block = 48,
  sym__markup_block = 49,
  sym__footnote_block = 50,
  sym_footnote = 51,
  sym__citation_block = 52,
  sym_citation = 53,
  sym__hyperlink_target_block = 54,
  sym_target = 55,
  sym__anoynymous_hyperlink_target_block = 56,
  sym__anonymous_target = 57,
  sym__directive_block = 58,
  sym_directive = 59,
  sym__substitution_definition_block = 60,
  sym_substitution_definition = 61,
  sym__embed_directive = 62,
  sym__comment_block = 63,
  sym_comment = 64,
  aux_sym__line = 65,
  sym__inline_markup = 66,
  aux_sym_document_repeat1 = 67,
  aux_sym_paragraph_repeat1 = 68,
  aux_sym_bullet_list_repeat1 = 69,
  aux_sym_enumerated_list_repeat1 = 70,
  aux_sym_field_list_repeat1 = 71,
  aux_sym_field_repeat1 = 72,
  aux_sym_option_list_repeat1 = 73,
  aux_sym_line_block_repeat1 = 74,
  aux_sym__footnote_block_repeat1 = 75,
  aux_sym__citation_block_repeat1 = 76,
  aux_sym__hyperlink_target_block_repeat1 = 77,
  aux_sym__anoynymous_hyperlink_target_block_repeat1 = 78,
  aux_sym__directive_block_repeat1 = 79,
  aux_sym__substitution_definition_block_repeat1 = 80,
  aux_sym__comment_block_repeat1 = 81,
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
  [sym_strong] = "strong",
  [sym_interpreted_text] = "interpreted_text",
  [sym_literal] = "literal",
  [sym_substitution_reference] = "substitution_reference",
  [sym__inline_target] = "target",
  [sym_footnote_reference] = "footnote_reference",
  [sym_reference] = "reference",
  [sym_standalone_hyperlink] = "standalone_hyperlink",
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
  [sym_strong] = sym_strong,
  [sym_interpreted_text] = sym_interpreted_text,
  [sym_literal] = sym_literal,
  [sym_substitution_reference] = sym_substitution_reference,
  [sym__inline_target] = sym_target,
  [sym_footnote_reference] = sym_footnote_reference,
  [sym_reference] = sym_reference,
  [sym_standalone_hyperlink] = sym_standalone_hyperlink,
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
  [sym_strong] = {
    .visible = true,
    .named = true,
  },
  [sym_interpreted_text] = {
    .visible = true,
    .named = true,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_substitution_reference] = {
    .visible = true,
    .named = true,
  },
  [sym__inline_target] = {
    .visible = true,
    .named = true,
  },
  [sym_footnote_reference] = {
    .visible = true,
    .named = true,
  },
  [sym_reference] = {
    .visible = true,
    .named = true,
  },
  [sym_standalone_hyperlink] = {
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
  [6] = {.lex_state = 79, .external_lex_state = 2},
  [7] = {.lex_state = 79, .external_lex_state = 3},
  [8] = {.lex_state = 79, .external_lex_state = 2},
  [9] = {.lex_state = 79, .external_lex_state = 3},
  [10] = {.lex_state = 79, .external_lex_state = 2},
  [11] = {.lex_state = 79, .external_lex_state = 2},
  [12] = {.lex_state = 79, .external_lex_state = 3},
  [13] = {.lex_state = 79, .external_lex_state = 3},
  [14] = {.lex_state = 79, .external_lex_state = 3},
  [15] = {.lex_state = 79, .external_lex_state = 3},
  [16] = {.lex_state = 79, .external_lex_state = 3},
  [17] = {.lex_state = 79, .external_lex_state = 3},
  [18] = {.lex_state = 79, .external_lex_state = 3},
  [19] = {.lex_state = 79, .external_lex_state = 3},
  [20] = {.lex_state = 79, .external_lex_state = 3},
  [21] = {.lex_state = 1, .external_lex_state = 4},
  [22] = {.lex_state = 1, .external_lex_state = 4},
  [23] = {.lex_state = 1, .external_lex_state = 5},
  [24] = {.lex_state = 1, .external_lex_state = 5},
  [25] = {.lex_state = 1, .external_lex_state = 5},
  [26] = {.lex_state = 1, .external_lex_state = 5},
  [27] = {.lex_state = 79, .external_lex_state = 5},
  [28] = {.lex_state = 79, .external_lex_state = 5},
  [29] = {.lex_state = 1, .external_lex_state = 5},
  [30] = {.lex_state = 1, .external_lex_state = 5},
  [31] = {.lex_state = 1, .external_lex_state = 5},
  [32] = {.lex_state = 1, .external_lex_state = 5},
  [33] = {.lex_state = 0, .external_lex_state = 6},
  [34] = {.lex_state = 79, .external_lex_state = 5},
  [35] = {.lex_state = 79, .external_lex_state = 5},
  [36] = {.lex_state = 1, .external_lex_state = 5},
  [37] = {.lex_state = 79, .external_lex_state = 5},
  [38] = {.lex_state = 50, .external_lex_state = 4},
  [39] = {.lex_state = 79, .external_lex_state = 5},
  [40] = {.lex_state = 50, .external_lex_state = 4},
  [41] = {.lex_state = 0, .external_lex_state = 7},
  [42] = {.lex_state = 0, .external_lex_state = 6},
  [43] = {.lex_state = 79, .external_lex_state = 5},
  [44] = {.lex_state = 79, .external_lex_state = 5},
  [45] = {.lex_state = 79, .external_lex_state = 5},
  [46] = {.lex_state = 44, .external_lex_state = 5},
  [47] = {.lex_state = 79, .external_lex_state = 5},
  [48] = {.lex_state = 79, .external_lex_state = 5},
  [49] = {.lex_state = 79, .external_lex_state = 5},
  [50] = {.lex_state = 79, .external_lex_state = 5},
  [51] = {.lex_state = 1, .external_lex_state = 5},
  [52] = {.lex_state = 50, .external_lex_state = 4},
  [53] = {.lex_state = 50, .external_lex_state = 4},
  [54] = {.lex_state = 50, .external_lex_state = 4},
  [55] = {.lex_state = 50, .external_lex_state = 4},
  [56] = {.lex_state = 50, .external_lex_state = 4},
  [57] = {.lex_state = 44, .external_lex_state = 5},
  [58] = {.lex_state = 50, .external_lex_state = 4},
  [59] = {.lex_state = 79, .external_lex_state = 5},
  [60] = {.lex_state = 50, .external_lex_state = 4},
  [61] = {.lex_state = 79, .external_lex_state = 5},
  [62] = {.lex_state = 79, .external_lex_state = 5},
  [63] = {.lex_state = 0, .external_lex_state = 7},
  [64] = {.lex_state = 50, .external_lex_state = 5},
  [65] = {.lex_state = 50, .external_lex_state = 5},
  [66] = {.lex_state = 50, .external_lex_state = 5},
  [67] = {.lex_state = 79, .external_lex_state = 5},
  [68] = {.lex_state = 50, .external_lex_state = 5},
  [69] = {.lex_state = 44, .external_lex_state = 4},
  [70] = {.lex_state = 44, .external_lex_state = 4},
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
  [94] = {.lex_state = 0, .external_lex_state = 7},
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
  [115] = {.lex_state = 0, .external_lex_state = 4},
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
  ts_external_token_strong = 6,
  ts_external_token_interpreted_text = 7,
  ts_external_token_literal = 8,
  ts_external_token_substitution_reference = 9,
  ts_external_token__inline_target = 10,
  ts_external_token_footnote_reference = 11,
  ts_external_token_reference = 12,
  ts_external_token_standalone_hyperlink = 13,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__newline] = sym__newline,
  [ts_external_token__blankline] = sym__blankline,
  [ts_external_token__char_bullet] = sym__char_bullet,
  [ts_external_token__numeric_bullet] = sym__numeric_bullet,
  [ts_external_token__text] = sym__text,
  [ts_external_token_emphasis] = sym_emphasis,
  [ts_external_token_strong] = sym_strong,
  [ts_external_token_interpreted_text] = sym_interpreted_text,
  [ts_external_token_literal] = sym_literal,
  [ts_external_token_substitution_reference] = sym_substitution_reference,
  [ts_external_token__inline_target] = sym__inline_target,
  [ts_external_token_footnote_reference] = sym_footnote_reference,
  [ts_external_token_reference] = sym_reference,
  [ts_external_token_standalone_hyperlink] = sym_standalone_hyperlink,
};

static bool ts_external_scanner_states[8][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__newline] = true,
    [ts_external_token__blankline] = true,
    [ts_external_token__char_bullet] = true,
    [ts_external_token__numeric_bullet] = true,
    [ts_external_token__text] = true,
    [ts_external_token_emphasis] = true,
    [ts_external_token_strong] = true,
    [ts_external_token_interpreted_text] = true,
    [ts_external_token_literal] = true,
    [ts_external_token_substitution_reference] = true,
    [ts_external_token__inline_target] = true,
    [ts_external_token_footnote_reference] = true,
    [ts_external_token_reference] = true,
    [ts_external_token_standalone_hyperlink] = true,
  },
  [2] = {
    [ts_external_token__newline] = true,
    [ts_external_token__blankline] = true,
    [ts_external_token__text] = true,
    [ts_external_token_emphasis] = true,
    [ts_external_token_strong] = true,
    [ts_external_token_interpreted_text] = true,
    [ts_external_token_literal] = true,
    [ts_external_token_substitution_reference] = true,
    [ts_external_token__inline_target] = true,
    [ts_external_token_footnote_reference] = true,
    [ts_external_token_reference] = true,
    [ts_external_token_standalone_hyperlink] = true,
  },
  [3] = {
    [ts_external_token__newline] = true,
    [ts_external_token__text] = true,
    [ts_external_token_emphasis] = true,
    [ts_external_token_strong] = true,
    [ts_external_token_interpreted_text] = true,
    [ts_external_token_literal] = true,
    [ts_external_token_substitution_reference] = true,
    [ts_external_token__inline_target] = true,
    [ts_external_token_footnote_reference] = true,
    [ts_external_token_reference] = true,
    [ts_external_token_standalone_hyperlink] = true,
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
    [sym_strong] = ACTIONS(1),
    [sym_interpreted_text] = ACTIONS(1),
    [sym_literal] = ACTIONS(1),
    [sym_substitution_reference] = ACTIONS(1),
    [sym__inline_target] = ACTIONS(1),
    [sym_footnote_reference] = ACTIONS(1),
    [sym_reference] = ACTIONS(1),
    [sym_standalone_hyperlink] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(123),
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
    [sym_footnote] = STATE(115),
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
    [aux_sym__line] = STATE(8),
    [sym__inline_markup] = STATE(8),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_paragraph_repeat1] = STATE(7),
    [aux_sym_bullet_list_repeat1] = STATE(41),
    [aux_sym_enumerated_list_repeat1] = STATE(42),
    [aux_sym_field_list_repeat1] = STATE(43),
    [aux_sym_option_list_repeat1] = STATE(44),
    [aux_sym_line_block_repeat1] = STATE(28),
    [aux_sym__footnote_block_repeat1] = STATE(45),
    [aux_sym__citation_block_repeat1] = STATE(46),
    [aux_sym__hyperlink_target_block_repeat1] = STATE(47),
    [aux_sym__anoynymous_hyperlink_target_block_repeat1] = STATE(34),
    [aux_sym__directive_block_repeat1] = STATE(49),
    [aux_sym__substitution_definition_block_repeat1] = STATE(50),
    [aux_sym__comment_block_repeat1] = STATE(51),
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
    [sym_strong] = ACTIONS(37),
    [sym_interpreted_text] = ACTIONS(37),
    [sym_literal] = ACTIONS(37),
    [sym_substitution_reference] = ACTIONS(37),
    [sym__inline_target] = ACTIONS(37),
    [sym_footnote_reference] = ACTIONS(37),
    [sym_reference] = ACTIONS(37),
    [sym_standalone_hyperlink] = ACTIONS(37),
  },
  [2] = {
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
    [sym_footnote] = STATE(115),
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
    [aux_sym__line] = STATE(8),
    [sym__inline_markup] = STATE(8),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_paragraph_repeat1] = STATE(7),
    [aux_sym_bullet_list_repeat1] = STATE(41),
    [aux_sym_enumerated_list_repeat1] = STATE(42),
    [aux_sym_field_list_repeat1] = STATE(43),
    [aux_sym_option_list_repeat1] = STATE(44),
    [aux_sym_line_block_repeat1] = STATE(28),
    [aux_sym__footnote_block_repeat1] = STATE(45),
    [aux_sym__citation_block_repeat1] = STATE(46),
    [aux_sym__hyperlink_target_block_repeat1] = STATE(47),
    [aux_sym__anoynymous_hyperlink_target_block_repeat1] = STATE(34),
    [aux_sym__directive_block_repeat1] = STATE(49),
    [aux_sym__substitution_definition_block_repeat1] = STATE(50),
    [aux_sym__comment_block_repeat1] = STATE(51),
    [ts_builtin_sym_end] = ACTIONS(39),
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
    [sym__blankline] = ACTIONS(41),
    [sym__char_bullet] = ACTIONS(33),
    [sym__numeric_bullet] = ACTIONS(35),
    [sym__text] = ACTIONS(37),
    [sym_emphasis] = ACTIONS(37),
    [sym_strong] = ACTIONS(37),
    [sym_interpreted_text] = ACTIONS(37),
    [sym_literal] = ACTIONS(37),
    [sym_substitution_reference] = ACTIONS(37),
    [sym__inline_target] = ACTIONS(37),
    [sym_footnote_reference] = ACTIONS(37),
    [sym_reference] = ACTIONS(37),
    [sym_standalone_hyperlink] = ACTIONS(37),
  },
  [3] = {
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
    [sym_footnote] = STATE(115),
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
    [aux_sym__line] = STATE(8),
    [sym__inline_markup] = STATE(8),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_paragraph_repeat1] = STATE(7),
    [aux_sym_bullet_list_repeat1] = STATE(41),
    [aux_sym_enumerated_list_repeat1] = STATE(42),
    [aux_sym_field_list_repeat1] = STATE(43),
    [aux_sym_option_list_repeat1] = STATE(44),
    [aux_sym_line_block_repeat1] = STATE(28),
    [aux_sym__footnote_block_repeat1] = STATE(45),
    [aux_sym__citation_block_repeat1] = STATE(46),
    [aux_sym__hyperlink_target_block_repeat1] = STATE(47),
    [aux_sym__anoynymous_hyperlink_target_block_repeat1] = STATE(34),
    [aux_sym__directive_block_repeat1] = STATE(49),
    [aux_sym__substitution_definition_block_repeat1] = STATE(50),
    [aux_sym__comment_block_repeat1] = STATE(51),
    [ts_builtin_sym_end] = ACTIONS(43),
    [aux_sym_field_token1] = ACTIONS(45),
    [aux_sym_option_list_item_token1] = ACTIONS(48),
    [anon_sym_PIPE] = ACTIONS(51),
    [aux_sym__single_line_block_token1] = ACTIONS(54),
    [aux_sym_footnote_token1] = ACTIONS(57),
    [aux_sym_citation_token1] = ACTIONS(60),
    [aux_sym_target_token1] = ACTIONS(63),
    [anon_sym___] = ACTIONS(66),
    [aux_sym_directive_token1] = ACTIONS(69),
    [aux_sym_substitution_definition_token1] = ACTIONS(72),
    [anon_sym_DOT_DOT] = ACTIONS(75),
    [aux_sym__line_token1] = ACTIONS(78),
    [sym__newline] = ACTIONS(3),
    [sym__blankline] = ACTIONS(81),
    [sym__char_bullet] = ACTIONS(84),
    [sym__numeric_bullet] = ACTIONS(87),
    [sym__text] = ACTIONS(90),
    [sym_emphasis] = ACTIONS(90),
    [sym_strong] = ACTIONS(90),
    [sym_interpreted_text] = ACTIONS(90),
    [sym_literal] = ACTIONS(90),
    [sym_substitution_reference] = ACTIONS(90),
    [sym__inline_target] = ACTIONS(90),
    [sym_footnote_reference] = ACTIONS(90),
    [sym_reference] = ACTIONS(90),
    [sym_standalone_hyperlink] = ACTIONS(90),
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
    ACTIONS(93), 22,
      sym__blankline,
      sym__char_bullet,
      sym__numeric_bullet,
      sym__text,
      sym_emphasis,
      sym_strong,
      sym_interpreted_text,
      sym_literal,
      sym_substitution_reference,
      sym__inline_target,
      sym_footnote_reference,
      sym_reference,
      sym_standalone_hyperlink,
      ts_builtin_sym_end,
      aux_sym_field_token1,
      aux_sym_option_list_item_token1,
      aux_sym__single_line_block_token1,
      aux_sym_footnote_token1,
      aux_sym_target_token1,
      anon_sym___,
      aux_sym_directive_token1,
      aux_sym_substitution_definition_token1,
  [34] = 3,
    ACTIONS(99), 2,
      sym__newline,
      sym__blankline,
    STATE(6), 2,
      aux_sym__line,
      sym__inline_markup,
    ACTIONS(97), 11,
      sym__text,
      sym_emphasis,
      sym_strong,
      sym_interpreted_text,
      sym_literal,
      sym_substitution_reference,
      sym__inline_target,
      sym_footnote_reference,
      sym_reference,
      sym_standalone_hyperlink,
      aux_sym__line_token1,
  [56] = 3,
    ACTIONS(104), 2,
      sym__newline,
      sym__blankline,
    STATE(6), 2,
      aux_sym__line,
      sym__inline_markup,
    ACTIONS(101), 11,
      sym__text,
      sym_emphasis,
      sym_strong,
      sym_interpreted_text,
      sym_literal,
      sym_substitution_reference,
      sym__inline_target,
      sym_footnote_reference,
      sym_reference,
      sym_standalone_hyperlink,
      aux_sym__line_token1,
  [78] = 4,
    ACTIONS(3), 1,
      sym__newline,
    STATE(9), 1,
      aux_sym_paragraph_repeat1,
    STATE(10), 2,
      aux_sym__line,
      sym__inline_markup,
    ACTIONS(106), 11,
      sym__text,
      sym_emphasis,
      sym_strong,
      sym_interpreted_text,
      sym_literal,
      sym_substitution_reference,
      sym__inline_target,
      sym_footnote_reference,
      sym_reference,
      sym_standalone_hyperlink,
      aux_sym__line_token1,
  [102] = 4,
    ACTIONS(108), 1,
      sym__newline,
    ACTIONS(110), 1,
      sym__blankline,
    STATE(6), 2,
      aux_sym__line,
      sym__inline_markup,
    ACTIONS(97), 11,
      sym__text,
      sym_emphasis,
      sym_strong,
      sym_interpreted_text,
      sym_literal,
      sym_substitution_reference,
      sym__inline_target,
      sym_footnote_reference,
      sym_reference,
      sym_standalone_hyperlink,
      aux_sym__line_token1,
  [126] = 4,
    ACTIONS(3), 1,
      sym__newline,
    STATE(9), 1,
      aux_sym_paragraph_repeat1,
    STATE(13), 2,
      aux_sym__line,
      sym__inline_markup,
    ACTIONS(112), 11,
      sym__text,
      sym_emphasis,
      sym_strong,
      sym_interpreted_text,
      sym_literal,
      sym_substitution_reference,
      sym__inline_target,
      sym_footnote_reference,
      sym_reference,
      sym_standalone_hyperlink,
      aux_sym__line_token1,
  [150] = 4,
    ACTIONS(108), 1,
      sym__newline,
    ACTIONS(115), 1,
      sym__blankline,
    STATE(6), 2,
      aux_sym__line,
      sym__inline_markup,
    ACTIONS(97), 11,
      sym__text,
      sym_emphasis,
      sym_strong,
      sym_interpreted_text,
      sym_literal,
      sym_substitution_reference,
      sym__inline_target,
      sym_footnote_reference,
      sym_reference,
      sym_standalone_hyperlink,
      aux_sym__line_token1,
  [174] = 3,
    ACTIONS(117), 2,
      sym__newline,
      sym__blankline,
    STATE(6), 2,
      aux_sym__line,
      sym__inline_markup,
    ACTIONS(97), 11,
      sym__text,
      sym_emphasis,
      sym_strong,
      sym_interpreted_text,
      sym_literal,
      sym_substitution_reference,
      sym__inline_target,
      sym_footnote_reference,
      sym_reference,
      sym_standalone_hyperlink,
      aux_sym__line_token1,
  [196] = 3,
    ACTIONS(117), 1,
      sym__newline,
    STATE(17), 2,
      aux_sym__line,
      sym__inline_markup,
    ACTIONS(119), 11,
      sym__text,
      sym_emphasis,
      sym_strong,
      sym_interpreted_text,
      sym_literal,
      sym_substitution_reference,
      sym__inline_target,
      sym_footnote_reference,
      sym_reference,
      sym_standalone_hyperlink,
      aux_sym__line_token1,
  [217] = 3,
    ACTIONS(108), 1,
      sym__newline,
    STATE(17), 2,
      aux_sym__line,
      sym__inline_markup,
    ACTIONS(119), 11,
      sym__text,
      sym_emphasis,
      sym_strong,
      sym_interpreted_text,
      sym_literal,
      sym_substitution_reference,
      sym__inline_target,
      sym_footnote_reference,
      sym_reference,
      sym_standalone_hyperlink,
      aux_sym__line_token1,
  [238] = 3,
    ACTIONS(3), 1,
      sym__newline,
    STATE(12), 2,
      aux_sym__line,
      sym__inline_markup,
    ACTIONS(121), 11,
      sym__text,
      sym_emphasis,
      sym_strong,
      sym_interpreted_text,
      sym_literal,
      sym_substitution_reference,
      sym__inline_target,
      sym_footnote_reference,
      sym_reference,
      sym_standalone_hyperlink,
      aux_sym__line_token1,
  [259] = 3,
    ACTIONS(3), 1,
      sym__newline,
    STATE(5), 2,
      aux_sym__line,
      sym__inline_markup,
    ACTIONS(123), 11,
      sym__text,
      sym_emphasis,
      sym_strong,
      sym_interpreted_text,
      sym_literal,
      sym_substitution_reference,
      sym__inline_target,
      sym_footnote_reference,
      sym_reference,
      sym_standalone_hyperlink,
      aux_sym__line_token1,
  [280] = 3,
    ACTIONS(3), 1,
      sym__newline,
    STATE(19), 2,
      aux_sym__line,
      sym__inline_markup,
    ACTIONS(125), 11,
      sym__text,
      sym_emphasis,
      sym_strong,
      sym_interpreted_text,
      sym_literal,
      sym_substitution_reference,
      sym__inline_target,
      sym_footnote_reference,
      sym_reference,
      sym_standalone_hyperlink,
      aux_sym__line_token1,
  [301] = 3,
    ACTIONS(104), 1,
      sym__newline,
    STATE(17), 2,
      aux_sym__line,
      sym__inline_markup,
    ACTIONS(127), 11,
      sym__text,
      sym_emphasis,
      sym_strong,
      sym_interpreted_text,
      sym_literal,
      sym_substitution_reference,
      sym__inline_target,
      sym_footnote_reference,
      sym_reference,
      sym_standalone_hyperlink,
      aux_sym__line_token1,
  [322] = 3,
    ACTIONS(3), 1,
      sym__newline,
    STATE(11), 2,
      aux_sym__line,
      sym__inline_markup,
    ACTIONS(130), 11,
      sym__text,
      sym_emphasis,
      sym_strong,
      sym_interpreted_text,
      sym_literal,
      sym_substitution_reference,
      sym__inline_target,
      sym_footnote_reference,
      sym_reference,
      sym_standalone_hyperlink,
      aux_sym__line_token1,
  [343] = 3,
    ACTIONS(99), 1,
      sym__newline,
    STATE(17), 2,
      aux_sym__line,
      sym__inline_markup,
    ACTIONS(119), 11,
      sym__text,
      sym_emphasis,
      sym_strong,
      sym_interpreted_text,
      sym_literal,
      sym_substitution_reference,
      sym__inline_target,
      sym_footnote_reference,
      sym_reference,
      sym_standalone_hyperlink,
      aux_sym__line_token1,
  [364] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(132), 11,
      sym__text,
      sym_emphasis,
      sym_strong,
      sym_interpreted_text,
      sym_literal,
      sym_substitution_reference,
      sym__inline_target,
      sym_footnote_reference,
      sym_reference,
      sym_standalone_hyperlink,
      aux_sym__line_token1,
  [381] = 2,
    ACTIONS(136), 2,
      sym__newline,
      sym__blankline,
    ACTIONS(134), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [392] = 2,
    ACTIONS(140), 2,
      sym__newline,
      sym__blankline,
    ACTIONS(138), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [403] = 2,
    ACTIONS(136), 1,
      sym__newline,
    ACTIONS(142), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [413] = 2,
    ACTIONS(140), 1,
      sym__newline,
    ACTIONS(144), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [423] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(146), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [433] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(148), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [443] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(150), 1,
      anon_sym_PIPE,
    ACTIONS(153), 1,
      aux_sym__single_line_block_token1,
    STATE(27), 1,
      aux_sym_line_block_repeat1,
    STATE(148), 1,
      sym__single_line_block,
  [459] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(13), 1,
      aux_sym__single_line_block_token1,
    ACTIONS(156), 1,
      anon_sym_PIPE,
    STATE(27), 1,
      aux_sym_line_block_repeat1,
    STATE(124), 1,
      sym__single_line_block,
  [475] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(158), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [485] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(160), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [495] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(162), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [505] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(164), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [515] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(166), 1,
      sym__numeric_bullet,
    STATE(33), 1,
      aux_sym_enumerated_list_repeat1,
    STATE(151), 1,
      sym__numeric_list_item,
  [528] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(21), 1,
      anon_sym___,
    STATE(37), 1,
      aux_sym__anoynymous_hyperlink_target_block_repeat1,
    STATE(101), 1,
      sym__anonymous_target,
  [541] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(169), 1,
      aux_sym_directive_token1,
    STATE(35), 1,
      aux_sym__directive_block_repeat1,
    STATE(143), 1,
      sym_directive,
  [554] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(172), 1,
      anon_sym_DOT_DOT,
    STATE(36), 1,
      aux_sym__comment_block_repeat1,
    STATE(141), 1,
      sym_comment,
  [567] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(175), 1,
      anon_sym___,
    STATE(37), 1,
      aux_sym__anoynymous_hyperlink_target_block_repeat1,
    STATE(144), 1,
      sym__anonymous_target,
  [580] = 3,
    ACTIONS(178), 1,
      aux_sym_field_token2,
    STATE(38), 1,
      aux_sym_field_repeat1,
    ACTIONS(181), 2,
      sym__newline,
      sym__blankline,
  [591] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(183), 1,
      aux_sym_target_token1,
    STATE(39), 1,
      aux_sym__hyperlink_target_block_repeat1,
    STATE(145), 1,
      sym_target,
  [604] = 3,
    ACTIONS(186), 1,
      aux_sym_field_token2,
    STATE(38), 1,
      aux_sym_field_repeat1,
    ACTIONS(188), 2,
      sym__newline,
      sym__blankline,
  [615] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(33), 1,
      sym__char_bullet,
    STATE(63), 1,
      aux_sym_bullet_list_repeat1,
    STATE(128), 1,
      sym__bullet_list_item,
  [628] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(35), 1,
      sym__numeric_bullet,
    STATE(33), 1,
      aux_sym_enumerated_list_repeat1,
    STATE(127), 1,
      sym__numeric_list_item,
  [641] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(7), 1,
      aux_sym_field_token1,
    STATE(62), 1,
      aux_sym_field_list_repeat1,
    STATE(126), 1,
      sym_field,
  [654] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(9), 1,
      aux_sym_option_list_item_token1,
    STATE(61), 1,
      aux_sym_option_list_repeat1,
    STATE(125), 1,
      sym_option_list_item,
  [667] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(15), 1,
      aux_sym_footnote_token1,
    STATE(59), 1,
      aux_sym__footnote_block_repeat1,
    STATE(118), 1,
      sym_footnote,
  [680] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(190), 1,
      aux_sym_citation_token1,
    STATE(57), 1,
      aux_sym__citation_block_repeat1,
    STATE(117), 1,
      sym_citation,
  [693] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      aux_sym_target_token1,
    STATE(39), 1,
      aux_sym__hyperlink_target_block_repeat1,
    STATE(103), 1,
      sym_target,
  [706] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(192), 1,
      aux_sym_substitution_definition_token1,
    STATE(48), 1,
      aux_sym__substitution_definition_block_repeat1,
    STATE(142), 1,
      sym_substitution_definition,
  [719] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(23), 1,
      aux_sym_directive_token1,
    STATE(35), 1,
      aux_sym__directive_block_repeat1,
    STATE(100), 1,
      sym_directive,
  [732] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(25), 1,
      aux_sym_substitution_definition_token1,
    STATE(48), 1,
      aux_sym__substitution_definition_block_repeat1,
    STATE(137), 1,
      sym_substitution_definition,
  [745] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(195), 1,
      anon_sym_DOT_DOT,
    STATE(36), 1,
      aux_sym__comment_block_repeat1,
    STATE(96), 1,
      sym_comment,
  [758] = 3,
    ACTIONS(186), 1,
      aux_sym_field_token2,
    STATE(38), 1,
      aux_sym_field_repeat1,
    ACTIONS(197), 2,
      sym__newline,
      sym__blankline,
  [769] = 3,
    ACTIONS(186), 1,
      aux_sym_field_token2,
    STATE(38), 1,
      aux_sym_field_repeat1,
    ACTIONS(199), 2,
      sym__newline,
      sym__blankline,
  [780] = 3,
    ACTIONS(186), 1,
      aux_sym_field_token2,
    STATE(38), 1,
      aux_sym_field_repeat1,
    ACTIONS(201), 2,
      sym__newline,
      sym__blankline,
  [791] = 3,
    ACTIONS(186), 1,
      aux_sym_field_token2,
    STATE(38), 1,
      aux_sym_field_repeat1,
    ACTIONS(203), 2,
      sym__newline,
      sym__blankline,
  [802] = 3,
    ACTIONS(186), 1,
      aux_sym_field_token2,
    STATE(38), 1,
      aux_sym_field_repeat1,
    ACTIONS(205), 2,
      sym__newline,
      sym__blankline,
  [813] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(207), 1,
      aux_sym_citation_token1,
    STATE(57), 1,
      aux_sym__citation_block_repeat1,
    STATE(146), 1,
      sym_citation,
  [826] = 3,
    ACTIONS(186), 1,
      aux_sym_field_token2,
    STATE(38), 1,
      aux_sym_field_repeat1,
    ACTIONS(210), 2,
      sym__newline,
      sym__blankline,
  [837] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(212), 1,
      aux_sym_footnote_token1,
    STATE(59), 1,
      aux_sym__footnote_block_repeat1,
    STATE(147), 1,
      sym_footnote,
  [850] = 3,
    ACTIONS(186), 1,
      aux_sym_field_token2,
    STATE(38), 1,
      aux_sym_field_repeat1,
    ACTIONS(215), 2,
      sym__newline,
      sym__blankline,
  [861] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(217), 1,
      aux_sym_option_list_item_token1,
    STATE(61), 1,
      aux_sym_option_list_repeat1,
    STATE(149), 1,
      sym_option_list_item,
  [874] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(220), 1,
      aux_sym_field_token1,
    STATE(62), 1,
      aux_sym_field_list_repeat1,
    STATE(150), 1,
      sym_field,
  [887] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(223), 1,
      sym__char_bullet,
    STATE(63), 1,
      aux_sym_bullet_list_repeat1,
    STATE(152), 1,
      sym__bullet_list_item,
  [900] = 3,
    ACTIONS(210), 1,
      sym__newline,
    ACTIONS(226), 1,
      aux_sym_field_token2,
    STATE(66), 1,
      aux_sym_field_repeat1,
  [910] = 3,
    ACTIONS(188), 1,
      sym__newline,
    ACTIONS(226), 1,
      aux_sym_field_token2,
    STATE(66), 1,
      aux_sym_field_repeat1,
  [920] = 3,
    ACTIONS(181), 1,
      sym__newline,
    ACTIONS(228), 1,
      aux_sym_field_token2,
    STATE(66), 1,
      aux_sym_field_repeat1,
  [930] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(231), 1,
      anon_sym_PIPE,
    ACTIONS(233), 1,
      aux_sym__single_line_block_token1,
  [940] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(235), 1,
      aux_sym_field_token2,
    STATE(56), 1,
      aux_sym_field_repeat1,
  [950] = 2,
    ACTIONS(237), 1,
      aux_sym_target_token2,
    ACTIONS(239), 2,
      sym__newline,
      sym__blankline,
  [958] = 2,
    ACTIONS(241), 1,
      aux_sym_target_token2,
    ACTIONS(243), 2,
      sym__newline,
      sym__blankline,
  [966] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(245), 1,
      aux_sym_field_token2,
    STATE(64), 1,
      aux_sym_field_repeat1,
  [976] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(247), 1,
      aux_sym_field_token2,
    STATE(65), 1,
      aux_sym_field_repeat1,
  [986] = 3,
    ACTIONS(205), 1,
      sym__newline,
    ACTIONS(226), 1,
      aux_sym_field_token2,
    STATE(66), 1,
      aux_sym_field_repeat1,
  [996] = 3,
    ACTIONS(203), 1,
      sym__newline,
    ACTIONS(226), 1,
      aux_sym_field_token2,
    STATE(66), 1,
      aux_sym_field_repeat1,
  [1006] = 3,
    ACTIONS(201), 1,
      sym__newline,
    ACTIONS(226), 1,
      aux_sym_field_token2,
    STATE(66), 1,
      aux_sym_field_repeat1,
  [1016] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(249), 1,
      aux_sym_field_token2,
    STATE(53), 1,
      aux_sym_field_repeat1,
  [1026] = 3,
    ACTIONS(199), 1,
      sym__newline,
    ACTIONS(226), 1,
      aux_sym_field_token2,
    STATE(66), 1,
      aux_sym_field_repeat1,
  [1036] = 3,
    ACTIONS(197), 1,
      sym__newline,
    ACTIONS(226), 1,
      aux_sym_field_token2,
    STATE(66), 1,
      aux_sym_field_repeat1,
  [1046] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(251), 1,
      aux_sym_field_token2,
    STATE(82), 1,
      aux_sym_field_repeat1,
  [1056] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(253), 1,
      aux_sym__embed_directive_token1,
    STATE(114), 1,
      sym__embed_directive,
  [1066] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(255), 1,
      aux_sym_field_token2,
    STATE(58), 1,
      aux_sym_field_repeat1,
  [1076] = 3,
    ACTIONS(215), 1,
      sym__newline,
    ACTIONS(226), 1,
      aux_sym_field_token2,
    STATE(66), 1,
      aux_sym_field_repeat1,
  [1086] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(257), 1,
      aux_sym_field_token2,
    STATE(52), 1,
      aux_sym_field_repeat1,
  [1096] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(259), 1,
      aux_sym_field_token2,
    STATE(60), 1,
      aux_sym_field_repeat1,
  [1106] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(261), 1,
      aux_sym_field_token2,
    STATE(55), 1,
      aux_sym_field_repeat1,
  [1116] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(263), 1,
      aux_sym_field_token2,
    STATE(40), 1,
      aux_sym_field_repeat1,
  [1126] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(265), 1,
      aux_sym_field_token2,
    STATE(54), 1,
      aux_sym_field_repeat1,
  [1136] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(267), 1,
      aux_sym_field_token2,
    STATE(78), 1,
      aux_sym_field_repeat1,
  [1146] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(269), 1,
      aux_sym_field_token2,
    STATE(77), 1,
      aux_sym_field_repeat1,
  [1156] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(271), 1,
      aux_sym_field_token2,
    STATE(75), 1,
      aux_sym_field_repeat1,
  [1166] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(273), 1,
      aux_sym_field_token2,
    STATE(74), 1,
      aux_sym_field_repeat1,
  [1176] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(275), 1,
      aux_sym_field_token2,
    STATE(73), 1,
      aux_sym_field_repeat1,
  [1186] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(277), 1,
      aux_sym__embed_directive_token1,
    STATE(138), 1,
      sym__embed_directive,
  [1196] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(279), 1,
      sym__char_bullet,
  [1203] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(281), 1,
      aux_sym_citation_token1,
  [1210] = 2,
    ACTIONS(283), 1,
      sym__newline,
    ACTIONS(285), 1,
      sym__blankline,
  [1217] = 2,
    ACTIONS(287), 1,
      sym__newline,
    ACTIONS(289), 1,
      sym__blankline,
  [1224] = 2,
    ACTIONS(291), 1,
      sym__newline,
    ACTIONS(293), 1,
      sym__blankline,
  [1231] = 2,
    ACTIONS(295), 1,
      sym__newline,
    ACTIONS(297), 1,
      sym__blankline,
  [1238] = 2,
    ACTIONS(299), 1,
      sym__newline,
    ACTIONS(301), 1,
      sym__blankline,
  [1245] = 2,
    ACTIONS(303), 1,
      sym__newline,
    ACTIONS(305), 1,
      sym__blankline,
  [1252] = 2,
    ACTIONS(307), 1,
      sym__newline,
    ACTIONS(309), 1,
      sym__blankline,
  [1259] = 2,
    ACTIONS(311), 1,
      sym__newline,
    ACTIONS(313), 1,
      sym__blankline,
  [1266] = 2,
    ACTIONS(315), 1,
      sym__newline,
    ACTIONS(317), 1,
      sym__blankline,
  [1273] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(319), 1,
      anon_sym_COLON_COLON,
  [1280] = 2,
    ACTIONS(311), 1,
      sym__newline,
    ACTIONS(321), 1,
      sym__blankline,
  [1287] = 2,
    ACTIONS(303), 1,
      sym__newline,
    ACTIONS(323), 1,
      sym__blankline,
  [1294] = 2,
    ACTIONS(299), 1,
      sym__newline,
    ACTIONS(325), 1,
      sym__blankline,
  [1301] = 2,
    ACTIONS(327), 1,
      sym__newline,
    ACTIONS(329), 1,
      sym__blankline,
  [1308] = 2,
    ACTIONS(283), 1,
      sym__newline,
    ACTIONS(331), 1,
      sym__blankline,
  [1315] = 1,
    ACTIONS(333), 2,
      sym__newline,
      sym__blankline,
  [1320] = 1,
    ACTIONS(335), 2,
      sym__newline,
      sym__blankline,
  [1325] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(337), 1,
      anon_sym_COLON_COLON,
  [1332] = 1,
    ACTIONS(339), 2,
      sym__newline,
      sym__blankline,
  [1337] = 2,
    ACTIONS(341), 1,
      sym__newline,
    ACTIONS(343), 1,
      sym__blankline,
  [1344] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(345), 1,
      sym__numeric_bullet,
  [1351] = 2,
    ACTIONS(287), 1,
      sym__newline,
    ACTIONS(347), 1,
      sym__blankline,
  [1358] = 2,
    ACTIONS(341), 1,
      sym__newline,
    ACTIONS(349), 1,
      sym__blankline,
  [1365] = 2,
    ACTIONS(239), 1,
      sym__newline,
    ACTIONS(351), 1,
      aux_sym_target_token2,
  [1372] = 2,
    ACTIONS(243), 1,
      sym__newline,
    ACTIONS(353), 1,
      aux_sym_target_token2,
  [1379] = 2,
    ACTIONS(355), 1,
      sym__newline,
    ACTIONS(357), 1,
      sym__blankline,
  [1386] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(359), 1,
      sym__blankline,
  [1393] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(361), 1,
      ts_builtin_sym_end,
  [1400] = 2,
    ACTIONS(291), 1,
      sym__newline,
    ACTIONS(363), 1,
      sym__blankline,
  [1407] = 2,
    ACTIONS(295), 1,
      sym__newline,
    ACTIONS(365), 1,
      sym__blankline,
  [1414] = 2,
    ACTIONS(307), 1,
      sym__newline,
    ACTIONS(367), 1,
      sym__blankline,
  [1421] = 2,
    ACTIONS(315), 1,
      sym__newline,
    ACTIONS(369), 1,
      sym__blankline,
  [1428] = 2,
    ACTIONS(355), 1,
      sym__newline,
    ACTIONS(371), 1,
      sym__blankline,
  [1435] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(373), 1,
      anon_sym_DOT_DOT,
  [1442] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(375), 1,
      aux_sym_field_token1,
  [1449] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(377), 1,
      aux_sym_option_list_item_token1,
  [1456] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(379), 1,
      aux_sym_substitution_definition_token1,
  [1463] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(381), 1,
      aux_sym_footnote_token1,
  [1470] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(383), 1,
      aux_sym_directive_token1,
  [1477] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(385), 1,
      anon_sym___,
  [1484] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(387), 1,
      aux_sym_target_token1,
  [1491] = 2,
    ACTIONS(327), 1,
      sym__newline,
    ACTIONS(389), 1,
      sym__blankline,
  [1498] = 1,
    ACTIONS(339), 1,
      sym__newline,
  [1502] = 1,
    ACTIONS(335), 1,
      sym__newline,
  [1506] = 1,
    ACTIONS(333), 1,
      sym__newline,
  [1510] = 1,
    ACTIONS(283), 1,
      sym__newline,
  [1514] = 1,
    ACTIONS(327), 1,
      sym__newline,
  [1518] = 1,
    ACTIONS(299), 1,
      sym__newline,
  [1522] = 1,
    ACTIONS(303), 1,
      sym__newline,
  [1526] = 1,
    ACTIONS(311), 1,
      sym__newline,
  [1530] = 1,
    ACTIONS(287), 1,
      sym__newline,
  [1534] = 1,
    ACTIONS(341), 1,
      sym__newline,
  [1538] = 1,
    ACTIONS(291), 1,
      sym__newline,
  [1542] = 1,
    ACTIONS(295), 1,
      sym__newline,
  [1546] = 1,
    ACTIONS(307), 1,
      sym__newline,
  [1550] = 1,
    ACTIONS(315), 1,
      sym__newline,
  [1554] = 1,
    ACTIONS(355), 1,
      sym__newline,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 34,
  [SMALL_STATE(6)] = 56,
  [SMALL_STATE(7)] = 78,
  [SMALL_STATE(8)] = 102,
  [SMALL_STATE(9)] = 126,
  [SMALL_STATE(10)] = 150,
  [SMALL_STATE(11)] = 174,
  [SMALL_STATE(12)] = 196,
  [SMALL_STATE(13)] = 217,
  [SMALL_STATE(14)] = 238,
  [SMALL_STATE(15)] = 259,
  [SMALL_STATE(16)] = 280,
  [SMALL_STATE(17)] = 301,
  [SMALL_STATE(18)] = 322,
  [SMALL_STATE(19)] = 343,
  [SMALL_STATE(20)] = 364,
  [SMALL_STATE(21)] = 381,
  [SMALL_STATE(22)] = 392,
  [SMALL_STATE(23)] = 403,
  [SMALL_STATE(24)] = 413,
  [SMALL_STATE(25)] = 423,
  [SMALL_STATE(26)] = 433,
  [SMALL_STATE(27)] = 443,
  [SMALL_STATE(28)] = 459,
  [SMALL_STATE(29)] = 475,
  [SMALL_STATE(30)] = 485,
  [SMALL_STATE(31)] = 495,
  [SMALL_STATE(32)] = 505,
  [SMALL_STATE(33)] = 515,
  [SMALL_STATE(34)] = 528,
  [SMALL_STATE(35)] = 541,
  [SMALL_STATE(36)] = 554,
  [SMALL_STATE(37)] = 567,
  [SMALL_STATE(38)] = 580,
  [SMALL_STATE(39)] = 591,
  [SMALL_STATE(40)] = 604,
  [SMALL_STATE(41)] = 615,
  [SMALL_STATE(42)] = 628,
  [SMALL_STATE(43)] = 641,
  [SMALL_STATE(44)] = 654,
  [SMALL_STATE(45)] = 667,
  [SMALL_STATE(46)] = 680,
  [SMALL_STATE(47)] = 693,
  [SMALL_STATE(48)] = 706,
  [SMALL_STATE(49)] = 719,
  [SMALL_STATE(50)] = 732,
  [SMALL_STATE(51)] = 745,
  [SMALL_STATE(52)] = 758,
  [SMALL_STATE(53)] = 769,
  [SMALL_STATE(54)] = 780,
  [SMALL_STATE(55)] = 791,
  [SMALL_STATE(56)] = 802,
  [SMALL_STATE(57)] = 813,
  [SMALL_STATE(58)] = 826,
  [SMALL_STATE(59)] = 837,
  [SMALL_STATE(60)] = 850,
  [SMALL_STATE(61)] = 861,
  [SMALL_STATE(62)] = 874,
  [SMALL_STATE(63)] = 887,
  [SMALL_STATE(64)] = 900,
  [SMALL_STATE(65)] = 910,
  [SMALL_STATE(66)] = 920,
  [SMALL_STATE(67)] = 930,
  [SMALL_STATE(68)] = 940,
  [SMALL_STATE(69)] = 950,
  [SMALL_STATE(70)] = 958,
  [SMALL_STATE(71)] = 966,
  [SMALL_STATE(72)] = 976,
  [SMALL_STATE(73)] = 986,
  [SMALL_STATE(74)] = 996,
  [SMALL_STATE(75)] = 1006,
  [SMALL_STATE(76)] = 1016,
  [SMALL_STATE(77)] = 1026,
  [SMALL_STATE(78)] = 1036,
  [SMALL_STATE(79)] = 1046,
  [SMALL_STATE(80)] = 1056,
  [SMALL_STATE(81)] = 1066,
  [SMALL_STATE(82)] = 1076,
  [SMALL_STATE(83)] = 1086,
  [SMALL_STATE(84)] = 1096,
  [SMALL_STATE(85)] = 1106,
  [SMALL_STATE(86)] = 1116,
  [SMALL_STATE(87)] = 1126,
  [SMALL_STATE(88)] = 1136,
  [SMALL_STATE(89)] = 1146,
  [SMALL_STATE(90)] = 1156,
  [SMALL_STATE(91)] = 1166,
  [SMALL_STATE(92)] = 1176,
  [SMALL_STATE(93)] = 1186,
  [SMALL_STATE(94)] = 1196,
  [SMALL_STATE(95)] = 1203,
  [SMALL_STATE(96)] = 1210,
  [SMALL_STATE(97)] = 1217,
  [SMALL_STATE(98)] = 1224,
  [SMALL_STATE(99)] = 1231,
  [SMALL_STATE(100)] = 1238,
  [SMALL_STATE(101)] = 1245,
  [SMALL_STATE(102)] = 1252,
  [SMALL_STATE(103)] = 1259,
  [SMALL_STATE(104)] = 1266,
  [SMALL_STATE(105)] = 1273,
  [SMALL_STATE(106)] = 1280,
  [SMALL_STATE(107)] = 1287,
  [SMALL_STATE(108)] = 1294,
  [SMALL_STATE(109)] = 1301,
  [SMALL_STATE(110)] = 1308,
  [SMALL_STATE(111)] = 1315,
  [SMALL_STATE(112)] = 1320,
  [SMALL_STATE(113)] = 1325,
  [SMALL_STATE(114)] = 1332,
  [SMALL_STATE(115)] = 1337,
  [SMALL_STATE(116)] = 1344,
  [SMALL_STATE(117)] = 1351,
  [SMALL_STATE(118)] = 1358,
  [SMALL_STATE(119)] = 1365,
  [SMALL_STATE(120)] = 1372,
  [SMALL_STATE(121)] = 1379,
  [SMALL_STATE(122)] = 1386,
  [SMALL_STATE(123)] = 1393,
  [SMALL_STATE(124)] = 1400,
  [SMALL_STATE(125)] = 1407,
  [SMALL_STATE(126)] = 1414,
  [SMALL_STATE(127)] = 1421,
  [SMALL_STATE(128)] = 1428,
  [SMALL_STATE(129)] = 1435,
  [SMALL_STATE(130)] = 1442,
  [SMALL_STATE(131)] = 1449,
  [SMALL_STATE(132)] = 1456,
  [SMALL_STATE(133)] = 1463,
  [SMALL_STATE(134)] = 1470,
  [SMALL_STATE(135)] = 1477,
  [SMALL_STATE(136)] = 1484,
  [SMALL_STATE(137)] = 1491,
  [SMALL_STATE(138)] = 1498,
  [SMALL_STATE(139)] = 1502,
  [SMALL_STATE(140)] = 1506,
  [SMALL_STATE(141)] = 1510,
  [SMALL_STATE(142)] = 1514,
  [SMALL_STATE(143)] = 1518,
  [SMALL_STATE(144)] = 1522,
  [SMALL_STATE(145)] = 1526,
  [SMALL_STATE(146)] = 1530,
  [SMALL_STATE(147)] = 1534,
  [SMALL_STATE(148)] = 1538,
  [SMALL_STATE(149)] = 1542,
  [SMALL_STATE(150)] = 1546,
  [SMALL_STATE(151)] = 1550,
  [SMALL_STATE(152)] = 1554,
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
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(83),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(76),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(98),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(87),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(85),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(68),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(69),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(70),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(22),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(80),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(21),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(8),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(3),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(26),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(32),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(8),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__body_elements, 2),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__body_elements, 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__numeric_list_item, 3),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__line, 2), SHIFT_REPEAT(6),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__line, 2),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 1),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(13),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bullet_list_item, 3),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__line, 2), SHIFT_REPEAT(17),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_block_repeat1, 2), SHIFT_REPEAT(148),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_block_repeat1, 2), SHIFT_REPEAT(90),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enumerated_list_repeat1, 2), SHIFT_REPEAT(30),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__directive_block_repeat1, 2), SHIFT_REPEAT(24),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_block_repeat1, 2), SHIFT_REPEAT(23),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__anoynymous_hyperlink_target_block_repeat1, 2), SHIFT_REPEAT(120),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_repeat1, 2), SHIFT_REPEAT(38),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_repeat1, 2),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hyperlink_target_block_repeat1, 2), SHIFT_REPEAT(119),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__substitution_definition_block_repeat1, 2), SHIFT_REPEAT(93),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 2),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_list_item, 2),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_block, 2),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footnote, 2),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_citation, 2),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__citation_block_repeat1, 2), SHIFT_REPEAT(92),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [212] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__footnote_block_repeat1, 2), SHIFT_REPEAT(91),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__embed_directive, 4),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_option_list_repeat1, 2), SHIFT_REPEAT(89),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_list_repeat1, 2), SHIFT_REPEAT(88),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bullet_list_repeat1, 2), SHIFT_REPEAT(29),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_repeat1, 2), SHIFT_REPEAT(66),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_line_block_repeat1, 2),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_block_repeat1, 2),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 1),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__anonymous_target, 1),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bullet_list_repeat1, 2),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__citation_block_repeat1, 2),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_block, 2),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__citation_block, 1),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_block, 1),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_list, 1),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directive_block, 2),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__anoynymous_hyperlink_target_block, 2),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_list, 1),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hyperlink_target_block, 2),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumerated_list, 1),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hyperlink_target_block, 1),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__anoynymous_hyperlink_target_block, 1),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directive_block, 1),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__substitution_definition_block, 1),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_block, 1),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 2),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__anonymous_target, 2),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_substitution_definition, 2),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__footnote_block, 1),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enumerated_list_repeat1, 2),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__citation_block, 2),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__footnote_block, 2),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
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
