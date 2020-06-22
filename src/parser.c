#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 138
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 77
#define ALIAS_COUNT 2
#define TOKEN_COUNT 39
#define EXTERNAL_TOKEN_COUNT 21
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4

enum {
  anon_sym_ = 1,
  anon_sym_TAB = 2,
  anon_sym_2 = 3,
  anon_sym_3 = 4,
  aux_sym_option_list_item_token1 = 5,
  anon_sym_PIPE = 6,
  aux_sym__single_line_block_token1 = 7,
  aux_sym_footnote_token1 = 8,
  aux_sym_citation_token1 = 9,
  aux_sym_target_token1 = 10,
  aux_sym_target_token2 = 11,
  anon_sym___ = 12,
  aux_sym_directive_token1 = 13,
  aux_sym_substitution_definition_token1 = 14,
  aux_sym__embed_directive_token1 = 15,
  anon_sym_COLON_COLON = 16,
  sym__whitespace = 17,
  sym__newline = 18,
  sym__blankline = 19,
  sym__indent = 20,
  sym__dedent = 21,
  sym__overline = 22,
  sym__underline = 23,
  sym_transition = 24,
  sym__char_bullet = 25,
  sym__numeric_bullet = 26,
  sym_field_name = 27,
  sym__text = 28,
  sym_emphasis = 29,
  sym_strong = 30,
  sym_interpreted_text = 31,
  sym_literal = 32,
  sym_substitution_reference = 33,
  sym__inline_target = 34,
  sym_footnote_reference = 35,
  sym_reference = 36,
  sym_standalone_hyperlink = 37,
  sym__explicit_markup_start = 38,
  sym_document = 39,
  sym_section = 40,
  sym__transition_block = 41,
  sym__body_elements = 42,
  sym_paragraph = 43,
  sym__list_block = 44,
  sym__list = 45,
  sym_bullet_list = 46,
  sym__bullet_list_item = 47,
  sym_enumerated_list = 48,
  sym__numeric_list_item = 49,
  sym_field_list = 50,
  sym_field = 51,
  sym_option_list = 52,
  sym_option_list_item = 53,
  sym__explicit_markup_block = 54,
  sym__markup_block = 55,
  sym_footnote = 56,
  sym_citation = 57,
  sym_target = 58,
  sym__anonymous_target = 59,
  sym_directive = 60,
  sym_substitution_definition = 61,
  sym__embed_directive = 62,
  sym_comment = 63,
  sym__line = 64,
  sym__inline_markup = 65,
  aux_sym_document_repeat1 = 66,
  aux_sym_paragraph_repeat1 = 67,
  aux_sym__list_block_repeat1 = 68,
  aux_sym_bullet_list_repeat1 = 69,
  aux_sym_bullet_list_repeat2 = 70,
  aux_sym_enumerated_list_repeat1 = 71,
  aux_sym_field_list_repeat1 = 72,
  aux_sym_option_list_repeat1 = 73,
  aux_sym_option_list_repeat2 = 74,
  aux_sym__explicit_markup_block_repeat1 = 75,
  aux_sym__line_repeat1 = 76,
  alias_sym_field_body = 77,
  alias_sym_title = 78,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_] = " ",
  [anon_sym_TAB] = "\t",
  [anon_sym_2] = "",
  [anon_sym_3] = "\f",
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
  [sym__whitespace] = "_whitespace",
  [sym__newline] = "_newline",
  [sym__blankline] = "_blankline",
  [sym__indent] = "_indent",
  [sym__dedent] = "_dedent",
  [sym__overline] = "_overline",
  [sym__underline] = "_underline",
  [sym_transition] = "transition",
  [sym__char_bullet] = "_char_bullet",
  [sym__numeric_bullet] = "_numeric_bullet",
  [sym_field_name] = "field_name",
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
  [sym__explicit_markup_start] = "_explicit_markup_start",
  [sym_document] = "document",
  [sym_section] = "section",
  [sym__transition_block] = "_transition_block",
  [sym__body_elements] = "_body_elements",
  [sym_paragraph] = "paragraph",
  [sym__list_block] = "_list_block",
  [sym__list] = "_list",
  [sym_bullet_list] = "bullet_list",
  [sym__bullet_list_item] = "list_item",
  [sym_enumerated_list] = "enumerated_list",
  [sym__numeric_list_item] = "list_item",
  [sym_field_list] = "field_list",
  [sym_field] = "field",
  [sym_option_list] = "option_list",
  [sym_option_list_item] = "option_list_item",
  [sym__explicit_markup_block] = "_explicit_markup_block",
  [sym__markup_block] = "_markup_block",
  [sym_footnote] = "footnote",
  [sym_citation] = "citation",
  [sym_target] = "target",
  [sym__anonymous_target] = "target",
  [sym_directive] = "directive",
  [sym_substitution_definition] = "substitution_definition",
  [sym__embed_directive] = "_embed_directive",
  [sym_comment] = "comment",
  [sym__line] = "_line",
  [sym__inline_markup] = "_inline_markup",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_paragraph_repeat1] = "paragraph_repeat1",
  [aux_sym__list_block_repeat1] = "_list_block_repeat1",
  [aux_sym_bullet_list_repeat1] = "bullet_list_repeat1",
  [aux_sym_bullet_list_repeat2] = "bullet_list_repeat2",
  [aux_sym_enumerated_list_repeat1] = "enumerated_list_repeat1",
  [aux_sym_field_list_repeat1] = "field_list_repeat1",
  [aux_sym_option_list_repeat1] = "option_list_repeat1",
  [aux_sym_option_list_repeat2] = "option_list_repeat2",
  [aux_sym__explicit_markup_block_repeat1] = "_explicit_markup_block_repeat1",
  [aux_sym__line_repeat1] = "_line_repeat1",
  [alias_sym_field_body] = "field_body",
  [alias_sym_title] = "title",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_] = anon_sym_,
  [anon_sym_TAB] = anon_sym_TAB,
  [anon_sym_2] = anon_sym_2,
  [anon_sym_3] = anon_sym_3,
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
  [sym__whitespace] = sym__whitespace,
  [sym__newline] = sym__newline,
  [sym__blankline] = sym__blankline,
  [sym__indent] = sym__indent,
  [sym__dedent] = sym__dedent,
  [sym__overline] = sym__overline,
  [sym__underline] = sym__underline,
  [sym_transition] = sym_transition,
  [sym__char_bullet] = sym__char_bullet,
  [sym__numeric_bullet] = sym__numeric_bullet,
  [sym_field_name] = sym_field_name,
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
  [sym__explicit_markup_start] = sym__explicit_markup_start,
  [sym_document] = sym_document,
  [sym_section] = sym_section,
  [sym__transition_block] = sym__transition_block,
  [sym__body_elements] = sym__body_elements,
  [sym_paragraph] = sym_paragraph,
  [sym__list_block] = sym__list_block,
  [sym__list] = sym__list,
  [sym_bullet_list] = sym_bullet_list,
  [sym__bullet_list_item] = sym__bullet_list_item,
  [sym_enumerated_list] = sym_enumerated_list,
  [sym__numeric_list_item] = sym__bullet_list_item,
  [sym_field_list] = sym_field_list,
  [sym_field] = sym_field,
  [sym_option_list] = sym_option_list,
  [sym_option_list_item] = sym_option_list_item,
  [sym__explicit_markup_block] = sym__explicit_markup_block,
  [sym__markup_block] = sym__markup_block,
  [sym_footnote] = sym_footnote,
  [sym_citation] = sym_citation,
  [sym_target] = sym_target,
  [sym__anonymous_target] = sym_target,
  [sym_directive] = sym_directive,
  [sym_substitution_definition] = sym_substitution_definition,
  [sym__embed_directive] = sym__embed_directive,
  [sym_comment] = sym_comment,
  [sym__line] = sym__line,
  [sym__inline_markup] = sym__inline_markup,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_paragraph_repeat1] = aux_sym_paragraph_repeat1,
  [aux_sym__list_block_repeat1] = aux_sym__list_block_repeat1,
  [aux_sym_bullet_list_repeat1] = aux_sym_bullet_list_repeat1,
  [aux_sym_bullet_list_repeat2] = aux_sym_bullet_list_repeat2,
  [aux_sym_enumerated_list_repeat1] = aux_sym_enumerated_list_repeat1,
  [aux_sym_field_list_repeat1] = aux_sym_field_list_repeat1,
  [aux_sym_option_list_repeat1] = aux_sym_option_list_repeat1,
  [aux_sym_option_list_repeat2] = aux_sym_option_list_repeat2,
  [aux_sym__explicit_markup_block_repeat1] = aux_sym__explicit_markup_block_repeat1,
  [aux_sym__line_repeat1] = aux_sym__line_repeat1,
  [alias_sym_field_body] = alias_sym_field_body,
  [alias_sym_title] = alias_sym_title,
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
  [sym__whitespace] = {
    .visible = false,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym__blankline] = {
    .visible = false,
    .named = true,
  },
  [sym__indent] = {
    .visible = false,
    .named = true,
  },
  [sym__dedent] = {
    .visible = false,
    .named = true,
  },
  [sym__overline] = {
    .visible = false,
    .named = true,
  },
  [sym__underline] = {
    .visible = false,
    .named = true,
  },
  [sym_transition] = {
    .visible = true,
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
  [sym_field_name] = {
    .visible = true,
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
  [sym__explicit_markup_start] = {
    .visible = false,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_section] = {
    .visible = true,
    .named = true,
  },
  [sym__transition_block] = {
    .visible = false,
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
  [sym__list_block] = {
    .visible = false,
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
  [sym__explicit_markup_block] = {
    .visible = false,
    .named = true,
  },
  [sym__markup_block] = {
    .visible = false,
    .named = true,
  },
  [sym_footnote] = {
    .visible = true,
    .named = true,
  },
  [sym_citation] = {
    .visible = true,
    .named = true,
  },
  [sym_target] = {
    .visible = true,
    .named = true,
  },
  [sym__anonymous_target] = {
    .visible = true,
    .named = true,
  },
  [sym_directive] = {
    .visible = true,
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
  [aux_sym__list_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bullet_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bullet_list_repeat2] = {
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
  [aux_sym_option_list_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__explicit_markup_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__line_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_field_body] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_title] = {
    .visible = true,
    .named = true,
  },
};

static TSSymbol ts_alias_sequences[4][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [2] = alias_sym_field_body,
  },
  [2] = {
    [0] = alias_sym_title,
  },
  [3] = {
    [1] = alias_sym_title,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(42);
      if (lookahead == '\t') ADVANCE(44);
      if (lookahead == 11) ADVANCE(45);
      if (lookahead == '\f') ADVANCE(46);
      if (lookahead == ' ') ADVANCE(43);
      if (lookahead == '+') ADVANCE(38);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == '_') ADVANCE(19);
      if (lookahead == '|') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(16);
      if (lookahead == '*') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 3:
      if (lookahead == '+') ADVANCE(38);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '/') ADVANCE(38);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 5:
      if (lookahead == ':') ADVANCE(60);
      END_STATE();
    case 6:
      if (lookahead == ':') ADVANCE(52);
      END_STATE();
    case 7:
      if (lookahead == ':') ADVANCE(52);
      if (lookahead == '_') ADVANCE(20);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == ':') ADVANCE(52);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 9:
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == '_') ADVANCE(12);
      if (lookahead == '`') ADVANCE(7);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == '`') ADVANCE(20);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(56);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == '_') ADVANCE(12);
      if (lookahead == '`') ADVANCE(7);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == ']') ADVANCE(33);
      END_STATE();
    case 15:
      if (lookahead == ']') ADVANCE(33);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 16:
      if (lookahead == ']') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 17:
      if (lookahead == ']') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == ']') ADVANCE(34);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '_') ADVANCE(55);
      END_STATE();
    case 20:
      if (lookahead == '_') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(7);
      END_STATE();
    case 21:
      if (lookahead == '_') ADVANCE(6);
      if (lookahead == '`') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(8);
      END_STATE();
    case 22:
      if (lookahead == '`') ADVANCE(6);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == '|') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(28);
      END_STATE();
    case 24:
      if (lookahead == '|') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(58);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(57);
      if (lookahead == '\r') ADVANCE(28);
      if (lookahead == '|') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 26:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(58);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(57);
      if (lookahead == '\r') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 27:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f') ADVANCE(31);
      if (lookahead == ' ') ADVANCE(32);
      if (lookahead == ',') ADVANCE(1);
      if (lookahead == '=') ADVANCE(39);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 29:
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 30:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(31);
      if (lookahead == ',') ADVANCE(1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(47);
      END_STATE();
    case 32:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 33:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(50);
      END_STATE();
    case 34:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(51);
      END_STATE();
    case 35:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(40);
      END_STATE();
    case 36:
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '_') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 37:
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '_') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 40:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(54);
      END_STATE();
    case 41:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(23);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '[') ADVANCE(2);
      if (lookahead == '_') ADVANCE(21);
      if (lookahead == '|') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '[') ADVANCE(2);
      if (lookahead == '_') ADVANCE(21);
      if (lookahead == '|') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_2);
      if (lookahead == '[') ADVANCE(2);
      if (lookahead == '_') ADVANCE(21);
      if (lookahead == '|') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_3);
      if (lookahead == '[') ADVANCE(2);
      if (lookahead == '_') ADVANCE(21);
      if (lookahead == '|') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_option_list_item_token1);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym__single_line_block_token1);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_footnote_token1);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_citation_token1);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_target_token1);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == '`') ADVANCE(6);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_target_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym___);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '_') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_substitution_definition_token1);
      if (lookahead == '|') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_substitution_definition_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym__embed_directive_token1);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '_') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym__whitespace);
      if (eof) ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(61);
      if (lookahead == '+') ADVANCE(38);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '_') ADVANCE(19);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 62, .external_lex_state = 2},
  [2] = {.lex_state = 62, .external_lex_state = 2},
  [3] = {.lex_state = 62, .external_lex_state = 2},
  [4] = {.lex_state = 0, .external_lex_state = 3},
  [5] = {.lex_state = 0, .external_lex_state = 3},
  [6] = {.lex_state = 62, .external_lex_state = 4},
  [7] = {.lex_state = 62, .external_lex_state = 4},
  [8] = {.lex_state = 62, .external_lex_state = 4},
  [9] = {.lex_state = 62, .external_lex_state = 5},
  [10] = {.lex_state = 62, .external_lex_state = 5},
  [11] = {.lex_state = 62, .external_lex_state = 5},
  [12] = {.lex_state = 62, .external_lex_state = 2},
  [13] = {.lex_state = 62, .external_lex_state = 2},
  [14] = {.lex_state = 62, .external_lex_state = 2},
  [15] = {.lex_state = 0, .external_lex_state = 6},
  [16] = {.lex_state = 62, .external_lex_state = 2},
  [17] = {.lex_state = 0, .external_lex_state = 5},
  [18] = {.lex_state = 0, .external_lex_state = 5},
  [19] = {.lex_state = 0, .external_lex_state = 6},
  [20] = {.lex_state = 0, .external_lex_state = 7},
  [21] = {.lex_state = 0, .external_lex_state = 8},
  [22] = {.lex_state = 0, .external_lex_state = 7},
  [23] = {.lex_state = 0, .external_lex_state = 8},
  [24] = {.lex_state = 0, .external_lex_state = 8},
  [25] = {.lex_state = 0, .external_lex_state = 8},
  [26] = {.lex_state = 0, .external_lex_state = 8},
  [27] = {.lex_state = 0, .external_lex_state = 8},
  [28] = {.lex_state = 0, .external_lex_state = 8},
  [29] = {.lex_state = 0, .external_lex_state = 3},
  [30] = {.lex_state = 0, .external_lex_state = 9},
  [31] = {.lex_state = 0, .external_lex_state = 9},
  [32] = {.lex_state = 0, .external_lex_state = 10},
  [33] = {.lex_state = 0, .external_lex_state = 11},
  [34] = {.lex_state = 0, .external_lex_state = 12},
  [35] = {.lex_state = 0, .external_lex_state = 8},
  [36] = {.lex_state = 0, .external_lex_state = 11},
  [37] = {.lex_state = 0, .external_lex_state = 8},
  [38] = {.lex_state = 0, .external_lex_state = 9},
  [39] = {.lex_state = 62, .external_lex_state = 8},
  [40] = {.lex_state = 0, .external_lex_state = 13},
  [41] = {.lex_state = 0, .external_lex_state = 14},
  [42] = {.lex_state = 0, .external_lex_state = 10},
  [43] = {.lex_state = 0, .external_lex_state = 11},
  [44] = {.lex_state = 0, .external_lex_state = 10},
  [45] = {.lex_state = 0, .external_lex_state = 12},
  [46] = {.lex_state = 62, .external_lex_state = 8},
  [47] = {.lex_state = 0, .external_lex_state = 13},
  [48] = {.lex_state = 0, .external_lex_state = 8},
  [49] = {.lex_state = 0, .external_lex_state = 14},
  [50] = {.lex_state = 0, .external_lex_state = 7},
  [51] = {.lex_state = 62, .external_lex_state = 8},
  [52] = {.lex_state = 0, .external_lex_state = 8},
  [53] = {.lex_state = 62, .external_lex_state = 8},
  [54] = {.lex_state = 62, .external_lex_state = 8},
  [55] = {.lex_state = 0, .external_lex_state = 8},
  [56] = {.lex_state = 62, .external_lex_state = 8},
  [57] = {.lex_state = 62, .external_lex_state = 8},
  [58] = {.lex_state = 62, .external_lex_state = 8},
  [59] = {.lex_state = 0, .external_lex_state = 8},
  [60] = {.lex_state = 0, .external_lex_state = 6},
  [61] = {.lex_state = 62, .external_lex_state = 15},
  [62] = {.lex_state = 62, .external_lex_state = 8},
  [63] = {.lex_state = 35, .external_lex_state = 7},
  [64] = {.lex_state = 0, .external_lex_state = 7},
  [65] = {.lex_state = 0, .external_lex_state = 7},
  [66] = {.lex_state = 0, .external_lex_state = 7},
  [67] = {.lex_state = 0, .external_lex_state = 7},
  [68] = {.lex_state = 62, .external_lex_state = 8},
  [69] = {.lex_state = 0, .external_lex_state = 7},
  [70] = {.lex_state = 0, .external_lex_state = 7},
  [71] = {.lex_state = 0, .external_lex_state = 7},
  [72] = {.lex_state = 35, .external_lex_state = 7},
  [73] = {.lex_state = 0, .external_lex_state = 7},
  [74] = {.lex_state = 0, .external_lex_state = 7},
  [75] = {.lex_state = 0, .external_lex_state = 7},
  [76] = {.lex_state = 0, .external_lex_state = 7},
  [77] = {.lex_state = 62, .external_lex_state = 8},
  [78] = {.lex_state = 0, .external_lex_state = 7},
  [79] = {.lex_state = 0, .external_lex_state = 7},
  [80] = {.lex_state = 62, .external_lex_state = 8},
  [81] = {.lex_state = 62, .external_lex_state = 8},
  [82] = {.lex_state = 0, .external_lex_state = 8},
  [83] = {.lex_state = 62, .external_lex_state = 8},
  [84] = {.lex_state = 62, .external_lex_state = 8},
  [85] = {.lex_state = 62, .external_lex_state = 8},
  [86] = {.lex_state = 62, .external_lex_state = 8},
  [87] = {.lex_state = 0, .external_lex_state = 7},
  [88] = {.lex_state = 0, .external_lex_state = 7},
  [89] = {.lex_state = 0, .external_lex_state = 7},
  [90] = {.lex_state = 62, .external_lex_state = 8},
  [91] = {.lex_state = 0, .external_lex_state = 7},
  [92] = {.lex_state = 0, .external_lex_state = 7},
  [93] = {.lex_state = 0, .external_lex_state = 7},
  [94] = {.lex_state = 0, .external_lex_state = 7},
  [95] = {.lex_state = 0, .external_lex_state = 8},
  [96] = {.lex_state = 0, .external_lex_state = 8},
  [97] = {.lex_state = 0, .external_lex_state = 7},
  [98] = {.lex_state = 0, .external_lex_state = 7},
  [99] = {.lex_state = 35, .external_lex_state = 8},
  [100] = {.lex_state = 62, .external_lex_state = 8},
  [101] = {.lex_state = 0, .external_lex_state = 7},
  [102] = {.lex_state = 0, .external_lex_state = 7},
  [103] = {.lex_state = 0, .external_lex_state = 8},
  [104] = {.lex_state = 35, .external_lex_state = 8},
  [105] = {.lex_state = 0, .external_lex_state = 7},
  [106] = {.lex_state = 0, .external_lex_state = 9},
  [107] = {.lex_state = 0, .external_lex_state = 10},
  [108] = {.lex_state = 0, .external_lex_state = 7},
  [109] = {.lex_state = 0, .external_lex_state = 8},
  [110] = {.lex_state = 0, .external_lex_state = 7},
  [111] = {.lex_state = 0, .external_lex_state = 7},
  [112] = {.lex_state = 0, .external_lex_state = 8},
  [113] = {.lex_state = 0, .external_lex_state = 11},
  [114] = {.lex_state = 0, .external_lex_state = 8},
  [115] = {.lex_state = 0, .external_lex_state = 7},
  [116] = {.lex_state = 0, .external_lex_state = 7},
  [117] = {.lex_state = 0, .external_lex_state = 7},
  [118] = {.lex_state = 0, .external_lex_state = 7},
  [119] = {.lex_state = 0, .external_lex_state = 7},
  [120] = {.lex_state = 0, .external_lex_state = 8},
  [121] = {.lex_state = 0, .external_lex_state = 7},
  [122] = {.lex_state = 0, .external_lex_state = 7},
  [123] = {.lex_state = 0, .external_lex_state = 7},
  [124] = {.lex_state = 0, .external_lex_state = 15},
  [125] = {.lex_state = 0, .external_lex_state = 8},
  [126] = {.lex_state = 0, .external_lex_state = 8},
  [127] = {.lex_state = 0, .external_lex_state = 8},
  [128] = {.lex_state = 0, .external_lex_state = 8},
  [129] = {.lex_state = 0, .external_lex_state = 8},
  [130] = {.lex_state = 0, .external_lex_state = 8},
  [131] = {.lex_state = 0, .external_lex_state = 8},
  [132] = {.lex_state = 0, .external_lex_state = 8},
  [133] = {.lex_state = 0, .external_lex_state = 8},
  [134] = {.lex_state = 0, .external_lex_state = 8},
  [135] = {.lex_state = 0, .external_lex_state = 8},
  [136] = {.lex_state = 0, .external_lex_state = 8},
  [137] = {.lex_state = 0, .external_lex_state = 8},
};

