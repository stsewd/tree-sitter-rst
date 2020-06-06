#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 75
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 37
#define ALIAS_COUNT 1
#define TOKEN_COUNT 14
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5

enum {
  sym__char_bullet = 1,
  sym__numeric_bullet = 2,
  anon_sym_COLON = 3,
  anon_sym_ = 4,
  anon_sym_TAB = 5,
  anon_sym_2 = 6,
  anon_sym_3 = 7,
  sym__field_name = 8,
  aux_sym_option_list_item_token1 = 9,
  anon_sym_PIPE = 10,
  aux_sym__line_token1 = 11,
  sym__eol = 12,
  sym__blank_line = 13,
  sym_document = 14,
  sym__body_elements = 15,
  sym_paragraph = 16,
  sym__lists = 17,
  sym_bullet_list = 18,
  sym__bullet_list_item = 19,
  sym_enumerated_list = 20,
  sym__enumerated_list_item = 21,
  sym_field_list = 22,
  sym_field = 23,
  sym__field_body = 24,
  sym_option_list = 25,
  sym_option_list_item = 26,
  sym_line_block = 27,
  sym__single_line_block = 28,
  aux_sym__line = 29,
  aux_sym_document_repeat1 = 30,
  aux_sym_paragraph_repeat1 = 31,
  aux_sym_bullet_list_repeat1 = 32,
  aux_sym_enumerated_list_repeat1 = 33,
  aux_sym_field_list_repeat1 = 34,
  aux_sym_option_list_repeat1 = 35,
  aux_sym_line_block_repeat1 = 36,
  alias_sym_list_item = 37,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__char_bullet] = "_char_bullet",
  [sym__numeric_bullet] = "_numeric_bullet",
  [anon_sym_COLON] = ":",
  [anon_sym_] = " ",
  [anon_sym_TAB] = "\t",
  [anon_sym_2] = "",
  [anon_sym_3] = "\f",
  [sym__field_name] = "_field_name",
  [aux_sym_option_list_item_token1] = "option_list_item_token1",
  [anon_sym_PIPE] = "|",
  [aux_sym__line_token1] = "_line_token1",
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
  [sym__field_body] = "_field_body",
  [sym_option_list] = "option_list",
  [sym_option_list_item] = "option_list_item",
  [sym_line_block] = "line_block",
  [sym__single_line_block] = "_single_line_block",
  [aux_sym__line] = "_line",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_paragraph_repeat1] = "paragraph_repeat1",
  [aux_sym_bullet_list_repeat1] = "bullet_list_repeat1",
  [aux_sym_enumerated_list_repeat1] = "enumerated_list_repeat1",
  [aux_sym_field_list_repeat1] = "field_list_repeat1",
  [aux_sym_option_list_repeat1] = "option_list_repeat1",
  [aux_sym_line_block_repeat1] = "line_block_repeat1",
  [alias_sym_list_item] = "list_item",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__char_bullet] = sym__char_bullet,
  [sym__numeric_bullet] = sym__numeric_bullet,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_] = anon_sym_,
  [anon_sym_TAB] = anon_sym_TAB,
  [anon_sym_2] = anon_sym_2,
  [anon_sym_3] = anon_sym_3,
  [sym__field_name] = sym__field_name,
  [aux_sym_option_list_item_token1] = aux_sym_option_list_item_token1,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [aux_sym__line_token1] = aux_sym__line_token1,
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
  [sym__field_body] = sym__field_body,
  [sym_option_list] = sym_option_list,
  [sym_option_list_item] = sym_option_list_item,
  [sym_line_block] = sym_line_block,
  [sym__single_line_block] = sym__single_line_block,
  [aux_sym__line] = aux_sym__line,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_paragraph_repeat1] = aux_sym_paragraph_repeat1,
  [aux_sym_bullet_list_repeat1] = aux_sym_bullet_list_repeat1,
  [aux_sym_enumerated_list_repeat1] = aux_sym_enumerated_list_repeat1,
  [aux_sym_field_list_repeat1] = aux_sym_field_list_repeat1,
  [aux_sym_option_list_repeat1] = aux_sym_option_list_repeat1,
  [aux_sym_line_block_repeat1] = aux_sym_line_block_repeat1,
  [alias_sym_list_item] = alias_sym_list_item,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
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
  [anon_sym_COLON] = {
    .visible = true,
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
  [sym__field_name] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_option_list_item_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__line_token1] = {
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
  [sym__field_body] = {
    .visible = false,
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
  [aux_sym__line] = {
    .visible = false,
    .named = false,
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
  [aux_sym_option_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_line_block_repeat1] = {
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
      if (eof) ADVANCE(18);
      if (lookahead == '\t') ADVANCE(23);
      if (lookahead == 11) ADVANCE(24);
      if (lookahead == '\f') ADVANCE(25);
      if (lookahead == ' ') ADVANCE(22);
      if (lookahead == '#') ADVANCE(30);
      if (lookahead == '*' ||
          lookahead == 8226 ||
          lookahead == 8227 ||
          lookahead == 8259) ADVANCE(34);
      if (lookahead == '+') ADVANCE(36);
      if (lookahead == '-') ADVANCE(35);
      if (lookahead == '/') ADVANCE(37);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == '|') ADVANCE(28);
      if (lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'I' ||
          lookahead == 'L' ||
          lookahead == 'M' ||
          lookahead == 'V' ||
          lookahead == 'X') ADVANCE(31);
      if (lookahead == 'c' ||
          lookahead == 'd' ||
          lookahead == 'i' ||
          lookahead == 'l' ||
          lookahead == 'm' ||
          lookahead == 'v' ||
          lookahead == 'x') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(30);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(29);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(23);
      if (lookahead == 11) ADVANCE(24);
      if (lookahead == '\f') ADVANCE(25);
      if (lookahead == ' ') ADVANCE(22);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '+') ADVANCE(13);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '/') ADVANCE(13);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'I' ||
          lookahead == 'L' ||
          lookahead == 'M' ||
          lookahead == 'V' ||
          lookahead == 'X') ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == 'c' ||
          lookahead == 'd' ||
          lookahead == 'i' ||
          lookahead == 'l' ||
          lookahead == 'm' ||
          lookahead == 'v' ||
          lookahead == 'x') ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f') ADVANCE(10);
      if (lookahead == ' ') ADVANCE(11);
      if (lookahead == ',') ADVANCE(2);
      if (lookahead == '=') ADVANCE(14);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(20);
      END_STATE();
    case 10:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(27);
      END_STATE();
    case 11:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead == ',') ADVANCE(2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 15:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(29);
      END_STATE();
    case 16:
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(26);
      END_STATE();
    case 17:
      if (eof) ADVANCE(18);
      if (lookahead == '#') ADVANCE(30);
      if (lookahead == '*' ||
          lookahead == 8226 ||
          lookahead == 8227 ||
          lookahead == 8259) ADVANCE(34);
      if (lookahead == '+') ADVANCE(36);
      if (lookahead == '-') ADVANCE(35);
      if (lookahead == '/') ADVANCE(37);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == '|') ADVANCE(28);
      if (lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'I' ||
          lookahead == 'L' ||
          lookahead == 'M' ||
          lookahead == 'V' ||
          lookahead == 'X') ADVANCE(31);
      if (lookahead == 'c' ||
          lookahead == 'd' ||
          lookahead == 'i' ||
          lookahead == 'l' ||
          lookahead == 'm' ||
          lookahead == 'v' ||
          lookahead == 'x') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(30);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(29);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym__char_bullet);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym__numeric_bullet);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_TAB);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_3);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym__field_name);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_option_list_item_token1);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym__line_token1);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '.') ADVANCE(9);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'I' ||
          lookahead == 'L' ||
          lookahead == 'M' ||
          lookahead == 'V' ||
          lookahead == 'X') ADVANCE(5);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == 'c' ||
          lookahead == 'd' ||
          lookahead == 'i' ||
          lookahead == 'l' ||
          lookahead == 'm' ||
          lookahead == 'v' ||
          lookahead == 'x') ADVANCE(6);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '.') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(19);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead == '-') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 17, .external_lex_state = 1},
  [2] = {.lex_state = 17, .external_lex_state = 1},
  [3] = {.lex_state = 17, .external_lex_state = 1},
  [4] = {.lex_state = 17, .external_lex_state = 1},
  [5] = {.lex_state = 1, .external_lex_state = 1},
  [6] = {.lex_state = 1, .external_lex_state = 2},
  [7] = {.lex_state = 1, .external_lex_state = 2},
  [8] = {.lex_state = 1, .external_lex_state = 2},
  [9] = {.lex_state = 15, .external_lex_state = 1},
  [10] = {.lex_state = 0, .external_lex_state = 2},
  [11] = {.lex_state = 15, .external_lex_state = 2},
  [12] = {.lex_state = 15, .external_lex_state = 2},
  [13] = {.lex_state = 15, .external_lex_state = 1},
  [14] = {.lex_state = 15, .external_lex_state = 2},
  [15] = {.lex_state = 15, .external_lex_state = 1},
  [16] = {.lex_state = 15, .external_lex_state = 1},
  [17] = {.lex_state = 0, .external_lex_state = 2},
  [18] = {.lex_state = 0, .external_lex_state = 2},
  [19] = {.lex_state = 0, .external_lex_state = 2},
  [20] = {.lex_state = 0, .external_lex_state = 2},
  [21] = {.lex_state = 0, .external_lex_state = 2},
  [22] = {.lex_state = 15, .external_lex_state = 1},
  [23] = {.lex_state = 15, .external_lex_state = 1},
  [24] = {.lex_state = 0, .external_lex_state = 2},
  [25] = {.lex_state = 0, .external_lex_state = 2},
  [26] = {.lex_state = 0, .external_lex_state = 2},
  [27] = {.lex_state = 15, .external_lex_state = 1},
  [28] = {.lex_state = 15, .external_lex_state = 1},
  [29] = {.lex_state = 15, .external_lex_state = 2},
  [30] = {.lex_state = 0, .external_lex_state = 2},
  [31] = {.lex_state = 15, .external_lex_state = 2},
  [32] = {.lex_state = 15, .external_lex_state = 2},
  [33] = {.lex_state = 15, .external_lex_state = 2},
  [34] = {.lex_state = 15, .external_lex_state = 2},
  [35] = {.lex_state = 15, .external_lex_state = 2},
  [36] = {.lex_state = 15, .external_lex_state = 2},
  [37] = {.lex_state = 15, .external_lex_state = 2},
  [38] = {.lex_state = 15, .external_lex_state = 2},
  [39] = {.lex_state = 15, .external_lex_state = 2},
  [40] = {.lex_state = 15, .external_lex_state = 2},
  [41] = {.lex_state = 15, .external_lex_state = 2},
  [42] = {.lex_state = 15, .external_lex_state = 2},
  [43] = {.lex_state = 15, .external_lex_state = 2},
  [44] = {.lex_state = 15, .external_lex_state = 2},
  [45] = {.lex_state = 15, .external_lex_state = 2},
  [46] = {.lex_state = 0, .external_lex_state = 1},
  [47] = {.lex_state = 0, .external_lex_state = 2},
  [48] = {.lex_state = 0, .external_lex_state = 1},
  [49] = {.lex_state = 0, .external_lex_state = 1},
  [50] = {.lex_state = 0, .external_lex_state = 1},
  [51] = {.lex_state = 16, .external_lex_state = 2},
  [52] = {.lex_state = 0, .external_lex_state = 2},
  [53] = {.lex_state = 16, .external_lex_state = 2},
  [54] = {.lex_state = 0, .external_lex_state = 2},
  [55] = {.lex_state = 0, .external_lex_state = 2},
  [56] = {.lex_state = 0, .external_lex_state = 1},
  [57] = {.lex_state = 0, .external_lex_state = 1},
  [58] = {.lex_state = 0, .external_lex_state = 1},
  [59] = {.lex_state = 0, .external_lex_state = 2},
  [60] = {.lex_state = 0, .external_lex_state = 1},
  [61] = {.lex_state = 0, .external_lex_state = 1},
  [62] = {.lex_state = 0, .external_lex_state = 2},
  [63] = {.lex_state = 0, .external_lex_state = 1},
  [64] = {.lex_state = 0, .external_lex_state = 1},
  [65] = {.lex_state = 15, .external_lex_state = 2},
  [66] = {.lex_state = 0, .external_lex_state = 2},
  [67] = {.lex_state = 0, .external_lex_state = 2},
  [68] = {.lex_state = 0, .external_lex_state = 1},
  [69] = {.lex_state = 0, .external_lex_state = 2},
  [70] = {.lex_state = 0, .external_lex_state = 2},
  [71] = {.lex_state = 0, .external_lex_state = 2},
  [72] = {.lex_state = 0, .external_lex_state = 2},
  [73] = {.lex_state = 0, .external_lex_state = 2},
  [74] = {.lex_state = 0, .external_lex_state = 2},
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
    [sym__char_bullet] = ACTIONS(1),
    [sym__numeric_bullet] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_TAB] = ACTIONS(1),
    [anon_sym_2] = ACTIONS(1),
    [anon_sym_3] = ACTIONS(1),
    [aux_sym_option_list_item_token1] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [aux_sym__line_token1] = ACTIONS(1),
    [sym__eol] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(66),
    [sym__body_elements] = STATE(2),
    [sym_paragraph] = STATE(58),
    [sym__lists] = STATE(58),
    [sym_bullet_list] = STATE(58),
    [sym__bullet_list_item] = STATE(56),
    [sym_enumerated_list] = STATE(58),
    [sym__enumerated_list_item] = STATE(50),
    [sym_field_list] = STATE(58),
    [sym_field] = STATE(49),
    [sym_option_list] = STATE(58),
    [sym_option_list_item] = STATE(48),
    [sym_line_block] = STATE(58),
    [sym__single_line_block] = STATE(60),
    [aux_sym__line] = STATE(16),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_paragraph_repeat1] = STATE(11),
    [aux_sym_bullet_list_repeat1] = STATE(17),
    [aux_sym_enumerated_list_repeat1] = STATE(18),
    [aux_sym_field_list_repeat1] = STATE(19),
    [aux_sym_option_list_repeat1] = STATE(20),
    [aux_sym_line_block_repeat1] = STATE(21),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym__char_bullet] = ACTIONS(7),
    [sym__numeric_bullet] = ACTIONS(9),
    [anon_sym_COLON] = ACTIONS(11),
    [aux_sym_option_list_item_token1] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(15),
    [aux_sym__line_token1] = ACTIONS(17),
    [sym__eol] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(19),
  },
  [2] = {
    [sym__body_elements] = STATE(3),
    [sym_paragraph] = STATE(58),
    [sym__lists] = STATE(58),
    [sym_bullet_list] = STATE(58),
    [sym__bullet_list_item] = STATE(56),
    [sym_enumerated_list] = STATE(58),
    [sym__enumerated_list_item] = STATE(50),
    [sym_field_list] = STATE(58),
    [sym_field] = STATE(49),
    [sym_option_list] = STATE(58),
    [sym_option_list_item] = STATE(48),
    [sym_line_block] = STATE(58),
    [sym__single_line_block] = STATE(60),
    [aux_sym__line] = STATE(16),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_paragraph_repeat1] = STATE(11),
    [aux_sym_bullet_list_repeat1] = STATE(17),
    [aux_sym_enumerated_list_repeat1] = STATE(18),
    [aux_sym_field_list_repeat1] = STATE(19),
    [aux_sym_option_list_repeat1] = STATE(20),
    [aux_sym_line_block_repeat1] = STATE(21),
    [ts_builtin_sym_end] = ACTIONS(21),
    [sym__char_bullet] = ACTIONS(7),
    [sym__numeric_bullet] = ACTIONS(9),
    [anon_sym_COLON] = ACTIONS(11),
    [aux_sym_option_list_item_token1] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(15),
    [aux_sym__line_token1] = ACTIONS(17),
    [sym__eol] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(23),
  },
  [3] = {
    [sym__body_elements] = STATE(3),
    [sym_paragraph] = STATE(58),
    [sym__lists] = STATE(58),
    [sym_bullet_list] = STATE(58),
    [sym__bullet_list_item] = STATE(56),
    [sym_enumerated_list] = STATE(58),
    [sym__enumerated_list_item] = STATE(50),
    [sym_field_list] = STATE(58),
    [sym_field] = STATE(49),
    [sym_option_list] = STATE(58),
    [sym_option_list_item] = STATE(48),
    [sym_line_block] = STATE(58),
    [sym__single_line_block] = STATE(60),
    [aux_sym__line] = STATE(16),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_paragraph_repeat1] = STATE(11),
    [aux_sym_bullet_list_repeat1] = STATE(17),
    [aux_sym_enumerated_list_repeat1] = STATE(18),
    [aux_sym_field_list_repeat1] = STATE(19),
    [aux_sym_option_list_repeat1] = STATE(20),
    [aux_sym_line_block_repeat1] = STATE(21),
    [ts_builtin_sym_end] = ACTIONS(25),
    [sym__char_bullet] = ACTIONS(27),
    [sym__numeric_bullet] = ACTIONS(30),
    [anon_sym_COLON] = ACTIONS(33),
    [aux_sym_option_list_item_token1] = ACTIONS(36),
    [anon_sym_PIPE] = ACTIONS(39),
    [aux_sym__line_token1] = ACTIONS(42),
    [sym__eol] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(45),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(50), 1,
      aux_sym__line_token1,
    ACTIONS(48), 7,
      sym__blank_line,
      ts_builtin_sym_end,
      sym__char_bullet,
      sym__numeric_bullet,
      anon_sym_COLON,
      aux_sym_option_list_item_token1,
      anon_sym_PIPE,
  [16] = 2,
    ACTIONS(54), 2,
      sym__eol,
      sym__blank_line,
    ACTIONS(52), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [27] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(56), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [37] = 2,
    ACTIONS(54), 1,
      sym__eol,
    ACTIONS(58), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [47] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(60), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [57] = 4,
    ACTIONS(62), 1,
      aux_sym__line_token1,
    ACTIONS(64), 1,
      sym__eol,
    ACTIONS(66), 1,
      sym__blank_line,
    STATE(27), 1,
      aux_sym__line,
  [70] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(68), 1,
      sym__char_bullet,
    STATE(10), 1,
      aux_sym_bullet_list_repeat1,
    STATE(74), 1,
      sym__bullet_list_item,
  [83] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(71), 1,
      aux_sym__line_token1,
    STATE(9), 1,
      aux_sym__line,
    STATE(29), 1,
      aux_sym_paragraph_repeat1,
  [96] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(73), 1,
      aux_sym__line_token1,
    STATE(37), 1,
      aux_sym__line,
    STATE(69), 1,
      sym__field_body,
  [109] = 3,
    ACTIONS(62), 1,
      aux_sym__line_token1,
    STATE(27), 1,
      aux_sym__line,
    ACTIONS(75), 2,
      sym__eol,
      sym__blank_line,
  [120] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(77), 1,
      aux_sym__line_token1,
    STATE(13), 1,
      aux_sym__line,
    STATE(57), 1,
      sym__field_body,
  [133] = 3,
    ACTIONS(62), 1,
      aux_sym__line_token1,
    STATE(27), 1,
      aux_sym__line,
    ACTIONS(79), 2,
      sym__eol,
      sym__blank_line,
  [144] = 4,
    ACTIONS(62), 1,
      aux_sym__line_token1,
    ACTIONS(64), 1,
      sym__eol,
    ACTIONS(81), 1,
      sym__blank_line,
    STATE(27), 1,
      aux_sym__line,
  [157] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(7), 1,
      sym__char_bullet,
    STATE(10), 1,
      aux_sym_bullet_list_repeat1,
    STATE(64), 1,
      sym__bullet_list_item,
  [170] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(9), 1,
      sym__numeric_bullet,
    STATE(30), 1,
      aux_sym_enumerated_list_repeat1,
    STATE(63), 1,
      sym__enumerated_list_item,
  [183] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(11), 1,
      anon_sym_COLON,
    STATE(26), 1,
      aux_sym_field_list_repeat1,
    STATE(46), 1,
      sym_field,
  [196] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(13), 1,
      aux_sym_option_list_item_token1,
    STATE(25), 1,
      aux_sym_option_list_repeat1,
    STATE(61), 1,
      sym_option_list_item,
  [209] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(15), 1,
      anon_sym_PIPE,
    STATE(24), 1,
      aux_sym_line_block_repeat1,
    STATE(68), 1,
      sym__single_line_block,
  [222] = 3,
    ACTIONS(62), 1,
      aux_sym__line_token1,
    STATE(27), 1,
      aux_sym__line,
    ACTIONS(83), 2,
      sym__eol,
      sym__blank_line,
  [233] = 3,
    ACTIONS(62), 1,
      aux_sym__line_token1,
    STATE(27), 1,
      aux_sym__line,
    ACTIONS(85), 2,
      sym__eol,
      sym__blank_line,
  [244] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(87), 1,
      anon_sym_PIPE,
    STATE(24), 1,
      aux_sym_line_block_repeat1,
    STATE(70), 1,
      sym__single_line_block,
  [257] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(90), 1,
      aux_sym_option_list_item_token1,
    STATE(25), 1,
      aux_sym_option_list_repeat1,
    STATE(71), 1,
      sym_option_list_item,
  [270] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(93), 1,
      anon_sym_COLON,
    STATE(26), 1,
      aux_sym_field_list_repeat1,
    STATE(72), 1,
      sym_field,
  [283] = 3,
    ACTIONS(96), 1,
      aux_sym__line_token1,
    STATE(27), 1,
      aux_sym__line,
    ACTIONS(99), 2,
      sym__eol,
      sym__blank_line,
  [294] = 3,
    ACTIONS(62), 1,
      aux_sym__line_token1,
    STATE(27), 1,
      aux_sym__line,
    ACTIONS(101), 2,
      sym__eol,
      sym__blank_line,
  [305] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(103), 1,
      aux_sym__line_token1,
    STATE(29), 1,
      aux_sym_paragraph_repeat1,
    STATE(32), 1,
      aux_sym__line,
  [318] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(106), 1,
      sym__numeric_bullet,
    STATE(30), 1,
      aux_sym_enumerated_list_repeat1,
    STATE(73), 1,
      sym__enumerated_list_item,
  [331] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(109), 1,
      aux_sym__line_token1,
    STATE(22), 1,
      aux_sym__line,
  [341] = 3,
    ACTIONS(64), 1,
      sym__eol,
    ACTIONS(111), 1,
      aux_sym__line_token1,
    STATE(39), 1,
      aux_sym__line,
  [351] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(113), 1,
      aux_sym__line_token1,
    STATE(15), 1,
      aux_sym__line,
  [361] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(115), 1,
      aux_sym__line_token1,
    STATE(41), 1,
      aux_sym__line,
  [371] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(117), 1,
      aux_sym__line_token1,
    STATE(42), 1,
      aux_sym__line,
  [381] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(119), 1,
      aux_sym__line_token1,
    STATE(44), 1,
      aux_sym__line,
  [391] = 3,
    ACTIONS(75), 1,
      sym__eol,
    ACTIONS(111), 1,
      aux_sym__line_token1,
    STATE(39), 1,
      aux_sym__line,
  [401] = 3,
    ACTIONS(79), 1,
      sym__eol,
    ACTIONS(111), 1,
      aux_sym__line_token1,
    STATE(39), 1,
      aux_sym__line,
  [411] = 3,
    ACTIONS(99), 1,
      sym__eol,
    ACTIONS(121), 1,
      aux_sym__line_token1,
    STATE(39), 1,
      aux_sym__line,
  [421] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(124), 1,
      aux_sym__line_token1,
    STATE(38), 1,
      aux_sym__line,
  [431] = 3,
    ACTIONS(101), 1,
      sym__eol,
    ACTIONS(111), 1,
      aux_sym__line_token1,
    STATE(39), 1,
      aux_sym__line,
  [441] = 3,
    ACTIONS(85), 1,
      sym__eol,
    ACTIONS(111), 1,
      aux_sym__line_token1,
    STATE(39), 1,
      aux_sym__line,
  [451] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(126), 1,
      aux_sym__line_token1,
    STATE(28), 1,
      aux_sym__line,
  [461] = 3,
    ACTIONS(83), 1,
      sym__eol,
    ACTIONS(111), 1,
      aux_sym__line_token1,
    STATE(39), 1,
      aux_sym__line,
  [471] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(128), 1,
      aux_sym__line_token1,
    STATE(23), 1,
      aux_sym__line,
  [481] = 2,
    ACTIONS(130), 1,
      sym__eol,
    ACTIONS(132), 1,
      sym__blank_line,
  [488] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(134), 1,
      anon_sym_PIPE,
  [495] = 2,
    ACTIONS(136), 1,
      sym__eol,
    ACTIONS(138), 1,
      sym__blank_line,
  [502] = 2,
    ACTIONS(130), 1,
      sym__eol,
    ACTIONS(140), 1,
      sym__blank_line,
  [509] = 2,
    ACTIONS(142), 1,
      sym__eol,
    ACTIONS(144), 1,
      sym__blank_line,
  [516] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(146), 1,
      sym__field_name,
  [523] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(148), 1,
      anon_sym_COLON,
  [530] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(150), 1,
      sym__field_name,
  [537] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(152), 1,
      sym__numeric_bullet,
  [544] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(154), 1,
      anon_sym_COLON,
  [551] = 2,
    ACTIONS(156), 1,
      sym__eol,
    ACTIONS(158), 1,
      sym__blank_line,
  [558] = 1,
    ACTIONS(160), 2,
      sym__eol,
      sym__blank_line,
  [563] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(162), 1,
      sym__blank_line,
  [570] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(164), 1,
      sym__char_bullet,
  [577] = 2,
    ACTIONS(166), 1,
      sym__eol,
    ACTIONS(168), 1,
      sym__blank_line,
  [584] = 2,
    ACTIONS(136), 1,
      sym__eol,
    ACTIONS(170), 1,
      sym__blank_line,
  [591] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(172), 1,
      anon_sym_COLON,
  [598] = 2,
    ACTIONS(142), 1,
      sym__eol,
    ACTIONS(174), 1,
      sym__blank_line,
  [605] = 2,
    ACTIONS(156), 1,
      sym__eol,
    ACTIONS(176), 1,
      sym__blank_line,
  [612] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(178), 1,
      aux_sym__line_token1,
  [619] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(180), 1,
      ts_builtin_sym_end,
  [626] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(182), 1,
      aux_sym_option_list_item_token1,
  [633] = 2,
    ACTIONS(166), 1,
      sym__eol,
    ACTIONS(184), 1,
      sym__blank_line,
  [640] = 1,
    ACTIONS(160), 1,
      sym__eol,
  [644] = 1,
    ACTIONS(166), 1,
      sym__eol,
  [648] = 1,
    ACTIONS(136), 1,
      sym__eol,
  [652] = 1,
    ACTIONS(130), 1,
      sym__eol,
  [656] = 1,
    ACTIONS(142), 1,
      sym__eol,
  [660] = 1,
    ACTIONS(156), 1,
      sym__eol,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 16,
  [SMALL_STATE(6)] = 27,
  [SMALL_STATE(7)] = 37,
  [SMALL_STATE(8)] = 47,
  [SMALL_STATE(9)] = 57,
  [SMALL_STATE(10)] = 70,
  [SMALL_STATE(11)] = 83,
  [SMALL_STATE(12)] = 96,
  [SMALL_STATE(13)] = 109,
  [SMALL_STATE(14)] = 120,
  [SMALL_STATE(15)] = 133,
  [SMALL_STATE(16)] = 144,
  [SMALL_STATE(17)] = 157,
  [SMALL_STATE(18)] = 170,
  [SMALL_STATE(19)] = 183,
  [SMALL_STATE(20)] = 196,
  [SMALL_STATE(21)] = 209,
  [SMALL_STATE(22)] = 222,
  [SMALL_STATE(23)] = 233,
  [SMALL_STATE(24)] = 244,
  [SMALL_STATE(25)] = 257,
  [SMALL_STATE(26)] = 270,
  [SMALL_STATE(27)] = 283,
  [SMALL_STATE(28)] = 294,
  [SMALL_STATE(29)] = 305,
  [SMALL_STATE(30)] = 318,
  [SMALL_STATE(31)] = 331,
  [SMALL_STATE(32)] = 341,
  [SMALL_STATE(33)] = 351,
  [SMALL_STATE(34)] = 361,
  [SMALL_STATE(35)] = 371,
  [SMALL_STATE(36)] = 381,
  [SMALL_STATE(37)] = 391,
  [SMALL_STATE(38)] = 401,
  [SMALL_STATE(39)] = 411,
  [SMALL_STATE(40)] = 421,
  [SMALL_STATE(41)] = 431,
  [SMALL_STATE(42)] = 441,
  [SMALL_STATE(43)] = 451,
  [SMALL_STATE(44)] = 461,
  [SMALL_STATE(45)] = 471,
  [SMALL_STATE(46)] = 481,
  [SMALL_STATE(47)] = 488,
  [SMALL_STATE(48)] = 495,
  [SMALL_STATE(49)] = 502,
  [SMALL_STATE(50)] = 509,
  [SMALL_STATE(51)] = 516,
  [SMALL_STATE(52)] = 523,
  [SMALL_STATE(53)] = 530,
  [SMALL_STATE(54)] = 537,
  [SMALL_STATE(55)] = 544,
  [SMALL_STATE(56)] = 551,
  [SMALL_STATE(57)] = 558,
  [SMALL_STATE(58)] = 563,
  [SMALL_STATE(59)] = 570,
  [SMALL_STATE(60)] = 577,
  [SMALL_STATE(61)] = 584,
  [SMALL_STATE(62)] = 591,
  [SMALL_STATE(63)] = 598,
  [SMALL_STATE(64)] = 605,
  [SMALL_STATE(65)] = 612,
  [SMALL_STATE(66)] = 619,
  [SMALL_STATE(67)] = 626,
  [SMALL_STATE(68)] = 633,
  [SMALL_STATE(69)] = 640,
  [SMALL_STATE(70)] = 644,
  [SMALL_STATE(71)] = 648,
  [SMALL_STATE(72)] = 652,
  [SMALL_STATE(73)] = 656,
  [SMALL_STATE(74)] = 660,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(31),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(45),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(53),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(43),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(5),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(16),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(3),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__body_elements, 2),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__body_elements, 2),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_block, 1),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bullet_list_repeat1, 2), SHIFT_REPEAT(36),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_body, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_block, 3),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bullet_list_item, 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__enumerated_list_item, 2),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_block_repeat1, 2), SHIFT_REPEAT(7),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_option_list_repeat1, 2), SHIFT_REPEAT(34),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_list_repeat1, 2), SHIFT_REPEAT(51),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__line, 2), SHIFT_REPEAT(27),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__line, 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_list_item, 2),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(32),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enumerated_list_repeat1, 2), SHIFT_REPEAT(35),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__line, 2), SHIFT_REPEAT(39),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_list, 2),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_block_repeat1, 2),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_list, 1),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_list, 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumerated_list, 1, .production_id = 1),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enumerated_list_repeat1, 2, .production_id = 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_list_repeat1, 2),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bullet_list, 1, .production_id = 1),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 5),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bullet_list_repeat1, 2, .production_id = 1),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_block, 1),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_list, 2),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumerated_list, 2, .production_id = 2),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bullet_list, 2, .production_id = 2),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [180] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_option_list_repeat1, 2),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_block, 2),
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
