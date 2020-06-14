#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 149
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 74
#define ALIAS_COUNT 0
#define TOKEN_COUNT 27
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
  aux_sym__line_token1 = 22,
  sym__newline = 23,
  sym__blankline = 24,
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
  aux_sym__bullet_list_item_repeat1 = 62,
  aux_sym_enumerated_list_repeat1 = 63,
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
  [aux_sym__line_token1] = "_line_token1",
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
  [aux_sym__line] = "_line",
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
  [aux_sym__line_token1] = aux_sym__line_token1,
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
  [aux_sym__line] = aux_sym__line,
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
};

static TSSymbol ts_alias_sequences[1][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(62);
      if (lookahead == '\t') ADVANCE(79);
      if (lookahead == 11) ADVANCE(80);
      if (lookahead == '\f') ADVANCE(81);
      if (lookahead == ' ') ADVANCE(78);
      if (lookahead == '|') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(79);
      if (lookahead == 11) ADVANCE(80);
      if (lookahead == '\f') ADVANCE(81);
      if (lookahead == ' ') ADVANCE(78);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == ':') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
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
      if (lookahead == '+') ADVANCE(55);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '/') ADVANCE(55);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(87);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(86);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(44);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(44);
      if (lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'I' ||
          lookahead == 'L' ||
          lookahead == 'M' ||
          lookahead == 'V' ||
          lookahead == 'X') ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(44);
      if (lookahead == 'c' ||
          lookahead == 'd' ||
          lookahead == 'i' ||
          lookahead == 'l' ||
          lookahead == 'm' ||
          lookahead == 'v' ||
          lookahead == 'x') ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(50);
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
          lookahead == '_') ADVANCE(53);
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
      if (lookahead == ':') ADVANCE(85);
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(47);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == '[') ADVANCE(3);
      if (lookahead == '_') ADVANCE(31);
      if (lookahead == '|') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 24:
      if (lookahead == '[') ADVANCE(57);
      END_STATE();
    case 25:
      if (lookahead == ']') ADVANCE(48);
      END_STATE();
    case 26:
      if (lookahead == ']') ADVANCE(48);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 27:
      if (lookahead == ']') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 28:
      if (lookahead == ']') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == ']') ADVANCE(49);
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
          lookahead == ' ') ADVANCE(83);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(82);
      if (lookahead == '\r') ADVANCE(39);
      if (lookahead == '|') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 37:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(83);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(82);
      if (lookahead == '\r') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 38:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f') ADVANCE(45);
      if (lookahead == ' ') ADVANCE(46);
      if (lookahead == ',') ADVANCE(2);
      if (lookahead == '=') ADVANCE(56);
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
          lookahead == ' ') ADVANCE(64);
      if (lookahead == '-') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 43:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 44:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(65);
      END_STATE();
    case 45:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(67);
      END_STATE();
    case 46:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 47:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(66);
      END_STATE();
    case 48:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(71);
      END_STATE();
    case 49:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(72);
      END_STATE();
    case 50:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(24);
      END_STATE();
    case 51:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(59);
      if (lookahead == '.') ADVANCE(7);
      END_STATE();
    case 52:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(45);
      if (lookahead == ',') ADVANCE(2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 53:
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '_') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 54:
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '_') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 58:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 59:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(75);
      END_STATE();
    case 60:
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(22);
      END_STATE();
    case 61:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(34);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym__bullet_list_item_token1);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym__char_bullet);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym__enumerated_list_item_token1);
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
          lookahead == '_') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_TAB);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_3);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_substitution_definition_token1);
      if (lookahead == '|') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_substitution_definition_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym__embed_directive_token1);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '_') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(23);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (eof) ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(88);
      if (lookahead == '#') ADVANCE(8);
      if (lookahead == '*' ||
          lookahead == 8226 ||
          lookahead == 8227 ||
          lookahead == 8259) ADVANCE(41);
      if (lookahead == '+') ADVANCE(43);
      if (lookahead == '-') ADVANCE(42);
      if (lookahead == '.') ADVANCE(6);
      if (lookahead == '/') ADVANCE(55);
      if (lookahead == ':') ADVANCE(60);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == '|') ADVANCE(69);
      if (lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'I' ||
          lookahead == 'L' ||
          lookahead == 'M' ||
          lookahead == 'V' ||
          lookahead == 'X') ADVANCE(9);
      if (lookahead == 'c' ||
          lookahead == 'd' ||
          lookahead == 'i' ||
          lookahead == 'l' ||
          lookahead == 'm' ||
          lookahead == 'v' ||
          lookahead == 'x') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(8);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 89, .external_lex_state = 1},
  [2] = {.lex_state = 89, .external_lex_state = 1},
  [3] = {.lex_state = 89, .external_lex_state = 1},
  [4] = {.lex_state = 89, .external_lex_state = 1},
  [5] = {.lex_state = 89, .external_lex_state = 2},
  [6] = {.lex_state = 89, .external_lex_state = 2},
  [7] = {.lex_state = 89, .external_lex_state = 1},
  [8] = {.lex_state = 89, .external_lex_state = 1},
  [9] = {.lex_state = 89, .external_lex_state = 1},
  [10] = {.lex_state = 89, .external_lex_state = 2},
  [11] = {.lex_state = 89, .external_lex_state = 2},
  [12] = {.lex_state = 1, .external_lex_state = 3},
  [13] = {.lex_state = 1, .external_lex_state = 3},
  [14] = {.lex_state = 1, .external_lex_state = 4},
  [15] = {.lex_state = 1, .external_lex_state = 4},
  [16] = {.lex_state = 1, .external_lex_state = 4},
  [17] = {.lex_state = 1, .external_lex_state = 4},
  [18] = {.lex_state = 89, .external_lex_state = 4},
  [19] = {.lex_state = 89, .external_lex_state = 4},
  [20] = {.lex_state = 89, .external_lex_state = 4},
  [21] = {.lex_state = 58, .external_lex_state = 3},
  [22] = {.lex_state = 89, .external_lex_state = 4},
  [23] = {.lex_state = 89, .external_lex_state = 4},
  [24] = {.lex_state = 89, .external_lex_state = 4},
  [25] = {.lex_state = 1, .external_lex_state = 4},
  [26] = {.lex_state = 89, .external_lex_state = 4},
  [27] = {.lex_state = 51, .external_lex_state = 4},
  [28] = {.lex_state = 89, .external_lex_state = 4},
  [29] = {.lex_state = 58, .external_lex_state = 3},
  [30] = {.lex_state = 89, .external_lex_state = 4},
  [31] = {.lex_state = 58, .external_lex_state = 3},
  [32] = {.lex_state = 89, .external_lex_state = 4},
  [33] = {.lex_state = 58, .external_lex_state = 3},
  [34] = {.lex_state = 89, .external_lex_state = 2},
  [35] = {.lex_state = 58, .external_lex_state = 3},
  [36] = {.lex_state = 89, .external_lex_state = 4},
  [37] = {.lex_state = 89, .external_lex_state = 4},
  [38] = {.lex_state = 89, .external_lex_state = 4},
  [39] = {.lex_state = 89, .external_lex_state = 4},
  [40] = {.lex_state = 89, .external_lex_state = 4},
  [41] = {.lex_state = 89, .external_lex_state = 4},
  [42] = {.lex_state = 1, .external_lex_state = 4},
  [43] = {.lex_state = 89, .external_lex_state = 4},
  [44] = {.lex_state = 89, .external_lex_state = 4},
  [45] = {.lex_state = 89, .external_lex_state = 4},
  [46] = {.lex_state = 89, .external_lex_state = 4},
  [47] = {.lex_state = 51, .external_lex_state = 4},
  [48] = {.lex_state = 58, .external_lex_state = 3},
  [49] = {.lex_state = 58, .external_lex_state = 3},
  [50] = {.lex_state = 58, .external_lex_state = 3},
  [51] = {.lex_state = 58, .external_lex_state = 3},
  [52] = {.lex_state = 58, .external_lex_state = 3},
  [53] = {.lex_state = 58, .external_lex_state = 3},
  [54] = {.lex_state = 58, .external_lex_state = 4},
  [55] = {.lex_state = 58, .external_lex_state = 4},
  [56] = {.lex_state = 58, .external_lex_state = 4},
  [57] = {.lex_state = 58, .external_lex_state = 4},
  [58] = {.lex_state = 58, .external_lex_state = 4},
  [59] = {.lex_state = 58, .external_lex_state = 4},
  [60] = {.lex_state = 58, .external_lex_state = 4},
  [61] = {.lex_state = 58, .external_lex_state = 4},
  [62] = {.lex_state = 58, .external_lex_state = 4},
  [63] = {.lex_state = 58, .external_lex_state = 4},
  [64] = {.lex_state = 58, .external_lex_state = 4},
  [65] = {.lex_state = 89, .external_lex_state = 4},
  [66] = {.lex_state = 58, .external_lex_state = 4},
  [67] = {.lex_state = 58, .external_lex_state = 4},
  [68] = {.lex_state = 58, .external_lex_state = 4},
  [69] = {.lex_state = 58, .external_lex_state = 4},
  [70] = {.lex_state = 1, .external_lex_state = 4},
  [71] = {.lex_state = 58, .external_lex_state = 4},
  [72] = {.lex_state = 58, .external_lex_state = 4},
  [73] = {.lex_state = 58, .external_lex_state = 4},
  [74] = {.lex_state = 58, .external_lex_state = 4},
  [75] = {.lex_state = 58, .external_lex_state = 4},
  [76] = {.lex_state = 58, .external_lex_state = 4},
  [77] = {.lex_state = 58, .external_lex_state = 4},
  [78] = {.lex_state = 58, .external_lex_state = 4},
  [79] = {.lex_state = 58, .external_lex_state = 4},
  [80] = {.lex_state = 58, .external_lex_state = 4},
  [81] = {.lex_state = 58, .external_lex_state = 4},
  [82] = {.lex_state = 58, .external_lex_state = 4},
  [83] = {.lex_state = 51, .external_lex_state = 3},
  [84] = {.lex_state = 51, .external_lex_state = 3},
  [85] = {.lex_state = 58, .external_lex_state = 4},
  [86] = {.lex_state = 58, .external_lex_state = 4},
  [87] = {.lex_state = 58, .external_lex_state = 4},
  [88] = {.lex_state = 1, .external_lex_state = 4},
  [89] = {.lex_state = 58, .external_lex_state = 4},
  [90] = {.lex_state = 0, .external_lex_state = 3},
  [91] = {.lex_state = 0, .external_lex_state = 3},
  [92] = {.lex_state = 0, .external_lex_state = 3},
  [93] = {.lex_state = 0, .external_lex_state = 3},
  [94] = {.lex_state = 0, .external_lex_state = 3},
  [95] = {.lex_state = 0, .external_lex_state = 3},
  [96] = {.lex_state = 0, .external_lex_state = 3},
  [97] = {.lex_state = 0, .external_lex_state = 4},
  [98] = {.lex_state = 0, .external_lex_state = 3},
  [99] = {.lex_state = 0, .external_lex_state = 3},
  [100] = {.lex_state = 0, .external_lex_state = 3},
  [101] = {.lex_state = 0, .external_lex_state = 3},
  [102] = {.lex_state = 0, .external_lex_state = 3},
  [103] = {.lex_state = 1, .external_lex_state = 4},
  [104] = {.lex_state = 0, .external_lex_state = 3},
  [105] = {.lex_state = 0, .external_lex_state = 3},
  [106] = {.lex_state = 0, .external_lex_state = 3},
  [107] = {.lex_state = 0, .external_lex_state = 3},
  [108] = {.lex_state = 0, .external_lex_state = 3},
  [109] = {.lex_state = 0, .external_lex_state = 3},
  [110] = {.lex_state = 0, .external_lex_state = 3},
  [111] = {.lex_state = 0, .external_lex_state = 3},
  [112] = {.lex_state = 0, .external_lex_state = 3},
  [113] = {.lex_state = 0, .external_lex_state = 3},
  [114] = {.lex_state = 0, .external_lex_state = 3},
  [115] = {.lex_state = 51, .external_lex_state = 4},
  [116] = {.lex_state = 89, .external_lex_state = 4},
  [117] = {.lex_state = 51, .external_lex_state = 4},
  [118] = {.lex_state = 51, .external_lex_state = 4},
  [119] = {.lex_state = 89, .external_lex_state = 4},
  [120] = {.lex_state = 89, .external_lex_state = 4},
  [121] = {.lex_state = 89, .external_lex_state = 4},
  [122] = {.lex_state = 1, .external_lex_state = 4},
  [123] = {.lex_state = 89, .external_lex_state = 4},
  [124] = {.lex_state = 89, .external_lex_state = 4},
  [125] = {.lex_state = 89, .external_lex_state = 4},
  [126] = {.lex_state = 89, .external_lex_state = 4},
  [127] = {.lex_state = 89, .external_lex_state = 4},
  [128] = {.lex_state = 0, .external_lex_state = 3},
  [129] = {.lex_state = 0, .external_lex_state = 3},
  [130] = {.lex_state = 0, .external_lex_state = 3},
  [131] = {.lex_state = 0, .external_lex_state = 3},
  [132] = {.lex_state = 1, .external_lex_state = 4},
  [133] = {.lex_state = 0, .external_lex_state = 3},
  [134] = {.lex_state = 0, .external_lex_state = 4},
  [135] = {.lex_state = 0, .external_lex_state = 4},
  [136] = {.lex_state = 0, .external_lex_state = 4},
  [137] = {.lex_state = 0, .external_lex_state = 4},
  [138] = {.lex_state = 0, .external_lex_state = 4},
  [139] = {.lex_state = 0, .external_lex_state = 4},
  [140] = {.lex_state = 0, .external_lex_state = 4},
  [141] = {.lex_state = 0, .external_lex_state = 4},
  [142] = {.lex_state = 0, .external_lex_state = 4},
  [143] = {.lex_state = 0, .external_lex_state = 4},
  [144] = {.lex_state = 0, .external_lex_state = 4},
  [145] = {.lex_state = 0, .external_lex_state = 4},
  [146] = {.lex_state = 0, .external_lex_state = 4},
  [147] = {.lex_state = 0, .external_lex_state = 4},
  [148] = {.lex_state = 0, .external_lex_state = 4},
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
    [sym_document] = STATE(97),
    [sym__body_elements] = STATE(2),
    [sym_paragraph] = STATE(104),
    [sym__list] = STATE(104),
    [sym_bullet_list] = STATE(104),
    [sym__bullet_list_item] = STATE(105),
    [sym_enumerated_list] = STATE(104),
    [sym__enumerated_list_item] = STATE(106),
    [sym_field_list] = STATE(104),
    [sym_field] = STATE(107),
    [sym_option_list] = STATE(104),
    [sym_option_list_item] = STATE(108),
    [sym_line_block] = STATE(104),
    [sym__single_line_block] = STATE(109),
    [sym__markup_block] = STATE(104),
    [sym__footnote_block] = STATE(104),
    [sym_footnote] = STATE(110),
    [sym__citation_block] = STATE(104),
    [sym_citation] = STATE(111),
    [sym__hyperlink_target_block] = STATE(104),
    [sym_target] = STATE(112),
    [sym__anoynymous_hyperlink_target_block] = STATE(104),
    [sym__anonymous_target] = STATE(113),
    [sym__directive_block] = STATE(104),
    [sym_directive] = STATE(114),
    [sym__substitution_definition_block] = STATE(104),
    [sym_substitution_definition] = STATE(128),
    [sym__comment_block] = STATE(104),
    [sym_comment] = STATE(129),
    [aux_sym__line] = STATE(9),
    [sym__inline_markup] = STATE(9),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_paragraph_repeat1] = STATE(5),
    [aux_sym_bullet_list_repeat1] = STATE(37),
    [aux_sym_enumerated_list_repeat1] = STATE(38),
    [aux_sym_field_list_repeat1] = STATE(39),
    [aux_sym_option_list_repeat1] = STATE(40),
    [aux_sym_line_block_repeat1] = STATE(19),
    [aux_sym__footnote_block_repeat1] = STATE(41),
    [aux_sym__citation_block_repeat1] = STATE(42),
    [aux_sym__hyperlink_target_block_repeat1] = STATE(43),
    [aux_sym__anoynymous_hyperlink_target_block_repeat1] = STATE(44),
    [aux_sym__directive_block_repeat1] = STATE(45),
    [aux_sym__substitution_definition_block_repeat1] = STATE(46),
    [aux_sym__comment_block_repeat1] = STATE(47),
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
    [aux_sym__line_token1] = ACTIONS(33),
    [sym__newline] = ACTIONS(3),
    [sym__blankline] = ACTIONS(35),
    [sym__text] = ACTIONS(37),
    [sym_emphasis] = ACTIONS(37),
  },
  [2] = {
    [sym__body_elements] = STATE(3),
    [sym_paragraph] = STATE(104),
    [sym__list] = STATE(104),
    [sym_bullet_list] = STATE(104),
    [sym__bullet_list_item] = STATE(105),
    [sym_enumerated_list] = STATE(104),
    [sym__enumerated_list_item] = STATE(106),
    [sym_field_list] = STATE(104),
    [sym_field] = STATE(107),
    [sym_option_list] = STATE(104),
    [sym_option_list_item] = STATE(108),
    [sym_line_block] = STATE(104),
    [sym__single_line_block] = STATE(109),
    [sym__markup_block] = STATE(104),
    [sym__footnote_block] = STATE(104),
    [sym_footnote] = STATE(110),
    [sym__citation_block] = STATE(104),
    [sym_citation] = STATE(111),
    [sym__hyperlink_target_block] = STATE(104),
    [sym_target] = STATE(112),
    [sym__anoynymous_hyperlink_target_block] = STATE(104),
    [sym__anonymous_target] = STATE(113),
    [sym__directive_block] = STATE(104),
    [sym_directive] = STATE(114),
    [sym__substitution_definition_block] = STATE(104),
    [sym_substitution_definition] = STATE(128),
    [sym__comment_block] = STATE(104),
    [sym_comment] = STATE(129),
    [aux_sym__line] = STATE(9),
    [sym__inline_markup] = STATE(9),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_paragraph_repeat1] = STATE(5),
    [aux_sym_bullet_list_repeat1] = STATE(37),
    [aux_sym_enumerated_list_repeat1] = STATE(38),
    [aux_sym_field_list_repeat1] = STATE(39),
    [aux_sym_option_list_repeat1] = STATE(40),
    [aux_sym_line_block_repeat1] = STATE(19),
    [aux_sym__footnote_block_repeat1] = STATE(41),
    [aux_sym__citation_block_repeat1] = STATE(42),
    [aux_sym__hyperlink_target_block_repeat1] = STATE(43),
    [aux_sym__anoynymous_hyperlink_target_block_repeat1] = STATE(44),
    [aux_sym__directive_block_repeat1] = STATE(45),
    [aux_sym__substitution_definition_block_repeat1] = STATE(46),
    [aux_sym__comment_block_repeat1] = STATE(47),
    [ts_builtin_sym_end] = ACTIONS(39),
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
    [aux_sym__line_token1] = ACTIONS(33),
    [sym__newline] = ACTIONS(3),
    [sym__blankline] = ACTIONS(41),
    [sym__text] = ACTIONS(37),
    [sym_emphasis] = ACTIONS(37),
  },
  [3] = {
    [sym__body_elements] = STATE(3),
    [sym_paragraph] = STATE(104),
    [sym__list] = STATE(104),
    [sym_bullet_list] = STATE(104),
    [sym__bullet_list_item] = STATE(105),
    [sym_enumerated_list] = STATE(104),
    [sym__enumerated_list_item] = STATE(106),
    [sym_field_list] = STATE(104),
    [sym_field] = STATE(107),
    [sym_option_list] = STATE(104),
    [sym_option_list_item] = STATE(108),
    [sym_line_block] = STATE(104),
    [sym__single_line_block] = STATE(109),
    [sym__markup_block] = STATE(104),
    [sym__footnote_block] = STATE(104),
    [sym_footnote] = STATE(110),
    [sym__citation_block] = STATE(104),
    [sym_citation] = STATE(111),
    [sym__hyperlink_target_block] = STATE(104),
    [sym_target] = STATE(112),
    [sym__anoynymous_hyperlink_target_block] = STATE(104),
    [sym__anonymous_target] = STATE(113),
    [sym__directive_block] = STATE(104),
    [sym_directive] = STATE(114),
    [sym__substitution_definition_block] = STATE(104),
    [sym_substitution_definition] = STATE(128),
    [sym__comment_block] = STATE(104),
    [sym_comment] = STATE(129),
    [aux_sym__line] = STATE(9),
    [sym__inline_markup] = STATE(9),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_paragraph_repeat1] = STATE(5),
    [aux_sym_bullet_list_repeat1] = STATE(37),
    [aux_sym_enumerated_list_repeat1] = STATE(38),
    [aux_sym_field_list_repeat1] = STATE(39),
    [aux_sym_option_list_repeat1] = STATE(40),
    [aux_sym_line_block_repeat1] = STATE(19),
    [aux_sym__footnote_block_repeat1] = STATE(41),
    [aux_sym__citation_block_repeat1] = STATE(42),
    [aux_sym__hyperlink_target_block_repeat1] = STATE(43),
    [aux_sym__anoynymous_hyperlink_target_block_repeat1] = STATE(44),
    [aux_sym__directive_block_repeat1] = STATE(45),
    [aux_sym__substitution_definition_block_repeat1] = STATE(46),
    [aux_sym__comment_block_repeat1] = STATE(47),
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
    [aux_sym_substitution_definition_token1] = ACTIONS(78),
    [anon_sym_DOT_DOT] = ACTIONS(81),
    [aux_sym__line_token1] = ACTIONS(84),
    [sym__newline] = ACTIONS(3),
    [sym__blankline] = ACTIONS(87),
    [sym__text] = ACTIONS(90),
    [sym_emphasis] = ACTIONS(90),
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
  [26] = 4,
    ACTIONS(3), 1,
      sym__newline,
    STATE(6), 1,
      aux_sym_paragraph_repeat1,
    STATE(8), 2,
      aux_sym__line,
      sym__inline_markup,
    ACTIONS(97), 3,
      sym__text,
      sym_emphasis,
      aux_sym__line_token1,
  [42] = 4,
    ACTIONS(3), 1,
      sym__newline,
    STATE(6), 1,
      aux_sym_paragraph_repeat1,
    STATE(11), 2,
      aux_sym__line,
      sym__inline_markup,
    ACTIONS(99), 3,
      sym__text,
      sym_emphasis,
      aux_sym__line_token1,
  [58] = 3,
    ACTIONS(105), 2,
      sym__newline,
      sym__blankline,
    STATE(7), 2,
      aux_sym__line,
      sym__inline_markup,
    ACTIONS(102), 3,
      sym__text,
      sym_emphasis,
      aux_sym__line_token1,
  [72] = 4,
    ACTIONS(109), 1,
      sym__newline,
    ACTIONS(111), 1,
      sym__blankline,
    STATE(7), 2,
      aux_sym__line,
      sym__inline_markup,
    ACTIONS(107), 3,
      sym__text,
      sym_emphasis,
      aux_sym__line_token1,
  [88] = 4,
    ACTIONS(109), 1,
      sym__newline,
    ACTIONS(113), 1,
      sym__blankline,
    STATE(7), 2,
      aux_sym__line,
      sym__inline_markup,
    ACTIONS(107), 3,
      sym__text,
      sym_emphasis,
      aux_sym__line_token1,
  [104] = 3,
    ACTIONS(105), 1,
      sym__newline,
    STATE(10), 2,
      aux_sym__line,
      sym__inline_markup,
    ACTIONS(115), 3,
      sym__text,
      sym_emphasis,
      aux_sym__line_token1,
  [117] = 3,
    ACTIONS(109), 1,
      sym__newline,
    STATE(10), 2,
      aux_sym__line,
      sym__inline_markup,
    ACTIONS(118), 3,
      sym__text,
      sym_emphasis,
      aux_sym__line_token1,
  [130] = 2,
    ACTIONS(122), 2,
      sym__newline,
      sym__blankline,
    ACTIONS(120), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [141] = 2,
    ACTIONS(126), 2,
      sym__newline,
      sym__blankline,
    ACTIONS(124), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [152] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(128), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [162] = 2,
    ACTIONS(126), 1,
      sym__newline,
    ACTIONS(130), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [172] = 2,
    ACTIONS(122), 1,
      sym__newline,
    ACTIONS(132), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [182] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(134), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [192] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(136), 1,
      anon_sym_PIPE,
    ACTIONS(139), 1,
      aux_sym__single_line_block_token1,
    STATE(18), 1,
      aux_sym_line_block_repeat1,
    STATE(144), 1,
      sym__single_line_block,
  [208] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(17), 1,
      aux_sym__single_line_block_token1,
    ACTIONS(142), 1,
      anon_sym_PIPE,
    STATE(18), 1,
      aux_sym_line_block_repeat1,
    STATE(98), 1,
      sym__single_line_block,
  [224] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(144), 1,
      sym__char_bullet,
    STATE(20), 1,
      aux_sym_bullet_list_repeat1,
    STATE(148), 1,
      sym__bullet_list_item,
  [237] = 3,
    ACTIONS(147), 1,
      aux_sym__bullet_list_item_token1,
    STATE(29), 1,
      aux_sym__bullet_list_item_repeat1,
    ACTIONS(149), 2,
      sym__newline,
      sym__blankline,
  [248] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(151), 1,
      aux_sym_directive_token1,
    STATE(22), 1,
      aux_sym__directive_block_repeat1,
    STATE(139), 1,
      sym_directive,
  [261] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(154), 1,
      anon_sym___,
    STATE(23), 1,
      aux_sym__anoynymous_hyperlink_target_block_repeat1,
    STATE(140), 1,
      sym__anonymous_target,
  [274] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(157), 1,
      aux_sym_target_token1,
    STATE(24), 1,
      aux_sym__hyperlink_target_block_repeat1,
    STATE(141), 1,
      sym_target,
  [287] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(160), 1,
      aux_sym_citation_token1,
    STATE(25), 1,
      aux_sym__citation_block_repeat1,
    STATE(142), 1,
      sym_citation,
  [300] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(163), 1,
      aux_sym_footnote_token1,
    STATE(26), 1,
      aux_sym__footnote_block_repeat1,
    STATE(143), 1,
      sym_footnote,
  [313] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(166), 1,
      anon_sym_DOT_DOT,
    STATE(27), 1,
      aux_sym__comment_block_repeat1,
    STATE(137), 1,
      sym_comment,
  [326] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(169), 1,
      aux_sym_option_list_item_token1,
    STATE(28), 1,
      aux_sym_option_list_repeat1,
    STATE(145), 1,
      sym_option_list_item,
  [339] = 3,
    ACTIONS(172), 1,
      aux_sym__bullet_list_item_token1,
    STATE(29), 1,
      aux_sym__bullet_list_item_repeat1,
    ACTIONS(175), 2,
      sym__newline,
      sym__blankline,
  [350] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(177), 1,
      aux_sym_field_token1,
    STATE(30), 1,
      aux_sym_field_list_repeat1,
    STATE(146), 1,
      sym_field,
  [363] = 3,
    ACTIONS(147), 1,
      aux_sym__bullet_list_item_token1,
    STATE(29), 1,
      aux_sym__bullet_list_item_repeat1,
    ACTIONS(180), 2,
      sym__newline,
      sym__blankline,
  [374] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(182), 1,
      aux_sym__enumerated_list_item_token1,
    STATE(32), 1,
      aux_sym_enumerated_list_repeat1,
    STATE(147), 1,
      sym__enumerated_list_item,
  [387] = 3,
    ACTIONS(147), 1,
      aux_sym__bullet_list_item_token1,
    STATE(29), 1,
      aux_sym__bullet_list_item_repeat1,
    ACTIONS(185), 2,
      sym__newline,
      sym__blankline,
  [398] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(187), 3,
      sym__text,
      sym_emphasis,
      aux_sym__line_token1,
  [407] = 3,
    ACTIONS(147), 1,
      aux_sym__bullet_list_item_token1,
    STATE(29), 1,
      aux_sym__bullet_list_item_repeat1,
    ACTIONS(189), 2,
      sym__newline,
      sym__blankline,
  [418] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(191), 1,
      aux_sym_substitution_definition_token1,
    STATE(36), 1,
      aux_sym__substitution_definition_block_repeat1,
    STATE(138), 1,
      sym_substitution_definition,
  [431] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(7), 1,
      sym__char_bullet,
    STATE(20), 1,
      aux_sym_bullet_list_repeat1,
    STATE(102), 1,
      sym__bullet_list_item,
  [444] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(9), 1,
      aux_sym__enumerated_list_item_token1,
    STATE(32), 1,
      aux_sym_enumerated_list_repeat1,
    STATE(101), 1,
      sym__enumerated_list_item,
  [457] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(11), 1,
      aux_sym_field_token1,
    STATE(30), 1,
      aux_sym_field_list_repeat1,
    STATE(100), 1,
      sym_field,
  [470] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(13), 1,
      aux_sym_option_list_item_token1,
    STATE(28), 1,
      aux_sym_option_list_repeat1,
    STATE(99), 1,
      sym_option_list_item,
  [483] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      aux_sym_footnote_token1,
    STATE(26), 1,
      aux_sym__footnote_block_repeat1,
    STATE(90), 1,
      sym_footnote,
  [496] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(194), 1,
      aux_sym_citation_token1,
    STATE(25), 1,
      aux_sym__citation_block_repeat1,
    STATE(93), 1,
      sym_citation,
  [509] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(23), 1,
      aux_sym_target_token1,
    STATE(24), 1,
      aux_sym__hyperlink_target_block_repeat1,
    STATE(133), 1,
      sym_target,
  [522] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(25), 1,
      anon_sym___,
    STATE(23), 1,
      aux_sym__anoynymous_hyperlink_target_block_repeat1,
    STATE(95), 1,
      sym__anonymous_target,
  [535] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(27), 1,
      aux_sym_directive_token1,
    STATE(22), 1,
      aux_sym__directive_block_repeat1,
    STATE(92), 1,
      sym_directive,
  [548] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(29), 1,
      aux_sym_substitution_definition_token1,
    STATE(36), 1,
      aux_sym__substitution_definition_block_repeat1,
    STATE(94), 1,
      sym_substitution_definition,
  [561] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(196), 1,
      anon_sym_DOT_DOT,
    STATE(27), 1,
      aux_sym__comment_block_repeat1,
    STATE(96), 1,
      sym_comment,
  [574] = 3,
    ACTIONS(147), 1,
      aux_sym__bullet_list_item_token1,
    STATE(29), 1,
      aux_sym__bullet_list_item_repeat1,
    ACTIONS(198), 2,
      sym__newline,
      sym__blankline,
  [585] = 3,
    ACTIONS(147), 1,
      aux_sym__bullet_list_item_token1,
    STATE(29), 1,
      aux_sym__bullet_list_item_repeat1,
    ACTIONS(200), 2,
      sym__newline,
      sym__blankline,
  [596] = 3,
    ACTIONS(147), 1,
      aux_sym__bullet_list_item_token1,
    STATE(29), 1,
      aux_sym__bullet_list_item_repeat1,
    ACTIONS(202), 2,
      sym__newline,
      sym__blankline,
  [607] = 3,
    ACTIONS(147), 1,
      aux_sym__bullet_list_item_token1,
    STATE(29), 1,
      aux_sym__bullet_list_item_repeat1,
    ACTIONS(204), 2,
      sym__newline,
      sym__blankline,
  [618] = 3,
    ACTIONS(147), 1,
      aux_sym__bullet_list_item_token1,
    STATE(29), 1,
      aux_sym__bullet_list_item_repeat1,
    ACTIONS(206), 2,
      sym__newline,
      sym__blankline,
  [629] = 3,
    ACTIONS(147), 1,
      aux_sym__bullet_list_item_token1,
    STATE(29), 1,
      aux_sym__bullet_list_item_repeat1,
    ACTIONS(208), 2,
      sym__newline,
      sym__blankline,
  [640] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(210), 1,
      aux_sym__bullet_list_item_token1,
    STATE(50), 1,
      aux_sym__bullet_list_item_repeat1,
  [650] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(212), 1,
      aux_sym__bullet_list_item_token1,
    STATE(35), 1,
      aux_sym__bullet_list_item_repeat1,
  [660] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(214), 1,
      aux_sym__bullet_list_item_token1,
    STATE(74), 1,
      aux_sym__bullet_list_item_repeat1,
  [670] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(216), 1,
      aux_sym__bullet_list_item_token1,
    STATE(31), 1,
      aux_sym__bullet_list_item_repeat1,
  [680] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(218), 1,
      aux_sym__bullet_list_item_token1,
    STATE(73), 1,
      aux_sym__bullet_list_item_repeat1,
  [690] = 3,
    ACTIONS(149), 1,
      sym__newline,
    ACTIONS(220), 1,
      aux_sym__bullet_list_item_token1,
    STATE(71), 1,
      aux_sym__bullet_list_item_repeat1,
  [700] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(222), 1,
      aux_sym__bullet_list_item_token1,
    STATE(33), 1,
      aux_sym__bullet_list_item_repeat1,
  [710] = 3,
    ACTIONS(208), 1,
      sym__newline,
    ACTIONS(220), 1,
      aux_sym__bullet_list_item_token1,
    STATE(71), 1,
      aux_sym__bullet_list_item_repeat1,
  [720] = 3,
    ACTIONS(206), 1,
      sym__newline,
    ACTIONS(220), 1,
      aux_sym__bullet_list_item_token1,
    STATE(71), 1,
      aux_sym__bullet_list_item_repeat1,
  [730] = 3,
    ACTIONS(204), 1,
      sym__newline,
    ACTIONS(220), 1,
      aux_sym__bullet_list_item_token1,
    STATE(71), 1,
      aux_sym__bullet_list_item_repeat1,
  [740] = 3,
    ACTIONS(202), 1,
      sym__newline,
    ACTIONS(220), 1,
      aux_sym__bullet_list_item_token1,
    STATE(71), 1,
      aux_sym__bullet_list_item_repeat1,
  [750] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(224), 1,
      anon_sym_PIPE,
    ACTIONS(226), 1,
      aux_sym__single_line_block_token1,
  [760] = 3,
    ACTIONS(200), 1,
      sym__newline,
    ACTIONS(220), 1,
      aux_sym__bullet_list_item_token1,
    STATE(71), 1,
      aux_sym__bullet_list_item_repeat1,
  [770] = 3,
    ACTIONS(198), 1,
      sym__newline,
    ACTIONS(220), 1,
      aux_sym__bullet_list_item_token1,
    STATE(71), 1,
      aux_sym__bullet_list_item_repeat1,
  [780] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(228), 1,
      aux_sym__bullet_list_item_token1,
    STATE(51), 1,
      aux_sym__bullet_list_item_repeat1,
  [790] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(230), 1,
      aux_sym__bullet_list_item_token1,
    STATE(52), 1,
      aux_sym__bullet_list_item_repeat1,
  [800] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(232), 1,
      aux_sym__embed_directive_token1,
    STATE(130), 1,
      sym__embed_directive,
  [810] = 3,
    ACTIONS(175), 1,
      sym__newline,
    ACTIONS(234), 1,
      aux_sym__bullet_list_item_token1,
    STATE(71), 1,
      aux_sym__bullet_list_item_repeat1,
  [820] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(237), 1,
      aux_sym__bullet_list_item_token1,
    STATE(53), 1,
      aux_sym__bullet_list_item_repeat1,
  [830] = 3,
    ACTIONS(180), 1,
      sym__newline,
    ACTIONS(220), 1,
      aux_sym__bullet_list_item_token1,
    STATE(71), 1,
      aux_sym__bullet_list_item_repeat1,
  [840] = 3,
    ACTIONS(185), 1,
      sym__newline,
    ACTIONS(220), 1,
      aux_sym__bullet_list_item_token1,
    STATE(71), 1,
      aux_sym__bullet_list_item_repeat1,
  [850] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(239), 1,
      aux_sym__bullet_list_item_token1,
    STATE(48), 1,
      aux_sym__bullet_list_item_repeat1,
  [860] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(241), 1,
      aux_sym__bullet_list_item_token1,
    STATE(21), 1,
      aux_sym__bullet_list_item_repeat1,
  [870] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(243), 1,
      aux_sym__bullet_list_item_token1,
    STATE(78), 1,
      aux_sym__bullet_list_item_repeat1,
  [880] = 3,
    ACTIONS(189), 1,
      sym__newline,
    ACTIONS(220), 1,
      aux_sym__bullet_list_item_token1,
    STATE(71), 1,
      aux_sym__bullet_list_item_repeat1,
  [890] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(245), 1,
      aux_sym__bullet_list_item_token1,
    STATE(67), 1,
      aux_sym__bullet_list_item_repeat1,
  [900] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(247), 1,
      aux_sym__bullet_list_item_token1,
    STATE(66), 1,
      aux_sym__bullet_list_item_repeat1,
  [910] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(249), 1,
      aux_sym__bullet_list_item_token1,
    STATE(64), 1,
      aux_sym__bullet_list_item_repeat1,
  [920] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(251), 1,
      aux_sym__bullet_list_item_token1,
    STATE(63), 1,
      aux_sym__bullet_list_item_repeat1,
  [930] = 2,
    ACTIONS(253), 1,
      aux_sym_target_token2,
    ACTIONS(255), 2,
      sym__newline,
      sym__blankline,
  [938] = 2,
    ACTIONS(257), 1,
      aux_sym_target_token2,
    ACTIONS(259), 2,
      sym__newline,
      sym__blankline,
  [946] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(261), 1,
      aux_sym__bullet_list_item_token1,
    STATE(62), 1,
      aux_sym__bullet_list_item_repeat1,
  [956] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(263), 1,
      aux_sym__bullet_list_item_token1,
    STATE(61), 1,
      aux_sym__bullet_list_item_repeat1,
  [966] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(265), 1,
      aux_sym__bullet_list_item_token1,
    STATE(59), 1,
      aux_sym__bullet_list_item_repeat1,
  [976] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(267), 1,
      aux_sym__embed_directive_token1,
    STATE(134), 1,
      sym__embed_directive,
  [986] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(269), 1,
      aux_sym__bullet_list_item_token1,
    STATE(49), 1,
      aux_sym__bullet_list_item_repeat1,
  [996] = 2,
    ACTIONS(271), 1,
      sym__newline,
    ACTIONS(273), 1,
      sym__blankline,
  [1003] = 1,
    ACTIONS(275), 2,
      sym__newline,
      sym__blankline,
  [1008] = 2,
    ACTIONS(277), 1,
      sym__newline,
    ACTIONS(279), 1,
      sym__blankline,
  [1015] = 2,
    ACTIONS(281), 1,
      sym__newline,
    ACTIONS(283), 1,
      sym__blankline,
  [1022] = 2,
    ACTIONS(285), 1,
      sym__newline,
    ACTIONS(287), 1,
      sym__blankline,
  [1029] = 2,
    ACTIONS(289), 1,
      sym__newline,
    ACTIONS(291), 1,
      sym__blankline,
  [1036] = 2,
    ACTIONS(293), 1,
      sym__newline,
    ACTIONS(295), 1,
      sym__blankline,
  [1043] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(297), 1,
      ts_builtin_sym_end,
  [1050] = 2,
    ACTIONS(299), 1,
      sym__newline,
    ACTIONS(301), 1,
      sym__blankline,
  [1057] = 2,
    ACTIONS(303), 1,
      sym__newline,
    ACTIONS(305), 1,
      sym__blankline,
  [1064] = 2,
    ACTIONS(307), 1,
      sym__newline,
    ACTIONS(309), 1,
      sym__blankline,
  [1071] = 2,
    ACTIONS(311), 1,
      sym__newline,
    ACTIONS(313), 1,
      sym__blankline,
  [1078] = 2,
    ACTIONS(315), 1,
      sym__newline,
    ACTIONS(317), 1,
      sym__blankline,
  [1085] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(319), 1,
      anon_sym_COLON_COLON,
  [1092] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(321), 1,
      sym__blankline,
  [1099] = 2,
    ACTIONS(315), 1,
      sym__newline,
    ACTIONS(323), 1,
      sym__blankline,
  [1106] = 2,
    ACTIONS(311), 1,
      sym__newline,
    ACTIONS(325), 1,
      sym__blankline,
  [1113] = 2,
    ACTIONS(307), 1,
      sym__newline,
    ACTIONS(327), 1,
      sym__blankline,
  [1120] = 2,
    ACTIONS(303), 1,
      sym__newline,
    ACTIONS(329), 1,
      sym__blankline,
  [1127] = 2,
    ACTIONS(299), 1,
      sym__newline,
    ACTIONS(331), 1,
      sym__blankline,
  [1134] = 2,
    ACTIONS(271), 1,
      sym__newline,
    ACTIONS(333), 1,
      sym__blankline,
  [1141] = 2,
    ACTIONS(281), 1,
      sym__newline,
    ACTIONS(335), 1,
      sym__blankline,
  [1148] = 2,
    ACTIONS(337), 1,
      sym__newline,
    ACTIONS(339), 1,
      sym__blankline,
  [1155] = 2,
    ACTIONS(289), 1,
      sym__newline,
    ACTIONS(341), 1,
      sym__blankline,
  [1162] = 2,
    ACTIONS(277), 1,
      sym__newline,
    ACTIONS(343), 1,
      sym__blankline,
  [1169] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(345), 1,
      anon_sym_DOT_DOT,
  [1176] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(347), 1,
      aux_sym_substitution_definition_token1,
  [1183] = 2,
    ACTIONS(255), 1,
      sym__newline,
    ACTIONS(349), 1,
      aux_sym_target_token2,
  [1190] = 2,
    ACTIONS(259), 1,
      sym__newline,
    ACTIONS(351), 1,
      aux_sym_target_token2,
  [1197] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(353), 1,
      aux_sym_directive_token1,
  [1204] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(355), 1,
      anon_sym___,
  [1211] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(357), 1,
      aux_sym_target_token1,
  [1218] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(359), 1,
      aux_sym_citation_token1,
  [1225] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(361), 1,
      aux_sym_footnote_token1,
  [1232] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(363), 1,
      aux_sym_option_list_item_token1,
  [1239] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(365), 1,
      aux_sym_field_token1,
  [1246] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(367), 1,
      aux_sym__enumerated_list_item_token1,
  [1253] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(369), 1,
      sym__char_bullet,
  [1260] = 2,
    ACTIONS(285), 1,
      sym__newline,
    ACTIONS(371), 1,
      sym__blankline,
  [1267] = 2,
    ACTIONS(293), 1,
      sym__newline,
    ACTIONS(373), 1,
      sym__blankline,
  [1274] = 1,
    ACTIONS(375), 2,
      sym__newline,
      sym__blankline,
  [1279] = 1,
    ACTIONS(377), 2,
      sym__newline,
      sym__blankline,
  [1284] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(379), 1,
      anon_sym_COLON_COLON,
  [1291] = 2,
    ACTIONS(337), 1,
      sym__newline,
    ACTIONS(381), 1,
      sym__blankline,
  [1298] = 1,
    ACTIONS(375), 1,
      sym__newline,
  [1302] = 1,
    ACTIONS(275), 1,
      sym__newline,
  [1306] = 1,
    ACTIONS(377), 1,
      sym__newline,
  [1310] = 1,
    ACTIONS(293), 1,
      sym__newline,
  [1314] = 1,
    ACTIONS(285), 1,
      sym__newline,
  [1318] = 1,
    ACTIONS(277), 1,
      sym__newline,
  [1322] = 1,
    ACTIONS(289), 1,
      sym__newline,
  [1326] = 1,
    ACTIONS(337), 1,
      sym__newline,
  [1330] = 1,
    ACTIONS(281), 1,
      sym__newline,
  [1334] = 1,
    ACTIONS(271), 1,
      sym__newline,
  [1338] = 1,
    ACTIONS(299), 1,
      sym__newline,
  [1342] = 1,
    ACTIONS(303), 1,
      sym__newline,
  [1346] = 1,
    ACTIONS(307), 1,
      sym__newline,
  [1350] = 1,
    ACTIONS(311), 1,
      sym__newline,
  [1354] = 1,
    ACTIONS(315), 1,
      sym__newline,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 26,
  [SMALL_STATE(6)] = 42,
  [SMALL_STATE(7)] = 58,
  [SMALL_STATE(8)] = 72,
  [SMALL_STATE(9)] = 88,
  [SMALL_STATE(10)] = 104,
  [SMALL_STATE(11)] = 117,
  [SMALL_STATE(12)] = 130,
  [SMALL_STATE(13)] = 141,
  [SMALL_STATE(14)] = 152,
  [SMALL_STATE(15)] = 162,
  [SMALL_STATE(16)] = 172,
  [SMALL_STATE(17)] = 182,
  [SMALL_STATE(18)] = 192,
  [SMALL_STATE(19)] = 208,
  [SMALL_STATE(20)] = 224,
  [SMALL_STATE(21)] = 237,
  [SMALL_STATE(22)] = 248,
  [SMALL_STATE(23)] = 261,
  [SMALL_STATE(24)] = 274,
  [SMALL_STATE(25)] = 287,
  [SMALL_STATE(26)] = 300,
  [SMALL_STATE(27)] = 313,
  [SMALL_STATE(28)] = 326,
  [SMALL_STATE(29)] = 339,
  [SMALL_STATE(30)] = 350,
  [SMALL_STATE(31)] = 363,
  [SMALL_STATE(32)] = 374,
  [SMALL_STATE(33)] = 387,
  [SMALL_STATE(34)] = 398,
  [SMALL_STATE(35)] = 407,
  [SMALL_STATE(36)] = 418,
  [SMALL_STATE(37)] = 431,
  [SMALL_STATE(38)] = 444,
  [SMALL_STATE(39)] = 457,
  [SMALL_STATE(40)] = 470,
  [SMALL_STATE(41)] = 483,
  [SMALL_STATE(42)] = 496,
  [SMALL_STATE(43)] = 509,
  [SMALL_STATE(44)] = 522,
  [SMALL_STATE(45)] = 535,
  [SMALL_STATE(46)] = 548,
  [SMALL_STATE(47)] = 561,
  [SMALL_STATE(48)] = 574,
  [SMALL_STATE(49)] = 585,
  [SMALL_STATE(50)] = 596,
  [SMALL_STATE(51)] = 607,
  [SMALL_STATE(52)] = 618,
  [SMALL_STATE(53)] = 629,
  [SMALL_STATE(54)] = 640,
  [SMALL_STATE(55)] = 650,
  [SMALL_STATE(56)] = 660,
  [SMALL_STATE(57)] = 670,
  [SMALL_STATE(58)] = 680,
  [SMALL_STATE(59)] = 690,
  [SMALL_STATE(60)] = 700,
  [SMALL_STATE(61)] = 710,
  [SMALL_STATE(62)] = 720,
  [SMALL_STATE(63)] = 730,
  [SMALL_STATE(64)] = 740,
  [SMALL_STATE(65)] = 750,
  [SMALL_STATE(66)] = 760,
  [SMALL_STATE(67)] = 770,
  [SMALL_STATE(68)] = 780,
  [SMALL_STATE(69)] = 790,
  [SMALL_STATE(70)] = 800,
  [SMALL_STATE(71)] = 810,
  [SMALL_STATE(72)] = 820,
  [SMALL_STATE(73)] = 830,
  [SMALL_STATE(74)] = 840,
  [SMALL_STATE(75)] = 850,
  [SMALL_STATE(76)] = 860,
  [SMALL_STATE(77)] = 870,
  [SMALL_STATE(78)] = 880,
  [SMALL_STATE(79)] = 890,
  [SMALL_STATE(80)] = 900,
  [SMALL_STATE(81)] = 910,
  [SMALL_STATE(82)] = 920,
  [SMALL_STATE(83)] = 930,
  [SMALL_STATE(84)] = 938,
  [SMALL_STATE(85)] = 946,
  [SMALL_STATE(86)] = 956,
  [SMALL_STATE(87)] = 966,
  [SMALL_STATE(88)] = 976,
  [SMALL_STATE(89)] = 986,
  [SMALL_STATE(90)] = 996,
  [SMALL_STATE(91)] = 1003,
  [SMALL_STATE(92)] = 1008,
  [SMALL_STATE(93)] = 1015,
  [SMALL_STATE(94)] = 1022,
  [SMALL_STATE(95)] = 1029,
  [SMALL_STATE(96)] = 1036,
  [SMALL_STATE(97)] = 1043,
  [SMALL_STATE(98)] = 1050,
  [SMALL_STATE(99)] = 1057,
  [SMALL_STATE(100)] = 1064,
  [SMALL_STATE(101)] = 1071,
  [SMALL_STATE(102)] = 1078,
  [SMALL_STATE(103)] = 1085,
  [SMALL_STATE(104)] = 1092,
  [SMALL_STATE(105)] = 1099,
  [SMALL_STATE(106)] = 1106,
  [SMALL_STATE(107)] = 1113,
  [SMALL_STATE(108)] = 1120,
  [SMALL_STATE(109)] = 1127,
  [SMALL_STATE(110)] = 1134,
  [SMALL_STATE(111)] = 1141,
  [SMALL_STATE(112)] = 1148,
  [SMALL_STATE(113)] = 1155,
  [SMALL_STATE(114)] = 1162,
  [SMALL_STATE(115)] = 1169,
  [SMALL_STATE(116)] = 1176,
  [SMALL_STATE(117)] = 1183,
  [SMALL_STATE(118)] = 1190,
  [SMALL_STATE(119)] = 1197,
  [SMALL_STATE(120)] = 1204,
  [SMALL_STATE(121)] = 1211,
  [SMALL_STATE(122)] = 1218,
  [SMALL_STATE(123)] = 1225,
  [SMALL_STATE(124)] = 1232,
  [SMALL_STATE(125)] = 1239,
  [SMALL_STATE(126)] = 1246,
  [SMALL_STATE(127)] = 1253,
  [SMALL_STATE(128)] = 1260,
  [SMALL_STATE(129)] = 1267,
  [SMALL_STATE(130)] = 1274,
  [SMALL_STATE(131)] = 1279,
  [SMALL_STATE(132)] = 1284,
  [SMALL_STATE(133)] = 1291,
  [SMALL_STATE(134)] = 1298,
  [SMALL_STATE(135)] = 1302,
  [SMALL_STATE(136)] = 1306,
  [SMALL_STATE(137)] = 1310,
  [SMALL_STATE(138)] = 1314,
  [SMALL_STATE(139)] = 1318,
  [SMALL_STATE(140)] = 1322,
  [SMALL_STATE(141)] = 1326,
  [SMALL_STATE(142)] = 1330,
  [SMALL_STATE(143)] = 1334,
  [SMALL_STATE(144)] = 1338,
  [SMALL_STATE(145)] = 1342,
  [SMALL_STATE(146)] = 1346,
  [SMALL_STATE(147)] = 1350,
  [SMALL_STATE(148)] = 1354,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(75),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(89),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(54),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(68),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(109),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(69),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(72),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(76),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(83),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(84),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(12),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(70),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(13),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(9),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(3),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(9),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__body_elements, 2),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__body_elements, 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(11),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__line, 2), SHIFT_REPEAT(7),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__line, 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 1),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__line, 2), SHIFT_REPEAT(10),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_block_repeat1, 2), SHIFT_REPEAT(144),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_block_repeat1, 2), SHIFT_REPEAT(85),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bullet_list_repeat1, 2), SHIFT_REPEAT(79),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_citation, 2),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__directive_block_repeat1, 2), SHIFT_REPEAT(16),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__anoynymous_hyperlink_target_block_repeat1, 2), SHIFT_REPEAT(118),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hyperlink_target_block_repeat1, 2), SHIFT_REPEAT(117),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__citation_block_repeat1, 2), SHIFT_REPEAT(87),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__footnote_block_repeat1, 2), SHIFT_REPEAT(86),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_block_repeat1, 2), SHIFT_REPEAT(15),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_option_list_repeat1, 2), SHIFT_REPEAT(82),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__bullet_list_item_repeat1, 2), SHIFT_REPEAT(29),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__bullet_list_item_repeat1, 2),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_list_repeat1, 2), SHIFT_REPEAT(81),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enumerated_list_repeat1, 2), SHIFT_REPEAT(80),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__embed_directive, 4),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__substitution_definition_block_repeat1, 2), SHIFT_REPEAT(88),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bullet_list_item, 2),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__enumerated_list_item, 2),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 2),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_list_item, 2),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_block, 2),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footnote, 2),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_line_block_repeat1, 2),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_block_repeat1, 2),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__bullet_list_item_repeat1, 2), SHIFT_REPEAT(71),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 1),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__anonymous_target, 1),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__footnote_block, 2),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__anonymous_target, 2),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directive_block, 2),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__citation_block, 2),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__substitution_definition_block, 2),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__anoynymous_hyperlink_target_block, 2),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_block, 2),
  [297] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_block, 2),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_list, 2),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_list, 2),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumerated_list, 2),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bullet_list, 2),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bullet_list, 1),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumerated_list, 1),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_list, 1),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_list, 1),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_block, 1),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__footnote_block, 1),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__citation_block, 1),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hyperlink_target_block, 1),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__anoynymous_hyperlink_target_block, 1),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directive_block, 1),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__comment_block_repeat1, 2),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__substitution_definition_block_repeat1, 2),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__directive_block_repeat1, 2),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__anoynymous_hyperlink_target_block_repeat1, 2),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hyperlink_target_block_repeat1, 2),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__citation_block_repeat1, 2),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__footnote_block_repeat1, 2),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_option_list_repeat1, 2),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_list_repeat1, 2),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enumerated_list_repeat1, 2),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bullet_list_repeat1, 2),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__substitution_definition_block, 1),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_block, 1),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_substitution_definition, 2),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 2),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hyperlink_target_block, 2),
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
