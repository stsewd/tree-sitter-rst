#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 174
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 104
#define ALIAS_COUNT 0
#define TOKEN_COUNT 54
#define EXTERNAL_TOKEN_COUNT 2
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
  aux_sym__line_token1 = 22,
  anon_sym_DASH = 23,
  anon_sym_DOT = 24,
  anon_sym_COMMA = 25,
  anon_sym_COLON = 26,
  anon_sym_SEMI = 27,
  anon_sym_BANG = 28,
  anon_sym_QMARK = 29,
  anon_sym_BSLASH = 30,
  anon_sym_SLASH = 31,
  anon_sym_SQUOTE = 32,
  anon_sym_DQUOTE = 33,
  anon_sym_RPAREN = 34,
  anon_sym_RBRACK = 35,
  anon_sym_RBRACE = 36,
  anon_sym_GT = 37,
  anon_sym_LT = 38,
  anon_sym_LPAREN = 39,
  anon_sym_LBRACK = 40,
  anon_sym_LBRACE = 41,
  aux_sym__char_token1 = 42,
  sym_emphasis = 43,
  sym_strong = 44,
  sym_interpreted_text = 45,
  sym_literal = 46,
  sym_substitution_reference = 47,
  sym__inline_target = 48,
  sym_footnote_reference = 49,
  aux_sym_reference_token1 = 50,
  aux_sym_reference_token2 = 51,
  sym__newline = 52,
  sym__blankline = 53,
  sym_document = 54,
  sym__body_elements = 55,
  sym_paragraph = 56,
  sym__list = 57,
  sym_bullet_list = 58,
  sym__bullet_list_item = 59,
  sym_enumerated_list = 60,
  sym__enumerated_list_item = 61,
  sym_field_list = 62,
  sym_field = 63,
  sym_option_list = 64,
  sym_option_list_item = 65,
  sym_line_block = 66,
  sym__single_line_block = 67,
  sym__markup_block = 68,
  sym__footnote_block = 69,
  sym_footnote = 70,
  sym__citation_block = 71,
  sym_citation = 72,
  sym__hyperlink_target_block = 73,
  sym_target = 74,
  sym__anoynymous_hyperlink_target_block = 75,
  sym__anonymous_target = 76,
  sym__directive_block = 77,
  sym_directive = 78,
  sym__substitution_definition_block = 79,
  sym_substitution_definition = 80,
  sym__embed_directive = 81,
  sym__comment_block = 82,
  sym_comment = 83,
  sym__line = 84,
  sym__char = 85,
  sym__inline_markup = 86,
  sym_reference = 87,
  aux_sym_document_repeat1 = 88,
  aux_sym_paragraph_repeat1 = 89,
  aux_sym_bullet_list_repeat1 = 90,
  aux_sym__bullet_list_item_repeat1 = 91,
  aux_sym_enumerated_list_repeat1 = 92,
  aux_sym_field_list_repeat1 = 93,
  aux_sym_option_list_repeat1 = 94,
  aux_sym_line_block_repeat1 = 95,
  aux_sym__footnote_block_repeat1 = 96,
  aux_sym__citation_block_repeat1 = 97,
  aux_sym__hyperlink_target_block_repeat1 = 98,
  aux_sym__anoynymous_hyperlink_target_block_repeat1 = 99,
  aux_sym__directive_block_repeat1 = 100,
  aux_sym__substitution_definition_block_repeat1 = 101,
  aux_sym__comment_block_repeat1 = 102,
  aux_sym__line_repeat1 = 103,
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
  [anon_sym_DASH] = "-",
  [anon_sym_DOT] = ".",
  [anon_sym_COMMA] = ",",
  [anon_sym_COLON] = ":",
  [anon_sym_SEMI] = ";",
  [anon_sym_BANG] = "!",
  [anon_sym_QMARK] = "?",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_SLASH] = "/",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_RPAREN] = ")",
  [anon_sym_RBRACK] = "]",
  [anon_sym_RBRACE] = "}",
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
  [anon_sym_LPAREN] = "(",
  [anon_sym_LBRACK] = "[",
  [anon_sym_LBRACE] = "{",
  [aux_sym__char_token1] = "_char_token1",
  [sym_emphasis] = "emphasis",
  [sym_strong] = "strong",
  [sym_interpreted_text] = "interpreted_text",
  [sym_literal] = "literal",
  [sym_substitution_reference] = "substitution_reference",
  [sym__inline_target] = "target",
  [sym_footnote_reference] = "footnote_reference",
  [aux_sym_reference_token1] = "reference_token1",
  [aux_sym_reference_token2] = "reference_token2",
  [sym__newline] = "_newline",
  [sym__blankline] = "_blankline",
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
  [sym__char] = "_char",
  [sym__inline_markup] = "_inline_markup",
  [sym_reference] = "reference",
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
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [aux_sym__char_token1] = aux_sym__char_token1,
  [sym_emphasis] = sym_emphasis,
  [sym_strong] = sym_strong,
  [sym_interpreted_text] = sym_interpreted_text,
  [sym_literal] = sym_literal,
  [sym_substitution_reference] = sym_substitution_reference,
  [sym__inline_target] = sym_target,
  [sym_footnote_reference] = sym_footnote_reference,
  [aux_sym_reference_token1] = aux_sym_reference_token1,
  [aux_sym_reference_token2] = aux_sym_reference_token2,
  [sym__newline] = sym__newline,
  [sym__blankline] = sym__blankline,
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
  [sym__char] = sym__char,
  [sym__inline_markup] = sym__inline_markup,
  [sym_reference] = sym_reference,
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
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH] = {
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
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
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
  [aux_sym__char_token1] = {
    .visible = false,
    .named = false,
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
  [aux_sym_reference_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_reference_token2] = {
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
  [sym__char] = {
    .visible = false,
    .named = true,
  },
  [sym__inline_markup] = {
    .visible = false,
    .named = true,
  },
  [sym_reference] = {
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
};

static TSSymbol ts_alias_sequences[1][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(147);
      if (lookahead == '\t') ADVANCE(176);
      if (lookahead == 11) ADVANCE(177);
      if (lookahead == '\f') ADVANCE(179);
      if (lookahead == '\r') ADVANCE(148);
      if (lookahead == ' ') ADVANCE(175);
      if (lookahead == '!') ADVANCE(208);
      if (lookahead == '"') ADVANCE(220);
      if (lookahead == '\'') ADVANCE(218);
      if (lookahead == '(') ADVANCE(232);
      if (lookahead == ')') ADVANCE(222);
      if (lookahead == ',') ADVANCE(201);
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == '.') ADVANCE(198);
      if (lookahead == '/') ADVANCE(215);
      if (lookahead == ':') ADVANCE(203);
      if (lookahead == ';') ADVANCE(206);
      if (lookahead == '<') ADVANCE(230);
      if (lookahead == '>') ADVANCE(228);
      if (lookahead == '?') ADVANCE(210);
      if (lookahead == '[') ADVANCE(234);
      if (lookahead == '\\') ADVANCE(212);
      if (lookahead == ']') ADVANCE(224);
      if (lookahead == '{') ADVANCE(236);
      if (lookahead == '|') ADVANCE(158);
      if (lookahead == '}') ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(148);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(176);
      if (lookahead == 11) ADVANCE(177);
      if (lookahead == '\f') ADVANCE(179);
      if (lookahead == ' ') ADVANCE(175);
      if (lookahead == '!') ADVANCE(208);
      if (lookahead == '"') ADVANCE(220);
      if (lookahead == '\'') ADVANCE(218);
      if (lookahead == '(') ADVANCE(232);
      if (lookahead == ')') ADVANCE(222);
      if (lookahead == ',') ADVANCE(201);
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == '.') ADVANCE(198);
      if (lookahead == '/') ADVANCE(215);
      if (lookahead == ':') ADVANCE(203);
      if (lookahead == ';') ADVANCE(206);
      if (lookahead == '<') ADVANCE(230);
      if (lookahead == '>') ADVANCE(228);
      if (lookahead == '?') ADVANCE(210);
      if (lookahead == '[') ADVANCE(234);
      if (lookahead == '\\') ADVANCE(214);
      if (lookahead == ']') ADVANCE(224);
      if (lookahead == '{') ADVANCE(236);
      if (lookahead == '}') ADVANCE(226);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(238);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(176);
      if (lookahead == 11) ADVANCE(178);
      if (lookahead == '\f') ADVANCE(180);
      if (lookahead == ' ') ADVANCE(175);
      if (lookahead == '!') ADVANCE(209);
      if (lookahead == '"') ADVANCE(221);
      if (lookahead == '\'') ADVANCE(219);
      if (lookahead == '(') ADVANCE(233);
      if (lookahead == ')') ADVANCE(223);
      if (lookahead == '*') ADVANCE(239);
      if (lookahead == ',') ADVANCE(202);
      if (lookahead == '-') ADVANCE(196);
      if (lookahead == '.') ADVANCE(200);
      if (lookahead == '/') ADVANCE(217);
      if (lookahead == ':') ADVANCE(205);
      if (lookahead == ';') ADVANCE(207);
      if (lookahead == '<') ADVANCE(231);
      if (lookahead == '>') ADVANCE(229);
      if (lookahead == '?') ADVANCE(211);
      if (lookahead == '[') ADVANCE(235);
      if (lookahead == '\\') ADVANCE(213);
      if (lookahead == ']') ADVANCE(225);
      if (lookahead == '_') ADVANCE(244);
      if (lookahead == '`') ADVANCE(248);
      if (lookahead == '{') ADVANCE(237);
      if (lookahead == '|') ADVANCE(247);
      if (lookahead == '}') ADVANCE(227);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(245);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(123);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(105);
      if (lookahead == ' ') ADVANCE(124);
      if (lookahead == ',') ADVANCE(6);
      if (lookahead == '=') ADVANCE(76);
      if (lookahead == '_') ADVANCE(263);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != '`') ADVANCE(77);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(123);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(105);
      if (lookahead == ' ') ADVANCE(124);
      if (lookahead == ',') ADVANCE(6);
      if (lookahead == '=') ADVANCE(76);
      if (lookahead == '_') ADVANCE(4);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != '`') ADVANCE(77);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(21);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(21);
      if (lookahead == '_') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '`') ADVANCE(77);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(66);
      if (lookahead == '*') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(66);
      if (lookahead == '*') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(68);
      if (lookahead == '*') ADVANCE(69);
      if (lookahead == '_') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(77);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(77);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead == '_') ADVANCE(264);
      if (lookahead == '`') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(131);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(77);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead == '_') ADVANCE(266);
      if (lookahead == '`') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(134);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(77);
      if (lookahead == '_') ADVANCE(266);
      if (lookahead == '`') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(16);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(253);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead == '_') ADVANCE(264);
      if (lookahead == '`') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(131);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(253);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead == '_') ADVANCE(14);
      if (lookahead == '`') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(131);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == '*') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\\') ADVANCE(131);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '*') ADVANCE(19);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead == '_') ADVANCE(266);
      if (lookahead == '`') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(134);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '*') ADVANCE(19);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead == '_') ADVANCE(17);
      if (lookahead == '`') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(134);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead == '*') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\\') ADVANCE(134);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '*') ADVANCE(255);
      if (lookahead == '_') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(77);
      END_STATE();
    case 20:
      if (lookahead == '*') ADVANCE(254);
      END_STATE();
    case 21:
      if (lookahead == '+') ADVANCE(140);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(140);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 23:
      if (lookahead == '.') ADVANCE(102);
      if (lookahead == '_') ADVANCE(283);
      if (lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'I' ||
          lookahead == 'L' ||
          lookahead == 'M' ||
          lookahead == 'V' ||
          lookahead == 'X') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(77);
      END_STATE();
    case 24:
      if (lookahead == '.') ADVANCE(102);
      if (lookahead == '_') ADVANCE(283);
      if (lookahead == 'c' ||
          lookahead == 'd' ||
          lookahead == 'i' ||
          lookahead == 'l' ||
          lookahead == 'm' ||
          lookahead == 'v' ||
          lookahead == 'x') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(77);
      END_STATE();
    case 25:
      if (lookahead == '.') ADVANCE(102);
      if (lookahead == '_') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(77);
      END_STATE();
    case 26:
      if (lookahead == '.') ADVANCE(190);
      END_STATE();
    case 27:
      if (lookahead == '.') ADVANCE(26);
      END_STATE();
    case 28:
      if (lookahead == '.') ADVANCE(120);
      END_STATE();
    case 29:
      if (lookahead == '.') ADVANCE(129);
      END_STATE();
    case 30:
      if (lookahead == '.') ADVANCE(130);
      END_STATE();
    case 31:
      if (lookahead == '.') ADVANCE(30);
      END_STATE();
    case 32:
      if (lookahead == ':') ADVANCE(77);
      if (lookahead == '_') ADVANCE(269);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '`') ADVANCE(35);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 33:
      if (lookahead == ':') ADVANCE(77);
      if (lookahead == '_') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '`') ADVANCE(35);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 34:
      if (lookahead == ':') ADVANCE(167);
      END_STATE();
    case 35:
      if (lookahead == ':') ADVANCE(167);
      if (lookahead == '_') ADVANCE(83);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 36:
      if (lookahead == ':') ADVANCE(167);
      if (lookahead != 0) ADVANCE(83);
      END_STATE();
    case 37:
      if (lookahead == ':') ADVANCE(169);
      if (lookahead == '_') ADVANCE(43);
      if (lookahead == '`') ADVANCE(35);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 38:
      if (lookahead == ':') ADVANCE(169);
      if (lookahead == '`') ADVANCE(83);
      if (lookahead != 0) ADVANCE(43);
      END_STATE();
    case 39:
      if (lookahead == ':') ADVANCE(174);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 40:
      if (lookahead == ':') ADVANCE(168);
      if (lookahead == '_') ADVANCE(269);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '`') ADVANCE(83);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 41:
      if (lookahead == ':') ADVANCE(168);
      if (lookahead == '_') ADVANCE(269);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '`') ADVANCE(35);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 42:
      if (lookahead == ':') ADVANCE(173);
      if (lookahead == '_') ADVANCE(286);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(77);
      END_STATE();
    case 43:
      if (lookahead == ':') ADVANCE(97);
      if (lookahead == '_') ADVANCE(43);
      if (lookahead == '`') ADVANCE(35);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 44:
      if (lookahead == ':') ADVANCE(189);
      if (lookahead != 0) ADVANCE(45);
      END_STATE();
    case 45:
      if (lookahead == ':') ADVANCE(125);
      if (lookahead != 0) ADVANCE(45);
      END_STATE();
    case 46:
      if (lookahead == ':') ADVANCE(39);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 47:
      if (lookahead == ':') ADVANCE(42);
      if (lookahead == '_') ADVANCE(286);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(77);
      END_STATE();
    case 48:
      if (lookahead == ':') ADVANCE(106);
      if (lookahead == '_') ADVANCE(272);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '`') ADVANCE(45);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 49:
      if (lookahead == ':') ADVANCE(106);
      if (lookahead == '_') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '`') ADVANCE(45);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 50:
      if (lookahead == '[') ADVANCE(7);
      if (lookahead == '_') ADVANCE(80);
      if (lookahead == '|') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 51:
      if (lookahead == '[') ADVANCE(9);
      if (lookahead == '_') ADVANCE(268);
      if (lookahead == '|') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(77);
      END_STATE();
    case 52:
      if (lookahead == '[') ADVANCE(8);
      if (lookahead == '_') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 53:
      if (lookahead == '[') ADVANCE(139);
      END_STATE();
    case 54:
      if (lookahead == '\\') ADVANCE(54);
      if (lookahead == '_') ADVANCE(274);
      if (lookahead == '`') ADVANCE(99);
      if (lookahead == '|') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(133);
      if (lookahead != 0) ADVANCE(55);
      END_STATE();
    case 55:
      if (lookahead == '\\') ADVANCE(54);
      if (lookahead == '_') ADVANCE(274);
      if (lookahead == '`') ADVANCE(99);
      if (lookahead == '|') ADVANCE(259);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(133);
      if (lookahead != 0) ADVANCE(55);
      END_STATE();
    case 56:
      if (lookahead == '\\') ADVANCE(54);
      if (lookahead == '_') ADVANCE(56);
      if (lookahead == '`') ADVANCE(99);
      if (lookahead == '|') ADVANCE(259);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(133);
      if (lookahead != 0) ADVANCE(55);
      END_STATE();
    case 57:
      if (lookahead == ']') ADVANCE(79);
      if (lookahead == '_') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(77);
      END_STATE();
    case 58:
      if (lookahead == ']') ADVANCE(79);
      if (lookahead == '_') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(77);
      END_STATE();
    case 59:
      if (lookahead == ']') ADVANCE(79);
      if (lookahead == '_') ADVANCE(284);
      if (lookahead == '-' ||
          lookahead == '.') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(77);
      END_STATE();
    case 60:
      if (lookahead == ']') ADVANCE(79);
      if (lookahead == '_') ADVANCE(284);
      if (lookahead == '-' ||
          lookahead == '.') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(77);
      END_STATE();
    case 61:
      if (lookahead == ']') ADVANCE(79);
      if (lookahead == '_') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(77);
      END_STATE();
    case 62:
      if (lookahead == ']') ADVANCE(79);
      if (lookahead == '_') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(77);
      END_STATE();
    case 63:
      if (lookahead == ']') ADVANCE(126);
      END_STATE();
    case 64:
      if (lookahead == ']') ADVANCE(126);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 65:
      if (lookahead == ']') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 66:
      if (lookahead == ']') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 67:
      if (lookahead == ']') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 68:
      if (lookahead == ']') ADVANCE(107);
      if (lookahead == '_') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(77);
      END_STATE();
    case 69:
      if (lookahead == ']') ADVANCE(107);
      if (lookahead == '_') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(77);
      END_STATE();
    case 70:
      if (lookahead == ']') ADVANCE(107);
      if (lookahead == '_') ADVANCE(291);
      if (lookahead == '-' ||
          lookahead == '.') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(77);
      END_STATE();
    case 71:
      if (lookahead == ']') ADVANCE(107);
      if (lookahead == '_') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(77);
      END_STATE();
    case 72:
      if (lookahead == ']') ADVANCE(107);
      if (lookahead == '_') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(77);
      END_STATE();
    case 73:
      if (lookahead == ']') ADVANCE(127);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 74:
      if (lookahead == ']') ADVANCE(108);
      if (lookahead == '_') ADVANCE(291);
      if (lookahead == '-' ||
          lookahead == '.') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(77);
      END_STATE();
    case 75:
      if (lookahead == '_') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(77);
      END_STATE();
    case 76:
      if (lookahead == '_') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(77);
      END_STATE();
    case 77:
      if (lookahead == '_') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(77);
      END_STATE();
    case 78:
      if (lookahead == '_') ADVANCE(284);
      if (lookahead == '-' ||
          lookahead == '.') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(77);
      END_STATE();
    case 79:
      if (lookahead == '_') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(77);
      END_STATE();
    case 80:
      if (lookahead == '_') ADVANCE(34);
      if (lookahead == '`') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(36);
      END_STATE();
    case 81:
      if (lookahead == '_') ADVANCE(280);
      if (lookahead == '`') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(90);
      END_STATE();
    case 82:
      if (lookahead == '_') ADVANCE(286);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(77);
      END_STATE();
    case 83:
      if (lookahead == '_') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(35);
      END_STATE();
    case 84:
      if (lookahead == '_') ADVANCE(84);
      if (lookahead == '`') ADVANCE(101);
      if (lookahead == '|') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(85);
      END_STATE();
    case 85:
      if (lookahead == '_') ADVANCE(288);
      if (lookahead == '`') ADVANCE(101);
      if (lookahead == '|') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(85);
      END_STATE();
    case 86:
      if (lookahead == '_') ADVANCE(288);
      if (lookahead == '`') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(85);
      END_STATE();
    case 87:
      if (lookahead == '_') ADVANCE(171);
      END_STATE();
    case 88:
      if (lookahead == '_') ADVANCE(88);
      if (lookahead == '-' ||
          lookahead == '.') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(77);
      END_STATE();
    case 89:
      if (lookahead == '_') ADVANCE(89);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(77);
      END_STATE();
    case 90:
      if (lookahead == '_') ADVANCE(289);
      if (lookahead == '|') ADVANCE(112);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '`') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(86);
      END_STATE();
    case 91:
      if (lookahead == '_') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(77);
      END_STATE();
    case 92:
      if (lookahead == '_') ADVANCE(291);
      if (lookahead == '-' ||
          lookahead == '.') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(77);
      END_STATE();
    case 93:
      if (lookahead == '_') ADVANCE(93);
      if (lookahead == '-' ||
          lookahead == '.') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(77);
      END_STATE();
    case 94:
      if (lookahead == '`') ADVANCE(256);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\\') ADVANCE(132);
      if (lookahead != 0) ADVANCE(94);
      END_STATE();
    case 95:
      if (lookahead == '`') ADVANCE(260);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\\') ADVANCE(135);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 96:
      if (lookahead == '`') ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(116);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 97:
      if (lookahead == '`') ADVANCE(34);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 98:
      if (lookahead == '`') ADVANCE(257);
      END_STATE();
    case 99:
      if (lookahead == '|') ADVANCE(258);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\\') ADVANCE(133);
      if (lookahead != 0) ADVANCE(99);
      END_STATE();
    case 100:
      if (lookahead == '|') ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(114);
      END_STATE();
    case 101:
      if (lookahead == '|') ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 102:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(152);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(153);
      if (lookahead == '_') ADVANCE(283);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != '`') ADVANCE(77);
      END_STATE();
    case 103:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(123);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(105);
      if (lookahead == ',') ADVANCE(6);
      if (lookahead == '_') ADVANCE(294);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != '`') ADVANCE(77);
      END_STATE();
    case 104:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(123);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(105);
      if (lookahead == ',') ADVANCE(6);
      if (lookahead == '_') ADVANCE(104);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != '`') ADVANCE(77);
      END_STATE();
    case 105:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(156);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(157);
      if (lookahead == '_') ADVANCE(283);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != '`') ADVANCE(77);
      END_STATE();
    case 106:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(154);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(155);
      if (lookahead == '_') ADVANCE(283);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != '`') ADVANCE(77);
      END_STATE();
    case 107:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(163);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(164);
      if (lookahead == '_') ADVANCE(283);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != '`') ADVANCE(77);
      END_STATE();
    case 108:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(165);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(166);
      if (lookahead == '_') ADVANCE(283);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != '`') ADVANCE(77);
      END_STATE();
    case 109:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(183);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(182);
      if (lookahead == '\r') ADVANCE(114);
      if (lookahead == '|') ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 110:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(183);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(182);
      if (lookahead == '\r') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 111:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(183);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(181);
      if (lookahead == '\r') ADVANCE(114);
      if (lookahead == '_') ADVANCE(288);
      if (lookahead == '`') ADVANCE(101);
      if (lookahead == '|') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(85);
      END_STATE();
    case 112:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(183);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(181);
      if (lookahead == '\r') ADVANCE(114);
      if (lookahead == '_') ADVANCE(288);
      if (lookahead == '`') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(85);
      END_STATE();
    case 113:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f') ADVANCE(123);
      if (lookahead == ' ') ADVANCE(124);
      if (lookahead == ',') ADVANCE(5);
      if (lookahead == '=') ADVANCE(138);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 114:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 115:
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 116:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(96);
      END_STATE();
    case 117:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(149);
      END_STATE();
    case 118:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(149);
      if (lookahead == '-') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 119:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 120:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(152);
      END_STATE();
    case 121:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(152);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '_') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 122:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(123);
      if (lookahead == ',') ADVANCE(5);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 123:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(156);
      END_STATE();
    case 124:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 125:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(154);
      END_STATE();
    case 126:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(163);
      END_STATE();
    case 127:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(165);
      END_STATE();
    case 128:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(142);
      if (lookahead == '#') ADVANCE(28);
      if (lookahead == '*' ||
          lookahead == 8226 ||
          lookahead == 8227 ||
          lookahead == 8259) ADVANCE(117);
      if (lookahead == '+') ADVANCE(119);
      if (lookahead == '-') ADVANCE(118);
      if (lookahead == '.') ADVANCE(29);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == ':') ADVANCE(44);
      if (lookahead == '_') ADVANCE(87);
      if (lookahead == '|') ADVANCE(160);
      if (lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'I' ||
          lookahead == 'L' ||
          lookahead == 'M' ||
          lookahead == 'V' ||
          lookahead == 'X') ADVANCE(184);
      if (lookahead == 'c' ||
          lookahead == 'd' ||
          lookahead == 'i' ||
          lookahead == 'l' ||
          lookahead == 'm' ||
          lookahead == 'v' ||
          lookahead == 'x') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(187);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 129:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(52);
      END_STATE();
    case 130:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(53);
      END_STATE();
    case 131:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\\') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(15);
      END_STATE();
    case 132:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\\') ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(94);
      END_STATE();
    case 133:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\\') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '|') ADVANCE(99);
      END_STATE();
    case 134:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\\') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(18);
      END_STATE();
    case 135:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\\') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(95);
      END_STATE();
    case 136:
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '_') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 137:
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '_') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 138:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 139:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 140:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 141:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(148);
      END_STATE();
    case 142:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 143:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(100);
      END_STATE();
    case 144:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(96);
      END_STATE();
    case 145:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(95);
      END_STATE();
    case 146:
      if (eof) ADVANCE(147);
      if (lookahead == '\t') ADVANCE(176);
      if (lookahead == 11) ADVANCE(178);
      if (lookahead == '\f') ADVANCE(180);
      if (lookahead == ' ') ADVANCE(175);
      if (lookahead == '!') ADVANCE(209);
      if (lookahead == '"') ADVANCE(221);
      if (lookahead == '#') ADVANCE(243);
      if (lookahead == '\'') ADVANCE(219);
      if (lookahead == '(') ADVANCE(233);
      if (lookahead == ')') ADVANCE(223);
      if (lookahead == '*') ADVANCE(249);
      if (lookahead == '+') ADVANCE(250);
      if (lookahead == ',') ADVANCE(202);
      if (lookahead == '-') ADVANCE(197);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '/') ADVANCE(216);
      if (lookahead == ':') ADVANCE(204);
      if (lookahead == ';') ADVANCE(207);
      if (lookahead == '<') ADVANCE(231);
      if (lookahead == '>') ADVANCE(229);
      if (lookahead == '?') ADVANCE(211);
      if (lookahead == '[') ADVANCE(235);
      if (lookahead == '\\') ADVANCE(213);
      if (lookahead == ']') ADVANCE(225);
      if (lookahead == '_') ADVANCE(246);
      if (lookahead == '`') ADVANCE(248);
      if (lookahead == '{') ADVANCE(237);
      if (lookahead == '|') ADVANCE(159);
      if (lookahead == '}') ADVANCE(227);
      if (lookahead == 8226 ||
          lookahead == 8227 ||
          lookahead == 8259) ADVANCE(251);
      if (lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'I' ||
          lookahead == 'L' ||
          lookahead == 'M' ||
          lookahead == 'V' ||
          lookahead == 'X') ADVANCE(240);
      if (lookahead == 'c' ||
          lookahead == 'd' ||
          lookahead == 'i' ||
          lookahead == 'l' ||
          lookahead == 'm' ||
          lookahead == 'v' ||
          lookahead == 'x') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(242);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(243);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(243);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(245);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym__bullet_list_item_token1);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__char_bullet);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__char_bullet);
      if (lookahead == '*') ADVANCE(253);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead == '_') ADVANCE(264);
      if (lookahead == '`') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(131);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__char_bullet);
      if (lookahead == '_') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(77);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym__enumerated_list_item_token1);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym__enumerated_list_item_token1);
      if (lookahead == '_') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(77);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_field_token1);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_field_token1);
      if (lookahead == '_') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(77);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_option_list_item_token1);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_option_list_item_token1);
      if (lookahead == '_') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(77);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(161);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(162);
      if (lookahead == '_') ADVANCE(274);
      if (lookahead == '`') ADVANCE(99);
      if (lookahead == '|') ADVANCE(77);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(55);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(161);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym__single_line_block_token1);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym__single_line_block_token1);
      if (lookahead == '\\') ADVANCE(54);
      if (lookahead == '_') ADVANCE(274);
      if (lookahead == '`') ADVANCE(99);
      if (lookahead == '|') ADVANCE(259);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(133);
      if (lookahead != 0) ADVANCE(55);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_footnote_token1);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_footnote_token1);
      if (lookahead == '_') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(77);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_citation_token1);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_citation_token1);
      if (lookahead == '_') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(77);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_target_token1);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == '_') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(77);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == '`') ADVANCE(34);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_target_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym___);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym___);
      if (lookahead == '_') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(77);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == '_') ADVANCE(286);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(77);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '_') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_TAB);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_2);
      if (lookahead == '_') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(77);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_3);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_3);
      if (lookahead == '_') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(77);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_substitution_definition_token1);
      if (lookahead == '_') ADVANCE(288);
      if (lookahead == '`') ADVANCE(101);
      if (lookahead == '|') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(85);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_substitution_definition_token1);
      if (lookahead == '|') ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_substitution_definition_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym__embed_directive_token1);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '_') ADVANCE(137);
      if (lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'I' ||
          lookahead == 'L' ||
          lookahead == 'M' ||
          lookahead == 'V' ||
          lookahead == 'X') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym__embed_directive_token1);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '_') ADVANCE(137);
      if (lookahead == 'c' ||
          lookahead == 'd' ||
          lookahead == 'i' ||
          lookahead == 'l' ||
          lookahead == 'm' ||
          lookahead == 'v' ||
          lookahead == 'x') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym__embed_directive_token1);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '_') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym__embed_directive_token1);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '_') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym__embed_directive_token1);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '_') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(50);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(51);
      if (lookahead == '_') ADVANCE(283);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != '`') ADVANCE(77);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym__line_token1);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '_') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(77);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '_') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(77);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '_') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(77);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(149);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(151);
      if (lookahead == '-') ADVANCE(75);
      if (lookahead == '_') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != '`') ADVANCE(77);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(191);
      if (lookahead == '_') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(77);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '_') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(77);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '_') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(77);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(77);
      if (lookahead == '_') ADVANCE(272);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '`') ADVANCE(45);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '_') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(77);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == '_') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(77);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '_') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(77);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead == '_') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(77);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '_') ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '`') ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(193);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(192);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '_') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(77);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '_') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(77);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '_') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(77);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '_') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(77);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead == '_') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(77);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == '_') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(77);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '_') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(77);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '_') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(77);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '_') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(77);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '_') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(77);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '#') ADVANCE(57);
      if (lookahead == '*') ADVANCE(58);
      if (lookahead == '_') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(77);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '_') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(77);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym__char_token1);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym__char_token1);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '_') ADVANCE(264);
      if (lookahead == '`') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(13);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym__char_token1);
      if (lookahead == '.') ADVANCE(102);
      if (lookahead == '_') ADVANCE(283);
      if (lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'I' ||
          lookahead == 'L' ||
          lookahead == 'M' ||
          lookahead == 'V' ||
          lookahead == 'X') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(77);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym__char_token1);
      if (lookahead == '.') ADVANCE(102);
      if (lookahead == '_') ADVANCE(283);
      if (lookahead == 'c' ||
          lookahead == 'd' ||
          lookahead == 'i' ||
          lookahead == 'l' ||
          lookahead == 'm' ||
          lookahead == 'v' ||
          lookahead == 'x') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(77);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym__char_token1);
      if (lookahead == '.') ADVANCE(102);
      if (lookahead == '_') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(77);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym__char_token1);
      if (lookahead == '.') ADVANCE(102);
      if (lookahead == '_') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(77);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym__char_token1);
      if (lookahead == '_') ADVANCE(283);
      if (lookahead == '`') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(77);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym__char_token1);
      if (lookahead == '_') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(77);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym__char_token1);
      if (lookahead == '_') ADVANCE(172);
      if (lookahead == '`') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(77);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym__char_token1);
      if (lookahead == '_') ADVANCE(274);
      if (lookahead == '`') ADVANCE(99);
      if (lookahead == '|') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(55);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym__char_token1);
      if (lookahead == '`') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(94);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym__char_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(149);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(150);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '_') ADVANCE(264);
      if (lookahead == '`') ADVANCE(15);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(13);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym__char_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(149);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(151);
      if (lookahead == '_') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != '`') ADVANCE(77);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym__char_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(149);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(151);
      if (lookahead == '_') ADVANCE(283);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != '`') ADVANCE(77);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_emphasis);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_emphasis);
      if (lookahead == '_') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(77);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_strong);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_strong);
      if (lookahead == '_') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(77);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_interpreted_text);
      if (lookahead == '_') ADVANCE(296);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_literal);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_substitution_reference);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_substitution_reference);
      if (lookahead == '_') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(77);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym__inline_target);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_footnote_reference);
      if (lookahead == '_') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(77);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_reference_token1);
      if (lookahead == '\t') ADVANCE(123);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(105);
      if (lookahead == ' ') ADVANCE(124);
      if (lookahead == ',') ADVANCE(6);
      if (lookahead == '=') ADVANCE(76);
      if (lookahead == '_') ADVANCE(4);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != '`') ADVANCE(77);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_reference_token1);
      if (lookahead == '\t') ADVANCE(123);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(105);
      if (lookahead == ' ') ADVANCE(124);
      if (lookahead == ',') ADVANCE(6);
      if (lookahead == '=') ADVANCE(76);
      if (lookahead == '_') ADVANCE(262);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != '`') ADVANCE(77);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_reference_token1);
      if (lookahead == '*') ADVANCE(253);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead == '_') ADVANCE(265);
      if (lookahead == '`') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(131);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_reference_token1);
      if (lookahead == '*') ADVANCE(253);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead == '_') ADVANCE(14);
      if (lookahead == '`') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(131);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_reference_token1);
      if (lookahead == '*') ADVANCE(19);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead == '_') ADVANCE(267);
      if (lookahead == '`') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(134);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_reference_token1);
      if (lookahead == '*') ADVANCE(19);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead == '_') ADVANCE(17);
      if (lookahead == '`') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(134);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_reference_token1);
      if (lookahead == ':') ADVANCE(77);
      if (lookahead == '_') ADVANCE(271);
      if (lookahead == '`') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_reference_token1);
      if (lookahead == ':') ADVANCE(77);
      if (lookahead == '_') ADVANCE(270);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '`') ADVANCE(35);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_reference_token1);
      if (lookahead == ':') ADVANCE(77);
      if (lookahead == '_') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '`') ADVANCE(35);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_reference_token1);
      if (lookahead == ':') ADVANCE(168);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(77);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_reference_token1);
      if (lookahead == ':') ADVANCE(106);
      if (lookahead == '_') ADVANCE(273);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '`') ADVANCE(45);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_reference_token1);
      if (lookahead == ':') ADVANCE(106);
      if (lookahead == '_') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '`') ADVANCE(45);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_reference_token1);
      if (lookahead == '\\') ADVANCE(54);
      if (lookahead == '_') ADVANCE(275);
      if (lookahead == '`') ADVANCE(99);
      if (lookahead == '|') ADVANCE(259);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(133);
      if (lookahead != 0) ADVANCE(55);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_reference_token1);
      if (lookahead == '\\') ADVANCE(54);
      if (lookahead == '_') ADVANCE(56);
      if (lookahead == '`') ADVANCE(99);
      if (lookahead == '|') ADVANCE(259);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(133);
      if (lookahead != 0) ADVANCE(55);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_reference_token1);
      if (lookahead == ']') ADVANCE(79);
      if (lookahead == '_') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(77);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_reference_token1);
      if (lookahead == ']') ADVANCE(79);
      if (lookahead == '_') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(77);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_reference_token1);
      if (lookahead == ']') ADVANCE(107);
      if (lookahead == '_') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(77);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_reference_token1);
      if (lookahead == ']') ADVANCE(107);
      if (lookahead == '_') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(77);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_reference_token1);
      if (lookahead == '_') ADVANCE(282);
      if (lookahead == '|') ADVANCE(112);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '`') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(86);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_reference_token1);
      if (lookahead == '_') ADVANCE(84);
      if (lookahead == '`') ADVANCE(101);
      if (lookahead == '|') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(85);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_reference_token1);
      if (lookahead == '_') ADVANCE(84);
      if (lookahead == '`') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(85);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_reference_token1);
      if (lookahead == '_') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(77);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_reference_token1);
      if (lookahead == '_') ADVANCE(285);
      if (lookahead == '-' ||
          lookahead == '.') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(77);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_reference_token1);
      if (lookahead == '_') ADVANCE(88);
      if (lookahead == '-' ||
          lookahead == '.') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(77);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_reference_token1);
      if (lookahead == '_') ADVANCE(287);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(77);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_reference_token1);
      if (lookahead == '_') ADVANCE(89);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(77);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_reference_token1);
      if (lookahead == '_') ADVANCE(281);
      if (lookahead == '`') ADVANCE(101);
      if (lookahead == '|') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(85);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_reference_token1);
      if (lookahead == '_') ADVANCE(281);
      if (lookahead == '`') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(85);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_reference_token1);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(77);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_reference_token1);
      if (lookahead == '_') ADVANCE(292);
      if (lookahead == '-' ||
          lookahead == '.') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(77);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_reference_token1);
      if (lookahead == '_') ADVANCE(93);
      if (lookahead == '-' ||
          lookahead == '.') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(77);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_reference_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(123);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(105);
      if (lookahead == ',') ADVANCE(6);
      if (lookahead == '_') ADVANCE(104);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != '`') ADVANCE(77);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_reference_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(123);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(105);
      if (lookahead == ',') ADVANCE(6);
      if (lookahead == '_') ADVANCE(293);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != '`') ADVANCE(77);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_reference_token2);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_reference_token2);
      if (lookahead == '_') ADVANCE(295);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 146, .external_lex_state = 1},
  [2] = {.lex_state = 146, .external_lex_state = 1},
  [3] = {.lex_state = 146, .external_lex_state = 1},
  [4] = {.lex_state = 146, .external_lex_state = 1},
  [5] = {.lex_state = 2, .external_lex_state = 2},
  [6] = {.lex_state = 2, .external_lex_state = 2},
  [7] = {.lex_state = 2, .external_lex_state = 1},
  [8] = {.lex_state = 2, .external_lex_state = 1},
  [9] = {.lex_state = 2, .external_lex_state = 1},
  [10] = {.lex_state = 2, .external_lex_state = 2},
  [11] = {.lex_state = 2, .external_lex_state = 2},
  [12] = {.lex_state = 2, .external_lex_state = 2},
  [13] = {.lex_state = 2, .external_lex_state = 2},
  [14] = {.lex_state = 1, .external_lex_state = 1},
  [15] = {.lex_state = 1, .external_lex_state = 1},
  [16] = {.lex_state = 1, .external_lex_state = 1},
  [17] = {.lex_state = 1, .external_lex_state = 2},
  [18] = {.lex_state = 1, .external_lex_state = 2},
  [19] = {.lex_state = 1, .external_lex_state = 2},
  [20] = {.lex_state = 1, .external_lex_state = 2},
  [21] = {.lex_state = 1, .external_lex_state = 2},
  [22] = {.lex_state = 1, .external_lex_state = 1},
  [23] = {.lex_state = 1, .external_lex_state = 2},
  [24] = {.lex_state = 1, .external_lex_state = 1},
  [25] = {.lex_state = 1, .external_lex_state = 1},
  [26] = {.lex_state = 1, .external_lex_state = 1},
  [27] = {.lex_state = 1, .external_lex_state = 2},
  [28] = {.lex_state = 1, .external_lex_state = 2},
  [29] = {.lex_state = 1, .external_lex_state = 2},
  [30] = {.lex_state = 1, .external_lex_state = 2},
  [31] = {.lex_state = 1, .external_lex_state = 2},
  [32] = {.lex_state = 1, .external_lex_state = 2},
  [33] = {.lex_state = 1, .external_lex_state = 2},
  [34] = {.lex_state = 1, .external_lex_state = 2},
  [35] = {.lex_state = 1, .external_lex_state = 1},
  [36] = {.lex_state = 1, .external_lex_state = 1},
  [37] = {.lex_state = 1, .external_lex_state = 2},
  [38] = {.lex_state = 1, .external_lex_state = 2},
  [39] = {.lex_state = 128, .external_lex_state = 2},
  [40] = {.lex_state = 1, .external_lex_state = 2},
  [41] = {.lex_state = 128, .external_lex_state = 2},
  [42] = {.lex_state = 1, .external_lex_state = 2},
  [43] = {.lex_state = 128, .external_lex_state = 2},
  [44] = {.lex_state = 128, .external_lex_state = 2},
  [45] = {.lex_state = 128, .external_lex_state = 2},
  [46] = {.lex_state = 128, .external_lex_state = 2},
  [47] = {.lex_state = 146, .external_lex_state = 2},
  [48] = {.lex_state = 27, .external_lex_state = 2},
  [49] = {.lex_state = 141, .external_lex_state = 1},
  [50] = {.lex_state = 141, .external_lex_state = 1},
  [51] = {.lex_state = 141, .external_lex_state = 1},
  [52] = {.lex_state = 141, .external_lex_state = 1},
  [53] = {.lex_state = 141, .external_lex_state = 1},
  [54] = {.lex_state = 141, .external_lex_state = 1},
  [55] = {.lex_state = 141, .external_lex_state = 1},
  [56] = {.lex_state = 141, .external_lex_state = 1},
  [57] = {.lex_state = 141, .external_lex_state = 1},
  [58] = {.lex_state = 141, .external_lex_state = 1},
  [59] = {.lex_state = 141, .external_lex_state = 1},
  [60] = {.lex_state = 27, .external_lex_state = 2},
  [61] = {.lex_state = 128, .external_lex_state = 2},
  [62] = {.lex_state = 146, .external_lex_state = 2},
  [63] = {.lex_state = 128, .external_lex_state = 2},
  [64] = {.lex_state = 128, .external_lex_state = 2},
  [65] = {.lex_state = 128, .external_lex_state = 2},
  [66] = {.lex_state = 31, .external_lex_state = 2},
  [67] = {.lex_state = 128, .external_lex_state = 2},
  [68] = {.lex_state = 128, .external_lex_state = 2},
  [69] = {.lex_state = 128, .external_lex_state = 2},
  [70] = {.lex_state = 128, .external_lex_state = 2},
  [71] = {.lex_state = 128, .external_lex_state = 2},
  [72] = {.lex_state = 128, .external_lex_state = 2},
  [73] = {.lex_state = 128, .external_lex_state = 2},
  [74] = {.lex_state = 128, .external_lex_state = 2},
  [75] = {.lex_state = 31, .external_lex_state = 2},
  [76] = {.lex_state = 141, .external_lex_state = 2},
  [77] = {.lex_state = 128, .external_lex_state = 1},
  [78] = {.lex_state = 141, .external_lex_state = 2},
  [79] = {.lex_state = 141, .external_lex_state = 2},
  [80] = {.lex_state = 141, .external_lex_state = 2},
  [81] = {.lex_state = 141, .external_lex_state = 2},
  [82] = {.lex_state = 141, .external_lex_state = 2},
  [83] = {.lex_state = 141, .external_lex_state = 2},
  [84] = {.lex_state = 141, .external_lex_state = 2},
  [85] = {.lex_state = 141, .external_lex_state = 2},
  [86] = {.lex_state = 141, .external_lex_state = 2},
  [87] = {.lex_state = 128, .external_lex_state = 2},
  [88] = {.lex_state = 141, .external_lex_state = 2},
  [89] = {.lex_state = 128, .external_lex_state = 2},
  [90] = {.lex_state = 141, .external_lex_state = 2},
  [91] = {.lex_state = 141, .external_lex_state = 2},
  [92] = {.lex_state = 141, .external_lex_state = 2},
  [93] = {.lex_state = 141, .external_lex_state = 2},
  [94] = {.lex_state = 128, .external_lex_state = 2},
  [95] = {.lex_state = 141, .external_lex_state = 2},
  [96] = {.lex_state = 141, .external_lex_state = 2},
  [97] = {.lex_state = 141, .external_lex_state = 2},
  [98] = {.lex_state = 141, .external_lex_state = 2},
  [99] = {.lex_state = 128, .external_lex_state = 1},
  [100] = {.lex_state = 141, .external_lex_state = 2},
  [101] = {.lex_state = 141, .external_lex_state = 2},
  [102] = {.lex_state = 141, .external_lex_state = 2},
  [103] = {.lex_state = 141, .external_lex_state = 2},
  [104] = {.lex_state = 141, .external_lex_state = 2},
  [105] = {.lex_state = 141, .external_lex_state = 2},
  [106] = {.lex_state = 141, .external_lex_state = 2},
  [107] = {.lex_state = 141, .external_lex_state = 2},
  [108] = {.lex_state = 141, .external_lex_state = 2},
  [109] = {.lex_state = 141, .external_lex_state = 2},
  [110] = {.lex_state = 141, .external_lex_state = 2},
  [111] = {.lex_state = 141, .external_lex_state = 2},
  [112] = {.lex_state = 0, .external_lex_state = 1},
  [113] = {.lex_state = 0, .external_lex_state = 1},
  [114] = {.lex_state = 128, .external_lex_state = 2},
  [115] = {.lex_state = 0, .external_lex_state = 1},
  [116] = {.lex_state = 0, .external_lex_state = 1},
  [117] = {.lex_state = 0, .external_lex_state = 1},
  [118] = {.lex_state = 0, .external_lex_state = 1},
  [119] = {.lex_state = 0, .external_lex_state = 1},
  [120] = {.lex_state = 0, .external_lex_state = 1},
  [121] = {.lex_state = 0, .external_lex_state = 1},
  [122] = {.lex_state = 0, .external_lex_state = 1},
  [123] = {.lex_state = 0, .external_lex_state = 1},
  [124] = {.lex_state = 0, .external_lex_state = 1},
  [125] = {.lex_state = 0, .external_lex_state = 1},
  [126] = {.lex_state = 0, .external_lex_state = 1},
  [127] = {.lex_state = 0, .external_lex_state = 1},
  [128] = {.lex_state = 0, .external_lex_state = 1},
  [129] = {.lex_state = 128, .external_lex_state = 2},
  [130] = {.lex_state = 128, .external_lex_state = 2},
  [131] = {.lex_state = 0, .external_lex_state = 1},
  [132] = {.lex_state = 0, .external_lex_state = 2},
  [133] = {.lex_state = 0, .external_lex_state = 1},
  [134] = {.lex_state = 0, .external_lex_state = 1},
  [135] = {.lex_state = 0, .external_lex_state = 1},
  [136] = {.lex_state = 0, .external_lex_state = 1},
  [137] = {.lex_state = 0, .external_lex_state = 1},
  [138] = {.lex_state = 0, .external_lex_state = 1},
  [139] = {.lex_state = 0, .external_lex_state = 1},
  [140] = {.lex_state = 0, .external_lex_state = 1},
  [141] = {.lex_state = 27, .external_lex_state = 2},
  [142] = {.lex_state = 146, .external_lex_state = 2},
  [143] = {.lex_state = 0, .external_lex_state = 1},
  [144] = {.lex_state = 0, .external_lex_state = 1},
  [145] = {.lex_state = 128, .external_lex_state = 2},
  [146] = {.lex_state = 0, .external_lex_state = 1},
  [147] = {.lex_state = 128, .external_lex_state = 2},
  [148] = {.lex_state = 128, .external_lex_state = 2},
  [149] = {.lex_state = 31, .external_lex_state = 2},
  [150] = {.lex_state = 128, .external_lex_state = 2},
  [151] = {.lex_state = 128, .external_lex_state = 2},
  [152] = {.lex_state = 128, .external_lex_state = 2},
  [153] = {.lex_state = 128, .external_lex_state = 2},
  [154] = {.lex_state = 128, .external_lex_state = 2},
  [155] = {.lex_state = 0, .external_lex_state = 1},
  [156] = {.lex_state = 128, .external_lex_state = 2},
  [157] = {.lex_state = 0, .external_lex_state = 1},
  [158] = {.lex_state = 0, .external_lex_state = 2},
  [159] = {.lex_state = 0, .external_lex_state = 2},
  [160] = {.lex_state = 0, .external_lex_state = 2},
  [161] = {.lex_state = 0, .external_lex_state = 2},
  [162] = {.lex_state = 0, .external_lex_state = 2},
  [163] = {.lex_state = 0, .external_lex_state = 2},
  [164] = {.lex_state = 0, .external_lex_state = 2},
  [165] = {.lex_state = 0, .external_lex_state = 2},
  [166] = {.lex_state = 0, .external_lex_state = 2},
  [167] = {.lex_state = 0, .external_lex_state = 2},
  [168] = {.lex_state = 0, .external_lex_state = 2},
  [169] = {.lex_state = 0, .external_lex_state = 2},
  [170] = {.lex_state = 0, .external_lex_state = 2},
  [171] = {.lex_state = 0, .external_lex_state = 2},
  [172] = {.lex_state = 0, .external_lex_state = 2},
  [173] = {.lex_state = 0, .external_lex_state = 2},
};

