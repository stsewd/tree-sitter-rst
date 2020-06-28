#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 142
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
  [12] = {.lex_state = 62, .external_lex_state = 6},
  [13] = {.lex_state = 62, .external_lex_state = 6},
  [14] = {.lex_state = 62, .external_lex_state = 6},
  [15] = {.lex_state = 62, .external_lex_state = 2},
  [16] = {.lex_state = 62, .external_lex_state = 2},
  [17] = {.lex_state = 62, .external_lex_state = 2},
  [18] = {.lex_state = 62, .external_lex_state = 2},
  [19] = {.lex_state = 0, .external_lex_state = 6},
  [20] = {.lex_state = 0, .external_lex_state = 6},
  [21] = {.lex_state = 0, .external_lex_state = 6},
  [22] = {.lex_state = 0, .external_lex_state = 7},
  [23] = {.lex_state = 0, .external_lex_state = 7},
  [24] = {.lex_state = 0, .external_lex_state = 8},
  [25] = {.lex_state = 0, .external_lex_state = 9},
  [26] = {.lex_state = 0, .external_lex_state = 8},
  [27] = {.lex_state = 0, .external_lex_state = 10},
  [28] = {.lex_state = 0, .external_lex_state = 10},
  [29] = {.lex_state = 0, .external_lex_state = 9},
  [30] = {.lex_state = 0, .external_lex_state = 9},
  [31] = {.lex_state = 0, .external_lex_state = 9},
  [32] = {.lex_state = 0, .external_lex_state = 9},
  [33] = {.lex_state = 0, .external_lex_state = 9},
  [34] = {.lex_state = 0, .external_lex_state = 9},
  [35] = {.lex_state = 0, .external_lex_state = 3},
  [36] = {.lex_state = 0, .external_lex_state = 11},
  [37] = {.lex_state = 0, .external_lex_state = 11},
  [38] = {.lex_state = 0, .external_lex_state = 12},
  [39] = {.lex_state = 0, .external_lex_state = 13},
  [40] = {.lex_state = 0, .external_lex_state = 10},
  [41] = {.lex_state = 0, .external_lex_state = 13},
  [42] = {.lex_state = 0, .external_lex_state = 14},
  [43] = {.lex_state = 0, .external_lex_state = 9},
  [44] = {.lex_state = 0, .external_lex_state = 10},
  [45] = {.lex_state = 0, .external_lex_state = 10},
  [46] = {.lex_state = 0, .external_lex_state = 15},
  [47] = {.lex_state = 0, .external_lex_state = 12},
  [48] = {.lex_state = 0, .external_lex_state = 11},
  [49] = {.lex_state = 0, .external_lex_state = 16},
  [50] = {.lex_state = 0, .external_lex_state = 14},
  [51] = {.lex_state = 62, .external_lex_state = 9},
  [52] = {.lex_state = 0, .external_lex_state = 15},
  [53] = {.lex_state = 0, .external_lex_state = 16},
  [54] = {.lex_state = 0, .external_lex_state = 9},
  [55] = {.lex_state = 0, .external_lex_state = 9},
  [56] = {.lex_state = 62, .external_lex_state = 9},
  [57] = {.lex_state = 0, .external_lex_state = 15},
  [58] = {.lex_state = 0, .external_lex_state = 8},
  [59] = {.lex_state = 0, .external_lex_state = 8},
  [60] = {.lex_state = 62, .external_lex_state = 9},
  [61] = {.lex_state = 62, .external_lex_state = 9},
  [62] = {.lex_state = 62, .external_lex_state = 9},
  [63] = {.lex_state = 0, .external_lex_state = 8},
  [64] = {.lex_state = 0, .external_lex_state = 8},
  [65] = {.lex_state = 62, .external_lex_state = 9},
  [66] = {.lex_state = 62, .external_lex_state = 9},
  [67] = {.lex_state = 62, .external_lex_state = 9},
  [68] = {.lex_state = 62, .external_lex_state = 9},
  [69] = {.lex_state = 0, .external_lex_state = 14},
  [70] = {.lex_state = 62, .external_lex_state = 17},
  [71] = {.lex_state = 0, .external_lex_state = 7},
  [72] = {.lex_state = 62, .external_lex_state = 9},
  [73] = {.lex_state = 62, .external_lex_state = 9},
  [74] = {.lex_state = 0, .external_lex_state = 9},
  [75] = {.lex_state = 0, .external_lex_state = 9},
  [76] = {.lex_state = 0, .external_lex_state = 9},
  [77] = {.lex_state = 62, .external_lex_state = 9},
  [78] = {.lex_state = 0, .external_lex_state = 8},
  [79] = {.lex_state = 0, .external_lex_state = 8},
  [80] = {.lex_state = 0, .external_lex_state = 8},
  [81] = {.lex_state = 0, .external_lex_state = 8},
  [82] = {.lex_state = 62, .external_lex_state = 9},
  [83] = {.lex_state = 0, .external_lex_state = 10},
  [84] = {.lex_state = 0, .external_lex_state = 8},
  [85] = {.lex_state = 0, .external_lex_state = 8},
  [86] = {.lex_state = 62, .external_lex_state = 9},
  [87] = {.lex_state = 62, .external_lex_state = 9},
  [88] = {.lex_state = 62, .external_lex_state = 9},
  [89] = {.lex_state = 0, .external_lex_state = 9},
  [90] = {.lex_state = 35, .external_lex_state = 8},
  [91] = {.lex_state = 0, .external_lex_state = 8},
  [92] = {.lex_state = 0, .external_lex_state = 8},
  [93] = {.lex_state = 35, .external_lex_state = 8},
  [94] = {.lex_state = 62, .external_lex_state = 9},
  [95] = {.lex_state = 62, .external_lex_state = 9},
  [96] = {.lex_state = 0, .external_lex_state = 8},
  [97] = {.lex_state = 0, .external_lex_state = 9},
  [98] = {.lex_state = 0, .external_lex_state = 9},
  [99] = {.lex_state = 0, .external_lex_state = 9},
  [100] = {.lex_state = 0, .external_lex_state = 9},
  [101] = {.lex_state = 0, .external_lex_state = 9},
  [102] = {.lex_state = 35, .external_lex_state = 9},
  [103] = {.lex_state = 0, .external_lex_state = 8},
  [104] = {.lex_state = 0, .external_lex_state = 8},
  [105] = {.lex_state = 0, .external_lex_state = 8},
  [106] = {.lex_state = 0, .external_lex_state = 9},
  [107] = {.lex_state = 0, .external_lex_state = 13},
  [108] = {.lex_state = 0, .external_lex_state = 8},
  [109] = {.lex_state = 0, .external_lex_state = 8},
  [110] = {.lex_state = 0, .external_lex_state = 8},
  [111] = {.lex_state = 0, .external_lex_state = 8},
  [112] = {.lex_state = 0, .external_lex_state = 9},
  [113] = {.lex_state = 0, .external_lex_state = 8},
  [114] = {.lex_state = 0, .external_lex_state = 8},
  [115] = {.lex_state = 0, .external_lex_state = 8},
  [116] = {.lex_state = 0, .external_lex_state = 11},
  [117] = {.lex_state = 0, .external_lex_state = 15},
  [118] = {.lex_state = 0, .external_lex_state = 8},
  [119] = {.lex_state = 0, .external_lex_state = 8},
  [120] = {.lex_state = 35, .external_lex_state = 9},
  [121] = {.lex_state = 0, .external_lex_state = 8},
  [122] = {.lex_state = 0, .external_lex_state = 8},
  [123] = {.lex_state = 62, .external_lex_state = 9},
  [124] = {.lex_state = 0, .external_lex_state = 8},
  [125] = {.lex_state = 0, .external_lex_state = 8},
  [126] = {.lex_state = 0, .external_lex_state = 17},
  [127] = {.lex_state = 0, .external_lex_state = 8},
  [128] = {.lex_state = 0, .external_lex_state = 8},
  [129] = {.lex_state = 0, .external_lex_state = 9},
  [130] = {.lex_state = 0, .external_lex_state = 9},
  [131] = {.lex_state = 0, .external_lex_state = 9},
  [132] = {.lex_state = 0, .external_lex_state = 9},
  [133] = {.lex_state = 0, .external_lex_state = 9},
  [134] = {.lex_state = 0, .external_lex_state = 9},
  [135] = {.lex_state = 0, .external_lex_state = 9},
  [136] = {.lex_state = 0, .external_lex_state = 9},
  [137] = {.lex_state = 0, .external_lex_state = 9},
  [138] = {.lex_state = 0, .external_lex_state = 9},
  [139] = {.lex_state = 0, .external_lex_state = 9},
  [140] = {.lex_state = 0, .external_lex_state = 9},
  [141] = {.lex_state = 0, .external_lex_state = 9},
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