enum {
  ts_external_token__newline = 0,
  ts_external_token__blankline = 1,
  ts_external_token__indent = 2,
  ts_external_token__dedent = 3,
  ts_external_token__overline = 4,
  ts_external_token__underline = 5,
  ts_external_token_transition = 6,
  ts_external_token__char_bullet = 7,
  ts_external_token__numeric_bullet = 8,
  ts_external_token_field_name = 9,
  ts_external_token__text = 10,
  ts_external_token_emphasis = 11,
  ts_external_token_strong = 12,
  ts_external_token_interpreted_text = 13,
  ts_external_token_literal = 14,
  ts_external_token_substitution_reference = 15,
  ts_external_token__inline_target = 16,
  ts_external_token_footnote_reference = 17,
  ts_external_token_reference = 18,
  ts_external_token_standalone_hyperlink = 19,
  ts_external_token__explicit_markup_start = 20,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__newline] = sym__newline,
  [ts_external_token__blankline] = sym__blankline,
  [ts_external_token__indent] = sym__indent,
  [ts_external_token__dedent] = sym__dedent,
  [ts_external_token__overline] = sym__overline,
  [ts_external_token__underline] = sym__underline,
  [ts_external_token_transition] = sym_transition,
  [ts_external_token__char_bullet] = sym__char_bullet,
  [ts_external_token__numeric_bullet] = sym__numeric_bullet,
  [ts_external_token_field_name] = sym_field_name,
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
  [ts_external_token__explicit_markup_start] = sym__explicit_markup_start,
};

