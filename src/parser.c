#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 158
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 96
#define ALIAS_COUNT 1
#define TOKEN_COUNT 46
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
  anon_sym_STAR = 42,
  aux_sym_emphasis_token1 = 43,
  sym__eol = 44,
  sym__blank_line = 45,
  sym_document = 46,
  sym__body_elements = 47,
  sym_paragraph = 48,
  sym__lists = 49,
  sym_bullet_list = 50,
  sym__bullet_list_item = 51,
  sym_enumerated_list = 52,
  sym__enumerated_list_item = 53,
  sym_field_list = 54,
  sym_field = 55,
  sym_option_list = 56,
  sym_option_list_item = 57,
  sym_line_block = 58,
  sym__single_line_block = 59,
  sym__markup_blocks = 60,
  sym__footnote_block = 61,
  sym_footnote = 62,
  sym__citation_block = 63,
  sym_citation = 64,
  sym__hyperlink_target_block = 65,
  sym_target = 66,
  sym__anoynymous_hyperlink_target_block = 67,
  sym__anonymous_target = 68,
  sym__directive_block = 69,
  sym_directive = 70,
  sym__substitution_definition_block = 71,
  sym_substitution_definition = 72,
  sym__embed_directive = 73,
  sym__comment_block = 74,
  sym_comment = 75,
  aux_sym__text_body = 76,
  sym__char = 77,
  sym__inline_markup_block = 78,
  sym__inline_markup = 79,
  sym_emphasis = 80,
  aux_sym_document_repeat1 = 81,
  aux_sym_paragraph_repeat1 = 82,
  aux_sym_bullet_list_repeat1 = 83,
  aux_sym__bullet_list_item_repeat1 = 84,
  aux_sym_enumerated_list_repeat1 = 85,
  aux_sym_field_list_repeat1 = 86,
  aux_sym_option_list_repeat1 = 87,
  aux_sym_line_block_repeat1 = 88,
  aux_sym__footnote_block_repeat1 = 89,
  aux_sym__citation_block_repeat1 = 90,
  aux_sym__hyperlink_target_block_repeat1 = 91,
  aux_sym__anoynymous_hyperlink_target_block_repeat1 = 92,
  aux_sym__directive_block_repeat1 = 93,
  aux_sym__substitution_definition_block_repeat1 = 94,
  aux_sym__comment_block_repeat1 = 95,
  alias_sym_list_item = 96,
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
  [anon_sym_STAR] = "*",
  [aux_sym_emphasis_token1] = "emphasis_token1",
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
  [sym_emphasis] = "emphasis",
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
  [anon_sym_STAR] = anon_sym_STAR,
  [aux_sym_emphasis_token1] = aux_sym_emphasis_token1,
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
  [sym_emphasis] = sym_emphasis,
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
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_emphasis_token1] = {
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
  [sym_emphasis] = {
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
      if (eof) ADVANCE(58);
      if (lookahead == '\t') ADVANCE(75);
      if (lookahead == 11) ADVANCE(76);
      if (lookahead == '\f') ADVANCE(77);
      if (lookahead == '\r') ADVANCE(59);
      if (lookahead == ' ') ADVANCE(74);
      if (lookahead == '!') ADVANCE(100);
      if (lookahead == '"') ADVANCE(91);
      if (lookahead == '\'') ADVANCE(90);
      if (lookahead == '(') ADVANCE(93);
      if (lookahead == ')') ADVANCE(103);
      if (lookahead == '*') ADVANCE(115);
      if (lookahead == ',') ADVANCE(98);
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == '.') ADVANCE(96);
      if (lookahead == '/') ADVANCE(88);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == ';') ADVANCE(99);
      if (lookahead == '<') ADVANCE(92);
      if (lookahead == '>') ADVANCE(106);
      if (lookahead == '?') ADVANCE(101);
      if (lookahead == '[') ADVANCE(94);
      if (lookahead == '\\') ADVANCE(102);
      if (lookahead == ']') ADVANCE(104);
      if (lookahead == '{') ADVANCE(95);
      if (lookahead == '|') ADVANCE(64);
      if (lookahead == '}') ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(59);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(75);
      if (lookahead == 11) ADVANCE(76);
      if (lookahead == '\f') ADVANCE(77);
      if (lookahead == ' ') ADVANCE(74);
      if (lookahead == '!') ADVANCE(100);
      if (lookahead == '"') ADVANCE(91);
      if (lookahead == '\'') ADVANCE(90);
      if (lookahead == '(') ADVANCE(93);
      if (lookahead == ')') ADVANCE(103);
      if (lookahead == '*') ADVANCE(115);
      if (lookahead == ',') ADVANCE(98);
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == '.') ADVANCE(96);
      if (lookahead == '/') ADVANCE(88);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == ';') ADVANCE(99);
      if (lookahead == '<') ADVANCE(92);
      if (lookahead == '>') ADVANCE(106);
      if (lookahead == '?') ADVANCE(101);
      if (lookahead == '[') ADVANCE(94);
      if (lookahead == '\\') ADVANCE(102);
      if (lookahead == ']') ADVANCE(104);
      if (lookahead == '{') ADVANCE(95);
      if (lookahead == '}') ADVANCE(105);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(107);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(75);
      if (lookahead == 11) ADVANCE(76);
      if (lookahead == '\f') ADVANCE(77);
      if (lookahead == ' ') ADVANCE(74);
      if (lookahead == '!') ADVANCE(100);
      if (lookahead == '"') ADVANCE(91);
      if (lookahead == '\'') ADVANCE(90);
      if (lookahead == '(') ADVANCE(93);
      if (lookahead == ')') ADVANCE(103);
      if (lookahead == ',') ADVANCE(98);
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == '.') ADVANCE(96);
      if (lookahead == '/') ADVANCE(88);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == ';') ADVANCE(99);
      if (lookahead == '<') ADVANCE(92);
      if (lookahead == '>') ADVANCE(106);
      if (lookahead == '?') ADVANCE(101);
      if (lookahead == '[') ADVANCE(94);
      if (lookahead == '\\') ADVANCE(102);
      if (lookahead == ']') ADVANCE(104);
      if (lookahead == '{') ADVANCE(95);
      if (lookahead == '}') ADVANCE(105);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(107);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(5);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '*') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 5:
      if (lookahead == '+') ADVANCE(50);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == '/') ADVANCE(50);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(39);
      if (lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'I' ||
          lookahead == 'L' ||
          lookahead == 'M' ||
          lookahead == 'V' ||
          lookahead == 'X') ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(39);
      if (lookahead == 'c' ||
          lookahead == 'd' ||
          lookahead == 'i' ||
          lookahead == 'l' ||
          lookahead == 'm' ||
          lookahead == 'v' ||
          lookahead == 'x') ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(82);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(45);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(69);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == '_') ADVANCE(31);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(69);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(70);
      if (lookahead == '_') ADVANCE(19);
      if (lookahead == '`') ADVANCE(14);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(70);
      if (lookahead == '`') ADVANCE(31);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(73);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(32);
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
          lookahead == '_') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(42);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == '[') ADVANCE(4);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == '|') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 24:
      if (lookahead == '[') ADVANCE(52);
      END_STATE();
    case 25:
      if (lookahead == ']') ADVANCE(43);
      END_STATE();
    case 26:
      if (lookahead == ']') ADVANCE(43);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 27:
      if (lookahead == ']') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 28:
      if (lookahead == ']') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == ']') ADVANCE(44);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == '_') ADVANCE(13);
      if (lookahead == '`') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(15);
      END_STATE();
    case 31:
      if (lookahead == '_') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(14);
      END_STATE();
    case 32:
      if (lookahead == '`') ADVANCE(13);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == '|') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(79);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(78);
      if (lookahead == '\r') ADVANCE(36);
      if (lookahead == '|') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(33);
      END_STATE();
    case 35:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f') ADVANCE(40);
      if (lookahead == ' ') ADVANCE(41);
      if (lookahead == ',') ADVANCE(3);
      if (lookahead == '=') ADVANCE(51);
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
          lookahead != '\n') ADVANCE(33);
      END_STATE();
    case 37:
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 38:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(116);
      END_STATE();
    case 39:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(61);
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
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 42:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(62);
      END_STATE();
    case 43:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(67);
      END_STATE();
    case 44:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(68);
      END_STATE();
    case 45:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(24);
      END_STATE();
    case 46:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead == ',') ADVANCE(3);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 47:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(54);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 48:
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '_') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 49:
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '_') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 53:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(59);
      END_STATE();
    case 54:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 55:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(33);
      END_STATE();
    case 56:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(116);
      END_STATE();
    case 57:
      if (eof) ADVANCE(58);
      if (lookahead == '\t') ADVANCE(75);
      if (lookahead == 11) ADVANCE(76);
      if (lookahead == '\f') ADVANCE(77);
      if (lookahead == ' ') ADVANCE(74);
      if (lookahead == '!') ADVANCE(100);
      if (lookahead == '"') ADVANCE(91);
      if (lookahead == '#') ADVANCE(108);
      if (lookahead == '\'') ADVANCE(90);
      if (lookahead == '(') ADVANCE(93);
      if (lookahead == ')') ADVANCE(103);
      if (lookahead == '*' ||
          lookahead == 8226 ||
          lookahead == 8227 ||
          lookahead == 8259) ADVANCE(113);
      if (lookahead == '+') ADVANCE(114);
      if (lookahead == ',') ADVANCE(98);
      if (lookahead == '-') ADVANCE(85);
      if (lookahead == '.') ADVANCE(97);
      if (lookahead == '/') ADVANCE(89);
      if (lookahead == ':') ADVANCE(87);
      if (lookahead == ';') ADVANCE(99);
      if (lookahead == '<') ADVANCE(92);
      if (lookahead == '>') ADVANCE(106);
      if (lookahead == '?') ADVANCE(101);
      if (lookahead == '[') ADVANCE(94);
      if (lookahead == '\\') ADVANCE(102);
      if (lookahead == ']') ADVANCE(104);
      if (lookahead == '_') ADVANCE(112);
      if (lookahead == '{') ADVANCE(95);
      if (lookahead == '|') ADVANCE(65);
      if (lookahead == '}') ADVANCE(105);
      if (lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'I' ||
          lookahead == 'L' ||
          lookahead == 'M' ||
          lookahead == 'V' ||
          lookahead == 'X') ADVANCE(109);
      if (lookahead == 'c' ||
          lookahead == 'd' ||
          lookahead == 'i' ||
          lookahead == 'l' ||
          lookahead == 'm' ||
          lookahead == 'v' ||
          lookahead == 'x') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(108);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(107);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym__bullet_list_item_token1);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym__char_bullet);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym__enumerated_list_item_token1);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_field_token1);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_option_list_item_token1);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(66);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym__single_line_block_token1);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_footnote_token1);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_citation_token1);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_target_token1);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == '`') ADVANCE(13);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_target_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym___);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '_') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_TAB);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_3);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_substitution_definition_token1);
      if (lookahead == '|') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(33);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_substitution_definition_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(33);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym__embed_directive_token1);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '_') ADVANCE(49);
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
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(60);
      if (lookahead == '-') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(22);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(83);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym__char_token1);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym__char_token1);
      if (lookahead == '.') ADVANCE(39);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym__char_token1);
      if (lookahead == '.') ADVANCE(39);
      if (lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'I' ||
          lookahead == 'L' ||
          lookahead == 'M' ||
          lookahead == 'V' ||
          lookahead == 'X') ADVANCE(7);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym__char_token1);
      if (lookahead == '.') ADVANCE(39);
      if (lookahead == 'c' ||
          lookahead == 'd' ||
          lookahead == 'i' ||
          lookahead == 'l' ||
          lookahead == 'm' ||
          lookahead == 'v' ||
          lookahead == 'x') ADVANCE(8);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym__char_token1);
      if (lookahead == '.') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym__char_token1);
      if (lookahead == '_') ADVANCE(72);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym__char_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(60);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym__char_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_emphasis_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(116);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 57, .external_lex_state = 1},
  [2] = {.lex_state = 57, .external_lex_state = 1},
  [3] = {.lex_state = 57, .external_lex_state = 1},
  [4] = {.lex_state = 57, .external_lex_state = 1},
  [5] = {.lex_state = 2, .external_lex_state = 2},
  [6] = {.lex_state = 2, .external_lex_state = 2},
  [7] = {.lex_state = 2, .external_lex_state = 1},
  [8] = {.lex_state = 2, .external_lex_state = 1},
  [9] = {.lex_state = 2, .external_lex_state = 1},
  [10] = {.lex_state = 1, .external_lex_state = 1},
  [11] = {.lex_state = 2, .external_lex_state = 2},
  [12] = {.lex_state = 2, .external_lex_state = 2},
  [13] = {.lex_state = 1, .external_lex_state = 2},
  [14] = {.lex_state = 2, .external_lex_state = 1},
  [15] = {.lex_state = 2, .external_lex_state = 2},
  [16] = {.lex_state = 2, .external_lex_state = 2},
  [17] = {.lex_state = 2, .external_lex_state = 2},
  [18] = {.lex_state = 2, .external_lex_state = 2},
  [19] = {.lex_state = 2, .external_lex_state = 2},
  [20] = {.lex_state = 57, .external_lex_state = 1},
  [21] = {.lex_state = 57, .external_lex_state = 1},
  [22] = {.lex_state = 57, .external_lex_state = 2},
  [23] = {.lex_state = 57, .external_lex_state = 2},
  [24] = {.lex_state = 57, .external_lex_state = 2},
  [25] = {.lex_state = 57, .external_lex_state = 2},
  [26] = {.lex_state = 57, .external_lex_state = 2},
  [27] = {.lex_state = 57, .external_lex_state = 2},
  [28] = {.lex_state = 53, .external_lex_state = 1},
  [29] = {.lex_state = 53, .external_lex_state = 1},
  [30] = {.lex_state = 53, .external_lex_state = 1},
  [31] = {.lex_state = 53, .external_lex_state = 1},
  [32] = {.lex_state = 47, .external_lex_state = 2},
  [33] = {.lex_state = 57, .external_lex_state = 2},
  [34] = {.lex_state = 57, .external_lex_state = 2},
  [35] = {.lex_state = 57, .external_lex_state = 2},
  [36] = {.lex_state = 57, .external_lex_state = 2},
  [37] = {.lex_state = 57, .external_lex_state = 2},
  [38] = {.lex_state = 57, .external_lex_state = 2},
  [39] = {.lex_state = 11, .external_lex_state = 2},
  [40] = {.lex_state = 57, .external_lex_state = 2},
  [41] = {.lex_state = 57, .external_lex_state = 2},
  [42] = {.lex_state = 57, .external_lex_state = 2},
  [43] = {.lex_state = 57, .external_lex_state = 2},
  [44] = {.lex_state = 47, .external_lex_state = 2},
  [45] = {.lex_state = 53, .external_lex_state = 1},
  [46] = {.lex_state = 53, .external_lex_state = 1},
  [47] = {.lex_state = 53, .external_lex_state = 1},
  [48] = {.lex_state = 53, .external_lex_state = 1},
  [49] = {.lex_state = 53, .external_lex_state = 1},
  [50] = {.lex_state = 53, .external_lex_state = 1},
  [51] = {.lex_state = 57, .external_lex_state = 2},
  [52] = {.lex_state = 57, .external_lex_state = 2},
  [53] = {.lex_state = 57, .external_lex_state = 2},
  [54] = {.lex_state = 11, .external_lex_state = 2},
  [55] = {.lex_state = 57, .external_lex_state = 2},
  [56] = {.lex_state = 53, .external_lex_state = 1},
  [57] = {.lex_state = 57, .external_lex_state = 2},
  [58] = {.lex_state = 57, .external_lex_state = 2},
  [59] = {.lex_state = 57, .external_lex_state = 2},
  [60] = {.lex_state = 57, .external_lex_state = 2},
  [61] = {.lex_state = 53, .external_lex_state = 2},
  [62] = {.lex_state = 53, .external_lex_state = 2},
  [63] = {.lex_state = 53, .external_lex_state = 2},
  [64] = {.lex_state = 57, .external_lex_state = 2},
  [65] = {.lex_state = 53, .external_lex_state = 2},
  [66] = {.lex_state = 53, .external_lex_state = 2},
  [67] = {.lex_state = 53, .external_lex_state = 2},
  [68] = {.lex_state = 53, .external_lex_state = 2},
  [69] = {.lex_state = 53, .external_lex_state = 2},
  [70] = {.lex_state = 53, .external_lex_state = 2},
  [71] = {.lex_state = 53, .external_lex_state = 2},
  [72] = {.lex_state = 47, .external_lex_state = 2},
  [73] = {.lex_state = 47, .external_lex_state = 2},
  [74] = {.lex_state = 47, .external_lex_state = 1},
  [75] = {.lex_state = 47, .external_lex_state = 1},
  [76] = {.lex_state = 53, .external_lex_state = 2},
  [77] = {.lex_state = 53, .external_lex_state = 2},
  [78] = {.lex_state = 53, .external_lex_state = 2},
  [79] = {.lex_state = 53, .external_lex_state = 2},
  [80] = {.lex_state = 53, .external_lex_state = 2},
  [81] = {.lex_state = 53, .external_lex_state = 2},
  [82] = {.lex_state = 53, .external_lex_state = 2},
  [83] = {.lex_state = 53, .external_lex_state = 2},
  [84] = {.lex_state = 53, .external_lex_state = 2},
  [85] = {.lex_state = 53, .external_lex_state = 2},
  [86] = {.lex_state = 53, .external_lex_state = 2},
  [87] = {.lex_state = 53, .external_lex_state = 2},
  [88] = {.lex_state = 53, .external_lex_state = 2},
  [89] = {.lex_state = 53, .external_lex_state = 2},
  [90] = {.lex_state = 53, .external_lex_state = 2},
  [91] = {.lex_state = 53, .external_lex_state = 2},
  [92] = {.lex_state = 53, .external_lex_state = 2},
  [93] = {.lex_state = 53, .external_lex_state = 2},
  [94] = {.lex_state = 53, .external_lex_state = 2},
  [95] = {.lex_state = 53, .external_lex_state = 2},
  [96] = {.lex_state = 53, .external_lex_state = 2},
  [97] = {.lex_state = 0, .external_lex_state = 1},
  [98] = {.lex_state = 0, .external_lex_state = 1},
  [99] = {.lex_state = 0, .external_lex_state = 1},
  [100] = {.lex_state = 0, .external_lex_state = 1},
  [101] = {.lex_state = 0, .external_lex_state = 1},
  [102] = {.lex_state = 0, .external_lex_state = 1},
  [103] = {.lex_state = 1, .external_lex_state = 2},
  [104] = {.lex_state = 0, .external_lex_state = 1},
  [105] = {.lex_state = 0, .external_lex_state = 1},
  [106] = {.lex_state = 0, .external_lex_state = 2},
  [107] = {.lex_state = 0, .external_lex_state = 1},
  [108] = {.lex_state = 47, .external_lex_state = 2},
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
  [121] = {.lex_state = 0, .external_lex_state = 1},
  [122] = {.lex_state = 0, .external_lex_state = 1},
  [123] = {.lex_state = 47, .external_lex_state = 2},
  [124] = {.lex_state = 47, .external_lex_state = 2},
  [125] = {.lex_state = 47, .external_lex_state = 2},
  [126] = {.lex_state = 57, .external_lex_state = 2},
  [127] = {.lex_state = 57, .external_lex_state = 2},
  [128] = {.lex_state = 57, .external_lex_state = 2},
  [129] = {.lex_state = 57, .external_lex_state = 2},
  [130] = {.lex_state = 11, .external_lex_state = 2},
  [131] = {.lex_state = 57, .external_lex_state = 2},
  [132] = {.lex_state = 57, .external_lex_state = 2},
  [133] = {.lex_state = 57, .external_lex_state = 2},
  [134] = {.lex_state = 57, .external_lex_state = 2},
  [135] = {.lex_state = 0, .external_lex_state = 1},
  [136] = {.lex_state = 0, .external_lex_state = 1},
  [137] = {.lex_state = 57, .external_lex_state = 2},
  [138] = {.lex_state = 0, .external_lex_state = 1},
  [139] = {.lex_state = 0, .external_lex_state = 1},
  [140] = {.lex_state = 47, .external_lex_state = 2},
  [141] = {.lex_state = 56, .external_lex_state = 2},
  [142] = {.lex_state = 0, .external_lex_state = 1},
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
  [156] = {.lex_state = 0, .external_lex_state = 2},
  [157] = {.lex_state = 0, .external_lex_state = 2},
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
    [anon_sym_STAR] = ACTIONS(1),
    [sym__eol] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(106),
    [sym__body_elements] = STATE(2),
    [sym_paragraph] = STATE(109),
    [sym__lists] = STATE(109),
    [sym_bullet_list] = STATE(109),
    [sym__bullet_list_item] = STATE(110),
    [sym_enumerated_list] = STATE(109),
    [sym__enumerated_list_item] = STATE(111),
    [sym_field_list] = STATE(109),
    [sym_field] = STATE(112),
    [sym_option_list] = STATE(109),
    [sym_option_list_item] = STATE(113),
    [sym_line_block] = STATE(109),
    [sym__single_line_block] = STATE(114),
    [sym__markup_blocks] = STATE(109),
    [sym__footnote_block] = STATE(109),
    [sym_footnote] = STATE(115),
    [sym__citation_block] = STATE(109),
    [sym_citation] = STATE(116),
    [sym__hyperlink_target_block] = STATE(109),
    [sym_target] = STATE(117),
    [sym__anoynymous_hyperlink_target_block] = STATE(109),
    [sym__anonymous_target] = STATE(118),
    [sym__directive_block] = STATE(109),
    [sym_directive] = STATE(119),
    [sym__substitution_definition_block] = STATE(109),
    [sym_substitution_definition] = STATE(135),
    [sym__comment_block] = STATE(109),
    [sym_comment] = STATE(136),
    [aux_sym__text_body] = STATE(9),
    [sym__char] = STATE(9),
    [sym__inline_markup_block] = STATE(9),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_paragraph_repeat1] = STATE(5),
    [aux_sym_bullet_list_repeat1] = STATE(34),
    [aux_sym_enumerated_list_repeat1] = STATE(35),
    [aux_sym_field_list_repeat1] = STATE(36),
    [aux_sym_option_list_repeat1] = STATE(37),
    [aux_sym_line_block_repeat1] = STATE(26),
    [aux_sym__footnote_block_repeat1] = STATE(38),
    [aux_sym__citation_block_repeat1] = STATE(39),
    [aux_sym__hyperlink_target_block_repeat1] = STATE(40),
    [aux_sym__anoynymous_hyperlink_target_block_repeat1] = STATE(41),
    [aux_sym__directive_block_repeat1] = STATE(42),
    [aux_sym__substitution_definition_block_repeat1] = STATE(43),
    [aux_sym__comment_block_repeat1] = STATE(44),
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
    [sym_paragraph] = STATE(109),
    [sym__lists] = STATE(109),
    [sym_bullet_list] = STATE(109),
    [sym__bullet_list_item] = STATE(110),
    [sym_enumerated_list] = STATE(109),
    [sym__enumerated_list_item] = STATE(111),
    [sym_field_list] = STATE(109),
    [sym_field] = STATE(112),
    [sym_option_list] = STATE(109),
    [sym_option_list_item] = STATE(113),
    [sym_line_block] = STATE(109),
    [sym__single_line_block] = STATE(114),
    [sym__markup_blocks] = STATE(109),
    [sym__footnote_block] = STATE(109),
    [sym_footnote] = STATE(115),
    [sym__citation_block] = STATE(109),
    [sym_citation] = STATE(116),
    [sym__hyperlink_target_block] = STATE(109),
    [sym_target] = STATE(117),
    [sym__anoynymous_hyperlink_target_block] = STATE(109),
    [sym__anonymous_target] = STATE(118),
    [sym__directive_block] = STATE(109),
    [sym_directive] = STATE(119),
    [sym__substitution_definition_block] = STATE(109),
    [sym_substitution_definition] = STATE(135),
    [sym__comment_block] = STATE(109),
    [sym_comment] = STATE(136),
    [aux_sym__text_body] = STATE(9),
    [sym__char] = STATE(9),
    [sym__inline_markup_block] = STATE(9),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_paragraph_repeat1] = STATE(5),
    [aux_sym_bullet_list_repeat1] = STATE(34),
    [aux_sym_enumerated_list_repeat1] = STATE(35),
    [aux_sym_field_list_repeat1] = STATE(36),
    [aux_sym_option_list_repeat1] = STATE(37),
    [aux_sym_line_block_repeat1] = STATE(26),
    [aux_sym__footnote_block_repeat1] = STATE(38),
    [aux_sym__citation_block_repeat1] = STATE(39),
    [aux_sym__hyperlink_target_block_repeat1] = STATE(40),
    [aux_sym__anoynymous_hyperlink_target_block_repeat1] = STATE(41),
    [aux_sym__directive_block_repeat1] = STATE(42),
    [aux_sym__substitution_definition_block_repeat1] = STATE(43),
    [aux_sym__comment_block_repeat1] = STATE(44),
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
    [sym_paragraph] = STATE(109),
    [sym__lists] = STATE(109),
    [sym_bullet_list] = STATE(109),
    [sym__bullet_list_item] = STATE(110),
    [sym_enumerated_list] = STATE(109),
    [sym__enumerated_list_item] = STATE(111),
    [sym_field_list] = STATE(109),
    [sym_field] = STATE(112),
    [sym_option_list] = STATE(109),
    [sym_option_list_item] = STATE(113),
    [sym_line_block] = STATE(109),
    [sym__single_line_block] = STATE(114),
    [sym__markup_blocks] = STATE(109),
    [sym__footnote_block] = STATE(109),
    [sym_footnote] = STATE(115),
    [sym__citation_block] = STATE(109),
    [sym_citation] = STATE(116),
    [sym__hyperlink_target_block] = STATE(109),
    [sym_target] = STATE(117),
    [sym__anoynymous_hyperlink_target_block] = STATE(109),
    [sym__anonymous_target] = STATE(118),
    [sym__directive_block] = STATE(109),
    [sym_directive] = STATE(119),
    [sym__substitution_definition_block] = STATE(109),
    [sym_substitution_definition] = STATE(135),
    [sym__comment_block] = STATE(109),
    [sym_comment] = STATE(136),
    [aux_sym__text_body] = STATE(9),
    [sym__char] = STATE(9),
    [sym__inline_markup_block] = STATE(9),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_paragraph_repeat1] = STATE(5),
    [aux_sym_bullet_list_repeat1] = STATE(34),
    [aux_sym_enumerated_list_repeat1] = STATE(35),
    [aux_sym_field_list_repeat1] = STATE(36),
    [aux_sym_option_list_repeat1] = STATE(37),
    [aux_sym_line_block_repeat1] = STATE(26),
    [aux_sym__footnote_block_repeat1] = STATE(38),
    [aux_sym__citation_block_repeat1] = STATE(39),
    [aux_sym__hyperlink_target_block_repeat1] = STATE(40),
    [aux_sym__anoynymous_hyperlink_target_block_repeat1] = STATE(41),
    [aux_sym__directive_block_repeat1] = STATE(42),
    [aux_sym__substitution_definition_block_repeat1] = STATE(43),
    [aux_sym__comment_block_repeat1] = STATE(44),
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
  [47] = 6,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(109), 1,
      aux_sym__char_token1,
    STATE(6), 1,
      aux_sym_paragraph_repeat1,
    STATE(7), 3,
      aux_sym__text_body,
      sym__char,
      sym__inline_markup_block,
    ACTIONS(107), 10,
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
  [89] = 6,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(117), 1,
      aux_sym__char_token1,
    STATE(6), 1,
      aux_sym_paragraph_repeat1,
    STATE(12), 3,
      aux_sym__text_body,
      sym__char,
      sym__inline_markup_block,
    ACTIONS(114), 10,
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
    ACTIONS(111), 13,
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
  [131] = 6,
    ACTIONS(122), 1,
      aux_sym__char_token1,
    ACTIONS(124), 1,
      sym__eol,
    ACTIONS(126), 1,
      sym__blank_line,
    STATE(8), 3,
      aux_sym__text_body,
      sym__char,
      sym__inline_markup_block,
    ACTIONS(120), 10,
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
  [173] = 5,
    ACTIONS(134), 1,
      aux_sym__char_token1,
    ACTIONS(137), 2,
      sym__eol,
      sym__blank_line,
    STATE(8), 3,
      aux_sym__text_body,
      sym__char,
      sym__inline_markup_block,
    ACTIONS(131), 10,
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
    ACTIONS(128), 13,
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
  [213] = 6,
    ACTIONS(122), 1,
      aux_sym__char_token1,
    ACTIONS(124), 1,
      sym__eol,
    ACTIONS(139), 1,
      sym__blank_line,
    STATE(8), 3,
      aux_sym__text_body,
      sym__char,
      sym__inline_markup_block,
    ACTIONS(120), 10,
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
  [255] = 4,
    ACTIONS(143), 1,
      aux_sym__char_token1,
    ACTIONS(145), 1,
      anon_sym_STAR,
    STATE(17), 2,
      sym__inline_markup,
      sym_emphasis,
    ACTIONS(141), 25,
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
  [293] = 5,
    ACTIONS(137), 1,
      sym__eol,
    ACTIONS(153), 1,
      aux_sym__char_token1,
    STATE(11), 3,
      aux_sym__text_body,
      sym__char,
      sym__inline_markup_block,
    ACTIONS(150), 10,
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
    ACTIONS(147), 13,
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
  [332] = 5,
    ACTIONS(124), 1,
      sym__eol,
    ACTIONS(160), 1,
      aux_sym__char_token1,
    STATE(11), 3,
      aux_sym__text_body,
      sym__char,
      sym__inline_markup_block,
    ACTIONS(158), 10,
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
    ACTIONS(156), 13,
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
  [371] = 4,
    ACTIONS(143), 1,
      aux_sym__char_token1,
    ACTIONS(145), 1,
      anon_sym_STAR,
    STATE(18), 2,
      sym__inline_markup,
      sym_emphasis,
    ACTIONS(141), 24,
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
  [408] = 2,
    ACTIONS(164), 1,
      aux_sym__char_token1,
    ACTIONS(162), 25,
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
  [439] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(168), 1,
      aux_sym__char_token1,
    ACTIONS(166), 23,
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
  [471] = 2,
    ACTIONS(164), 1,
      aux_sym__char_token1,
    ACTIONS(162), 24,
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
  [501] = 1,
    ACTIONS(170), 20,
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
  [524] = 1,
    ACTIONS(172), 20,
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
  [547] = 1,
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
  [570] = 2,
    ACTIONS(178), 2,
      sym__eol,
      sym__blank_line,
    ACTIONS(176), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [581] = 2,
    ACTIONS(182), 2,
      sym__eol,
      sym__blank_line,
    ACTIONS(180), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [592] = 2,
    ACTIONS(178), 1,
      sym__eol,
    ACTIONS(184), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [602] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(186), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [612] = 2,
    ACTIONS(182), 1,
      sym__eol,
    ACTIONS(188), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [622] = 5,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(190), 1,
      anon_sym_PIPE,
    ACTIONS(193), 1,
      aux_sym__single_line_block_token1,
    STATE(25), 1,
      aux_sym_line_block_repeat1,
    STATE(153), 1,
      sym__single_line_block,
  [638] = 5,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(17), 1,
      aux_sym__single_line_block_token1,
    ACTIONS(196), 1,
      anon_sym_PIPE,
    STATE(25), 1,
      aux_sym_line_block_repeat1,
    STATE(107), 1,
      sym__single_line_block,
  [654] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(198), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [664] = 3,
    ACTIONS(200), 1,
      aux_sym__bullet_list_item_token1,
    STATE(31), 1,
      aux_sym__bullet_list_item_repeat1,
    ACTIONS(202), 2,
      sym__eol,
      sym__blank_line,
  [675] = 3,
    ACTIONS(200), 1,
      aux_sym__bullet_list_item_token1,
    STATE(31), 1,
      aux_sym__bullet_list_item_repeat1,
    ACTIONS(204), 2,
      sym__eol,
      sym__blank_line,
  [686] = 3,
    ACTIONS(200), 1,
      aux_sym__bullet_list_item_token1,
    STATE(31), 1,
      aux_sym__bullet_list_item_repeat1,
    ACTIONS(206), 2,
      sym__eol,
      sym__blank_line,
  [697] = 3,
    ACTIONS(208), 1,
      aux_sym__bullet_list_item_token1,
    STATE(31), 1,
      aux_sym__bullet_list_item_repeat1,
    ACTIONS(211), 2,
      sym__eol,
      sym__blank_line,
  [708] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(213), 1,
      anon_sym_DOT_DOT,
    STATE(32), 1,
      aux_sym__comment_block_repeat1,
    STATE(146), 1,
      sym_comment,
  [721] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(216), 1,
      aux_sym_substitution_definition_token1,
    STATE(33), 1,
      aux_sym__substitution_definition_block_repeat1,
    STATE(147), 1,
      sym_substitution_definition,
  [734] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(7), 1,
      sym__char_bullet,
    STATE(60), 1,
      aux_sym_bullet_list_repeat1,
    STATE(97), 1,
      sym__bullet_list_item,
  [747] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(9), 1,
      aux_sym__enumerated_list_item_token1,
    STATE(59), 1,
      aux_sym_enumerated_list_repeat1,
    STATE(122), 1,
      sym__enumerated_list_item,
  [760] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(11), 1,
      aux_sym_field_token1,
    STATE(58), 1,
      aux_sym_field_list_repeat1,
    STATE(121), 1,
      sym_field,
  [773] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(13), 1,
      aux_sym_option_list_item_token1,
    STATE(57), 1,
      aux_sym_option_list_repeat1,
    STATE(120), 1,
      sym_option_list_item,
  [786] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(19), 1,
      aux_sym_footnote_token1,
    STATE(55), 1,
      aux_sym__footnote_block_repeat1,
    STATE(101), 1,
      sym_footnote,
  [799] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(219), 1,
      aux_sym_citation_token1,
    STATE(54), 1,
      aux_sym__citation_block_repeat1,
    STATE(138), 1,
      sym_citation,
  [812] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(23), 1,
      aux_sym_target_token1,
    STATE(53), 1,
      aux_sym__hyperlink_target_block_repeat1,
    STATE(104), 1,
      sym_target,
  [825] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(25), 1,
      anon_sym___,
    STATE(52), 1,
      aux_sym__anoynymous_hyperlink_target_block_repeat1,
    STATE(100), 1,
      sym__anonymous_target,
  [838] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(27), 1,
      aux_sym_directive_token1,
    STATE(51), 1,
      aux_sym__directive_block_repeat1,
    STATE(102), 1,
      sym_directive,
  [851] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(31), 1,
      aux_sym_substitution_definition_token1,
    STATE(33), 1,
      aux_sym__substitution_definition_block_repeat1,
    STATE(105), 1,
      sym_substitution_definition,
  [864] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(221), 1,
      anon_sym_DOT_DOT,
    STATE(32), 1,
      aux_sym__comment_block_repeat1,
    STATE(99), 1,
      sym_comment,
  [877] = 3,
    ACTIONS(200), 1,
      aux_sym__bullet_list_item_token1,
    STATE(31), 1,
      aux_sym__bullet_list_item_repeat1,
    ACTIONS(223), 2,
      sym__eol,
      sym__blank_line,
  [888] = 3,
    ACTIONS(200), 1,
      aux_sym__bullet_list_item_token1,
    STATE(31), 1,
      aux_sym__bullet_list_item_repeat1,
    ACTIONS(225), 2,
      sym__eol,
      sym__blank_line,
  [899] = 3,
    ACTIONS(200), 1,
      aux_sym__bullet_list_item_token1,
    STATE(31), 1,
      aux_sym__bullet_list_item_repeat1,
    ACTIONS(227), 2,
      sym__eol,
      sym__blank_line,
  [910] = 3,
    ACTIONS(200), 1,
      aux_sym__bullet_list_item_token1,
    STATE(31), 1,
      aux_sym__bullet_list_item_repeat1,
    ACTIONS(229), 2,
      sym__eol,
      sym__blank_line,
  [921] = 3,
    ACTIONS(200), 1,
      aux_sym__bullet_list_item_token1,
    STATE(31), 1,
      aux_sym__bullet_list_item_repeat1,
    ACTIONS(231), 2,
      sym__eol,
      sym__blank_line,
  [932] = 3,
    ACTIONS(200), 1,
      aux_sym__bullet_list_item_token1,
    STATE(31), 1,
      aux_sym__bullet_list_item_repeat1,
    ACTIONS(233), 2,
      sym__eol,
      sym__blank_line,
  [943] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(235), 1,
      aux_sym_directive_token1,
    STATE(51), 1,
      aux_sym__directive_block_repeat1,
    STATE(148), 1,
      sym_directive,
  [956] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(238), 1,
      anon_sym___,
    STATE(52), 1,
      aux_sym__anoynymous_hyperlink_target_block_repeat1,
    STATE(149), 1,
      sym__anonymous_target,
  [969] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(241), 1,
      aux_sym_target_token1,
    STATE(53), 1,
      aux_sym__hyperlink_target_block_repeat1,
    STATE(150), 1,
      sym_target,
  [982] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(244), 1,
      aux_sym_citation_token1,
    STATE(54), 1,
      aux_sym__citation_block_repeat1,
    STATE(151), 1,
      sym_citation,
  [995] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(247), 1,
      aux_sym_footnote_token1,
    STATE(55), 1,
      aux_sym__footnote_block_repeat1,
    STATE(152), 1,
      sym_footnote,
  [1008] = 3,
    ACTIONS(200), 1,
      aux_sym__bullet_list_item_token1,
    STATE(31), 1,
      aux_sym__bullet_list_item_repeat1,
    ACTIONS(250), 2,
      sym__eol,
      sym__blank_line,
  [1019] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(252), 1,
      aux_sym_option_list_item_token1,
    STATE(57), 1,
      aux_sym_option_list_repeat1,
    STATE(154), 1,
      sym_option_list_item,
  [1032] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(255), 1,
      aux_sym_field_token1,
    STATE(58), 1,
      aux_sym_field_list_repeat1,
    STATE(155), 1,
      sym_field,
  [1045] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(258), 1,
      aux_sym__enumerated_list_item_token1,
    STATE(59), 1,
      aux_sym_enumerated_list_repeat1,
    STATE(156), 1,
      sym__enumerated_list_item,
  [1058] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(261), 1,
      sym__char_bullet,
    STATE(60), 1,
      aux_sym_bullet_list_repeat1,
    STATE(157), 1,
      sym__bullet_list_item,
  [1071] = 3,
    ACTIONS(229), 1,
      sym__eol,
    ACTIONS(264), 1,
      aux_sym__bullet_list_item_token1,
    STATE(91), 1,
      aux_sym__bullet_list_item_repeat1,
  [1081] = 3,
    ACTIONS(231), 1,
      sym__eol,
    ACTIONS(264), 1,
      aux_sym__bullet_list_item_token1,
    STATE(91), 1,
      aux_sym__bullet_list_item_repeat1,
  [1091] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(266), 1,
      aux_sym__bullet_list_item_token1,
    STATE(66), 1,
      aux_sym__bullet_list_item_repeat1,
  [1101] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(268), 1,
      anon_sym_PIPE,
    ACTIONS(270), 1,
      aux_sym__single_line_block_token1,
  [1111] = 3,
    ACTIONS(227), 1,
      sym__eol,
    ACTIONS(264), 1,
      aux_sym__bullet_list_item_token1,
    STATE(91), 1,
      aux_sym__bullet_list_item_repeat1,
  [1121] = 3,
    ACTIONS(225), 1,
      sym__eol,
    ACTIONS(264), 1,
      aux_sym__bullet_list_item_token1,
    STATE(91), 1,
      aux_sym__bullet_list_item_repeat1,
  [1131] = 3,
    ACTIONS(223), 1,
      sym__eol,
    ACTIONS(264), 1,
      aux_sym__bullet_list_item_token1,
    STATE(91), 1,
      aux_sym__bullet_list_item_repeat1,
  [1141] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(272), 1,
      aux_sym__bullet_list_item_token1,
    STATE(78), 1,
      aux_sym__bullet_list_item_repeat1,
  [1151] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(274), 1,
      aux_sym__bullet_list_item_token1,
    STATE(62), 1,
      aux_sym__bullet_list_item_repeat1,
  [1161] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(276), 1,
      aux_sym__bullet_list_item_token1,
    STATE(80), 1,
      aux_sym__bullet_list_item_repeat1,
  [1171] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(278), 1,
      aux_sym__bullet_list_item_token1,
    STATE(67), 1,
      aux_sym__bullet_list_item_repeat1,
  [1181] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(280), 1,
      aux_sym__embed_directive_token1,
    STATE(143), 1,
      sym__embed_directive,
  [1191] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(282), 1,
      aux_sym__embed_directive_token1,
    STATE(139), 1,
      sym__embed_directive,
  [1201] = 2,
    ACTIONS(284), 1,
      aux_sym_target_token2,
    ACTIONS(286), 2,
      sym__eol,
      sym__blank_line,
  [1209] = 2,
    ACTIONS(288), 1,
      aux_sym_target_token2,
    ACTIONS(290), 2,
      sym__eol,
      sym__blank_line,
  [1217] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(292), 1,
      aux_sym__bullet_list_item_token1,
    STATE(50), 1,
      aux_sym__bullet_list_item_repeat1,
  [1227] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(294), 1,
      aux_sym__bullet_list_item_token1,
    STATE(49), 1,
      aux_sym__bullet_list_item_repeat1,
  [1237] = 3,
    ACTIONS(202), 1,
      sym__eol,
    ACTIONS(264), 1,
      aux_sym__bullet_list_item_token1,
    STATE(91), 1,
      aux_sym__bullet_list_item_repeat1,
  [1247] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(296), 1,
      aux_sym__bullet_list_item_token1,
    STATE(29), 1,
      aux_sym__bullet_list_item_repeat1,
  [1257] = 3,
    ACTIONS(233), 1,
      sym__eol,
    ACTIONS(264), 1,
      aux_sym__bullet_list_item_token1,
    STATE(91), 1,
      aux_sym__bullet_list_item_repeat1,
  [1267] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(298), 1,
      aux_sym__bullet_list_item_token1,
    STATE(28), 1,
      aux_sym__bullet_list_item_repeat1,
  [1277] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(300), 1,
      aux_sym__bullet_list_item_token1,
    STATE(61), 1,
      aux_sym__bullet_list_item_repeat1,
  [1287] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(302), 1,
      aux_sym__bullet_list_item_token1,
    STATE(48), 1,
      aux_sym__bullet_list_item_repeat1,
  [1297] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(304), 1,
      aux_sym__bullet_list_item_token1,
    STATE(56), 1,
      aux_sym__bullet_list_item_repeat1,
  [1307] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(306), 1,
      aux_sym__bullet_list_item_token1,
    STATE(92), 1,
      aux_sym__bullet_list_item_repeat1,
  [1317] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(308), 1,
      aux_sym__bullet_list_item_token1,
    STATE(47), 1,
      aux_sym__bullet_list_item_repeat1,
  [1327] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(310), 1,
      aux_sym__bullet_list_item_token1,
    STATE(93), 1,
      aux_sym__bullet_list_item_repeat1,
  [1337] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(312), 1,
      aux_sym__bullet_list_item_token1,
    STATE(65), 1,
      aux_sym__bullet_list_item_repeat1,
  [1347] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(314), 1,
      aux_sym__bullet_list_item_token1,
    STATE(45), 1,
      aux_sym__bullet_list_item_repeat1,
  [1357] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(316), 1,
      aux_sym__bullet_list_item_token1,
    STATE(30), 1,
      aux_sym__bullet_list_item_repeat1,
  [1367] = 3,
    ACTIONS(211), 1,
      sym__eol,
    ACTIONS(318), 1,
      aux_sym__bullet_list_item_token1,
    STATE(91), 1,
      aux_sym__bullet_list_item_repeat1,
  [1377] = 3,
    ACTIONS(206), 1,
      sym__eol,
    ACTIONS(264), 1,
      aux_sym__bullet_list_item_token1,
    STATE(91), 1,
      aux_sym__bullet_list_item_repeat1,
  [1387] = 3,
    ACTIONS(250), 1,
      sym__eol,
    ACTIONS(264), 1,
      aux_sym__bullet_list_item_token1,
    STATE(91), 1,
      aux_sym__bullet_list_item_repeat1,
  [1397] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(321), 1,
      aux_sym__bullet_list_item_token1,
    STATE(95), 1,
      aux_sym__bullet_list_item_repeat1,
  [1407] = 3,
    ACTIONS(204), 1,
      sym__eol,
    ACTIONS(264), 1,
      aux_sym__bullet_list_item_token1,
    STATE(91), 1,
      aux_sym__bullet_list_item_repeat1,
  [1417] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(323), 1,
      aux_sym__bullet_list_item_token1,
    STATE(46), 1,
      aux_sym__bullet_list_item_repeat1,
  [1427] = 2,
    ACTIONS(325), 1,
      sym__eol,
    ACTIONS(327), 1,
      sym__blank_line,
  [1434] = 1,
    ACTIONS(329), 2,
      sym__eol,
      sym__blank_line,
  [1439] = 2,
    ACTIONS(331), 1,
      sym__eol,
    ACTIONS(333), 1,
      sym__blank_line,
  [1446] = 2,
    ACTIONS(335), 1,
      sym__eol,
    ACTIONS(337), 1,
      sym__blank_line,
  [1453] = 2,
    ACTIONS(339), 1,
      sym__eol,
    ACTIONS(341), 1,
      sym__blank_line,
  [1460] = 2,
    ACTIONS(343), 1,
      sym__eol,
    ACTIONS(345), 1,
      sym__blank_line,
  [1467] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(347), 1,
      anon_sym_STAR,
  [1474] = 2,
    ACTIONS(349), 1,
      sym__eol,
    ACTIONS(351), 1,
      sym__blank_line,
  [1481] = 2,
    ACTIONS(353), 1,
      sym__eol,
    ACTIONS(355), 1,
      sym__blank_line,
  [1488] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(357), 1,
      ts_builtin_sym_end,
  [1495] = 2,
    ACTIONS(359), 1,
      sym__eol,
    ACTIONS(361), 1,
      sym__blank_line,
  [1502] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(363), 1,
      anon_sym_COLON_COLON,
  [1509] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(365), 1,
      sym__blank_line,
  [1516] = 2,
    ACTIONS(325), 1,
      sym__eol,
    ACTIONS(367), 1,
      sym__blank_line,
  [1523] = 2,
    ACTIONS(369), 1,
      sym__eol,
    ACTIONS(371), 1,
      sym__blank_line,
  [1530] = 2,
    ACTIONS(373), 1,
      sym__eol,
    ACTIONS(375), 1,
      sym__blank_line,
  [1537] = 2,
    ACTIONS(377), 1,
      sym__eol,
    ACTIONS(379), 1,
      sym__blank_line,
  [1544] = 2,
    ACTIONS(359), 1,
      sym__eol,
    ACTIONS(381), 1,
      sym__blank_line,
  [1551] = 2,
    ACTIONS(339), 1,
      sym__eol,
    ACTIONS(383), 1,
      sym__blank_line,
  [1558] = 2,
    ACTIONS(385), 1,
      sym__eol,
    ACTIONS(387), 1,
      sym__blank_line,
  [1565] = 2,
    ACTIONS(349), 1,
      sym__eol,
    ACTIONS(389), 1,
      sym__blank_line,
  [1572] = 2,
    ACTIONS(335), 1,
      sym__eol,
    ACTIONS(391), 1,
      sym__blank_line,
  [1579] = 2,
    ACTIONS(343), 1,
      sym__eol,
    ACTIONS(393), 1,
      sym__blank_line,
  [1586] = 2,
    ACTIONS(377), 1,
      sym__eol,
    ACTIONS(395), 1,
      sym__blank_line,
  [1593] = 2,
    ACTIONS(373), 1,
      sym__eol,
    ACTIONS(397), 1,
      sym__blank_line,
  [1600] = 2,
    ACTIONS(369), 1,
      sym__eol,
    ACTIONS(399), 1,
      sym__blank_line,
  [1607] = 2,
    ACTIONS(290), 1,
      sym__eol,
    ACTIONS(401), 1,
      aux_sym_target_token2,
  [1614] = 2,
    ACTIONS(286), 1,
      sym__eol,
    ACTIONS(403), 1,
      aux_sym_target_token2,
  [1621] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(405), 1,
      anon_sym_DOT_DOT,
  [1628] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(407), 1,
      aux_sym_substitution_definition_token1,
  [1635] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(409), 1,
      aux_sym_directive_token1,
  [1642] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(411), 1,
      anon_sym___,
  [1649] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(413), 1,
      aux_sym_target_token1,
  [1656] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(415), 1,
      aux_sym_citation_token1,
  [1663] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(417), 1,
      aux_sym_footnote_token1,
  [1670] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(419), 1,
      aux_sym_option_list_item_token1,
  [1677] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(421), 1,
      aux_sym_field_token1,
  [1684] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(423), 1,
      aux_sym__enumerated_list_item_token1,
  [1691] = 2,
    ACTIONS(353), 1,
      sym__eol,
    ACTIONS(425), 1,
      sym__blank_line,
  [1698] = 2,
    ACTIONS(331), 1,
      sym__eol,
    ACTIONS(427), 1,
      sym__blank_line,
  [1705] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(429), 1,
      sym__char_bullet,
  [1712] = 2,
    ACTIONS(385), 1,
      sym__eol,
    ACTIONS(431), 1,
      sym__blank_line,
  [1719] = 1,
    ACTIONS(433), 2,
      sym__eol,
      sym__blank_line,
  [1724] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(435), 1,
      anon_sym_COLON_COLON,
  [1731] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(437), 1,
      aux_sym_emphasis_token1,
  [1738] = 1,
    ACTIONS(439), 2,
      sym__eol,
      sym__blank_line,
  [1743] = 1,
    ACTIONS(433), 1,
      sym__eol,
  [1747] = 1,
    ACTIONS(439), 1,
      sym__eol,
  [1751] = 1,
    ACTIONS(329), 1,
      sym__eol,
  [1755] = 1,
    ACTIONS(331), 1,
      sym__eol,
  [1759] = 1,
    ACTIONS(353), 1,
      sym__eol,
  [1763] = 1,
    ACTIONS(343), 1,
      sym__eol,
  [1767] = 1,
    ACTIONS(335), 1,
      sym__eol,
  [1771] = 1,
    ACTIONS(349), 1,
      sym__eol,
  [1775] = 1,
    ACTIONS(385), 1,
      sym__eol,
  [1779] = 1,
    ACTIONS(339), 1,
      sym__eol,
  [1783] = 1,
    ACTIONS(359), 1,
      sym__eol,
  [1787] = 1,
    ACTIONS(377), 1,
      sym__eol,
  [1791] = 1,
    ACTIONS(373), 1,
      sym__eol,
  [1795] = 1,
    ACTIONS(369), 1,
      sym__eol,
  [1799] = 1,
    ACTIONS(325), 1,
      sym__eol,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 47,
  [SMALL_STATE(6)] = 89,
  [SMALL_STATE(7)] = 131,
  [SMALL_STATE(8)] = 173,
  [SMALL_STATE(9)] = 213,
  [SMALL_STATE(10)] = 255,
  [SMALL_STATE(11)] = 293,
  [SMALL_STATE(12)] = 332,
  [SMALL_STATE(13)] = 371,
  [SMALL_STATE(14)] = 408,
  [SMALL_STATE(15)] = 439,
  [SMALL_STATE(16)] = 471,
  [SMALL_STATE(17)] = 501,
  [SMALL_STATE(18)] = 524,
  [SMALL_STATE(19)] = 547,
  [SMALL_STATE(20)] = 570,
  [SMALL_STATE(21)] = 581,
  [SMALL_STATE(22)] = 592,
  [SMALL_STATE(23)] = 602,
  [SMALL_STATE(24)] = 612,
  [SMALL_STATE(25)] = 622,
  [SMALL_STATE(26)] = 638,
  [SMALL_STATE(27)] = 654,
  [SMALL_STATE(28)] = 664,
  [SMALL_STATE(29)] = 675,
  [SMALL_STATE(30)] = 686,
  [SMALL_STATE(31)] = 697,
  [SMALL_STATE(32)] = 708,
  [SMALL_STATE(33)] = 721,
  [SMALL_STATE(34)] = 734,
  [SMALL_STATE(35)] = 747,
  [SMALL_STATE(36)] = 760,
  [SMALL_STATE(37)] = 773,
  [SMALL_STATE(38)] = 786,
  [SMALL_STATE(39)] = 799,
  [SMALL_STATE(40)] = 812,
  [SMALL_STATE(41)] = 825,
  [SMALL_STATE(42)] = 838,
  [SMALL_STATE(43)] = 851,
  [SMALL_STATE(44)] = 864,
  [SMALL_STATE(45)] = 877,
  [SMALL_STATE(46)] = 888,
  [SMALL_STATE(47)] = 899,
  [SMALL_STATE(48)] = 910,
  [SMALL_STATE(49)] = 921,
  [SMALL_STATE(50)] = 932,
  [SMALL_STATE(51)] = 943,
  [SMALL_STATE(52)] = 956,
  [SMALL_STATE(53)] = 969,
  [SMALL_STATE(54)] = 982,
  [SMALL_STATE(55)] = 995,
  [SMALL_STATE(56)] = 1008,
  [SMALL_STATE(57)] = 1019,
  [SMALL_STATE(58)] = 1032,
  [SMALL_STATE(59)] = 1045,
  [SMALL_STATE(60)] = 1058,
  [SMALL_STATE(61)] = 1071,
  [SMALL_STATE(62)] = 1081,
  [SMALL_STATE(63)] = 1091,
  [SMALL_STATE(64)] = 1101,
  [SMALL_STATE(65)] = 1111,
  [SMALL_STATE(66)] = 1121,
  [SMALL_STATE(67)] = 1131,
  [SMALL_STATE(68)] = 1141,
  [SMALL_STATE(69)] = 1151,
  [SMALL_STATE(70)] = 1161,
  [SMALL_STATE(71)] = 1171,
  [SMALL_STATE(72)] = 1181,
  [SMALL_STATE(73)] = 1191,
  [SMALL_STATE(74)] = 1201,
  [SMALL_STATE(75)] = 1209,
  [SMALL_STATE(76)] = 1217,
  [SMALL_STATE(77)] = 1227,
  [SMALL_STATE(78)] = 1237,
  [SMALL_STATE(79)] = 1247,
  [SMALL_STATE(80)] = 1257,
  [SMALL_STATE(81)] = 1267,
  [SMALL_STATE(82)] = 1277,
  [SMALL_STATE(83)] = 1287,
  [SMALL_STATE(84)] = 1297,
  [SMALL_STATE(85)] = 1307,
  [SMALL_STATE(86)] = 1317,
  [SMALL_STATE(87)] = 1327,
  [SMALL_STATE(88)] = 1337,
  [SMALL_STATE(89)] = 1347,
  [SMALL_STATE(90)] = 1357,
  [SMALL_STATE(91)] = 1367,
  [SMALL_STATE(92)] = 1377,
  [SMALL_STATE(93)] = 1387,
  [SMALL_STATE(94)] = 1397,
  [SMALL_STATE(95)] = 1407,
  [SMALL_STATE(96)] = 1417,
  [SMALL_STATE(97)] = 1427,
  [SMALL_STATE(98)] = 1434,
  [SMALL_STATE(99)] = 1439,
  [SMALL_STATE(100)] = 1446,
  [SMALL_STATE(101)] = 1453,
  [SMALL_STATE(102)] = 1460,
  [SMALL_STATE(103)] = 1467,
  [SMALL_STATE(104)] = 1474,
  [SMALL_STATE(105)] = 1481,
  [SMALL_STATE(106)] = 1488,
  [SMALL_STATE(107)] = 1495,
  [SMALL_STATE(108)] = 1502,
  [SMALL_STATE(109)] = 1509,
  [SMALL_STATE(110)] = 1516,
  [SMALL_STATE(111)] = 1523,
  [SMALL_STATE(112)] = 1530,
  [SMALL_STATE(113)] = 1537,
  [SMALL_STATE(114)] = 1544,
  [SMALL_STATE(115)] = 1551,
  [SMALL_STATE(116)] = 1558,
  [SMALL_STATE(117)] = 1565,
  [SMALL_STATE(118)] = 1572,
  [SMALL_STATE(119)] = 1579,
  [SMALL_STATE(120)] = 1586,
  [SMALL_STATE(121)] = 1593,
  [SMALL_STATE(122)] = 1600,
  [SMALL_STATE(123)] = 1607,
  [SMALL_STATE(124)] = 1614,
  [SMALL_STATE(125)] = 1621,
  [SMALL_STATE(126)] = 1628,
  [SMALL_STATE(127)] = 1635,
  [SMALL_STATE(128)] = 1642,
  [SMALL_STATE(129)] = 1649,
  [SMALL_STATE(130)] = 1656,
  [SMALL_STATE(131)] = 1663,
  [SMALL_STATE(132)] = 1670,
  [SMALL_STATE(133)] = 1677,
  [SMALL_STATE(134)] = 1684,
  [SMALL_STATE(135)] = 1691,
  [SMALL_STATE(136)] = 1698,
  [SMALL_STATE(137)] = 1705,
  [SMALL_STATE(138)] = 1712,
  [SMALL_STATE(139)] = 1719,
  [SMALL_STATE(140)] = 1724,
  [SMALL_STATE(141)] = 1731,
  [SMALL_STATE(142)] = 1738,
  [SMALL_STATE(143)] = 1743,
  [SMALL_STATE(144)] = 1747,
  [SMALL_STATE(145)] = 1751,
  [SMALL_STATE(146)] = 1755,
  [SMALL_STATE(147)] = 1759,
  [SMALL_STATE(148)] = 1763,
  [SMALL_STATE(149)] = 1767,
  [SMALL_STATE(150)] = 1771,
  [SMALL_STATE(151)] = 1775,
  [SMALL_STATE(152)] = 1779,
  [SMALL_STATE(153)] = 1783,
  [SMALL_STATE(154)] = 1787,
  [SMALL_STATE(155)] = 1791,
  [SMALL_STATE(156)] = 1795,
  [SMALL_STATE(157)] = 1799,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(89),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(96),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(86),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(83),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(114),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(81),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(77),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(76),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(75),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(74),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(21),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(10),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(73),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(20),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(10),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(9),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(9),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(3),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__body_elements, 2),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__body_elements, 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(13),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(12),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(12),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__text_body, 2), SHIFT_REPEAT(10),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__text_body, 2), SHIFT_REPEAT(8),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_body, 2), SHIFT_REPEAT(8),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__text_body, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__char, 1),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__char, 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__text_body, 2), SHIFT_REPEAT(13),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__text_body, 2), SHIFT_REPEAT(11),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_body, 2), SHIFT_REPEAT(11),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_markup_block, 3),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline_markup_block, 3),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_emphasis, 3),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [190] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_block_repeat1, 2), SHIFT_REPEAT(153),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_block_repeat1, 2), SHIFT_REPEAT(68),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_block, 2),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__embed_directive, 4),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__bullet_list_item_repeat1, 2), SHIFT_REPEAT(31),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__bullet_list_item_repeat1, 2),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_block_repeat1, 2), SHIFT_REPEAT(22),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__substitution_definition_block_repeat1, 2), SHIFT_REPEAT(72),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bullet_list_item, 2),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__enumerated_list_item, 2),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 2),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_list_item, 2),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footnote, 2),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_citation, 2),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__directive_block_repeat1, 2), SHIFT_REPEAT(24),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__anoynymous_hyperlink_target_block_repeat1, 2), SHIFT_REPEAT(124),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hyperlink_target_block_repeat1, 2), SHIFT_REPEAT(123),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__citation_block_repeat1, 2), SHIFT_REPEAT(70),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__footnote_block_repeat1, 2), SHIFT_REPEAT(69),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_option_list_repeat1, 2), SHIFT_REPEAT(82),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_list_repeat1, 2), SHIFT_REPEAT(88),
  [258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enumerated_list_repeat1, 2), SHIFT_REPEAT(63),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bullet_list_repeat1, 2), SHIFT_REPEAT(71),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_line_block_repeat1, 2),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_block_repeat1, 2),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__anonymous_target, 1),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 1),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [318] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__bullet_list_item_repeat1, 2), SHIFT_REPEAT(91),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bullet_list, 2, .production_id = 2),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 2),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_block, 2),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__anoynymous_hyperlink_target_block, 2),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__footnote_block, 2),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directive_block, 2),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hyperlink_target_block, 2),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__substitution_definition_block, 2),
  [357] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_block, 2),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bullet_list, 1, .production_id = 1),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumerated_list, 1, .production_id = 1),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_list, 1),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_list, 1),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_block, 1),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__footnote_block, 1),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__citation_block, 1),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hyperlink_target_block, 1),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__anoynymous_hyperlink_target_block, 1),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directive_block, 1),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_list, 2),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_list, 2),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumerated_list, 2, .production_id = 2),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__comment_block_repeat1, 2),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__substitution_definition_block_repeat1, 2),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__directive_block_repeat1, 2),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__anoynymous_hyperlink_target_block_repeat1, 2),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hyperlink_target_block_repeat1, 2),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__citation_block_repeat1, 2),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__footnote_block_repeat1, 2),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_option_list_repeat1, 2),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_list_repeat1, 2),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enumerated_list_repeat1, 2, .production_id = 1),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__substitution_definition_block, 1),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_block, 1),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bullet_list_repeat1, 2, .production_id = 1),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__citation_block, 2),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_substitution_definition, 2),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__anonymous_target, 2),
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
