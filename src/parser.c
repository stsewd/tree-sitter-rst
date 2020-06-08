#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 174
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 106
#define ALIAS_COUNT 1
#define TOKEN_COUNT 55
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
  aux_sym_reference_token3 = 52,
  sym__eol = 53,
  sym__blank_line = 54,
  sym_document = 55,
  sym__body_elements = 56,
  sym_paragraph = 57,
  sym__list = 58,
  sym_bullet_list = 59,
  sym__bullet_list_item = 60,
  sym_enumerated_list = 61,
  sym__enumerated_list_item = 62,
  sym_field_list = 63,
  sym_field = 64,
  sym_option_list = 65,
  sym_option_list_item = 66,
  sym_line_block = 67,
  sym__single_line_block = 68,
  sym__markup_block = 69,
  sym__footnote_block = 70,
  sym_footnote = 71,
  sym__citation_block = 72,
  sym_citation = 73,
  sym__hyperlink_target_block = 74,
  sym_target = 75,
  sym__anoynymous_hyperlink_target_block = 76,
  sym__anonymous_target = 77,
  sym__directive_block = 78,
  sym_directive = 79,
  sym__substitution_definition_block = 80,
  sym_substitution_definition = 81,
  sym__embed_directive = 82,
  sym__comment_block = 83,
  sym_comment = 84,
  sym__line = 85,
  sym__char = 86,
  sym__inline_markup_block = 87,
  sym__inline_markup = 88,
  sym_reference = 89,
  aux_sym_document_repeat1 = 90,
  aux_sym_paragraph_repeat1 = 91,
  aux_sym_bullet_list_repeat1 = 92,
  aux_sym__bullet_list_item_repeat1 = 93,
  aux_sym_enumerated_list_repeat1 = 94,
  aux_sym_field_list_repeat1 = 95,
  aux_sym_option_list_repeat1 = 96,
  aux_sym_line_block_repeat1 = 97,
  aux_sym__footnote_block_repeat1 = 98,
  aux_sym__citation_block_repeat1 = 99,
  aux_sym__hyperlink_target_block_repeat1 = 100,
  aux_sym__anoynymous_hyperlink_target_block_repeat1 = 101,
  aux_sym__directive_block_repeat1 = 102,
  aux_sym__substitution_definition_block_repeat1 = 103,
  aux_sym__comment_block_repeat1 = 104,
  aux_sym__line_repeat1 = 105,
  alias_sym_list_item = 106,
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
  [aux_sym_reference_token3] = "reference_token3",
  [sym__eol] = "_eol",
  [sym__blank_line] = "_blank_line",
  [sym_document] = "document",
  [sym__body_elements] = "_body_elements",
  [sym_paragraph] = "paragraph",
  [sym__list] = "_list",
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
  [sym__inline_markup_block] = "_inline_markup_block",
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
  [alias_sym_list_item] = "list_item",
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
  [aux_sym_reference_token3] = aux_sym_reference_token3,
  [sym__eol] = sym__eol,
  [sym__blank_line] = sym__blank_line,
  [sym_document] = sym_document,
  [sym__body_elements] = sym__body_elements,
  [sym_paragraph] = sym_paragraph,
  [sym__list] = sym__list,
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
  [sym__inline_markup_block] = sym__inline_markup_block,
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
  [alias_sym_list_item] = alias_sym_list_item,
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
  [aux_sym_reference_token3] = {
    .visible = false,
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
  [sym__list] = {
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
  [sym__inline_markup_block] = {
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
      if (eof) ADVANCE(150);
      if (lookahead == '\t') ADVANCE(180);
      if (lookahead == 11) ADVANCE(181);
      if (lookahead == '\f') ADVANCE(183);
      if (lookahead == '\r') ADVANCE(151);
      if (lookahead == ' ') ADVANCE(179);
      if (lookahead == '!') ADVANCE(212);
      if (lookahead == '"') ADVANCE(224);
      if (lookahead == '\'') ADVANCE(222);
      if (lookahead == '(') ADVANCE(236);
      if (lookahead == ')') ADVANCE(226);
      if (lookahead == ',') ADVANCE(205);
      if (lookahead == '-') ADVANCE(199);
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == '/') ADVANCE(219);
      if (lookahead == ':') ADVANCE(207);
      if (lookahead == ';') ADVANCE(210);
      if (lookahead == '<') ADVANCE(234);
      if (lookahead == '>') ADVANCE(232);
      if (lookahead == '?') ADVANCE(214);
      if (lookahead == '[') ADVANCE(238);
      if (lookahead == '\\') ADVANCE(216);
      if (lookahead == ']') ADVANCE(228);
      if (lookahead == '{') ADVANCE(240);
      if (lookahead == '|') ADVANCE(161);
      if (lookahead == '}') ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(151);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(180);
      if (lookahead == 11) ADVANCE(181);
      if (lookahead == '\f') ADVANCE(183);
      if (lookahead == ' ') ADVANCE(179);
      if (lookahead == '!') ADVANCE(212);
      if (lookahead == '"') ADVANCE(224);
      if (lookahead == '\'') ADVANCE(222);
      if (lookahead == '(') ADVANCE(236);
      if (lookahead == ')') ADVANCE(226);
      if (lookahead == ',') ADVANCE(205);
      if (lookahead == '-') ADVANCE(199);
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == '/') ADVANCE(219);
      if (lookahead == ':') ADVANCE(207);
      if (lookahead == ';') ADVANCE(210);
      if (lookahead == '<') ADVANCE(234);
      if (lookahead == '>') ADVANCE(232);
      if (lookahead == '?') ADVANCE(214);
      if (lookahead == '[') ADVANCE(238);
      if (lookahead == '\\') ADVANCE(218);
      if (lookahead == ']') ADVANCE(228);
      if (lookahead == '{') ADVANCE(240);
      if (lookahead == '}') ADVANCE(230);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(242);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(180);
      if (lookahead == 11) ADVANCE(182);
      if (lookahead == '\f') ADVANCE(184);
      if (lookahead == ' ') ADVANCE(179);
      if (lookahead == '!') ADVANCE(213);
      if (lookahead == '"') ADVANCE(225);
      if (lookahead == '\'') ADVANCE(223);
      if (lookahead == '(') ADVANCE(237);
      if (lookahead == ')') ADVANCE(227);
      if (lookahead == '*') ADVANCE(243);
      if (lookahead == ',') ADVANCE(206);
      if (lookahead == '-') ADVANCE(200);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == '/') ADVANCE(221);
      if (lookahead == ':') ADVANCE(209);
      if (lookahead == ';') ADVANCE(211);
      if (lookahead == '<') ADVANCE(235);
      if (lookahead == '>') ADVANCE(233);
      if (lookahead == '?') ADVANCE(215);
      if (lookahead == '[') ADVANCE(239);
      if (lookahead == '\\') ADVANCE(217);
      if (lookahead == ']') ADVANCE(229);
      if (lookahead == '_') ADVANCE(252);
      if (lookahead == '`') ADVANCE(250);
      if (lookahead == '{') ADVANCE(241);
      if (lookahead == '|') ADVANCE(251);
      if (lookahead == '}') ADVANCE(231);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(248);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(133);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(111);
      if (lookahead == ' ') ADVANCE(134);
      if (lookahead == ',') ADVANCE(6);
      if (lookahead == '=') ADVANCE(74);
      if (lookahead == '_') ADVANCE(270);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(75);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(133);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(111);
      if (lookahead == ' ') ADVANCE(134);
      if (lookahead == ',') ADVANCE(6);
      if (lookahead == '=') ADVANCE(74);
      if (lookahead == '_') ADVANCE(4);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(75);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(19);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(19);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(75);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(63);
      if (lookahead == '*') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(63);
      if (lookahead == '*') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(65);
      if (lookahead == '*') ADVANCE(66);
      if (lookahead == '_') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(75);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(75);
      if (lookahead == '_') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(17);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(257);
      if (lookahead == '_') ADVANCE(271);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(120);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(257);
      if (lookahead == '_') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(120);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(256);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(120);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(259);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(75);
      END_STATE();
    case 15:
      if (lookahead == '*') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(124);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '*') ADVANCE(258);
      END_STATE();
    case 17:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '_') ADVANCE(272);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(124);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '_') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(124);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 19:
      if (lookahead == '+') ADVANCE(145);
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == '/') ADVANCE(145);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 21:
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'I' ||
          lookahead == 'L' ||
          lookahead == 'M' ||
          lookahead == 'V' ||
          lookahead == 'X') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(75);
      END_STATE();
    case 22:
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 'c' ||
          lookahead == 'd' ||
          lookahead == 'i' ||
          lookahead == 'l' ||
          lookahead == 'm' ||
          lookahead == 'v' ||
          lookahead == 'x') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(75);
      END_STATE();
    case 23:
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '_') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(75);
      END_STATE();
    case 24:
      if (lookahead == '.') ADVANCE(194);
      END_STATE();
    case 25:
      if (lookahead == '.') ADVANCE(24);
      END_STATE();
    case 26:
      if (lookahead == '.') ADVANCE(130);
      END_STATE();
    case 27:
      if (lookahead == '.') ADVANCE(139);
      END_STATE();
    case 28:
      if (lookahead == '.') ADVANCE(140);
      END_STATE();
    case 29:
      if (lookahead == '.') ADVANCE(28);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == '_') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(33);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == '_') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(33);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 32:
      if (lookahead == ':') ADVANCE(170);
      END_STATE();
    case 33:
      if (lookahead == ':') ADVANCE(170);
      if (lookahead == '_') ADVANCE(83);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead == ':') ADVANCE(170);
      if (lookahead != 0) ADVANCE(83);
      END_STATE();
    case 35:
      if (lookahead == ':') ADVANCE(173);
      if (lookahead == '_') ADVANCE(44);
      if (lookahead == '`') ADVANCE(33);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 36:
      if (lookahead == ':') ADVANCE(173);
      if (lookahead == '`') ADVANCE(83);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 37:
      if (lookahead == ':') ADVANCE(178);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 38:
      if (lookahead == ':') ADVANCE(171);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(75);
      END_STATE();
    case 39:
      if (lookahead == ':') ADVANCE(171);
      if (lookahead == '_') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(83);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 40:
      if (lookahead == ':') ADVANCE(171);
      if (lookahead == '_') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(33);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 41:
      if (lookahead == ':') ADVANCE(172);
      if (lookahead == '_') ADVANCE(276);
      if (lookahead == '`') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead != 0) ADVANCE(51);
      END_STATE();
    case 42:
      if (lookahead == ':') ADVANCE(172);
      if (lookahead == '_') ADVANCE(276);
      if (lookahead == '`') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 43:
      if (lookahead == ':') ADVANCE(177);
      if (lookahead == '_') ADVANCE(283);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(75);
      END_STATE();
    case 44:
      if (lookahead == ':') ADVANCE(101);
      if (lookahead == '_') ADVANCE(44);
      if (lookahead == '`') ADVANCE(33);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 45:
      if (lookahead == ':') ADVANCE(193);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 46:
      if (lookahead == ':') ADVANCE(135);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 47:
      if (lookahead == ':') ADVANCE(37);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 48:
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == '_') ADVANCE(283);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(75);
      END_STATE();
    case 49:
      if (lookahead == ':') ADVANCE(112);
      if (lookahead == '_') ADVANCE(275);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 50:
      if (lookahead == ':') ADVANCE(112);
      if (lookahead == '_') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 51:
      if (lookahead == ':') ADVANCE(96);
      if (lookahead == '_') ADVANCE(276);
      if (lookahead == '`') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 52:
      if (lookahead == ':') ADVANCE(96);
      if (lookahead == '_') ADVANCE(52);
      if (lookahead == '`') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 53:
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == ']') ADVANCE(78);
      if (lookahead == '_') ADVANCE(277);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(121);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 54:
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == ']') ADVANCE(78);
      if (lookahead == '_') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(121);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 55:
      if (lookahead == '[') ADVANCE(7);
      if (lookahead == '_') ADVANCE(79);
      if (lookahead == '|') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 56:
      if (lookahead == '[') ADVANCE(9);
      if (lookahead == '_') ADVANCE(273);
      if (lookahead == '|') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(75);
      END_STATE();
    case 57:
      if (lookahead == '[') ADVANCE(8);
      if (lookahead == '_') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 58:
      if (lookahead == '[') ADVANCE(144);
      END_STATE();
    case 59:
      if (lookahead == ']') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(59);
      END_STATE();
    case 60:
      if (lookahead == ']') ADVANCE(136);
      END_STATE();
    case 61:
      if (lookahead == ']') ADVANCE(136);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 62:
      if (lookahead == ']') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 63:
      if (lookahead == ']') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 64:
      if (lookahead == ']') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 65:
      if (lookahead == ']') ADVANCE(113);
      if (lookahead == '_') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(75);
      END_STATE();
    case 66:
      if (lookahead == ']') ADVANCE(113);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(75);
      END_STATE();
    case 67:
      if (lookahead == ']') ADVANCE(113);
      if (lookahead == '_') ADVANCE(284);
      if (lookahead == '-' ||
          lookahead == '.') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(75);
      END_STATE();
    case 68:
      if (lookahead == ']') ADVANCE(113);
      if (lookahead == '_') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(75);
      END_STATE();
    case 69:
      if (lookahead == ']') ADVANCE(113);
      if (lookahead == '_') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(75);
      END_STATE();
    case 70:
      if (lookahead == ']') ADVANCE(137);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 71:
      if (lookahead == ']') ADVANCE(114);
      if (lookahead == '_') ADVANCE(284);
      if (lookahead == '-' ||
          lookahead == '.') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(75);
      END_STATE();
    case 72:
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == '`') ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(75);
      END_STATE();
    case 73:
      if (lookahead == '_') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(75);
      END_STATE();
    case 74:
      if (lookahead == '_') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(75);
      END_STATE();
    case 75:
      if (lookahead == '_') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(75);
      END_STATE();
    case 76:
      if (lookahead == '_') ADVANCE(280);
      if (lookahead == '`') ADVANCE(260);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(122);
      if (lookahead != 0) ADVANCE(76);
      END_STATE();
    case 77:
      if (lookahead == '_') ADVANCE(281);
      if (lookahead == '|') ADVANCE(265);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(123);
      if (lookahead != 0) ADVANCE(77);
      END_STATE();
    case 78:
      if (lookahead == '_') ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(75);
      END_STATE();
    case 79:
      if (lookahead == '_') ADVANCE(32);
      if (lookahead == '`') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(34);
      END_STATE();
    case 80:
      if (lookahead == '_') ADVANCE(282);
      if (lookahead == '|') ADVANCE(116);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(80);
      END_STATE();
    case 81:
      if (lookahead == '_') ADVANCE(282);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(80);
      END_STATE();
    case 82:
      if (lookahead == '_') ADVANCE(283);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(75);
      END_STATE();
    case 83:
      if (lookahead == '_') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(33);
      END_STATE();
    case 84:
      if (lookahead == '_') ADVANCE(284);
      if (lookahead == '-' ||
          lookahead == '.') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(75);
      END_STATE();
    case 85:
      if (lookahead == '_') ADVANCE(268);
      END_STATE();
    case 86:
      if (lookahead == '_') ADVANCE(175);
      END_STATE();
    case 87:
      if (lookahead == '_') ADVANCE(285);
      if (lookahead == '`') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(88);
      END_STATE();
    case 88:
      if (lookahead == '_') ADVANCE(285);
      if (lookahead == '`') ADVANCE(267);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(125);
      if (lookahead != 0) ADVANCE(88);
      END_STATE();
    case 89:
      if (lookahead == '_') ADVANCE(89);
      if (lookahead == '|') ADVANCE(265);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(123);
      if (lookahead != 0) ADVANCE(77);
      END_STATE();
    case 90:
      if (lookahead == '_') ADVANCE(90);
      if (lookahead == '|') ADVANCE(116);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(80);
      END_STATE();
    case 91:
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(75);
      END_STATE();
    case 92:
      if (lookahead == '_') ADVANCE(92);
      if (lookahead == '-' ||
          lookahead == '.') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(75);
      END_STATE();
    case 93:
      if (lookahead == '_') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(75);
      END_STATE();
    case 94:
      if (lookahead == '_') ADVANCE(286);
      if (lookahead == '`') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(95);
      END_STATE();
    case 95:
      if (lookahead == '_') ADVANCE(286);
      if (lookahead == '`') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(126);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 96:
      if (lookahead == '_') ADVANCE(287);
      if (lookahead == '`') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(101);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 97:
      if (lookahead == '_') ADVANCE(97);
      if (lookahead == '`') ADVANCE(260);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(122);
      if (lookahead != 0) ADVANCE(76);
      END_STATE();
    case 98:
      if (lookahead == '_') ADVANCE(98);
      if (lookahead == '`') ADVANCE(267);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(125);
      if (lookahead != 0) ADVANCE(88);
      END_STATE();
    case 99:
      if (lookahead == '_') ADVANCE(99);
      if (lookahead == '`') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(126);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 100:
      if (lookahead == '_') ADVANCE(100);
      if (lookahead == '`') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(101);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 101:
      if (lookahead == '`') ADVANCE(32);
      if (lookahead != 0) ADVANCE(101);
      END_STATE();
    case 102:
      if (lookahead == '`') ADVANCE(261);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(122);
      if (lookahead != 0) ADVANCE(102);
      END_STATE();
    case 103:
      if (lookahead == '`') ADVANCE(266);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(125);
      if (lookahead != 0) ADVANCE(103);
      END_STATE();
    case 104:
      if (lookahead == '`') ADVANCE(105);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(126);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 105:
      if (lookahead == '`') ADVANCE(262);
      END_STATE();
    case 106:
      if (lookahead == '|') ADVANCE(264);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(123);
      if (lookahead != 0) ADVANCE(106);
      END_STATE();
    case 107:
      if (lookahead == '|') ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 108:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(155);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(156);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(75);
      END_STATE();
    case 109:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(133);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(111);
      if (lookahead == ',') ADVANCE(6);
      if (lookahead == '_') ADVANCE(288);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(75);
      END_STATE();
    case 110:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(133);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(111);
      if (lookahead == ',') ADVANCE(6);
      if (lookahead == '_') ADVANCE(110);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(75);
      END_STATE();
    case 111:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(159);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(160);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(75);
      END_STATE();
    case 112:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(157);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(158);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(75);
      END_STATE();
    case 113:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(166);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(167);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(75);
      END_STATE();
    case 114:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(168);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(169);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(75);
      END_STATE();
    case 115:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(187);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(186);
      if (lookahead == '\r') ADVANCE(118);
      if (lookahead == '|') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 116:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(187);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(185);
      if (lookahead == '\r') ADVANCE(118);
      if (lookahead == '_') ADVANCE(282);
      if (lookahead == '|') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(80);
      END_STATE();
    case 117:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f') ADVANCE(133);
      if (lookahead == ' ') ADVANCE(134);
      if (lookahead == ',') ADVANCE(5);
      if (lookahead == '=') ADVANCE(143);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 118:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 119:
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 120:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(13);
      END_STATE();
    case 121:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(59);
      END_STATE();
    case 122:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(102);
      END_STATE();
    case 123:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '|') ADVANCE(106);
      END_STATE();
    case 124:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(15);
      END_STATE();
    case 125:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(103);
      END_STATE();
    case 126:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(104);
      END_STATE();
    case 127:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(152);
      END_STATE();
    case 128:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(152);
      if (lookahead == '-') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 129:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 130:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(155);
      END_STATE();
    case 131:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(155);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '_') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 132:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(133);
      if (lookahead == ',') ADVANCE(5);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 133:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(159);
      END_STATE();
    case 134:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 135:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(157);
      END_STATE();
    case 136:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(166);
      END_STATE();
    case 137:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(168);
      END_STATE();
    case 138:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(147);
      if (lookahead == '#') ADVANCE(26);
      if (lookahead == '*' ||
          lookahead == 8226 ||
          lookahead == 8227 ||
          lookahead == 8259) ADVANCE(127);
      if (lookahead == '+') ADVANCE(129);
      if (lookahead == '-') ADVANCE(128);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == '/') ADVANCE(145);
      if (lookahead == ':') ADVANCE(45);
      if (lookahead == '_') ADVANCE(86);
      if (lookahead == '|') ADVANCE(163);
      if (lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'I' ||
          lookahead == 'L' ||
          lookahead == 'M' ||
          lookahead == 'V' ||
          lookahead == 'X') ADVANCE(188);
      if (lookahead == 'c' ||
          lookahead == 'd' ||
          lookahead == 'i' ||
          lookahead == 'l' ||
          lookahead == 'm' ||
          lookahead == 'v' ||
          lookahead == 'x') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(191);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 139:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(57);
      END_STATE();
    case 140:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(58);
      END_STATE();
    case 141:
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '_') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 142:
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '_') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 143:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 144:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 145:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 146:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(151);
      END_STATE();
    case 147:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(174);
      END_STATE();
    case 148:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(107);
      END_STATE();
    case 149:
      if (eof) ADVANCE(150);
      if (lookahead == '\t') ADVANCE(180);
      if (lookahead == 11) ADVANCE(182);
      if (lookahead == '\f') ADVANCE(184);
      if (lookahead == ' ') ADVANCE(179);
      if (lookahead == '!') ADVANCE(213);
      if (lookahead == '"') ADVANCE(225);
      if (lookahead == '#') ADVANCE(247);
      if (lookahead == '\'') ADVANCE(223);
      if (lookahead == '(') ADVANCE(237);
      if (lookahead == ')') ADVANCE(227);
      if (lookahead == '*') ADVANCE(253);
      if (lookahead == '+') ADVANCE(254);
      if (lookahead == ',') ADVANCE(206);
      if (lookahead == '-') ADVANCE(201);
      if (lookahead == '.') ADVANCE(203);
      if (lookahead == '/') ADVANCE(220);
      if (lookahead == ':') ADVANCE(208);
      if (lookahead == ';') ADVANCE(211);
      if (lookahead == '<') ADVANCE(235);
      if (lookahead == '>') ADVANCE(233);
      if (lookahead == '?') ADVANCE(215);
      if (lookahead == '[') ADVANCE(239);
      if (lookahead == '\\') ADVANCE(217);
      if (lookahead == ']') ADVANCE(229);
      if (lookahead == '_') ADVANCE(249);
      if (lookahead == '`') ADVANCE(250);
      if (lookahead == '{') ADVANCE(241);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '}') ADVANCE(231);
      if (lookahead == 8226 ||
          lookahead == 8227 ||
          lookahead == 8259) ADVANCE(255);
      if (lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'I' ||
          lookahead == 'L' ||
          lookahead == 'M' ||
          lookahead == 'V' ||
          lookahead == 'X') ADVANCE(244);
      if (lookahead == 'c' ||
          lookahead == 'd' ||
          lookahead == 'i' ||
          lookahead == 'l' ||
          lookahead == 'm' ||
          lookahead == 'v' ||
          lookahead == 'x') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(246);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(247);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(248);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym__bullet_list_item_token1);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__char_bullet);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__char_bullet);
      if (lookahead == '*') ADVANCE(257);
      if (lookahead == '_') ADVANCE(271);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(120);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__char_bullet);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(75);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym__enumerated_list_item_token1);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym__enumerated_list_item_token1);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(75);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_field_token1);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_field_token1);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(75);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_option_list_item_token1);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_option_list_item_token1);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(75);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(164);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(165);
      if (lookahead == '_') ADVANCE(281);
      if (lookahead == '|') ADVANCE(75);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(77);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(164);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym__single_line_block_token1);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym__single_line_block_token1);
      if (lookahead == '_') ADVANCE(281);
      if (lookahead == '|') ADVANCE(265);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(123);
      if (lookahead != 0) ADVANCE(77);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_footnote_token1);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_footnote_token1);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(75);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_citation_token1);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_citation_token1);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(75);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_target_token1);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(75);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == '_') ADVANCE(287);
      if (lookahead == '`') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(101);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == '`') ADVANCE(32);
      if (lookahead != 0) ADVANCE(101);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_target_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(174);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym___);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym___);
      if (lookahead == '_') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(75);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == '_') ADVANCE(283);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(75);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '_') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_TAB);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_2);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(75);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_3);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_3);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(75);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_substitution_definition_token1);
      if (lookahead == '_') ADVANCE(282);
      if (lookahead == '|') ADVANCE(116);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(80);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_substitution_definition_token1);
      if (lookahead == '|') ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_substitution_definition_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym__embed_directive_token1);
      if (lookahead == '.') ADVANCE(131);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '_') ADVANCE(142);
      if (lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'I' ||
          lookahead == 'L' ||
          lookahead == 'M' ||
          lookahead == 'V' ||
          lookahead == 'X') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym__embed_directive_token1);
      if (lookahead == '.') ADVANCE(131);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '_') ADVANCE(142);
      if (lookahead == 'c' ||
          lookahead == 'd' ||
          lookahead == 'i' ||
          lookahead == 'l' ||
          lookahead == 'm' ||
          lookahead == 'v' ||
          lookahead == 'x') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym__embed_directive_token1);
      if (lookahead == '.') ADVANCE(131);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '_') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym__embed_directive_token1);
      if (lookahead == '.') ADVANCE(131);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '_') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym__embed_directive_token1);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '_') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(55);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(56);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(75);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym__line_token1);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(75);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '_') ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(75);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(75);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(152);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(154);
      if (lookahead == '-') ADVANCE(73);
      if (lookahead == '_') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(75);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(195);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(75);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(75);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(75);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == '_') ADVANCE(275);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(75);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(75);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(75);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(75);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(197);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(196);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '_') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(75);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(75);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(75);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(75);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(75);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(75);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(75);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(75);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(75);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(75);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '_') ADVANCE(277);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(53);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(75);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym__char_token1);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym__char_token1);
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '_') ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(11);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym__char_token1);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'I' ||
          lookahead == 'L' ||
          lookahead == 'M' ||
          lookahead == 'V' ||
          lookahead == 'X') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(75);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym__char_token1);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 'c' ||
          lookahead == 'd' ||
          lookahead == 'i' ||
          lookahead == 'l' ||
          lookahead == 'm' ||
          lookahead == 'v' ||
          lookahead == 'x') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(75);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym__char_token1);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '_') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(75);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym__char_token1);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(75);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym__char_token1);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(75);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym__char_token1);
      if (lookahead == '_') ADVANCE(176);
      if (lookahead == '`') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(75);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym__char_token1);
      if (lookahead == '_') ADVANCE(280);
      if (lookahead == '`') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(76);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym__char_token1);
      if (lookahead == '_') ADVANCE(281);
      if (lookahead == '|') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(77);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym__char_token1);
      if (lookahead == '_') ADVANCE(93);
      if (lookahead == '`') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(75);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym__char_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(152);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(153);
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '_') ADVANCE(271);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(11);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym__char_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(152);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(154);
      if (lookahead == '_') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(75);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym__char_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(152);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(154);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(75);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_emphasis);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_emphasis);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(75);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_strong);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_strong);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(75);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_interpreted_text);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(75);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_interpreted_text);
      if (lookahead == '_') ADVANCE(308);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_literal);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(75);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_substitution_reference);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_substitution_reference);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(75);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym__inline_target);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym__inline_target);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(75);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_footnote_reference);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_footnote_reference);
      if (lookahead == '_') ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(75);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_reference_token1);
      if (lookahead == '\t') ADVANCE(133);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(111);
      if (lookahead == ' ') ADVANCE(134);
      if (lookahead == ',') ADVANCE(6);
      if (lookahead == '=') ADVANCE(74);
      if (lookahead == '_') ADVANCE(289);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(75);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_reference_token1);
      if (lookahead == '*') ADVANCE(257);
      if (lookahead == '_') ADVANCE(290);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(120);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_reference_token1);
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '_') ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(124);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_reference_token1);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == '_') ADVANCE(293);
      if (lookahead == '`') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(34);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_reference_token1);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == '_') ADVANCE(292);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(33);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_reference_token1);
      if (lookahead == ':') ADVANCE(112);
      if (lookahead == '_') ADVANCE(294);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_reference_token1);
      if (lookahead == ':') ADVANCE(96);
      if (lookahead == '_') ADVANCE(295);
      if (lookahead == '`') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_reference_token1);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == ']') ADVANCE(78);
      if (lookahead == '_') ADVANCE(296);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(121);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_reference_token1);
      if (lookahead == ']') ADVANCE(113);
      if (lookahead == '_') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(75);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_reference_token1);
      if (lookahead == '_') ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(75);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_reference_token1);
      if (lookahead == '_') ADVANCE(303);
      if (lookahead == '`') ADVANCE(260);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(122);
      if (lookahead != 0) ADVANCE(76);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_reference_token1);
      if (lookahead == '_') ADVANCE(298);
      if (lookahead == '|') ADVANCE(265);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(123);
      if (lookahead != 0) ADVANCE(77);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_reference_token1);
      if (lookahead == '_') ADVANCE(299);
      if (lookahead == '|') ADVANCE(116);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(80);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_reference_token1);
      if (lookahead == '_') ADVANCE(300);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(75);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_reference_token1);
      if (lookahead == '_') ADVANCE(301);
      if (lookahead == '-' ||
          lookahead == '.') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(75);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_reference_token1);
      if (lookahead == '_') ADVANCE(304);
      if (lookahead == '`') ADVANCE(267);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(125);
      if (lookahead != 0) ADVANCE(88);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_reference_token1);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == '`') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(126);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_reference_token1);
      if (lookahead == '_') ADVANCE(306);
      if (lookahead == '`') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(101);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_reference_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(133);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(111);
      if (lookahead == ',') ADVANCE(6);
      if (lookahead == '_') ADVANCE(307);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(75);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_reference_token2);
      if (lookahead == '\t') ADVANCE(133);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(111);
      if (lookahead == ' ') ADVANCE(134);
      if (lookahead == ',') ADVANCE(6);
      if (lookahead == '=') ADVANCE(74);
      if (lookahead == '_') ADVANCE(4);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(75);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_reference_token2);
      if (lookahead == '*') ADVANCE(257);
      if (lookahead == '_') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(120);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_reference_token2);
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '_') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(124);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_reference_token2);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == '_') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(33);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_reference_token2);
      if (lookahead == ':') ADVANCE(171);
      if (lookahead == '_') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(75);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_reference_token2);
      if (lookahead == ':') ADVANCE(112);
      if (lookahead == '_') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_reference_token2);
      if (lookahead == ':') ADVANCE(96);
      if (lookahead == '_') ADVANCE(52);
      if (lookahead == '`') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_reference_token2);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == ']') ADVANCE(78);
      if (lookahead == '_') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(121);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_reference_token2);
      if (lookahead == ']') ADVANCE(113);
      if (lookahead == '_') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(75);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_reference_token2);
      if (lookahead == '_') ADVANCE(89);
      if (lookahead == '|') ADVANCE(265);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(123);
      if (lookahead != 0) ADVANCE(77);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_reference_token2);
      if (lookahead == '_') ADVANCE(90);
      if (lookahead == '|') ADVANCE(116);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(80);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_reference_token2);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(75);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_reference_token2);
      if (lookahead == '_') ADVANCE(92);
      if (lookahead == '-' ||
          lookahead == '.') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(75);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_reference_token2);
      if (lookahead == '_') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(75);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_reference_token2);
      if (lookahead == '_') ADVANCE(97);
      if (lookahead == '`') ADVANCE(260);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(122);
      if (lookahead != 0) ADVANCE(76);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_reference_token2);
      if (lookahead == '_') ADVANCE(98);
      if (lookahead == '`') ADVANCE(267);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(125);
      if (lookahead != 0) ADVANCE(88);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_reference_token2);
      if (lookahead == '_') ADVANCE(99);
      if (lookahead == '`') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(126);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_reference_token2);
      if (lookahead == '_') ADVANCE(100);
      if (lookahead == '`') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(101);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_reference_token2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(133);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(111);
      if (lookahead == ',') ADVANCE(6);
      if (lookahead == '_') ADVANCE(110);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(75);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_reference_token3);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 149, .external_lex_state = 1},
  [2] = {.lex_state = 149, .external_lex_state = 1},
  [3] = {.lex_state = 149, .external_lex_state = 1},
  [4] = {.lex_state = 149, .external_lex_state = 1},
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
  [39] = {.lex_state = 138, .external_lex_state = 2},
  [40] = {.lex_state = 1, .external_lex_state = 2},
  [41] = {.lex_state = 138, .external_lex_state = 2},
  [42] = {.lex_state = 1, .external_lex_state = 2},
  [43] = {.lex_state = 138, .external_lex_state = 2},
  [44] = {.lex_state = 138, .external_lex_state = 2},
  [45] = {.lex_state = 138, .external_lex_state = 2},
  [46] = {.lex_state = 138, .external_lex_state = 2},
  [47] = {.lex_state = 149, .external_lex_state = 2},
  [48] = {.lex_state = 25, .external_lex_state = 2},
  [49] = {.lex_state = 146, .external_lex_state = 1},
  [50] = {.lex_state = 146, .external_lex_state = 1},
  [51] = {.lex_state = 146, .external_lex_state = 1},
  [52] = {.lex_state = 146, .external_lex_state = 1},
  [53] = {.lex_state = 146, .external_lex_state = 1},
  [54] = {.lex_state = 146, .external_lex_state = 1},
  [55] = {.lex_state = 146, .external_lex_state = 1},
  [56] = {.lex_state = 146, .external_lex_state = 1},
  [57] = {.lex_state = 146, .external_lex_state = 1},
  [58] = {.lex_state = 146, .external_lex_state = 1},
  [59] = {.lex_state = 146, .external_lex_state = 1},
  [60] = {.lex_state = 25, .external_lex_state = 2},
  [61] = {.lex_state = 138, .external_lex_state = 2},
  [62] = {.lex_state = 149, .external_lex_state = 2},
  [63] = {.lex_state = 138, .external_lex_state = 2},
  [64] = {.lex_state = 138, .external_lex_state = 2},
  [65] = {.lex_state = 138, .external_lex_state = 2},
  [66] = {.lex_state = 29, .external_lex_state = 2},
  [67] = {.lex_state = 138, .external_lex_state = 2},
  [68] = {.lex_state = 138, .external_lex_state = 2},
  [69] = {.lex_state = 138, .external_lex_state = 2},
  [70] = {.lex_state = 138, .external_lex_state = 2},
  [71] = {.lex_state = 138, .external_lex_state = 2},
  [72] = {.lex_state = 138, .external_lex_state = 2},
  [73] = {.lex_state = 138, .external_lex_state = 2},
  [74] = {.lex_state = 138, .external_lex_state = 2},
  [75] = {.lex_state = 29, .external_lex_state = 2},
  [76] = {.lex_state = 146, .external_lex_state = 2},
  [77] = {.lex_state = 138, .external_lex_state = 1},
  [78] = {.lex_state = 146, .external_lex_state = 2},
  [79] = {.lex_state = 146, .external_lex_state = 2},
  [80] = {.lex_state = 146, .external_lex_state = 2},
  [81] = {.lex_state = 146, .external_lex_state = 2},
  [82] = {.lex_state = 146, .external_lex_state = 2},
  [83] = {.lex_state = 146, .external_lex_state = 2},
  [84] = {.lex_state = 146, .external_lex_state = 2},
  [85] = {.lex_state = 146, .external_lex_state = 2},
  [86] = {.lex_state = 146, .external_lex_state = 2},
  [87] = {.lex_state = 138, .external_lex_state = 2},
  [88] = {.lex_state = 146, .external_lex_state = 2},
  [89] = {.lex_state = 138, .external_lex_state = 2},
  [90] = {.lex_state = 146, .external_lex_state = 2},
  [91] = {.lex_state = 146, .external_lex_state = 2},
  [92] = {.lex_state = 146, .external_lex_state = 2},
  [93] = {.lex_state = 146, .external_lex_state = 2},
  [94] = {.lex_state = 138, .external_lex_state = 2},
  [95] = {.lex_state = 146, .external_lex_state = 2},
  [96] = {.lex_state = 146, .external_lex_state = 2},
  [97] = {.lex_state = 146, .external_lex_state = 2},
  [98] = {.lex_state = 146, .external_lex_state = 2},
  [99] = {.lex_state = 138, .external_lex_state = 1},
  [100] = {.lex_state = 146, .external_lex_state = 2},
  [101] = {.lex_state = 146, .external_lex_state = 2},
  [102] = {.lex_state = 146, .external_lex_state = 2},
  [103] = {.lex_state = 146, .external_lex_state = 2},
  [104] = {.lex_state = 146, .external_lex_state = 2},
  [105] = {.lex_state = 146, .external_lex_state = 2},
  [106] = {.lex_state = 146, .external_lex_state = 2},
  [107] = {.lex_state = 146, .external_lex_state = 2},
  [108] = {.lex_state = 146, .external_lex_state = 2},
  [109] = {.lex_state = 146, .external_lex_state = 2},
  [110] = {.lex_state = 146, .external_lex_state = 2},
  [111] = {.lex_state = 146, .external_lex_state = 2},
  [112] = {.lex_state = 0, .external_lex_state = 1},
  [113] = {.lex_state = 0, .external_lex_state = 1},
  [114] = {.lex_state = 138, .external_lex_state = 2},
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
  [129] = {.lex_state = 138, .external_lex_state = 2},
  [130] = {.lex_state = 138, .external_lex_state = 2},
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
  [141] = {.lex_state = 25, .external_lex_state = 2},
  [142] = {.lex_state = 149, .external_lex_state = 2},
  [143] = {.lex_state = 0, .external_lex_state = 1},
  [144] = {.lex_state = 0, .external_lex_state = 1},
  [145] = {.lex_state = 138, .external_lex_state = 2},
  [146] = {.lex_state = 0, .external_lex_state = 1},
  [147] = {.lex_state = 138, .external_lex_state = 2},
  [148] = {.lex_state = 138, .external_lex_state = 2},
  [149] = {.lex_state = 29, .external_lex_state = 2},
  [150] = {.lex_state = 138, .external_lex_state = 2},
  [151] = {.lex_state = 138, .external_lex_state = 2},
  [152] = {.lex_state = 138, .external_lex_state = 2},
  [153] = {.lex_state = 138, .external_lex_state = 2},
  [154] = {.lex_state = 138, .external_lex_state = 2},
  [155] = {.lex_state = 0, .external_lex_state = 1},
  [156] = {.lex_state = 138, .external_lex_state = 2},
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
    [sym__eol] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(1),
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
    [sym__inline_markup_block] = STATE(14),
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
    [sym_literal] = ACTIONS(39),
    [sym_substitution_reference] = ACTIONS(39),
    [sym__inline_target] = ACTIONS(39),
    [sym_footnote_reference] = ACTIONS(39),
    [aux_sym_reference_token1] = ACTIONS(41),
    [aux_sym_reference_token2] = ACTIONS(41),
    [aux_sym_reference_token3] = ACTIONS(41),
    [sym__eol] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(43),
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
    [sym__inline_markup_block] = STATE(14),
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
    [ts_builtin_sym_end] = ACTIONS(45),
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
    [sym_literal] = ACTIONS(39),
    [sym_substitution_reference] = ACTIONS(39),
    [sym__inline_target] = ACTIONS(39),
    [sym_footnote_reference] = ACTIONS(39),
    [aux_sym_reference_token1] = ACTIONS(41),
    [aux_sym_reference_token2] = ACTIONS(41),
    [aux_sym_reference_token3] = ACTIONS(41),
    [sym__eol] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(47),
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
    [sym__inline_markup_block] = STATE(14),
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
    [sym__char_bullet] = ACTIONS(51),
    [aux_sym__enumerated_list_item_token1] = ACTIONS(54),
    [aux_sym_field_token1] = ACTIONS(57),
    [aux_sym_option_list_item_token1] = ACTIONS(60),
    [anon_sym_PIPE] = ACTIONS(63),
    [aux_sym__single_line_block_token1] = ACTIONS(66),
    [aux_sym_footnote_token1] = ACTIONS(69),
    [aux_sym_citation_token1] = ACTIONS(72),
    [aux_sym_target_token1] = ACTIONS(75),
    [anon_sym___] = ACTIONS(78),
    [aux_sym_directive_token1] = ACTIONS(81),
    [anon_sym_] = ACTIONS(84),
    [anon_sym_TAB] = ACTIONS(84),
    [anon_sym_2] = ACTIONS(87),
    [anon_sym_3] = ACTIONS(87),
    [aux_sym_substitution_definition_token1] = ACTIONS(90),
    [anon_sym_DOT_DOT] = ACTIONS(93),
    [aux_sym__line_token1] = ACTIONS(96),
    [anon_sym_DASH] = ACTIONS(87),
    [anon_sym_DOT] = ACTIONS(96),
    [anon_sym_COMMA] = ACTIONS(96),
    [anon_sym_COLON] = ACTIONS(87),
    [anon_sym_SEMI] = ACTIONS(96),
    [anon_sym_BANG] = ACTIONS(96),
    [anon_sym_QMARK] = ACTIONS(96),
    [anon_sym_BSLASH] = ACTIONS(96),
    [anon_sym_SLASH] = ACTIONS(87),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [anon_sym_DQUOTE] = ACTIONS(87),
    [anon_sym_RPAREN] = ACTIONS(96),
    [anon_sym_RBRACK] = ACTIONS(96),
    [anon_sym_RBRACE] = ACTIONS(96),
    [anon_sym_GT] = ACTIONS(96),
    [anon_sym_LT] = ACTIONS(87),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_LBRACE] = ACTIONS(87),
    [aux_sym__char_token1] = ACTIONS(96),
    [sym_emphasis] = ACTIONS(99),
    [sym_strong] = ACTIONS(99),
    [sym_interpreted_text] = ACTIONS(99),
    [sym_literal] = ACTIONS(99),
    [sym_substitution_reference] = ACTIONS(99),
    [sym__inline_target] = ACTIONS(99),
    [sym_footnote_reference] = ACTIONS(99),
    [aux_sym_reference_token1] = ACTIONS(102),
    [aux_sym_reference_token2] = ACTIONS(102),
    [aux_sym_reference_token3] = ACTIONS(102),
    [sym__eol] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(105),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(108), 5,
      sym__blank_line,
      ts_builtin_sym_end,
      anon_sym_,
      anon_sym_TAB,
      aux_sym_substitution_definition_token1,
    ACTIONS(110), 45,
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
      sym_literal,
      sym_substitution_reference,
      sym__inline_target,
      sym_footnote_reference,
      aux_sym_reference_token1,
      aux_sym_reference_token2,
      aux_sym_reference_token3,
  [58] = 10,
    ACTIONS(3), 1,
      sym__eol,
    STATE(6), 1,
      aux_sym_paragraph_repeat1,
    STATE(140), 1,
      sym__line,
    ACTIONS(29), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(31), 2,
      sym__inline_markup,
      sym_reference,
    ACTIONS(41), 3,
      aux_sym_reference_token1,
      aux_sym_reference_token2,
      aux_sym_reference_token3,
    STATE(14), 3,
      sym__char,
      sym__inline_markup_block,
      aux_sym__line_repeat1,
    ACTIONS(39), 7,
      sym_emphasis,
      sym_strong,
      sym_interpreted_text,
      sym_literal,
      sym_substitution_reference,
      sym__inline_target,
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
  [122] = 10,
    ACTIONS(3), 1,
      sym__eol,
    STATE(6), 1,
      aux_sym_paragraph_repeat1,
    STATE(163), 1,
      sym__line,
    ACTIONS(112), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(34), 2,
      sym__inline_markup,
      sym_reference,
    ACTIONS(124), 3,
      aux_sym_reference_token1,
      aux_sym_reference_token2,
      aux_sym_reference_token3,
    STATE(20), 3,
      sym__char,
      sym__inline_markup_block,
      aux_sym__line_repeat1,
    ACTIONS(121), 7,
      sym_emphasis,
      sym_strong,
      sym_interpreted_text,
      sym_literal,
      sym_substitution_reference,
      sym__inline_target,
      sym_footnote_reference,
    ACTIONS(115), 11,
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
    ACTIONS(118), 12,
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
  [186] = 5,
    STATE(24), 2,
      sym__inline_markup,
      sym_reference,
    ACTIONS(133), 3,
      aux_sym_reference_token1,
      aux_sym_reference_token2,
      aux_sym_reference_token3,
    ACTIONS(127), 4,
      sym__eol,
      sym__blank_line,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(131), 7,
      sym_emphasis,
      sym_strong,
      sym_interpreted_text,
      sym_literal,
      sym_substitution_reference,
      sym__inline_target,
      sym_footnote_reference,
    ACTIONS(129), 23,
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
  [236] = 5,
    STATE(26), 2,
      sym__inline_markup,
      sym_reference,
    ACTIONS(133), 3,
      aux_sym_reference_token1,
      aux_sym_reference_token2,
      aux_sym_reference_token3,
    ACTIONS(127), 4,
      sym__eol,
      sym__blank_line,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(135), 7,
      sym_emphasis,
      sym_strong,
      sym_interpreted_text,
      sym_literal,
      sym_substitution_reference,
      sym__inline_target,
      sym_footnote_reference,
    ACTIONS(129), 23,
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
  [286] = 5,
    STATE(27), 2,
      sym__inline_markup,
      sym_reference,
    ACTIONS(41), 3,
      aux_sym_reference_token1,
      aux_sym_reference_token2,
      aux_sym_reference_token3,
    ACTIONS(127), 4,
      sym__eol,
      sym__blank_line,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(137), 7,
      sym_emphasis,
      sym_strong,
      sym_interpreted_text,
      sym_literal,
      sym_substitution_reference,
      sym__inline_target,
      sym_footnote_reference,
    ACTIONS(129), 23,
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
  [336] = 5,
    STATE(30), 2,
      sym__inline_markup,
      sym_reference,
    ACTIONS(127), 3,
      sym__eol,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(141), 3,
      aux_sym_reference_token1,
      aux_sym_reference_token2,
      aux_sym_reference_token3,
    ACTIONS(139), 7,
      sym_emphasis,
      sym_strong,
      sym_interpreted_text,
      sym_literal,
      sym_substitution_reference,
      sym__inline_target,
      sym_footnote_reference,
    ACTIONS(129), 23,
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
  [385] = 5,
    STATE(33), 2,
      sym__inline_markup,
      sym_reference,
    ACTIONS(41), 3,
      aux_sym_reference_token1,
      aux_sym_reference_token2,
      aux_sym_reference_token3,
    ACTIONS(127), 3,
      sym__eol,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(143), 7,
      sym_emphasis,
      sym_strong,
      sym_interpreted_text,
      sym_literal,
      sym_substitution_reference,
      sym__inline_target,
      sym_footnote_reference,
    ACTIONS(129), 23,
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
  [434] = 5,
    STATE(28), 2,
      sym__inline_markup,
      sym_reference,
    ACTIONS(127), 3,
      sym__eol,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(141), 3,
      aux_sym_reference_token1,
      aux_sym_reference_token2,
      aux_sym_reference_token3,
    ACTIONS(145), 7,
      sym_emphasis,
      sym_strong,
      sym_interpreted_text,
      sym_literal,
      sym_substitution_reference,
      sym__inline_target,
      sym_footnote_reference,
    ACTIONS(129), 23,
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
  [483] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(147), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(149), 33,
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
      sym_literal,
      sym_substitution_reference,
      sym__inline_target,
      sym_footnote_reference,
      aux_sym_reference_token1,
      aux_sym_reference_token2,
      aux_sym_reference_token3,
  [526] = 5,
    ACTIONS(155), 2,
      anon_sym_BSLASH,
      aux_sym__char_token1,
    ACTIONS(157), 2,
      sym__eol,
      sym__blank_line,
    STATE(16), 3,
      sym__char,
      sym__inline_markup_block,
      aux_sym__line_repeat1,
    ACTIONS(153), 10,
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
    ACTIONS(151), 13,
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
  [567] = 5,
    ACTIONS(155), 2,
      anon_sym_BSLASH,
      aux_sym__char_token1,
    ACTIONS(161), 2,
      sym__eol,
      sym__blank_line,
    STATE(16), 3,
      sym__char,
      sym__inline_markup_block,
      aux_sym__line_repeat1,
    ACTIONS(153), 10,
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
    ACTIONS(159), 13,
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
  [608] = 5,
    ACTIONS(169), 2,
      anon_sym_BSLASH,
      aux_sym__char_token1,
    ACTIONS(172), 2,
      sym__eol,
      sym__blank_line,
    STATE(16), 3,
      sym__char,
      sym__inline_markup_block,
      aux_sym__line_repeat1,
    ACTIONS(166), 10,
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
    ACTIONS(163), 13,
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
  [649] = 5,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(178), 2,
      anon_sym_BSLASH,
      aux_sym__char_token1,
    STATE(21), 3,
      sym__char,
      sym__inline_markup_block,
      aux_sym__line_repeat1,
    ACTIONS(176), 10,
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
    ACTIONS(174), 13,
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
  [689] = 5,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(182), 2,
      anon_sym_BSLASH,
      aux_sym__char_token1,
    STATE(15), 3,
      sym__char,
      sym__inline_markup_block,
      aux_sym__line_repeat1,
    ACTIONS(180), 10,
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
  [729] = 5,
    ACTIONS(172), 1,
      sym__eol,
    ACTIONS(190), 2,
      anon_sym_BSLASH,
      aux_sym__char_token1,
    STATE(19), 3,
      sym__char,
      sym__inline_markup_block,
      aux_sym__line_repeat1,
    ACTIONS(187), 10,
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
    ACTIONS(184), 13,
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
  [769] = 5,
    ACTIONS(157), 1,
      sym__eol,
    ACTIONS(197), 2,
      anon_sym_BSLASH,
      aux_sym__char_token1,
    STATE(19), 3,
      sym__char,
      sym__inline_markup_block,
      aux_sym__line_repeat1,
    ACTIONS(195), 10,
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
    ACTIONS(193), 13,
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
  [809] = 5,
    ACTIONS(161), 1,
      sym__eol,
    ACTIONS(197), 2,
      anon_sym_BSLASH,
      aux_sym__char_token1,
    STATE(19), 3,
      sym__char,
      sym__inline_markup_block,
      aux_sym__line_repeat1,
    ACTIONS(195), 10,
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
    ACTIONS(199), 13,
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
  [849] = 2,
    ACTIONS(203), 2,
      anon_sym_BSLASH,
      aux_sym__char_token1,
    ACTIONS(201), 25,
      sym__eol,
      sym__blank_line,
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
  [881] = 2,
    ACTIONS(203), 2,
      anon_sym_BSLASH,
      aux_sym__char_token1,
    ACTIONS(201), 24,
      sym__eol,
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
  [912] = 3,
    ACTIONS(207), 1,
      anon_sym_BSLASH,
    ACTIONS(209), 2,
      sym__eol,
      sym__blank_line,
    ACTIONS(205), 19,
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
  [941] = 2,
    ACTIONS(213), 1,
      anon_sym_BSLASH,
    ACTIONS(211), 21,
      sym__eol,
      sym__blank_line,
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
  [968] = 3,
    ACTIONS(207), 1,
      anon_sym_BSLASH,
    ACTIONS(161), 2,
      sym__eol,
      sym__blank_line,
    ACTIONS(205), 19,
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
  [997] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(207), 1,
      anon_sym_BSLASH,
    ACTIONS(205), 19,
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
  [1025] = 3,
    ACTIONS(161), 1,
      sym__eol,
    ACTIONS(217), 1,
      anon_sym_BSLASH,
    ACTIONS(215), 19,
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
  [1053] = 2,
    ACTIONS(213), 1,
      anon_sym_BSLASH,
    ACTIONS(211), 20,
      sym__eol,
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
  [1079] = 3,
    ACTIONS(209), 1,
      sym__eol,
    ACTIONS(217), 1,
      anon_sym_BSLASH,
    ACTIONS(215), 19,
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
  [1107] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(221), 1,
      anon_sym_BSLASH,
    ACTIONS(219), 19,
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
  [1135] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(213), 1,
      anon_sym_BSLASH,
    ACTIONS(211), 19,
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
  [1163] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(217), 1,
      anon_sym_BSLASH,
    ACTIONS(215), 19,
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
  [1191] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(225), 1,
      anon_sym_BSLASH,
    ACTIONS(223), 19,
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
  [1219] = 2,
    ACTIONS(229), 2,
      sym__eol,
      sym__blank_line,
    ACTIONS(227), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [1230] = 2,
    ACTIONS(233), 2,
      sym__eol,
      sym__blank_line,
    ACTIONS(231), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [1241] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(235), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [1251] = 2,
    ACTIONS(233), 1,
      sym__eol,
    ACTIONS(237), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [1261] = 5,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(239), 1,
      anon_sym_PIPE,
    ACTIONS(242), 1,
      aux_sym__single_line_block_token1,
    STATE(39), 1,
      aux_sym_line_block_repeat1,
    STATE(171), 1,
      sym__single_line_block,
  [1277] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(245), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [1287] = 5,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(247), 1,
      anon_sym_PIPE,
    ACTIONS(249), 1,
      aux_sym__single_line_block_token1,
    STATE(39), 1,
      aux_sym_line_block_repeat1,
    STATE(136), 1,
      sym__single_line_block,
  [1303] = 2,
    ACTIONS(229), 1,
      sym__eol,
    ACTIONS(251), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [1313] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(253), 1,
      aux_sym_footnote_token1,
    STATE(43), 1,
      aux_sym__footnote_block_repeat1,
    STATE(170), 1,
      sym_footnote,
  [1326] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(256), 1,
      aux_sym_footnote_token1,
    STATE(43), 1,
      aux_sym__footnote_block_repeat1,
    STATE(135), 1,
      sym_footnote,
  [1339] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(258), 1,
      anon_sym___,
    STATE(64), 1,
      aux_sym__anoynymous_hyperlink_target_block_repeat1,
    STATE(127), 1,
      sym__anonymous_target,
  [1352] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(260), 1,
      aux_sym_directive_token1,
    STATE(63), 1,
      aux_sym__directive_block_repeat1,
    STATE(125), 1,
      sym_directive,
  [1365] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(33), 1,
      aux_sym_substitution_definition_token1,
    STATE(62), 1,
      aux_sym__substitution_definition_block_repeat1,
    STATE(124), 1,
      sym_substitution_definition,
  [1378] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(262), 1,
      anon_sym_DOT_DOT,
    STATE(60), 1,
      aux_sym__comment_block_repeat1,
    STATE(126), 1,
      sym_comment,
  [1391] = 3,
    ACTIONS(264), 1,
      aux_sym__bullet_list_item_token1,
    STATE(59), 1,
      aux_sym__bullet_list_item_repeat1,
    ACTIONS(266), 2,
      sym__eol,
      sym__blank_line,
  [1402] = 3,
    ACTIONS(264), 1,
      aux_sym__bullet_list_item_token1,
    STATE(59), 1,
      aux_sym__bullet_list_item_repeat1,
    ACTIONS(268), 2,
      sym__eol,
      sym__blank_line,
  [1413] = 3,
    ACTIONS(264), 1,
      aux_sym__bullet_list_item_token1,
    STATE(59), 1,
      aux_sym__bullet_list_item_repeat1,
    ACTIONS(270), 2,
      sym__eol,
      sym__blank_line,
  [1424] = 3,
    ACTIONS(264), 1,
      aux_sym__bullet_list_item_token1,
    STATE(59), 1,
      aux_sym__bullet_list_item_repeat1,
    ACTIONS(272), 2,
      sym__eol,
      sym__blank_line,
  [1435] = 3,
    ACTIONS(264), 1,
      aux_sym__bullet_list_item_token1,
    STATE(59), 1,
      aux_sym__bullet_list_item_repeat1,
    ACTIONS(274), 2,
      sym__eol,
      sym__blank_line,
  [1446] = 3,
    ACTIONS(264), 1,
      aux_sym__bullet_list_item_token1,
    STATE(59), 1,
      aux_sym__bullet_list_item_repeat1,
    ACTIONS(276), 2,
      sym__eol,
      sym__blank_line,
  [1457] = 3,
    ACTIONS(264), 1,
      aux_sym__bullet_list_item_token1,
    STATE(59), 1,
      aux_sym__bullet_list_item_repeat1,
    ACTIONS(278), 2,
      sym__eol,
      sym__blank_line,
  [1468] = 3,
    ACTIONS(264), 1,
      aux_sym__bullet_list_item_token1,
    STATE(59), 1,
      aux_sym__bullet_list_item_repeat1,
    ACTIONS(280), 2,
      sym__eol,
      sym__blank_line,
  [1479] = 3,
    ACTIONS(264), 1,
      aux_sym__bullet_list_item_token1,
    STATE(59), 1,
      aux_sym__bullet_list_item_repeat1,
    ACTIONS(282), 2,
      sym__eol,
      sym__blank_line,
  [1490] = 3,
    ACTIONS(264), 1,
      aux_sym__bullet_list_item_token1,
    STATE(59), 1,
      aux_sym__bullet_list_item_repeat1,
    ACTIONS(284), 2,
      sym__eol,
      sym__blank_line,
  [1501] = 3,
    ACTIONS(286), 1,
      aux_sym__bullet_list_item_token1,
    STATE(59), 1,
      aux_sym__bullet_list_item_repeat1,
    ACTIONS(289), 2,
      sym__eol,
      sym__blank_line,
  [1512] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(291), 1,
      anon_sym_DOT_DOT,
    STATE(60), 1,
      aux_sym__comment_block_repeat1,
    STATE(164), 1,
      sym_comment,
  [1525] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(294), 1,
      aux_sym_target_token1,
    STATE(65), 1,
      aux_sym__hyperlink_target_block_repeat1,
    STATE(133), 1,
      sym_target,
  [1538] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(296), 1,
      aux_sym_substitution_definition_token1,
    STATE(62), 1,
      aux_sym__substitution_definition_block_repeat1,
    STATE(165), 1,
      sym_substitution_definition,
  [1551] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(299), 1,
      aux_sym_directive_token1,
    STATE(63), 1,
      aux_sym__directive_block_repeat1,
    STATE(166), 1,
      sym_directive,
  [1564] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(302), 1,
      anon_sym___,
    STATE(64), 1,
      aux_sym__anoynymous_hyperlink_target_block_repeat1,
    STATE(167), 1,
      sym__anonymous_target,
  [1577] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(305), 1,
      aux_sym_target_token1,
    STATE(65), 1,
      aux_sym__hyperlink_target_block_repeat1,
    STATE(168), 1,
      sym_target,
  [1590] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(308), 1,
      aux_sym_citation_token1,
    STATE(66), 1,
      aux_sym__citation_block_repeat1,
    STATE(169), 1,
      sym_citation,
  [1603] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(311), 1,
      sym__char_bullet,
    STATE(72), 1,
      aux_sym_bullet_list_repeat1,
    STATE(139), 1,
      sym__bullet_list_item,
  [1616] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(313), 1,
      aux_sym__enumerated_list_item_token1,
    STATE(74), 1,
      aux_sym_enumerated_list_repeat1,
    STATE(138), 1,
      sym__enumerated_list_item,
  [1629] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(315), 1,
      aux_sym_option_list_item_token1,
    STATE(69), 1,
      aux_sym_option_list_repeat1,
    STATE(172), 1,
      sym_option_list_item,
  [1642] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(318), 1,
      aux_sym_field_token1,
    STATE(71), 1,
      aux_sym_field_list_repeat1,
    STATE(137), 1,
      sym_field,
  [1655] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(320), 1,
      aux_sym_field_token1,
    STATE(71), 1,
      aux_sym_field_list_repeat1,
    STATE(173), 1,
      sym_field,
  [1668] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(323), 1,
      sym__char_bullet,
    STATE(72), 1,
      aux_sym_bullet_list_repeat1,
    STATE(162), 1,
      sym__bullet_list_item,
  [1681] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(326), 1,
      aux_sym_option_list_item_token1,
    STATE(69), 1,
      aux_sym_option_list_repeat1,
    STATE(112), 1,
      sym_option_list_item,
  [1694] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(328), 1,
      aux_sym__enumerated_list_item_token1,
    STATE(74), 1,
      aux_sym_enumerated_list_repeat1,
    STATE(158), 1,
      sym__enumerated_list_item,
  [1707] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(331), 1,
      aux_sym_citation_token1,
    STATE(66), 1,
      aux_sym__citation_block_repeat1,
    STATE(134), 1,
      sym_citation,
  [1720] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(333), 1,
      aux_sym__bullet_list_item_token1,
    STATE(80), 1,
      aux_sym__bullet_list_item_repeat1,
  [1730] = 2,
    ACTIONS(335), 1,
      aux_sym_target_token2,
    ACTIONS(337), 2,
      sym__eol,
      sym__blank_line,
  [1738] = 3,
    ACTIONS(274), 1,
      sym__eol,
    ACTIONS(339), 1,
      aux_sym__bullet_list_item_token1,
    STATE(96), 1,
      aux_sym__bullet_list_item_repeat1,
  [1748] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(341), 1,
      aux_sym__bullet_list_item_token1,
    STATE(82), 1,
      aux_sym__bullet_list_item_repeat1,
  [1758] = 3,
    ACTIONS(272), 1,
      sym__eol,
    ACTIONS(339), 1,
      aux_sym__bullet_list_item_token1,
    STATE(96), 1,
      aux_sym__bullet_list_item_repeat1,
  [1768] = 3,
    ACTIONS(270), 1,
      sym__eol,
    ACTIONS(339), 1,
      aux_sym__bullet_list_item_token1,
    STATE(96), 1,
      aux_sym__bullet_list_item_repeat1,
  [1778] = 3,
    ACTIONS(268), 1,
      sym__eol,
    ACTIONS(339), 1,
      aux_sym__bullet_list_item_token1,
    STATE(96), 1,
      aux_sym__bullet_list_item_repeat1,
  [1788] = 3,
    ACTIONS(266), 1,
      sym__eol,
    ACTIONS(339), 1,
      aux_sym__bullet_list_item_token1,
    STATE(96), 1,
      aux_sym__bullet_list_item_repeat1,
  [1798] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(343), 1,
      aux_sym__bullet_list_item_token1,
    STATE(91), 1,
      aux_sym__bullet_list_item_repeat1,
  [1808] = 3,
    ACTIONS(278), 1,
      sym__eol,
    ACTIONS(339), 1,
      aux_sym__bullet_list_item_token1,
    STATE(96), 1,
      aux_sym__bullet_list_item_repeat1,
  [1818] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(345), 1,
      aux_sym__bullet_list_item_token1,
    STATE(97), 1,
      aux_sym__bullet_list_item_repeat1,
  [1828] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(347), 1,
      aux_sym__embed_directive_token1,
    STATE(155), 1,
      sym__embed_directive,
  [1838] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(349), 1,
      aux_sym__bullet_list_item_token1,
    STATE(102), 1,
      aux_sym__bullet_list_item_repeat1,
  [1848] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(351), 1,
      aux_sym__embed_directive_token1,
    STATE(159), 1,
      sym__embed_directive,
  [1858] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(353), 1,
      aux_sym__bullet_list_item_token1,
    STATE(81), 1,
      aux_sym__bullet_list_item_repeat1,
  [1868] = 3,
    ACTIONS(280), 1,
      sym__eol,
    ACTIONS(339), 1,
      aux_sym__bullet_list_item_token1,
    STATE(96), 1,
      aux_sym__bullet_list_item_repeat1,
  [1878] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(355), 1,
      aux_sym__bullet_list_item_token1,
    STATE(85), 1,
      aux_sym__bullet_list_item_repeat1,
  [1888] = 3,
    ACTIONS(276), 1,
      sym__eol,
    ACTIONS(339), 1,
      aux_sym__bullet_list_item_token1,
    STATE(96), 1,
      aux_sym__bullet_list_item_repeat1,
  [1898] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(357), 1,
      anon_sym_PIPE,
    ACTIONS(359), 1,
      aux_sym__single_line_block_token1,
  [1908] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(361), 1,
      aux_sym__bullet_list_item_token1,
    STATE(93), 1,
      aux_sym__bullet_list_item_repeat1,
  [1918] = 3,
    ACTIONS(289), 1,
      sym__eol,
    ACTIONS(363), 1,
      aux_sym__bullet_list_item_token1,
    STATE(96), 1,
      aux_sym__bullet_list_item_repeat1,
  [1928] = 3,
    ACTIONS(284), 1,
      sym__eol,
    ACTIONS(339), 1,
      aux_sym__bullet_list_item_token1,
    STATE(96), 1,
      aux_sym__bullet_list_item_repeat1,
  [1938] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(366), 1,
      aux_sym__bullet_list_item_token1,
    STATE(78), 1,
      aux_sym__bullet_list_item_repeat1,
  [1948] = 2,
    ACTIONS(368), 1,
      aux_sym_target_token2,
    ACTIONS(370), 2,
      sym__eol,
      sym__blank_line,
  [1956] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(372), 1,
      aux_sym__bullet_list_item_token1,
    STATE(55), 1,
      aux_sym__bullet_list_item_repeat1,
  [1966] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(374), 1,
      aux_sym__bullet_list_item_token1,
    STATE(57), 1,
      aux_sym__bullet_list_item_repeat1,
  [1976] = 3,
    ACTIONS(282), 1,
      sym__eol,
    ACTIONS(339), 1,
      aux_sym__bullet_list_item_token1,
    STATE(96), 1,
      aux_sym__bullet_list_item_repeat1,
  [1986] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(376), 1,
      aux_sym__bullet_list_item_token1,
    STATE(54), 1,
      aux_sym__bullet_list_item_repeat1,
  [1996] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(378), 1,
      aux_sym__bullet_list_item_token1,
    STATE(83), 1,
      aux_sym__bullet_list_item_repeat1,
  [2006] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(380), 1,
      aux_sym__bullet_list_item_token1,
    STATE(49), 1,
      aux_sym__bullet_list_item_repeat1,
  [2016] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(382), 1,
      aux_sym__bullet_list_item_token1,
    STATE(53), 1,
      aux_sym__bullet_list_item_repeat1,
  [2026] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(384), 1,
      aux_sym__bullet_list_item_token1,
    STATE(52), 1,
      aux_sym__bullet_list_item_repeat1,
  [2036] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(386), 1,
      aux_sym__bullet_list_item_token1,
    STATE(56), 1,
      aux_sym__bullet_list_item_repeat1,
  [2046] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(388), 1,
      aux_sym__bullet_list_item_token1,
    STATE(51), 1,
      aux_sym__bullet_list_item_repeat1,
  [2056] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(390), 1,
      aux_sym__bullet_list_item_token1,
    STATE(58), 1,
      aux_sym__bullet_list_item_repeat1,
  [2066] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(392), 1,
      aux_sym__bullet_list_item_token1,
    STATE(50), 1,
      aux_sym__bullet_list_item_repeat1,
  [2076] = 2,
    ACTIONS(394), 1,
      sym__eol,
    ACTIONS(396), 1,
      sym__blank_line,
  [2083] = 1,
    ACTIONS(398), 2,
      sym__eol,
      sym__blank_line,
  [2088] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(400), 1,
      anon_sym_COLON_COLON,
  [2095] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(402), 1,
      sym__blank_line,
  [2102] = 2,
    ACTIONS(404), 1,
      sym__eol,
    ACTIONS(406), 1,
      sym__blank_line,
  [2109] = 2,
    ACTIONS(408), 1,
      sym__eol,
    ACTIONS(410), 1,
      sym__blank_line,
  [2116] = 2,
    ACTIONS(412), 1,
      sym__eol,
    ACTIONS(414), 1,
      sym__blank_line,
  [2123] = 2,
    ACTIONS(394), 1,
      sym__eol,
    ACTIONS(416), 1,
      sym__blank_line,
  [2130] = 2,
    ACTIONS(418), 1,
      sym__eol,
    ACTIONS(420), 1,
      sym__blank_line,
  [2137] = 2,
    ACTIONS(422), 1,
      sym__eol,
    ACTIONS(424), 1,
      sym__blank_line,
  [2144] = 2,
    ACTIONS(426), 1,
      sym__eol,
    ACTIONS(428), 1,
      sym__blank_line,
  [2151] = 2,
    ACTIONS(430), 1,
      sym__eol,
    ACTIONS(432), 1,
      sym__blank_line,
  [2158] = 2,
    ACTIONS(434), 1,
      sym__eol,
    ACTIONS(436), 1,
      sym__blank_line,
  [2165] = 2,
    ACTIONS(438), 1,
      sym__eol,
    ACTIONS(440), 1,
      sym__blank_line,
  [2172] = 2,
    ACTIONS(442), 1,
      sym__eol,
    ACTIONS(444), 1,
      sym__blank_line,
  [2179] = 2,
    ACTIONS(446), 1,
      sym__eol,
    ACTIONS(448), 1,
      sym__blank_line,
  [2186] = 2,
    ACTIONS(446), 1,
      sym__eol,
    ACTIONS(450), 1,
      sym__blank_line,
  [2193] = 2,
    ACTIONS(370), 1,
      sym__eol,
    ACTIONS(452), 1,
      aux_sym_target_token2,
  [2200] = 2,
    ACTIONS(337), 1,
      sym__eol,
    ACTIONS(454), 1,
      aux_sym_target_token2,
  [2207] = 2,
    ACTIONS(438), 1,
      sym__eol,
    ACTIONS(456), 1,
      sym__blank_line,
  [2214] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(458), 1,
      ts_builtin_sym_end,
  [2221] = 2,
    ACTIONS(430), 1,
      sym__eol,
    ACTIONS(460), 1,
      sym__blank_line,
  [2228] = 2,
    ACTIONS(426), 1,
      sym__eol,
    ACTIONS(462), 1,
      sym__blank_line,
  [2235] = 2,
    ACTIONS(422), 1,
      sym__eol,
    ACTIONS(464), 1,
      sym__blank_line,
  [2242] = 2,
    ACTIONS(418), 1,
      sym__eol,
    ACTIONS(466), 1,
      sym__blank_line,
  [2249] = 2,
    ACTIONS(412), 1,
      sym__eol,
    ACTIONS(468), 1,
      sym__blank_line,
  [2256] = 2,
    ACTIONS(408), 1,
      sym__eol,
    ACTIONS(470), 1,
      sym__blank_line,
  [2263] = 2,
    ACTIONS(404), 1,
      sym__eol,
    ACTIONS(472), 1,
      sym__blank_line,
  [2270] = 2,
    ACTIONS(474), 1,
      sym__eol,
    ACTIONS(476), 1,
      sym__blank_line,
  [2277] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(478), 1,
      anon_sym_DOT_DOT,
  [2284] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(480), 1,
      aux_sym_substitution_definition_token1,
  [2291] = 2,
    ACTIONS(434), 1,
      sym__eol,
    ACTIONS(482), 1,
      sym__blank_line,
  [2298] = 2,
    ACTIONS(442), 1,
      sym__eol,
    ACTIONS(484), 1,
      sym__blank_line,
  [2305] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(486), 1,
      aux_sym_directive_token1,
  [2312] = 2,
    ACTIONS(474), 1,
      sym__eol,
    ACTIONS(488), 1,
      sym__blank_line,
  [2319] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(490), 1,
      anon_sym___,
  [2326] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(492), 1,
      aux_sym_target_token1,
  [2333] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(494), 1,
      aux_sym_citation_token1,
  [2340] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(496), 1,
      aux_sym_footnote_token1,
  [2347] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(498), 1,
      aux_sym_option_list_item_token1,
  [2354] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(500), 1,
      aux_sym_field_token1,
  [2361] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(502), 1,
      aux_sym__enumerated_list_item_token1,
  [2368] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(504), 1,
      sym__char_bullet,
  [2375] = 1,
    ACTIONS(506), 2,
      sym__eol,
      sym__blank_line,
  [2380] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(508), 1,
      anon_sym_COLON_COLON,
  [2387] = 1,
    ACTIONS(510), 2,
      sym__eol,
      sym__blank_line,
  [2392] = 1,
    ACTIONS(408), 1,
      sym__eol,
  [2396] = 1,
    ACTIONS(506), 1,
      sym__eol,
  [2400] = 1,
    ACTIONS(510), 1,
      sym__eol,
  [2404] = 1,
    ACTIONS(398), 1,
      sym__eol,
  [2408] = 1,
    ACTIONS(404), 1,
      sym__eol,
  [2412] = 1,
    ACTIONS(474), 1,
      sym__eol,
  [2416] = 1,
    ACTIONS(442), 1,
      sym__eol,
  [2420] = 1,
    ACTIONS(434), 1,
      sym__eol,
  [2424] = 1,
    ACTIONS(438), 1,
      sym__eol,
  [2428] = 1,
    ACTIONS(446), 1,
      sym__eol,
  [2432] = 1,
    ACTIONS(430), 1,
      sym__eol,
  [2436] = 1,
    ACTIONS(426), 1,
      sym__eol,
  [2440] = 1,
    ACTIONS(422), 1,
      sym__eol,
  [2444] = 1,
    ACTIONS(418), 1,
      sym__eol,
  [2448] = 1,
    ACTIONS(394), 1,
      sym__eol,
  [2452] = 1,
    ACTIONS(412), 1,
      sym__eol,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 58,
  [SMALL_STATE(6)] = 122,
  [SMALL_STATE(7)] = 186,
  [SMALL_STATE(8)] = 236,
  [SMALL_STATE(9)] = 286,
  [SMALL_STATE(10)] = 336,
  [SMALL_STATE(11)] = 385,
  [SMALL_STATE(12)] = 434,
  [SMALL_STATE(13)] = 483,
  [SMALL_STATE(14)] = 526,
  [SMALL_STATE(15)] = 567,
  [SMALL_STATE(16)] = 608,
  [SMALL_STATE(17)] = 649,
  [SMALL_STATE(18)] = 689,
  [SMALL_STATE(19)] = 729,
  [SMALL_STATE(20)] = 769,
  [SMALL_STATE(21)] = 809,
  [SMALL_STATE(22)] = 849,
  [SMALL_STATE(23)] = 881,
  [SMALL_STATE(24)] = 912,
  [SMALL_STATE(25)] = 941,
  [SMALL_STATE(26)] = 968,
  [SMALL_STATE(27)] = 997,
  [SMALL_STATE(28)] = 1025,
  [SMALL_STATE(29)] = 1053,
  [SMALL_STATE(30)] = 1079,
  [SMALL_STATE(31)] = 1107,
  [SMALL_STATE(32)] = 1135,
  [SMALL_STATE(33)] = 1163,
  [SMALL_STATE(34)] = 1191,
  [SMALL_STATE(35)] = 1219,
  [SMALL_STATE(36)] = 1230,
  [SMALL_STATE(37)] = 1241,
  [SMALL_STATE(38)] = 1251,
  [SMALL_STATE(39)] = 1261,
  [SMALL_STATE(40)] = 1277,
  [SMALL_STATE(41)] = 1287,
  [SMALL_STATE(42)] = 1303,
  [SMALL_STATE(43)] = 1313,
  [SMALL_STATE(44)] = 1326,
  [SMALL_STATE(45)] = 1339,
  [SMALL_STATE(46)] = 1352,
  [SMALL_STATE(47)] = 1365,
  [SMALL_STATE(48)] = 1378,
  [SMALL_STATE(49)] = 1391,
  [SMALL_STATE(50)] = 1402,
  [SMALL_STATE(51)] = 1413,
  [SMALL_STATE(52)] = 1424,
  [SMALL_STATE(53)] = 1435,
  [SMALL_STATE(54)] = 1446,
  [SMALL_STATE(55)] = 1457,
  [SMALL_STATE(56)] = 1468,
  [SMALL_STATE(57)] = 1479,
  [SMALL_STATE(58)] = 1490,
  [SMALL_STATE(59)] = 1501,
  [SMALL_STATE(60)] = 1512,
  [SMALL_STATE(61)] = 1525,
  [SMALL_STATE(62)] = 1538,
  [SMALL_STATE(63)] = 1551,
  [SMALL_STATE(64)] = 1564,
  [SMALL_STATE(65)] = 1577,
  [SMALL_STATE(66)] = 1590,
  [SMALL_STATE(67)] = 1603,
  [SMALL_STATE(68)] = 1616,
  [SMALL_STATE(69)] = 1629,
  [SMALL_STATE(70)] = 1642,
  [SMALL_STATE(71)] = 1655,
  [SMALL_STATE(72)] = 1668,
  [SMALL_STATE(73)] = 1681,
  [SMALL_STATE(74)] = 1694,
  [SMALL_STATE(75)] = 1707,
  [SMALL_STATE(76)] = 1720,
  [SMALL_STATE(77)] = 1730,
  [SMALL_STATE(78)] = 1738,
  [SMALL_STATE(79)] = 1748,
  [SMALL_STATE(80)] = 1758,
  [SMALL_STATE(81)] = 1768,
  [SMALL_STATE(82)] = 1778,
  [SMALL_STATE(83)] = 1788,
  [SMALL_STATE(84)] = 1798,
  [SMALL_STATE(85)] = 1808,
  [SMALL_STATE(86)] = 1818,
  [SMALL_STATE(87)] = 1828,
  [SMALL_STATE(88)] = 1838,
  [SMALL_STATE(89)] = 1848,
  [SMALL_STATE(90)] = 1858,
  [SMALL_STATE(91)] = 1868,
  [SMALL_STATE(92)] = 1878,
  [SMALL_STATE(93)] = 1888,
  [SMALL_STATE(94)] = 1898,
  [SMALL_STATE(95)] = 1908,
  [SMALL_STATE(96)] = 1918,
  [SMALL_STATE(97)] = 1928,
  [SMALL_STATE(98)] = 1938,
  [SMALL_STATE(99)] = 1948,
  [SMALL_STATE(100)] = 1956,
  [SMALL_STATE(101)] = 1966,
  [SMALL_STATE(102)] = 1976,
  [SMALL_STATE(103)] = 1986,
  [SMALL_STATE(104)] = 1996,
  [SMALL_STATE(105)] = 2006,
  [SMALL_STATE(106)] = 2016,
  [SMALL_STATE(107)] = 2026,
  [SMALL_STATE(108)] = 2036,
  [SMALL_STATE(109)] = 2046,
  [SMALL_STATE(110)] = 2056,
  [SMALL_STATE(111)] = 2066,
  [SMALL_STATE(112)] = 2076,
  [SMALL_STATE(113)] = 2083,
  [SMALL_STATE(114)] = 2088,
  [SMALL_STATE(115)] = 2095,
  [SMALL_STATE(116)] = 2102,
  [SMALL_STATE(117)] = 2109,
  [SMALL_STATE(118)] = 2116,
  [SMALL_STATE(119)] = 2123,
  [SMALL_STATE(120)] = 2130,
  [SMALL_STATE(121)] = 2137,
  [SMALL_STATE(122)] = 2144,
  [SMALL_STATE(123)] = 2151,
  [SMALL_STATE(124)] = 2158,
  [SMALL_STATE(125)] = 2165,
  [SMALL_STATE(126)] = 2172,
  [SMALL_STATE(127)] = 2179,
  [SMALL_STATE(128)] = 2186,
  [SMALL_STATE(129)] = 2193,
  [SMALL_STATE(130)] = 2200,
  [SMALL_STATE(131)] = 2207,
  [SMALL_STATE(132)] = 2214,
  [SMALL_STATE(133)] = 2221,
  [SMALL_STATE(134)] = 2228,
  [SMALL_STATE(135)] = 2235,
  [SMALL_STATE(136)] = 2242,
  [SMALL_STATE(137)] = 2249,
  [SMALL_STATE(138)] = 2256,
  [SMALL_STATE(139)] = 2263,
  [SMALL_STATE(140)] = 2270,
  [SMALL_STATE(141)] = 2277,
  [SMALL_STATE(142)] = 2284,
  [SMALL_STATE(143)] = 2291,
  [SMALL_STATE(144)] = 2298,
  [SMALL_STATE(145)] = 2305,
  [SMALL_STATE(146)] = 2312,
  [SMALL_STATE(147)] = 2319,
  [SMALL_STATE(148)] = 2326,
  [SMALL_STATE(149)] = 2333,
  [SMALL_STATE(150)] = 2340,
  [SMALL_STATE(151)] = 2347,
  [SMALL_STATE(152)] = 2354,
  [SMALL_STATE(153)] = 2361,
  [SMALL_STATE(154)] = 2368,
  [SMALL_STATE(155)] = 2375,
  [SMALL_STATE(156)] = 2380,
  [SMALL_STATE(157)] = 2387,
  [SMALL_STATE(158)] = 2392,
  [SMALL_STATE(159)] = 2396,
  [SMALL_STATE(160)] = 2400,
  [SMALL_STATE(161)] = 2404,
  [SMALL_STATE(162)] = 2408,
  [SMALL_STATE(163)] = 2412,
  [SMALL_STATE(164)] = 2416,
  [SMALL_STATE(165)] = 2420,
  [SMALL_STATE(166)] = 2424,
  [SMALL_STATE(167)] = 2428,
  [SMALL_STATE(168)] = 2432,
  [SMALL_STATE(169)] = 2436,
  [SMALL_STATE(170)] = 2440,
  [SMALL_STATE(171)] = 2444,
  [SMALL_STATE(172)] = 2448,
  [SMALL_STATE(173)] = 2452,
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
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(105),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(111),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(109),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(107),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(120),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(106),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(103),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(100),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(99),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(77),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(35),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(9),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(9),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(87),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(36),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(14),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(31),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(32),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(3),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__body_elements, 2),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__body_elements, 2),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(11),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(11),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(20),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(34),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(32),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__char, 1),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__char, 1),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 3),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__line_repeat1, 2), SHIFT_REPEAT(9),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__line_repeat1, 2), SHIFT_REPEAT(16),
  [169] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__line_repeat1, 2), SHIFT_REPEAT(16),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__line_repeat1, 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__line_repeat1, 2), SHIFT_REPEAT(11),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__line_repeat1, 2), SHIFT_REPEAT(19),
  [190] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__line_repeat1, 2), SHIFT_REPEAT(19),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_markup_block, 3),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline_markup_block, 3),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 5),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 1),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference, 1),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [239] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_block_repeat1, 2), SHIFT_REPEAT(171),
  [242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_block_repeat1, 2), SHIFT_REPEAT(98),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__footnote_block_repeat1, 2), SHIFT_REPEAT(95),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bullet_list_item, 2),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__enumerated_list_item, 2),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 2),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_list_item, 2),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_block, 2),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footnote, 2),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_citation, 2),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__embed_directive, 4),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__bullet_list_item_repeat1, 2), SHIFT_REPEAT(59),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__bullet_list_item_repeat1, 2),
  [291] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_block_repeat1, 2), SHIFT_REPEAT(38),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [296] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__substitution_definition_block_repeat1, 2), SHIFT_REPEAT(89),
  [299] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__directive_block_repeat1, 2), SHIFT_REPEAT(42),
  [302] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__anoynymous_hyperlink_target_block_repeat1, 2), SHIFT_REPEAT(130),
  [305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hyperlink_target_block_repeat1, 2), SHIFT_REPEAT(129),
  [308] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__citation_block_repeat1, 2), SHIFT_REPEAT(92),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [315] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_option_list_repeat1, 2), SHIFT_REPEAT(76),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [320] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_list_repeat1, 2), SHIFT_REPEAT(90),
  [323] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bullet_list_repeat1, 2), SHIFT_REPEAT(104),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [328] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enumerated_list_repeat1, 2), SHIFT_REPEAT(79),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__anonymous_target, 1),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_line_block_repeat1, 2),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_block_repeat1, 2),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [363] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__bullet_list_item_repeat1, 2), SHIFT_REPEAT(96),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 1),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_list, 2),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 2),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bullet_list, 1, .production_id = 1),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumerated_list, 1, .production_id = 1),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_list, 1),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_list, 1),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_block, 1),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__footnote_block, 1),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__citation_block, 1),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hyperlink_target_block, 1),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__substitution_definition_block, 2),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directive_block, 2),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_block, 2),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__anoynymous_hyperlink_target_block, 2),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__anoynymous_hyperlink_target_block, 1),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directive_block, 1),
  [458] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hyperlink_target_block, 2),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__citation_block, 2),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__footnote_block, 2),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_block, 2),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_list, 2),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumerated_list, 2, .production_id = 2),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bullet_list, 2, .production_id = 2),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__comment_block_repeat1, 2),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__substitution_definition_block_repeat1, 2),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__substitution_definition_block, 1),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_block, 1),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__directive_block_repeat1, 2),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 1),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__anoynymous_hyperlink_target_block_repeat1, 2),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hyperlink_target_block_repeat1, 2),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__citation_block_repeat1, 2),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__footnote_block_repeat1, 2),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_option_list_repeat1, 2),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_list_repeat1, 2),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enumerated_list_repeat1, 2, .production_id = 1),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bullet_list_repeat1, 2, .production_id = 1),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_substitution_definition, 2),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__anonymous_target, 2),
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