static bool ts_external_scanner_states[16][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__newline] = true,
    [ts_external_token__blankline] = true,
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token__overline] = true,
    [ts_external_token__underline] = true,
    [ts_external_token_transition] = true,
    [ts_external_token__char_bullet] = true,
    [ts_external_token__numeric_bullet] = true,
    [ts_external_token_field_name] = true,
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
    [ts_external_token__explicit_markup_start] = true,
  },
  [2] = {
    [ts_external_token__newline] = true,
    [ts_external_token__blankline] = true,
    [ts_external_token__overline] = true,
    [ts_external_token_transition] = true,
    [ts_external_token__char_bullet] = true,
    [ts_external_token__numeric_bullet] = true,
    [ts_external_token_field_name] = true,
    [ts_external_token__explicit_markup_start] = true,
  },
  [3] = {
    [ts_external_token__newline] = true,
    [ts_external_token__char_bullet] = true,
    [ts_external_token__numeric_bullet] = true,
    [ts_external_token_field_name] = true,
  },
  [4] = {
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
  [5] = {
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
  [6] = {
    [ts_external_token__newline] = true,
    [ts_external_token__explicit_markup_start] = true,
  },
  [7] = {
    [ts_external_token__newline] = true,
    [ts_external_token__blankline] = true,
  },
  [8] = {
    [ts_external_token__newline] = true,
  },
  [9] = {
    [ts_external_token__newline] = true,
    [ts_external_token__char_bullet] = true,
  },
  [10] = {
    [ts_external_token__newline] = true,
    [ts_external_token__numeric_bullet] = true,
  },
  [11] = {
    [ts_external_token__newline] = true,
    [ts_external_token_field_name] = true,
  },
  [12] = {
    [ts_external_token__newline] = true,
    [ts_external_token__blankline] = true,
    [ts_external_token__char_bullet] = true,
  },
  [13] = {
    [ts_external_token__newline] = true,
    [ts_external_token__blankline] = true,
    [ts_external_token__numeric_bullet] = true,
  },
  [14] = {
    [ts_external_token__newline] = true,
    [ts_external_token__blankline] = true,
    [ts_external_token_field_name] = true,
  },
  [15] = {
    [ts_external_token__newline] = true,
    [ts_external_token__underline] = true,
  },
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_TAB] = ACTIONS(1),
    [anon_sym_2] = ACTIONS(1),
    [anon_sym_3] = ACTIONS(1),
    [aux_sym_option_list_item_token1] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [aux_sym__single_line_block_token1] = ACTIONS(1),
    [aux_sym_footnote_token1] = ACTIONS(1),
    [aux_sym_citation_token1] = ACTIONS(1),
    [aux_sym_target_token1] = ACTIONS(1),
    [anon_sym___] = ACTIONS(1),
    [aux_sym_directive_token1] = ACTIONS(1),
    [aux_sym_substitution_definition_token1] = ACTIONS(1),
    [aux_sym__embed_directive_token1] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [sym__newline] = ACTIONS(3),
    [sym__blankline] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
    [sym__overline] = ACTIONS(1),
    [sym__underline] = ACTIONS(1),
    [sym_transition] = ACTIONS(1),
    [sym__char_bullet] = ACTIONS(1),
    [sym__numeric_bullet] = ACTIONS(1),
    [sym_field_name] = ACTIONS(1),
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
    [sym__explicit_markup_start] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(120),
    [sym_section] = STATE(3),
    [sym__transition_block] = STATE(3),
    [sym__body_elements] = STATE(3),
    [sym_paragraph] = STATE(122),
    [sym__list_block] = STATE(122),
    [sym__list] = STATE(92),
    [sym_bullet_list] = STATE(92),
    [sym__bullet_list_item] = STATE(69),
    [sym_enumerated_list] = STATE(92),
    [sym__numeric_list_item] = STATE(70),
    [sym_field_list] = STATE(92),
    [sym_field] = STATE(71),
    [sym_option_list] = STATE(92),
    [sym_option_list_item] = STATE(73),
    [sym__explicit_markup_block] = STATE(122),
    [sym__markup_block] = STATE(108),
    [sym_footnote] = STATE(108),
    [sym_citation] = STATE(108),
    [sym_target] = STATE(108),
    [sym__anonymous_target] = STATE(108),
    [sym_directive] = STATE(108),
    [sym_substitution_definition] = STATE(108),
    [sym_comment] = STATE(108),
    [sym__line] = STATE(105),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_paragraph_repeat1] = STATE(39),
    [aux_sym__list_block_repeat1] = STATE(4),
    [aux_sym_bullet_list_repeat2] = STATE(31),
    [aux_sym_enumerated_list_repeat1] = STATE(32),
    [aux_sym_field_list_repeat1] = STATE(33),
    [aux_sym_option_list_repeat2] = STATE(35),
    [aux_sym__explicit_markup_block_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_option_list_item_token1] = ACTIONS(7),
    [anon_sym___] = ACTIONS(9),
    [sym__whitespace] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym__blankline] = ACTIONS(13),
    [sym__overline] = ACTIONS(15),
    [sym_transition] = ACTIONS(17),
    [sym__char_bullet] = ACTIONS(19),
    [sym__numeric_bullet] = ACTIONS(21),
    [sym_field_name] = ACTIONS(23),
    [sym__explicit_markup_start] = ACTIONS(25),
  },
  [2] = {
    [sym_section] = STATE(2),
    [sym__transition_block] = STATE(2),
    [sym__body_elements] = STATE(2),
    [sym_paragraph] = STATE(122),
    [sym__list_block] = STATE(122),
    [sym__list] = STATE(92),
    [sym_bullet_list] = STATE(92),
    [sym__bullet_list_item] = STATE(69),
    [sym_enumerated_list] = STATE(92),
    [sym__numeric_list_item] = STATE(70),
    [sym_field_list] = STATE(92),
    [sym_field] = STATE(71),
    [sym_option_list] = STATE(92),
    [sym_option_list_item] = STATE(73),
    [sym__explicit_markup_block] = STATE(122),
    [sym__markup_block] = STATE(108),
    [sym_footnote] = STATE(108),
    [sym_citation] = STATE(108),
    [sym_target] = STATE(108),
    [sym__anonymous_target] = STATE(108),
    [sym_directive] = STATE(108),
    [sym_substitution_definition] = STATE(108),
    [sym_comment] = STATE(108),
    [sym__line] = STATE(105),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_paragraph_repeat1] = STATE(39),
    [aux_sym__list_block_repeat1] = STATE(4),
    [aux_sym_bullet_list_repeat2] = STATE(31),
    [aux_sym_enumerated_list_repeat1] = STATE(32),
    [aux_sym_field_list_repeat1] = STATE(33),
    [aux_sym_option_list_repeat2] = STATE(35),
    [aux_sym__explicit_markup_block_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(27),
    [aux_sym_option_list_item_token1] = ACTIONS(29),
    [anon_sym___] = ACTIONS(32),
    [sym__whitespace] = ACTIONS(35),
    [sym__newline] = ACTIONS(3),
    [sym__blankline] = ACTIONS(38),
    [sym__overline] = ACTIONS(41),
    [sym_transition] = ACTIONS(44),
    [sym__char_bullet] = ACTIONS(47),
    [sym__numeric_bullet] = ACTIONS(50),
    [sym_field_name] = ACTIONS(53),
    [sym__explicit_markup_start] = ACTIONS(56),
  },
  [3] = {
    [sym_section] = STATE(2),
    [sym__transition_block] = STATE(2),
    [sym__body_elements] = STATE(2),
    [sym_paragraph] = STATE(122),
    [sym__list_block] = STATE(122),
    [sym__list] = STATE(92),
    [sym_bullet_list] = STATE(92),
    [sym__bullet_list_item] = STATE(69),
    [sym_enumerated_list] = STATE(92),
    [sym__numeric_list_item] = STATE(70),
    [sym_field_list] = STATE(92),
    [sym_field] = STATE(71),
    [sym_option_list] = STATE(92),
    [sym_option_list_item] = STATE(73),
    [sym__explicit_markup_block] = STATE(122),
    [sym__markup_block] = STATE(108),
    [sym_footnote] = STATE(108),
    [sym_citation] = STATE(108),
    [sym_target] = STATE(108),
    [sym__anonymous_target] = STATE(108),
    [sym_directive] = STATE(108),
    [sym_substitution_definition] = STATE(108),
    [sym_comment] = STATE(108),
    [sym__line] = STATE(105),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_paragraph_repeat1] = STATE(39),
    [aux_sym__list_block_repeat1] = STATE(4),
    [aux_sym_bullet_list_repeat2] = STATE(31),
    [aux_sym_enumerated_list_repeat1] = STATE(32),
    [aux_sym_field_list_repeat1] = STATE(33),
    [aux_sym_option_list_repeat2] = STATE(35),
    [aux_sym__explicit_markup_block_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(59),
    [aux_sym_option_list_item_token1] = ACTIONS(7),
    [anon_sym___] = ACTIONS(9),
    [sym__whitespace] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym__blankline] = ACTIONS(61),
    [sym__overline] = ACTIONS(15),
    [sym_transition] = ACTIONS(17),
    [sym__char_bullet] = ACTIONS(19),
    [sym__numeric_bullet] = ACTIONS(21),
    [sym_field_name] = ACTIONS(23),
    [sym__explicit_markup_start] = ACTIONS(25),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 15,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(7), 1,
      aux_sym_option_list_item_token1,
    ACTIONS(19), 1,
      sym__char_bullet,
    ACTIONS(21), 1,
      sym__numeric_bullet,
    ACTIONS(23), 1,
      sym_field_name,
    STATE(5), 1,
      aux_sym__list_block_repeat1,
    STATE(31), 1,
      aux_sym_bullet_list_repeat2,
    STATE(32), 1,
      aux_sym_enumerated_list_repeat1,
    STATE(33), 1,
      aux_sym_field_list_repeat1,
    STATE(35), 1,
      aux_sym_option_list_repeat2,
    STATE(69), 1,
      sym__bullet_list_item,
    STATE(70), 1,
      sym__numeric_list_item,
    STATE(71), 1,
      sym_field,
    STATE(73), 1,
      sym_option_list_item,
    STATE(116), 5,
      sym__list,
      sym_bullet_list,
      sym_enumerated_list,
      sym_field_list,
      sym_option_list,
  [50] = 15,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(63), 1,
      aux_sym_option_list_item_token1,
    ACTIONS(66), 1,
      sym__char_bullet,
    ACTIONS(69), 1,
      sym__numeric_bullet,
    ACTIONS(72), 1,
      sym_field_name,
    STATE(5), 1,
      aux_sym__list_block_repeat1,
    STATE(30), 1,
      aux_sym_bullet_list_repeat2,
    STATE(37), 1,
      aux_sym_option_list_repeat2,
    STATE(42), 1,
      aux_sym_enumerated_list_repeat1,
    STATE(43), 1,
      aux_sym_field_list_repeat1,
    STATE(50), 1,
      sym_field,
    STATE(78), 1,
      sym__numeric_list_item,
    STATE(79), 1,
      sym__bullet_list_item,
    STATE(103), 1,
      sym_option_list_item,
    STATE(137), 5,
      sym__list,
      sym_bullet_list,
      sym_enumerated_list,
      sym_field_list,
      sym_option_list,
  [100] = 3,
    ACTIONS(78), 2,
      sym__newline,
      sym__blankline,
    STATE(6), 2,
      sym__inline_markup,
      aux_sym__line_repeat1,
    ACTIONS(75), 11,
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
      sym__whitespace,
  [122] = 3,
    ACTIONS(82), 2,
      sym__newline,
      sym__blankline,
    STATE(6), 2,
      sym__inline_markup,
      aux_sym__line_repeat1,
    ACTIONS(80), 11,
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
      sym__whitespace,
  [144] = 3,
    ACTIONS(86), 2,
      sym__newline,
      sym__blankline,
    STATE(7), 2,
      sym__inline_markup,
      aux_sym__line_repeat1,
    ACTIONS(84), 11,
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
      sym__whitespace,
  [166] = 3,
    ACTIONS(78), 1,
      sym__newline,
    STATE(9), 2,
      sym__inline_markup,
      aux_sym__line_repeat1,
    ACTIONS(88), 11,
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
      sym__whitespace,
  [187] = 3,
    ACTIONS(82), 1,
      sym__newline,
    STATE(9), 2,
      sym__inline_markup,
      aux_sym__line_repeat1,
    ACTIONS(91), 11,
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
      sym__whitespace,
  [208] = 3,
    ACTIONS(86), 1,
      sym__newline,
    STATE(10), 2,
      sym__inline_markup,
      aux_sym__line_repeat1,
    ACTIONS(93), 11,
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
      sym__whitespace,
  [229] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(97), 1,
      sym__whitespace,
    ACTIONS(95), 10,
      sym__blankline,
      sym__overline,
      sym_transition,
      sym__char_bullet,
      sym__numeric_bullet,
      sym_field_name,
      sym__explicit_markup_start,
      ts_builtin_sym_end,
      aux_sym_option_list_item_token1,
      anon_sym___,
  [248] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(101), 1,
      sym__whitespace,
    ACTIONS(99), 10,
      sym__blankline,
      sym__overline,
      sym_transition,
      sym__char_bullet,
      sym__numeric_bullet,
      sym_field_name,
      sym__explicit_markup_start,
      ts_builtin_sym_end,
      aux_sym_option_list_item_token1,
      anon_sym___,
  [267] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(105), 1,
      sym__whitespace,
    ACTIONS(103), 10,
      sym__blankline,
      sym__overline,
      sym_transition,
      sym__char_bullet,
      sym__numeric_bullet,
      sym_field_name,
      sym__explicit_markup_start,
      ts_builtin_sym_end,
      aux_sym_option_list_item_token1,
      anon_sym___,
  [286] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(9), 1,
      anon_sym___,
    ACTIONS(25), 1,
      sym__explicit_markup_start,
    STATE(19), 1,
      aux_sym__explicit_markup_block_repeat1,
    STATE(117), 8,
      sym__markup_block,
      sym_footnote,
      sym_citation,
      sym_target,
      sym__anonymous_target,
      sym_directive,
      sym_substitution_definition,
      sym_comment,
  [309] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(109), 1,
      sym__whitespace,
    ACTIONS(107), 10,
      sym__blankline,
      sym__overline,
      sym_transition,
      sym__char_bullet,
      sym__numeric_bullet,
      sym_field_name,
      sym__explicit_markup_start,
      ts_builtin_sym_end,
      aux_sym_option_list_item_token1,
      anon_sym___,
  [328] = 3,
    ACTIONS(3), 1,
      sym__newline,
    STATE(8), 1,
      sym__inline_markup,
    ACTIONS(111), 10,
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
  [347] = 3,
    ACTIONS(3), 1,
      sym__newline,
    STATE(11), 1,
      sym__inline_markup,
    ACTIONS(113), 10,
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
  [366] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(115), 1,
      anon_sym___,
    ACTIONS(118), 1,
      sym__explicit_markup_start,
    STATE(19), 1,
      aux_sym__explicit_markup_block_repeat1,
    STATE(125), 8,
      sym__markup_block,
      sym_footnote,
      sym_citation,
      sym_target,
      sym__anonymous_target,
      sym_directive,
      sym_substitution_definition,
      sym_comment,
  [389] = 7,
    ACTIONS(123), 1,
      aux_sym_footnote_token1,
    ACTIONS(125), 1,
      aux_sym_citation_token1,
    ACTIONS(127), 1,
      aux_sym_target_token1,
    ACTIONS(129), 1,
      aux_sym_directive_token1,
    ACTIONS(131), 1,
      aux_sym_substitution_definition_token1,
    ACTIONS(133), 2,
      sym__newline,
      sym__blankline,
    ACTIONS(121), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [415] = 7,
    ACTIONS(133), 1,
      sym__newline,
    ACTIONS(137), 1,
      aux_sym_footnote_token1,
    ACTIONS(139), 1,
      aux_sym_citation_token1,
    ACTIONS(141), 1,
      aux_sym_target_token1,
    ACTIONS(143), 1,
      aux_sym_directive_token1,
    ACTIONS(145), 1,
      aux_sym_substitution_definition_token1,
    ACTIONS(135), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [440] = 2,
    ACTIONS(149), 2,
      sym__newline,
      sym__blankline,
    ACTIONS(147), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [451] = 2,
    ACTIONS(149), 1,
      sym__newline,
    ACTIONS(151), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [461] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(153), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [471] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(155), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [481] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(157), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [491] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(159), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [501] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(161), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [511] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(163), 4,
      sym__char_bullet,
      sym__numeric_bullet,
      sym_field_name,
      aux_sym_option_list_item_token1,
  [521] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      sym__char_bullet,
    STATE(38), 1,
      aux_sym_bullet_list_repeat2,
    STATE(76), 1,
      sym__bullet_list_item,
  [534] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      sym__char_bullet,
    STATE(38), 1,
      aux_sym_bullet_list_repeat2,
    STATE(64), 1,
      sym__bullet_list_item,
  [547] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(21), 1,
      sym__numeric_bullet,
    STATE(44), 1,
      aux_sym_enumerated_list_repeat1,
    STATE(65), 1,
      sym__numeric_list_item,
  [560] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(23), 1,
      sym_field_name,
    STATE(36), 1,
      aux_sym_field_list_repeat1,
    STATE(66), 1,
      sym_field,
  [573] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(165), 1,
      sym__blankline,
    ACTIONS(168), 1,
      sym__char_bullet,
    STATE(34), 1,
      aux_sym_bullet_list_repeat1,
  [586] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(7), 1,
      aux_sym_option_list_item_token1,
    STATE(48), 1,
      aux_sym_option_list_repeat2,
    STATE(67), 1,
      sym_option_list_item,
  [599] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(170), 1,
      sym_field_name,
    STATE(36), 1,
      aux_sym_field_list_repeat1,
    STATE(89), 1,
      sym_field,
  [612] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(173), 1,
      aux_sym_option_list_item_token1,
    STATE(48), 1,
      aux_sym_option_list_repeat2,
    STATE(112), 1,
      sym_option_list_item,
  [625] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(175), 1,
      sym__char_bullet,
    STATE(38), 1,
      aux_sym_bullet_list_repeat2,
    STATE(87), 1,
      sym__bullet_list_item,
  [638] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(178), 1,
      sym__whitespace,
    STATE(46), 1,
      aux_sym_paragraph_repeat1,
    STATE(115), 1,
      sym__line,
  [651] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(168), 1,
      sym__numeric_bullet,
    ACTIONS(180), 1,
      sym__blankline,
    STATE(40), 1,
      aux_sym_bullet_list_repeat1,
  [664] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(168), 1,
      sym_field_name,
    ACTIONS(183), 1,
      sym__blankline,
    STATE(41), 1,
      aux_sym_bullet_list_repeat1,
  [677] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(21), 1,
      sym__numeric_bullet,
    STATE(44), 1,
      aux_sym_enumerated_list_repeat1,
    STATE(75), 1,
      sym__numeric_list_item,
  [690] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(23), 1,
      sym_field_name,
    STATE(36), 1,
      aux_sym_field_list_repeat1,
    STATE(74), 1,
      sym_field,
  [703] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(186), 1,
      sym__numeric_bullet,
    STATE(44), 1,
      aux_sym_enumerated_list_repeat1,
    STATE(88), 1,
      sym__numeric_list_item,
  [716] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(189), 1,
      sym__blankline,
    ACTIONS(191), 1,
      sym__char_bullet,
    STATE(34), 1,
      aux_sym_bullet_list_repeat1,
  [729] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(193), 1,
      sym__whitespace,
    STATE(46), 1,
      aux_sym_paragraph_repeat1,
    STATE(136), 1,
      sym__line,
  [742] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(196), 1,
      sym__blankline,
    ACTIONS(198), 1,
      sym__numeric_bullet,
    STATE(40), 1,
      aux_sym_bullet_list_repeat1,
  [755] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(200), 1,
      aux_sym_option_list_item_token1,
    STATE(48), 1,
      aux_sym_option_list_repeat2,
    STATE(95), 1,
      sym_option_list_item,
  [768] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(203), 1,
      sym__blankline,
    ACTIONS(205), 1,
      sym_field_name,
    STATE(41), 1,
      aux_sym_bullet_list_repeat1,
  [781] = 3,
    ACTIONS(207), 1,
      sym__newline,
    ACTIONS(210), 1,
      sym__blankline,
    STATE(49), 1,
      aux_sym_bullet_list_repeat1,
  [791] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(178), 1,
      sym__whitespace,
    STATE(119), 1,
      sym__line,
  [801] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(212), 1,
      aux_sym__embed_directive_token1,
    STATE(101), 1,
      sym__embed_directive,
  [811] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(214), 1,
      sym__whitespace,
    STATE(126), 1,
      sym__line,
  [821] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(214), 1,
      sym__whitespace,
    STATE(127), 1,
      sym__line,
  [831] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(216), 1,
      aux_sym__embed_directive_token1,
    STATE(128), 1,
      sym__embed_directive,
  [841] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(214), 1,
      sym__whitespace,
    STATE(130), 1,
      sym__line,
  [851] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(214), 1,
      sym__whitespace,
    STATE(131), 1,
      sym__line,
  [861] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(214), 1,
      sym__whitespace,
    STATE(132), 1,
      sym__line,
  [871] = 3,
    ACTIONS(218), 1,
      aux_sym_option_list_item_token1,
    ACTIONS(220), 1,
      sym__newline,
    STATE(82), 1,
      aux_sym_option_list_repeat1,
  [881] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(222), 2,
      sym__explicit_markup_start,
      anon_sym___,
  [889] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(224), 1,
      sym__whitespace,
    ACTIONS(226), 1,
      sym__underline,
  [899] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(178), 1,
      sym__whitespace,
    STATE(94), 1,
      sym__line,
  [909] = 2,
    ACTIONS(228), 1,
      aux_sym_target_token2,
    ACTIONS(230), 2,
      sym__newline,
      sym__blankline,
  [917] = 3,
    ACTIONS(232), 1,
      sym__newline,
    ACTIONS(235), 1,
      sym__blankline,
    STATE(45), 1,
      aux_sym_bullet_list_repeat1,
  [927] = 3,
    ACTIONS(238), 1,
      sym__newline,
    ACTIONS(241), 1,
      sym__blankline,
    STATE(47), 1,
      aux_sym_bullet_list_repeat1,
  [937] = 3,
    ACTIONS(244), 1,
      sym__newline,
    ACTIONS(247), 1,
      sym__blankline,
    STATE(49), 1,
      aux_sym_bullet_list_repeat1,
  [947] = 3,
    ACTIONS(250), 1,
      sym__newline,
    ACTIONS(253), 1,
      sym__blankline,
    STATE(59), 1,
      aux_sym_option_list_repeat1,
  [957] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(214), 1,
      sym__whitespace,
    STATE(134), 1,
      sym__line,
  [967] = 3,
    ACTIONS(255), 1,
      sym__newline,
    ACTIONS(258), 1,
      sym__blankline,
    STATE(45), 1,
      aux_sym_bullet_list_repeat1,
  [977] = 3,
    ACTIONS(261), 1,
      sym__newline,
    ACTIONS(264), 1,
      sym__blankline,
    STATE(47), 1,
      aux_sym_bullet_list_repeat1,
  [987] = 3,
    ACTIONS(207), 1,
      sym__newline,
    ACTIONS(267), 1,
      sym__blankline,
    STATE(49), 1,
      aux_sym_bullet_list_repeat1,
  [997] = 2,
    ACTIONS(270), 1,
      aux_sym_target_token2,
    ACTIONS(272), 2,
      sym__newline,
      sym__blankline,
  [1005] = 3,
    ACTIONS(274), 1,
      sym__newline,
    ACTIONS(277), 1,
      sym__blankline,
    STATE(59), 1,
      aux_sym_option_list_repeat1,
  [1015] = 3,
    ACTIONS(210), 1,
      sym__blankline,
    ACTIONS(244), 1,
      sym__newline,
    STATE(49), 1,
      aux_sym_bullet_list_repeat1,
  [1025] = 3,
    ACTIONS(238), 1,
      sym__newline,
    ACTIONS(279), 1,
      sym__blankline,
    STATE(47), 1,
      aux_sym_bullet_list_repeat1,
  [1035] = 3,
    ACTIONS(232), 1,
      sym__newline,
    ACTIONS(281), 1,
      sym__blankline,
    STATE(45), 1,
      aux_sym_bullet_list_repeat1,
  [1045] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(178), 1,
      sym__whitespace,
    STATE(93), 1,
      sym__line,
  [1055] = 3,
    ACTIONS(261), 1,
      sym__newline,
    ACTIONS(279), 1,
      sym__blankline,
    STATE(47), 1,
      aux_sym_bullet_list_repeat1,
  [1065] = 3,
    ACTIONS(255), 1,
      sym__newline,
    ACTIONS(281), 1,
      sym__blankline,
    STATE(45), 1,
      aux_sym_bullet_list_repeat1,
  [1075] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(214), 1,
      sym__whitespace,
    STATE(135), 1,
      sym__line,
  [1085] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(178), 1,
      sym__whitespace,
    STATE(111), 1,
      sym__line,
  [1095] = 3,
    ACTIONS(283), 1,
      aux_sym_option_list_item_token1,
    ACTIONS(285), 1,
      sym__newline,
    STATE(82), 1,
      aux_sym_option_list_repeat1,
  [1105] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(178), 1,
      sym__whitespace,
    STATE(118), 1,
      sym__line,
  [1115] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(178), 1,
      sym__whitespace,
    STATE(123), 1,
      sym__line,
  [1125] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(178), 1,
      sym__whitespace,
    STATE(97), 1,
      sym__line,
  [1135] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(178), 1,
      sym__whitespace,
    STATE(121), 1,
      sym__line,
  [1145] = 3,
    ACTIONS(281), 1,
      sym__blankline,
    ACTIONS(288), 1,
      sym__newline,
    STATE(45), 1,
      aux_sym_bullet_list_repeat1,
  [1155] = 3,
    ACTIONS(279), 1,
      sym__blankline,
    ACTIONS(290), 1,
      sym__newline,
    STATE(47), 1,
      aux_sym_bullet_list_repeat1,
  [1165] = 3,
    ACTIONS(210), 1,
      sym__blankline,
    ACTIONS(292), 1,
      sym__newline,
    STATE(49), 1,
      aux_sym_bullet_list_repeat1,
  [1175] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(178), 1,
      sym__whitespace,
    STATE(91), 1,
      sym__line,
  [1185] = 1,
    ACTIONS(294), 2,
      sym__newline,
      sym__blankline,
  [1190] = 2,
    ACTIONS(296), 1,
      sym__newline,
    ACTIONS(298), 1,
      sym__blankline,
  [1197] = 1,
    ACTIONS(300), 2,
      sym__newline,
      sym__blankline,
  [1202] = 1,
    ACTIONS(302), 2,
      sym__newline,
      sym__blankline,
  [1207] = 2,
    ACTIONS(304), 1,
      sym__newline,
    STATE(59), 1,
      aux_sym_option_list_repeat1,
  [1214] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(306), 1,
      anon_sym_COLON_COLON,
  [1221] = 1,
    ACTIONS(308), 2,
      sym__newline,
      sym__blankline,
  [1226] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(310), 1,
      sym__blankline,
  [1233] = 2,
    ACTIONS(230), 1,
      sym__newline,
    ACTIONS(312), 1,
      aux_sym_target_token2,
  [1240] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(224), 1,
      sym__whitespace,
  [1247] = 1,
    ACTIONS(314), 2,
      sym__newline,
      sym__blankline,
  [1252] = 1,
    ACTIONS(316), 2,
      sym__newline,
      sym__blankline,
  [1257] = 2,
    ACTIONS(274), 1,
      sym__newline,
    STATE(59), 1,
      aux_sym_option_list_repeat1,
  [1264] = 2,
    ACTIONS(272), 1,
      sym__newline,
    ACTIONS(318), 1,
      aux_sym_target_token2,
  [1271] = 2,
    ACTIONS(320), 1,
      sym__newline,
    ACTIONS(322), 1,
      sym__blankline,
  [1278] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(191), 1,
      sym__char_bullet,
  [1285] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(198), 1,
      sym__numeric_bullet,
  [1292] = 2,
    ACTIONS(324), 1,
      sym__newline,
    ACTIONS(326), 1,
      sym__blankline,
  [1299] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(328), 1,
      anon_sym_COLON_COLON,
  [1306] = 1,
    ACTIONS(330), 2,
      sym__newline,
      sym__blankline,
  [1311] = 1,
    ACTIONS(332), 2,
      sym__newline,
      sym__blankline,
  [1316] = 2,
    ACTIONS(250), 1,
      sym__newline,
    STATE(59), 1,
      aux_sym_option_list_repeat1,
  [1323] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(205), 1,
      sym_field_name,
  [1330] = 2,
    ACTIONS(334), 1,
      aux_sym_option_list_item_token1,
    ACTIONS(337), 1,
      sym__newline,
  [1337] = 2,
    ACTIONS(339), 1,
      sym__newline,
    ACTIONS(341), 1,
      sym__blankline,
  [1344] = 2,
    ACTIONS(296), 1,
      sym__newline,
    ACTIONS(343), 1,
      sym__blankline,
  [1351] = 2,
    ACTIONS(324), 1,
      sym__newline,
    ACTIONS(345), 1,
      sym__blankline,
  [1358] = 1,
    ACTIONS(347), 2,
      sym__newline,
      sym__blankline,
  [1363] = 1,
    ACTIONS(349), 2,
      sym__newline,
      sym__blankline,
  [1368] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(351), 1,
      ts_builtin_sym_end,
  [1375] = 1,
    ACTIONS(353), 2,
      sym__newline,
      sym__blankline,
  [1380] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(355), 1,
      sym__blankline,
  [1387] = 1,
    ACTIONS(357), 2,
      sym__newline,
      sym__blankline,
  [1392] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(359), 1,
      sym__underline,
  [1399] = 1,
    ACTIONS(324), 1,
      sym__newline,
  [1403] = 1,
    ACTIONS(308), 1,
      sym__newline,
  [1407] = 1,
    ACTIONS(300), 1,
      sym__newline,
  [1411] = 1,
    ACTIONS(314), 1,
      sym__newline,
  [1415] = 1,
    ACTIONS(330), 1,
      sym__newline,
  [1419] = 1,
    ACTIONS(332), 1,
      sym__newline,
  [1423] = 1,
    ACTIONS(347), 1,
      sym__newline,
  [1427] = 1,
    ACTIONS(349), 1,
      sym__newline,
  [1431] = 1,
    ACTIONS(316), 1,
      sym__newline,
  [1435] = 1,
    ACTIONS(302), 1,
      sym__newline,
  [1439] = 1,
    ACTIONS(361), 1,
      sym__newline,
  [1443] = 1,
    ACTIONS(339), 1,
      sym__newline,
  [1447] = 1,
    ACTIONS(296), 1,
      sym__newline,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 50,
  [SMALL_STATE(6)] = 100,
  [SMALL_STATE(7)] = 122,
  [SMALL_STATE(8)] = 144,
  [SMALL_STATE(9)] = 166,
  [SMALL_STATE(10)] = 187,
  [SMALL_STATE(11)] = 208,
  [SMALL_STATE(12)] = 229,
  [SMALL_STATE(13)] = 248,
  [SMALL_STATE(14)] = 267,
  [SMALL_STATE(15)] = 286,
  [SMALL_STATE(16)] = 309,
  [SMALL_STATE(17)] = 328,
  [SMALL_STATE(18)] = 347,
  [SMALL_STATE(19)] = 366,
  [SMALL_STATE(20)] = 389,
  [SMALL_STATE(21)] = 415,
  [SMALL_STATE(22)] = 440,
  [SMALL_STATE(23)] = 451,
  [SMALL_STATE(24)] = 461,
  [SMALL_STATE(25)] = 471,
  [SMALL_STATE(26)] = 481,
  [SMALL_STATE(27)] = 491,
  [SMALL_STATE(28)] = 501,
  [SMALL_STATE(29)] = 511,
  [SMALL_STATE(30)] = 521,
  [SMALL_STATE(31)] = 534,
  [SMALL_STATE(32)] = 547,
  [SMALL_STATE(33)] = 560,
  [SMALL_STATE(34)] = 573,
  [SMALL_STATE(35)] = 586,
  [SMALL_STATE(36)] = 599,
  [SMALL_STATE(37)] = 612,
  [SMALL_STATE(38)] = 625,
  [SMALL_STATE(39)] = 638,
  [SMALL_STATE(40)] = 651,
  [SMALL_STATE(41)] = 664,
  [SMALL_STATE(42)] = 677,
  [SMALL_STATE(43)] = 690,
  [SMALL_STATE(44)] = 703,
  [SMALL_STATE(45)] = 716,
  [SMALL_STATE(46)] = 729,
  [SMALL_STATE(47)] = 742,
  [SMALL_STATE(48)] = 755,
  [SMALL_STATE(49)] = 768,
  [SMALL_STATE(50)] = 781,
  [SMALL_STATE(51)] = 791,
  [SMALL_STATE(52)] = 801,
  [SMALL_STATE(53)] = 811,
  [SMALL_STATE(54)] = 821,
  [SMALL_STATE(55)] = 831,
  [SMALL_STATE(56)] = 841,
  [SMALL_STATE(57)] = 851,
  [SMALL_STATE(58)] = 861,
  [SMALL_STATE(59)] = 871,
  [SMALL_STATE(60)] = 881,
  [SMALL_STATE(61)] = 889,
  [SMALL_STATE(62)] = 899,
  [SMALL_STATE(63)] = 909,
  [SMALL_STATE(64)] = 917,
  [SMALL_STATE(65)] = 927,
  [SMALL_STATE(66)] = 937,
  [SMALL_STATE(67)] = 947,
  [SMALL_STATE(68)] = 957,
  [SMALL_STATE(69)] = 967,
  [SMALL_STATE(70)] = 977,
  [SMALL_STATE(71)] = 987,
  [SMALL_STATE(72)] = 997,
  [SMALL_STATE(73)] = 1005,
  [SMALL_STATE(74)] = 1015,
  [SMALL_STATE(75)] = 1025,
  [SMALL_STATE(76)] = 1035,
  [SMALL_STATE(77)] = 1045,
  [SMALL_STATE(78)] = 1055,
  [SMALL_STATE(79)] = 1065,
  [SMALL_STATE(80)] = 1075,
  [SMALL_STATE(81)] = 1085,
  [SMALL_STATE(82)] = 1095,
  [SMALL_STATE(83)] = 1105,
  [SMALL_STATE(84)] = 1115,
  [SMALL_STATE(85)] = 1125,
  [SMALL_STATE(86)] = 1135,
  [SMALL_STATE(87)] = 1145,
  [SMALL_STATE(88)] = 1155,
  [SMALL_STATE(89)] = 1165,
  [SMALL_STATE(90)] = 1175,
  [SMALL_STATE(91)] = 1185,
  [SMALL_STATE(92)] = 1190,
  [SMALL_STATE(93)] = 1197,
  [SMALL_STATE(94)] = 1202,
  [SMALL_STATE(95)] = 1207,
  [SMALL_STATE(96)] = 1214,
  [SMALL_STATE(97)] = 1221,
  [SMALL_STATE(98)] = 1226,
  [SMALL_STATE(99)] = 1233,
  [SMALL_STATE(100)] = 1240,
  [SMALL_STATE(101)] = 1247,
  [SMALL_STATE(102)] = 1252,
  [SMALL_STATE(103)] = 1257,
  [SMALL_STATE(104)] = 1264,
  [SMALL_STATE(105)] = 1271,
  [SMALL_STATE(106)] = 1278,
  [SMALL_STATE(107)] = 1285,
  [SMALL_STATE(108)] = 1292,
  [SMALL_STATE(109)] = 1299,
  [SMALL_STATE(110)] = 1306,
  [SMALL_STATE(111)] = 1311,
  [SMALL_STATE(112)] = 1316,
  [SMALL_STATE(113)] = 1323,
  [SMALL_STATE(114)] = 1330,
  [SMALL_STATE(115)] = 1337,
  [SMALL_STATE(116)] = 1344,
  [SMALL_STATE(117)] = 1351,
  [SMALL_STATE(118)] = 1358,
  [SMALL_STATE(119)] = 1363,
  [SMALL_STATE(120)] = 1368,
  [SMALL_STATE(121)] = 1375,
  [SMALL_STATE(122)] = 1380,
  [SMALL_STATE(123)] = 1387,
  [SMALL_STATE(124)] = 1392,
  [SMALL_STATE(125)] = 1399,
  [SMALL_STATE(126)] = 1403,
  [SMALL_STATE(127)] = 1407,
  [SMALL_STATE(128)] = 1411,
  [SMALL_STATE(129)] = 1415,
  [SMALL_STATE(130)] = 1419,
  [SMALL_STATE(131)] = 1423,
  [SMALL_STATE(132)] = 1427,
  [SMALL_STATE(133)] = 1431,
  [SMALL_STATE(134)] = 1435,
  [SMALL_STATE(135)] = 1439,
  [SMALL_STATE(136)] = 1443,
  [SMALL_STATE(137)] = 1447,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(62),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(63),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(17),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(2),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(80),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(98),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(28),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(26),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(25),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(20),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_block_repeat1, 2), SHIFT_REPEAT(68),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_block_repeat1, 2), SHIFT_REPEAT(28),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_block_repeat1, 2), SHIFT_REPEAT(26),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_block_repeat1, 2), SHIFT_REPEAT(25),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__line_repeat1, 2), SHIFT_REPEAT(6),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__line_repeat1, 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 3),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 2),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__line_repeat1, 2), SHIFT_REPEAT(9),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 3, .production_id = 2),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 3, .production_id = 2),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 4, .production_id = 3),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 4, .production_id = 3),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__transition_block, 2),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__transition_block, 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__body_elements, 2),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__body_elements, 2),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__explicit_markup_block_repeat1, 2), SHIFT_REPEAT(99),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__explicit_markup_block_repeat1, 2), SHIFT_REPEAT(21),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__list_block_repeat1, 2),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bullet_list_repeat1, 2), SHIFT_REPEAT(34),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bullet_list_repeat1, 2),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_list_repeat1, 2), SHIFT_REPEAT(25),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bullet_list_repeat2, 2), SHIFT_REPEAT(28),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bullet_list_repeat1, 2), SHIFT_REPEAT(40),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bullet_list_repeat1, 2), SHIFT_REPEAT(41),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enumerated_list_repeat1, 2), SHIFT_REPEAT(26),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bullet_list_repeat2, 2),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(18),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enumerated_list_repeat1, 2),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_option_list_repeat2, 2), SHIFT_REPEAT(68),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_list_repeat1, 2),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_field_list, 1), SHIFT(113),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_option_list_repeat2, 2),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__explicit_markup_block_repeat1, 2),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__anonymous_target, 1),
  [232] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_bullet_list, 2), SHIFT(106),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_bullet_list, 2), SHIFT(45),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_enumerated_list, 2), SHIFT(107),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_enumerated_list, 2), SHIFT(47),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_field_list, 2), SHIFT(113),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_field_list, 2), SHIFT(49),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_option_list, 2), SHIFT(114),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_list, 2),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_bullet_list, 1), SHIFT(106),
  [258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_bullet_list, 1), SHIFT(45),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_enumerated_list, 1), SHIFT(107),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_enumerated_list, 1), SHIFT(47),
  [267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_field_list, 1), SHIFT(49),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 2),
  [274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_option_list, 1), SHIFT(114),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_list, 1),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_option_list_repeat1, 2),
  [285] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_option_list_repeat1, 2), SHIFT_REPEAT(82),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, .production_id = 1),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_block, 1),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 4),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_list_item, 2),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__embed_directive, 4),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_substitution_definition, 3),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__anonymous_target, 2),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 1),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__explicit_markup_block, 1),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 3),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_citation, 3),
  [334] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_option_list_repeat1, 1), REDUCE(aux_sym_option_list_repeat2, 2),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_option_list_repeat1, 1),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_block, 2),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__explicit_markup_block, 2),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footnote, 3),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [351] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__numeric_list_item, 3),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bullet_list_item, 3),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
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