static bool ts_external_scanner_states[18][EXTERNAL_TOKEN_COUNT] = {
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
    [ts_external_token__dedent] = true,
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
  [6] = {
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
  [7] = {
    [ts_external_token__newline] = true,
    [ts_external_token__explicit_markup_start] = true,
  },
  [8] = {
    [ts_external_token__newline] = true,
    [ts_external_token__blankline] = true,
  },
  [9] = {
    [ts_external_token__newline] = true,
  },
  [10] = {
    [ts_external_token__newline] = true,
    [ts_external_token__blankline] = true,
    [ts_external_token__char_bullet] = true,
  },
  [11] = {
    [ts_external_token__newline] = true,
    [ts_external_token__numeric_bullet] = true,
  },
  [12] = {
    [ts_external_token__newline] = true,
    [ts_external_token__blankline] = true,
    [ts_external_token__numeric_bullet] = true,
  },
  [13] = {
    [ts_external_token__newline] = true,
    [ts_external_token__char_bullet] = true,
  },
  [14] = {
    [ts_external_token__newline] = true,
    [ts_external_token__blankline] = true,
    [ts_external_token__dedent] = true,
  },
  [15] = {
    [ts_external_token__newline] = true,
    [ts_external_token_field_name] = true,
  },
  [16] = {
    [ts_external_token__newline] = true,
    [ts_external_token__blankline] = true,
    [ts_external_token_field_name] = true,
  },
  [17] = {
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
    [sym_document] = STATE(99),
    [sym_section] = STATE(3),
    [sym__transition_block] = STATE(3),
    [sym__body_elements] = STATE(3),
    [sym_paragraph] = STATE(104),
    [sym__list_block] = STATE(104),
    [sym__list] = STATE(105),
    [sym_bullet_list] = STATE(105),
    [sym__bullet_list_item] = STATE(42),
    [sym_enumerated_list] = STATE(105),
    [sym__numeric_list_item] = STATE(81),
    [sym_field_list] = STATE(105),
    [sym_field] = STATE(80),
    [sym_option_list] = STATE(105),
    [sym_option_list_item] = STATE(79),
    [sym__explicit_markup_block] = STATE(104),
    [sym__markup_block] = STATE(108),
    [sym_footnote] = STATE(108),
    [sym_citation] = STATE(108),
    [sym_target] = STATE(108),
    [sym__anonymous_target] = STATE(108),
    [sym_directive] = STATE(108),
    [sym_substitution_definition] = STATE(108),
    [sym_comment] = STATE(108),
    [sym__line] = STATE(113),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_paragraph_repeat1] = STATE(51),
    [aux_sym__list_block_repeat1] = STATE(5),
    [aux_sym_bullet_list_repeat2] = STATE(27),
    [aux_sym_enumerated_list_repeat1] = STATE(36),
    [aux_sym_field_list_repeat1] = STATE(52),
    [aux_sym_option_list_repeat2] = STATE(54),
    [aux_sym__explicit_markup_block_repeat1] = STATE(23),
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
    [sym_paragraph] = STATE(104),
    [sym__list_block] = STATE(104),
    [sym__list] = STATE(105),
    [sym_bullet_list] = STATE(105),
    [sym__bullet_list_item] = STATE(42),
    [sym_enumerated_list] = STATE(105),
    [sym__numeric_list_item] = STATE(81),
    [sym_field_list] = STATE(105),
    [sym_field] = STATE(80),
    [sym_option_list] = STATE(105),
    [sym_option_list_item] = STATE(79),
    [sym__explicit_markup_block] = STATE(104),
    [sym__markup_block] = STATE(108),
    [sym_footnote] = STATE(108),
    [sym_citation] = STATE(108),
    [sym_target] = STATE(108),
    [sym__anonymous_target] = STATE(108),
    [sym_directive] = STATE(108),
    [sym_substitution_definition] = STATE(108),
    [sym_comment] = STATE(108),
    [sym__line] = STATE(113),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_paragraph_repeat1] = STATE(51),
    [aux_sym__list_block_repeat1] = STATE(5),
    [aux_sym_bullet_list_repeat2] = STATE(27),
    [aux_sym_enumerated_list_repeat1] = STATE(36),
    [aux_sym_field_list_repeat1] = STATE(52),
    [aux_sym_option_list_repeat2] = STATE(54),
    [aux_sym__explicit_markup_block_repeat1] = STATE(23),
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
    [sym_paragraph] = STATE(104),
    [sym__list_block] = STATE(104),
    [sym__list] = STATE(105),
    [sym_bullet_list] = STATE(105),
    [sym__bullet_list_item] = STATE(42),
    [sym_enumerated_list] = STATE(105),
    [sym__numeric_list_item] = STATE(81),
    [sym_field_list] = STATE(105),
    [sym_field] = STATE(80),
    [sym_option_list] = STATE(105),
    [sym_option_list_item] = STATE(79),
    [sym__explicit_markup_block] = STATE(104),
    [sym__markup_block] = STATE(108),
    [sym_footnote] = STATE(108),
    [sym_citation] = STATE(108),
    [sym_target] = STATE(108),
    [sym__anonymous_target] = STATE(108),
    [sym_directive] = STATE(108),
    [sym_substitution_definition] = STATE(108),
    [sym_comment] = STATE(108),
    [sym__line] = STATE(113),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_paragraph_repeat1] = STATE(51),
    [aux_sym__list_block_repeat1] = STATE(5),
    [aux_sym_bullet_list_repeat2] = STATE(27),
    [aux_sym_enumerated_list_repeat1] = STATE(36),
    [aux_sym_field_list_repeat1] = STATE(52),
    [aux_sym_option_list_repeat2] = STATE(54),
    [aux_sym__explicit_markup_block_repeat1] = STATE(23),
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
    ACTIONS(63), 1,
      aux_sym_option_list_item_token1,
    ACTIONS(66), 1,
      sym__char_bullet,
    ACTIONS(69), 1,
      sym__numeric_bullet,
    ACTIONS(72), 1,
      sym_field_name,
    STATE(4), 1,
      aux_sym__list_block_repeat1,
    STATE(41), 1,
      aux_sym_bullet_list_repeat2,
    STATE(43), 1,
      aux_sym_option_list_repeat2,
    STATE(46), 1,
      aux_sym_field_list_repeat1,
    STATE(48), 1,
      aux_sym_enumerated_list_repeat1,
    STATE(50), 1,
      sym__bullet_list_item,
    STATE(84), 1,
      sym__numeric_list_item,
    STATE(85), 1,
      sym_field,
    STATE(100), 1,
      sym_option_list_item,
    STATE(140), 5,
      sym__list,
      sym_bullet_list,
      sym_enumerated_list,
      sym_field_list,
      sym_option_list,
  [50] = 15,
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
    STATE(4), 1,
      aux_sym__list_block_repeat1,
    STATE(27), 1,
      aux_sym_bullet_list_repeat2,
    STATE(36), 1,
      aux_sym_enumerated_list_repeat1,
    STATE(42), 1,
      sym__bullet_list_item,
    STATE(52), 1,
      aux_sym_field_list_repeat1,
    STATE(54), 1,
      aux_sym_option_list_repeat2,
    STATE(79), 1,
      sym_option_list_item,
    STATE(80), 1,
      sym_field,
    STATE(81), 1,
      sym__numeric_list_item,
    STATE(128), 5,
      sym__list,
      sym_bullet_list,
      sym_enumerated_list,
      sym_field_list,
      sym_option_list,
  [100] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(78), 2,
      sym__blankline,
      sym__dedent,
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
  [125] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(82), 2,
      sym__blankline,
      sym__dedent,
    STATE(8), 2,
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
  [150] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(86), 2,
      sym__blankline,
      sym__dedent,
    STATE(6), 2,
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
  [175] = 3,
    ACTIONS(78), 2,
      sym__newline,
      sym__blankline,
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
  [197] = 3,
    ACTIONS(82), 2,
      sym__newline,
      sym__blankline,
    STATE(11), 2,
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
  [219] = 3,
    ACTIONS(86), 2,
      sym__newline,
      sym__blankline,
    STATE(9), 2,
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
  [241] = 3,
    ACTIONS(82), 1,
      sym__newline,
    STATE(14), 2,
      sym__inline_markup,
      aux_sym__line_repeat1,
    ACTIONS(95), 11,
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
  [262] = 3,
    ACTIONS(78), 1,
      sym__newline,
    STATE(13), 2,
      sym__inline_markup,
      aux_sym__line_repeat1,
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
      sym__whitespace,
  [283] = 3,
    ACTIONS(86), 1,
      sym__newline,
    STATE(13), 2,
      sym__inline_markup,
      aux_sym__line_repeat1,
    ACTIONS(100), 11,
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
  [304] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(104), 1,
      sym__whitespace,
    ACTIONS(102), 10,
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
  [323] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(108), 1,
      sym__whitespace,
    ACTIONS(106), 10,
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
  [342] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(112), 1,
      sym__whitespace,
    ACTIONS(110), 10,
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
  [361] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(116), 1,
      sym__whitespace,
    ACTIONS(114), 10,
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
  [380] = 3,
    ACTIONS(3), 1,
      sym__newline,
    STATE(7), 1,
      sym__inline_markup,
    ACTIONS(118), 10,
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
  [399] = 3,
    ACTIONS(3), 1,
      sym__newline,
    STATE(10), 1,
      sym__inline_markup,
    ACTIONS(120), 10,
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
  [418] = 3,
    ACTIONS(3), 1,
      sym__newline,
    STATE(12), 1,
      sym__inline_markup,
    ACTIONS(122), 10,
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
  [437] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(124), 1,
      anon_sym___,
    ACTIONS(127), 1,
      sym__explicit_markup_start,
    STATE(22), 1,
      aux_sym__explicit_markup_block_repeat1,
    STATE(137), 8,
      sym__markup_block,
      sym_footnote,
      sym_citation,
      sym_target,
      sym__anonymous_target,
      sym_directive,
      sym_substitution_definition,
      sym_comment,
  [460] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(9), 1,
      anon_sym___,
    ACTIONS(25), 1,
      sym__explicit_markup_start,
    STATE(22), 1,
      aux_sym__explicit_markup_block_repeat1,
    STATE(127), 8,
      sym__markup_block,
      sym_footnote,
      sym_citation,
      sym_target,
      sym__anonymous_target,
      sym_directive,
      sym_substitution_definition,
      sym_comment,
  [483] = 7,
    ACTIONS(132), 1,
      aux_sym_footnote_token1,
    ACTIONS(134), 1,
      aux_sym_citation_token1,
    ACTIONS(136), 1,
      aux_sym_target_token1,
    ACTIONS(138), 1,
      aux_sym_directive_token1,
    ACTIONS(140), 1,
      aux_sym_substitution_definition_token1,
    ACTIONS(142), 2,
      sym__newline,
      sym__blankline,
    ACTIONS(130), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [509] = 7,
    ACTIONS(142), 1,
      sym__newline,
    ACTIONS(146), 1,
      aux_sym_footnote_token1,
    ACTIONS(148), 1,
      aux_sym_citation_token1,
    ACTIONS(150), 1,
      aux_sym_target_token1,
    ACTIONS(152), 1,
      aux_sym_directive_token1,
    ACTIONS(154), 1,
      aux_sym_substitution_definition_token1,
    ACTIONS(144), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [534] = 2,
    ACTIONS(158), 2,
      sym__newline,
      sym__blankline,
    ACTIONS(156), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [545] = 4,
    ACTIONS(19), 1,
      sym__char_bullet,
    STATE(28), 1,
      aux_sym_bullet_list_repeat2,
    STATE(42), 1,
      sym__bullet_list_item,
    ACTIONS(160), 2,
      sym__newline,
      sym__blankline,
  [559] = 4,
    ACTIONS(164), 1,
      sym__char_bullet,
    STATE(28), 1,
      aux_sym_bullet_list_repeat2,
    STATE(42), 1,
      sym__bullet_list_item,
    ACTIONS(162), 2,
      sym__newline,
      sym__blankline,
  [573] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(167), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [583] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(169), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [593] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(171), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [603] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(173), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [613] = 2,
    ACTIONS(158), 1,
      sym__newline,
    ACTIONS(175), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [623] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(177), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [633] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(179), 4,
      sym__char_bullet,
      sym__numeric_bullet,
      sym_field_name,
      aux_sym_option_list_item_token1,
  [643] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(21), 1,
      sym__numeric_bullet,
    STATE(37), 1,
      aux_sym_enumerated_list_repeat1,
    STATE(63), 1,
      sym__numeric_list_item,
  [656] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(181), 1,
      sym__numeric_bullet,
    STATE(37), 1,
      aux_sym_enumerated_list_repeat1,
    STATE(59), 1,
      sym__numeric_list_item,
  [669] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(184), 1,
      sym__blankline,
    ACTIONS(187), 1,
      sym__numeric_bullet,
    STATE(38), 1,
      aux_sym_bullet_list_repeat1,
  [682] = 4,
    ACTIONS(162), 1,
      sym__newline,
    ACTIONS(164), 1,
      sym__char_bullet,
    STATE(39), 1,
      aux_sym_bullet_list_repeat2,
    STATE(50), 1,
      sym__bullet_list_item,
  [695] = 3,
    ACTIONS(189), 1,
      sym__blankline,
    STATE(44), 1,
      aux_sym_bullet_list_repeat1,
    ACTIONS(162), 2,
      sym__newline,
      sym__char_bullet,
  [706] = 4,
    ACTIONS(19), 1,
      sym__char_bullet,
    ACTIONS(160), 1,
      sym__newline,
    STATE(39), 1,
      aux_sym_bullet_list_repeat2,
    STATE(50), 1,
      sym__bullet_list_item,
  [719] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(191), 1,
      sym__blankline,
    ACTIONS(193), 1,
      sym__dedent,
    STATE(45), 1,
      aux_sym_bullet_list_repeat1,
  [732] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(195), 1,
      aux_sym_option_list_item_token1,
    STATE(55), 1,
      aux_sym_option_list_repeat2,
    STATE(112), 1,
      sym_option_list_item,
  [745] = 3,
    ACTIONS(197), 1,
      sym__blankline,
    STATE(44), 1,
      aux_sym_bullet_list_repeat1,
    ACTIONS(187), 2,
      sym__newline,
      sym__char_bullet,
  [756] = 3,
    ACTIONS(200), 1,
      sym__blankline,
    STATE(44), 1,
      aux_sym_bullet_list_repeat1,
    ACTIONS(162), 2,
      sym__newline,
      sym__char_bullet,
  [767] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(23), 1,
      sym_field_name,
    STATE(57), 1,
      aux_sym_field_list_repeat1,
    STATE(92), 1,
      sym_field,
  [780] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(203), 1,
      sym__blankline,
    ACTIONS(205), 1,
      sym__numeric_bullet,
    STATE(38), 1,
      aux_sym_bullet_list_repeat1,
  [793] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(21), 1,
      sym__numeric_bullet,
    STATE(37), 1,
      aux_sym_enumerated_list_repeat1,
    STATE(91), 1,
      sym__numeric_list_item,
  [806] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(207), 1,
      sym__blankline,
    ACTIONS(209), 1,
      sym_field_name,
    STATE(53), 1,
      aux_sym_bullet_list_repeat1,
  [819] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(211), 1,
      sym__blankline,
    ACTIONS(213), 1,
      sym__dedent,
    STATE(40), 1,
      aux_sym_bullet_list_repeat1,
  [832] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(215), 1,
      sym__whitespace,
    STATE(56), 1,
      aux_sym_paragraph_repeat1,
    STATE(122), 1,
      sym__line,
  [845] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(23), 1,
      sym_field_name,
    STATE(57), 1,
      aux_sym_field_list_repeat1,
    STATE(64), 1,
      sym_field,
  [858] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(187), 1,
      sym_field_name,
    ACTIONS(217), 1,
      sym__blankline,
    STATE(53), 1,
      aux_sym_bullet_list_repeat1,
  [871] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(7), 1,
      aux_sym_option_list_item_token1,
    STATE(55), 1,
      aux_sym_option_list_repeat2,
    STATE(58), 1,
      sym_option_list_item,
  [884] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(220), 1,
      aux_sym_option_list_item_token1,
    STATE(55), 1,
      aux_sym_option_list_repeat2,
    STATE(106), 1,
      sym_option_list_item,
  [897] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(223), 1,
      sym__whitespace,
    STATE(56), 1,
      aux_sym_paragraph_repeat1,
    STATE(141), 1,
      sym__line,
  [910] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(226), 1,
      sym_field_name,
    STATE(57), 1,
      aux_sym_field_list_repeat1,
    STATE(78), 1,
      sym_field,
  [923] = 3,
    ACTIONS(229), 1,
      sym__newline,
    ACTIONS(232), 1,
      sym__blankline,
    STATE(74), 1,
      aux_sym_option_list_repeat1,
  [933] = 3,
    ACTIONS(234), 1,
      sym__newline,
    ACTIONS(236), 1,
      sym__blankline,
    STATE(47), 1,
      aux_sym_bullet_list_repeat1,
  [943] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(238), 1,
      sym__whitespace,
    STATE(139), 1,
      sym__line,
  [953] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(215), 1,
      sym__whitespace,
    STATE(96), 1,
      sym__line,
  [963] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(240), 1,
      sym__whitespace,
    STATE(69), 1,
      sym__line,
  [973] = 3,
    ACTIONS(242), 1,
      sym__newline,
    ACTIONS(245), 1,
      sym__blankline,
    STATE(47), 1,
      aux_sym_bullet_list_repeat1,
  [983] = 3,
    ACTIONS(248), 1,
      sym__newline,
    ACTIONS(251), 1,
      sym__blankline,
    STATE(49), 1,
      aux_sym_bullet_list_repeat1,
  [993] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(215), 1,
      sym__whitespace,
    STATE(119), 1,
      sym__line,
  [1003] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(238), 1,
      sym__whitespace,
    STATE(134), 1,
      sym__line,
  [1013] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(215), 1,
      sym__whitespace,
    STATE(109), 1,
      sym__line,
  [1023] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(238), 1,
      sym__whitespace,
    STATE(135), 1,
      sym__line,
  [1033] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(254), 2,
      sym__blankline,
      sym__dedent,
  [1041] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(256), 1,
      sym__whitespace,
    ACTIONS(258), 1,
      sym__underline,
  [1051] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(260), 2,
      sym__explicit_markup_start,
      anon_sym___,
  [1059] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(215), 1,
      sym__whitespace,
    STATE(110), 1,
      sym__line,
  [1069] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(238), 1,
      sym__whitespace,
    STATE(133), 1,
      sym__line,
  [1079] = 3,
    ACTIONS(262), 1,
      aux_sym_option_list_item_token1,
    ACTIONS(264), 1,
      sym__newline,
    STATE(75), 1,
      aux_sym_option_list_repeat1,
  [1089] = 3,
    ACTIONS(266), 1,
      aux_sym_option_list_item_token1,
    ACTIONS(268), 1,
      sym__newline,
    STATE(75), 1,
      aux_sym_option_list_repeat1,
  [1099] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(271), 1,
      aux_sym__embed_directive_token1,
    STATE(131), 1,
      sym__embed_directive,
  [1109] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(215), 1,
      sym__whitespace,
    STATE(125), 1,
      sym__line,
  [1119] = 3,
    ACTIONS(273), 1,
      sym__newline,
    ACTIONS(275), 1,
      sym__blankline,
    STATE(49), 1,
      aux_sym_bullet_list_repeat1,
  [1129] = 3,
    ACTIONS(277), 1,
      sym__newline,
    ACTIONS(280), 1,
      sym__blankline,
    STATE(74), 1,
      aux_sym_option_list_repeat1,
  [1139] = 3,
    ACTIONS(282), 1,
      sym__newline,
    ACTIONS(285), 1,
      sym__blankline,
    STATE(49), 1,
      aux_sym_bullet_list_repeat1,
  [1149] = 3,
    ACTIONS(288), 1,
      sym__newline,
    ACTIONS(291), 1,
      sym__blankline,
    STATE(47), 1,
      aux_sym_bullet_list_repeat1,
  [1159] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(215), 1,
      sym__whitespace,
    STATE(121), 1,
      sym__line,
  [1169] = 1,
    ACTIONS(162), 3,
      sym__newline,
      sym__blankline,
      sym__char_bullet,
  [1175] = 3,
    ACTIONS(236), 1,
      sym__blankline,
    ACTIONS(288), 1,
      sym__newline,
    STATE(47), 1,
      aux_sym_bullet_list_repeat1,
  [1185] = 3,
    ACTIONS(275), 1,
      sym__blankline,
    ACTIONS(282), 1,
      sym__newline,
    STATE(49), 1,
      aux_sym_bullet_list_repeat1,
  [1195] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(238), 1,
      sym__whitespace,
    STATE(136), 1,
      sym__line,
  [1205] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(238), 1,
      sym__whitespace,
    STATE(130), 1,
      sym__line,
  [1215] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(238), 1,
      sym__whitespace,
    STATE(129), 1,
      sym__line,
  [1225] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(294), 1,
      aux_sym__embed_directive_token1,
    STATE(103), 1,
      sym__embed_directive,
  [1235] = 2,
    ACTIONS(296), 1,
      aux_sym_target_token2,
    ACTIONS(298), 2,
      sym__newline,
      sym__blankline,
  [1243] = 3,
    ACTIONS(236), 1,
      sym__blankline,
    ACTIONS(242), 1,
      sym__newline,
    STATE(47), 1,
      aux_sym_bullet_list_repeat1,
  [1253] = 3,
    ACTIONS(248), 1,
      sym__newline,
    ACTIONS(275), 1,
      sym__blankline,
    STATE(49), 1,
      aux_sym_bullet_list_repeat1,
  [1263] = 2,
    ACTIONS(300), 1,
      aux_sym_target_token2,
    ACTIONS(302), 2,
      sym__newline,
      sym__blankline,
  [1271] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(215), 1,
      sym__whitespace,
    STATE(111), 1,
      sym__line,
  [1281] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(215), 1,
      sym__whitespace,
    STATE(114), 1,
      sym__line,
  [1291] = 1,
    ACTIONS(304), 2,
      sym__newline,
      sym__blankline,
  [1296] = 2,
    ACTIONS(306), 1,
      aux_sym_option_list_item_token1,
    ACTIONS(309), 1,
      sym__newline,
  [1303] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(311), 1,
      anon_sym_COLON_COLON,
  [1310] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(313), 1,
      ts_builtin_sym_end,
  [1317] = 2,
    ACTIONS(277), 1,
      sym__newline,
    STATE(74), 1,
      aux_sym_option_list_repeat1,
  [1324] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(315), 1,
      anon_sym_COLON_COLON,
  [1331] = 2,
    ACTIONS(298), 1,
      sym__newline,
    ACTIONS(317), 1,
      aux_sym_target_token2,
  [1338] = 1,
    ACTIONS(319), 2,
      sym__newline,
      sym__blankline,
  [1343] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(321), 1,
      sym__blankline,
  [1350] = 2,
    ACTIONS(323), 1,
      sym__newline,
    ACTIONS(325), 1,
      sym__blankline,
  [1357] = 2,
    ACTIONS(327), 1,
      sym__newline,
    STATE(74), 1,
      aux_sym_option_list_repeat1,
  [1364] = 1,
    ACTIONS(162), 2,
      sym__newline,
      sym__char_bullet,
  [1369] = 2,
    ACTIONS(329), 1,
      sym__newline,
    ACTIONS(331), 1,
      sym__blankline,
  [1376] = 1,
    ACTIONS(333), 2,
      sym__newline,
      sym__blankline,
  [1381] = 1,
    ACTIONS(335), 2,
      sym__newline,
      sym__blankline,
  [1386] = 1,
    ACTIONS(337), 2,
      sym__newline,
      sym__blankline,
  [1391] = 2,
    ACTIONS(229), 1,
      sym__newline,
    STATE(74), 1,
      aux_sym_option_list_repeat1,
  [1398] = 2,
    ACTIONS(339), 1,
      sym__newline,
    ACTIONS(341), 1,
      sym__blankline,
  [1405] = 1,
    ACTIONS(343), 2,
      sym__newline,
      sym__blankline,
  [1410] = 1,
    ACTIONS(345), 2,
      sym__newline,
      sym__blankline,
  [1415] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(205), 1,
      sym__numeric_bullet,
  [1422] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(209), 1,
      sym_field_name,
  [1429] = 1,
    ACTIONS(347), 2,
      sym__newline,
      sym__blankline,
  [1434] = 1,
    ACTIONS(349), 2,
      sym__newline,
      sym__blankline,
  [1439] = 2,
    ACTIONS(302), 1,
      sym__newline,
    ACTIONS(351), 1,
      aux_sym_target_token2,
  [1446] = 1,
    ACTIONS(353), 2,
      sym__newline,
      sym__blankline,
  [1451] = 2,
    ACTIONS(355), 1,
      sym__newline,
    ACTIONS(357), 1,
      sym__blankline,
  [1458] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(256), 1,
      sym__whitespace,
  [1465] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(359), 1,
      sym__blankline,
  [1472] = 1,
    ACTIONS(361), 2,
      sym__newline,
      sym__blankline,
  [1477] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(363), 1,
      sym__underline,
  [1484] = 2,
    ACTIONS(329), 1,
      sym__newline,
    ACTIONS(365), 1,
      sym__blankline,
  [1491] = 2,
    ACTIONS(323), 1,
      sym__newline,
    ACTIONS(367), 1,
      sym__blankline,
  [1498] = 1,
    ACTIONS(353), 1,
      sym__newline,
  [1502] = 1,
    ACTIONS(335), 1,
      sym__newline,
  [1506] = 1,
    ACTIONS(319), 1,
      sym__newline,
  [1510] = 1,
    ACTIONS(347), 1,
      sym__newline,
  [1514] = 1,
    ACTIONS(337), 1,
      sym__newline,
  [1518] = 1,
    ACTIONS(333), 1,
      sym__newline,
  [1522] = 1,
    ACTIONS(369), 1,
      sym__newline,
  [1526] = 1,
    ACTIONS(349), 1,
      sym__newline,
  [1530] = 1,
    ACTIONS(329), 1,
      sym__newline,
  [1534] = 1,
    ACTIONS(345), 1,
      sym__newline,
  [1538] = 1,
    ACTIONS(343), 1,
      sym__newline,
  [1542] = 1,
    ACTIONS(323), 1,
      sym__newline,
  [1546] = 1,
    ACTIONS(355), 1,
      sym__newline,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 50,
  [SMALL_STATE(6)] = 100,
  [SMALL_STATE(7)] = 125,
  [SMALL_STATE(8)] = 150,
  [SMALL_STATE(9)] = 175,
  [SMALL_STATE(10)] = 197,
  [SMALL_STATE(11)] = 219,
  [SMALL_STATE(12)] = 241,
  [SMALL_STATE(13)] = 262,
  [SMALL_STATE(14)] = 283,
  [SMALL_STATE(15)] = 304,
  [SMALL_STATE(16)] = 323,
  [SMALL_STATE(17)] = 342,
  [SMALL_STATE(18)] = 361,
  [SMALL_STATE(19)] = 380,
  [SMALL_STATE(20)] = 399,
  [SMALL_STATE(21)] = 418,
  [SMALL_STATE(22)] = 437,
  [SMALL_STATE(23)] = 460,
  [SMALL_STATE(24)] = 483,
  [SMALL_STATE(25)] = 509,
  [SMALL_STATE(26)] = 534,
  [SMALL_STATE(27)] = 545,
  [SMALL_STATE(28)] = 559,
  [SMALL_STATE(29)] = 573,
  [SMALL_STATE(30)] = 583,
  [SMALL_STATE(31)] = 593,
  [SMALL_STATE(32)] = 603,
  [SMALL_STATE(33)] = 613,
  [SMALL_STATE(34)] = 623,
  [SMALL_STATE(35)] = 633,
  [SMALL_STATE(36)] = 643,
  [SMALL_STATE(37)] = 656,
  [SMALL_STATE(38)] = 669,
  [SMALL_STATE(39)] = 682,
  [SMALL_STATE(40)] = 695,
  [SMALL_STATE(41)] = 706,
  [SMALL_STATE(42)] = 719,
  [SMALL_STATE(43)] = 732,
  [SMALL_STATE(44)] = 745,
  [SMALL_STATE(45)] = 756,
  [SMALL_STATE(46)] = 767,
  [SMALL_STATE(47)] = 780,
  [SMALL_STATE(48)] = 793,
  [SMALL_STATE(49)] = 806,
  [SMALL_STATE(50)] = 819,
  [SMALL_STATE(51)] = 832,
  [SMALL_STATE(52)] = 845,
  [SMALL_STATE(53)] = 858,
  [SMALL_STATE(54)] = 871,
  [SMALL_STATE(55)] = 884,
  [SMALL_STATE(56)] = 897,
  [SMALL_STATE(57)] = 910,
  [SMALL_STATE(58)] = 923,
  [SMALL_STATE(59)] = 933,
  [SMALL_STATE(60)] = 943,
  [SMALL_STATE(61)] = 953,
  [SMALL_STATE(62)] = 963,
  [SMALL_STATE(63)] = 973,
  [SMALL_STATE(64)] = 983,
  [SMALL_STATE(65)] = 993,
  [SMALL_STATE(66)] = 1003,
  [SMALL_STATE(67)] = 1013,
  [SMALL_STATE(68)] = 1023,
  [SMALL_STATE(69)] = 1033,
  [SMALL_STATE(70)] = 1041,
  [SMALL_STATE(71)] = 1051,
  [SMALL_STATE(72)] = 1059,
  [SMALL_STATE(73)] = 1069,
  [SMALL_STATE(74)] = 1079,
  [SMALL_STATE(75)] = 1089,
  [SMALL_STATE(76)] = 1099,
  [SMALL_STATE(77)] = 1109,
  [SMALL_STATE(78)] = 1119,
  [SMALL_STATE(79)] = 1129,
  [SMALL_STATE(80)] = 1139,
  [SMALL_STATE(81)] = 1149,
  [SMALL_STATE(82)] = 1159,
  [SMALL_STATE(83)] = 1169,
  [SMALL_STATE(84)] = 1175,
  [SMALL_STATE(85)] = 1185,
  [SMALL_STATE(86)] = 1195,
  [SMALL_STATE(87)] = 1205,
  [SMALL_STATE(88)] = 1215,
  [SMALL_STATE(89)] = 1225,
  [SMALL_STATE(90)] = 1235,
  [SMALL_STATE(91)] = 1243,
  [SMALL_STATE(92)] = 1253,
  [SMALL_STATE(93)] = 1263,
  [SMALL_STATE(94)] = 1271,
  [SMALL_STATE(95)] = 1281,
  [SMALL_STATE(96)] = 1291,
  [SMALL_STATE(97)] = 1296,
  [SMALL_STATE(98)] = 1303,
  [SMALL_STATE(99)] = 1310,
  [SMALL_STATE(100)] = 1317,
  [SMALL_STATE(101)] = 1324,
  [SMALL_STATE(102)] = 1331,
  [SMALL_STATE(103)] = 1338,
  [SMALL_STATE(104)] = 1343,
  [SMALL_STATE(105)] = 1350,
  [SMALL_STATE(106)] = 1357,
  [SMALL_STATE(107)] = 1364,
  [SMALL_STATE(108)] = 1369,
  [SMALL_STATE(109)] = 1376,
  [SMALL_STATE(110)] = 1381,
  [SMALL_STATE(111)] = 1386,
  [SMALL_STATE(112)] = 1391,
  [SMALL_STATE(113)] = 1398,
  [SMALL_STATE(114)] = 1405,
  [SMALL_STATE(115)] = 1410,
  [SMALL_STATE(116)] = 1415,
  [SMALL_STATE(117)] = 1422,
  [SMALL_STATE(118)] = 1429,
  [SMALL_STATE(119)] = 1434,
  [SMALL_STATE(120)] = 1439,
  [SMALL_STATE(121)] = 1446,
  [SMALL_STATE(122)] = 1451,
  [SMALL_STATE(123)] = 1458,
  [SMALL_STATE(124)] = 1465,
  [SMALL_STATE(125)] = 1472,
  [SMALL_STATE(126)] = 1477,
  [SMALL_STATE(127)] = 1484,
  [SMALL_STATE(128)] = 1491,
  [SMALL_STATE(129)] = 1498,
  [SMALL_STATE(130)] = 1502,
  [SMALL_STATE(131)] = 1506,
  [SMALL_STATE(132)] = 1510,
  [SMALL_STATE(133)] = 1514,
  [SMALL_STATE(134)] = 1518,
  [SMALL_STATE(135)] = 1522,
  [SMALL_STATE(136)] = 1526,
  [SMALL_STATE(137)] = 1530,
  [SMALL_STATE(138)] = 1534,
  [SMALL_STATE(139)] = 1538,
  [SMALL_STATE(140)] = 1542,
  [SMALL_STATE(141)] = 1546,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(95),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(93),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(20),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(2),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(68),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(124),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(32),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(30),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(29),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(24),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_block_repeat1, 2), SHIFT_REPEAT(60),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_block_repeat1, 2), SHIFT_REPEAT(32),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_block_repeat1, 2), SHIFT_REPEAT(30),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_block_repeat1, 2), SHIFT_REPEAT(29),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__line_repeat1, 2), SHIFT_REPEAT(6),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__line_repeat1, 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 2),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 3),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__line_repeat1, 2), SHIFT_REPEAT(9),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__line_repeat1, 2), SHIFT_REPEAT(13),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__transition_block, 2),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__transition_block, 2),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__body_elements, 2),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__body_elements, 2),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 4, .production_id = 3),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 4, .production_id = 3),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 3, .production_id = 2),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 3, .production_id = 2),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__explicit_markup_block_repeat1, 2), SHIFT_REPEAT(120),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__explicit_markup_block_repeat1, 2), SHIFT_REPEAT(25),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 2),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bullet_list, 1),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bullet_list_repeat2, 2),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bullet_list_repeat2, 2), SHIFT_REPEAT(32),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__list_block_repeat1, 2),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enumerated_list_repeat1, 2), SHIFT_REPEAT(30),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bullet_list_repeat1, 2), SHIFT_REPEAT(38),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bullet_list_repeat1, 2),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bullet_list_repeat1, 2), SHIFT_REPEAT(44),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bullet_list_repeat2, 2), SHIFT(44),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enumerated_list_repeat1, 2),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_list_repeat1, 2),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bullet_list_repeat1, 2), SHIFT_REPEAT(53),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_option_list_repeat2, 2), SHIFT_REPEAT(60),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(21),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_list_repeat1, 2), SHIFT_REPEAT(29),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_option_list, 2), SHIFT(97),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_list, 2),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_enumerated_list, 2), SHIFT(116),
  [245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_enumerated_list, 2), SHIFT(47),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_field_list, 2), SHIFT(117),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_field_list, 2), SHIFT(49),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bullet_list_item, 3),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__explicit_markup_block_repeat1, 2),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_option_list_repeat2, 2),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_option_list_repeat1, 2),
  [268] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_option_list_repeat1, 2), SHIFT_REPEAT(75),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_option_list, 1), SHIFT(97),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_list, 1),
  [282] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_field_list, 1), SHIFT(117),
  [285] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_field_list, 1), SHIFT(49),
  [288] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_enumerated_list, 1), SHIFT(116),
  [291] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_enumerated_list, 1), SHIFT(47),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 2),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__anonymous_target, 1),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__numeric_list_item, 3),
  [306] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_option_list_repeat1, 1), REDUCE(aux_sym_option_list_repeat2, 2),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_option_list_repeat1, 1),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [313] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_substitution_definition, 3),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_block, 1),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__explicit_markup_block, 1),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footnote, 3),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 4),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_citation, 3),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 1),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_list_item, 2),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__anonymous_target, 2),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 3),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__embed_directive, 4),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, .production_id = 1),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__explicit_markup_block, 2),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_block, 2),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
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
