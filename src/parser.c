#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 53
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 26
#define ALIAS_COUNT 1
#define TOKEN_COUNT 9
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5

enum {
  sym__char_bullet = 1,
  sym__numeric_bullet = 2,
  anon_sym_COLON = 3,
  aux_sym_field_token1 = 4,
  sym__field_name = 5,
  aux_sym__line_token1 = 6,
  sym__eol = 7,
  sym__blank_line = 8,
  sym_document = 9,
  sym__body_elements = 10,
  sym_paragraph = 11,
  sym__lists = 12,
  sym_bullet_list = 13,
  sym__bullet_list_item = 14,
  sym_enumerated_list = 15,
  sym__enumerated_list_item = 16,
  sym_field_list = 17,
  sym_field = 18,
  sym__field_body = 19,
  aux_sym__line = 20,
  aux_sym_document_repeat1 = 21,
  aux_sym_paragraph_repeat1 = 22,
  aux_sym_bullet_list_repeat1 = 23,
  aux_sym_enumerated_list_repeat1 = 24,
  aux_sym_field_list_repeat1 = 25,
  alias_sym_list_item = 26,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__char_bullet] = "_char_bullet",
  [sym__numeric_bullet] = "_numeric_bullet",
  [anon_sym_COLON] = ":",
  [aux_sym_field_token1] = "field_token1",
  [sym__field_name] = "_field_name",
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
  [aux_sym__line] = "_line",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_paragraph_repeat1] = "paragraph_repeat1",
  [aux_sym_bullet_list_repeat1] = "bullet_list_repeat1",
  [aux_sym_enumerated_list_repeat1] = "enumerated_list_repeat1",
  [aux_sym_field_list_repeat1] = "field_list_repeat1",
  [alias_sym_list_item] = "list_item",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__char_bullet] = sym__char_bullet,
  [sym__numeric_bullet] = sym__numeric_bullet,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_field_token1] = aux_sym_field_token1,
  [sym__field_name] = sym__field_name,
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
  [aux_sym__line] = aux_sym__line,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_paragraph_repeat1] = aux_sym_paragraph_repeat1,
  [aux_sym_bullet_list_repeat1] = aux_sym_bullet_list_repeat1,
  [aux_sym_enumerated_list_repeat1] = aux_sym_enumerated_list_repeat1,
  [aux_sym_field_list_repeat1] = aux_sym_field_list_repeat1,
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
  [aux_sym_field_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__field_name] = {
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
      if (eof) ADVANCE(9);
      if (lookahead == '#') ADVANCE(16);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == 8226 ||
          lookahead == 8227 ||
          lookahead == 8259) ADVANCE(20);
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(13);
      if (lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'I' ||
          lookahead == 'L' ||
          lookahead == 'M' ||
          lookahead == 'V' ||
          lookahead == 'X') ADVANCE(17);
      if (lookahead == 'c' ||
          lookahead == 'd' ||
          lookahead == 'i' ||
          lookahead == 'l' ||
          lookahead == 'm' ||
          lookahead == 'v' ||
          lookahead == 'x') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(16);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(15);
      END_STATE();
    case 1:
      if (lookahead == '.') ADVANCE(5);
      if (lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'I' ||
          lookahead == 'L' ||
          lookahead == 'M' ||
          lookahead == 'V' ||
          lookahead == 'X') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '.') ADVANCE(5);
      if (lookahead == 'c' ||
          lookahead == 'd' ||
          lookahead == 'i' ||
          lookahead == 'l' ||
          lookahead == 'm' ||
          lookahead == 'v' ||
          lookahead == 'x') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '.') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(13);
      END_STATE();
    case 5:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(11);
      END_STATE();
    case 6:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(15);
      END_STATE();
    case 7:
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(14);
      END_STATE();
    case 8:
      if (eof) ADVANCE(9);
      if (lookahead == '#') ADVANCE(16);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == 8226 ||
          lookahead == 8227 ||
          lookahead == 8259) ADVANCE(20);
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'I' ||
          lookahead == 'L' ||
          lookahead == 'M' ||
          lookahead == 'V' ||
          lookahead == 'X') ADVANCE(17);
      if (lookahead == 'c' ||
          lookahead == 'd' ||
          lookahead == 'i' ||
          lookahead == 'l' ||
          lookahead == 'm' ||
          lookahead == 'v' ||
          lookahead == 'x') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(16);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(15);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym__char_bullet);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym__numeric_bullet);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_field_token1);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym__field_name);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym__line_token1);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '.') ADVANCE(5);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '.') ADVANCE(5);
      if (lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'I' ||
          lookahead == 'L' ||
          lookahead == 'M' ||
          lookahead == 'V' ||
          lookahead == 'X') ADVANCE(1);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '.') ADVANCE(5);
      if (lookahead == 'c' ||
          lookahead == 'd' ||
          lookahead == 'i' ||
          lookahead == 'l' ||
          lookahead == 'm' ||
          lookahead == 'v' ||
          lookahead == 'x') ADVANCE(2);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '.') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(10);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 8, .external_lex_state = 1},
  [2] = {.lex_state = 8, .external_lex_state = 1},
  [3] = {.lex_state = 8, .external_lex_state = 1},
  [4] = {.lex_state = 8, .external_lex_state = 1},
  [5] = {.lex_state = 6, .external_lex_state = 1},
  [6] = {.lex_state = 6, .external_lex_state = 2},
  [7] = {.lex_state = 0, .external_lex_state = 2},
  [8] = {.lex_state = 6, .external_lex_state = 2},
  [9] = {.lex_state = 6, .external_lex_state = 2},
  [10] = {.lex_state = 6, .external_lex_state = 1},
  [11] = {.lex_state = 6, .external_lex_state = 1},
  [12] = {.lex_state = 6, .external_lex_state = 2},
  [13] = {.lex_state = 0, .external_lex_state = 2},
  [14] = {.lex_state = 0, .external_lex_state = 2},
  [15] = {.lex_state = 0, .external_lex_state = 2},
  [16] = {.lex_state = 6, .external_lex_state = 1},
  [17] = {.lex_state = 6, .external_lex_state = 1},
  [18] = {.lex_state = 0, .external_lex_state = 2},
  [19] = {.lex_state = 0, .external_lex_state = 2},
  [20] = {.lex_state = 6, .external_lex_state = 1},
  [21] = {.lex_state = 6, .external_lex_state = 2},
  [22] = {.lex_state = 6, .external_lex_state = 2},
  [23] = {.lex_state = 6, .external_lex_state = 2},
  [24] = {.lex_state = 6, .external_lex_state = 2},
  [25] = {.lex_state = 6, .external_lex_state = 2},
  [26] = {.lex_state = 6, .external_lex_state = 2},
  [27] = {.lex_state = 6, .external_lex_state = 2},
  [28] = {.lex_state = 6, .external_lex_state = 2},
  [29] = {.lex_state = 6, .external_lex_state = 2},
  [30] = {.lex_state = 0, .external_lex_state = 1},
  [31] = {.lex_state = 0, .external_lex_state = 1},
  [32] = {.lex_state = 0, .external_lex_state = 1},
  [33] = {.lex_state = 0, .external_lex_state = 2},
  [34] = {.lex_state = 4, .external_lex_state = 2},
  [35] = {.lex_state = 0, .external_lex_state = 2},
  [36] = {.lex_state = 0, .external_lex_state = 2},
  [37] = {.lex_state = 0, .external_lex_state = 1},
  [38] = {.lex_state = 7, .external_lex_state = 2},
  [39] = {.lex_state = 0, .external_lex_state = 2},
  [40] = {.lex_state = 0, .external_lex_state = 1},
  [41] = {.lex_state = 0, .external_lex_state = 1},
  [42] = {.lex_state = 0, .external_lex_state = 2},
  [43] = {.lex_state = 7, .external_lex_state = 2},
  [44] = {.lex_state = 0, .external_lex_state = 2},
  [45] = {.lex_state = 0, .external_lex_state = 1},
  [46] = {.lex_state = 4, .external_lex_state = 2},
  [47] = {.lex_state = 0, .external_lex_state = 1},
  [48] = {.lex_state = 6, .external_lex_state = 2},
  [49] = {.lex_state = 0, .external_lex_state = 2},
  [50] = {.lex_state = 0, .external_lex_state = 2},
  [51] = {.lex_state = 0, .external_lex_state = 2},
  [52] = {.lex_state = 0, .external_lex_state = 2},
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
    [aux_sym_field_token1] = ACTIONS(1),
    [aux_sym__line_token1] = ACTIONS(1),
    [sym__eol] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(39),
    [sym__body_elements] = STATE(2),
    [sym_paragraph] = STATE(30),
    [sym__lists] = STATE(30),
    [sym_bullet_list] = STATE(30),
    [sym__bullet_list_item] = STATE(47),
    [sym_enumerated_list] = STATE(30),
    [sym__enumerated_list_item] = STATE(37),
    [sym_field_list] = STATE(30),
    [sym_field] = STATE(31),
    [aux_sym__line] = STATE(11),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_paragraph_repeat1] = STATE(12),
    [aux_sym_bullet_list_repeat1] = STATE(13),
    [aux_sym_enumerated_list_repeat1] = STATE(14),
    [aux_sym_field_list_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym__char_bullet] = ACTIONS(7),
    [sym__numeric_bullet] = ACTIONS(9),
    [anon_sym_COLON] = ACTIONS(11),
    [aux_sym__line_token1] = ACTIONS(13),
    [sym__eol] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(15),
  },
  [2] = {
    [sym__body_elements] = STATE(3),
    [sym_paragraph] = STATE(30),
    [sym__lists] = STATE(30),
    [sym_bullet_list] = STATE(30),
    [sym__bullet_list_item] = STATE(47),
    [sym_enumerated_list] = STATE(30),
    [sym__enumerated_list_item] = STATE(37),
    [sym_field_list] = STATE(30),
    [sym_field] = STATE(31),
    [aux_sym__line] = STATE(11),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_paragraph_repeat1] = STATE(12),
    [aux_sym_bullet_list_repeat1] = STATE(13),
    [aux_sym_enumerated_list_repeat1] = STATE(14),
    [aux_sym_field_list_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(17),
    [sym__char_bullet] = ACTIONS(7),
    [sym__numeric_bullet] = ACTIONS(9),
    [anon_sym_COLON] = ACTIONS(11),
    [aux_sym__line_token1] = ACTIONS(13),
    [sym__eol] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(19),
  },
  [3] = {
    [sym__body_elements] = STATE(3),
    [sym_paragraph] = STATE(30),
    [sym__lists] = STATE(30),
    [sym_bullet_list] = STATE(30),
    [sym__bullet_list_item] = STATE(47),
    [sym_enumerated_list] = STATE(30),
    [sym__enumerated_list_item] = STATE(37),
    [sym_field_list] = STATE(30),
    [sym_field] = STATE(31),
    [aux_sym__line] = STATE(11),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_paragraph_repeat1] = STATE(12),
    [aux_sym_bullet_list_repeat1] = STATE(13),
    [aux_sym_enumerated_list_repeat1] = STATE(14),
    [aux_sym_field_list_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(21),
    [sym__char_bullet] = ACTIONS(23),
    [sym__numeric_bullet] = ACTIONS(26),
    [anon_sym_COLON] = ACTIONS(29),
    [aux_sym__line_token1] = ACTIONS(32),
    [sym__eol] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(35),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(40), 1,
      aux_sym__line_token1,
    ACTIONS(38), 5,
      sym__blank_line,
      ts_builtin_sym_end,
      sym__char_bullet,
      sym__numeric_bullet,
      anon_sym_COLON,
  [14] = 4,
    ACTIONS(42), 1,
      aux_sym__line_token1,
    ACTIONS(44), 1,
      sym__eol,
    ACTIONS(46), 1,
      sym__blank_line,
    STATE(20), 1,
      aux_sym__line,
  [27] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(48), 1,
      aux_sym__line_token1,
    STATE(10), 1,
      aux_sym__line,
    STATE(40), 1,
      sym__field_body,
  [40] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(50), 1,
      sym__char_bullet,
    STATE(7), 1,
      aux_sym_bullet_list_repeat1,
    STATE(51), 1,
      sym__bullet_list_item,
  [53] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(53), 1,
      aux_sym__line_token1,
    STATE(8), 1,
      aux_sym_paragraph_repeat1,
    STATE(29), 1,
      aux_sym__line,
  [66] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(56), 1,
      aux_sym__line_token1,
    STATE(28), 1,
      aux_sym__line,
    STATE(52), 1,
      sym__field_body,
  [79] = 3,
    ACTIONS(42), 1,
      aux_sym__line_token1,
    STATE(20), 1,
      aux_sym__line,
    ACTIONS(58), 2,
      sym__eol,
      sym__blank_line,
  [90] = 4,
    ACTIONS(42), 1,
      aux_sym__line_token1,
    ACTIONS(44), 1,
      sym__eol,
    ACTIONS(60), 1,
      sym__blank_line,
    STATE(20), 1,
      aux_sym__line,
  [103] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(62), 1,
      aux_sym__line_token1,
    STATE(5), 1,
      aux_sym__line,
    STATE(8), 1,
      aux_sym_paragraph_repeat1,
  [116] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(7), 1,
      sym__char_bullet,
    STATE(7), 1,
      aux_sym_bullet_list_repeat1,
    STATE(45), 1,
      sym__bullet_list_item,
  [129] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(9), 1,
      sym__numeric_bullet,
    STATE(19), 1,
      aux_sym_enumerated_list_repeat1,
    STATE(41), 1,
      sym__enumerated_list_item,
  [142] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(11), 1,
      anon_sym_COLON,
    STATE(18), 1,
      aux_sym_field_list_repeat1,
    STATE(32), 1,
      sym_field,
  [155] = 3,
    ACTIONS(42), 1,
      aux_sym__line_token1,
    STATE(20), 1,
      aux_sym__line,
    ACTIONS(64), 2,
      sym__eol,
      sym__blank_line,
  [166] = 3,
    ACTIONS(42), 1,
      aux_sym__line_token1,
    STATE(20), 1,
      aux_sym__line,
    ACTIONS(66), 2,
      sym__eol,
      sym__blank_line,
  [177] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(68), 1,
      anon_sym_COLON,
    STATE(18), 1,
      aux_sym_field_list_repeat1,
    STATE(50), 1,
      sym_field,
  [190] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(71), 1,
      sym__numeric_bullet,
    STATE(19), 1,
      aux_sym_enumerated_list_repeat1,
    STATE(49), 1,
      sym__enumerated_list_item,
  [203] = 3,
    ACTIONS(74), 1,
      aux_sym__line_token1,
    STATE(20), 1,
      aux_sym__line,
    ACTIONS(77), 2,
      sym__eol,
      sym__blank_line,
  [214] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(79), 1,
      aux_sym__line_token1,
    STATE(16), 1,
      aux_sym__line,
  [224] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(81), 1,
      aux_sym__line_token1,
    STATE(25), 1,
      aux_sym__line,
  [234] = 3,
    ACTIONS(77), 1,
      sym__eol,
    ACTIONS(83), 1,
      aux_sym__line_token1,
    STATE(23), 1,
      aux_sym__line,
  [244] = 3,
    ACTIONS(66), 1,
      sym__eol,
    ACTIONS(86), 1,
      aux_sym__line_token1,
    STATE(23), 1,
      aux_sym__line,
  [254] = 3,
    ACTIONS(64), 1,
      sym__eol,
    ACTIONS(86), 1,
      aux_sym__line_token1,
    STATE(23), 1,
      aux_sym__line,
  [264] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(88), 1,
      aux_sym__line_token1,
    STATE(17), 1,
      aux_sym__line,
  [274] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(90), 1,
      aux_sym__line_token1,
    STATE(24), 1,
      aux_sym__line,
  [284] = 3,
    ACTIONS(58), 1,
      sym__eol,
    ACTIONS(86), 1,
      aux_sym__line_token1,
    STATE(23), 1,
      aux_sym__line,
  [294] = 3,
    ACTIONS(44), 1,
      sym__eol,
    ACTIONS(86), 1,
      aux_sym__line_token1,
    STATE(23), 1,
      aux_sym__line,
  [304] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(92), 1,
      sym__blank_line,
  [311] = 2,
    ACTIONS(94), 1,
      sym__eol,
    ACTIONS(96), 1,
      sym__blank_line,
  [318] = 2,
    ACTIONS(94), 1,
      sym__eol,
    ACTIONS(98), 1,
      sym__blank_line,
  [325] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(100), 1,
      anon_sym_COLON,
  [332] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(102), 1,
      aux_sym_field_token1,
  [339] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(104), 1,
      anon_sym_COLON,
  [346] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(106), 1,
      sym__numeric_bullet,
  [353] = 2,
    ACTIONS(108), 1,
      sym__eol,
    ACTIONS(110), 1,
      sym__blank_line,
  [360] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(112), 1,
      sym__field_name,
  [367] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(114), 1,
      ts_builtin_sym_end,
  [374] = 1,
    ACTIONS(116), 2,
      sym__eol,
      sym__blank_line,
  [379] = 2,
    ACTIONS(108), 1,
      sym__eol,
    ACTIONS(118), 1,
      sym__blank_line,
  [386] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(120), 1,
      anon_sym_COLON,
  [393] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(122), 1,
      sym__field_name,
  [400] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(124), 1,
      sym__char_bullet,
  [407] = 2,
    ACTIONS(126), 1,
      sym__eol,
    ACTIONS(128), 1,
      sym__blank_line,
  [414] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(130), 1,
      aux_sym_field_token1,
  [421] = 2,
    ACTIONS(126), 1,
      sym__eol,
    ACTIONS(132), 1,
      sym__blank_line,
  [428] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(134), 1,
      aux_sym__line_token1,
  [435] = 1,
    ACTIONS(108), 1,
      sym__eol,
  [439] = 1,
    ACTIONS(94), 1,
      sym__eol,
  [443] = 1,
    ACTIONS(126), 1,
      sym__eol,
  [447] = 1,
    ACTIONS(116), 1,
      sym__eol,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 14,
  [SMALL_STATE(6)] = 27,
  [SMALL_STATE(7)] = 40,
  [SMALL_STATE(8)] = 53,
  [SMALL_STATE(9)] = 66,
  [SMALL_STATE(10)] = 79,
  [SMALL_STATE(11)] = 90,
  [SMALL_STATE(12)] = 103,
  [SMALL_STATE(13)] = 116,
  [SMALL_STATE(14)] = 129,
  [SMALL_STATE(15)] = 142,
  [SMALL_STATE(16)] = 155,
  [SMALL_STATE(17)] = 166,
  [SMALL_STATE(18)] = 177,
  [SMALL_STATE(19)] = 190,
  [SMALL_STATE(20)] = 203,
  [SMALL_STATE(21)] = 214,
  [SMALL_STATE(22)] = 224,
  [SMALL_STATE(23)] = 234,
  [SMALL_STATE(24)] = 244,
  [SMALL_STATE(25)] = 254,
  [SMALL_STATE(26)] = 264,
  [SMALL_STATE(27)] = 274,
  [SMALL_STATE(28)] = 284,
  [SMALL_STATE(29)] = 294,
  [SMALL_STATE(30)] = 304,
  [SMALL_STATE(31)] = 311,
  [SMALL_STATE(32)] = 318,
  [SMALL_STATE(33)] = 325,
  [SMALL_STATE(34)] = 332,
  [SMALL_STATE(35)] = 339,
  [SMALL_STATE(36)] = 346,
  [SMALL_STATE(37)] = 353,
  [SMALL_STATE(38)] = 360,
  [SMALL_STATE(39)] = 367,
  [SMALL_STATE(40)] = 374,
  [SMALL_STATE(41)] = 379,
  [SMALL_STATE(42)] = 386,
  [SMALL_STATE(43)] = 393,
  [SMALL_STATE(44)] = 400,
  [SMALL_STATE(45)] = 407,
  [SMALL_STATE(46)] = 414,
  [SMALL_STATE(47)] = 421,
  [SMALL_STATE(48)] = 428,
  [SMALL_STATE(49)] = 435,
  [SMALL_STATE(50)] = 439,
  [SMALL_STATE(51)] = 443,
  [SMALL_STATE(52)] = 447,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(21),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(26),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(43),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(11),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(3),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__body_elements, 2),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__body_elements, 2),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bullet_list_repeat1, 2), SHIFT_REPEAT(22),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(29),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_body, 1),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 1),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bullet_list_item, 2),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__enumerated_list_item, 2),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_list_repeat1, 2), SHIFT_REPEAT(38),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enumerated_list_repeat1, 2), SHIFT_REPEAT(27),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__line, 2), SHIFT_REPEAT(20),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__line, 2),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__line, 2), SHIFT_REPEAT(23),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_list, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_list, 2),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_list_repeat1, 2),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enumerated_list_repeat1, 2, .production_id = 1),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumerated_list, 1, .production_id = 1),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [114] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 5),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumerated_list, 2, .production_id = 2),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bullet_list_repeat1, 2, .production_id = 1),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bullet_list, 2, .production_id = 2),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bullet_list, 1, .production_id = 1),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
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
