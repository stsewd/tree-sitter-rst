#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 156
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 104
#define ALIAS_COUNT 1
#define TOKEN_COUNT 54
#define EXTERNAL_TOKEN_COUNT 2
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
  anon_sym_DASH = 22,
  anon_sym_COLON = 23,
  anon_sym_SLASH = 24,
  anon_sym_SQUOTE = 25,
  anon_sym_DQUOTE = 26,
  anon_sym_LT = 27,
  anon_sym_LPAREN = 28,
  anon_sym_LBRACK = 29,
  anon_sym_LBRACE = 30,
  anon_sym_DOT = 31,
  anon_sym_COMMA = 32,
  anon_sym_SEMI = 33,
  anon_sym_BANG = 34,
  anon_sym_QMARK = 35,
  anon_sym_BSLASH = 36,
  anon_sym_RPAREN = 37,
  anon_sym_RBRACK = 38,
  anon_sym_RBRACE = 39,
  anon_sym_GT = 40,
  aux_sym__char_token1 = 41,
  sym_emphasis = 42,
  sym_strong = 43,
  sym_interpreted_text = 44,
  sym_literal = 45,
  sym_substitution_reference = 46,
  sym__inline_target = 47,
  sym_footnote_reference = 48,
  aux_sym_reference_token1 = 49,
  aux_sym_reference_token2 = 50,
  aux_sym_reference_token3 = 51,
  sym__eol = 52,
  sym__blank_line = 53,
  sym_document = 54,
  sym__body_elements = 55,
  sym_paragraph = 56,
  sym__lists = 57,
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
  sym__markup_blocks = 68,
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
  aux_sym__text_body = 84,
  sym__char = 85,
  sym__inline_markup_block = 86,
  sym__inline_markup = 87,
  sym_reference = 88,
  aux_sym_document_repeat1 = 89,
  aux_sym_paragraph_repeat1 = 90,
  aux_sym_bullet_list_repeat1 = 91,
  aux_sym__bullet_list_item_repeat1 = 92,
  aux_sym_enumerated_list_repeat1 = 93,
  aux_sym_field_list_repeat1 = 94,
  aux_sym_option_list_repeat1 = 95,
  aux_sym_line_block_repeat1 = 96,
  aux_sym__footnote_block_repeat1 = 97,
  aux_sym__citation_block_repeat1 = 98,
  aux_sym__hyperlink_target_block_repeat1 = 99,
  aux_sym__anoynymous_hyperlink_target_block_repeat1 = 100,
  aux_sym__directive_block_repeat1 = 101,
  aux_sym__substitution_definition_block_repeat1 = 102,
  aux_sym__comment_block_repeat1 = 103,
  alias_sym_list_item = 104,
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
  [anon_sym_DOT] = ".",
  [anon_sym_COMMA] = ",",
  [anon_sym_SEMI] = ";",
  [anon_sym_BANG] = "!",
  [anon_sym_QMARK] = "?",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_RPAREN] = ")",
  [anon_sym_RBRACK] = "]",
  [anon_sym_RBRACE] = "}",
  [anon_sym_GT] = ">",
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
  [sym__lists] = "_lists",
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
  [sym__markup_blocks] = "_markup_blocks",
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
  [aux_sym__text_body] = "_text_body",
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
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_GT] = anon_sym_GT,
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
  [sym__lists] = sym__lists,
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
  [sym__markup_blocks] = sym__markup_blocks,
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
  [aux_sym__text_body] = aux_sym__text_body,
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
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
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
  [sym__lists] = {
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
  [sym__markup_blocks] = {
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
  [aux_sym__text_body] = {
    .visible = false,
    .named = false,
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
      if (eof) ADVANCE(95);
      if (lookahead == '\t') ADVANCE(112);
      if (lookahead == 11) ADVANCE(113);
      if (lookahead == '\f') ADVANCE(115);
      if (lookahead == '\r') ADVANCE(96);
      if (lookahead == ' ') ADVANCE(111);
      if (lookahead == '!') ADVANCE(151);
      if (lookahead == '"') ADVANCE(134);
      if (lookahead == '\'') ADVANCE(132);
      if (lookahead == '(') ADVANCE(138);
      if (lookahead == ')') ADVANCE(157);
      if (lookahead == ',') ADVANCE(147);
      if (lookahead == '-') ADVANCE(123);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == '/') ADVANCE(129);
      if (lookahead == ':') ADVANCE(126);
      if (lookahead == ';') ADVANCE(149);
      if (lookahead == '<') ADVANCE(136);
      if (lookahead == '>') ADVANCE(163);
      if (lookahead == '?') ADVANCE(153);
      if (lookahead == '[') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(155);
      if (lookahead == ']') ADVANCE(159);
      if (lookahead == '{') ADVANCE(142);
      if (lookahead == '|') ADVANCE(101);
      if (lookahead == '}') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(112);
      if (lookahead == 11) ADVANCE(113);
      if (lookahead == '\f') ADVANCE(115);
      if (lookahead == ' ') ADVANCE(111);
      if (lookahead == '!') ADVANCE(151);
      if (lookahead == '"') ADVANCE(134);
      if (lookahead == '\'') ADVANCE(132);
      if (lookahead == '(') ADVANCE(138);
      if (lookahead == ')') ADVANCE(157);
      if (lookahead == ',') ADVANCE(147);
      if (lookahead == '-') ADVANCE(123);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == '/') ADVANCE(129);
      if (lookahead == ':') ADVANCE(126);
      if (lookahead == ';') ADVANCE(149);
      if (lookahead == '<') ADVANCE(136);
      if (lookahead == '>') ADVANCE(163);
      if (lookahead == '?') ADVANCE(153);
      if (lookahead == '[') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(155);
      if (lookahead == ']') ADVANCE(159);
      if (lookahead == '{') ADVANCE(142);
      if (lookahead == '}') ADVANCE(161);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(165);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(112);
      if (lookahead == 11) ADVANCE(114);
      if (lookahead == '\f') ADVANCE(116);
      if (lookahead == ' ') ADVANCE(111);
      if (lookahead == '!') ADVANCE(152);
      if (lookahead == '"') ADVANCE(135);
      if (lookahead == '\'') ADVANCE(133);
      if (lookahead == '(') ADVANCE(139);
      if (lookahead == ')') ADVANCE(158);
      if (lookahead == '*') ADVANCE(166);
      if (lookahead == ',') ADVANCE(148);
      if (lookahead == '-') ADVANCE(124);
      if (lookahead == '.') ADVANCE(146);
      if (lookahead == '/') ADVANCE(130);
      if (lookahead == ':') ADVANCE(127);
      if (lookahead == ';') ADVANCE(150);
      if (lookahead == '<') ADVANCE(137);
      if (lookahead == '>') ADVANCE(164);
      if (lookahead == '?') ADVANCE(154);
      if (lookahead == '[') ADVANCE(141);
      if (lookahead == '\\') ADVANCE(156);
      if (lookahead == ']') ADVANCE(160);
      if (lookahead == '_') ADVANCE(175);
      if (lookahead == '`') ADVANCE(173);
      if (lookahead == '{') ADVANCE(143);
      if (lookahead == '|') ADVANCE(174);
      if (lookahead == '}') ADVANCE(162);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(172);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(14);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(39);
      if (lookahead == '*') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(45);
      if (lookahead == '_') ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(12);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(179);
      if (lookahead == '_') ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(70);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(179);
      if (lookahead == '_') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(70);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(181);
      if (lookahead == '_') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(45);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(178);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(70);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(74);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(180);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '_') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(74);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '_') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(74);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == '+') ADVANCE(88);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '/') ADVANCE(88);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'I' ||
          lookahead == 'L' ||
          lookahead == 'M' ||
          lookahead == 'V' ||
          lookahead == 'X') ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'c' ||
          lookahead == 'd' ||
          lookahead == 'i' ||
          lookahead == 'l' ||
          lookahead == 'm' ||
          lookahead == 'v' ||
          lookahead == 'x') ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(121);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == '.') ADVANCE(83);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(106);
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(106);
      if (lookahead == '_') ADVANCE(43);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(106);
      if (lookahead != 0) ADVANCE(43);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == '_') ADVANCE(28);
      if (lookahead == '`') ADVANCE(23);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == '`') ADVANCE(43);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 28:
      if (lookahead == ':') ADVANCE(59);
      if (lookahead == '_') ADVANCE(28);
      if (lookahead == '`') ADVANCE(23);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 29:
      if (lookahead == ':') ADVANCE(120);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(27);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(80);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 32:
      if (lookahead == '[') ADVANCE(4);
      if (lookahead == '_') ADVANCE(42);
      if (lookahead == '|') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 33:
      if (lookahead == '[') ADVANCE(45);
      if (lookahead == ']') ADVANCE(48);
      if (lookahead == '_') ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead == '[') ADVANCE(45);
      if (lookahead == ']') ADVANCE(48);
      if (lookahead == '_') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 35:
      if (lookahead == '[') ADVANCE(90);
      END_STATE();
    case 36:
      if (lookahead == ']') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(36);
      END_STATE();
    case 37:
      if (lookahead == ']') ADVANCE(81);
      END_STATE();
    case 38:
      if (lookahead == ']') ADVANCE(81);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 39:
      if (lookahead == ']') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 40:
      if (lookahead == ']') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 41:
      if (lookahead == ']') ADVANCE(82);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 42:
      if (lookahead == '_') ADVANCE(22);
      if (lookahead == '`') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(24);
      END_STATE();
    case 43:
      if (lookahead == '_') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(23);
      END_STATE();
    case 44:
      if (lookahead == '_') ADVANCE(195);
      if (lookahead == '`') ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(45);
      END_STATE();
    case 45:
      if (lookahead == '_') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(45);
      END_STATE();
    case 46:
      if (lookahead == '_') ADVANCE(196);
      if (lookahead == '`') ADVANCE(182);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 47:
      if (lookahead == '_') ADVANCE(197);
      if (lookahead == '|') ADVANCE(187);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(73);
      if (lookahead != 0) ADVANCE(47);
      END_STATE();
    case 48:
      if (lookahead == '_') ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(45);
      END_STATE();
    case 49:
      if (lookahead == '_') ADVANCE(190);
      END_STATE();
    case 50:
      if (lookahead == '_') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(45);
      END_STATE();
    case 51:
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == '`') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(52);
      END_STATE();
    case 52:
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == '`') ADVANCE(189);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(75);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 53:
      if (lookahead == '_') ADVANCE(53);
      if (lookahead == '|') ADVANCE(187);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(73);
      if (lookahead != 0) ADVANCE(47);
      END_STATE();
    case 54:
      if (lookahead == '_') ADVANCE(199);
      if (lookahead == '`') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(55);
      END_STATE();
    case 55:
      if (lookahead == '_') ADVANCE(199);
      if (lookahead == '`') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(76);
      if (lookahead != 0) ADVANCE(55);
      END_STATE();
    case 56:
      if (lookahead == '_') ADVANCE(56);
      if (lookahead == '`') ADVANCE(182);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 57:
      if (lookahead == '_') ADVANCE(57);
      if (lookahead == '`') ADVANCE(189);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(75);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 58:
      if (lookahead == '_') ADVANCE(58);
      if (lookahead == '`') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(76);
      if (lookahead != 0) ADVANCE(55);
      END_STATE();
    case 59:
      if (lookahead == '`') ADVANCE(22);
      if (lookahead != 0) ADVANCE(59);
      END_STATE();
    case 60:
      if (lookahead == '`') ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead != 0) ADVANCE(60);
      END_STATE();
    case 61:
      if (lookahead == '`') ADVANCE(188);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(75);
      if (lookahead != 0) ADVANCE(61);
      END_STATE();
    case 62:
      if (lookahead == '`') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(76);
      if (lookahead != 0) ADVANCE(62);
      END_STATE();
    case 63:
      if (lookahead == '`') ADVANCE(184);
      END_STATE();
    case 64:
      if (lookahead == '|') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 65:
      if (lookahead == '|') ADVANCE(186);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(73);
      if (lookahead != 0) ADVANCE(65);
      END_STATE();
    case 66:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(118);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(117);
      if (lookahead == '\r') ADVANCE(68);
      if (lookahead == '|') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 67:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f') ADVANCE(78);
      if (lookahead == ' ') ADVANCE(79);
      if (lookahead == ',') ADVANCE(3);
      if (lookahead == '=') ADVANCE(89);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 68:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 69:
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 70:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(9);
      END_STATE();
    case 71:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(36);
      END_STATE();
    case 72:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(60);
      END_STATE();
    case 73:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '|') ADVANCE(65);
      END_STATE();
    case 74:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(10);
      END_STATE();
    case 75:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(61);
      END_STATE();
    case 76:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(62);
      END_STATE();
    case 77:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(98);
      END_STATE();
    case 78:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(100);
      END_STATE();
    case 79:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 80:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(99);
      END_STATE();
    case 81:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(104);
      END_STATE();
    case 82:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(105);
      END_STATE();
    case 83:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(35);
      END_STATE();
    case 84:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(78);
      if (lookahead == ',') ADVANCE(3);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 85:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(92);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == ':') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 86:
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '_') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 87:
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '_') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 88:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 89:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 90:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 91:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 92:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(108);
      END_STATE();
    case 93:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(64);
      END_STATE();
    case 94:
      if (eof) ADVANCE(95);
      if (lookahead == '\t') ADVANCE(112);
      if (lookahead == 11) ADVANCE(113);
      if (lookahead == '\f') ADVANCE(115);
      if (lookahead == ' ') ADVANCE(111);
      if (lookahead == '!') ADVANCE(151);
      if (lookahead == '"') ADVANCE(134);
      if (lookahead == '#') ADVANCE(167);
      if (lookahead == '\'') ADVANCE(132);
      if (lookahead == '(') ADVANCE(138);
      if (lookahead == ')') ADVANCE(157);
      if (lookahead == '*' ||
          lookahead == 8226 ||
          lookahead == 8227 ||
          lookahead == 8259) ADVANCE(176);
      if (lookahead == '+') ADVANCE(177);
      if (lookahead == ',') ADVANCE(147);
      if (lookahead == '-') ADVANCE(125);
      if (lookahead == '.') ADVANCE(145);
      if (lookahead == '/') ADVANCE(131);
      if (lookahead == ':') ADVANCE(128);
      if (lookahead == ';') ADVANCE(149);
      if (lookahead == '<') ADVANCE(136);
      if (lookahead == '>') ADVANCE(163);
      if (lookahead == '?') ADVANCE(153);
      if (lookahead == '[') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(155);
      if (lookahead == ']') ADVANCE(159);
      if (lookahead == '_') ADVANCE(171);
      if (lookahead == '{') ADVANCE(142);
      if (lookahead == '|') ADVANCE(102);
      if (lookahead == '}') ADVANCE(161);
      if (lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'I' ||
          lookahead == 'L' ||
          lookahead == 'M' ||
          lookahead == 'V' ||
          lookahead == 'X') ADVANCE(168);
      if (lookahead == 'c' ||
          lookahead == 'd' ||
          lookahead == 'i' ||
          lookahead == 'l' ||
          lookahead == 'm' ||
          lookahead == 'v' ||
          lookahead == 'x') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(170);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(167);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(165);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym__bullet_list_item_token1);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__char_bullet);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym__enumerated_list_item_token1);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_field_token1);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_option_list_item_token1);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(103);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym__single_line_block_token1);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_footnote_token1);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_citation_token1);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_target_token1);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == '`') ADVANCE(22);
      if (lookahead != 0) ADVANCE(59);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_target_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym___);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '_') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_TAB);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_2);
      if (lookahead == '_') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(45);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_3);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_3);
      if (lookahead == '_') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(45);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_substitution_definition_token1);
      if (lookahead == '|') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_substitution_definition_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym__embed_directive_token1);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '_') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(32);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '_') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(45);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(97);
      if (lookahead == '-') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '_') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(45);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(31);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '_') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(45);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '_') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(45);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '_') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(45);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '_') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(45);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '_') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(45);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '_') ADVANCE(194);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(33);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '_') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(45);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(122);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '_') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(45);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '_') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(45);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == '_') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(45);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '_') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(45);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead == '_') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(45);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '_') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(45);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead == '_') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(45);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == '_') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(45);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '_') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(45);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '_') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(45);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym__char_token1);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym__char_token1);
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '_') ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(6);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym__char_token1);
      if (lookahead == '.') ADVANCE(77);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym__char_token1);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'I' ||
          lookahead == 'L' ||
          lookahead == 'M' ||
          lookahead == 'V' ||
          lookahead == 'X') ADVANCE(16);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym__char_token1);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'c' ||
          lookahead == 'd' ||
          lookahead == 'i' ||
          lookahead == 'l' ||
          lookahead == 'm' ||
          lookahead == 'v' ||
          lookahead == 'x') ADVANCE(17);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym__char_token1);
      if (lookahead == '.') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym__char_token1);
      if (lookahead == '_') ADVANCE(109);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym__char_token1);
      if (lookahead == '_') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(45);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym__char_token1);
      if (lookahead == '_') ADVANCE(196);
      if (lookahead == '`') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(46);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym__char_token1);
      if (lookahead == '_') ADVANCE(197);
      if (lookahead == '|') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(47);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym__char_token1);
      if (lookahead == '_') ADVANCE(50);
      if (lookahead == '`') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(45);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym__char_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(97);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym__char_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_emphasis);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_emphasis);
      if (lookahead == '_') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(45);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_strong);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_strong);
      if (lookahead == '_') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(45);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_interpreted_text);
      if (lookahead == '_') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(45);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_interpreted_text);
      if (lookahead == '_') ADVANCE(208);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_literal);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '_') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(45);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_substitution_reference);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_substitution_reference);
      if (lookahead == '_') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(45);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__inline_target);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__inline_target);
      if (lookahead == '_') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(45);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_footnote_reference);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_footnote_reference);
      if (lookahead == '_') ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(45);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_reference_token1);
      if (lookahead == '*') ADVANCE(179);
      if (lookahead == '_') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(70);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_reference_token1);
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(74);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_reference_token1);
      if (lookahead == '[') ADVANCE(45);
      if (lookahead == ']') ADVANCE(48);
      if (lookahead == '_') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_reference_token1);
      if (lookahead == '_') ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(45);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_reference_token1);
      if (lookahead == '_') ADVANCE(205);
      if (lookahead == '`') ADVANCE(182);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_reference_token1);
      if (lookahead == '_') ADVANCE(204);
      if (lookahead == '|') ADVANCE(187);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(73);
      if (lookahead != 0) ADVANCE(47);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_reference_token1);
      if (lookahead == '_') ADVANCE(206);
      if (lookahead == '`') ADVANCE(189);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(75);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_reference_token1);
      if (lookahead == '_') ADVANCE(207);
      if (lookahead == '`') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(76);
      if (lookahead != 0) ADVANCE(55);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_reference_token2);
      if (lookahead == '*') ADVANCE(179);
      if (lookahead == '_') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(70);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_reference_token2);
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '_') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(74);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_reference_token2);
      if (lookahead == '[') ADVANCE(45);
      if (lookahead == ']') ADVANCE(48);
      if (lookahead == '_') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_reference_token2);
      if (lookahead == '_') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(45);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_reference_token2);
      if (lookahead == '_') ADVANCE(53);
      if (lookahead == '|') ADVANCE(187);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(73);
      if (lookahead != 0) ADVANCE(47);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_reference_token2);
      if (lookahead == '_') ADVANCE(56);
      if (lookahead == '`') ADVANCE(182);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_reference_token2);
      if (lookahead == '_') ADVANCE(57);
      if (lookahead == '`') ADVANCE(189);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(75);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_reference_token2);
      if (lookahead == '_') ADVANCE(58);
      if (lookahead == '`') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(76);
      if (lookahead != 0) ADVANCE(55);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_reference_token3);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 94, .external_lex_state = 1},
  [2] = {.lex_state = 94, .external_lex_state = 1},
  [3] = {.lex_state = 94, .external_lex_state = 1},
  [4] = {.lex_state = 94, .external_lex_state = 1},
  [5] = {.lex_state = 2, .external_lex_state = 1},
  [6] = {.lex_state = 2, .external_lex_state = 2},
  [7] = {.lex_state = 1, .external_lex_state = 2},
  [8] = {.lex_state = 1, .external_lex_state = 1},
  [9] = {.lex_state = 1, .external_lex_state = 2},
  [10] = {.lex_state = 1, .external_lex_state = 1},
  [11] = {.lex_state = 1, .external_lex_state = 1},
  [12] = {.lex_state = 1, .external_lex_state = 2},
  [13] = {.lex_state = 1, .external_lex_state = 2},
  [14] = {.lex_state = 1, .external_lex_state = 1},
  [15] = {.lex_state = 1, .external_lex_state = 2},
  [16] = {.lex_state = 1, .external_lex_state = 2},
  [17] = {.lex_state = 1, .external_lex_state = 2},
  [18] = {.lex_state = 1, .external_lex_state = 2},
  [19] = {.lex_state = 1, .external_lex_state = 2},
  [20] = {.lex_state = 94, .external_lex_state = 1},
  [21] = {.lex_state = 94, .external_lex_state = 1},
  [22] = {.lex_state = 94, .external_lex_state = 2},
  [23] = {.lex_state = 94, .external_lex_state = 2},
  [24] = {.lex_state = 94, .external_lex_state = 2},
  [25] = {.lex_state = 94, .external_lex_state = 2},
  [26] = {.lex_state = 94, .external_lex_state = 2},
  [27] = {.lex_state = 94, .external_lex_state = 2},
  [28] = {.lex_state = 91, .external_lex_state = 1},
  [29] = {.lex_state = 94, .external_lex_state = 2},
  [30] = {.lex_state = 91, .external_lex_state = 1},
  [31] = {.lex_state = 91, .external_lex_state = 1},
  [32] = {.lex_state = 85, .external_lex_state = 2},
  [33] = {.lex_state = 94, .external_lex_state = 2},
  [34] = {.lex_state = 94, .external_lex_state = 2},
  [35] = {.lex_state = 94, .external_lex_state = 2},
  [36] = {.lex_state = 94, .external_lex_state = 2},
  [37] = {.lex_state = 94, .external_lex_state = 2},
  [38] = {.lex_state = 20, .external_lex_state = 2},
  [39] = {.lex_state = 94, .external_lex_state = 2},
  [40] = {.lex_state = 94, .external_lex_state = 2},
  [41] = {.lex_state = 94, .external_lex_state = 2},
  [42] = {.lex_state = 94, .external_lex_state = 2},
  [43] = {.lex_state = 85, .external_lex_state = 2},
  [44] = {.lex_state = 91, .external_lex_state = 1},
  [45] = {.lex_state = 91, .external_lex_state = 1},
  [46] = {.lex_state = 91, .external_lex_state = 1},
  [47] = {.lex_state = 91, .external_lex_state = 1},
  [48] = {.lex_state = 91, .external_lex_state = 1},
  [49] = {.lex_state = 91, .external_lex_state = 1},
  [50] = {.lex_state = 91, .external_lex_state = 1},
  [51] = {.lex_state = 94, .external_lex_state = 2},
  [52] = {.lex_state = 94, .external_lex_state = 2},
  [53] = {.lex_state = 94, .external_lex_state = 2},
  [54] = {.lex_state = 94, .external_lex_state = 2},
  [55] = {.lex_state = 20, .external_lex_state = 2},
  [56] = {.lex_state = 94, .external_lex_state = 2},
  [57] = {.lex_state = 94, .external_lex_state = 2},
  [58] = {.lex_state = 94, .external_lex_state = 2},
  [59] = {.lex_state = 91, .external_lex_state = 1},
  [60] = {.lex_state = 94, .external_lex_state = 2},
  [61] = {.lex_state = 91, .external_lex_state = 2},
  [62] = {.lex_state = 91, .external_lex_state = 2},
  [63] = {.lex_state = 91, .external_lex_state = 2},
  [64] = {.lex_state = 91, .external_lex_state = 2},
  [65] = {.lex_state = 91, .external_lex_state = 2},
  [66] = {.lex_state = 91, .external_lex_state = 2},
  [67] = {.lex_state = 91, .external_lex_state = 2},
  [68] = {.lex_state = 91, .external_lex_state = 2},
  [69] = {.lex_state = 91, .external_lex_state = 2},
  [70] = {.lex_state = 91, .external_lex_state = 2},
  [71] = {.lex_state = 91, .external_lex_state = 2},
  [72] = {.lex_state = 85, .external_lex_state = 2},
  [73] = {.lex_state = 85, .external_lex_state = 2},
  [74] = {.lex_state = 85, .external_lex_state = 1},
  [75] = {.lex_state = 85, .external_lex_state = 1},
  [76] = {.lex_state = 91, .external_lex_state = 2},
  [77] = {.lex_state = 94, .external_lex_state = 2},
  [78] = {.lex_state = 91, .external_lex_state = 2},
  [79] = {.lex_state = 91, .external_lex_state = 2},
  [80] = {.lex_state = 91, .external_lex_state = 2},
  [81] = {.lex_state = 91, .external_lex_state = 2},
  [82] = {.lex_state = 91, .external_lex_state = 2},
  [83] = {.lex_state = 91, .external_lex_state = 2},
  [84] = {.lex_state = 91, .external_lex_state = 2},
  [85] = {.lex_state = 91, .external_lex_state = 2},
  [86] = {.lex_state = 91, .external_lex_state = 2},
  [87] = {.lex_state = 91, .external_lex_state = 2},
  [88] = {.lex_state = 91, .external_lex_state = 2},
  [89] = {.lex_state = 91, .external_lex_state = 2},
  [90] = {.lex_state = 91, .external_lex_state = 2},
  [91] = {.lex_state = 91, .external_lex_state = 2},
  [92] = {.lex_state = 91, .external_lex_state = 2},
  [93] = {.lex_state = 91, .external_lex_state = 2},
  [94] = {.lex_state = 91, .external_lex_state = 2},
  [95] = {.lex_state = 91, .external_lex_state = 2},
  [96] = {.lex_state = 91, .external_lex_state = 2},
  [97] = {.lex_state = 0, .external_lex_state = 1},
  [98] = {.lex_state = 0, .external_lex_state = 1},
  [99] = {.lex_state = 0, .external_lex_state = 1},
  [100] = {.lex_state = 0, .external_lex_state = 1},
  [101] = {.lex_state = 0, .external_lex_state = 1},
  [102] = {.lex_state = 0, .external_lex_state = 1},
  [103] = {.lex_state = 0, .external_lex_state = 1},
  [104] = {.lex_state = 0, .external_lex_state = 1},
  [105] = {.lex_state = 0, .external_lex_state = 1},
  [106] = {.lex_state = 0, .external_lex_state = 2},
  [107] = {.lex_state = 85, .external_lex_state = 2},
  [108] = {.lex_state = 0, .external_lex_state = 1},
  [109] = {.lex_state = 0, .external_lex_state = 1},
  [110] = {.lex_state = 0, .external_lex_state = 1},
  [111] = {.lex_state = 0, .external_lex_state = 1},
  [112] = {.lex_state = 0, .external_lex_state = 1},
  [113] = {.lex_state = 0, .external_lex_state = 1},
  [114] = {.lex_state = 0, .external_lex_state = 1},
  [115] = {.lex_state = 0, .external_lex_state = 1},
  [116] = {.lex_state = 0, .external_lex_state = 1},
  [117] = {.lex_state = 0, .external_lex_state = 1},
  [118] = {.lex_state = 0, .external_lex_state = 1},
  [119] = {.lex_state = 0, .external_lex_state = 1},
  [120] = {.lex_state = 0, .external_lex_state = 1},
  [121] = {.lex_state = 85, .external_lex_state = 2},
  [122] = {.lex_state = 85, .external_lex_state = 2},
  [123] = {.lex_state = 0, .external_lex_state = 1},
  [124] = {.lex_state = 85, .external_lex_state = 2},
  [125] = {.lex_state = 94, .external_lex_state = 2},
  [126] = {.lex_state = 94, .external_lex_state = 2},
  [127] = {.lex_state = 94, .external_lex_state = 2},
  [128] = {.lex_state = 94, .external_lex_state = 2},
  [129] = {.lex_state = 20, .external_lex_state = 2},
  [130] = {.lex_state = 94, .external_lex_state = 2},
  [131] = {.lex_state = 94, .external_lex_state = 2},
  [132] = {.lex_state = 94, .external_lex_state = 2},
  [133] = {.lex_state = 0, .external_lex_state = 1},
  [134] = {.lex_state = 0, .external_lex_state = 1},
  [135] = {.lex_state = 94, .external_lex_state = 2},
  [136] = {.lex_state = 0, .external_lex_state = 1},
  [137] = {.lex_state = 94, .external_lex_state = 2},
  [138] = {.lex_state = 0, .external_lex_state = 1},
  [139] = {.lex_state = 85, .external_lex_state = 2},
  [140] = {.lex_state = 0, .external_lex_state = 1},
  [141] = {.lex_state = 0, .external_lex_state = 2},
  [142] = {.lex_state = 0, .external_lex_state = 2},
  [143] = {.lex_state = 0, .external_lex_state = 2},
  [144] = {.lex_state = 0, .external_lex_state = 2},
  [145] = {.lex_state = 0, .external_lex_state = 2},
  [146] = {.lex_state = 0, .external_lex_state = 2},
  [147] = {.lex_state = 0, .external_lex_state = 2},
  [148] = {.lex_state = 0, .external_lex_state = 2},
  [149] = {.lex_state = 0, .external_lex_state = 2},
  [150] = {.lex_state = 0, .external_lex_state = 2},
  [151] = {.lex_state = 0, .external_lex_state = 2},
  [152] = {.lex_state = 0, .external_lex_state = 2},
  [153] = {.lex_state = 0, .external_lex_state = 2},
  [154] = {.lex_state = 0, .external_lex_state = 2},
  [155] = {.lex_state = 0, .external_lex_state = 2},
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
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [aux_sym__char_token1] = ACTIONS(1),
    [sym__eol] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(106),
    [sym__body_elements] = STATE(2),
    [sym_paragraph] = STATE(108),
    [sym__lists] = STATE(108),
    [sym_bullet_list] = STATE(108),
    [sym__bullet_list_item] = STATE(109),
    [sym_enumerated_list] = STATE(108),
    [sym__enumerated_list_item] = STATE(110),
    [sym_field_list] = STATE(108),
    [sym_field] = STATE(111),
    [sym_option_list] = STATE(108),
    [sym_option_list_item] = STATE(112),
    [sym_line_block] = STATE(108),
    [sym__single_line_block] = STATE(113),
    [sym__markup_blocks] = STATE(108),
    [sym__footnote_block] = STATE(108),
    [sym_footnote] = STATE(114),
    [sym__citation_block] = STATE(108),
    [sym_citation] = STATE(115),
    [sym__hyperlink_target_block] = STATE(108),
    [sym_target] = STATE(116),
    [sym__anoynymous_hyperlink_target_block] = STATE(108),
    [sym__anonymous_target] = STATE(117),
    [sym__directive_block] = STATE(108),
    [sym_directive] = STATE(118),
    [sym__substitution_definition_block] = STATE(108),
    [sym_substitution_definition] = STATE(133),
    [sym__comment_block] = STATE(108),
    [sym_comment] = STATE(134),
    [aux_sym__text_body] = STATE(8),
    [sym__char] = STATE(8),
    [sym__inline_markup_block] = STATE(8),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_paragraph_repeat1] = STATE(7),
    [aux_sym_bullet_list_repeat1] = STATE(33),
    [aux_sym_enumerated_list_repeat1] = STATE(34),
    [aux_sym_field_list_repeat1] = STATE(35),
    [aux_sym_option_list_repeat1] = STATE(36),
    [aux_sym_line_block_repeat1] = STATE(27),
    [aux_sym__footnote_block_repeat1] = STATE(37),
    [aux_sym__citation_block_repeat1] = STATE(38),
    [aux_sym__hyperlink_target_block_repeat1] = STATE(39),
    [aux_sym__anoynymous_hyperlink_target_block_repeat1] = STATE(40),
    [aux_sym__directive_block_repeat1] = STATE(41),
    [aux_sym__substitution_definition_block_repeat1] = STATE(42),
    [aux_sym__comment_block_repeat1] = STATE(43),
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
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_COMMA] = ACTIONS(39),
    [anon_sym_SEMI] = ACTIONS(39),
    [anon_sym_BANG] = ACTIONS(39),
    [anon_sym_QMARK] = ACTIONS(39),
    [anon_sym_BSLASH] = ACTIONS(39),
    [anon_sym_RPAREN] = ACTIONS(39),
    [anon_sym_RBRACK] = ACTIONS(39),
    [anon_sym_RBRACE] = ACTIONS(39),
    [anon_sym_GT] = ACTIONS(39),
    [aux_sym__char_token1] = ACTIONS(37),
    [sym__eol] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(41),
  },
  [2] = {
    [sym__body_elements] = STATE(3),
    [sym_paragraph] = STATE(108),
    [sym__lists] = STATE(108),
    [sym_bullet_list] = STATE(108),
    [sym__bullet_list_item] = STATE(109),
    [sym_enumerated_list] = STATE(108),
    [sym__enumerated_list_item] = STATE(110),
    [sym_field_list] = STATE(108),
    [sym_field] = STATE(111),
    [sym_option_list] = STATE(108),
    [sym_option_list_item] = STATE(112),
    [sym_line_block] = STATE(108),
    [sym__single_line_block] = STATE(113),
    [sym__markup_blocks] = STATE(108),
    [sym__footnote_block] = STATE(108),
    [sym_footnote] = STATE(114),
    [sym__citation_block] = STATE(108),
    [sym_citation] = STATE(115),
    [sym__hyperlink_target_block] = STATE(108),
    [sym_target] = STATE(116),
    [sym__anoynymous_hyperlink_target_block] = STATE(108),
    [sym__anonymous_target] = STATE(117),
    [sym__directive_block] = STATE(108),
    [sym_directive] = STATE(118),
    [sym__substitution_definition_block] = STATE(108),
    [sym_substitution_definition] = STATE(133),
    [sym__comment_block] = STATE(108),
    [sym_comment] = STATE(134),
    [aux_sym__text_body] = STATE(8),
    [sym__char] = STATE(8),
    [sym__inline_markup_block] = STATE(8),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_paragraph_repeat1] = STATE(7),
    [aux_sym_bullet_list_repeat1] = STATE(33),
    [aux_sym_enumerated_list_repeat1] = STATE(34),
    [aux_sym_field_list_repeat1] = STATE(35),
    [aux_sym_option_list_repeat1] = STATE(36),
    [aux_sym_line_block_repeat1] = STATE(27),
    [aux_sym__footnote_block_repeat1] = STATE(37),
    [aux_sym__citation_block_repeat1] = STATE(38),
    [aux_sym__hyperlink_target_block_repeat1] = STATE(39),
    [aux_sym__anoynymous_hyperlink_target_block_repeat1] = STATE(40),
    [aux_sym__directive_block_repeat1] = STATE(41),
    [aux_sym__substitution_definition_block_repeat1] = STATE(42),
    [aux_sym__comment_block_repeat1] = STATE(43),
    [ts_builtin_sym_end] = ACTIONS(43),
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
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_COMMA] = ACTIONS(39),
    [anon_sym_SEMI] = ACTIONS(39),
    [anon_sym_BANG] = ACTIONS(39),
    [anon_sym_QMARK] = ACTIONS(39),
    [anon_sym_BSLASH] = ACTIONS(39),
    [anon_sym_RPAREN] = ACTIONS(39),
    [anon_sym_RBRACK] = ACTIONS(39),
    [anon_sym_RBRACE] = ACTIONS(39),
    [anon_sym_GT] = ACTIONS(39),
    [aux_sym__char_token1] = ACTIONS(37),
    [sym__eol] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(45),
  },
  [3] = {
    [sym__body_elements] = STATE(3),
    [sym_paragraph] = STATE(108),
    [sym__lists] = STATE(108),
    [sym_bullet_list] = STATE(108),
    [sym__bullet_list_item] = STATE(109),
    [sym_enumerated_list] = STATE(108),
    [sym__enumerated_list_item] = STATE(110),
    [sym_field_list] = STATE(108),
    [sym_field] = STATE(111),
    [sym_option_list] = STATE(108),
    [sym_option_list_item] = STATE(112),
    [sym_line_block] = STATE(108),
    [sym__single_line_block] = STATE(113),
    [sym__markup_blocks] = STATE(108),
    [sym__footnote_block] = STATE(108),
    [sym_footnote] = STATE(114),
    [sym__citation_block] = STATE(108),
    [sym_citation] = STATE(115),
    [sym__hyperlink_target_block] = STATE(108),
    [sym_target] = STATE(116),
    [sym__anoynymous_hyperlink_target_block] = STATE(108),
    [sym__anonymous_target] = STATE(117),
    [sym__directive_block] = STATE(108),
    [sym_directive] = STATE(118),
    [sym__substitution_definition_block] = STATE(108),
    [sym_substitution_definition] = STATE(133),
    [sym__comment_block] = STATE(108),
    [sym_comment] = STATE(134),
    [aux_sym__text_body] = STATE(8),
    [sym__char] = STATE(8),
    [sym__inline_markup_block] = STATE(8),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_paragraph_repeat1] = STATE(7),
    [aux_sym_bullet_list_repeat1] = STATE(33),
    [aux_sym_enumerated_list_repeat1] = STATE(34),
    [aux_sym_field_list_repeat1] = STATE(35),
    [aux_sym_option_list_repeat1] = STATE(36),
    [aux_sym_line_block_repeat1] = STATE(27),
    [aux_sym__footnote_block_repeat1] = STATE(37),
    [aux_sym__citation_block_repeat1] = STATE(38),
    [aux_sym__hyperlink_target_block_repeat1] = STATE(39),
    [aux_sym__anoynymous_hyperlink_target_block_repeat1] = STATE(40),
    [aux_sym__directive_block_repeat1] = STATE(41),
    [aux_sym__substitution_definition_block_repeat1] = STATE(42),
    [aux_sym__comment_block_repeat1] = STATE(43),
    [ts_builtin_sym_end] = ACTIONS(47),
    [sym__char_bullet] = ACTIONS(49),
    [aux_sym__enumerated_list_item_token1] = ACTIONS(52),
    [aux_sym_field_token1] = ACTIONS(55),
    [aux_sym_option_list_item_token1] = ACTIONS(58),
    [anon_sym_PIPE] = ACTIONS(61),
    [aux_sym__single_line_block_token1] = ACTIONS(64),
    [aux_sym_footnote_token1] = ACTIONS(67),
    [aux_sym_citation_token1] = ACTIONS(70),
    [aux_sym_target_token1] = ACTIONS(73),
    [anon_sym___] = ACTIONS(76),
    [aux_sym_directive_token1] = ACTIONS(79),
    [anon_sym_] = ACTIONS(82),
    [anon_sym_TAB] = ACTIONS(82),
    [anon_sym_2] = ACTIONS(82),
    [anon_sym_3] = ACTIONS(82),
    [aux_sym_substitution_definition_token1] = ACTIONS(85),
    [anon_sym_DOT_DOT] = ACTIONS(88),
    [anon_sym_DASH] = ACTIONS(91),
    [anon_sym_COLON] = ACTIONS(91),
    [anon_sym_SLASH] = ACTIONS(91),
    [anon_sym_SQUOTE] = ACTIONS(82),
    [anon_sym_DQUOTE] = ACTIONS(82),
    [anon_sym_LT] = ACTIONS(82),
    [anon_sym_LPAREN] = ACTIONS(82),
    [anon_sym_LBRACK] = ACTIONS(82),
    [anon_sym_LBRACE] = ACTIONS(82),
    [anon_sym_DOT] = ACTIONS(94),
    [anon_sym_COMMA] = ACTIONS(97),
    [anon_sym_SEMI] = ACTIONS(97),
    [anon_sym_BANG] = ACTIONS(97),
    [anon_sym_QMARK] = ACTIONS(97),
    [anon_sym_BSLASH] = ACTIONS(97),
    [anon_sym_RPAREN] = ACTIONS(97),
    [anon_sym_RBRACK] = ACTIONS(97),
    [anon_sym_RBRACE] = ACTIONS(97),
    [anon_sym_GT] = ACTIONS(97),
    [aux_sym__char_token1] = ACTIONS(94),
    [sym__eol] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(100),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(105), 8,
      anon_sym_PIPE,
      aux_sym_citation_token1,
      anon_sym_DOT_DOT,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_DOT,
      aux_sym__char_token1,
    ACTIONS(103), 31,
      sym__blank_line,
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
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BANG,
      anon_sym_QMARK,
      anon_sym_BSLASH,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
  [47] = 5,
    STATE(18), 2,
      sym__inline_markup,
      sym_reference,
    ACTIONS(113), 3,
      aux_sym_reference_token1,
      aux_sym_reference_token2,
      aux_sym_reference_token3,
    ACTIONS(107), 4,
      sym__eol,
      sym__blank_line,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(111), 7,
      sym_emphasis,
      sym_strong,
      sym_interpreted_text,
      sym_literal,
      sym_substitution_reference,
      sym__inline_target,
      sym_footnote_reference,
    ACTIONS(109), 22,
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
  [96] = 5,
    STATE(17), 2,
      sym__inline_markup,
      sym_reference,
    ACTIONS(107), 3,
      sym__eol,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(113), 3,
      aux_sym_reference_token1,
      aux_sym_reference_token2,
      aux_sym_reference_token3,
    ACTIONS(115), 7,
      sym_emphasis,
      sym_strong,
      sym_interpreted_text,
      sym_literal,
      sym_substitution_reference,
      sym__inline_target,
      sym_footnote_reference,
    ACTIONS(109), 22,
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
  [144] = 6,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(119), 1,
      aux_sym__char_token1,
    STATE(9), 1,
      aux_sym_paragraph_repeat1,
    STATE(10), 3,
      aux_sym__text_body,
      sym__char,
      sym__inline_markup_block,
    ACTIONS(117), 10,
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
  [186] = 6,
    ACTIONS(123), 1,
      aux_sym__char_token1,
    ACTIONS(125), 1,
      sym__eol,
    ACTIONS(127), 1,
      sym__blank_line,
    STATE(11), 3,
      aux_sym__text_body,
      sym__char,
      sym__inline_markup_block,
    ACTIONS(121), 10,
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
  [228] = 6,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(135), 1,
      aux_sym__char_token1,
    STATE(9), 1,
      aux_sym_paragraph_repeat1,
    STATE(13), 3,
      aux_sym__text_body,
      sym__char,
      sym__inline_markup_block,
    ACTIONS(132), 10,
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
    ACTIONS(129), 13,
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
  [270] = 6,
    ACTIONS(123), 1,
      aux_sym__char_token1,
    ACTIONS(125), 1,
      sym__eol,
    ACTIONS(138), 1,
      sym__blank_line,
    STATE(11), 3,
      aux_sym__text_body,
      sym__char,
      sym__inline_markup_block,
    ACTIONS(121), 10,
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
  [312] = 5,
    ACTIONS(146), 1,
      aux_sym__char_token1,
    ACTIONS(149), 2,
      sym__eol,
      sym__blank_line,
    STATE(11), 3,
      aux_sym__text_body,
      sym__char,
      sym__inline_markup_block,
    ACTIONS(143), 10,
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
    ACTIONS(140), 13,
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
  [352] = 5,
    ACTIONS(149), 1,
      sym__eol,
    ACTIONS(157), 1,
      aux_sym__char_token1,
    STATE(12), 3,
      aux_sym__text_body,
      sym__char,
      sym__inline_markup_block,
    ACTIONS(154), 10,
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
  [391] = 5,
    ACTIONS(125), 1,
      sym__eol,
    ACTIONS(164), 1,
      aux_sym__char_token1,
    STATE(12), 3,
      aux_sym__text_body,
      sym__char,
      sym__inline_markup_block,
    ACTIONS(162), 10,
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
    ACTIONS(160), 13,
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
  [430] = 2,
    ACTIONS(168), 1,
      aux_sym__char_token1,
    ACTIONS(166), 25,
      sym__eol,
      sym__blank_line,
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
  [461] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(172), 1,
      aux_sym__char_token1,
    ACTIONS(170), 23,
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
  [493] = 2,
    ACTIONS(168), 1,
      aux_sym__char_token1,
    ACTIONS(166), 24,
      sym__eol,
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
  [523] = 1,
    ACTIONS(174), 20,
      sym__eol,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
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
  [546] = 1,
    ACTIONS(176), 20,
      sym__eol,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
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
  [569] = 1,
    ACTIONS(178), 20,
      sym__eol,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
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
  [592] = 2,
    ACTIONS(182), 2,
      sym__eol,
      sym__blank_line,
    ACTIONS(180), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [603] = 2,
    ACTIONS(186), 2,
      sym__eol,
      sym__blank_line,
    ACTIONS(184), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [614] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(188), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [624] = 2,
    ACTIONS(186), 1,
      sym__eol,
    ACTIONS(190), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [634] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(192), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [644] = 2,
    ACTIONS(182), 1,
      sym__eol,
    ACTIONS(194), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [654] = 5,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(196), 1,
      anon_sym_PIPE,
    ACTIONS(199), 1,
      aux_sym__single_line_block_token1,
    STATE(26), 1,
      aux_sym_line_block_repeat1,
    STATE(151), 1,
      sym__single_line_block,
  [670] = 5,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(17), 1,
      aux_sym__single_line_block_token1,
    ACTIONS(202), 1,
      anon_sym_PIPE,
    STATE(26), 1,
      aux_sym_line_block_repeat1,
    STATE(100), 1,
      sym__single_line_block,
  [686] = 3,
    ACTIONS(204), 1,
      aux_sym__bullet_list_item_token1,
    STATE(31), 1,
      aux_sym__bullet_list_item_repeat1,
    ACTIONS(206), 2,
      sym__eol,
      sym__blank_line,
  [697] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(208), 1,
      aux_sym__enumerated_list_item_token1,
    STATE(29), 1,
      aux_sym_enumerated_list_repeat1,
    STATE(154), 1,
      sym__enumerated_list_item,
  [710] = 3,
    ACTIONS(204), 1,
      aux_sym__bullet_list_item_token1,
    STATE(31), 1,
      aux_sym__bullet_list_item_repeat1,
    ACTIONS(211), 2,
      sym__eol,
      sym__blank_line,
  [721] = 3,
    ACTIONS(213), 1,
      aux_sym__bullet_list_item_token1,
    STATE(31), 1,
      aux_sym__bullet_list_item_repeat1,
    ACTIONS(216), 2,
      sym__eol,
      sym__blank_line,
  [732] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(218), 1,
      anon_sym_DOT_DOT,
    STATE(32), 1,
      aux_sym__comment_block_repeat1,
    STATE(144), 1,
      sym_comment,
  [745] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(7), 1,
      sym__char_bullet,
    STATE(60), 1,
      aux_sym_bullet_list_repeat1,
    STATE(97), 1,
      sym__bullet_list_item,
  [758] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(9), 1,
      aux_sym__enumerated_list_item_token1,
    STATE(29), 1,
      aux_sym_enumerated_list_repeat1,
    STATE(123), 1,
      sym__enumerated_list_item,
  [771] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(11), 1,
      aux_sym_field_token1,
    STATE(58), 1,
      aux_sym_field_list_repeat1,
    STATE(120), 1,
      sym_field,
  [784] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(13), 1,
      aux_sym_option_list_item_token1,
    STATE(57), 1,
      aux_sym_option_list_repeat1,
    STATE(119), 1,
      sym_option_list_item,
  [797] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(19), 1,
      aux_sym_footnote_token1,
    STATE(56), 1,
      aux_sym__footnote_block_repeat1,
    STATE(104), 1,
      sym_footnote,
  [810] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(221), 1,
      aux_sym_citation_token1,
    STATE(55), 1,
      aux_sym__citation_block_repeat1,
    STATE(102), 1,
      sym_citation,
  [823] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(23), 1,
      aux_sym_target_token1,
    STATE(54), 1,
      aux_sym__hyperlink_target_block_repeat1,
    STATE(140), 1,
      sym_target,
  [836] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(25), 1,
      anon_sym___,
    STATE(53), 1,
      aux_sym__anoynymous_hyperlink_target_block_repeat1,
    STATE(101), 1,
      sym__anonymous_target,
  [849] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(27), 1,
      aux_sym_directive_token1,
    STATE(52), 1,
      aux_sym__directive_block_repeat1,
    STATE(103), 1,
      sym_directive,
  [862] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(31), 1,
      aux_sym_substitution_definition_token1,
    STATE(51), 1,
      aux_sym__substitution_definition_block_repeat1,
    STATE(105), 1,
      sym_substitution_definition,
  [875] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(223), 1,
      anon_sym_DOT_DOT,
    STATE(32), 1,
      aux_sym__comment_block_repeat1,
    STATE(99), 1,
      sym_comment,
  [888] = 3,
    ACTIONS(204), 1,
      aux_sym__bullet_list_item_token1,
    STATE(31), 1,
      aux_sym__bullet_list_item_repeat1,
    ACTIONS(225), 2,
      sym__eol,
      sym__blank_line,
  [899] = 3,
    ACTIONS(204), 1,
      aux_sym__bullet_list_item_token1,
    STATE(31), 1,
      aux_sym__bullet_list_item_repeat1,
    ACTIONS(227), 2,
      sym__eol,
      sym__blank_line,
  [910] = 3,
    ACTIONS(204), 1,
      aux_sym__bullet_list_item_token1,
    STATE(31), 1,
      aux_sym__bullet_list_item_repeat1,
    ACTIONS(229), 2,
      sym__eol,
      sym__blank_line,
  [921] = 3,
    ACTIONS(204), 1,
      aux_sym__bullet_list_item_token1,
    STATE(31), 1,
      aux_sym__bullet_list_item_repeat1,
    ACTIONS(231), 2,
      sym__eol,
      sym__blank_line,
  [932] = 3,
    ACTIONS(204), 1,
      aux_sym__bullet_list_item_token1,
    STATE(31), 1,
      aux_sym__bullet_list_item_repeat1,
    ACTIONS(233), 2,
      sym__eol,
      sym__blank_line,
  [943] = 3,
    ACTIONS(204), 1,
      aux_sym__bullet_list_item_token1,
    STATE(31), 1,
      aux_sym__bullet_list_item_repeat1,
    ACTIONS(235), 2,
      sym__eol,
      sym__blank_line,
  [954] = 3,
    ACTIONS(204), 1,
      aux_sym__bullet_list_item_token1,
    STATE(31), 1,
      aux_sym__bullet_list_item_repeat1,
    ACTIONS(237), 2,
      sym__eol,
      sym__blank_line,
  [965] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(239), 1,
      aux_sym_substitution_definition_token1,
    STATE(51), 1,
      aux_sym__substitution_definition_block_repeat1,
    STATE(145), 1,
      sym_substitution_definition,
  [978] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(242), 1,
      aux_sym_directive_token1,
    STATE(52), 1,
      aux_sym__directive_block_repeat1,
    STATE(146), 1,
      sym_directive,
  [991] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(245), 1,
      anon_sym___,
    STATE(53), 1,
      aux_sym__anoynymous_hyperlink_target_block_repeat1,
    STATE(147), 1,
      sym__anonymous_target,
  [1004] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(248), 1,
      aux_sym_target_token1,
    STATE(54), 1,
      aux_sym__hyperlink_target_block_repeat1,
    STATE(148), 1,
      sym_target,
  [1017] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(251), 1,
      aux_sym_citation_token1,
    STATE(55), 1,
      aux_sym__citation_block_repeat1,
    STATE(149), 1,
      sym_citation,
  [1030] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(254), 1,
      aux_sym_footnote_token1,
    STATE(56), 1,
      aux_sym__footnote_block_repeat1,
    STATE(150), 1,
      sym_footnote,
  [1043] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(257), 1,
      aux_sym_option_list_item_token1,
    STATE(57), 1,
      aux_sym_option_list_repeat1,
    STATE(152), 1,
      sym_option_list_item,
  [1056] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(260), 1,
      aux_sym_field_token1,
    STATE(58), 1,
      aux_sym_field_list_repeat1,
    STATE(153), 1,
      sym_field,
  [1069] = 3,
    ACTIONS(204), 1,
      aux_sym__bullet_list_item_token1,
    STATE(31), 1,
      aux_sym__bullet_list_item_repeat1,
    ACTIONS(263), 2,
      sym__eol,
      sym__blank_line,
  [1080] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(265), 1,
      sym__char_bullet,
    STATE(60), 1,
      aux_sym_bullet_list_repeat1,
    STATE(155), 1,
      sym__bullet_list_item,
  [1093] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(268), 1,
      aux_sym__bullet_list_item_token1,
    STATE(65), 1,
      aux_sym__bullet_list_item_repeat1,
  [1103] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(270), 1,
      aux_sym__bullet_list_item_token1,
    STATE(68), 1,
      aux_sym__bullet_list_item_repeat1,
  [1113] = 3,
    ACTIONS(206), 1,
      sym__eol,
    ACTIONS(272), 1,
      aux_sym__bullet_list_item_token1,
    STATE(90), 1,
      aux_sym__bullet_list_item_repeat1,
  [1123] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(274), 1,
      aux_sym__bullet_list_item_token1,
    STATE(49), 1,
      aux_sym__bullet_list_item_repeat1,
  [1133] = 3,
    ACTIONS(231), 1,
      sym__eol,
    ACTIONS(272), 1,
      aux_sym__bullet_list_item_token1,
    STATE(90), 1,
      aux_sym__bullet_list_item_repeat1,
  [1143] = 3,
    ACTIONS(229), 1,
      sym__eol,
    ACTIONS(272), 1,
      aux_sym__bullet_list_item_token1,
    STATE(90), 1,
      aux_sym__bullet_list_item_repeat1,
  [1153] = 3,
    ACTIONS(227), 1,
      sym__eol,
    ACTIONS(272), 1,
      aux_sym__bullet_list_item_token1,
    STATE(90), 1,
      aux_sym__bullet_list_item_repeat1,
  [1163] = 3,
    ACTIONS(225), 1,
      sym__eol,
    ACTIONS(272), 1,
      aux_sym__bullet_list_item_token1,
    STATE(90), 1,
      aux_sym__bullet_list_item_repeat1,
  [1173] = 3,
    ACTIONS(237), 1,
      sym__eol,
    ACTIONS(272), 1,
      aux_sym__bullet_list_item_token1,
    STATE(90), 1,
      aux_sym__bullet_list_item_repeat1,
  [1183] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(276), 1,
      aux_sym__bullet_list_item_token1,
    STATE(78), 1,
      aux_sym__bullet_list_item_repeat1,
  [1193] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(278), 1,
      aux_sym__bullet_list_item_token1,
    STATE(69), 1,
      aux_sym__bullet_list_item_repeat1,
  [1203] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(280), 1,
      aux_sym__embed_directive_token1,
    STATE(141), 1,
      sym__embed_directive,
  [1213] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(282), 1,
      aux_sym__embed_directive_token1,
    STATE(138), 1,
      sym__embed_directive,
  [1223] = 2,
    ACTIONS(284), 1,
      aux_sym_target_token2,
    ACTIONS(286), 2,
      sym__eol,
      sym__blank_line,
  [1231] = 2,
    ACTIONS(288), 1,
      aux_sym_target_token2,
    ACTIONS(290), 2,
      sym__eol,
      sym__blank_line,
  [1239] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(292), 1,
      aux_sym__bullet_list_item_token1,
    STATE(50), 1,
      aux_sym__bullet_list_item_repeat1,
  [1249] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(294), 1,
      anon_sym_PIPE,
    ACTIONS(296), 1,
      aux_sym__single_line_block_token1,
  [1259] = 3,
    ACTIONS(235), 1,
      sym__eol,
    ACTIONS(272), 1,
      aux_sym__bullet_list_item_token1,
    STATE(90), 1,
      aux_sym__bullet_list_item_repeat1,
  [1269] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(298), 1,
      aux_sym__bullet_list_item_token1,
    STATE(63), 1,
      aux_sym__bullet_list_item_repeat1,
  [1279] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(300), 1,
      aux_sym__bullet_list_item_token1,
    STATE(91), 1,
      aux_sym__bullet_list_item_repeat1,
  [1289] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(302), 1,
      aux_sym__bullet_list_item_token1,
    STATE(59), 1,
      aux_sym__bullet_list_item_repeat1,
  [1299] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(304), 1,
      aux_sym__bullet_list_item_token1,
    STATE(48), 1,
      aux_sym__bullet_list_item_repeat1,
  [1309] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(306), 1,
      aux_sym__bullet_list_item_token1,
    STATE(28), 1,
      aux_sym__bullet_list_item_repeat1,
  [1319] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(308), 1,
      aux_sym__bullet_list_item_token1,
    STATE(92), 1,
      aux_sym__bullet_list_item_repeat1,
  [1329] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(310), 1,
      aux_sym__bullet_list_item_token1,
    STATE(47), 1,
      aux_sym__bullet_list_item_repeat1,
  [1339] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(312), 1,
      aux_sym__bullet_list_item_token1,
    STATE(66), 1,
      aux_sym__bullet_list_item_repeat1,
  [1349] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(314), 1,
      aux_sym__bullet_list_item_token1,
    STATE(67), 1,
      aux_sym__bullet_list_item_repeat1,
  [1359] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(316), 1,
      aux_sym__bullet_list_item_token1,
    STATE(44), 1,
      aux_sym__bullet_list_item_repeat1,
  [1369] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(318), 1,
      aux_sym__bullet_list_item_token1,
    STATE(30), 1,
      aux_sym__bullet_list_item_repeat1,
  [1379] = 3,
    ACTIONS(216), 1,
      sym__eol,
    ACTIONS(320), 1,
      aux_sym__bullet_list_item_token1,
    STATE(90), 1,
      aux_sym__bullet_list_item_repeat1,
  [1389] = 3,
    ACTIONS(211), 1,
      sym__eol,
    ACTIONS(272), 1,
      aux_sym__bullet_list_item_token1,
    STATE(90), 1,
      aux_sym__bullet_list_item_repeat1,
  [1399] = 3,
    ACTIONS(233), 1,
      sym__eol,
    ACTIONS(272), 1,
      aux_sym__bullet_list_item_token1,
    STATE(90), 1,
      aux_sym__bullet_list_item_repeat1,
  [1409] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(323), 1,
      aux_sym__bullet_list_item_token1,
    STATE(94), 1,
      aux_sym__bullet_list_item_repeat1,
  [1419] = 3,
    ACTIONS(263), 1,
      sym__eol,
    ACTIONS(272), 1,
      aux_sym__bullet_list_item_token1,
    STATE(90), 1,
      aux_sym__bullet_list_item_repeat1,
  [1429] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(325), 1,
      aux_sym__bullet_list_item_token1,
    STATE(46), 1,
      aux_sym__bullet_list_item_repeat1,
  [1439] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(327), 1,
      aux_sym__bullet_list_item_token1,
    STATE(45), 1,
      aux_sym__bullet_list_item_repeat1,
  [1449] = 2,
    ACTIONS(329), 1,
      sym__eol,
    ACTIONS(331), 1,
      sym__blank_line,
  [1456] = 1,
    ACTIONS(333), 2,
      sym__eol,
      sym__blank_line,
  [1461] = 2,
    ACTIONS(335), 1,
      sym__eol,
    ACTIONS(337), 1,
      sym__blank_line,
  [1468] = 2,
    ACTIONS(339), 1,
      sym__eol,
    ACTIONS(341), 1,
      sym__blank_line,
  [1475] = 2,
    ACTIONS(343), 1,
      sym__eol,
    ACTIONS(345), 1,
      sym__blank_line,
  [1482] = 2,
    ACTIONS(347), 1,
      sym__eol,
    ACTIONS(349), 1,
      sym__blank_line,
  [1489] = 2,
    ACTIONS(351), 1,
      sym__eol,
    ACTIONS(353), 1,
      sym__blank_line,
  [1496] = 2,
    ACTIONS(355), 1,
      sym__eol,
    ACTIONS(357), 1,
      sym__blank_line,
  [1503] = 2,
    ACTIONS(359), 1,
      sym__eol,
    ACTIONS(361), 1,
      sym__blank_line,
  [1510] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(363), 1,
      ts_builtin_sym_end,
  [1517] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(365), 1,
      anon_sym_COLON_COLON,
  [1524] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(367), 1,
      sym__blank_line,
  [1531] = 2,
    ACTIONS(329), 1,
      sym__eol,
    ACTIONS(369), 1,
      sym__blank_line,
  [1538] = 2,
    ACTIONS(371), 1,
      sym__eol,
    ACTIONS(373), 1,
      sym__blank_line,
  [1545] = 2,
    ACTIONS(375), 1,
      sym__eol,
    ACTIONS(377), 1,
      sym__blank_line,
  [1552] = 2,
    ACTIONS(379), 1,
      sym__eol,
    ACTIONS(381), 1,
      sym__blank_line,
  [1559] = 2,
    ACTIONS(339), 1,
      sym__eol,
    ACTIONS(383), 1,
      sym__blank_line,
  [1566] = 2,
    ACTIONS(355), 1,
      sym__eol,
    ACTIONS(385), 1,
      sym__blank_line,
  [1573] = 2,
    ACTIONS(347), 1,
      sym__eol,
    ACTIONS(387), 1,
      sym__blank_line,
  [1580] = 2,
    ACTIONS(389), 1,
      sym__eol,
    ACTIONS(391), 1,
      sym__blank_line,
  [1587] = 2,
    ACTIONS(343), 1,
      sym__eol,
    ACTIONS(393), 1,
      sym__blank_line,
  [1594] = 2,
    ACTIONS(351), 1,
      sym__eol,
    ACTIONS(395), 1,
      sym__blank_line,
  [1601] = 2,
    ACTIONS(379), 1,
      sym__eol,
    ACTIONS(397), 1,
      sym__blank_line,
  [1608] = 2,
    ACTIONS(375), 1,
      sym__eol,
    ACTIONS(399), 1,
      sym__blank_line,
  [1615] = 2,
    ACTIONS(290), 1,
      sym__eol,
    ACTIONS(401), 1,
      aux_sym_target_token2,
  [1622] = 2,
    ACTIONS(286), 1,
      sym__eol,
    ACTIONS(403), 1,
      aux_sym_target_token2,
  [1629] = 2,
    ACTIONS(371), 1,
      sym__eol,
    ACTIONS(405), 1,
      sym__blank_line,
  [1636] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(407), 1,
      anon_sym_DOT_DOT,
  [1643] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(409), 1,
      aux_sym_substitution_definition_token1,
  [1650] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(411), 1,
      aux_sym_directive_token1,
  [1657] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(413), 1,
      anon_sym___,
  [1664] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(415), 1,
      aux_sym_target_token1,
  [1671] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(417), 1,
      aux_sym_citation_token1,
  [1678] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(419), 1,
      aux_sym_footnote_token1,
  [1685] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(421), 1,
      aux_sym_option_list_item_token1,
  [1692] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(423), 1,
      aux_sym_field_token1,
  [1699] = 2,
    ACTIONS(359), 1,
      sym__eol,
    ACTIONS(425), 1,
      sym__blank_line,
  [1706] = 2,
    ACTIONS(335), 1,
      sym__eol,
    ACTIONS(427), 1,
      sym__blank_line,
  [1713] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(429), 1,
      aux_sym__enumerated_list_item_token1,
  [1720] = 1,
    ACTIONS(431), 2,
      sym__eol,
      sym__blank_line,
  [1725] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(433), 1,
      sym__char_bullet,
  [1732] = 1,
    ACTIONS(435), 2,
      sym__eol,
      sym__blank_line,
  [1737] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(437), 1,
      anon_sym_COLON_COLON,
  [1744] = 2,
    ACTIONS(389), 1,
      sym__eol,
    ACTIONS(439), 1,
      sym__blank_line,
  [1751] = 1,
    ACTIONS(435), 1,
      sym__eol,
  [1755] = 1,
    ACTIONS(333), 1,
      sym__eol,
  [1759] = 1,
    ACTIONS(431), 1,
      sym__eol,
  [1763] = 1,
    ACTIONS(335), 1,
      sym__eol,
  [1767] = 1,
    ACTIONS(359), 1,
      sym__eol,
  [1771] = 1,
    ACTIONS(351), 1,
      sym__eol,
  [1775] = 1,
    ACTIONS(343), 1,
      sym__eol,
  [1779] = 1,
    ACTIONS(389), 1,
      sym__eol,
  [1783] = 1,
    ACTIONS(347), 1,
      sym__eol,
  [1787] = 1,
    ACTIONS(355), 1,
      sym__eol,
  [1791] = 1,
    ACTIONS(339), 1,
      sym__eol,
  [1795] = 1,
    ACTIONS(379), 1,
      sym__eol,
  [1799] = 1,
    ACTIONS(375), 1,
      sym__eol,
  [1803] = 1,
    ACTIONS(371), 1,
      sym__eol,
  [1807] = 1,
    ACTIONS(329), 1,
      sym__eol,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 47,
  [SMALL_STATE(6)] = 96,
  [SMALL_STATE(7)] = 144,
  [SMALL_STATE(8)] = 186,
  [SMALL_STATE(9)] = 228,
  [SMALL_STATE(10)] = 270,
  [SMALL_STATE(11)] = 312,
  [SMALL_STATE(12)] = 352,
  [SMALL_STATE(13)] = 391,
  [SMALL_STATE(14)] = 430,
  [SMALL_STATE(15)] = 461,
  [SMALL_STATE(16)] = 493,
  [SMALL_STATE(17)] = 523,
  [SMALL_STATE(18)] = 546,
  [SMALL_STATE(19)] = 569,
  [SMALL_STATE(20)] = 592,
  [SMALL_STATE(21)] = 603,
  [SMALL_STATE(22)] = 614,
  [SMALL_STATE(23)] = 624,
  [SMALL_STATE(24)] = 634,
  [SMALL_STATE(25)] = 644,
  [SMALL_STATE(26)] = 654,
  [SMALL_STATE(27)] = 670,
  [SMALL_STATE(28)] = 686,
  [SMALL_STATE(29)] = 697,
  [SMALL_STATE(30)] = 710,
  [SMALL_STATE(31)] = 721,
  [SMALL_STATE(32)] = 732,
  [SMALL_STATE(33)] = 745,
  [SMALL_STATE(34)] = 758,
  [SMALL_STATE(35)] = 771,
  [SMALL_STATE(36)] = 784,
  [SMALL_STATE(37)] = 797,
  [SMALL_STATE(38)] = 810,
  [SMALL_STATE(39)] = 823,
  [SMALL_STATE(40)] = 836,
  [SMALL_STATE(41)] = 849,
  [SMALL_STATE(42)] = 862,
  [SMALL_STATE(43)] = 875,
  [SMALL_STATE(44)] = 888,
  [SMALL_STATE(45)] = 899,
  [SMALL_STATE(46)] = 910,
  [SMALL_STATE(47)] = 921,
  [SMALL_STATE(48)] = 932,
  [SMALL_STATE(49)] = 943,
  [SMALL_STATE(50)] = 954,
  [SMALL_STATE(51)] = 965,
  [SMALL_STATE(52)] = 978,
  [SMALL_STATE(53)] = 991,
  [SMALL_STATE(54)] = 1004,
  [SMALL_STATE(55)] = 1017,
  [SMALL_STATE(56)] = 1030,
  [SMALL_STATE(57)] = 1043,
  [SMALL_STATE(58)] = 1056,
  [SMALL_STATE(59)] = 1069,
  [SMALL_STATE(60)] = 1080,
  [SMALL_STATE(61)] = 1093,
  [SMALL_STATE(62)] = 1103,
  [SMALL_STATE(63)] = 1113,
  [SMALL_STATE(64)] = 1123,
  [SMALL_STATE(65)] = 1133,
  [SMALL_STATE(66)] = 1143,
  [SMALL_STATE(67)] = 1153,
  [SMALL_STATE(68)] = 1163,
  [SMALL_STATE(69)] = 1173,
  [SMALL_STATE(70)] = 1183,
  [SMALL_STATE(71)] = 1193,
  [SMALL_STATE(72)] = 1203,
  [SMALL_STATE(73)] = 1213,
  [SMALL_STATE(74)] = 1223,
  [SMALL_STATE(75)] = 1231,
  [SMALL_STATE(76)] = 1239,
  [SMALL_STATE(77)] = 1249,
  [SMALL_STATE(78)] = 1259,
  [SMALL_STATE(79)] = 1269,
  [SMALL_STATE(80)] = 1279,
  [SMALL_STATE(81)] = 1289,
  [SMALL_STATE(82)] = 1299,
  [SMALL_STATE(83)] = 1309,
  [SMALL_STATE(84)] = 1319,
  [SMALL_STATE(85)] = 1329,
  [SMALL_STATE(86)] = 1339,
  [SMALL_STATE(87)] = 1349,
  [SMALL_STATE(88)] = 1359,
  [SMALL_STATE(89)] = 1369,
  [SMALL_STATE(90)] = 1379,
  [SMALL_STATE(91)] = 1389,
  [SMALL_STATE(92)] = 1399,
  [SMALL_STATE(93)] = 1409,
  [SMALL_STATE(94)] = 1419,
  [SMALL_STATE(95)] = 1429,
  [SMALL_STATE(96)] = 1439,
  [SMALL_STATE(97)] = 1449,
  [SMALL_STATE(98)] = 1456,
  [SMALL_STATE(99)] = 1461,
  [SMALL_STATE(100)] = 1468,
  [SMALL_STATE(101)] = 1475,
  [SMALL_STATE(102)] = 1482,
  [SMALL_STATE(103)] = 1489,
  [SMALL_STATE(104)] = 1496,
  [SMALL_STATE(105)] = 1503,
  [SMALL_STATE(106)] = 1510,
  [SMALL_STATE(107)] = 1517,
  [SMALL_STATE(108)] = 1524,
  [SMALL_STATE(109)] = 1531,
  [SMALL_STATE(110)] = 1538,
  [SMALL_STATE(111)] = 1545,
  [SMALL_STATE(112)] = 1552,
  [SMALL_STATE(113)] = 1559,
  [SMALL_STATE(114)] = 1566,
  [SMALL_STATE(115)] = 1573,
  [SMALL_STATE(116)] = 1580,
  [SMALL_STATE(117)] = 1587,
  [SMALL_STATE(118)] = 1594,
  [SMALL_STATE(119)] = 1601,
  [SMALL_STATE(120)] = 1608,
  [SMALL_STATE(121)] = 1615,
  [SMALL_STATE(122)] = 1622,
  [SMALL_STATE(123)] = 1629,
  [SMALL_STATE(124)] = 1636,
  [SMALL_STATE(125)] = 1643,
  [SMALL_STATE(126)] = 1650,
  [SMALL_STATE(127)] = 1657,
  [SMALL_STATE(128)] = 1664,
  [SMALL_STATE(129)] = 1671,
  [SMALL_STATE(130)] = 1678,
  [SMALL_STATE(131)] = 1685,
  [SMALL_STATE(132)] = 1692,
  [SMALL_STATE(133)] = 1699,
  [SMALL_STATE(134)] = 1706,
  [SMALL_STATE(135)] = 1713,
  [SMALL_STATE(136)] = 1720,
  [SMALL_STATE(137)] = 1725,
  [SMALL_STATE(138)] = 1732,
  [SMALL_STATE(139)] = 1737,
  [SMALL_STATE(140)] = 1744,
  [SMALL_STATE(141)] = 1751,
  [SMALL_STATE(142)] = 1755,
  [SMALL_STATE(143)] = 1759,
  [SMALL_STATE(144)] = 1763,
  [SMALL_STATE(145)] = 1767,
  [SMALL_STATE(146)] = 1771,
  [SMALL_STATE(147)] = 1775,
  [SMALL_STATE(148)] = 1779,
  [SMALL_STATE(149)] = 1783,
  [SMALL_STATE(150)] = 1787,
  [SMALL_STATE(151)] = 1791,
  [SMALL_STATE(152)] = 1795,
  [SMALL_STATE(153)] = 1799,
  [SMALL_STATE(154)] = 1803,
  [SMALL_STATE(155)] = 1807,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(88),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(96),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(95),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(85),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(113),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(83),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(64),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(76),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(75),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(74),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(21),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(5),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(73),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(20),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(5),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(8),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(8),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(3),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__body_elements, 2),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__body_elements, 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__char, 1),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__char, 1),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 1),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(6),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(13),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(13),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__text_body, 2), SHIFT_REPEAT(5),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__text_body, 2), SHIFT_REPEAT(11),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_body, 2), SHIFT_REPEAT(11),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__text_body, 2),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__text_body, 2), SHIFT_REPEAT(6),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__text_body, 2), SHIFT_REPEAT(12),
  [157] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_body, 2), SHIFT_REPEAT(12),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_markup_block, 3),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline_markup_block, 3),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 1),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [196] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_block_repeat1, 2), SHIFT_REPEAT(151),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_block_repeat1, 2), SHIFT_REPEAT(79),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_block, 2),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enumerated_list_repeat1, 2), SHIFT_REPEAT(87),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__bullet_list_item_repeat1, 2), SHIFT_REPEAT(31),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__bullet_list_item_repeat1, 2),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_block_repeat1, 2), SHIFT_REPEAT(25),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bullet_list_item, 2),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__enumerated_list_item, 2),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 2),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_list_item, 2),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footnote, 2),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_citation, 2),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__substitution_definition_block_repeat1, 2), SHIFT_REPEAT(72),
  [242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__directive_block_repeat1, 2), SHIFT_REPEAT(23),
  [245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__anoynymous_hyperlink_target_block_repeat1, 2), SHIFT_REPEAT(122),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hyperlink_target_block_repeat1, 2), SHIFT_REPEAT(121),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__citation_block_repeat1, 2), SHIFT_REPEAT(71),
  [254] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__footnote_block_repeat1, 2), SHIFT_REPEAT(70),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_option_list_repeat1, 2), SHIFT_REPEAT(61),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_list_repeat1, 2), SHIFT_REPEAT(86),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__embed_directive, 4),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bullet_list_repeat1, 2), SHIFT_REPEAT(62),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__anonymous_target, 1),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 1),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_line_block_repeat1, 2),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_block_repeat1, 2),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [320] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__bullet_list_item_repeat1, 2), SHIFT_REPEAT(90),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bullet_list, 2, .production_id = 2),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__anonymous_target, 2),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_block, 2),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_block, 2),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__anoynymous_hyperlink_target_block, 2),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__citation_block, 2),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directive_block, 2),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__footnote_block, 2),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__substitution_definition_block, 2),
  [363] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bullet_list, 1, .production_id = 1),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumerated_list, 1, .production_id = 1),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_list, 1),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_list, 1),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_block, 1),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__footnote_block, 1),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__citation_block, 1),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hyperlink_target_block, 1),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__anoynymous_hyperlink_target_block, 1),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directive_block, 1),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_list, 2),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_list, 2),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumerated_list, 2, .production_id = 2),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__comment_block_repeat1, 2),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__substitution_definition_block_repeat1, 2),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__directive_block_repeat1, 2),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__anoynymous_hyperlink_target_block_repeat1, 2),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hyperlink_target_block_repeat1, 2),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__citation_block_repeat1, 2),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__footnote_block_repeat1, 2),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_option_list_repeat1, 2),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_list_repeat1, 2),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__substitution_definition_block, 1),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_block, 1),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enumerated_list_repeat1, 2, .production_id = 1),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 2),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bullet_list_repeat1, 2, .production_id = 1),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_substitution_definition, 2),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hyperlink_target_block, 2),
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
