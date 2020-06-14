#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 151
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 74
#define ALIAS_COUNT 0
#define TOKEN_COUNT 27
#define EXTERNAL_TOKEN_COUNT 5
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4

enum {
  anon_sym_ = 1,
  anon_sym_TAB = 2,
  anon_sym_2 = 3,
  anon_sym_3 = 4,
  aux_sym__enumerated_list_item_token1 = 5,
  aux_sym__enumerated_list_item_token2 = 6,
  aux_sym_field_token1 = 7,
  aux_sym_option_list_item_token1 = 8,
  anon_sym_PIPE = 9,
  aux_sym__single_line_block_token1 = 10,
  aux_sym_footnote_token1 = 11,
  aux_sym_citation_token1 = 12,
  aux_sym_target_token1 = 13,
  aux_sym_target_token2 = 14,
  anon_sym___ = 15,
  aux_sym_directive_token1 = 16,
  aux_sym_substitution_definition_token1 = 17,
  aux_sym__embed_directive_token1 = 18,
  anon_sym_COLON_COLON = 19,
  anon_sym_DOT_DOT = 20,
  aux_sym__line_token1 = 21,
  sym__newline = 22,
  sym__blankline = 23,
  sym__char_bullet = 24,
  sym__text = 25,
  sym_emphasis = 26,
  sym_document = 27,
  sym__body_elements = 28,
  sym_paragraph = 29,
  sym__list = 30,
  sym_bullet_list = 31,
  sym__bullet_list_item = 32,
  sym_enumerated_list = 33,
  sym__enumerated_list_item = 34,
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
  aux_sym__enumerated_list_item_repeat1 = 63,
  aux_sym_field_list_repeat1 = 64,
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
  [aux_sym__enumerated_list_item_token1] = "_enumerated_list_item_token1",
  [aux_sym__enumerated_list_item_token2] = "_enumerated_list_item_token2",
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
  [aux_sym_substitution_definition_token1] = "substitution_definition_token1",
  [aux_sym__embed_directive_token1] = "_embed_directive_token1",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_DOT_DOT] = "..",
  [aux_sym__line_token1] = "_line_token1",
  [sym__newline] = "_newline",
  [sym__blankline] = "_blankline",
  [sym__char_bullet] = "_char_bullet",
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
  [aux_sym__line] = "_line",
  [sym__inline_markup] = "_inline_markup",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_paragraph_repeat1] = "paragraph_repeat1",
  [aux_sym_bullet_list_repeat1] = "bullet_list_repeat1",
  [aux_sym_enumerated_list_repeat1] = "enumerated_list_repeat1",
  [aux_sym__enumerated_list_item_repeat1] = "_enumerated_list_item_repeat1",
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
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_] = anon_sym_,
  [anon_sym_TAB] = anon_sym_TAB,
  [anon_sym_2] = anon_sym_2,
  [anon_sym_3] = anon_sym_3,
  [aux_sym__enumerated_list_item_token1] = aux_sym__enumerated_list_item_token1,
  [aux_sym__enumerated_list_item_token2] = aux_sym__enumerated_list_item_token2,
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
  [aux_sym_substitution_definition_token1] = aux_sym_substitution_definition_token1,
  [aux_sym__embed_directive_token1] = aux_sym__embed_directive_token1,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [aux_sym__line_token1] = aux_sym__line_token1,
  [sym__newline] = sym__newline,
  [sym__blankline] = sym__blankline,
  [sym__char_bullet] = sym__char_bullet,
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
  [aux_sym__line] = aux_sym__line,
  [sym__inline_markup] = sym__inline_markup,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_paragraph_repeat1] = aux_sym_paragraph_repeat1,
  [aux_sym_bullet_list_repeat1] = aux_sym_bullet_list_repeat1,
  [aux_sym_enumerated_list_repeat1] = aux_sym_enumerated_list_repeat1,
  [aux_sym__enumerated_list_item_repeat1] = aux_sym__enumerated_list_item_repeat1,
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
  [aux_sym__enumerated_list_item_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__enumerated_list_item_token2] = {
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
  [aux_sym__enumerated_list_item_repeat1] = {
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
};

static TSSymbol ts_alias_sequences[1][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(59);
      if (lookahead == '\t') ADVANCE(61);
      if (lookahead == 11) ADVANCE(62);
      if (lookahead == '\f') ADVANCE(63);
      if (lookahead == ' ') ADVANCE(60);
      if (lookahead == '|') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(65);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(61);
      if (lookahead == 11) ADVANCE(62);
      if (lookahead == '\f') ADVANCE(63);
      if (lookahead == ' ') ADVANCE(60);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == ':') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(4);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '*') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 4:
      if (lookahead == '+') ADVANCE(52);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '/') ADVANCE(52);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(41);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'I' ||
          lookahead == 'L' ||
          lookahead == 'M' ||
          lookahead == 'V' ||
          lookahead == 'X') ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == 'c' ||
          lookahead == 'd' ||
          lookahead == 'i' ||
          lookahead == 'l' ||
          lookahead == 'm' ||
          lookahead == 'v' ||
          lookahead == 'x') ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(83);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(82);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(47);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(73);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(73);
      if (lookahead == '_') ADVANCE(32);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(73);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(74);
      if (lookahead == '_') ADVANCE(19);
      if (lookahead == '`') ADVANCE(14);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(74);
      if (lookahead == '`') ADVANCE(32);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(77);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == '_') ADVANCE(19);
      if (lookahead == '`') ADVANCE(14);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 20:
      if (lookahead == ':') ADVANCE(81);
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(44);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == '[') ADVANCE(3);
      if (lookahead == '_') ADVANCE(31);
      if (lookahead == '|') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 24:
      if (lookahead == '[') ADVANCE(54);
      END_STATE();
    case 25:
      if (lookahead == ']') ADVANCE(45);
      END_STATE();
    case 26:
      if (lookahead == ']') ADVANCE(45);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 27:
      if (lookahead == ']') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 28:
      if (lookahead == ']') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == ']') ADVANCE(46);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == '_') ADVANCE(76);
      END_STATE();
    case 31:
      if (lookahead == '_') ADVANCE(13);
      if (lookahead == '`') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(15);
      END_STATE();
    case 32:
      if (lookahead == '_') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(14);
      END_STATE();
    case 33:
      if (lookahead == '`') ADVANCE(13);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead == '|') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(39);
      END_STATE();
    case 35:
      if (lookahead == '|') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 36:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(79);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(78);
      if (lookahead == '\r') ADVANCE(39);
      if (lookahead == '|') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 37:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(79);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(78);
      if (lookahead == '\r') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 38:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f') ADVANCE(42);
      if (lookahead == ' ') ADVANCE(43);
      if (lookahead == ',') ADVANCE(2);
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 39:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 40:
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 41:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(64);
      END_STATE();
    case 42:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(67);
      END_STATE();
    case 43:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 44:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(66);
      END_STATE();
    case 45:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(71);
      END_STATE();
    case 46:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(72);
      END_STATE();
    case 47:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(24);
      END_STATE();
    case 48:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead == ',') ADVANCE(2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 49:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(56);
      if (lookahead == '.') ADVANCE(12);
      END_STATE();
    case 50:
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '_') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 51:
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '_') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 55:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(65);
      END_STATE();
    case 56:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(75);
      END_STATE();
    case 57:
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(22);
      END_STATE();
    case 58:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(34);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_TAB);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_3);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym__enumerated_list_item_token1);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym__enumerated_list_item_token2);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_field_token1);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_option_list_item_token1);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(70);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym__single_line_block_token1);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_footnote_token1);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_citation_token1);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_target_token1);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == '`') ADVANCE(13);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_target_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym___);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '_') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_substitution_definition_token1);
      if (lookahead == '|') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_substitution_definition_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym__embed_directive_token1);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '_') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(23);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (eof) ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(84);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '+') ADVANCE(52);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == '/') ADVANCE(52);
      if (lookahead == ':') ADVANCE(57);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == '|') ADVANCE(69);
      if (lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'I' ||
          lookahead == 'L' ||
          lookahead == 'M' ||
          lookahead == 'V' ||
          lookahead == 'X') ADVANCE(7);
      if (lookahead == 'c' ||
          lookahead == 'd' ||
          lookahead == 'i' ||
          lookahead == 'l' ||
          lookahead == 'm' ||
          lookahead == 'v' ||
          lookahead == 'x') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(6);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 85, .external_lex_state = 1},
  [2] = {.lex_state = 85, .external_lex_state = 1},
  [3] = {.lex_state = 85, .external_lex_state = 1},
  [4] = {.lex_state = 85, .external_lex_state = 1},
  [5] = {.lex_state = 85, .external_lex_state = 2},
  [6] = {.lex_state = 85, .external_lex_state = 2},
  [7] = {.lex_state = 85, .external_lex_state = 3},
  [8] = {.lex_state = 85, .external_lex_state = 3},
  [9] = {.lex_state = 85, .external_lex_state = 2},
  [10] = {.lex_state = 85, .external_lex_state = 2},
  [11] = {.lex_state = 85, .external_lex_state = 3},
  [12] = {.lex_state = 1, .external_lex_state = 4},
  [13] = {.lex_state = 1, .external_lex_state = 4},
  [14] = {.lex_state = 85, .external_lex_state = 3},
  [15] = {.lex_state = 85, .external_lex_state = 3},
  [16] = {.lex_state = 85, .external_lex_state = 3},
  [17] = {.lex_state = 85, .external_lex_state = 3},
  [18] = {.lex_state = 1, .external_lex_state = 5},
  [19] = {.lex_state = 1, .external_lex_state = 5},
  [20] = {.lex_state = 85, .external_lex_state = 5},
  [21] = {.lex_state = 1, .external_lex_state = 5},
  [22] = {.lex_state = 1, .external_lex_state = 5},
  [23] = {.lex_state = 1, .external_lex_state = 5},
  [24] = {.lex_state = 1, .external_lex_state = 5},
  [25] = {.lex_state = 85, .external_lex_state = 5},
  [26] = {.lex_state = 0, .external_lex_state = 6},
  [27] = {.lex_state = 55, .external_lex_state = 4},
  [28] = {.lex_state = 85, .external_lex_state = 5},
  [29] = {.lex_state = 85, .external_lex_state = 5},
  [30] = {.lex_state = 85, .external_lex_state = 5},
  [31] = {.lex_state = 1, .external_lex_state = 5},
  [32] = {.lex_state = 49, .external_lex_state = 5},
  [33] = {.lex_state = 55, .external_lex_state = 4},
  [34] = {.lex_state = 85, .external_lex_state = 5},
  [35] = {.lex_state = 55, .external_lex_state = 4},
  [36] = {.lex_state = 55, .external_lex_state = 4},
  [37] = {.lex_state = 85, .external_lex_state = 5},
  [38] = {.lex_state = 85, .external_lex_state = 5},
  [39] = {.lex_state = 0, .external_lex_state = 6},
  [40] = {.lex_state = 85, .external_lex_state = 5},
  [41] = {.lex_state = 85, .external_lex_state = 5},
  [42] = {.lex_state = 85, .external_lex_state = 5},
  [43] = {.lex_state = 85, .external_lex_state = 5},
  [44] = {.lex_state = 49, .external_lex_state = 5},
  [45] = {.lex_state = 85, .external_lex_state = 5},
  [46] = {.lex_state = 85, .external_lex_state = 5},
  [47] = {.lex_state = 85, .external_lex_state = 5},
  [48] = {.lex_state = 85, .external_lex_state = 5},
  [49] = {.lex_state = 1, .external_lex_state = 5},
  [50] = {.lex_state = 55, .external_lex_state = 4},
  [51] = {.lex_state = 55, .external_lex_state = 4},
  [52] = {.lex_state = 55, .external_lex_state = 4},
  [53] = {.lex_state = 55, .external_lex_state = 4},
  [54] = {.lex_state = 55, .external_lex_state = 4},
  [55] = {.lex_state = 55, .external_lex_state = 4},
  [56] = {.lex_state = 85, .external_lex_state = 5},
  [57] = {.lex_state = 85, .external_lex_state = 5},
  [58] = {.lex_state = 85, .external_lex_state = 3},
  [59] = {.lex_state = 49, .external_lex_state = 4},
  [60] = {.lex_state = 55, .external_lex_state = 5},
  [61] = {.lex_state = 55, .external_lex_state = 5},
  [62] = {.lex_state = 55, .external_lex_state = 5},
  [63] = {.lex_state = 55, .external_lex_state = 5},
  [64] = {.lex_state = 55, .external_lex_state = 5},
  [65] = {.lex_state = 55, .external_lex_state = 5},
  [66] = {.lex_state = 55, .external_lex_state = 5},
  [67] = {.lex_state = 55, .external_lex_state = 5},
  [68] = {.lex_state = 55, .external_lex_state = 5},
  [69] = {.lex_state = 55, .external_lex_state = 5},
  [70] = {.lex_state = 55, .external_lex_state = 5},
  [71] = {.lex_state = 55, .external_lex_state = 5},
  [72] = {.lex_state = 55, .external_lex_state = 5},
  [73] = {.lex_state = 49, .external_lex_state = 4},
  [74] = {.lex_state = 55, .external_lex_state = 5},
  [75] = {.lex_state = 85, .external_lex_state = 5},
  [76] = {.lex_state = 55, .external_lex_state = 5},
  [77] = {.lex_state = 55, .external_lex_state = 5},
  [78] = {.lex_state = 55, .external_lex_state = 5},
  [79] = {.lex_state = 55, .external_lex_state = 5},
  [80] = {.lex_state = 1, .external_lex_state = 5},
  [81] = {.lex_state = 55, .external_lex_state = 5},
  [82] = {.lex_state = 55, .external_lex_state = 5},
  [83] = {.lex_state = 55, .external_lex_state = 5},
  [84] = {.lex_state = 55, .external_lex_state = 5},
  [85] = {.lex_state = 55, .external_lex_state = 5},
  [86] = {.lex_state = 55, .external_lex_state = 5},
  [87] = {.lex_state = 55, .external_lex_state = 5},
  [88] = {.lex_state = 55, .external_lex_state = 5},
  [89] = {.lex_state = 55, .external_lex_state = 5},
  [90] = {.lex_state = 1, .external_lex_state = 5},
  [91] = {.lex_state = 55, .external_lex_state = 5},
  [92] = {.lex_state = 0, .external_lex_state = 4},
  [93] = {.lex_state = 0, .external_lex_state = 6},
  [94] = {.lex_state = 0, .external_lex_state = 4},
  [95] = {.lex_state = 0, .external_lex_state = 4},
  [96] = {.lex_state = 0, .external_lex_state = 4},
  [97] = {.lex_state = 0, .external_lex_state = 4},
  [98] = {.lex_state = 0, .external_lex_state = 4},
  [99] = {.lex_state = 0, .external_lex_state = 4},
  [100] = {.lex_state = 0, .external_lex_state = 4},
  [101] = {.lex_state = 0, .external_lex_state = 5},
  [102] = {.lex_state = 0, .external_lex_state = 4},
  [103] = {.lex_state = 0, .external_lex_state = 4},
  [104] = {.lex_state = 1, .external_lex_state = 5},
  [105] = {.lex_state = 0, .external_lex_state = 4},
  [106] = {.lex_state = 0, .external_lex_state = 4},
  [107] = {.lex_state = 0, .external_lex_state = 4},
  [108] = {.lex_state = 0, .external_lex_state = 4},
  [109] = {.lex_state = 0, .external_lex_state = 4},
  [110] = {.lex_state = 0, .external_lex_state = 4},
  [111] = {.lex_state = 0, .external_lex_state = 4},
  [112] = {.lex_state = 0, .external_lex_state = 4},
  [113] = {.lex_state = 0, .external_lex_state = 4},
  [114] = {.lex_state = 0, .external_lex_state = 4},
  [115] = {.lex_state = 0, .external_lex_state = 4},
  [116] = {.lex_state = 0, .external_lex_state = 4},
  [117] = {.lex_state = 0, .external_lex_state = 4},
  [118] = {.lex_state = 49, .external_lex_state = 5},
  [119] = {.lex_state = 49, .external_lex_state = 5},
  [120] = {.lex_state = 0, .external_lex_state = 4},
  [121] = {.lex_state = 0, .external_lex_state = 4},
  [122] = {.lex_state = 1, .external_lex_state = 5},
  [123] = {.lex_state = 85, .external_lex_state = 5},
  [124] = {.lex_state = 85, .external_lex_state = 5},
  [125] = {.lex_state = 85, .external_lex_state = 5},
  [126] = {.lex_state = 85, .external_lex_state = 5},
  [127] = {.lex_state = 49, .external_lex_state = 5},
  [128] = {.lex_state = 85, .external_lex_state = 5},
  [129] = {.lex_state = 0, .external_lex_state = 4},
  [130] = {.lex_state = 1, .external_lex_state = 5},
  [131] = {.lex_state = 85, .external_lex_state = 5},
  [132] = {.lex_state = 0, .external_lex_state = 4},
  [133] = {.lex_state = 85, .external_lex_state = 5},
  [134] = {.lex_state = 85, .external_lex_state = 5},
  [135] = {.lex_state = 0, .external_lex_state = 4},
  [136] = {.lex_state = 0, .external_lex_state = 5},
  [137] = {.lex_state = 0, .external_lex_state = 5},
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
};