enum {
  ts_external_token__newline = 0,
  ts_external_token__blankline = 1,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__newline] = sym__newline,
  [ts_external_token__blankline] = sym__blankline,
};

static bool ts_external_scanner_states[3][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__newline] = true,
    [ts_external_token__blankline] = true,
  },
  [2] = {
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
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [aux_sym__char_token1] = ACTIONS(1),
    [sym__newline] = ACTIONS(3),
    [sym__blankline] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(132),
    [sym__body_elements] = STATE(2),
    [sym_paragraph] = STATE(115),
    [sym__list] = STATE(115),
    [sym_bullet_list] = STATE(115),
    [sym__bullet_list_item] = STATE(116),
    [sym_enumerated_list] = STATE(115),
    [sym__enumerated_list_item] = STATE(117),
    [sym_field_list] = STATE(115),
    [sym_field] = STATE(118),
    [sym_option_list] = STATE(115),
    [sym_option_list_item] = STATE(119),
    [sym_line_block] = STATE(115),
    [sym__single_line_block] = STATE(120),
    [sym__markup_block] = STATE(115),
    [sym__footnote_block] = STATE(115),
    [sym_footnote] = STATE(121),
    [sym__citation_block] = STATE(115),
    [sym_citation] = STATE(122),
    [sym__hyperlink_target_block] = STATE(115),
    [sym_target] = STATE(123),
    [sym__anoynymous_hyperlink_target_block] = STATE(115),
    [sym__anonymous_target] = STATE(128),
    [sym__directive_block] = STATE(115),
    [sym_directive] = STATE(131),
    [sym__substitution_definition_block] = STATE(115),
    [sym_substitution_definition] = STATE(143),
    [sym__comment_block] = STATE(115),
    [sym_comment] = STATE(144),
    [sym__line] = STATE(146),
    [sym__char] = STATE(14),
    [sym__inline_markup] = STATE(31),
    [sym_reference] = STATE(31),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_paragraph_repeat1] = STATE(5),
    [aux_sym_bullet_list_repeat1] = STATE(67),
    [aux_sym_enumerated_list_repeat1] = STATE(68),
    [aux_sym_field_list_repeat1] = STATE(70),
    [aux_sym_option_list_repeat1] = STATE(73),
    [aux_sym_line_block_repeat1] = STATE(41),
    [aux_sym__footnote_block_repeat1] = STATE(44),
    [aux_sym__citation_block_repeat1] = STATE(75),
    [aux_sym__hyperlink_target_block_repeat1] = STATE(61),
    [aux_sym__anoynymous_hyperlink_target_block_repeat1] = STATE(45),
    [aux_sym__directive_block_repeat1] = STATE(46),
    [aux_sym__substitution_definition_block_repeat1] = STATE(47),
    [aux_sym__comment_block_repeat1] = STATE(48),
    [aux_sym__line_repeat1] = STATE(14),
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
    [anon_sym_2] = ACTIONS(31),
    [anon_sym_3] = ACTIONS(31),
    [aux_sym_substitution_definition_token1] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(35),
    [aux_sym__line_token1] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_COMMA] = ACTIONS(37),
    [anon_sym_COLON] = ACTIONS(31),
    [anon_sym_SEMI] = ACTIONS(37),
    [anon_sym_BANG] = ACTIONS(37),
    [anon_sym_QMARK] = ACTIONS(37),
    [anon_sym_BSLASH] = ACTIONS(37),
    [anon_sym_SLASH] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_RPAREN] = ACTIONS(37),
    [anon_sym_RBRACK] = ACTIONS(37),
    [anon_sym_RBRACE] = ACTIONS(37),
    [anon_sym_GT] = ACTIONS(37),
    [anon_sym_LT] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(31),
    [aux_sym__char_token1] = ACTIONS(37),
    [sym_emphasis] = ACTIONS(39),
    [sym_strong] = ACTIONS(39),
    [sym_interpreted_text] = ACTIONS(39),
    [sym_literal] = ACTIONS(41),
    [sym_substitution_reference] = ACTIONS(39),
    [sym__inline_target] = ACTIONS(41),
    [sym_footnote_reference] = ACTIONS(39),
    [aux_sym_reference_token1] = ACTIONS(43),
    [aux_sym_reference_token2] = ACTIONS(45),
    [sym__newline] = ACTIONS(3),
    [sym__blankline] = ACTIONS(47),
  },
  [2] = {
    [sym__body_elements] = STATE(3),
    [sym_paragraph] = STATE(115),
    [sym__list] = STATE(115),
    [sym_bullet_list] = STATE(115),
    [sym__bullet_list_item] = STATE(116),
    [sym_enumerated_list] = STATE(115),
    [sym__enumerated_list_item] = STATE(117),
    [sym_field_list] = STATE(115),
    [sym_field] = STATE(118),
    [sym_option_list] = STATE(115),
    [sym_option_list_item] = STATE(119),
    [sym_line_block] = STATE(115),
    [sym__single_line_block] = STATE(120),
    [sym__markup_block] = STATE(115),
    [sym__footnote_block] = STATE(115),
    [sym_footnote] = STATE(121),
    [sym__citation_block] = STATE(115),
    [sym_citation] = STATE(122),
    [sym__hyperlink_target_block] = STATE(115),
    [sym_target] = STATE(123),
    [sym__anoynymous_hyperlink_target_block] = STATE(115),
    [sym__anonymous_target] = STATE(128),
    [sym__directive_block] = STATE(115),
    [sym_directive] = STATE(131),
    [sym__substitution_definition_block] = STATE(115),
    [sym_substitution_definition] = STATE(143),
    [sym__comment_block] = STATE(115),
    [sym_comment] = STATE(144),
    [sym__line] = STATE(146),
    [sym__char] = STATE(14),
    [sym__inline_markup] = STATE(31),
    [sym_reference] = STATE(31),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_paragraph_repeat1] = STATE(5),
    [aux_sym_bullet_list_repeat1] = STATE(67),
    [aux_sym_enumerated_list_repeat1] = STATE(68),
    [aux_sym_field_list_repeat1] = STATE(70),
    [aux_sym_option_list_repeat1] = STATE(73),
    [aux_sym_line_block_repeat1] = STATE(41),
    [aux_sym__footnote_block_repeat1] = STATE(44),
    [aux_sym__citation_block_repeat1] = STATE(75),
    [aux_sym__hyperlink_target_block_repeat1] = STATE(61),
    [aux_sym__anoynymous_hyperlink_target_block_repeat1] = STATE(45),
    [aux_sym__directive_block_repeat1] = STATE(46),
    [aux_sym__substitution_definition_block_repeat1] = STATE(47),
    [aux_sym__comment_block_repeat1] = STATE(48),
    [aux_sym__line_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(49),
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
    [anon_sym_2] = ACTIONS(31),
    [anon_sym_3] = ACTIONS(31),
    [aux_sym_substitution_definition_token1] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(35),
    [aux_sym__line_token1] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_COMMA] = ACTIONS(37),
    [anon_sym_COLON] = ACTIONS(31),
    [anon_sym_SEMI] = ACTIONS(37),
    [anon_sym_BANG] = ACTIONS(37),
    [anon_sym_QMARK] = ACTIONS(37),
    [anon_sym_BSLASH] = ACTIONS(37),
    [anon_sym_SLASH] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_RPAREN] = ACTIONS(37),
    [anon_sym_RBRACK] = ACTIONS(37),
    [anon_sym_RBRACE] = ACTIONS(37),
    [anon_sym_GT] = ACTIONS(37),
    [anon_sym_LT] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(31),
    [aux_sym__char_token1] = ACTIONS(37),
    [sym_emphasis] = ACTIONS(39),
    [sym_strong] = ACTIONS(39),
    [sym_interpreted_text] = ACTIONS(39),
    [sym_literal] = ACTIONS(41),
    [sym_substitution_reference] = ACTIONS(39),
    [sym__inline_target] = ACTIONS(41),
    [sym_footnote_reference] = ACTIONS(39),
    [aux_sym_reference_token1] = ACTIONS(43),
    [aux_sym_reference_token2] = ACTIONS(45),
    [sym__newline] = ACTIONS(3),
    [sym__blankline] = ACTIONS(51),
  },
  [3] = {
    [sym__body_elements] = STATE(3),
    [sym_paragraph] = STATE(115),
    [sym__list] = STATE(115),
    [sym_bullet_list] = STATE(115),
    [sym__bullet_list_item] = STATE(116),
    [sym_enumerated_list] = STATE(115),
    [sym__enumerated_list_item] = STATE(117),
    [sym_field_list] = STATE(115),
    [sym_field] = STATE(118),
    [sym_option_list] = STATE(115),
    [sym_option_list_item] = STATE(119),
    [sym_line_block] = STATE(115),
    [sym__single_line_block] = STATE(120),
    [sym__markup_block] = STATE(115),
    [sym__footnote_block] = STATE(115),
    [sym_footnote] = STATE(121),
    [sym__citation_block] = STATE(115),
    [sym_citation] = STATE(122),
    [sym__hyperlink_target_block] = STATE(115),
    [sym_target] = STATE(123),
    [sym__anoynymous_hyperlink_target_block] = STATE(115),
    [sym__anonymous_target] = STATE(128),
    [sym__directive_block] = STATE(115),
    [sym_directive] = STATE(131),
    [sym__substitution_definition_block] = STATE(115),
    [sym_substitution_definition] = STATE(143),
    [sym__comment_block] = STATE(115),
    [sym_comment] = STATE(144),
    [sym__line] = STATE(146),
    [sym__char] = STATE(14),
    [sym__inline_markup] = STATE(31),
    [sym_reference] = STATE(31),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_paragraph_repeat1] = STATE(5),
    [aux_sym_bullet_list_repeat1] = STATE(67),
    [aux_sym_enumerated_list_repeat1] = STATE(68),
    [aux_sym_field_list_repeat1] = STATE(70),
    [aux_sym_option_list_repeat1] = STATE(73),
    [aux_sym_line_block_repeat1] = STATE(41),
    [aux_sym__footnote_block_repeat1] = STATE(44),
    [aux_sym__citation_block_repeat1] = STATE(75),
    [aux_sym__hyperlink_target_block_repeat1] = STATE(61),
    [aux_sym__anoynymous_hyperlink_target_block_repeat1] = STATE(45),
    [aux_sym__directive_block_repeat1] = STATE(46),
    [aux_sym__substitution_definition_block_repeat1] = STATE(47),
    [aux_sym__comment_block_repeat1] = STATE(48),
    [aux_sym__line_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(53),
    [sym__char_bullet] = ACTIONS(55),
    [aux_sym__enumerated_list_item_token1] = ACTIONS(58),
    [aux_sym_field_token1] = ACTIONS(61),
    [aux_sym_option_list_item_token1] = ACTIONS(64),
    [anon_sym_PIPE] = ACTIONS(67),
    [aux_sym__single_line_block_token1] = ACTIONS(70),
    [aux_sym_footnote_token1] = ACTIONS(73),
    [aux_sym_citation_token1] = ACTIONS(76),
    [aux_sym_target_token1] = ACTIONS(79),
    [anon_sym___] = ACTIONS(82),
    [aux_sym_directive_token1] = ACTIONS(85),
    [anon_sym_] = ACTIONS(88),
    [anon_sym_TAB] = ACTIONS(88),
    [anon_sym_2] = ACTIONS(91),
    [anon_sym_3] = ACTIONS(91),
    [aux_sym_substitution_definition_token1] = ACTIONS(94),
    [anon_sym_DOT_DOT] = ACTIONS(97),
    [aux_sym__line_token1] = ACTIONS(100),
    [anon_sym_DASH] = ACTIONS(91),
    [anon_sym_DOT] = ACTIONS(100),
    [anon_sym_COMMA] = ACTIONS(100),
    [anon_sym_COLON] = ACTIONS(91),
    [anon_sym_SEMI] = ACTIONS(100),
    [anon_sym_BANG] = ACTIONS(100),
    [anon_sym_QMARK] = ACTIONS(100),
    [anon_sym_BSLASH] = ACTIONS(100),
    [anon_sym_SLASH] = ACTIONS(91),
    [anon_sym_SQUOTE] = ACTIONS(91),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [anon_sym_RPAREN] = ACTIONS(100),
    [anon_sym_RBRACK] = ACTIONS(100),
    [anon_sym_RBRACE] = ACTIONS(100),
    [anon_sym_GT] = ACTIONS(100),
    [anon_sym_LT] = ACTIONS(91),
    [anon_sym_LPAREN] = ACTIONS(91),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_LBRACE] = ACTIONS(91),
    [aux_sym__char_token1] = ACTIONS(100),
    [sym_emphasis] = ACTIONS(103),
    [sym_strong] = ACTIONS(103),
    [sym_interpreted_text] = ACTIONS(103),
    [sym_literal] = ACTIONS(106),
    [sym_substitution_reference] = ACTIONS(103),
    [sym__inline_target] = ACTIONS(106),
    [sym_footnote_reference] = ACTIONS(103),
    [aux_sym_reference_token1] = ACTIONS(109),
    [aux_sym_reference_token2] = ACTIONS(112),
    [sym__newline] = ACTIONS(3),
    [sym__blankline] = ACTIONS(115),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(118), 8,
      sym__blankline,
      ts_builtin_sym_end,
      anon_sym_,
      anon_sym_TAB,
      aux_sym_substitution_definition_token1,
      sym_literal,
      sym__inline_target,
      aux_sym_reference_token2,
    ACTIONS(120), 41,
      sym__char_bullet,
      aux_sym__enumerated_list_item_token1,
      aux_sym_field_token1,
      aux_sym_option_list_item_token1,
      anon_sym_PIPE,
      aux_sym__single_line_block_token1,
      aux_sym_footnote_token1,
      aux_sym_citation_token1,
      aux_sym_target_token1,
      anon_sym___,
      aux_sym_directive_token1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_DOT_DOT,
      aux_sym__line_token1,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_BANG,
      anon_sym_QMARK,
      anon_sym_BSLASH,
      anon_sym_SLASH,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      aux_sym__char_token1,
      sym_emphasis,
      sym_strong,
      sym_interpreted_text,
      sym_substitution_reference,
      sym_footnote_reference,
      aux_sym_reference_token1,
  [57] = 12,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(43), 1,
      aux_sym_reference_token1,
    ACTIONS(45), 1,
      aux_sym_reference_token2,
    STATE(6), 1,
      aux_sym_paragraph_repeat1,
    STATE(140), 1,
      sym__line,
    ACTIONS(29), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(41), 2,
      sym_literal,
      sym__inline_target,
    STATE(14), 2,
      sym__char,
      aux_sym__line_repeat1,
    STATE(31), 2,
      sym__inline_markup,
      sym_reference,
    ACTIONS(39), 5,
      sym_emphasis,
      sym_strong,
      sym_interpreted_text,
      sym_substitution_reference,
      sym_footnote_reference,
    ACTIONS(31), 11,
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
    ACTIONS(37), 12,
      aux_sym__line_token1,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BANG,
      anon_sym_QMARK,
      anon_sym_BSLASH,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
      aux_sym__char_token1,
  [123] = 12,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(137), 1,
      aux_sym_reference_token1,
    ACTIONS(140), 1,
      aux_sym_reference_token2,
    STATE(6), 1,
      aux_sym_paragraph_repeat1,
    STATE(163), 1,
      sym__line,
    ACTIONS(122), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(134), 2,
      sym_literal,
      sym__inline_target,
    STATE(20), 2,
      sym__char,
      aux_sym__line_repeat1,
    STATE(34), 2,
      sym__inline_markup,
      sym_reference,
    ACTIONS(131), 5,
      sym_emphasis,
      sym_strong,
      sym_interpreted_text,
      sym_substitution_reference,
      sym_footnote_reference,
    ACTIONS(125), 11,
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
    ACTIONS(128), 12,
      aux_sym__line_token1,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BANG,
      anon_sym_QMARK,
      anon_sym_BSLASH,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
      aux_sym__char_token1,
  [189] = 7,
    ACTIONS(151), 1,
      aux_sym_reference_token1,
    ACTIONS(153), 1,
      aux_sym_reference_token2,
    ACTIONS(149), 2,
      sym_literal,
      sym__inline_target,
    STATE(24), 2,
      sym__inline_markup,
      sym_reference,
    ACTIONS(143), 4,
      sym__newline,
      sym__blankline,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(147), 5,
      sym_emphasis,
      sym_strong,
      sym_interpreted_text,
      sym_substitution_reference,
      sym_footnote_reference,
    ACTIONS(145), 23,
      anon_sym_2,
      anon_sym_3,
      aux_sym__line_token1,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_BANG,
      anon_sym_QMARK,
      anon_sym_BSLASH,
      anon_sym_SLASH,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      aux_sym__char_token1,
  [242] = 7,
    ACTIONS(151), 1,
      aux_sym_reference_token1,
    ACTIONS(153), 1,
      aux_sym_reference_token2,
    ACTIONS(157), 2,
      sym_literal,
      sym__inline_target,
    STATE(26), 2,
      sym__inline_markup,
      sym_reference,
    ACTIONS(143), 4,
      sym__newline,
      sym__blankline,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(155), 5,
      sym_emphasis,
      sym_strong,
      sym_interpreted_text,
      sym_substitution_reference,
      sym_footnote_reference,
    ACTIONS(145), 23,
      anon_sym_2,
      anon_sym_3,
      aux_sym__line_token1,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_BANG,
      anon_sym_QMARK,
      anon_sym_BSLASH,
      anon_sym_SLASH,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      aux_sym__char_token1,
  [295] = 7,
    ACTIONS(43), 1,
      aux_sym_reference_token1,
    ACTIONS(45), 1,
      aux_sym_reference_token2,
    ACTIONS(161), 2,
      sym_literal,
      sym__inline_target,
    STATE(27), 2,
      sym__inline_markup,
      sym_reference,
    ACTIONS(143), 4,
      sym__newline,
      sym__blankline,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(159), 5,
      sym_emphasis,
      sym_strong,
      sym_interpreted_text,
      sym_substitution_reference,
      sym_footnote_reference,
    ACTIONS(145), 23,
      anon_sym_2,
      anon_sym_3,
      aux_sym__line_token1,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_BANG,
      anon_sym_QMARK,
      anon_sym_BSLASH,
      anon_sym_SLASH,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      aux_sym__char_token1,
  [348] = 7,
    ACTIONS(167), 1,
      aux_sym_reference_token1,
    ACTIONS(169), 1,
      aux_sym_reference_token2,
    ACTIONS(165), 2,
      sym_literal,
      sym__inline_target,
    STATE(30), 2,
      sym__inline_markup,
      sym_reference,
    ACTIONS(143), 3,
      sym__newline,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(163), 5,
      sym_emphasis,
      sym_strong,
      sym_interpreted_text,
      sym_substitution_reference,
      sym_footnote_reference,
    ACTIONS(145), 23,
      anon_sym_2,
      anon_sym_3,
      aux_sym__line_token1,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_BANG,
      anon_sym_QMARK,
      anon_sym_BSLASH,
      anon_sym_SLASH,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      aux_sym__char_token1,
  [400] = 7,
    ACTIONS(43), 1,
      aux_sym_reference_token1,
    ACTIONS(45), 1,
      aux_sym_reference_token2,
    ACTIONS(173), 2,
      sym_literal,
      sym__inline_target,
    STATE(33), 2,
      sym__inline_markup,
      sym_reference,
    ACTIONS(143), 3,
      sym__newline,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(171), 5,
      sym_emphasis,
      sym_strong,
      sym_interpreted_text,
      sym_substitution_reference,
      sym_footnote_reference,
    ACTIONS(145), 23,
      anon_sym_2,
      anon_sym_3,
      aux_sym__line_token1,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_BANG,
      anon_sym_QMARK,
      anon_sym_BSLASH,
      anon_sym_SLASH,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      aux_sym__char_token1,
  [452] = 7,
    ACTIONS(167), 1,
      aux_sym_reference_token1,
    ACTIONS(169), 1,
      aux_sym_reference_token2,
    ACTIONS(177), 2,
      sym_literal,
      sym__inline_target,
    STATE(28), 2,
      sym__inline_markup,
      sym_reference,
    ACTIONS(143), 3,
      sym__newline,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(175), 5,
      sym_emphasis,
      sym_strong,
      sym_interpreted_text,
      sym_substitution_reference,
      sym_footnote_reference,
    ACTIONS(145), 23,
      anon_sym_2,
      anon_sym_3,
      aux_sym__line_token1,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_BANG,
      anon_sym_QMARK,
      anon_sym_BSLASH,
      anon_sym_SLASH,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      aux_sym__char_token1,
  [504] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(179), 5,
      anon_sym_,
      anon_sym_TAB,
      sym_literal,
      sym__inline_target,
      aux_sym_reference_token2,
    ACTIONS(181), 29,
      anon_sym_2,
      anon_sym_3,
      aux_sym__line_token1,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_BANG,
      anon_sym_QMARK,
      anon_sym_BSLASH,
      anon_sym_SLASH,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      aux_sym__char_token1,
      sym_emphasis,
      sym_strong,
      sym_interpreted_text,
      sym_substitution_reference,
      sym_footnote_reference,
      aux_sym_reference_token1,
  [546] = 5,
    ACTIONS(187), 2,
      anon_sym_BSLASH,
      aux_sym__char_token1,
    ACTIONS(189), 2,
      sym__newline,
      sym__blankline,
    STATE(16), 2,
      sym__char,
      aux_sym__line_repeat1,
    ACTIONS(185), 10,
      aux_sym__line_token1,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BANG,
      anon_sym_QMARK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
    ACTIONS(183), 13,
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
  [586] = 5,
    ACTIONS(187), 2,
      anon_sym_BSLASH,
      aux_sym__char_token1,
    ACTIONS(193), 2,
      sym__newline,
      sym__blankline,
    STATE(16), 2,
      sym__char,
      aux_sym__line_repeat1,
    ACTIONS(185), 10,
      aux_sym__line_token1,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BANG,
      anon_sym_QMARK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
    ACTIONS(191), 13,
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
  [626] = 5,
    ACTIONS(201), 2,
      anon_sym_BSLASH,
      aux_sym__char_token1,
    ACTIONS(204), 2,
      sym__newline,
      sym__blankline,
    STATE(16), 2,
      sym__char,
      aux_sym__line_repeat1,
    ACTIONS(198), 10,
      aux_sym__line_token1,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BANG,
      anon_sym_QMARK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
    ACTIONS(195), 13,
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
  [666] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(210), 2,
      anon_sym_BSLASH,
      aux_sym__char_token1,
    STATE(21), 2,
      sym__char,
      aux_sym__line_repeat1,
    ACTIONS(208), 10,
      aux_sym__line_token1,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BANG,
      anon_sym_QMARK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
    ACTIONS(206), 13,
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
  [705] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(214), 2,
      anon_sym_BSLASH,
      aux_sym__char_token1,
    STATE(15), 2,
      sym__char,
      aux_sym__line_repeat1,
    ACTIONS(212), 10,
      aux_sym__line_token1,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BANG,
      anon_sym_QMARK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
    ACTIONS(29), 13,
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
  [744] = 5,
    ACTIONS(204), 1,
      sym__newline,
    ACTIONS(222), 2,
      anon_sym_BSLASH,
      aux_sym__char_token1,
    STATE(19), 2,
      sym__char,
      aux_sym__line_repeat1,
    ACTIONS(219), 10,
      aux_sym__line_token1,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BANG,
      anon_sym_QMARK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
    ACTIONS(216), 13,
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
  [783] = 5,
    ACTIONS(189), 1,
      sym__newline,
    ACTIONS(229), 2,
      anon_sym_BSLASH,
      aux_sym__char_token1,
    STATE(19), 2,
      sym__char,
      aux_sym__line_repeat1,
    ACTIONS(227), 10,
      aux_sym__line_token1,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BANG,
      anon_sym_QMARK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
    ACTIONS(225), 13,
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
  [822] = 5,
    ACTIONS(193), 1,
      sym__newline,
    ACTIONS(229), 2,
      anon_sym_BSLASH,
      aux_sym__char_token1,
    STATE(19), 2,
      sym__char,
      aux_sym__line_repeat1,
    ACTIONS(227), 10,
      aux_sym__line_token1,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BANG,
      anon_sym_QMARK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
    ACTIONS(231), 13,
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
  [861] = 2,
    ACTIONS(235), 2,
      anon_sym_BSLASH,
      aux_sym__char_token1,
    ACTIONS(233), 25,
      sym__newline,
      sym__blankline,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
      aux_sym__line_token1,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_BANG,
      anon_sym_QMARK,
      anon_sym_SLASH,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
  [893] = 2,
    ACTIONS(235), 2,
      anon_sym_BSLASH,
      aux_sym__char_token1,
    ACTIONS(233), 24,
      sym__newline,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
      aux_sym__line_token1,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_BANG,
      anon_sym_QMARK,
      anon_sym_SLASH,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
  [924] = 3,
    ACTIONS(239), 1,
      anon_sym_BSLASH,
    ACTIONS(241), 2,
      sym__newline,
      sym__blankline,
    ACTIONS(237), 19,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
      aux_sym__line_token1,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_BANG,
      anon_sym_QMARK,
      anon_sym_SLASH,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
  [953] = 2,
    ACTIONS(245), 1,
      anon_sym_BSLASH,
    ACTIONS(243), 21,
      sym__newline,
      sym__blankline,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
      aux_sym__line_token1,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_BANG,
      anon_sym_QMARK,
      anon_sym_SLASH,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
  [980] = 3,
    ACTIONS(239), 1,
      anon_sym_BSLASH,
    ACTIONS(193), 2,
      sym__newline,
      sym__blankline,
    ACTIONS(237), 19,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
      aux_sym__line_token1,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_BANG,
      anon_sym_QMARK,
      anon_sym_SLASH,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
  [1009] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(239), 1,
      anon_sym_BSLASH,
    ACTIONS(237), 19,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
      aux_sym__line_token1,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_BANG,
      anon_sym_QMARK,
      anon_sym_SLASH,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
  [1037] = 3,
    ACTIONS(193), 1,
      sym__newline,
    ACTIONS(249), 1,
      anon_sym_BSLASH,
    ACTIONS(247), 19,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
      aux_sym__line_token1,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_BANG,
      anon_sym_QMARK,
      anon_sym_SLASH,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
  [1065] = 2,
    ACTIONS(245), 1,
      anon_sym_BSLASH,
    ACTIONS(243), 20,
      sym__newline,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
      aux_sym__line_token1,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_BANG,
      anon_sym_QMARK,
      anon_sym_SLASH,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
  [1091] = 3,
    ACTIONS(241), 1,
      sym__newline,
    ACTIONS(249), 1,
      anon_sym_BSLASH,
    ACTIONS(247), 19,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
      aux_sym__line_token1,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_BANG,
      anon_sym_QMARK,
      anon_sym_SLASH,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
  [1119] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(253), 1,
      anon_sym_BSLASH,
    ACTIONS(251), 19,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
      aux_sym__line_token1,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_BANG,
      anon_sym_QMARK,
      anon_sym_SLASH,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
  [1147] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(245), 1,
      anon_sym_BSLASH,
    ACTIONS(243), 19,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
      aux_sym__line_token1,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_BANG,
      anon_sym_QMARK,
      anon_sym_SLASH,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
  [1175] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(249), 1,
      anon_sym_BSLASH,
    ACTIONS(247), 19,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
      aux_sym__line_token1,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_BANG,
      anon_sym_QMARK,
      anon_sym_SLASH,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
  [1203] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(257), 1,
      anon_sym_BSLASH,
    ACTIONS(255), 19,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
      aux_sym__line_token1,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_BANG,
      anon_sym_QMARK,
      anon_sym_SLASH,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
  [1231] = 2,
    ACTIONS(261), 2,
      sym__newline,
      sym__blankline,
    ACTIONS(259), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [1242] = 2,
    ACTIONS(265), 2,
      sym__newline,
      sym__blankline,
    ACTIONS(263), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [1253] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(267), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [1263] = 2,
    ACTIONS(265), 1,
      sym__newline,
    ACTIONS(269), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [1273] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(271), 1,
      anon_sym_PIPE,
    ACTIONS(274), 1,
      aux_sym__single_line_block_token1,
    STATE(39), 1,
      aux_sym_line_block_repeat1,
    STATE(171), 1,
      sym__single_line_block,
  [1289] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(277), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [1299] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(279), 1,
      anon_sym_PIPE,
    ACTIONS(281), 1,
      aux_sym__single_line_block_token1,
    STATE(39), 1,
      aux_sym_line_block_repeat1,
    STATE(136), 1,
      sym__single_line_block,
  [1315] = 2,
    ACTIONS(261), 1,
      sym__newline,
    ACTIONS(283), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [1325] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(285), 1,
      aux_sym_footnote_token1,
    STATE(43), 1,
      aux_sym__footnote_block_repeat1,
    STATE(170), 1,
      sym_footnote,
  [1338] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(288), 1,
      aux_sym_footnote_token1,
    STATE(43), 1,
      aux_sym__footnote_block_repeat1,
    STATE(135), 1,
      sym_footnote,
  [1351] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(290), 1,
      anon_sym___,
    STATE(64), 1,
      aux_sym__anoynymous_hyperlink_target_block_repeat1,
    STATE(127), 1,
      sym__anonymous_target,
  [1364] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(292), 1,
      aux_sym_directive_token1,
    STATE(63), 1,
      aux_sym__directive_block_repeat1,
    STATE(125), 1,
      sym_directive,
  [1377] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(33), 1,
      aux_sym_substitution_definition_token1,
    STATE(62), 1,
      aux_sym__substitution_definition_block_repeat1,
    STATE(124), 1,
      sym_substitution_definition,
  [1390] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(294), 1,
      anon_sym_DOT_DOT,
    STATE(60), 1,
      aux_sym__comment_block_repeat1,
    STATE(126), 1,
      sym_comment,
  [1403] = 3,
    ACTIONS(296), 1,
      aux_sym__bullet_list_item_token1,
    STATE(59), 1,
      aux_sym__bullet_list_item_repeat1,
    ACTIONS(298), 2,
      sym__newline,
      sym__blankline,
  [1414] = 3,
    ACTIONS(296), 1,
      aux_sym__bullet_list_item_token1,
    STATE(59), 1,
      aux_sym__bullet_list_item_repeat1,
    ACTIONS(300), 2,
      sym__newline,
      sym__blankline,
  [1425] = 3,
    ACTIONS(296), 1,
      aux_sym__bullet_list_item_token1,
    STATE(59), 1,
      aux_sym__bullet_list_item_repeat1,
    ACTIONS(302), 2,
      sym__newline,
      sym__blankline,
  [1436] = 3,
    ACTIONS(296), 1,
      aux_sym__bullet_list_item_token1,
    STATE(59), 1,
      aux_sym__bullet_list_item_repeat1,
    ACTIONS(304), 2,
      sym__newline,
      sym__blankline,
  [1447] = 3,
    ACTIONS(296), 1,
      aux_sym__bullet_list_item_token1,
    STATE(59), 1,
      aux_sym__bullet_list_item_repeat1,
    ACTIONS(306), 2,
      sym__newline,
      sym__blankline,
  [1458] = 3,
    ACTIONS(296), 1,
      aux_sym__bullet_list_item_token1,
    STATE(59), 1,
      aux_sym__bullet_list_item_repeat1,
    ACTIONS(308), 2,
      sym__newline,
      sym__blankline,
  [1469] = 3,
    ACTIONS(296), 1,
      aux_sym__bullet_list_item_token1,
    STATE(59), 1,
      aux_sym__bullet_list_item_repeat1,
    ACTIONS(310), 2,
      sym__newline,
      sym__blankline,
  [1480] = 3,
    ACTIONS(296), 1,
      aux_sym__bullet_list_item_token1,
    STATE(59), 1,
      aux_sym__bullet_list_item_repeat1,
    ACTIONS(312), 2,
      sym__newline,
      sym__blankline,
  [1491] = 3,
    ACTIONS(296), 1,
      aux_sym__bullet_list_item_token1,
    STATE(59), 1,
      aux_sym__bullet_list_item_repeat1,
    ACTIONS(314), 2,
      sym__newline,
      sym__blankline,
  [1502] = 3,
    ACTIONS(296), 1,
      aux_sym__bullet_list_item_token1,
    STATE(59), 1,
      aux_sym__bullet_list_item_repeat1,
    ACTIONS(316), 2,
      sym__newline,
      sym__blankline,
  [1513] = 3,
    ACTIONS(318), 1,
      aux_sym__bullet_list_item_token1,
    STATE(59), 1,
      aux_sym__bullet_list_item_repeat1,
    ACTIONS(321), 2,
      sym__newline,
      sym__blankline,
  [1524] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(323), 1,
      anon_sym_DOT_DOT,
    STATE(60), 1,
      aux_sym__comment_block_repeat1,
    STATE(164), 1,
      sym_comment,
  [1537] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(326), 1,
      aux_sym_target_token1,
    STATE(65), 1,
      aux_sym__hyperlink_target_block_repeat1,
    STATE(133), 1,
      sym_target,
  [1550] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(328), 1,
      aux_sym_substitution_definition_token1,
    STATE(62), 1,
      aux_sym__substitution_definition_block_repeat1,
    STATE(165), 1,
      sym_substitution_definition,
  [1563] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(331), 1,
      aux_sym_directive_token1,
    STATE(63), 1,
      aux_sym__directive_block_repeat1,
    STATE(166), 1,
      sym_directive,
  [1576] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(334), 1,
      anon_sym___,
    STATE(64), 1,
      aux_sym__anoynymous_hyperlink_target_block_repeat1,
    STATE(167), 1,
      sym__anonymous_target,
  [1589] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(337), 1,
      aux_sym_target_token1,
    STATE(65), 1,
      aux_sym__hyperlink_target_block_repeat1,
    STATE(168), 1,
      sym_target,
  [1602] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(340), 1,
      aux_sym_citation_token1,
    STATE(66), 1,
      aux_sym__citation_block_repeat1,
    STATE(169), 1,
      sym_citation,
  [1615] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(343), 1,
      sym__char_bullet,
    STATE(72), 1,
      aux_sym_bullet_list_repeat1,
    STATE(139), 1,
      sym__bullet_list_item,
  [1628] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(345), 1,
      aux_sym__enumerated_list_item_token1,
    STATE(74), 1,
      aux_sym_enumerated_list_repeat1,
    STATE(138), 1,
      sym__enumerated_list_item,
  [1641] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(347), 1,
      aux_sym_option_list_item_token1,
    STATE(69), 1,
      aux_sym_option_list_repeat1,
    STATE(172), 1,
      sym_option_list_item,
  [1654] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(350), 1,
      aux_sym_field_token1,
    STATE(71), 1,
      aux_sym_field_list_repeat1,
    STATE(137), 1,
      sym_field,
  [1667] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(352), 1,
      aux_sym_field_token1,
    STATE(71), 1,
      aux_sym_field_list_repeat1,
    STATE(173), 1,
      sym_field,
  [1680] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(355), 1,
      sym__char_bullet,
    STATE(72), 1,
      aux_sym_bullet_list_repeat1,
    STATE(162), 1,
      sym__bullet_list_item,
  [1693] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(358), 1,
      aux_sym_option_list_item_token1,
    STATE(69), 1,
      aux_sym_option_list_repeat1,
    STATE(112), 1,
      sym_option_list_item,
  [1706] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(360), 1,
      aux_sym__enumerated_list_item_token1,
    STATE(74), 1,
      aux_sym_enumerated_list_repeat1,
    STATE(158), 1,
      sym__enumerated_list_item,
  [1719] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(363), 1,
      aux_sym_citation_token1,
    STATE(66), 1,
      aux_sym__citation_block_repeat1,
    STATE(134), 1,
      sym_citation,
  [1732] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(365), 1,
      aux_sym__bullet_list_item_token1,
    STATE(80), 1,
      aux_sym__bullet_list_item_repeat1,
  [1742] = 2,
    ACTIONS(367), 1,
      aux_sym_target_token2,
    ACTIONS(369), 2,
      sym__newline,
      sym__blankline,
  [1750] = 3,
    ACTIONS(306), 1,
      sym__newline,
    ACTIONS(371), 1,
      aux_sym__bullet_list_item_token1,
    STATE(96), 1,
      aux_sym__bullet_list_item_repeat1,
  [1760] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(373), 1,
      aux_sym__bullet_list_item_token1,
    STATE(82), 1,
      aux_sym__bullet_list_item_repeat1,
  [1770] = 3,
    ACTIONS(304), 1,
      sym__newline,
    ACTIONS(371), 1,
      aux_sym__bullet_list_item_token1,
    STATE(96), 1,
      aux_sym__bullet_list_item_repeat1,
  [1780] = 3,
    ACTIONS(302), 1,
      sym__newline,
    ACTIONS(371), 1,
      aux_sym__bullet_list_item_token1,
    STATE(96), 1,
      aux_sym__bullet_list_item_repeat1,
  [1790] = 3,
    ACTIONS(300), 1,
      sym__newline,
    ACTIONS(371), 1,
      aux_sym__bullet_list_item_token1,
    STATE(96), 1,
      aux_sym__bullet_list_item_repeat1,
  [1800] = 3,
    ACTIONS(298), 1,
      sym__newline,
    ACTIONS(371), 1,
      aux_sym__bullet_list_item_token1,
    STATE(96), 1,
      aux_sym__bullet_list_item_repeat1,
  [1810] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(375), 1,
      aux_sym__bullet_list_item_token1,
    STATE(91), 1,
      aux_sym__bullet_list_item_repeat1,
  [1820] = 3,
    ACTIONS(310), 1,
      sym__newline,
    ACTIONS(371), 1,
      aux_sym__bullet_list_item_token1,
    STATE(96), 1,
      aux_sym__bullet_list_item_repeat1,
  [1830] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(377), 1,
      aux_sym__bullet_list_item_token1,
    STATE(97), 1,
      aux_sym__bullet_list_item_repeat1,
  [1840] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(379), 1,
      aux_sym__embed_directive_token1,
    STATE(155), 1,
      sym__embed_directive,
  [1850] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(381), 1,
      aux_sym__bullet_list_item_token1,
    STATE(102), 1,
      aux_sym__bullet_list_item_repeat1,
  [1860] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(383), 1,
      aux_sym__embed_directive_token1,
    STATE(159), 1,
      sym__embed_directive,
  [1870] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(385), 1,
      aux_sym__bullet_list_item_token1,
    STATE(81), 1,
      aux_sym__bullet_list_item_repeat1,
  [1880] = 3,
    ACTIONS(312), 1,
      sym__newline,
    ACTIONS(371), 1,
      aux_sym__bullet_list_item_token1,
    STATE(96), 1,
      aux_sym__bullet_list_item_repeat1,
  [1890] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(387), 1,
      aux_sym__bullet_list_item_token1,
    STATE(85), 1,
      aux_sym__bullet_list_item_repeat1,
  [1900] = 3,
    ACTIONS(308), 1,
      sym__newline,
    ACTIONS(371), 1,
      aux_sym__bullet_list_item_token1,
    STATE(96), 1,
      aux_sym__bullet_list_item_repeat1,
  [1910] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(389), 1,
      anon_sym_PIPE,
    ACTIONS(391), 1,
      aux_sym__single_line_block_token1,
  [1920] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(393), 1,
      aux_sym__bullet_list_item_token1,
    STATE(93), 1,
      aux_sym__bullet_list_item_repeat1,
  [1930] = 3,
    ACTIONS(321), 1,
      sym__newline,
    ACTIONS(395), 1,
      aux_sym__bullet_list_item_token1,
    STATE(96), 1,
      aux_sym__bullet_list_item_repeat1,
  [1940] = 3,
    ACTIONS(316), 1,
      sym__newline,
    ACTIONS(371), 1,
      aux_sym__bullet_list_item_token1,
    STATE(96), 1,
      aux_sym__bullet_list_item_repeat1,
  [1950] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(398), 1,
      aux_sym__bullet_list_item_token1,
    STATE(78), 1,
      aux_sym__bullet_list_item_repeat1,
  [1960] = 2,
    ACTIONS(400), 1,
      aux_sym_target_token2,
    ACTIONS(402), 2,
      sym__newline,
      sym__blankline,
  [1968] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(404), 1,
      aux_sym__bullet_list_item_token1,
    STATE(55), 1,
      aux_sym__bullet_list_item_repeat1,
  [1978] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(406), 1,
      aux_sym__bullet_list_item_token1,
    STATE(57), 1,
      aux_sym__bullet_list_item_repeat1,
  [1988] = 3,
    ACTIONS(314), 1,
      sym__newline,
    ACTIONS(371), 1,
      aux_sym__bullet_list_item_token1,
    STATE(96), 1,
      aux_sym__bullet_list_item_repeat1,
  [1998] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(408), 1,
      aux_sym__bullet_list_item_token1,
    STATE(54), 1,
      aux_sym__bullet_list_item_repeat1,
  [2008] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(410), 1,
      aux_sym__bullet_list_item_token1,
    STATE(83), 1,
      aux_sym__bullet_list_item_repeat1,
  [2018] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(412), 1,
      aux_sym__bullet_list_item_token1,
    STATE(49), 1,
      aux_sym__bullet_list_item_repeat1,
  [2028] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(414), 1,
      aux_sym__bullet_list_item_token1,
    STATE(53), 1,
      aux_sym__bullet_list_item_repeat1,
  [2038] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(416), 1,
      aux_sym__bullet_list_item_token1,
    STATE(52), 1,
      aux_sym__bullet_list_item_repeat1,
  [2048] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(418), 1,
      aux_sym__bullet_list_item_token1,
    STATE(56), 1,
      aux_sym__bullet_list_item_repeat1,
  [2058] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(420), 1,
      aux_sym__bullet_list_item_token1,
    STATE(51), 1,
      aux_sym__bullet_list_item_repeat1,
  [2068] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(422), 1,
      aux_sym__bullet_list_item_token1,
    STATE(58), 1,
      aux_sym__bullet_list_item_repeat1,
  [2078] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(424), 1,
      aux_sym__bullet_list_item_token1,
    STATE(50), 1,
      aux_sym__bullet_list_item_repeat1,
  [2088] = 2,
    ACTIONS(426), 1,
      sym__newline,
    ACTIONS(428), 1,
      sym__blankline,
  [2095] = 1,
    ACTIONS(430), 2,
      sym__newline,
      sym__blankline,
  [2100] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(432), 1,
      anon_sym_COLON_COLON,
  [2107] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(434), 1,
      sym__blankline,
  [2114] = 2,
    ACTIONS(436), 1,
      sym__newline,
    ACTIONS(438), 1,
      sym__blankline,
  [2121] = 2,
    ACTIONS(440), 1,
      sym__newline,
    ACTIONS(442), 1,
      sym__blankline,
  [2128] = 2,
    ACTIONS(444), 1,
      sym__newline,
    ACTIONS(446), 1,
      sym__blankline,
  [2135] = 2,
    ACTIONS(426), 1,
      sym__newline,
    ACTIONS(448), 1,
      sym__blankline,
  [2142] = 2,
    ACTIONS(450), 1,
      sym__newline,
    ACTIONS(452), 1,
      sym__blankline,
  [2149] = 2,
    ACTIONS(454), 1,
      sym__newline,
    ACTIONS(456), 1,
      sym__blankline,
  [2156] = 2,
    ACTIONS(458), 1,
      sym__newline,
    ACTIONS(460), 1,
      sym__blankline,
  [2163] = 2,
    ACTIONS(462), 1,
      sym__newline,
    ACTIONS(464), 1,
      sym__blankline,
  [2170] = 2,
    ACTIONS(466), 1,
      sym__newline,
    ACTIONS(468), 1,
      sym__blankline,
  [2177] = 2,
    ACTIONS(470), 1,
      sym__newline,
    ACTIONS(472), 1,
      sym__blankline,
  [2184] = 2,
    ACTIONS(474), 1,
      sym__newline,
    ACTIONS(476), 1,
      sym__blankline,
  [2191] = 2,
    ACTIONS(478), 1,
      sym__newline,
    ACTIONS(480), 1,
      sym__blankline,
  [2198] = 2,
    ACTIONS(478), 1,
      sym__newline,
    ACTIONS(482), 1,
      sym__blankline,
  [2205] = 2,
    ACTIONS(402), 1,
      sym__newline,
    ACTIONS(484), 1,
      aux_sym_target_token2,
  [2212] = 2,
    ACTIONS(369), 1,
      sym__newline,
    ACTIONS(486), 1,
      aux_sym_target_token2,
  [2219] = 2,
    ACTIONS(470), 1,
      sym__newline,
    ACTIONS(488), 1,
      sym__blankline,
  [2226] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(490), 1,
      ts_builtin_sym_end,
  [2233] = 2,
    ACTIONS(462), 1,
      sym__newline,
    ACTIONS(492), 1,
      sym__blankline,
  [2240] = 2,
    ACTIONS(458), 1,
      sym__newline,
    ACTIONS(494), 1,
      sym__blankline,
  [2247] = 2,
    ACTIONS(454), 1,
      sym__newline,
    ACTIONS(496), 1,
      sym__blankline,
  [2254] = 2,
    ACTIONS(450), 1,
      sym__newline,
    ACTIONS(498), 1,
      sym__blankline,
  [2261] = 2,
    ACTIONS(444), 1,
      sym__newline,
    ACTIONS(500), 1,
      sym__blankline,
  [2268] = 2,
    ACTIONS(440), 1,
      sym__newline,
    ACTIONS(502), 1,
      sym__blankline,
  [2275] = 2,
    ACTIONS(436), 1,
      sym__newline,
    ACTIONS(504), 1,
      sym__blankline,
  [2282] = 2,
    ACTIONS(506), 1,
      sym__newline,
    ACTIONS(508), 1,
      sym__blankline,
  [2289] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(510), 1,
      anon_sym_DOT_DOT,
  [2296] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(512), 1,
      aux_sym_substitution_definition_token1,
  [2303] = 2,
    ACTIONS(466), 1,
      sym__newline,
    ACTIONS(514), 1,
      sym__blankline,
  [2310] = 2,
    ACTIONS(474), 1,
      sym__newline,
    ACTIONS(516), 1,
      sym__blankline,
  [2317] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(518), 1,
      aux_sym_directive_token1,
  [2324] = 2,
    ACTIONS(506), 1,
      sym__newline,
    ACTIONS(520), 1,
      sym__blankline,
  [2331] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(522), 1,
      anon_sym___,
  [2338] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(524), 1,
      aux_sym_target_token1,
  [2345] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(526), 1,
      aux_sym_citation_token1,
  [2352] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(528), 1,
      aux_sym_footnote_token1,
  [2359] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(530), 1,
      aux_sym_option_list_item_token1,
  [2366] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(532), 1,
      aux_sym_field_token1,
  [2373] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(534), 1,
      aux_sym__enumerated_list_item_token1,
  [2380] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(536), 1,
      sym__char_bullet,
  [2387] = 1,
    ACTIONS(538), 2,
      sym__newline,
      sym__blankline,
  [2392] = 2,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(540), 1,
      anon_sym_COLON_COLON,
  [2399] = 1,
    ACTIONS(542), 2,
      sym__newline,
      sym__blankline,
  [2404] = 1,
    ACTIONS(440), 1,
      sym__newline,
  [2408] = 1,
    ACTIONS(538), 1,
      sym__newline,
  [2412] = 1,
    ACTIONS(542), 1,
      sym__newline,
  [2416] = 1,
    ACTIONS(430), 1,
      sym__newline,
  [2420] = 1,
    ACTIONS(436), 1,
      sym__newline,
  [2424] = 1,
    ACTIONS(506), 1,
      sym__newline,
  [2428] = 1,
    ACTIONS(474), 1,
      sym__newline,
  [2432] = 1,
    ACTIONS(466), 1,
      sym__newline,
  [2436] = 1,
    ACTIONS(470), 1,
      sym__newline,
  [2440] = 1,
    ACTIONS(478), 1,
      sym__newline,
  [2444] = 1,
    ACTIONS(462), 1,
      sym__newline,
  [2448] = 1,
    ACTIONS(458), 1,
      sym__newline,
  [2452] = 1,
    ACTIONS(454), 1,
      sym__newline,
  [2456] = 1,
    ACTIONS(450), 1,
      sym__newline,
  [2460] = 1,
    ACTIONS(426), 1,
      sym__newline,
  [2464] = 1,
    ACTIONS(444), 1,
      sym__newline,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 57,
  [SMALL_STATE(6)] = 123,
  [SMALL_STATE(7)] = 189,
  [SMALL_STATE(8)] = 242,
  [SMALL_STATE(9)] = 295,
  [SMALL_STATE(10)] = 348,
  [SMALL_STATE(11)] = 400,
  [SMALL_STATE(12)] = 452,
  [SMALL_STATE(13)] = 504,
  [SMALL_STATE(14)] = 546,
  [SMALL_STATE(15)] = 586,
  [SMALL_STATE(16)] = 626,
  [SMALL_STATE(17)] = 666,
  [SMALL_STATE(18)] = 705,
  [SMALL_STATE(19)] = 744,
  [SMALL_STATE(20)] = 783,
  [SMALL_STATE(21)] = 822,
  [SMALL_STATE(22)] = 861,
  [SMALL_STATE(23)] = 893,
  [SMALL_STATE(24)] = 924,
  [SMALL_STATE(25)] = 953,
  [SMALL_STATE(26)] = 980,
  [SMALL_STATE(27)] = 1009,
  [SMALL_STATE(28)] = 1037,
  [SMALL_STATE(29)] = 1065,
  [SMALL_STATE(30)] = 1091,
  [SMALL_STATE(31)] = 1119,
  [SMALL_STATE(32)] = 1147,
  [SMALL_STATE(33)] = 1175,
  [SMALL_STATE(34)] = 1203,
  [SMALL_STATE(35)] = 1231,
  [SMALL_STATE(36)] = 1242,
  [SMALL_STATE(37)] = 1253,
  [SMALL_STATE(38)] = 1263,
  [SMALL_STATE(39)] = 1273,
  [SMALL_STATE(40)] = 1289,
  [SMALL_STATE(41)] = 1299,
  [SMALL_STATE(42)] = 1315,
  [SMALL_STATE(43)] = 1325,
  [SMALL_STATE(44)] = 1338,
  [SMALL_STATE(45)] = 1351,
  [SMALL_STATE(46)] = 1364,
  [SMALL_STATE(47)] = 1377,
  [SMALL_STATE(48)] = 1390,
  [SMALL_STATE(49)] = 1403,
  [SMALL_STATE(50)] = 1414,
  [SMALL_STATE(51)] = 1425,
  [SMALL_STATE(52)] = 1436,
  [SMALL_STATE(53)] = 1447,
  [SMALL_STATE(54)] = 1458,
  [SMALL_STATE(55)] = 1469,
  [SMALL_STATE(56)] = 1480,
  [SMALL_STATE(57)] = 1491,
  [SMALL_STATE(58)] = 1502,
  [SMALL_STATE(59)] = 1513,
  [SMALL_STATE(60)] = 1524,
  [SMALL_STATE(61)] = 1537,
  [SMALL_STATE(62)] = 1550,
  [SMALL_STATE(63)] = 1563,
  [SMALL_STATE(64)] = 1576,
  [SMALL_STATE(65)] = 1589,
  [SMALL_STATE(66)] = 1602,
  [SMALL_STATE(67)] = 1615,
  [SMALL_STATE(68)] = 1628,
  [SMALL_STATE(69)] = 1641,
  [SMALL_STATE(70)] = 1654,
  [SMALL_STATE(71)] = 1667,
  [SMALL_STATE(72)] = 1680,
  [SMALL_STATE(73)] = 1693,
  [SMALL_STATE(74)] = 1706,
  [SMALL_STATE(75)] = 1719,
  [SMALL_STATE(76)] = 1732,
  [SMALL_STATE(77)] = 1742,
  [SMALL_STATE(78)] = 1750,
  [SMALL_STATE(79)] = 1760,
  [SMALL_STATE(80)] = 1770,
  [SMALL_STATE(81)] = 1780,
  [SMALL_STATE(82)] = 1790,
  [SMALL_STATE(83)] = 1800,
  [SMALL_STATE(84)] = 1810,
  [SMALL_STATE(85)] = 1820,
  [SMALL_STATE(86)] = 1830,
  [SMALL_STATE(87)] = 1840,
  [SMALL_STATE(88)] = 1850,
  [SMALL_STATE(89)] = 1860,
  [SMALL_STATE(90)] = 1870,
  [SMALL_STATE(91)] = 1880,
  [SMALL_STATE(92)] = 1890,
  [SMALL_STATE(93)] = 1900,
  [SMALL_STATE(94)] = 1910,
  [SMALL_STATE(95)] = 1920,
  [SMALL_STATE(96)] = 1930,
  [SMALL_STATE(97)] = 1940,
  [SMALL_STATE(98)] = 1950,
  [SMALL_STATE(99)] = 1960,
  [SMALL_STATE(100)] = 1968,
  [SMALL_STATE(101)] = 1978,
  [SMALL_STATE(102)] = 1988,
  [SMALL_STATE(103)] = 1998,
  [SMALL_STATE(104)] = 2008,
  [SMALL_STATE(105)] = 2018,
  [SMALL_STATE(106)] = 2028,
  [SMALL_STATE(107)] = 2038,
  [SMALL_STATE(108)] = 2048,
  [SMALL_STATE(109)] = 2058,
  [SMALL_STATE(110)] = 2068,
  [SMALL_STATE(111)] = 2078,
  [SMALL_STATE(112)] = 2088,
  [SMALL_STATE(113)] = 2095,
  [SMALL_STATE(114)] = 2100,
  [SMALL_STATE(115)] = 2107,
  [SMALL_STATE(116)] = 2114,
  [SMALL_STATE(117)] = 2121,
  [SMALL_STATE(118)] = 2128,
  [SMALL_STATE(119)] = 2135,
  [SMALL_STATE(120)] = 2142,
  [SMALL_STATE(121)] = 2149,
  [SMALL_STATE(122)] = 2156,
  [SMALL_STATE(123)] = 2163,
  [SMALL_STATE(124)] = 2170,
  [SMALL_STATE(125)] = 2177,
  [SMALL_STATE(126)] = 2184,
  [SMALL_STATE(127)] = 2191,
  [SMALL_STATE(128)] = 2198,
  [SMALL_STATE(129)] = 2205,
  [SMALL_STATE(130)] = 2212,
  [SMALL_STATE(131)] = 2219,
  [SMALL_STATE(132)] = 2226,
  [SMALL_STATE(133)] = 2233,
  [SMALL_STATE(134)] = 2240,
  [SMALL_STATE(135)] = 2247,
  [SMALL_STATE(136)] = 2254,
  [SMALL_STATE(137)] = 2261,
  [SMALL_STATE(138)] = 2268,
  [SMALL_STATE(139)] = 2275,
  [SMALL_STATE(140)] = 2282,
  [SMALL_STATE(141)] = 2289,
  [SMALL_STATE(142)] = 2296,
  [SMALL_STATE(143)] = 2303,
  [SMALL_STATE(144)] = 2310,
  [SMALL_STATE(145)] = 2317,
  [SMALL_STATE(146)] = 2324,
  [SMALL_STATE(147)] = 2331,
  [SMALL_STATE(148)] = 2338,
  [SMALL_STATE(149)] = 2345,
  [SMALL_STATE(150)] = 2352,
  [SMALL_STATE(151)] = 2359,
  [SMALL_STATE(152)] = 2366,
  [SMALL_STATE(153)] = 2373,
  [SMALL_STATE(154)] = 2380,
  [SMALL_STATE(155)] = 2387,
  [SMALL_STATE(156)] = 2392,
  [SMALL_STATE(157)] = 2399,
  [SMALL_STATE(158)] = 2404,
  [SMALL_STATE(159)] = 2408,
  [SMALL_STATE(160)] = 2412,
  [SMALL_STATE(161)] = 2416,
  [SMALL_STATE(162)] = 2420,
  [SMALL_STATE(163)] = 2424,
  [SMALL_STATE(164)] = 2428,
  [SMALL_STATE(165)] = 2432,
  [SMALL_STATE(166)] = 2436,
  [SMALL_STATE(167)] = 2440,
  [SMALL_STATE(168)] = 2444,
  [SMALL_STATE(169)] = 2448,
  [SMALL_STATE(170)] = 2452,
  [SMALL_STATE(171)] = 2456,
  [SMALL_STATE(172)] = 2460,
  [SMALL_STATE(173)] = 2464,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(105),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(111),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(109),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(107),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(120),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(106),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(103),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(100),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(99),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(77),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(35),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(9),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(9),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(87),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(36),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(14),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(31),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(31),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(32),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(32),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(3),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__body_elements, 2),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__body_elements, 2),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(11),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(11),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(20),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(34),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(34),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(32),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(32),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__char, 1),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__char, 1),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 1),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 3),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__line_repeat1, 2), SHIFT_REPEAT(9),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__line_repeat1, 2), SHIFT_REPEAT(16),
  [201] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__line_repeat1, 2), SHIFT_REPEAT(16),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__line_repeat1, 2),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__line_repeat1, 2), SHIFT_REPEAT(11),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__line_repeat1, 2), SHIFT_REPEAT(19),
  [222] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__line_repeat1, 2), SHIFT_REPEAT(19),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__line_repeat1, 3),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__line_repeat1, 3),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 5),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 1),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference, 1),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [271] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_block_repeat1, 2), SHIFT_REPEAT(171),
  [274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_block_repeat1, 2), SHIFT_REPEAT(98),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [285] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__footnote_block_repeat1, 2), SHIFT_REPEAT(95),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bullet_list_item, 2),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__enumerated_list_item, 2),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 2),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_list_item, 2),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_block, 2),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footnote, 2),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_citation, 2),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__embed_directive, 4),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3),
  [318] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__bullet_list_item_repeat1, 2), SHIFT_REPEAT(59),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__bullet_list_item_repeat1, 2),
  [323] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_block_repeat1, 2), SHIFT_REPEAT(38),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [328] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__substitution_definition_block_repeat1, 2), SHIFT_REPEAT(89),
  [331] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__directive_block_repeat1, 2), SHIFT_REPEAT(42),
  [334] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__anoynymous_hyperlink_target_block_repeat1, 2), SHIFT_REPEAT(130),
  [337] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hyperlink_target_block_repeat1, 2), SHIFT_REPEAT(129),
  [340] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__citation_block_repeat1, 2), SHIFT_REPEAT(92),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [347] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_option_list_repeat1, 2), SHIFT_REPEAT(76),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_list_repeat1, 2), SHIFT_REPEAT(90),
  [355] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bullet_list_repeat1, 2), SHIFT_REPEAT(104),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [360] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enumerated_list_repeat1, 2), SHIFT_REPEAT(79),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__anonymous_target, 1),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_line_block_repeat1, 2),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_block_repeat1, 2),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [395] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__bullet_list_item_repeat1, 2), SHIFT_REPEAT(96),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 1),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_list, 2),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 2),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bullet_list, 1),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumerated_list, 1),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_list, 1),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_list, 1),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_block, 1),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__footnote_block, 1),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__citation_block, 1),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hyperlink_target_block, 1),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__substitution_definition_block, 2),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directive_block, 2),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_block, 2),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__anoynymous_hyperlink_target_block, 2),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__anoynymous_hyperlink_target_block, 1),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directive_block, 1),
  [490] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hyperlink_target_block, 2),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__citation_block, 2),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__footnote_block, 2),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_block, 2),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_list, 2),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumerated_list, 2),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bullet_list, 2),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__comment_block_repeat1, 2),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__substitution_definition_block_repeat1, 2),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__substitution_definition_block, 1),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_block, 1),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__directive_block_repeat1, 2),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 1),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__anoynymous_hyperlink_target_block_repeat1, 2),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hyperlink_target_block_repeat1, 2),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__citation_block_repeat1, 2),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__footnote_block_repeat1, 2),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_option_list_repeat1, 2),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_list_repeat1, 2),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enumerated_list_repeat1, 2),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bullet_list_repeat1, 2),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_substitution_definition, 2),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__anonymous_target, 2),
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
