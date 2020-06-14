#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 183
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 87
#define ALIAS_COUNT 0
#define TOKEN_COUNT 38
#define EXTERNAL_TOKEN_COUNT 4
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5

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
  anon_sym_DASH = 22,
  anon_sym_COLON = 23,
  anon_sym_SLASH = 24,
  anon_sym_SQUOTE = 25,
  anon_sym_DQUOTE = 26,
  anon_sym_LT = 27,
  anon_sym_LPAREN = 28,
  anon_sym_LBRACK = 29,
  anon_sym_LBRACE = 30,
  aux_sym__line_token1 = 31,
  aux_sym__line_token2 = 32,
  aux_sym__line_token3 = 33,
  sym__newline = 34,
  sym__blankline = 35,
  sym__text = 36,
  sym_emphasis = 37,
  sym_document = 38,
  sym__body_elements = 39,
  sym_paragraph = 40,
  sym__list = 41,
  sym_bullet_list = 42,
  sym__bullet_list_item = 43,
  sym_enumerated_list = 44,
  sym__enumerated_list_item = 45,
  sym_field_list = 46,
  sym_field = 47,
  sym_option_list = 48,
  sym_option_list_item = 49,
  sym_line_block = 50,
  sym__single_line_block = 51,
  sym__markup_block = 52,
  sym__footnote_block = 53,
  sym_footnote = 54,
  sym__citation_block = 55,
  sym_citation = 56,
  sym__hyperlink_target_block = 57,
  sym_target = 58,
  sym__anoynymous_hyperlink_target_block = 59,
  sym__anonymous_target = 60,
  sym__directive_block = 61,
  sym_directive = 62,
  sym__substitution_definition_block = 63,
  sym_substitution_definition = 64,
  sym__embed_directive = 65,
  sym__comment_block = 66,
  sym_comment = 67,
  sym__line = 68,
  sym__inline_markup = 69,
  aux_sym_document_repeat1 = 70,
  aux_sym_paragraph_repeat1 = 71,
  aux_sym_bullet_list_repeat1 = 72,
  aux_sym__bullet_list_item_repeat1 = 73,
  aux_sym_enumerated_list_repeat1 = 74,
  aux_sym_field_list_repeat1 = 75,
  aux_sym_option_list_repeat1 = 76,
  aux_sym_line_block_repeat1 = 77,
  aux_sym__footnote_block_repeat1 = 78,
  aux_sym__citation_block_repeat1 = 79,
  aux_sym__hyperlink_target_block_repeat1 = 80,
  aux_sym__anoynymous_hyperlink_target_block_repeat1 = 81,
  aux_sym__directive_block_repeat1 = 82,
  aux_sym__substitution_definition_block_repeat1 = 83,
  aux_sym__comment_block_repeat1 = 84,
  aux_sym__line_repeat1 = 85,
  aux_sym__line_repeat2 = 86,
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
  [anon_sym_DASH] = "-",
  [anon_sym_COLON] = ":",
  [anon_sym_SLASH] = "/",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_LT] = "<",
  [anon_sym_LPAREN] = "(",
  [anon_sym_LBRACK] = "[",
  [anon_sym_LBRACE] = "{",
  [aux_sym__line_token1] = "_line_token1",
  [aux_sym__line_token2] = "_line_token2",
  [aux_sym__line_token3] = "_line_token3",
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
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [aux_sym__line_token1] = aux_sym__line_token1,
  [aux_sym__line_token2] = aux_sym__line_token2,
  [aux_sym__line_token3] = aux_sym__line_token3,
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
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__line_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__line_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__line_token3] = {
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
      if (lookahead == '"') ADVANCE(97);
      if (lookahead == '\'') ADVANCE(96);
      if (lookahead == '(') ADVANCE(99);
      if (lookahead == '-') ADVANCE(90);
      if (lookahead == '/') ADVANCE(94);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == '<') ADVANCE(98);
      if (lookahead == '[') ADVANCE(100);
      if (lookahead == '{') ADVANCE(101);
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
      if (lookahead == '.') ADVANCE(40);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(6);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(48);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(71);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(71);
      if (lookahead == '_') ADVANCE(29);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(71);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == '`') ADVANCE(11);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '`') ADVANCE(29);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(30);
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
          lookahead == '_') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(44);
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
      if (lookahead == ']') ADVANCE(45);
      END_STATE();
    case 23:
      if (lookahead == ']') ADVANCE(45);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 24:
      if (lookahead == ']') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead == ']') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == ']') ADVANCE(46);
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
      if (lookahead == '_') ADVANCE(10);
      if (lookahead == '`') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(12);
      END_STATE();
    case 29:
      if (lookahead == '_') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(11);
      END_STATE();
    case 30:
      if (lookahead == '`') ADVANCE(10);
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
          lookahead == '\f') ADVANCE(42);
      if (lookahead == ' ') ADVANCE(43);
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
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 40:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(63);
      END_STATE();
    case 41:
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
    case 42:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(65);
      END_STATE();
    case 43:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 44:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(64);
      END_STATE();
    case 45:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(69);
      END_STATE();
    case 46:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(70);
      END_STATE();
    case 47:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(102);
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == ')' ||
          (',' <= lookahead && lookahead <= '/') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '>' ||
          lookahead == '?' ||
          lookahead == ']' ||
          lookahead == '}') ADVANCE(105);
      if (lookahead == '\\') ADVANCE(106);
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
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == ':') ADVANCE(17);
      END_STATE();
    case 50:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(42);
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
      if (lookahead == '"') ADVANCE(97);
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == '\'') ADVANCE(96);
      if (lookahead == '(') ADVANCE(99);
      if (lookahead == '*' ||
          lookahead == 8226 ||
          lookahead == 8227 ||
          lookahead == 8259) ADVANCE(38);
      if (lookahead == '+') ADVANCE(39);
      if (lookahead == '-') ADVANCE(91);
      if (lookahead == '.') ADVANCE(5);
      if (lookahead == '/') ADVANCE(95);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == '<') ADVANCE(98);
      if (lookahead == '[') ADVANCE(100);
      if (lookahead == '_') ADVANCE(27);
      if (lookahead == '{') ADVANCE(101);
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
      if (lookahead == '`') ADVANCE(10);
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
      if (lookahead == '.') ADVANCE(41);
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
      if (lookahead == '.') ADVANCE(41);
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
      if (lookahead == '.') ADVANCE(41);
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
      if (lookahead == '.') ADVANCE(41);
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
    case 90:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(62);
      if (lookahead == '-') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(19);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(102);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '-' ||
          lookahead == '/' ||
          lookahead == ':' ||
          lookahead == '<' ||
          lookahead == '[' ||
          lookahead == '{') ADVANCE(103);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym__line_token2);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym__line_token2);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(104);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '-' ||
          lookahead == '/' ||
          lookahead == ':' ||
          lookahead == '<' ||
          lookahead == '[' ||
          lookahead == '{') ADVANCE(103);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym__line_token3);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(104);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '-' ||
          lookahead == '/' ||
          lookahead == ':' ||
          lookahead == '<' ||
          lookahead == '[' ||
          lookahead == '{') ADVANCE(103);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym__line_token3);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(104);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '-' ||
          lookahead == '/' ||
          lookahead == ':' ||
          lookahead == '<' ||
          lookahead == '[' ||
          lookahead == '{') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
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
  [5] = {.lex_state = 59, .external_lex_state = 2},
  [6] = {.lex_state = 59, .external_lex_state = 2},
  [7] = {.lex_state = 59, .external_lex_state = 2},
  [8] = {.lex_state = 59, .external_lex_state = 2},
  [9] = {.lex_state = 59, .external_lex_state = 2},
  [10] = {.lex_state = 59, .external_lex_state = 2},
  [11] = {.lex_state = 59, .external_lex_state = 2},
  [12] = {.lex_state = 59, .external_lex_state = 3},
  [13] = {.lex_state = 59, .external_lex_state = 3},
  [14] = {.lex_state = 59, .external_lex_state = 3},
  [15] = {.lex_state = 59, .external_lex_state = 4},
  [16] = {.lex_state = 59, .external_lex_state = 4},
  [17] = {.lex_state = 0, .external_lex_state = 2},
  [18] = {.lex_state = 59, .external_lex_state = 3},
  [19] = {.lex_state = 59, .external_lex_state = 3},
  [20] = {.lex_state = 47, .external_lex_state = 4},
  [21] = {.lex_state = 0, .external_lex_state = 2},
  [22] = {.lex_state = 59, .external_lex_state = 3},
  [23] = {.lex_state = 0, .external_lex_state = 2},
  [24] = {.lex_state = 47, .external_lex_state = 4},
  [25] = {.lex_state = 59, .external_lex_state = 3},
  [26] = {.lex_state = 47, .external_lex_state = 4},
  [27] = {.lex_state = 0, .external_lex_state = 2},
  [28] = {.lex_state = 0, .external_lex_state = 2},
  [29] = {.lex_state = 59, .external_lex_state = 3},
  [30] = {.lex_state = 59, .external_lex_state = 3},
  [31] = {.lex_state = 47, .external_lex_state = 4},
  [32] = {.lex_state = 0, .external_lex_state = 2},
  [33] = {.lex_state = 0, .external_lex_state = 2},
  [34] = {.lex_state = 0, .external_lex_state = 2},
  [35] = {.lex_state = 0, .external_lex_state = 2},
  [36] = {.lex_state = 0, .external_lex_state = 2},
  [37] = {.lex_state = 0, .external_lex_state = 2},
  [38] = {.lex_state = 59, .external_lex_state = 3},
  [39] = {.lex_state = 59, .external_lex_state = 3},
  [40] = {.lex_state = 47, .external_lex_state = 3},
  [41] = {.lex_state = 47, .external_lex_state = 3},
  [42] = {.lex_state = 47, .external_lex_state = 3},
  [43] = {.lex_state = 47, .external_lex_state = 3},
  [44] = {.lex_state = 56, .external_lex_state = 4},
  [45] = {.lex_state = 59, .external_lex_state = 3},
  [46] = {.lex_state = 59, .external_lex_state = 3},
  [47] = {.lex_state = 59, .external_lex_state = 3},
  [48] = {.lex_state = 59, .external_lex_state = 3},
  [49] = {.lex_state = 59, .external_lex_state = 3},
  [50] = {.lex_state = 49, .external_lex_state = 3},
  [51] = {.lex_state = 59, .external_lex_state = 3},
  [52] = {.lex_state = 59, .external_lex_state = 3},
  [53] = {.lex_state = 59, .external_lex_state = 3},
  [54] = {.lex_state = 59, .external_lex_state = 3},
  [55] = {.lex_state = 8, .external_lex_state = 3},
  [56] = {.lex_state = 56, .external_lex_state = 4},
  [57] = {.lex_state = 56, .external_lex_state = 4},
  [58] = {.lex_state = 56, .external_lex_state = 4},
  [59] = {.lex_state = 56, .external_lex_state = 4},
  [60] = {.lex_state = 56, .external_lex_state = 4},
  [61] = {.lex_state = 56, .external_lex_state = 4},
  [62] = {.lex_state = 56, .external_lex_state = 4},
  [63] = {.lex_state = 56, .external_lex_state = 4},
  [64] = {.lex_state = 56, .external_lex_state = 4},
  [65] = {.lex_state = 56, .external_lex_state = 4},
  [66] = {.lex_state = 8, .external_lex_state = 3},
  [67] = {.lex_state = 59, .external_lex_state = 3},
  [68] = {.lex_state = 59, .external_lex_state = 3},
  [69] = {.lex_state = 59, .external_lex_state = 3},
  [70] = {.lex_state = 49, .external_lex_state = 3},
  [71] = {.lex_state = 59, .external_lex_state = 3},
  [72] = {.lex_state = 59, .external_lex_state = 3},
  [73] = {.lex_state = 59, .external_lex_state = 3},
  [74] = {.lex_state = 59, .external_lex_state = 3},
  [75] = {.lex_state = 56, .external_lex_state = 3},
  [76] = {.lex_state = 47, .external_lex_state = 3},
  [77] = {.lex_state = 56, .external_lex_state = 3},
  [78] = {.lex_state = 56, .external_lex_state = 3},
  [79] = {.lex_state = 56, .external_lex_state = 3},
  [80] = {.lex_state = 59, .external_lex_state = 3},
  [81] = {.lex_state = 56, .external_lex_state = 3},
  [82] = {.lex_state = 59, .external_lex_state = 3},
  [83] = {.lex_state = 56, .external_lex_state = 3},
  [84] = {.lex_state = 56, .external_lex_state = 3},
  [85] = {.lex_state = 56, .external_lex_state = 3},
  [86] = {.lex_state = 56, .external_lex_state = 3},
  [87] = {.lex_state = 56, .external_lex_state = 3},
  [88] = {.lex_state = 56, .external_lex_state = 3},
  [89] = {.lex_state = 56, .external_lex_state = 3},
  [90] = {.lex_state = 0, .external_lex_state = 2},
  [91] = {.lex_state = 56, .external_lex_state = 3},
  [92] = {.lex_state = 56, .external_lex_state = 3},
  [93] = {.lex_state = 56, .external_lex_state = 3},
  [94] = {.lex_state = 56, .external_lex_state = 3},
  [95] = {.lex_state = 56, .external_lex_state = 3},
  [96] = {.lex_state = 56, .external_lex_state = 3},
  [97] = {.lex_state = 56, .external_lex_state = 3},
  [98] = {.lex_state = 56, .external_lex_state = 3},
  [99] = {.lex_state = 56, .external_lex_state = 3},
  [100] = {.lex_state = 56, .external_lex_state = 3},
  [101] = {.lex_state = 56, .external_lex_state = 3},
  [102] = {.lex_state = 56, .external_lex_state = 3},
  [103] = {.lex_state = 56, .external_lex_state = 3},
  [104] = {.lex_state = 56, .external_lex_state = 3},
  [105] = {.lex_state = 56, .external_lex_state = 3},
  [106] = {.lex_state = 56, .external_lex_state = 3},
  [107] = {.lex_state = 56, .external_lex_state = 3},
  [108] = {.lex_state = 49, .external_lex_state = 4},
  [109] = {.lex_state = 49, .external_lex_state = 4},
  [110] = {.lex_state = 59, .external_lex_state = 3},
  [111] = {.lex_state = 56, .external_lex_state = 3},
  [112] = {.lex_state = 56, .external_lex_state = 3},
  [113] = {.lex_state = 0, .external_lex_state = 4},
  [114] = {.lex_state = 0, .external_lex_state = 4},
  [115] = {.lex_state = 0, .external_lex_state = 4},
  [116] = {.lex_state = 49, .external_lex_state = 3},
  [117] = {.lex_state = 59, .external_lex_state = 3},
  [118] = {.lex_state = 59, .external_lex_state = 3},
  [119] = {.lex_state = 59, .external_lex_state = 3},
  [120] = {.lex_state = 59, .external_lex_state = 3},
  [121] = {.lex_state = 49, .external_lex_state = 3},
  [122] = {.lex_state = 59, .external_lex_state = 3},
  [123] = {.lex_state = 59, .external_lex_state = 3},
  [124] = {.lex_state = 59, .external_lex_state = 3},
  [125] = {.lex_state = 59, .external_lex_state = 3},
  [126] = {.lex_state = 8, .external_lex_state = 3},
  [127] = {.lex_state = 0, .external_lex_state = 4},
  [128] = {.lex_state = 0, .external_lex_state = 4},
  [129] = {.lex_state = 0, .external_lex_state = 4},
  [130] = {.lex_state = 59, .external_lex_state = 3},
  [131] = {.lex_state = 0, .external_lex_state = 4},
  [132] = {.lex_state = 0, .external_lex_state = 4},
  [133] = {.lex_state = 0, .external_lex_state = 4},
  [134] = {.lex_state = 0, .external_lex_state = 4},
  [135] = {.lex_state = 0, .external_lex_state = 4},
  [136] = {.lex_state = 49, .external_lex_state = 3},
  [137] = {.lex_state = 49, .external_lex_state = 3},
  [138] = {.lex_state = 0, .external_lex_state = 4},
  [139] = {.lex_state = 0, .external_lex_state = 3},
  [140] = {.lex_state = 0, .external_lex_state = 4},
  [141] = {.lex_state = 49, .external_lex_state = 3},
  [142] = {.lex_state = 0, .external_lex_state = 4},
  [143] = {.lex_state = 0, .external_lex_state = 4},
  [144] = {.lex_state = 0, .external_lex_state = 4},
  [145] = {.lex_state = 0, .external_lex_state = 4},
  [146] = {.lex_state = 0, .external_lex_state = 4},
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
  [163] = {.lex_state = 0, .external_lex_state = 3},
  [164] = {.lex_state = 0, .external_lex_state = 3},
  [165] = {.lex_state = 0, .external_lex_state = 3},
  [166] = {.lex_state = 0, .external_lex_state = 3},
  [167] = {.lex_state = 0, .external_lex_state = 3},
  [168] = {.lex_state = 0, .external_lex_state = 3},
  [169] = {.lex_state = 0, .external_lex_state = 3},
  [170] = {.lex_state = 0, .external_lex_state = 3},
  [171] = {.lex_state = 0, .external_lex_state = 3},
  [172] = {.lex_state = 0, .external_lex_state = 3},
  [173] = {.lex_state = 0, .external_lex_state = 3},
  [174] = {.lex_state = 0, .external_lex_state = 3},
  [175] = {.lex_state = 0, .external_lex_state = 3},
  [176] = {.lex_state = 0, .external_lex_state = 3},
  [177] = {.lex_state = 0, .external_lex_state = 3},
  [178] = {.lex_state = 0, .external_lex_state = 3},
  [179] = {.lex_state = 0, .external_lex_state = 3},
  [180] = {.lex_state = 0, .external_lex_state = 3},
  [181] = {.lex_state = 0, .external_lex_state = 3},
  [182] = {.lex_state = 0, .external_lex_state = 3},
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
  },
  [4] = {
    [ts_external_token__newline] = true,
    [ts_external_token__blankline] = true,
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
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [sym__newline] = ACTIONS(3),
    [sym__blankline] = ACTIONS(1),
    [sym__text] = ACTIONS(1),
    [sym_emphasis] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(139),
    [sym__body_elements] = STATE(3),
    [sym_paragraph] = STATE(138),
    [sym__list] = STATE(138),
    [sym_bullet_list] = STATE(138),
    [sym__bullet_list_item] = STATE(133),
    [sym_enumerated_list] = STATE(138),
    [sym__enumerated_list_item] = STATE(129),
    [sym_field_list] = STATE(138),
    [sym_field] = STATE(148),
    [sym_option_list] = STATE(138),
    [sym_option_list_item] = STATE(132),
    [sym_line_block] = STATE(138),
    [sym__single_line_block] = STATE(143),
    [sym__markup_block] = STATE(138),
    [sym__footnote_block] = STATE(138),
    [sym_footnote] = STATE(144),
    [sym__citation_block] = STATE(138),
    [sym_citation] = STATE(145),
    [sym__hyperlink_target_block] = STATE(138),
    [sym_target] = STATE(147),
    [sym__anoynymous_hyperlink_target_block] = STATE(138),
    [sym__anonymous_target] = STATE(146),
    [sym__directive_block] = STATE(138),
    [sym_directive] = STATE(128),
    [sym__substitution_definition_block] = STATE(138),
    [sym_substitution_definition] = STATE(158),
    [sym__comment_block] = STATE(138),
    [sym_comment] = STATE(154),
    [sym__line] = STATE(142),
    [sym__inline_markup] = STATE(31),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_paragraph_repeat1] = STATE(5),
    [aux_sym_bullet_list_repeat1] = STATE(45),
    [aux_sym_enumerated_list_repeat1] = STATE(46),
    [aux_sym_field_list_repeat1] = STATE(47),
    [aux_sym_option_list_repeat1] = STATE(48),
    [aux_sym_line_block_repeat1] = STATE(18),
    [aux_sym__footnote_block_repeat1] = STATE(49),
    [aux_sym__citation_block_repeat1] = STATE(50),
    [aux_sym__hyperlink_target_block_repeat1] = STATE(51),
    [aux_sym__anoynymous_hyperlink_target_block_repeat1] = STATE(52),
    [aux_sym__directive_block_repeat1] = STATE(53),
    [aux_sym__substitution_definition_block_repeat1] = STATE(54),
    [aux_sym__comment_block_repeat1] = STATE(55),
    [aux_sym__line_repeat1] = STATE(14),
    [aux_sym__line_repeat2] = STATE(36),
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
    [anon_sym_] = ACTIONS(29),
    [anon_sym_TAB] = ACTIONS(29),
    [anon_sym_2] = ACTIONS(29),
    [anon_sym_3] = ACTIONS(29),
    [aux_sym_substitution_definition_token1] = ACTIONS(31),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(35),
    [anon_sym_COLON] = ACTIONS(35),
    [anon_sym_SLASH] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_LT] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(37),
    [sym__newline] = ACTIONS(3),
    [sym__blankline] = ACTIONS(39),
    [sym__text] = ACTIONS(41),
    [sym_emphasis] = ACTIONS(41),
  },
  [2] = {
    [sym__body_elements] = STATE(2),
    [sym_paragraph] = STATE(138),
    [sym__list] = STATE(138),
    [sym_bullet_list] = STATE(138),
    [sym__bullet_list_item] = STATE(133),
    [sym_enumerated_list] = STATE(138),
    [sym__enumerated_list_item] = STATE(129),
    [sym_field_list] = STATE(138),
    [sym_field] = STATE(148),
    [sym_option_list] = STATE(138),
    [sym_option_list_item] = STATE(132),
    [sym_line_block] = STATE(138),
    [sym__single_line_block] = STATE(143),
    [sym__markup_block] = STATE(138),
    [sym__footnote_block] = STATE(138),
    [sym_footnote] = STATE(144),
    [sym__citation_block] = STATE(138),
    [sym_citation] = STATE(145),
    [sym__hyperlink_target_block] = STATE(138),
    [sym_target] = STATE(147),
    [sym__anoynymous_hyperlink_target_block] = STATE(138),
    [sym__anonymous_target] = STATE(146),
    [sym__directive_block] = STATE(138),
    [sym_directive] = STATE(128),
    [sym__substitution_definition_block] = STATE(138),
    [sym_substitution_definition] = STATE(158),
    [sym__comment_block] = STATE(138),
    [sym_comment] = STATE(154),
    [sym__line] = STATE(142),
    [sym__inline_markup] = STATE(31),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_paragraph_repeat1] = STATE(5),
    [aux_sym_bullet_list_repeat1] = STATE(45),
    [aux_sym_enumerated_list_repeat1] = STATE(46),
    [aux_sym_field_list_repeat1] = STATE(47),
    [aux_sym_option_list_repeat1] = STATE(48),
    [aux_sym_line_block_repeat1] = STATE(18),
    [aux_sym__footnote_block_repeat1] = STATE(49),
    [aux_sym__citation_block_repeat1] = STATE(50),
    [aux_sym__hyperlink_target_block_repeat1] = STATE(51),
    [aux_sym__anoynymous_hyperlink_target_block_repeat1] = STATE(52),
    [aux_sym__directive_block_repeat1] = STATE(53),
    [aux_sym__substitution_definition_block_repeat1] = STATE(54),
    [aux_sym__comment_block_repeat1] = STATE(55),
    [aux_sym__line_repeat1] = STATE(14),
    [aux_sym__line_repeat2] = STATE(36),
    [ts_builtin_sym_end] = ACTIONS(43),
    [sym__char_bullet] = ACTIONS(45),
    [aux_sym__enumerated_list_item_token1] = ACTIONS(48),
    [aux_sym_field_token1] = ACTIONS(51),
    [aux_sym_option_list_item_token1] = ACTIONS(54),
    [anon_sym_PIPE] = ACTIONS(57),
    [aux_sym__single_line_block_token1] = ACTIONS(60),
    [aux_sym_footnote_token1] = ACTIONS(63),
    [aux_sym_citation_token1] = ACTIONS(66),
    [aux_sym_target_token1] = ACTIONS(69),
    [anon_sym___] = ACTIONS(72),
    [aux_sym_directive_token1] = ACTIONS(75),
    [anon_sym_] = ACTIONS(78),
    [anon_sym_TAB] = ACTIONS(78),
    [anon_sym_2] = ACTIONS(78),
    [anon_sym_3] = ACTIONS(78),
    [aux_sym_substitution_definition_token1] = ACTIONS(81),
    [anon_sym_DOT_DOT] = ACTIONS(84),
    [anon_sym_DASH] = ACTIONS(87),
    [anon_sym_COLON] = ACTIONS(87),
    [anon_sym_SLASH] = ACTIONS(87),
    [anon_sym_SQUOTE] = ACTIONS(90),
    [anon_sym_DQUOTE] = ACTIONS(90),
    [anon_sym_LT] = ACTIONS(90),
    [anon_sym_LPAREN] = ACTIONS(90),
    [anon_sym_LBRACK] = ACTIONS(90),
    [anon_sym_LBRACE] = ACTIONS(90),
    [sym__newline] = ACTIONS(3),
    [sym__blankline] = ACTIONS(93),
    [sym__text] = ACTIONS(96),
    [sym_emphasis] = ACTIONS(96),
  },
  [3] = {
    [sym__body_elements] = STATE(2),
    [sym_paragraph] = STATE(138),
    [sym__list] = STATE(138),
    [sym_bullet_list] = STATE(138),
    [sym__bullet_list_item] = STATE(133),
    [sym_enumerated_list] = STATE(138),
    [sym__enumerated_list_item] = STATE(129),
    [sym_field_list] = STATE(138),
    [sym_field] = STATE(148),
    [sym_option_list] = STATE(138),
    [sym_option_list_item] = STATE(132),
    [sym_line_block] = STATE(138),
    [sym__single_line_block] = STATE(143),
    [sym__markup_block] = STATE(138),
    [sym__footnote_block] = STATE(138),
    [sym_footnote] = STATE(144),
    [sym__citation_block] = STATE(138),
    [sym_citation] = STATE(145),
    [sym__hyperlink_target_block] = STATE(138),
    [sym_target] = STATE(147),
    [sym__anoynymous_hyperlink_target_block] = STATE(138),
    [sym__anonymous_target] = STATE(146),
    [sym__directive_block] = STATE(138),
    [sym_directive] = STATE(128),
    [sym__substitution_definition_block] = STATE(138),
    [sym_substitution_definition] = STATE(158),
    [sym__comment_block] = STATE(138),
    [sym_comment] = STATE(154),
    [sym__line] = STATE(142),
    [sym__inline_markup] = STATE(31),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_paragraph_repeat1] = STATE(5),
    [aux_sym_bullet_list_repeat1] = STATE(45),
    [aux_sym_enumerated_list_repeat1] = STATE(46),
    [aux_sym_field_list_repeat1] = STATE(47),
    [aux_sym_option_list_repeat1] = STATE(48),
    [aux_sym_line_block_repeat1] = STATE(18),
    [aux_sym__footnote_block_repeat1] = STATE(49),
    [aux_sym__citation_block_repeat1] = STATE(50),
    [aux_sym__hyperlink_target_block_repeat1] = STATE(51),
    [aux_sym__anoynymous_hyperlink_target_block_repeat1] = STATE(52),
    [aux_sym__directive_block_repeat1] = STATE(53),
    [aux_sym__substitution_definition_block_repeat1] = STATE(54),
    [aux_sym__comment_block_repeat1] = STATE(55),
    [aux_sym__line_repeat1] = STATE(14),
    [aux_sym__line_repeat2] = STATE(36),
    [ts_builtin_sym_end] = ACTIONS(99),
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
    [anon_sym_] = ACTIONS(29),
    [anon_sym_TAB] = ACTIONS(29),
    [anon_sym_2] = ACTIONS(29),
    [anon_sym_3] = ACTIONS(29),
    [aux_sym_substitution_definition_token1] = ACTIONS(31),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(35),
    [anon_sym_COLON] = ACTIONS(35),
    [anon_sym_SLASH] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_LT] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(37),
    [sym__newline] = ACTIONS(3),
    [sym__blankline] = ACTIONS(101),
    [sym__text] = ACTIONS(41),
    [sym_emphasis] = ACTIONS(41),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(105), 6,
      anon_sym_PIPE,
      aux_sym_citation_token1,
      anon_sym_DOT_DOT,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
    ACTIONS(103), 24,
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
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
      aux_sym_substitution_definition_token1,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
  [38] = 9,
    ACTIONS(3), 1,
      sym__newline,
    STATE(6), 1,
      aux_sym_paragraph_repeat1,
    STATE(14), 1,
      aux_sym__line_repeat1,
    STATE(31), 1,
      sym__inline_markup,
    STATE(36), 1,
      aux_sym__line_repeat2,
    STATE(151), 1,
      sym__line,
    ACTIONS(41), 2,
      sym__text,
      sym_emphasis,
    ACTIONS(29), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
    ACTIONS(37), 9,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
  [78] = 9,
    ACTIONS(3), 1,
      sym__newline,
    STATE(6), 1,
      aux_sym_paragraph_repeat1,
    STATE(13), 1,
      aux_sym__line_repeat1,
    STATE(33), 1,
      aux_sym__line_repeat2,
    STATE(43), 1,
      sym__inline_markup,
    STATE(182), 1,
      sym__line,
    ACTIONS(113), 2,
      sym__text,
      sym_emphasis,
    ACTIONS(107), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
    ACTIONS(110), 9,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
  [118] = 5,
    ACTIONS(3), 1,
      sym__newline,
    STATE(37), 1,
      aux_sym__line_repeat2,
    STATE(41), 1,
      sym__inline_markup,
    ACTIONS(118), 2,
      sym__text,
      sym_emphasis,
    ACTIONS(116), 13,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
  [147] = 5,
    ACTIONS(3), 1,
      sym__newline,
    STATE(26), 1,
      sym__inline_markup,
    STATE(27), 1,
      aux_sym__line_repeat2,
    ACTIONS(120), 2,
      sym__text,
      sym_emphasis,
    ACTIONS(116), 13,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
  [176] = 5,
    ACTIONS(3), 1,
      sym__newline,
    STATE(34), 1,
      aux_sym__line_repeat2,
    STATE(42), 1,
      sym__inline_markup,
    ACTIONS(122), 2,
      sym__text,
      sym_emphasis,
    ACTIONS(116), 13,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
  [205] = 5,
    ACTIONS(3), 1,
      sym__newline,
    STATE(17), 1,
      aux_sym__line_repeat2,
    STATE(20), 1,
      sym__inline_markup,
    ACTIONS(124), 2,
      sym__text,
      sym_emphasis,
    ACTIONS(116), 13,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
  [234] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(126), 15,
      sym__text,
      sym_emphasis,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
  [255] = 4,
    ACTIONS(3), 1,
      sym__newline,
    STATE(12), 1,
      aux_sym__line_repeat1,
    ACTIONS(128), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
    ACTIONS(131), 9,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
  [279] = 4,
    ACTIONS(3), 1,
      sym__newline,
    STATE(12), 1,
      aux_sym__line_repeat1,
    ACTIONS(133), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
    ACTIONS(135), 9,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
  [303] = 4,
    ACTIONS(3), 1,
      sym__newline,
    STATE(12), 1,
      aux_sym__line_repeat1,
    ACTIONS(137), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
    ACTIONS(139), 9,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
  [327] = 2,
    ACTIONS(143), 2,
      sym__newline,
      sym__blankline,
    ACTIONS(141), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [338] = 2,
    ACTIONS(147), 2,
      sym__newline,
      sym__blankline,
    ACTIONS(145), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [349] = 4,
    ACTIONS(3), 1,
      sym__newline,
    STATE(21), 1,
      aux_sym__line_repeat2,
    STATE(24), 1,
      sym__inline_markup,
    ACTIONS(149), 2,
      sym__text,
      sym_emphasis,
  [363] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(17), 1,
      aux_sym__single_line_block_token1,
    ACTIONS(151), 1,
      anon_sym_PIPE,
    STATE(30), 1,
      aux_sym_line_block_repeat1,
    STATE(160), 1,
      sym__single_line_block,
  [379] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(153), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [389] = 3,
    ACTIONS(157), 1,
      aux_sym__line_token3,
    ACTIONS(155), 2,
      aux_sym__line_token1,
      aux_sym__line_token2,
    ACTIONS(159), 2,
      sym__newline,
      sym__blankline,
  [401] = 4,
    ACTIONS(3), 1,
      sym__newline,
    STATE(21), 1,
      aux_sym__line_repeat2,
    STATE(76), 1,
      sym__inline_markup,
    ACTIONS(161), 2,
      sym__text,
      sym_emphasis,
  [415] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(164), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [425] = 4,
    ACTIONS(3), 1,
      sym__newline,
    STATE(17), 1,
      aux_sym__line_repeat2,
    STATE(20), 1,
      sym__inline_markup,
    ACTIONS(124), 2,
      sym__text,
      sym_emphasis,
  [439] = 3,
    ACTIONS(166), 1,
      aux_sym__line_token3,
    ACTIONS(155), 2,
      aux_sym__line_token1,
      aux_sym__line_token2,
    ACTIONS(168), 2,
      sym__newline,
      sym__blankline,
  [451] = 2,
    ACTIONS(143), 1,
      sym__newline,
    ACTIONS(170), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [461] = 3,
    ACTIONS(172), 1,
      aux_sym__line_token3,
    ACTIONS(155), 2,
      aux_sym__line_token1,
      aux_sym__line_token2,
    ACTIONS(174), 2,
      sym__newline,
      sym__blankline,
  [473] = 4,
    ACTIONS(3), 1,
      sym__newline,
    STATE(20), 1,
      sym__inline_markup,
    STATE(21), 1,
      aux_sym__line_repeat2,
    ACTIONS(124), 2,
      sym__text,
      sym_emphasis,
  [487] = 4,
    ACTIONS(3), 1,
      sym__newline,
    STATE(26), 1,
      sym__inline_markup,
    STATE(27), 1,
      aux_sym__line_repeat2,
    ACTIONS(120), 2,
      sym__text,
      sym_emphasis,
  [501] = 2,
    ACTIONS(147), 1,
      sym__newline,
    ACTIONS(176), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [511] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(178), 1,
      anon_sym_PIPE,
    ACTIONS(181), 1,
      aux_sym__single_line_block_token1,
    STATE(30), 1,
      aux_sym_line_block_repeat1,
    STATE(177), 1,
      sym__single_line_block,
  [527] = 3,
    ACTIONS(184), 1,
      aux_sym__line_token3,
    ACTIONS(155), 2,
      aux_sym__line_token1,
      aux_sym__line_token2,
    ACTIONS(186), 2,
      sym__newline,
      sym__blankline,
  [539] = 4,
    ACTIONS(3), 1,
      sym__newline,
    STATE(34), 1,
      aux_sym__line_repeat2,
    STATE(42), 1,
      sym__inline_markup,
    ACTIONS(122), 2,
      sym__text,
      sym_emphasis,
  [553] = 4,
    ACTIONS(3), 1,
      sym__newline,
    STATE(21), 1,
      aux_sym__line_repeat2,
    STATE(42), 1,
      sym__inline_markup,
    ACTIONS(122), 2,
      sym__text,
      sym_emphasis,
  [567] = 4,
    ACTIONS(3), 1,
      sym__newline,
    STATE(21), 1,
      aux_sym__line_repeat2,
    STATE(41), 1,
      sym__inline_markup,
    ACTIONS(118), 2,
      sym__text,
      sym_emphasis,
  [581] = 4,
    ACTIONS(3), 1,
      sym__newline,
    STATE(37), 1,
      aux_sym__line_repeat2,
    STATE(41), 1,
      sym__inline_markup,
    ACTIONS(118), 2,
      sym__text,
      sym_emphasis,
  [595] = 4,
    ACTIONS(3), 1,
      sym__newline,
    STATE(21), 1,
      aux_sym__line_repeat2,
    STATE(26), 1,
      sym__inline_markup,
    ACTIONS(120), 2,
      sym__text,
      sym_emphasis,
  [609] = 4,
    ACTIONS(3), 1,
      sym__newline,
    STATE(21), 1,
      aux_sym__line_repeat2,
    STATE(40), 1,
      sym__inline_markup,
    ACTIONS(188), 2,
      sym__text,
      sym_emphasis,
  [623] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(190), 1,
      aux_sym_option_list_item_token1,
    STATE(38), 1,
      aux_sym_option_list_repeat1,
    STATE(178), 1,
      sym_option_list_item,
  [636] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(193), 1,
      aux_sym_footnote_token1,
    STATE(39), 1,
      aux_sym__footnote_block_repeat1,
    STATE(176), 1,
      sym_footnote,
  [649] = 3,
    ACTIONS(168), 1,
      sym__newline,
    ACTIONS(196), 1,
      aux_sym__line_token3,
    ACTIONS(155), 2,
      aux_sym__line_token1,
      aux_sym__line_token2,
  [660] = 3,
    ACTIONS(159), 1,
      sym__newline,
    ACTIONS(198), 1,
      aux_sym__line_token3,
    ACTIONS(155), 2,
      aux_sym__line_token1,
      aux_sym__line_token2,
  [671] = 3,
    ACTIONS(174), 1,
      sym__newline,
    ACTIONS(200), 1,
      aux_sym__line_token3,
    ACTIONS(155), 2,
      aux_sym__line_token1,
      aux_sym__line_token2,
  [682] = 3,
    ACTIONS(186), 1,
      sym__newline,
    ACTIONS(202), 1,
      aux_sym__line_token3,
    ACTIONS(155), 2,
      aux_sym__line_token1,
      aux_sym__line_token2,
  [693] = 3,
    ACTIONS(204), 1,
      aux_sym__bullet_list_item_token1,
    STATE(65), 1,
      aux_sym__bullet_list_item_repeat1,
    ACTIONS(206), 2,
      sym__newline,
      sym__blankline,
  [704] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(7), 1,
      sym__char_bullet,
    STATE(67), 1,
      aux_sym_bullet_list_repeat1,
    STATE(152), 1,
      sym__bullet_list_item,
  [717] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(9), 1,
      aux_sym__enumerated_list_item_token1,
    STATE(69), 1,
      aux_sym_enumerated_list_repeat1,
    STATE(156), 1,
      sym__enumerated_list_item,
  [730] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(11), 1,
      aux_sym_field_token1,
    STATE(71), 1,
      aux_sym_field_list_repeat1,
    STATE(162), 1,
      sym_field,
  [743] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(13), 1,
      aux_sym_option_list_item_token1,
    STATE(38), 1,
      aux_sym_option_list_repeat1,
    STATE(161), 1,
      sym_option_list_item,
  [756] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      aux_sym_footnote_token1,
    STATE(39), 1,
      aux_sym__footnote_block_repeat1,
    STATE(159), 1,
      sym_footnote,
  [769] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(208), 1,
      aux_sym_citation_token1,
    STATE(70), 1,
      aux_sym__citation_block_repeat1,
    STATE(157), 1,
      sym_citation,
  [782] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(23), 1,
      aux_sym_target_token1,
    STATE(73), 1,
      aux_sym__hyperlink_target_block_repeat1,
    STATE(155), 1,
      sym_target,
  [795] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(25), 1,
      anon_sym___,
    STATE(68), 1,
      aux_sym__anoynymous_hyperlink_target_block_repeat1,
    STATE(153), 1,
      sym__anonymous_target,
  [808] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(27), 1,
      aux_sym_directive_token1,
    STATE(74), 1,
      aux_sym__directive_block_repeat1,
    STATE(113), 1,
      sym_directive,
  [821] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(31), 1,
      aux_sym_substitution_definition_token1,
    STATE(72), 1,
      aux_sym__substitution_definition_block_repeat1,
    STATE(149), 1,
      sym_substitution_definition,
  [834] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(210), 1,
      anon_sym_DOT_DOT,
    STATE(66), 1,
      aux_sym__comment_block_repeat1,
    STATE(114), 1,
      sym_comment,
  [847] = 3,
    ACTIONS(204), 1,
      aux_sym__bullet_list_item_token1,
    STATE(65), 1,
      aux_sym__bullet_list_item_repeat1,
    ACTIONS(212), 2,
      sym__newline,
      sym__blankline,
  [858] = 3,
    ACTIONS(204), 1,
      aux_sym__bullet_list_item_token1,
    STATE(65), 1,
      aux_sym__bullet_list_item_repeat1,
    ACTIONS(214), 2,
      sym__newline,
      sym__blankline,
  [869] = 3,
    ACTIONS(204), 1,
      aux_sym__bullet_list_item_token1,
    STATE(65), 1,
      aux_sym__bullet_list_item_repeat1,
    ACTIONS(216), 2,
      sym__newline,
      sym__blankline,
  [880] = 3,
    ACTIONS(204), 1,
      aux_sym__bullet_list_item_token1,
    STATE(65), 1,
      aux_sym__bullet_list_item_repeat1,
    ACTIONS(218), 2,
      sym__newline,
      sym__blankline,
  [891] = 3,
    ACTIONS(204), 1,
      aux_sym__bullet_list_item_token1,
    STATE(65), 1,
      aux_sym__bullet_list_item_repeat1,
    ACTIONS(220), 2,
      sym__newline,
      sym__blankline,
  [902] = 3,
    ACTIONS(204), 1,
      aux_sym__bullet_list_item_token1,
    STATE(65), 1,
      aux_sym__bullet_list_item_repeat1,
    ACTIONS(222), 2,
      sym__newline,
      sym__blankline,
  [913] = 3,
    ACTIONS(204), 1,
      aux_sym__bullet_list_item_token1,
    STATE(65), 1,
      aux_sym__bullet_list_item_repeat1,
    ACTIONS(224), 2,
      sym__newline,
      sym__blankline,
  [924] = 3,
    ACTIONS(204), 1,
      aux_sym__bullet_list_item_token1,
    STATE(65), 1,
      aux_sym__bullet_list_item_repeat1,
    ACTIONS(226), 2,
      sym__newline,
      sym__blankline,
  [935] = 3,
    ACTIONS(204), 1,
      aux_sym__bullet_list_item_token1,
    STATE(65), 1,
      aux_sym__bullet_list_item_repeat1,
    ACTIONS(228), 2,
      sym__newline,
      sym__blankline,
  [946] = 3,
    ACTIONS(230), 1,
      aux_sym__bullet_list_item_token1,
    STATE(65), 1,
      aux_sym__bullet_list_item_repeat1,
    ACTIONS(233), 2,
      sym__newline,
      sym__blankline,
  [957] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(235), 1,
      anon_sym_DOT_DOT,
    STATE(66), 1,
      aux_sym__comment_block_repeat1,
    STATE(169), 1,
      sym_comment,
  [970] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(238), 1,
      sym__char_bullet,
    STATE(67), 1,
      aux_sym_bullet_list_repeat1,
    STATE(181), 1,
      sym__bullet_list_item,
  [983] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(241), 1,
      anon_sym___,
    STATE(68), 1,
      aux_sym__anoynymous_hyperlink_target_block_repeat1,
    STATE(173), 1,
      sym__anonymous_target,
  [996] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(244), 1,
      aux_sym__enumerated_list_item_token1,
    STATE(69), 1,
      aux_sym_enumerated_list_repeat1,
    STATE(180), 1,
      sym__enumerated_list_item,
  [1009] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(247), 1,
      aux_sym_citation_token1,
    STATE(70), 1,
      aux_sym__citation_block_repeat1,
    STATE(175), 1,
      sym_citation,
  [1022] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(250), 1,
      aux_sym_field_token1,
    STATE(71), 1,
      aux_sym_field_list_repeat1,
    STATE(179), 1,
      sym_field,
  [1035] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(253), 1,
      aux_sym_substitution_definition_token1,
    STATE(72), 1,
      aux_sym__substitution_definition_block_repeat1,
    STATE(170), 1,
      sym_substitution_definition,
  [1048] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(256), 1,
      aux_sym_target_token1,
    STATE(73), 1,
      aux_sym__hyperlink_target_block_repeat1,
    STATE(174), 1,
      sym_target,
  [1061] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(259), 1,
      aux_sym_directive_token1,
    STATE(74), 1,
      aux_sym__directive_block_repeat1,
    STATE(172), 1,
      sym_directive,
  [1074] = 3,
    ACTIONS(218), 1,
      sym__newline,
    ACTIONS(262), 1,
      aux_sym__bullet_list_item_token1,
    STATE(95), 1,
      aux_sym__bullet_list_item_repeat1,
  [1084] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(155), 2,
      aux_sym__line_token1,
      aux_sym__line_token2,
  [1092] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(264), 1,
      aux_sym__bullet_list_item_token1,
    STATE(63), 1,
      aux_sym__bullet_list_item_repeat1,
  [1102] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(266), 1,
      aux_sym__bullet_list_item_token1,
    STATE(57), 1,
      aux_sym__bullet_list_item_repeat1,
  [1112] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(268), 1,
      aux_sym__bullet_list_item_token1,
    STATE(58), 1,
      aux_sym__bullet_list_item_repeat1,
  [1122] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(270), 1,
      aux_sym__embed_directive_token1,
    STATE(165), 1,
      sym__embed_directive,
  [1132] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(272), 1,
      aux_sym__bullet_list_item_token1,
    STATE(101), 1,
      aux_sym__bullet_list_item_repeat1,
  [1142] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(274), 1,
      anon_sym_PIPE,
    ACTIONS(276), 1,
      aux_sym__single_line_block_token1,
  [1152] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(278), 1,
      aux_sym__bullet_list_item_token1,
    STATE(102), 1,
      aux_sym__bullet_list_item_repeat1,
  [1162] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(280), 1,
      aux_sym__bullet_list_item_token1,
    STATE(103), 1,
      aux_sym__bullet_list_item_repeat1,
  [1172] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(282), 1,
      aux_sym__bullet_list_item_token1,
    STATE(75), 1,
      aux_sym__bullet_list_item_repeat1,
  [1182] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(284), 1,
      aux_sym__bullet_list_item_token1,
    STATE(104), 1,
      aux_sym__bullet_list_item_repeat1,
  [1192] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(286), 1,
      aux_sym__bullet_list_item_token1,
    STATE(105), 1,
      aux_sym__bullet_list_item_repeat1,
  [1202] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(288), 1,
      aux_sym__bullet_list_item_token1,
    STATE(107), 1,
      aux_sym__bullet_list_item_repeat1,
  [1212] = 3,
    ACTIONS(206), 1,
      sym__newline,
    ACTIONS(262), 1,
      aux_sym__bullet_list_item_token1,
    STATE(95), 1,
      aux_sym__bullet_list_item_repeat1,
  [1222] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(290), 2,
      sym__text,
      sym_emphasis,
  [1230] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(292), 1,
      aux_sym__bullet_list_item_token1,
    STATE(89), 1,
      aux_sym__bullet_list_item_repeat1,
  [1240] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(294), 1,
      aux_sym__bullet_list_item_token1,
    STATE(59), 1,
      aux_sym__bullet_list_item_repeat1,
  [1250] = 3,
    ACTIONS(226), 1,
      sym__newline,
    ACTIONS(262), 1,
      aux_sym__bullet_list_item_token1,
    STATE(95), 1,
      aux_sym__bullet_list_item_repeat1,
  [1260] = 3,
    ACTIONS(228), 1,
      sym__newline,
    ACTIONS(262), 1,
      aux_sym__bullet_list_item_token1,
    STATE(95), 1,
      aux_sym__bullet_list_item_repeat1,
  [1270] = 3,
    ACTIONS(233), 1,
      sym__newline,
    ACTIONS(296), 1,
      aux_sym__bullet_list_item_token1,
    STATE(95), 1,
      aux_sym__bullet_list_item_repeat1,
  [1280] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(299), 1,
      aux_sym__bullet_list_item_token1,
    STATE(60), 1,
      aux_sym__bullet_list_item_repeat1,
  [1290] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(301), 1,
      aux_sym__bullet_list_item_token1,
    STATE(61), 1,
      aux_sym__bullet_list_item_repeat1,
  [1300] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(303), 1,
      aux_sym__bullet_list_item_token1,
    STATE(93), 1,
      aux_sym__bullet_list_item_repeat1,
  [1310] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(305), 1,
      aux_sym__bullet_list_item_token1,
    STATE(62), 1,
      aux_sym__bullet_list_item_repeat1,
  [1320] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(307), 1,
      aux_sym__bullet_list_item_token1,
    STATE(94), 1,
      aux_sym__bullet_list_item_repeat1,
  [1330] = 3,
    ACTIONS(224), 1,
      sym__newline,
    ACTIONS(262), 1,
      aux_sym__bullet_list_item_token1,
    STATE(95), 1,
      aux_sym__bullet_list_item_repeat1,
  [1340] = 3,
    ACTIONS(222), 1,
      sym__newline,
    ACTIONS(262), 1,
      aux_sym__bullet_list_item_token1,
    STATE(95), 1,
      aux_sym__bullet_list_item_repeat1,
  [1350] = 3,
    ACTIONS(220), 1,
      sym__newline,
    ACTIONS(262), 1,
      aux_sym__bullet_list_item_token1,
    STATE(95), 1,
      aux_sym__bullet_list_item_repeat1,
  [1360] = 3,
    ACTIONS(216), 1,
      sym__newline,
    ACTIONS(262), 1,
      aux_sym__bullet_list_item_token1,
    STATE(95), 1,
      aux_sym__bullet_list_item_repeat1,
  [1370] = 3,
    ACTIONS(214), 1,
      sym__newline,
    ACTIONS(262), 1,
      aux_sym__bullet_list_item_token1,
    STATE(95), 1,
      aux_sym__bullet_list_item_repeat1,
  [1380] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(309), 1,
      aux_sym__bullet_list_item_token1,
    STATE(56), 1,
      aux_sym__bullet_list_item_repeat1,
  [1390] = 3,
    ACTIONS(212), 1,
      sym__newline,
    ACTIONS(262), 1,
      aux_sym__bullet_list_item_token1,
    STATE(95), 1,
      aux_sym__bullet_list_item_repeat1,
  [1400] = 2,
    ACTIONS(311), 1,
      aux_sym_target_token2,
    ACTIONS(313), 2,
      sym__newline,
      sym__blankline,
  [1408] = 2,
    ACTIONS(315), 1,
      aux_sym_target_token2,
    ACTIONS(317), 2,
      sym__newline,
      sym__blankline,
  [1416] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(319), 1,
      aux_sym__embed_directive_token1,
    STATE(150), 1,
      sym__embed_directive,
  [1426] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(321), 1,
      aux_sym__bullet_list_item_token1,
    STATE(64), 1,
      aux_sym__bullet_list_item_repeat1,
  [1436] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(323), 1,
      aux_sym__bullet_list_item_token1,
    STATE(44), 1,
      aux_sym__bullet_list_item_repeat1,
  [1446] = 2,
    ACTIONS(325), 1,
      sym__newline,
    ACTIONS(327), 1,
      sym__blankline,
  [1453] = 2,
    ACTIONS(329), 1,
      sym__newline,
    ACTIONS(331), 1,
      sym__blankline,
  [1460] = 1,
    ACTIONS(333), 2,
      sym__newline,
      sym__blankline,
  [1465] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(335), 1,
      anon_sym_COLON_COLON,
  [1472] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(337), 1,
      aux_sym__enumerated_list_item_token1,
  [1479] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(339), 1,
      aux_sym_field_token1,
  [1486] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(341), 1,
      aux_sym_option_list_item_token1,
  [1493] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(343), 1,
      aux_sym_footnote_token1,
  [1500] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(345), 1,
      aux_sym_citation_token1,
  [1507] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(347), 1,
      aux_sym_target_token1,
  [1514] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(349), 1,
      anon_sym___,
  [1521] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(351), 1,
      aux_sym_directive_token1,
  [1528] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(353), 1,
      aux_sym_substitution_definition_token1,
  [1535] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(355), 1,
      anon_sym_DOT_DOT,
  [1542] = 1,
    ACTIONS(174), 2,
      sym__newline,
      sym__blankline,
  [1547] = 2,
    ACTIONS(325), 1,
      sym__newline,
    ACTIONS(357), 1,
      sym__blankline,
  [1554] = 2,
    ACTIONS(359), 1,
      sym__newline,
    ACTIONS(361), 1,
      sym__blankline,
  [1561] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(363), 1,
      sym__char_bullet,
  [1568] = 1,
    ACTIONS(168), 2,
      sym__newline,
      sym__blankline,
  [1573] = 2,
    ACTIONS(365), 1,
      sym__newline,
    ACTIONS(367), 1,
      sym__blankline,
  [1580] = 2,
    ACTIONS(369), 1,
      sym__newline,
    ACTIONS(371), 1,
      sym__blankline,
  [1587] = 1,
    ACTIONS(373), 2,
      sym__newline,
      sym__blankline,
  [1592] = 1,
    ACTIONS(375), 2,
      sym__newline,
      sym__blankline,
  [1597] = 2,
    ACTIONS(313), 1,
      sym__newline,
    ACTIONS(377), 1,
      aux_sym_target_token2,
  [1604] = 2,
    ACTIONS(317), 1,
      sym__newline,
    ACTIONS(379), 1,
      aux_sym_target_token2,
  [1611] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(381), 1,
      sym__blankline,
  [1618] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(383), 1,
      ts_builtin_sym_end,
  [1625] = 1,
    ACTIONS(159), 2,
      sym__newline,
      sym__blankline,
  [1630] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(385), 1,
      anon_sym_COLON_COLON,
  [1637] = 2,
    ACTIONS(387), 1,
      sym__newline,
    ACTIONS(389), 1,
      sym__blankline,
  [1644] = 2,
    ACTIONS(391), 1,
      sym__newline,
    ACTIONS(393), 1,
      sym__blankline,
  [1651] = 2,
    ACTIONS(395), 1,
      sym__newline,
    ACTIONS(397), 1,
      sym__blankline,
  [1658] = 2,
    ACTIONS(399), 1,
      sym__newline,
    ACTIONS(401), 1,
      sym__blankline,
  [1665] = 2,
    ACTIONS(403), 1,
      sym__newline,
    ACTIONS(405), 1,
      sym__blankline,
  [1672] = 2,
    ACTIONS(407), 1,
      sym__newline,
    ACTIONS(409), 1,
      sym__blankline,
  [1679] = 2,
    ACTIONS(411), 1,
      sym__newline,
    ACTIONS(413), 1,
      sym__blankline,
  [1686] = 2,
    ACTIONS(415), 1,
      sym__newline,
    ACTIONS(417), 1,
      sym__blankline,
  [1693] = 1,
    ACTIONS(419), 2,
      sym__newline,
      sym__blankline,
  [1698] = 2,
    ACTIONS(387), 1,
      sym__newline,
    ACTIONS(421), 1,
      sym__blankline,
  [1705] = 2,
    ACTIONS(369), 1,
      sym__newline,
    ACTIONS(423), 1,
      sym__blankline,
  [1712] = 2,
    ACTIONS(403), 1,
      sym__newline,
    ACTIONS(425), 1,
      sym__blankline,
  [1719] = 2,
    ACTIONS(329), 1,
      sym__newline,
    ACTIONS(427), 1,
      sym__blankline,
  [1726] = 2,
    ACTIONS(407), 1,
      sym__newline,
    ACTIONS(429), 1,
      sym__blankline,
  [1733] = 2,
    ACTIONS(359), 1,
      sym__newline,
    ACTIONS(431), 1,
      sym__blankline,
  [1740] = 2,
    ACTIONS(399), 1,
      sym__newline,
    ACTIONS(433), 1,
      sym__blankline,
  [1747] = 2,
    ACTIONS(415), 1,
      sym__newline,
    ACTIONS(435), 1,
      sym__blankline,
  [1754] = 2,
    ACTIONS(395), 1,
      sym__newline,
    ACTIONS(437), 1,
      sym__blankline,
  [1761] = 2,
    ACTIONS(391), 1,
      sym__newline,
    ACTIONS(439), 1,
      sym__blankline,
  [1768] = 2,
    ACTIONS(365), 1,
      sym__newline,
    ACTIONS(441), 1,
      sym__blankline,
  [1775] = 2,
    ACTIONS(411), 1,
      sym__newline,
    ACTIONS(443), 1,
      sym__blankline,
  [1782] = 1,
    ACTIONS(159), 1,
      sym__newline,
  [1786] = 1,
    ACTIONS(174), 1,
      sym__newline,
  [1790] = 1,
    ACTIONS(419), 1,
      sym__newline,
  [1794] = 1,
    ACTIONS(333), 1,
      sym__newline,
  [1798] = 1,
    ACTIONS(168), 1,
      sym__newline,
  [1802] = 1,
    ACTIONS(373), 1,
      sym__newline,
  [1806] = 1,
    ACTIONS(329), 1,
      sym__newline,
  [1810] = 1,
    ACTIONS(415), 1,
      sym__newline,
  [1814] = 1,
    ACTIONS(375), 1,
      sym__newline,
  [1818] = 1,
    ACTIONS(325), 1,
      sym__newline,
  [1822] = 1,
    ACTIONS(403), 1,
      sym__newline,
  [1826] = 1,
    ACTIONS(407), 1,
      sym__newline,
  [1830] = 1,
    ACTIONS(399), 1,
      sym__newline,
  [1834] = 1,
    ACTIONS(395), 1,
      sym__newline,
  [1838] = 1,
    ACTIONS(391), 1,
      sym__newline,
  [1842] = 1,
    ACTIONS(365), 1,
      sym__newline,
  [1846] = 1,
    ACTIONS(411), 1,
      sym__newline,
  [1850] = 1,
    ACTIONS(359), 1,
      sym__newline,
  [1854] = 1,
    ACTIONS(369), 1,
      sym__newline,
  [1858] = 1,
    ACTIONS(387), 1,
      sym__newline,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 38,
  [SMALL_STATE(6)] = 78,
  [SMALL_STATE(7)] = 118,
  [SMALL_STATE(8)] = 147,
  [SMALL_STATE(9)] = 176,
  [SMALL_STATE(10)] = 205,
  [SMALL_STATE(11)] = 234,
  [SMALL_STATE(12)] = 255,
  [SMALL_STATE(13)] = 279,
  [SMALL_STATE(14)] = 303,
  [SMALL_STATE(15)] = 327,
  [SMALL_STATE(16)] = 338,
  [SMALL_STATE(17)] = 349,
  [SMALL_STATE(18)] = 363,
  [SMALL_STATE(19)] = 379,
  [SMALL_STATE(20)] = 389,
  [SMALL_STATE(21)] = 401,
  [SMALL_STATE(22)] = 415,
  [SMALL_STATE(23)] = 425,
  [SMALL_STATE(24)] = 439,
  [SMALL_STATE(25)] = 451,
  [SMALL_STATE(26)] = 461,
  [SMALL_STATE(27)] = 473,
  [SMALL_STATE(28)] = 487,
  [SMALL_STATE(29)] = 501,
  [SMALL_STATE(30)] = 511,
  [SMALL_STATE(31)] = 527,
  [SMALL_STATE(32)] = 539,
  [SMALL_STATE(33)] = 553,
  [SMALL_STATE(34)] = 567,
  [SMALL_STATE(35)] = 581,
  [SMALL_STATE(36)] = 595,
  [SMALL_STATE(37)] = 609,
  [SMALL_STATE(38)] = 623,
  [SMALL_STATE(39)] = 636,
  [SMALL_STATE(40)] = 649,
  [SMALL_STATE(41)] = 660,
  [SMALL_STATE(42)] = 671,
  [SMALL_STATE(43)] = 682,
  [SMALL_STATE(44)] = 693,
  [SMALL_STATE(45)] = 704,
  [SMALL_STATE(46)] = 717,
  [SMALL_STATE(47)] = 730,
  [SMALL_STATE(48)] = 743,
  [SMALL_STATE(49)] = 756,
  [SMALL_STATE(50)] = 769,
  [SMALL_STATE(51)] = 782,
  [SMALL_STATE(52)] = 795,
  [SMALL_STATE(53)] = 808,
  [SMALL_STATE(54)] = 821,
  [SMALL_STATE(55)] = 834,
  [SMALL_STATE(56)] = 847,
  [SMALL_STATE(57)] = 858,
  [SMALL_STATE(58)] = 869,
  [SMALL_STATE(59)] = 880,
  [SMALL_STATE(60)] = 891,
  [SMALL_STATE(61)] = 902,
  [SMALL_STATE(62)] = 913,
  [SMALL_STATE(63)] = 924,
  [SMALL_STATE(64)] = 935,
  [SMALL_STATE(65)] = 946,
  [SMALL_STATE(66)] = 957,
  [SMALL_STATE(67)] = 970,
  [SMALL_STATE(68)] = 983,
  [SMALL_STATE(69)] = 996,
  [SMALL_STATE(70)] = 1009,
  [SMALL_STATE(71)] = 1022,
  [SMALL_STATE(72)] = 1035,
  [SMALL_STATE(73)] = 1048,
  [SMALL_STATE(74)] = 1061,
  [SMALL_STATE(75)] = 1074,
  [SMALL_STATE(76)] = 1084,
  [SMALL_STATE(77)] = 1092,
  [SMALL_STATE(78)] = 1102,
  [SMALL_STATE(79)] = 1112,
  [SMALL_STATE(80)] = 1122,
  [SMALL_STATE(81)] = 1132,
  [SMALL_STATE(82)] = 1142,
  [SMALL_STATE(83)] = 1152,
  [SMALL_STATE(84)] = 1162,
  [SMALL_STATE(85)] = 1172,
  [SMALL_STATE(86)] = 1182,
  [SMALL_STATE(87)] = 1192,
  [SMALL_STATE(88)] = 1202,
  [SMALL_STATE(89)] = 1212,
  [SMALL_STATE(90)] = 1222,
  [SMALL_STATE(91)] = 1230,
  [SMALL_STATE(92)] = 1240,
  [SMALL_STATE(93)] = 1250,
  [SMALL_STATE(94)] = 1260,
  [SMALL_STATE(95)] = 1270,
  [SMALL_STATE(96)] = 1280,
  [SMALL_STATE(97)] = 1290,
  [SMALL_STATE(98)] = 1300,
  [SMALL_STATE(99)] = 1310,
  [SMALL_STATE(100)] = 1320,
  [SMALL_STATE(101)] = 1330,
  [SMALL_STATE(102)] = 1340,
  [SMALL_STATE(103)] = 1350,
  [SMALL_STATE(104)] = 1360,
  [SMALL_STATE(105)] = 1370,
  [SMALL_STATE(106)] = 1380,
  [SMALL_STATE(107)] = 1390,
  [SMALL_STATE(108)] = 1400,
  [SMALL_STATE(109)] = 1408,
  [SMALL_STATE(110)] = 1416,
  [SMALL_STATE(111)] = 1426,
  [SMALL_STATE(112)] = 1436,
  [SMALL_STATE(113)] = 1446,
  [SMALL_STATE(114)] = 1453,
  [SMALL_STATE(115)] = 1460,
  [SMALL_STATE(116)] = 1465,
  [SMALL_STATE(117)] = 1472,
  [SMALL_STATE(118)] = 1479,
  [SMALL_STATE(119)] = 1486,
  [SMALL_STATE(120)] = 1493,
  [SMALL_STATE(121)] = 1500,
  [SMALL_STATE(122)] = 1507,
  [SMALL_STATE(123)] = 1514,
  [SMALL_STATE(124)] = 1521,
  [SMALL_STATE(125)] = 1528,
  [SMALL_STATE(126)] = 1535,
  [SMALL_STATE(127)] = 1542,
  [SMALL_STATE(128)] = 1547,
  [SMALL_STATE(129)] = 1554,
  [SMALL_STATE(130)] = 1561,
  [SMALL_STATE(131)] = 1568,
  [SMALL_STATE(132)] = 1573,
  [SMALL_STATE(133)] = 1580,
  [SMALL_STATE(134)] = 1587,
  [SMALL_STATE(135)] = 1592,
  [SMALL_STATE(136)] = 1597,
  [SMALL_STATE(137)] = 1604,
  [SMALL_STATE(138)] = 1611,
  [SMALL_STATE(139)] = 1618,
  [SMALL_STATE(140)] = 1625,
  [SMALL_STATE(141)] = 1630,
  [SMALL_STATE(142)] = 1637,
  [SMALL_STATE(143)] = 1644,
  [SMALL_STATE(144)] = 1651,
  [SMALL_STATE(145)] = 1658,
  [SMALL_STATE(146)] = 1665,
  [SMALL_STATE(147)] = 1672,
  [SMALL_STATE(148)] = 1679,
  [SMALL_STATE(149)] = 1686,
  [SMALL_STATE(150)] = 1693,
  [SMALL_STATE(151)] = 1698,
  [SMALL_STATE(152)] = 1705,
  [SMALL_STATE(153)] = 1712,
  [SMALL_STATE(154)] = 1719,
  [SMALL_STATE(155)] = 1726,
  [SMALL_STATE(156)] = 1733,
  [SMALL_STATE(157)] = 1740,
  [SMALL_STATE(158)] = 1747,
  [SMALL_STATE(159)] = 1754,
  [SMALL_STATE(160)] = 1761,
  [SMALL_STATE(161)] = 1768,
  [SMALL_STATE(162)] = 1775,
  [SMALL_STATE(163)] = 1782,
  [SMALL_STATE(164)] = 1786,
  [SMALL_STATE(165)] = 1790,
  [SMALL_STATE(166)] = 1794,
  [SMALL_STATE(167)] = 1798,
  [SMALL_STATE(168)] = 1802,
  [SMALL_STATE(169)] = 1806,
  [SMALL_STATE(170)] = 1810,
  [SMALL_STATE(171)] = 1814,
  [SMALL_STATE(172)] = 1818,
  [SMALL_STATE(173)] = 1822,
  [SMALL_STATE(174)] = 1826,
  [SMALL_STATE(175)] = 1830,
  [SMALL_STATE(176)] = 1834,
  [SMALL_STATE(177)] = 1838,
  [SMALL_STATE(178)] = 1842,
  [SMALL_STATE(179)] = 1846,
  [SMALL_STATE(180)] = 1850,
  [SMALL_STATE(181)] = 1854,
  [SMALL_STATE(182)] = 1858,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(106),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(78),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(79),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(92),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(143),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(96),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(97),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(99),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(108),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(109),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(15),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(8),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(110),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(16),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(28),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(28),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(2),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(31),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__body_elements, 2),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__body_elements, 2),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(9),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(32),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(43),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__line_repeat1, 1),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__line_repeat1, 2), SHIFT_REPEAT(12),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__line_repeat1, 2),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 3),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__line_repeat2, 2), SHIFT_REPEAT(76),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 4),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 2),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [178] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_block_repeat1, 2), SHIFT_REPEAT(177),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_block_repeat1, 2), SHIFT_REPEAT(84),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 1),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_option_list_repeat1, 2), SHIFT_REPEAT(85),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__footnote_block_repeat1, 2), SHIFT_REPEAT(83),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__embed_directive, 4),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bullet_list_item, 2),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__enumerated_list_item, 2),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 2),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_list_item, 2),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_block, 2),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footnote, 2),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_citation, 2),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__bullet_list_item_repeat1, 2), SHIFT_REPEAT(65),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__bullet_list_item_repeat1, 2),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_block_repeat1, 2), SHIFT_REPEAT(29),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bullet_list_repeat1, 2), SHIFT_REPEAT(88),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__anoynymous_hyperlink_target_block_repeat1, 2), SHIFT_REPEAT(137),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enumerated_list_repeat1, 2), SHIFT_REPEAT(87),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__citation_block_repeat1, 2), SHIFT_REPEAT(81),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_list_repeat1, 2), SHIFT_REPEAT(86),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__substitution_definition_block_repeat1, 2), SHIFT_REPEAT(80),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hyperlink_target_block_repeat1, 2), SHIFT_REPEAT(136),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__directive_block_repeat1, 2), SHIFT_REPEAT(25),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_line_block_repeat1, 2),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_block_repeat1, 2),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__line_repeat2, 2),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [296] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__bullet_list_item_repeat1, 2), SHIFT_REPEAT(95),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 1),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__anonymous_target, 1),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directive_block, 2),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_block, 2),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__anonymous_target, 2),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enumerated_list_repeat1, 2),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_list_repeat1, 2),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_option_list_repeat1, 2),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__footnote_block_repeat1, 2),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__citation_block_repeat1, 2),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hyperlink_target_block_repeat1, 2),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__anoynymous_hyperlink_target_block_repeat1, 2),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__directive_block_repeat1, 2),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__substitution_definition_block_repeat1, 2),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__comment_block_repeat1, 2),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directive_block, 1),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumerated_list, 1),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bullet_list_repeat1, 2),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_list, 1),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bullet_list, 1),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 2),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 5),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [383] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 1),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_block, 1),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__footnote_block, 1),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__citation_block, 1),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__anoynymous_hyperlink_target_block, 1),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hyperlink_target_block, 1),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_list, 1),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__substitution_definition_block, 2),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_substitution_definition, 2),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bullet_list, 2),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__anoynymous_hyperlink_target_block, 2),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_block, 1),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hyperlink_target_block, 2),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumerated_list, 2),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__citation_block, 2),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__substitution_definition_block, 1),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__footnote_block, 2),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_block, 2),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_list, 2),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_list, 2),
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
