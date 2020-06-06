#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 84
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 38
#define ALIAS_COUNT 1
#define TOKEN_COUNT 16
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
  anon_sym_COMMA = 9,
  anon_sym_EQ = 10,
  sym__option_string = 11,
  sym__option_argument = 12,
  aux_sym__line_token1 = 13,
  sym__eol = 14,
  sym__blank_line = 15,
  sym_document = 16,
  sym__body_elements = 17,
  sym_paragraph = 18,
  sym__lists = 19,
  sym_bullet_list = 20,
  sym__bullet_list_item = 21,
  sym_enumerated_list = 22,
  sym__enumerated_list_item = 23,
  sym_field_list = 24,
  sym_field = 25,
  sym__field_body = 26,
  sym_option_list = 27,
  sym_option_list_item = 28,
  sym__option = 29,
  aux_sym__line = 30,
  aux_sym_document_repeat1 = 31,
  aux_sym_paragraph_repeat1 = 32,
  aux_sym_bullet_list_repeat1 = 33,
  aux_sym_enumerated_list_repeat1 = 34,
  aux_sym_field_list_repeat1 = 35,
  aux_sym_option_list_repeat1 = 36,
  aux_sym_option_list_item_repeat1 = 37,
  alias_sym_list_item = 38,
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
  [anon_sym_COMMA] = ", ",
  [anon_sym_EQ] = "=",
  [sym__option_string] = "_option_string",
  [sym__option_argument] = "_option_argument",
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
  [sym__option] = "_option",
  [aux_sym__line] = "_line",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_paragraph_repeat1] = "paragraph_repeat1",
  [aux_sym_bullet_list_repeat1] = "bullet_list_repeat1",
  [aux_sym_enumerated_list_repeat1] = "enumerated_list_repeat1",
  [aux_sym_field_list_repeat1] = "field_list_repeat1",
  [aux_sym_option_list_repeat1] = "option_list_repeat1",
  [aux_sym_option_list_item_repeat1] = "option_list_item_repeat1",
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
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym__option_string] = sym__option_string,
  [sym__option_argument] = sym__option_argument,
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
  [sym__option] = sym__option,
  [aux_sym__line] = aux_sym__line,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_paragraph_repeat1] = aux_sym_paragraph_repeat1,
  [aux_sym_bullet_list_repeat1] = aux_sym_bullet_list_repeat1,
  [aux_sym_enumerated_list_repeat1] = aux_sym_enumerated_list_repeat1,
  [aux_sym_field_list_repeat1] = aux_sym_field_list_repeat1,
  [aux_sym_option_list_repeat1] = aux_sym_option_list_repeat1,
  [aux_sym_option_list_item_repeat1] = aux_sym_option_list_item_repeat1,
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
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym__option_string] = {
    .visible = false,
    .named = true,
  },
  [sym__option_argument] = {
    .visible = false,
    .named = true,
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
  [sym__option] = {
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
  [aux_sym_option_list_item_repeat1] = {
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
      if (eof) ADVANCE(11);
      if (lookahead == '\t') ADVANCE(16);
      if (lookahead == 11) ADVANCE(17);
      if (lookahead == '\f') ADVANCE(18);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '*' ||
          lookahead == 8226 ||
          lookahead == 8227 ||
          lookahead == 8259) ADVANCE(33);
      if (lookahead == '+') ADVANCE(35);
      if (lookahead == '-') ADVANCE(34);
      if (lookahead == '/') ADVANCE(36);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == '=') ADVANCE(21);
      if (lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'I' ||
          lookahead == 'L' ||
          lookahead == 'M' ||
          lookahead == 'V' ||
          lookahead == 'X') ADVANCE(23);
      if (lookahead == 'c' ||
          lookahead == 'd' ||
          lookahead == 'i' ||
          lookahead == 'l' ||
          lookahead == 'm' ||
          lookahead == 'v' ||
          lookahead == 'x') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(26);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(28);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(16);
      if (lookahead == 11) ADVANCE(17);
      if (lookahead == '\f') ADVANCE(18);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == ',') ADVANCE(2);
      if (lookahead == '=') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(20);
      END_STATE();
    case 3:
      if (lookahead == '.') ADVANCE(6);
      if (lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'I' ||
          lookahead == 'L' ||
          lookahead == 'M' ||
          lookahead == 'V' ||
          lookahead == 'X') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(6);
      if (lookahead == 'c' ||
          lookahead == 'd' ||
          lookahead == 'i' ||
          lookahead == 'l' ||
          lookahead == 'm' ||
          lookahead == 'v' ||
          lookahead == 'x') ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(13);
      END_STATE();
    case 7:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 8:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(28);
      END_STATE();
    case 9:
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(19);
      END_STATE();
    case 10:
      if (eof) ADVANCE(11);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '*' ||
          lookahead == 8226 ||
          lookahead == 8227 ||
          lookahead == 8259) ADVANCE(33);
      if (lookahead == '+') ADVANCE(35);
      if (lookahead == '-') ADVANCE(34);
      if (lookahead == '/') ADVANCE(36);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'I' ||
          lookahead == 'L' ||
          lookahead == 'M' ||
          lookahead == 'V' ||
          lookahead == 'X') ADVANCE(30);
      if (lookahead == 'c' ||
          lookahead == 'd' ||
          lookahead == 'i' ||
          lookahead == 'l' ||
          lookahead == 'm' ||
          lookahead == 'v' ||
          lookahead == 'x') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(29);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(28);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym__char_bullet);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym__numeric_bullet);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_TAB);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_3);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym__field_name);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym__option_string);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym__option_argument);
      if (lookahead == '.') ADVANCE(6);
      if (lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'I' ||
          lookahead == 'L' ||
          lookahead == 'M' ||
          lookahead == 'V' ||
          lookahead == 'X') ADVANCE(23);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym__option_argument);
      if (lookahead == '.') ADVANCE(6);
      if (lookahead == 'c' ||
          lookahead == 'd' ||
          lookahead == 'i' ||
          lookahead == 'l' ||
          lookahead == 'm' ||
          lookahead == 'v' ||
          lookahead == 'x') ADVANCE(24);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym__option_argument);
      if (lookahead == '.') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym__option_argument);
      if (lookahead == '.') ADVANCE(6);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym__option_argument);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym__line_token1);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '.') ADVANCE(6);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '.') ADVANCE(6);
      if (lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'I' ||
          lookahead == 'L' ||
          lookahead == 'M' ||
          lookahead == 'V' ||
          lookahead == 'X') ADVANCE(3);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '.') ADVANCE(6);
      if (lookahead == 'c' ||
          lookahead == 'd' ||
          lookahead == 'i' ||
          lookahead == 'l' ||
          lookahead == 'm' ||
          lookahead == 'v' ||
          lookahead == 'x') ADVANCE(4);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '.') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(12);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead == '-') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 10, .external_lex_state = 1},
  [2] = {.lex_state = 10, .external_lex_state = 1},
  [3] = {.lex_state = 10, .external_lex_state = 1},
  [4] = {.lex_state = 10, .external_lex_state = 1},
  [5] = {.lex_state = 1, .external_lex_state = 2},
  [6] = {.lex_state = 0, .external_lex_state = 2},
  [7] = {.lex_state = 1, .external_lex_state = 2},
  [8] = {.lex_state = 1, .external_lex_state = 2},
  [9] = {.lex_state = 1, .external_lex_state = 2},
  [10] = {.lex_state = 1, .external_lex_state = 2},
  [11] = {.lex_state = 1, .external_lex_state = 2},
  [12] = {.lex_state = 0, .external_lex_state = 2},
  [13] = {.lex_state = 1, .external_lex_state = 2},
  [14] = {.lex_state = 1, .external_lex_state = 2},
  [15] = {.lex_state = 1, .external_lex_state = 2},
  [16] = {.lex_state = 1, .external_lex_state = 2},
  [17] = {.lex_state = 1, .external_lex_state = 2},
  [18] = {.lex_state = 1, .external_lex_state = 2},
  [19] = {.lex_state = 1, .external_lex_state = 2},
  [20] = {.lex_state = 8, .external_lex_state = 2},
  [21] = {.lex_state = 10, .external_lex_state = 2},
  [22] = {.lex_state = 0, .external_lex_state = 2},
  [23] = {.lex_state = 0, .external_lex_state = 2},
  [24] = {.lex_state = 8, .external_lex_state = 1},
  [25] = {.lex_state = 8, .external_lex_state = 1},
  [26] = {.lex_state = 0, .external_lex_state = 2},
  [27] = {.lex_state = 8, .external_lex_state = 2},
  [28] = {.lex_state = 0, .external_lex_state = 2},
  [29] = {.lex_state = 8, .external_lex_state = 1},
  [30] = {.lex_state = 8, .external_lex_state = 1},
  [31] = {.lex_state = 8, .external_lex_state = 1},
  [32] = {.lex_state = 8, .external_lex_state = 2},
  [33] = {.lex_state = 0, .external_lex_state = 2},
  [34] = {.lex_state = 8, .external_lex_state = 1},
  [35] = {.lex_state = 8, .external_lex_state = 1},
  [36] = {.lex_state = 8, .external_lex_state = 2},
  [37] = {.lex_state = 0, .external_lex_state = 2},
  [38] = {.lex_state = 0, .external_lex_state = 2},
  [39] = {.lex_state = 8, .external_lex_state = 1},
  [40] = {.lex_state = 10, .external_lex_state = 2},
  [41] = {.lex_state = 8, .external_lex_state = 2},
  [42] = {.lex_state = 8, .external_lex_state = 2},
  [43] = {.lex_state = 8, .external_lex_state = 2},
  [44] = {.lex_state = 8, .external_lex_state = 2},
  [45] = {.lex_state = 8, .external_lex_state = 2},
  [46] = {.lex_state = 8, .external_lex_state = 2},
  [47] = {.lex_state = 8, .external_lex_state = 2},
  [48] = {.lex_state = 8, .external_lex_state = 2},
  [49] = {.lex_state = 8, .external_lex_state = 2},
  [50] = {.lex_state = 8, .external_lex_state = 2},
  [51] = {.lex_state = 8, .external_lex_state = 2},
  [52] = {.lex_state = 8, .external_lex_state = 2},
  [53] = {.lex_state = 8, .external_lex_state = 2},
  [54] = {.lex_state = 8, .external_lex_state = 2},
  [55] = {.lex_state = 8, .external_lex_state = 2},
  [56] = {.lex_state = 0, .external_lex_state = 2},
  [57] = {.lex_state = 0, .external_lex_state = 1},
  [58] = {.lex_state = 0, .external_lex_state = 2},
  [59] = {.lex_state = 0, .external_lex_state = 2},
  [60] = {.lex_state = 0, .external_lex_state = 1},
  [61] = {.lex_state = 0, .external_lex_state = 2},
  [62] = {.lex_state = 8, .external_lex_state = 2},
  [63] = {.lex_state = 0, .external_lex_state = 1},
  [64] = {.lex_state = 0, .external_lex_state = 1},
  [65] = {.lex_state = 0, .external_lex_state = 1},
  [66] = {.lex_state = 1, .external_lex_state = 2},
  [67] = {.lex_state = 10, .external_lex_state = 2},
  [68] = {.lex_state = 0, .external_lex_state = 2},
  [69] = {.lex_state = 9, .external_lex_state = 2},
  [70] = {.lex_state = 0, .external_lex_state = 1},
  [71] = {.lex_state = 0, .external_lex_state = 2},
  [72] = {.lex_state = 9, .external_lex_state = 2},
  [73] = {.lex_state = 0, .external_lex_state = 1},
  [74] = {.lex_state = 0, .external_lex_state = 1},
  [75] = {.lex_state = 1, .external_lex_state = 2},
  [76] = {.lex_state = 0, .external_lex_state = 1},
  [77] = {.lex_state = 0, .external_lex_state = 1},
  [78] = {.lex_state = 0, .external_lex_state = 2},
  [79] = {.lex_state = 0, .external_lex_state = 2},
  [80] = {.lex_state = 0, .external_lex_state = 2},
  [81] = {.lex_state = 0, .external_lex_state = 2},
  [82] = {.lex_state = 0, .external_lex_state = 2},
  [83] = {.lex_state = 0, .external_lex_state = 2},
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
    [anon_sym_EQ] = ACTIONS(1),
    [sym__option_string] = ACTIONS(1),
    [sym__option_argument] = ACTIONS(1),
    [aux_sym__line_token1] = ACTIONS(1),
    [sym__eol] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(78),
    [sym__body_elements] = STATE(2),
    [sym_paragraph] = STATE(77),
    [sym__lists] = STATE(77),
    [sym_bullet_list] = STATE(77),
    [sym__bullet_list_item] = STATE(76),
    [sym_enumerated_list] = STATE(77),
    [sym__enumerated_list_item] = STATE(63),
    [sym_field_list] = STATE(77),
    [sym_field] = STATE(65),
    [sym_option_list] = STATE(77),
    [sym_option_list_item] = STATE(73),
    [sym__option] = STATE(10),
    [aux_sym__line] = STATE(39),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_paragraph_repeat1] = STATE(20),
    [aux_sym_bullet_list_repeat1] = STATE(28),
    [aux_sym_enumerated_list_repeat1] = STATE(21),
    [aux_sym_field_list_repeat1] = STATE(22),
    [aux_sym_option_list_repeat1] = STATE(6),
    [aux_sym_option_list_item_repeat1] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym__char_bullet] = ACTIONS(7),
    [sym__numeric_bullet] = ACTIONS(9),
    [anon_sym_COLON] = ACTIONS(11),
    [sym__option_string] = ACTIONS(13),
    [aux_sym__line_token1] = ACTIONS(15),
    [sym__eol] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(17),
  },
  [2] = {
    [sym__body_elements] = STATE(3),
    [sym_paragraph] = STATE(77),
    [sym__lists] = STATE(77),
    [sym_bullet_list] = STATE(77),
    [sym__bullet_list_item] = STATE(76),
    [sym_enumerated_list] = STATE(77),
    [sym__enumerated_list_item] = STATE(63),
    [sym_field_list] = STATE(77),
    [sym_field] = STATE(65),
    [sym_option_list] = STATE(77),
    [sym_option_list_item] = STATE(73),
    [sym__option] = STATE(10),
    [aux_sym__line] = STATE(39),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_paragraph_repeat1] = STATE(20),
    [aux_sym_bullet_list_repeat1] = STATE(28),
    [aux_sym_enumerated_list_repeat1] = STATE(21),
    [aux_sym_field_list_repeat1] = STATE(22),
    [aux_sym_option_list_repeat1] = STATE(6),
    [aux_sym_option_list_item_repeat1] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(19),
    [sym__char_bullet] = ACTIONS(7),
    [sym__numeric_bullet] = ACTIONS(9),
    [anon_sym_COLON] = ACTIONS(11),
    [sym__option_string] = ACTIONS(13),
    [aux_sym__line_token1] = ACTIONS(15),
    [sym__eol] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(21),
  },
  [3] = {
    [sym__body_elements] = STATE(3),
    [sym_paragraph] = STATE(77),
    [sym__lists] = STATE(77),
    [sym_bullet_list] = STATE(77),
    [sym__bullet_list_item] = STATE(76),
    [sym_enumerated_list] = STATE(77),
    [sym__enumerated_list_item] = STATE(63),
    [sym_field_list] = STATE(77),
    [sym_field] = STATE(65),
    [sym_option_list] = STATE(77),
    [sym_option_list_item] = STATE(73),
    [sym__option] = STATE(10),
    [aux_sym__line] = STATE(39),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_paragraph_repeat1] = STATE(20),
    [aux_sym_bullet_list_repeat1] = STATE(28),
    [aux_sym_enumerated_list_repeat1] = STATE(21),
    [aux_sym_field_list_repeat1] = STATE(22),
    [aux_sym_option_list_repeat1] = STATE(6),
    [aux_sym_option_list_item_repeat1] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(23),
    [sym__char_bullet] = ACTIONS(25),
    [sym__numeric_bullet] = ACTIONS(28),
    [anon_sym_COLON] = ACTIONS(31),
    [sym__option_string] = ACTIONS(34),
    [aux_sym__line_token1] = ACTIONS(37),
    [sym__eol] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(40),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(45), 1,
      aux_sym__line_token1,
    ACTIONS(43), 6,
      sym__blank_line,
      ts_builtin_sym_end,
      sym__char_bullet,
      sym__numeric_bullet,
      anon_sym_COLON,
      sym__option_string,
  [15] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(47), 1,
      anon_sym_,
    ACTIONS(52), 1,
      anon_sym_EQ,
    ACTIONS(50), 4,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
      anon_sym_COMMA,
  [31] = 6,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(13), 1,
      sym__option_string,
    STATE(10), 1,
      sym__option,
    STATE(12), 1,
      aux_sym_option_list_repeat1,
    STATE(23), 1,
      aux_sym_option_list_item_repeat1,
    STATE(74), 1,
      sym_option_list_item,
  [50] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(56), 1,
      anon_sym_COMMA,
    ACTIONS(54), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [63] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(56), 1,
      anon_sym_COMMA,
    ACTIONS(58), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [76] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(60), 5,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
      anon_sym_COMMA,
  [87] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(56), 1,
      anon_sym_COMMA,
    ACTIONS(62), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [100] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(56), 1,
      anon_sym_COMMA,
    ACTIONS(64), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [113] = 6,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(66), 1,
      sym__option_string,
    STATE(8), 1,
      sym__option,
    STATE(12), 1,
      aux_sym_option_list_repeat1,
    STATE(26), 1,
      aux_sym_option_list_item_repeat1,
    STATE(83), 1,
      sym_option_list_item,
  [132] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(69), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [142] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(71), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [152] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(73), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [162] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(75), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [172] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(77), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [182] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(79), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [192] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(50), 1,
      anon_sym_COMMA,
    ACTIONS(52), 2,
      anon_sym_,
      anon_sym_EQ,
  [203] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(81), 1,
      aux_sym__line_token1,
    STATE(35), 1,
      aux_sym__line,
    STATE(36), 1,
      aux_sym_paragraph_repeat1,
  [216] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(9), 1,
      sym__numeric_bullet,
    STATE(40), 1,
      aux_sym_enumerated_list_repeat1,
    STATE(70), 1,
      sym__enumerated_list_item,
  [229] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(11), 1,
      anon_sym_COLON,
    STATE(33), 1,
      aux_sym_field_list_repeat1,
    STATE(57), 1,
      sym_field,
  [242] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(13), 1,
      sym__option_string,
    STATE(11), 1,
      sym__option,
    STATE(37), 1,
      aux_sym_option_list_item_repeat1,
  [255] = 3,
    ACTIONS(83), 1,
      aux_sym__line_token1,
    STATE(34), 1,
      aux_sym__line,
    ACTIONS(85), 2,
      sym__eol,
      sym__blank_line,
  [266] = 3,
    ACTIONS(83), 1,
      aux_sym__line_token1,
    STATE(34), 1,
      aux_sym__line,
    ACTIONS(87), 2,
      sym__eol,
      sym__blank_line,
  [277] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(13), 1,
      sym__option_string,
    STATE(7), 1,
      sym__option,
    STATE(37), 1,
      aux_sym_option_list_item_repeat1,
  [290] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(89), 1,
      aux_sym__line_token1,
    STATE(48), 1,
      aux_sym__line,
    STATE(80), 1,
      sym__field_body,
  [303] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(7), 1,
      sym__char_bullet,
    STATE(38), 1,
      aux_sym_bullet_list_repeat1,
    STATE(64), 1,
      sym__bullet_list_item,
  [316] = 3,
    ACTIONS(83), 1,
      aux_sym__line_token1,
    STATE(34), 1,
      aux_sym__line,
    ACTIONS(91), 2,
      sym__eol,
      sym__blank_line,
  [327] = 3,
    ACTIONS(83), 1,
      aux_sym__line_token1,
    STATE(34), 1,
      aux_sym__line,
    ACTIONS(93), 2,
      sym__eol,
      sym__blank_line,
  [338] = 3,
    ACTIONS(83), 1,
      aux_sym__line_token1,
    STATE(34), 1,
      aux_sym__line,
    ACTIONS(95), 2,
      sym__eol,
      sym__blank_line,
  [349] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(97), 1,
      aux_sym__line_token1,
    STATE(30), 1,
      aux_sym__line,
    STATE(60), 1,
      sym__field_body,
  [362] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(99), 1,
      anon_sym_COLON,
    STATE(33), 1,
      aux_sym_field_list_repeat1,
    STATE(82), 1,
      sym_field,
  [375] = 3,
    ACTIONS(102), 1,
      aux_sym__line_token1,
    STATE(34), 1,
      aux_sym__line,
    ACTIONS(105), 2,
      sym__eol,
      sym__blank_line,
  [386] = 4,
    ACTIONS(83), 1,
      aux_sym__line_token1,
    ACTIONS(107), 1,
      sym__eol,
    ACTIONS(109), 1,
      sym__blank_line,
    STATE(34), 1,
      aux_sym__line,
  [399] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(111), 1,
      aux_sym__line_token1,
    STATE(36), 1,
      aux_sym_paragraph_repeat1,
    STATE(50), 1,
      aux_sym__line,
  [412] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(114), 1,
      sym__option_string,
    STATE(37), 1,
      aux_sym_option_list_item_repeat1,
    STATE(75), 1,
      sym__option,
  [425] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(117), 1,
      sym__char_bullet,
    STATE(38), 1,
      aux_sym_bullet_list_repeat1,
    STATE(79), 1,
      sym__bullet_list_item,
  [438] = 4,
    ACTIONS(83), 1,
      aux_sym__line_token1,
    ACTIONS(107), 1,
      sym__eol,
    ACTIONS(120), 1,
      sym__blank_line,
    STATE(34), 1,
      aux_sym__line,
  [451] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(122), 1,
      sym__numeric_bullet,
    STATE(40), 1,
      aux_sym_enumerated_list_repeat1,
    STATE(81), 1,
      sym__enumerated_list_item,
  [464] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(125), 1,
      aux_sym__line_token1,
    STATE(52), 1,
      aux_sym__line,
  [474] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(127), 1,
      aux_sym__line_token1,
    STATE(29), 1,
      aux_sym__line,
  [484] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(129), 1,
      aux_sym__line_token1,
    STATE(25), 1,
      aux_sym__line,
  [494] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(131), 1,
      aux_sym__line_token1,
    STATE(54), 1,
      aux_sym__line,
  [504] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(133), 1,
      aux_sym__line_token1,
    STATE(55), 1,
      aux_sym__line,
  [514] = 3,
    ACTIONS(91), 1,
      sym__eol,
    ACTIONS(135), 1,
      aux_sym__line_token1,
    STATE(53), 1,
      aux_sym__line,
  [524] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(137), 1,
      aux_sym__line_token1,
    STATE(24), 1,
      aux_sym__line,
  [534] = 3,
    ACTIONS(93), 1,
      sym__eol,
    ACTIONS(135), 1,
      aux_sym__line_token1,
    STATE(53), 1,
      aux_sym__line,
  [544] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(139), 1,
      aux_sym__line_token1,
    STATE(31), 1,
      aux_sym__line,
  [554] = 3,
    ACTIONS(107), 1,
      sym__eol,
    ACTIONS(135), 1,
      aux_sym__line_token1,
    STATE(53), 1,
      aux_sym__line,
  [564] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(141), 1,
      aux_sym__line_token1,
    STATE(46), 1,
      aux_sym__line,
  [574] = 3,
    ACTIONS(95), 1,
      sym__eol,
    ACTIONS(135), 1,
      aux_sym__line_token1,
    STATE(53), 1,
      aux_sym__line,
  [584] = 3,
    ACTIONS(105), 1,
      sym__eol,
    ACTIONS(143), 1,
      aux_sym__line_token1,
    STATE(53), 1,
      aux_sym__line,
  [594] = 3,
    ACTIONS(87), 1,
      sym__eol,
    ACTIONS(135), 1,
      aux_sym__line_token1,
    STATE(53), 1,
      aux_sym__line,
  [604] = 3,
    ACTIONS(85), 1,
      sym__eol,
    ACTIONS(135), 1,
      aux_sym__line_token1,
    STATE(53), 1,
      aux_sym__line,
  [614] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(146), 1,
      anon_sym_COLON,
  [621] = 2,
    ACTIONS(148), 1,
      sym__eol,
    ACTIONS(150), 1,
      sym__blank_line,
  [628] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(152), 1,
      anon_sym_COLON,
  [635] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(154), 1,
      sym__option_string,
  [642] = 1,
    ACTIONS(156), 2,
      sym__eol,
      sym__blank_line,
  [647] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(158), 1,
      sym__option_string,
  [654] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(160), 1,
      aux_sym__line_token1,
  [661] = 2,
    ACTIONS(162), 1,
      sym__eol,
    ACTIONS(164), 1,
      sym__blank_line,
  [668] = 2,
    ACTIONS(166), 1,
      sym__eol,
    ACTIONS(168), 1,
      sym__blank_line,
  [675] = 2,
    ACTIONS(148), 1,
      sym__eol,
    ACTIONS(170), 1,
      sym__blank_line,
  [682] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(172), 1,
      sym__option_argument,
  [689] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(174), 1,
      sym__numeric_bullet,
  [696] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(176), 1,
      sym__char_bullet,
  [703] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(178), 1,
      sym__field_name,
  [710] = 2,
    ACTIONS(162), 1,
      sym__eol,
    ACTIONS(180), 1,
      sym__blank_line,
  [717] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(182), 1,
      anon_sym_COLON,
  [724] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(184), 1,
      sym__field_name,
  [731] = 2,
    ACTIONS(186), 1,
      sym__eol,
    ACTIONS(188), 1,
      sym__blank_line,
  [738] = 2,
    ACTIONS(186), 1,
      sym__eol,
    ACTIONS(190), 1,
      sym__blank_line,
  [745] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(56), 1,
      anon_sym_COMMA,
  [752] = 2,
    ACTIONS(166), 1,
      sym__eol,
    ACTIONS(192), 1,
      sym__blank_line,
  [759] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(194), 1,
      sym__blank_line,
  [766] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(196), 1,
      ts_builtin_sym_end,
  [773] = 1,
    ACTIONS(166), 1,
      sym__eol,
  [777] = 1,
    ACTIONS(156), 1,
      sym__eol,
  [781] = 1,
    ACTIONS(162), 1,
      sym__eol,
  [785] = 1,
    ACTIONS(148), 1,
      sym__eol,
  [789] = 1,
    ACTIONS(186), 1,
      sym__eol,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 15,
  [SMALL_STATE(6)] = 31,
  [SMALL_STATE(7)] = 50,
  [SMALL_STATE(8)] = 63,
  [SMALL_STATE(9)] = 76,
  [SMALL_STATE(10)] = 87,
  [SMALL_STATE(11)] = 100,
  [SMALL_STATE(12)] = 113,
  [SMALL_STATE(13)] = 132,
  [SMALL_STATE(14)] = 142,
  [SMALL_STATE(15)] = 152,
  [SMALL_STATE(16)] = 162,
  [SMALL_STATE(17)] = 172,
  [SMALL_STATE(18)] = 182,
  [SMALL_STATE(19)] = 192,
  [SMALL_STATE(20)] = 203,
  [SMALL_STATE(21)] = 216,
  [SMALL_STATE(22)] = 229,
  [SMALL_STATE(23)] = 242,
  [SMALL_STATE(24)] = 255,
  [SMALL_STATE(25)] = 266,
  [SMALL_STATE(26)] = 277,
  [SMALL_STATE(27)] = 290,
  [SMALL_STATE(28)] = 303,
  [SMALL_STATE(29)] = 316,
  [SMALL_STATE(30)] = 327,
  [SMALL_STATE(31)] = 338,
  [SMALL_STATE(32)] = 349,
  [SMALL_STATE(33)] = 362,
  [SMALL_STATE(34)] = 375,
  [SMALL_STATE(35)] = 386,
  [SMALL_STATE(36)] = 399,
  [SMALL_STATE(37)] = 412,
  [SMALL_STATE(38)] = 425,
  [SMALL_STATE(39)] = 438,
  [SMALL_STATE(40)] = 451,
  [SMALL_STATE(41)] = 464,
  [SMALL_STATE(42)] = 474,
  [SMALL_STATE(43)] = 484,
  [SMALL_STATE(44)] = 494,
  [SMALL_STATE(45)] = 504,
  [SMALL_STATE(46)] = 514,
  [SMALL_STATE(47)] = 524,
  [SMALL_STATE(48)] = 534,
  [SMALL_STATE(49)] = 544,
  [SMALL_STATE(50)] = 554,
  [SMALL_STATE(51)] = 564,
  [SMALL_STATE(52)] = 574,
  [SMALL_STATE(53)] = 584,
  [SMALL_STATE(54)] = 594,
  [SMALL_STATE(55)] = 604,
  [SMALL_STATE(56)] = 614,
  [SMALL_STATE(57)] = 621,
  [SMALL_STATE(58)] = 628,
  [SMALL_STATE(59)] = 635,
  [SMALL_STATE(60)] = 642,
  [SMALL_STATE(61)] = 647,
  [SMALL_STATE(62)] = 654,
  [SMALL_STATE(63)] = 661,
  [SMALL_STATE(64)] = 668,
  [SMALL_STATE(65)] = 675,
  [SMALL_STATE(66)] = 682,
  [SMALL_STATE(67)] = 689,
  [SMALL_STATE(68)] = 696,
  [SMALL_STATE(69)] = 703,
  [SMALL_STATE(70)] = 710,
  [SMALL_STATE(71)] = 717,
  [SMALL_STATE(72)] = 724,
  [SMALL_STATE(73)] = 731,
  [SMALL_STATE(74)] = 738,
  [SMALL_STATE(75)] = 745,
  [SMALL_STATE(76)] = 752,
  [SMALL_STATE(77)] = 759,
  [SMALL_STATE(78)] = 766,
  [SMALL_STATE(79)] = 773,
  [SMALL_STATE(80)] = 777,
  [SMALL_STATE(81)] = 781,
  [SMALL_STATE(82)] = 785,
  [SMALL_STATE(83)] = 789,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(47),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(43),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(72),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(5),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(39),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(3),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__body_elements, 2),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__body_elements, 2),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__option, 1), SHIFT(66),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__option, 1),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__option, 3),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_option_list_repeat1, 2), SHIFT_REPEAT(5),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bullet_list_item, 2),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__enumerated_list_item, 2),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_list_item, 5),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_body, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_list_item, 4),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_list_repeat1, 2), SHIFT_REPEAT(69),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__line, 2), SHIFT_REPEAT(34),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__line, 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(50),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_option_list_item_repeat1, 2), SHIFT_REPEAT(19),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bullet_list_repeat1, 2), SHIFT_REPEAT(45),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 1),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enumerated_list_repeat1, 2), SHIFT_REPEAT(44),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__line, 2), SHIFT_REPEAT(53),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_list_repeat1, 2),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_list, 2),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_option_list_item_repeat1, 2),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 5),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_option_list_repeat1, 2),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumerated_list, 1, .production_id = 1),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bullet_list, 2, .production_id = 2),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_list, 1),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enumerated_list_repeat1, 2, .production_id = 1),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bullet_list_repeat1, 2, .production_id = 1),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumerated_list, 2, .production_id = 2),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_list, 1),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_list, 2),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bullet_list, 1, .production_id = 1),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [196] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