enum {
  ts_external_token__newline = 0,
  ts_external_token__blankline = 1,
  ts_external_token__char_bullet = 2,
  ts_external_token__text = 3,
  ts_external_token_emphasis = 4,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__newline] = sym__newline,
  [ts_external_token__blankline] = sym__blankline,
  [ts_external_token__char_bullet] = sym__char_bullet,
  [ts_external_token__text] = sym__text,
  [ts_external_token_emphasis] = sym_emphasis,
};

static bool ts_external_scanner_states[7][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__newline] = true,
    [ts_external_token__blankline] = true,
    [ts_external_token__char_bullet] = true,
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
    [aux_sym__enumerated_list_item_token2] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [sym__newline] = ACTIONS(3),
    [sym__blankline] = ACTIONS(1),
    [sym__char_bullet] = ACTIONS(1),
    [sym__text] = ACTIONS(1),
    [sym_emphasis] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(101),
    [sym__body_elements] = STATE(3),
    [sym_paragraph] = STATE(98),
    [sym__list] = STATE(98),
    [sym_bullet_list] = STATE(98),
    [sym__bullet_list_item] = STATE(129),
    [sym_enumerated_list] = STATE(98),
    [sym__enumerated_list_item] = STATE(97),
    [sym_field_list] = STATE(98),
    [sym_field] = STATE(105),
    [sym_option_list] = STATE(98),
    [sym_option_list_item] = STATE(106),
    [sym_line_block] = STATE(98),
    [sym__single_line_block] = STATE(107),
    [sym__markup_block] = STATE(98),
    [sym__footnote_block] = STATE(98),
    [sym_footnote] = STATE(108),
    [sym__citation_block] = STATE(98),
    [sym_citation] = STATE(109),
    [sym__hyperlink_target_block] = STATE(98),
    [sym_target] = STATE(110),
    [sym__anoynymous_hyperlink_target_block] = STATE(98),
    [sym__anonymous_target] = STATE(111),
    [sym__directive_block] = STATE(98),
    [sym_directive] = STATE(112),
    [sym__substitution_definition_block] = STATE(98),
    [sym_substitution_definition] = STATE(113),
    [sym__comment_block] = STATE(98),
    [sym_comment] = STATE(114),
    [aux_sym__line] = STATE(9),
    [sym__inline_markup] = STATE(9),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_paragraph_repeat1] = STATE(8),
    [aux_sym_bullet_list_repeat1] = STATE(39),
    [aux_sym_enumerated_list_repeat1] = STATE(40),
    [aux_sym_field_list_repeat1] = STATE(41),
    [aux_sym_option_list_repeat1] = STATE(42),
    [aux_sym_line_block_repeat1] = STATE(25),
    [aux_sym__footnote_block_repeat1] = STATE(43),
    [aux_sym__citation_block_repeat1] = STATE(44),
    [aux_sym__hyperlink_target_block_repeat1] = STATE(45),
    [aux_sym__anoynymous_hyperlink_target_block_repeat1] = STATE(46),
    [aux_sym__directive_block_repeat1] = STATE(47),
    [aux_sym__substitution_definition_block_repeat1] = STATE(48),
    [aux_sym__comment_block_repeat1] = STATE(49),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym__enumerated_list_item_token1] = ACTIONS(7),
    [aux_sym_field_token1] = ACTIONS(9),
    [aux_sym_option_list_item_token1] = ACTIONS(11),
    [anon_sym_PIPE] = ACTIONS(13),
    [aux_sym__single_line_block_token1] = ACTIONS(15),
    [aux_sym_footnote_token1] = ACTIONS(17),
    [aux_sym_citation_token1] = ACTIONS(19),
    [aux_sym_target_token1] = ACTIONS(21),
    [anon_sym___] = ACTIONS(23),
    [aux_sym_directive_token1] = ACTIONS(25),
    [aux_sym_substitution_definition_token1] = ACTIONS(27),
    [anon_sym_DOT_DOT] = ACTIONS(29),
    [aux_sym__line_token1] = ACTIONS(31),
    [sym__newline] = ACTIONS(3),
    [sym__blankline] = ACTIONS(33),
    [sym__char_bullet] = ACTIONS(35),
    [sym__text] = ACTIONS(37),
    [sym_emphasis] = ACTIONS(37),
  },
  [2] = {
    [sym__body_elements] = STATE(2),
    [sym_paragraph] = STATE(98),
    [sym__list] = STATE(98),
    [sym_bullet_list] = STATE(98),
    [sym__bullet_list_item] = STATE(129),
    [sym_enumerated_list] = STATE(98),
    [sym__enumerated_list_item] = STATE(97),
    [sym_field_list] = STATE(98),
    [sym_field] = STATE(105),
    [sym_option_list] = STATE(98),
    [sym_option_list_item] = STATE(106),
    [sym_line_block] = STATE(98),
    [sym__single_line_block] = STATE(107),
    [sym__markup_block] = STATE(98),
    [sym__footnote_block] = STATE(98),
    [sym_footnote] = STATE(108),
    [sym__citation_block] = STATE(98),
    [sym_citation] = STATE(109),
    [sym__hyperlink_target_block] = STATE(98),
    [sym_target] = STATE(110),
    [sym__anoynymous_hyperlink_target_block] = STATE(98),
    [sym__anonymous_target] = STATE(111),
    [sym__directive_block] = STATE(98),
    [sym_directive] = STATE(112),
    [sym__substitution_definition_block] = STATE(98),
    [sym_substitution_definition] = STATE(113),
    [sym__comment_block] = STATE(98),
    [sym_comment] = STATE(114),
    [aux_sym__line] = STATE(9),
    [sym__inline_markup] = STATE(9),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_paragraph_repeat1] = STATE(8),
    [aux_sym_bullet_list_repeat1] = STATE(39),
    [aux_sym_enumerated_list_repeat1] = STATE(40),
    [aux_sym_field_list_repeat1] = STATE(41),
    [aux_sym_option_list_repeat1] = STATE(42),
    [aux_sym_line_block_repeat1] = STATE(25),
    [aux_sym__footnote_block_repeat1] = STATE(43),
    [aux_sym__citation_block_repeat1] = STATE(44),
    [aux_sym__hyperlink_target_block_repeat1] = STATE(45),
    [aux_sym__anoynymous_hyperlink_target_block_repeat1] = STATE(46),
    [aux_sym__directive_block_repeat1] = STATE(47),
    [aux_sym__substitution_definition_block_repeat1] = STATE(48),
    [aux_sym__comment_block_repeat1] = STATE(49),
    [ts_builtin_sym_end] = ACTIONS(39),
    [aux_sym__enumerated_list_item_token1] = ACTIONS(41),
    [aux_sym_field_token1] = ACTIONS(44),
    [aux_sym_option_list_item_token1] = ACTIONS(47),
    [anon_sym_PIPE] = ACTIONS(50),
    [aux_sym__single_line_block_token1] = ACTIONS(53),
    [aux_sym_footnote_token1] = ACTIONS(56),
    [aux_sym_citation_token1] = ACTIONS(59),
    [aux_sym_target_token1] = ACTIONS(62),
    [anon_sym___] = ACTIONS(65),
    [aux_sym_directive_token1] = ACTIONS(68),
    [aux_sym_substitution_definition_token1] = ACTIONS(71),
    [anon_sym_DOT_DOT] = ACTIONS(74),
    [aux_sym__line_token1] = ACTIONS(77),
    [sym__newline] = ACTIONS(3),
    [sym__blankline] = ACTIONS(80),
    [sym__char_bullet] = ACTIONS(83),
    [sym__text] = ACTIONS(86),
    [sym_emphasis] = ACTIONS(86),
  },
  [3] = {
    [sym__body_elements] = STATE(2),
    [sym_paragraph] = STATE(98),
    [sym__list] = STATE(98),
    [sym_bullet_list] = STATE(98),
    [sym__bullet_list_item] = STATE(129),
    [sym_enumerated_list] = STATE(98),
    [sym__enumerated_list_item] = STATE(97),
    [sym_field_list] = STATE(98),
    [sym_field] = STATE(105),
    [sym_option_list] = STATE(98),
    [sym_option_list_item] = STATE(106),
    [sym_line_block] = STATE(98),
    [sym__single_line_block] = STATE(107),
    [sym__markup_block] = STATE(98),
    [sym__footnote_block] = STATE(98),
    [sym_footnote] = STATE(108),
    [sym__citation_block] = STATE(98),
    [sym_citation] = STATE(109),
    [sym__hyperlink_target_block] = STATE(98),
    [sym_target] = STATE(110),
    [sym__anoynymous_hyperlink_target_block] = STATE(98),
    [sym__anonymous_target] = STATE(111),
    [sym__directive_block] = STATE(98),
    [sym_directive] = STATE(112),
    [sym__substitution_definition_block] = STATE(98),
    [sym_substitution_definition] = STATE(113),
    [sym__comment_block] = STATE(98),
    [sym_comment] = STATE(114),
    [aux_sym__line] = STATE(9),
    [sym__inline_markup] = STATE(9),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_paragraph_repeat1] = STATE(8),
    [aux_sym_bullet_list_repeat1] = STATE(39),
    [aux_sym_enumerated_list_repeat1] = STATE(40),
    [aux_sym_field_list_repeat1] = STATE(41),
    [aux_sym_option_list_repeat1] = STATE(42),
    [aux_sym_line_block_repeat1] = STATE(25),
    [aux_sym__footnote_block_repeat1] = STATE(43),
    [aux_sym__citation_block_repeat1] = STATE(44),
    [aux_sym__hyperlink_target_block_repeat1] = STATE(45),
    [aux_sym__anoynymous_hyperlink_target_block_repeat1] = STATE(46),
    [aux_sym__directive_block_repeat1] = STATE(47),
    [aux_sym__substitution_definition_block_repeat1] = STATE(48),
    [aux_sym__comment_block_repeat1] = STATE(49),
    [ts_builtin_sym_end] = ACTIONS(89),
    [aux_sym__enumerated_list_item_token1] = ACTIONS(7),
    [aux_sym_field_token1] = ACTIONS(9),
    [aux_sym_option_list_item_token1] = ACTIONS(11),
    [anon_sym_PIPE] = ACTIONS(13),
    [aux_sym__single_line_block_token1] = ACTIONS(15),
    [aux_sym_footnote_token1] = ACTIONS(17),
    [aux_sym_citation_token1] = ACTIONS(19),
    [aux_sym_target_token1] = ACTIONS(21),
    [anon_sym___] = ACTIONS(23),
    [aux_sym_directive_token1] = ACTIONS(25),
    [aux_sym_substitution_definition_token1] = ACTIONS(27),
    [anon_sym_DOT_DOT] = ACTIONS(29),
    [aux_sym__line_token1] = ACTIONS(31),
    [sym__newline] = ACTIONS(3),
    [sym__blankline] = ACTIONS(91),
    [sym__char_bullet] = ACTIONS(35),
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
      sym__text,
      sym_emphasis,
      ts_builtin_sym_end,
      aux_sym__enumerated_list_item_token1,
      aux_sym_field_token1,
      aux_sym_option_list_item_token1,
      aux_sym__single_line_block_token1,
      aux_sym_footnote_token1,
      aux_sym_target_token1,
      anon_sym___,
      aux_sym_directive_token1,
      aux_sym_substitution_definition_token1,
  [26] = 3,
    ACTIONS(99), 2,
      sym__newline,
      sym__blankline,
    STATE(6), 2,
      aux_sym__line,
      sym__inline_markup,
    ACTIONS(97), 3,
      sym__text,
      sym_emphasis,
      aux_sym__line_token1,
  [40] = 3,
    ACTIONS(104), 2,
      sym__newline,
      sym__blankline,
    STATE(6), 2,
      aux_sym__line,
      sym__inline_markup,
    ACTIONS(101), 3,
      sym__text,
      sym_emphasis,
      aux_sym__line_token1,
  [54] = 4,
    ACTIONS(3), 1,
      sym__newline,
    STATE(7), 1,
      aux_sym_paragraph_repeat1,
    STATE(14), 2,
      aux_sym__line,
      sym__inline_markup,
    ACTIONS(106), 3,
      sym__text,
      sym_emphasis,
      aux_sym__line_token1,
  [70] = 4,
    ACTIONS(3), 1,
      sym__newline,
    STATE(7), 1,
      aux_sym_paragraph_repeat1,
    STATE(10), 2,
      aux_sym__line,
      sym__inline_markup,
    ACTIONS(109), 3,
      sym__text,
      sym_emphasis,
      aux_sym__line_token1,
  [86] = 4,
    ACTIONS(111), 1,
      sym__newline,
    ACTIONS(113), 1,
      sym__blankline,
    STATE(6), 2,
      aux_sym__line,
      sym__inline_markup,
    ACTIONS(97), 3,
      sym__text,
      sym_emphasis,
      aux_sym__line_token1,
  [102] = 4,
    ACTIONS(111), 1,
      sym__newline,
    ACTIONS(115), 1,
      sym__blankline,
    STATE(6), 2,
      aux_sym__line,
      sym__inline_markup,
    ACTIONS(97), 3,
      sym__text,
      sym_emphasis,
      aux_sym__line_token1,
  [118] = 3,
    ACTIONS(104), 1,
      sym__newline,
    STATE(11), 2,
      aux_sym__line,
      sym__inline_markup,
    ACTIONS(117), 3,
      sym__text,
      sym_emphasis,
      aux_sym__line_token1,
  [131] = 2,
    ACTIONS(122), 2,
      sym__newline,
      sym__blankline,
    ACTIONS(120), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [142] = 2,
    ACTIONS(126), 2,
      sym__newline,
      sym__blankline,
    ACTIONS(124), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [153] = 3,
    ACTIONS(111), 1,
      sym__newline,
    STATE(11), 2,
      aux_sym__line,
      sym__inline_markup,
    ACTIONS(128), 3,
      sym__text,
      sym_emphasis,
      aux_sym__line_token1,
  [166] = 3,
    ACTIONS(3), 1,
      sym__newline,
    STATE(16), 2,
      aux_sym__line,
      sym__inline_markup,
    ACTIONS(130), 3,
      sym__text,
      sym_emphasis,
      aux_sym__line_token1,
  [179] = 3,
    ACTIONS(99), 1,
      sym__newline,
    STATE(11), 2,
      aux_sym__line,
      sym__inline_markup,
    ACTIONS(128), 3,
      sym__text,
      sym_emphasis,
      aux_sym__line_token1,
  [192] = 3,
    ACTIONS(3), 1,
      sym__newline,
    STATE(5), 2,
      aux_sym__line,
      sym__inline_markup,
    ACTIONS(132), 3,
      sym__text,
      sym_emphasis,
      aux_sym__line_token1,
  [205] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(134), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [215] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(136), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [225] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(138), 1,
      anon_sym_PIPE,
    ACTIONS(141), 1,
      aux_sym__single_line_block_token1,
    STATE(20), 1,
      aux_sym_line_block_repeat1,
    STATE(146), 1,
      sym__single_line_block,
  [241] = 2,
    ACTIONS(126), 1,
      sym__newline,
    ACTIONS(144), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [251] = 2,
    ACTIONS(122), 1,
      sym__newline,
    ACTIONS(146), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [261] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(148), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [271] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(150), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [281] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(15), 1,
      aux_sym__single_line_block_token1,
    ACTIONS(152), 1,
      anon_sym_PIPE,
    STATE(20), 1,
      aux_sym_line_block_repeat1,
    STATE(103), 1,
      sym__single_line_block,
  [297] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(154), 1,
      sym__char_bullet,
    STATE(26), 1,
      aux_sym_bullet_list_repeat1,
    STATE(150), 1,
      sym__bullet_list_item,
  [310] = 3,
    ACTIONS(157), 1,
      aux_sym__enumerated_list_item_token2,
    STATE(33), 1,
      aux_sym__enumerated_list_item_repeat1,
    ACTIONS(159), 2,
      sym__newline,
      sym__blankline,
  [321] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(161), 1,
      aux_sym_directive_token1,
    STATE(28), 1,
      aux_sym__directive_block_repeat1,
    STATE(141), 1,
      sym_directive,
  [334] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(164), 1,
      anon_sym___,
    STATE(29), 1,
      aux_sym__anoynymous_hyperlink_target_block_repeat1,
    STATE(142), 1,
      sym__anonymous_target,
  [347] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(167), 1,
      aux_sym_target_token1,
    STATE(30), 1,
      aux_sym__hyperlink_target_block_repeat1,
    STATE(143), 1,
      sym_target,
  [360] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(170), 1,
      anon_sym_DOT_DOT,
    STATE(31), 1,
      aux_sym__comment_block_repeat1,
    STATE(139), 1,
      sym_comment,
  [373] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(173), 1,
      aux_sym_citation_token1,
    STATE(32), 1,
      aux_sym__citation_block_repeat1,
    STATE(144), 1,
      sym_citation,
  [386] = 3,
    ACTIONS(176), 1,
      aux_sym__enumerated_list_item_token2,
    STATE(33), 1,
      aux_sym__enumerated_list_item_repeat1,
    ACTIONS(179), 2,
      sym__newline,
      sym__blankline,
  [397] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(181), 1,
      aux_sym_footnote_token1,
    STATE(34), 1,
      aux_sym__footnote_block_repeat1,
    STATE(145), 1,
      sym_footnote,
  [410] = 3,
    ACTIONS(157), 1,
      aux_sym__enumerated_list_item_token2,
    STATE(33), 1,
      aux_sym__enumerated_list_item_repeat1,
    ACTIONS(184), 2,
      sym__newline,
      sym__blankline,
  [421] = 3,
    ACTIONS(157), 1,
      aux_sym__enumerated_list_item_token2,
    STATE(33), 1,
      aux_sym__enumerated_list_item_repeat1,
    ACTIONS(186), 2,
      sym__newline,
      sym__blankline,
  [432] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(188), 1,
      aux_sym_option_list_item_token1,
    STATE(37), 1,
      aux_sym_option_list_repeat1,
    STATE(147), 1,
      sym_option_list_item,
  [445] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(191), 1,
      aux_sym_field_token1,
    STATE(38), 1,
      aux_sym_field_list_repeat1,
    STATE(148), 1,
      sym_field,
  [458] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(35), 1,
      sym__char_bullet,
    STATE(26), 1,
      aux_sym_bullet_list_repeat1,
    STATE(121), 1,
      sym__bullet_list_item,
  [471] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(7), 1,
      aux_sym__enumerated_list_item_token1,
    STATE(56), 1,
      aux_sym_enumerated_list_repeat1,
    STATE(120), 1,
      sym__enumerated_list_item,
  [484] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(9), 1,
      aux_sym_field_token1,
    STATE(38), 1,
      aux_sym_field_list_repeat1,
    STATE(117), 1,
      sym_field,
  [497] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(11), 1,
      aux_sym_option_list_item_token1,
    STATE(37), 1,
      aux_sym_option_list_repeat1,
    STATE(116), 1,
      sym_option_list_item,
  [510] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(17), 1,
      aux_sym_footnote_token1,
    STATE(34), 1,
      aux_sym__footnote_block_repeat1,
    STATE(102), 1,
      sym_footnote,
  [523] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(194), 1,
      aux_sym_citation_token1,
    STATE(32), 1,
      aux_sym__citation_block_repeat1,
    STATE(100), 1,
      sym_citation,
  [536] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(21), 1,
      aux_sym_target_token1,
    STATE(30), 1,
      aux_sym__hyperlink_target_block_repeat1,
    STATE(99), 1,
      sym_target,
  [549] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(23), 1,
      anon_sym___,
    STATE(29), 1,
      aux_sym__anoynymous_hyperlink_target_block_repeat1,
    STATE(135), 1,
      sym__anonymous_target,
  [562] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(25), 1,
      aux_sym_directive_token1,
    STATE(28), 1,
      aux_sym__directive_block_repeat1,
    STATE(95), 1,
      sym_directive,
  [575] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(27), 1,
      aux_sym_substitution_definition_token1,
    STATE(57), 1,
      aux_sym__substitution_definition_block_repeat1,
    STATE(94), 1,
      sym_substitution_definition,
  [588] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(196), 1,
      anon_sym_DOT_DOT,
    STATE(31), 1,
      aux_sym__comment_block_repeat1,
    STATE(96), 1,
      sym_comment,
  [601] = 3,
    ACTIONS(157), 1,
      aux_sym__enumerated_list_item_token2,
    STATE(33), 1,
      aux_sym__enumerated_list_item_repeat1,
    ACTIONS(198), 2,
      sym__newline,
      sym__blankline,
  [612] = 3,
    ACTIONS(157), 1,
      aux_sym__enumerated_list_item_token2,
    STATE(33), 1,
      aux_sym__enumerated_list_item_repeat1,
    ACTIONS(200), 2,
      sym__newline,
      sym__blankline,
  [623] = 3,
    ACTIONS(157), 1,
      aux_sym__enumerated_list_item_token2,
    STATE(33), 1,
      aux_sym__enumerated_list_item_repeat1,
    ACTIONS(202), 2,
      sym__newline,
      sym__blankline,
  [634] = 3,
    ACTIONS(157), 1,
      aux_sym__enumerated_list_item_token2,
    STATE(33), 1,
      aux_sym__enumerated_list_item_repeat1,
    ACTIONS(204), 2,
      sym__newline,
      sym__blankline,
  [645] = 3,
    ACTIONS(157), 1,
      aux_sym__enumerated_list_item_token2,
    STATE(33), 1,
      aux_sym__enumerated_list_item_repeat1,
    ACTIONS(206), 2,
      sym__newline,
      sym__blankline,
  [656] = 3,
    ACTIONS(157), 1,
      aux_sym__enumerated_list_item_token2,
    STATE(33), 1,
      aux_sym__enumerated_list_item_repeat1,
    ACTIONS(208), 2,
      sym__newline,
      sym__blankline,
  [667] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(210), 1,
      aux_sym__enumerated_list_item_token1,
    STATE(56), 1,
      aux_sym_enumerated_list_repeat1,
    STATE(149), 1,
      sym__enumerated_list_item,
  [680] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(213), 1,
      aux_sym_substitution_definition_token1,
    STATE(57), 1,
      aux_sym__substitution_definition_block_repeat1,
    STATE(140), 1,
      sym_substitution_definition,
  [693] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(216), 3,
      sym__text,
      sym_emphasis,
      aux_sym__line_token1,
  [702] = 2,
    ACTIONS(218), 1,
      aux_sym_target_token2,
    ACTIONS(220), 2,
      sym__newline,
      sym__blankline,
  [710] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(222), 1,
      aux_sym__enumerated_list_item_token2,
    STATE(67), 1,
      aux_sym__enumerated_list_item_repeat1,
  [720] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(224), 1,
      aux_sym__enumerated_list_item_token2,
    STATE(36), 1,
      aux_sym__enumerated_list_item_repeat1,
  [730] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(226), 1,
      aux_sym__enumerated_list_item_token2,
    STATE(54), 1,
      aux_sym__enumerated_list_item_repeat1,
  [740] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(228), 1,
      aux_sym__enumerated_list_item_token2,
    STATE(85), 1,
      aux_sym__enumerated_list_item_repeat1,
  [750] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(230), 1,
      aux_sym__enumerated_list_item_token2,
    STATE(88), 1,
      aux_sym__enumerated_list_item_repeat1,
  [760] = 3,
    ACTIONS(208), 1,
      sym__newline,
    ACTIONS(232), 1,
      aux_sym__enumerated_list_item_token2,
    STATE(66), 1,
      aux_sym__enumerated_list_item_repeat1,
  [770] = 3,
    ACTIONS(179), 1,
      sym__newline,
    ACTIONS(234), 1,
      aux_sym__enumerated_list_item_token2,
    STATE(66), 1,
      aux_sym__enumerated_list_item_repeat1,
  [780] = 3,
    ACTIONS(206), 1,
      sym__newline,
    ACTIONS(232), 1,
      aux_sym__enumerated_list_item_token2,
    STATE(66), 1,
      aux_sym__enumerated_list_item_repeat1,
  [790] = 3,
    ACTIONS(204), 1,
      sym__newline,
    ACTIONS(232), 1,
      aux_sym__enumerated_list_item_token2,
    STATE(66), 1,
      aux_sym__enumerated_list_item_repeat1,
  [800] = 3,
    ACTIONS(202), 1,
      sym__newline,
    ACTIONS(232), 1,
      aux_sym__enumerated_list_item_token2,
    STATE(66), 1,
      aux_sym__enumerated_list_item_repeat1,
  [810] = 3,
    ACTIONS(200), 1,
      sym__newline,
    ACTIONS(232), 1,
      aux_sym__enumerated_list_item_token2,
    STATE(66), 1,
      aux_sym__enumerated_list_item_repeat1,
  [820] = 3,
    ACTIONS(198), 1,
      sym__newline,
    ACTIONS(232), 1,
      aux_sym__enumerated_list_item_token2,
    STATE(66), 1,
      aux_sym__enumerated_list_item_repeat1,
  [830] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(237), 1,
      aux_sym__enumerated_list_item_token2,
    STATE(55), 1,
      aux_sym__enumerated_list_item_repeat1,
  [840] = 2,
    ACTIONS(239), 1,
      aux_sym_target_token2,
    ACTIONS(241), 2,
      sym__newline,
      sym__blankline,
  [848] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(243), 1,
      aux_sym__enumerated_list_item_token2,
    STATE(35), 1,
      aux_sym__enumerated_list_item_repeat1,
  [858] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(245), 1,
      anon_sym_PIPE,
    ACTIONS(247), 1,
      aux_sym__single_line_block_token1,
  [868] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(249), 1,
      aux_sym__enumerated_list_item_token2,
    STATE(53), 1,
      aux_sym__enumerated_list_item_repeat1,
  [878] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(251), 1,
      aux_sym__enumerated_list_item_token2,
    STATE(70), 1,
      aux_sym__enumerated_list_item_repeat1,
  [888] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(253), 1,
      aux_sym__enumerated_list_item_token2,
    STATE(27), 1,
      aux_sym__enumerated_list_item_repeat1,
  [898] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(255), 1,
      aux_sym__enumerated_list_item_token2,
    STATE(81), 1,
      aux_sym__enumerated_list_item_repeat1,
  [908] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(257), 1,
      aux_sym__embed_directive_token1,
    STATE(132), 1,
      sym__embed_directive,
  [918] = 3,
    ACTIONS(159), 1,
      sym__newline,
    ACTIONS(232), 1,
      aux_sym__enumerated_list_item_token2,
    STATE(66), 1,
      aux_sym__enumerated_list_item_repeat1,
  [928] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(259), 1,
      aux_sym__enumerated_list_item_token2,
    STATE(52), 1,
      aux_sym__enumerated_list_item_repeat1,
  [938] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(261), 1,
      aux_sym__enumerated_list_item_token2,
    STATE(50), 1,
      aux_sym__enumerated_list_item_repeat1,
  [948] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(263), 1,
      aux_sym__enumerated_list_item_token2,
    STATE(71), 1,
      aux_sym__enumerated_list_item_repeat1,
  [958] = 3,
    ACTIONS(186), 1,
      sym__newline,
    ACTIONS(232), 1,
      aux_sym__enumerated_list_item_token2,
    STATE(66), 1,
      aux_sym__enumerated_list_item_repeat1,
  [968] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(265), 1,
      aux_sym__enumerated_list_item_token2,
    STATE(69), 1,
      aux_sym__enumerated_list_item_repeat1,
  [978] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(267), 1,
      aux_sym__enumerated_list_item_token2,
    STATE(68), 1,
      aux_sym__enumerated_list_item_repeat1,
  [988] = 3,
    ACTIONS(184), 1,
      sym__newline,
    ACTIONS(232), 1,
      aux_sym__enumerated_list_item_token2,
    STATE(66), 1,
      aux_sym__enumerated_list_item_repeat1,
  [998] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(269), 1,
      aux_sym__enumerated_list_item_token2,
    STATE(65), 1,
      aux_sym__enumerated_list_item_repeat1,
  [1008] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(271), 1,
      aux_sym__embed_directive_token1,
    STATE(136), 1,
      sym__embed_directive,
  [1018] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(273), 1,
      aux_sym__enumerated_list_item_token2,
    STATE(51), 1,
      aux_sym__enumerated_list_item_repeat1,
  [1028] = 1,
    ACTIONS(275), 2,
      sym__newline,
      sym__blankline,
  [1033] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(277), 1,
      sym__char_bullet,
  [1040] = 2,
    ACTIONS(279), 1,
      sym__newline,
    ACTIONS(281), 1,
      sym__blankline,
  [1047] = 2,
    ACTIONS(283), 1,
      sym__newline,
    ACTIONS(285), 1,
      sym__blankline,
  [1054] = 2,
    ACTIONS(287), 1,
      sym__newline,
    ACTIONS(289), 1,
      sym__blankline,
  [1061] = 2,
    ACTIONS(291), 1,
      sym__newline,
    ACTIONS(293), 1,
      sym__blankline,
  [1068] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(295), 1,
      sym__blankline,
  [1075] = 2,
    ACTIONS(297), 1,
      sym__newline,
    ACTIONS(299), 1,
      sym__blankline,
  [1082] = 2,
    ACTIONS(301), 1,
      sym__newline,
    ACTIONS(303), 1,
      sym__blankline,
  [1089] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(305), 1,
      ts_builtin_sym_end,
  [1096] = 2,
    ACTIONS(307), 1,
      sym__newline,
    ACTIONS(309), 1,
      sym__blankline,
  [1103] = 2,
    ACTIONS(311), 1,
      sym__newline,
    ACTIONS(313), 1,
      sym__blankline,
  [1110] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(315), 1,
      anon_sym_COLON_COLON,
  [1117] = 2,
    ACTIONS(317), 1,
      sym__newline,
    ACTIONS(319), 1,
      sym__blankline,
  [1124] = 2,
    ACTIONS(321), 1,
      sym__newline,
    ACTIONS(323), 1,
      sym__blankline,
  [1131] = 2,
    ACTIONS(311), 1,
      sym__newline,
    ACTIONS(325), 1,
      sym__blankline,
  [1138] = 2,
    ACTIONS(307), 1,
      sym__newline,
    ACTIONS(327), 1,
      sym__blankline,
  [1145] = 2,
    ACTIONS(301), 1,
      sym__newline,
    ACTIONS(329), 1,
      sym__blankline,
  [1152] = 2,
    ACTIONS(297), 1,
      sym__newline,
    ACTIONS(331), 1,
      sym__blankline,
  [1159] = 2,
    ACTIONS(333), 1,
      sym__newline,
    ACTIONS(335), 1,
      sym__blankline,
  [1166] = 2,
    ACTIONS(283), 1,
      sym__newline,
    ACTIONS(337), 1,
      sym__blankline,
  [1173] = 2,
    ACTIONS(279), 1,
      sym__newline,
    ACTIONS(339), 1,
      sym__blankline,
  [1180] = 2,
    ACTIONS(287), 1,
      sym__newline,
    ACTIONS(341), 1,
      sym__blankline,
  [1187] = 1,
    ACTIONS(343), 2,
      sym__newline,
      sym__blankline,
  [1192] = 2,
    ACTIONS(321), 1,
      sym__newline,
    ACTIONS(345), 1,
      sym__blankline,
  [1199] = 2,
    ACTIONS(317), 1,
      sym__newline,
    ACTIONS(347), 1,
      sym__blankline,
  [1206] = 2,
    ACTIONS(241), 1,
      sym__newline,
    ACTIONS(349), 1,
      aux_sym_target_token2,
  [1213] = 2,
    ACTIONS(220), 1,
      sym__newline,
    ACTIONS(351), 1,
      aux_sym_target_token2,
  [1220] = 2,
    ACTIONS(291), 1,
      sym__newline,
    ACTIONS(353), 1,
      sym__blankline,
  [1227] = 2,
    ACTIONS(355), 1,
      sym__newline,
    ACTIONS(357), 1,
      sym__blankline,
  [1234] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(359), 1,
      anon_sym_DOT_DOT,
  [1241] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(361), 1,
      aux_sym_substitution_definition_token1,
  [1248] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(363), 1,
      aux_sym_directive_token1,
  [1255] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(365), 1,
      anon_sym___,
  [1262] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(367), 1,
      aux_sym_target_token1,
  [1269] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(369), 1,
      aux_sym_citation_token1,
  [1276] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(371), 1,
      aux_sym_footnote_token1,
  [1283] = 2,
    ACTIONS(355), 1,
      sym__newline,
    ACTIONS(373), 1,
      sym__blankline,
  [1290] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(375), 1,
      anon_sym_COLON_COLON,
  [1297] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(377), 1,
      aux_sym_option_list_item_token1,
  [1304] = 1,
    ACTIONS(379), 2,
      sym__newline,
      sym__blankline,
  [1309] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(381), 1,
      aux_sym_field_token1,
  [1316] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(383), 1,
      aux_sym__enumerated_list_item_token1,
  [1323] = 2,
    ACTIONS(333), 1,
      sym__newline,
    ACTIONS(385), 1,
      sym__blankline,
  [1330] = 1,
    ACTIONS(379), 1,
      sym__newline,
  [1334] = 1,
    ACTIONS(275), 1,
      sym__newline,
  [1338] = 1,
    ACTIONS(343), 1,
      sym__newline,
  [1342] = 1,
    ACTIONS(287), 1,
      sym__newline,
  [1346] = 1,
    ACTIONS(279), 1,
      sym__newline,
  [1350] = 1,
    ACTIONS(283), 1,
      sym__newline,
  [1354] = 1,
    ACTIONS(333), 1,
      sym__newline,
  [1358] = 1,
    ACTIONS(297), 1,
      sym__newline,
  [1362] = 1,
    ACTIONS(301), 1,
      sym__newline,
  [1366] = 1,
    ACTIONS(307), 1,
      sym__newline,
  [1370] = 1,
    ACTIONS(311), 1,
      sym__newline,
  [1374] = 1,
    ACTIONS(321), 1,
      sym__newline,
  [1378] = 1,
    ACTIONS(317), 1,
      sym__newline,
  [1382] = 1,
    ACTIONS(291), 1,
      sym__newline,
  [1386] = 1,
    ACTIONS(355), 1,
      sym__newline,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 26,
  [SMALL_STATE(6)] = 40,
  [SMALL_STATE(7)] = 54,
  [SMALL_STATE(8)] = 70,
  [SMALL_STATE(9)] = 86,
  [SMALL_STATE(10)] = 102,
  [SMALL_STATE(11)] = 118,
  [SMALL_STATE(12)] = 131,
  [SMALL_STATE(13)] = 142,
  [SMALL_STATE(14)] = 153,
  [SMALL_STATE(15)] = 166,
  [SMALL_STATE(16)] = 179,
  [SMALL_STATE(17)] = 192,
  [SMALL_STATE(18)] = 205,
  [SMALL_STATE(19)] = 215,
  [SMALL_STATE(20)] = 225,
  [SMALL_STATE(21)] = 241,
  [SMALL_STATE(22)] = 251,
  [SMALL_STATE(23)] = 261,
  [SMALL_STATE(24)] = 271,
  [SMALL_STATE(25)] = 281,
  [SMALL_STATE(26)] = 297,
  [SMALL_STATE(27)] = 310,
  [SMALL_STATE(28)] = 321,
  [SMALL_STATE(29)] = 334,
  [SMALL_STATE(30)] = 347,
  [SMALL_STATE(31)] = 360,
  [SMALL_STATE(32)] = 373,
  [SMALL_STATE(33)] = 386,
  [SMALL_STATE(34)] = 397,
  [SMALL_STATE(35)] = 410,
  [SMALL_STATE(36)] = 421,
  [SMALL_STATE(37)] = 432,
  [SMALL_STATE(38)] = 445,
  [SMALL_STATE(39)] = 458,
  [SMALL_STATE(40)] = 471,
  [SMALL_STATE(41)] = 484,
  [SMALL_STATE(42)] = 497,
  [SMALL_STATE(43)] = 510,
  [SMALL_STATE(44)] = 523,
  [SMALL_STATE(45)] = 536,
  [SMALL_STATE(46)] = 549,
  [SMALL_STATE(47)] = 562,
  [SMALL_STATE(48)] = 575,
  [SMALL_STATE(49)] = 588,
  [SMALL_STATE(50)] = 601,
  [SMALL_STATE(51)] = 612,
  [SMALL_STATE(52)] = 623,
  [SMALL_STATE(53)] = 634,
  [SMALL_STATE(54)] = 645,
  [SMALL_STATE(55)] = 656,
  [SMALL_STATE(56)] = 667,
  [SMALL_STATE(57)] = 680,
  [SMALL_STATE(58)] = 693,
  [SMALL_STATE(59)] = 702,
  [SMALL_STATE(60)] = 710,
  [SMALL_STATE(61)] = 720,
  [SMALL_STATE(62)] = 730,
  [SMALL_STATE(63)] = 740,
  [SMALL_STATE(64)] = 750,
  [SMALL_STATE(65)] = 760,
  [SMALL_STATE(66)] = 770,
  [SMALL_STATE(67)] = 780,
  [SMALL_STATE(68)] = 790,
  [SMALL_STATE(69)] = 800,
  [SMALL_STATE(70)] = 810,
  [SMALL_STATE(71)] = 820,
  [SMALL_STATE(72)] = 830,
  [SMALL_STATE(73)] = 840,
  [SMALL_STATE(74)] = 848,
  [SMALL_STATE(75)] = 858,
  [SMALL_STATE(76)] = 868,
  [SMALL_STATE(77)] = 878,
  [SMALL_STATE(78)] = 888,
  [SMALL_STATE(79)] = 898,
  [SMALL_STATE(80)] = 908,
  [SMALL_STATE(81)] = 918,
  [SMALL_STATE(82)] = 928,
  [SMALL_STATE(83)] = 938,
  [SMALL_STATE(84)] = 948,
  [SMALL_STATE(85)] = 958,
  [SMALL_STATE(86)] = 968,
  [SMALL_STATE(87)] = 978,
  [SMALL_STATE(88)] = 988,
  [SMALL_STATE(89)] = 998,
  [SMALL_STATE(90)] = 1008,
  [SMALL_STATE(91)] = 1018,
  [SMALL_STATE(92)] = 1028,
  [SMALL_STATE(93)] = 1033,
  [SMALL_STATE(94)] = 1040,
  [SMALL_STATE(95)] = 1047,
  [SMALL_STATE(96)] = 1054,
  [SMALL_STATE(97)] = 1061,
  [SMALL_STATE(98)] = 1068,
  [SMALL_STATE(99)] = 1075,
  [SMALL_STATE(100)] = 1082,
  [SMALL_STATE(101)] = 1089,
  [SMALL_STATE(102)] = 1096,
  [SMALL_STATE(103)] = 1103,
  [SMALL_STATE(104)] = 1110,
  [SMALL_STATE(105)] = 1117,
  [SMALL_STATE(106)] = 1124,
  [SMALL_STATE(107)] = 1131,
  [SMALL_STATE(108)] = 1138,
  [SMALL_STATE(109)] = 1145,
  [SMALL_STATE(110)] = 1152,
  [SMALL_STATE(111)] = 1159,
  [SMALL_STATE(112)] = 1166,
  [SMALL_STATE(113)] = 1173,
  [SMALL_STATE(114)] = 1180,
  [SMALL_STATE(115)] = 1187,
  [SMALL_STATE(116)] = 1192,
  [SMALL_STATE(117)] = 1199,
  [SMALL_STATE(118)] = 1206,
  [SMALL_STATE(119)] = 1213,
  [SMALL_STATE(120)] = 1220,
  [SMALL_STATE(121)] = 1227,
  [SMALL_STATE(122)] = 1234,
  [SMALL_STATE(123)] = 1241,
  [SMALL_STATE(124)] = 1248,
  [SMALL_STATE(125)] = 1255,
  [SMALL_STATE(126)] = 1262,
  [SMALL_STATE(127)] = 1269,
  [SMALL_STATE(128)] = 1276,
  [SMALL_STATE(129)] = 1283,
  [SMALL_STATE(130)] = 1290,
  [SMALL_STATE(131)] = 1297,
  [SMALL_STATE(132)] = 1304,
  [SMALL_STATE(133)] = 1309,
  [SMALL_STATE(134)] = 1316,
  [SMALL_STATE(135)] = 1323,
  [SMALL_STATE(136)] = 1330,
  [SMALL_STATE(137)] = 1334,
  [SMALL_STATE(138)] = 1338,
  [SMALL_STATE(139)] = 1342,
  [SMALL_STATE(140)] = 1346,
  [SMALL_STATE(141)] = 1350,
  [SMALL_STATE(142)] = 1354,
  [SMALL_STATE(143)] = 1358,
  [SMALL_STATE(144)] = 1362,
  [SMALL_STATE(145)] = 1366,
  [SMALL_STATE(146)] = 1370,
  [SMALL_STATE(147)] = 1374,
  [SMALL_STATE(148)] = 1378,
  [SMALL_STATE(149)] = 1382,
  [SMALL_STATE(150)] = 1386,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(83),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(91),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(82),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(107),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(76),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(62),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(72),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(73),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(59),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(13),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(80),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(12),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(9),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(2),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(19),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(9),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__body_elements, 2),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__body_elements, 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bullet_list_item, 3),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__line, 2), SHIFT_REPEAT(6),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__line, 2),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(14),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__line, 2), SHIFT_REPEAT(11),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_block_repeat1, 2), SHIFT_REPEAT(146),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_block_repeat1, 2), SHIFT_REPEAT(87),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bullet_list_repeat1, 2), SHIFT_REPEAT(23),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__embed_directive, 4),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__directive_block_repeat1, 2), SHIFT_REPEAT(21),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__anoynymous_hyperlink_target_block_repeat1, 2), SHIFT_REPEAT(119),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hyperlink_target_block_repeat1, 2), SHIFT_REPEAT(118),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_block_repeat1, 2), SHIFT_REPEAT(22),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__citation_block_repeat1, 2), SHIFT_REPEAT(89),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__enumerated_list_item_repeat1, 2), SHIFT_REPEAT(33),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__enumerated_list_item_repeat1, 2),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__footnote_block_repeat1, 2), SHIFT_REPEAT(60),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_option_list_repeat1, 2), SHIFT_REPEAT(86),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_list_repeat1, 2), SHIFT_REPEAT(77),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__enumerated_list_item, 2),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 2),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_list_item, 2),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_block, 2),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footnote, 2),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_citation, 2),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enumerated_list_repeat1, 2), SHIFT_REPEAT(84),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__substitution_definition_block_repeat1, 2), SHIFT_REPEAT(90),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__anonymous_target, 1),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__enumerated_list_item_repeat1, 2), SHIFT_REPEAT(66),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 1),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_line_block_repeat1, 2),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_block_repeat1, 2),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__anonymous_target, 2),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bullet_list_repeat1, 2),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__substitution_definition_block, 2),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directive_block, 2),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_block, 2),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumerated_list, 1),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hyperlink_target_block, 2),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__citation_block, 2),
  [305] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__footnote_block, 2),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_block, 2),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_list, 1),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_list, 1),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_block, 1),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__footnote_block, 1),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__citation_block, 1),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hyperlink_target_block, 1),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__anoynymous_hyperlink_target_block, 1),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directive_block, 1),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__substitution_definition_block, 1),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_block, 1),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 2),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_list, 2),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_list, 2),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumerated_list, 2),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bullet_list, 2),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__comment_block_repeat1, 2),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__substitution_definition_block_repeat1, 2),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__directive_block_repeat1, 2),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__anoynymous_hyperlink_target_block_repeat1, 2),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hyperlink_target_block_repeat1, 2),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__citation_block_repeat1, 2),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__footnote_block_repeat1, 2),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bullet_list, 1),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_option_list_repeat1, 2),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_substitution_definition, 2),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_list_repeat1, 2),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enumerated_list_repeat1, 2),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__anoynymous_hyperlink_target_block, 2),
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
