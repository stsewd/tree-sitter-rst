#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 33
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 19
#define ALIAS_COUNT 1
#define TOKEN_COUNT 6
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 2

enum {
  sym__char_bullet = 1,
  sym__numeric_bullet = 2,
  aux_sym__line_token1 = 3,
  sym__eol = 4,
  sym__blank_line = 5,
  sym_document = 6,
  sym__body_elements = 7,
  sym_paragraph = 8,
  sym__lists = 9,
  sym_bullet_list = 10,
  sym__bullet_list_item = 11,
  sym_enumerated_list = 12,
  sym__enumerated_list_item = 13,
  aux_sym__line = 14,
  aux_sym_document_repeat1 = 15,
  aux_sym_paragraph_repeat1 = 16,
  aux_sym_bullet_list_repeat1 = 17,
  aux_sym_enumerated_list_repeat1 = 18,
  alias_sym_list_item = 19,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__char_bullet] = "_char_bullet",
  [sym__numeric_bullet] = "_numeric_bullet",
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
  [aux_sym__line] = "_line",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_paragraph_repeat1] = "paragraph_repeat1",
  [aux_sym_bullet_list_repeat1] = "bullet_list_repeat1",
  [aux_sym_enumerated_list_repeat1] = "enumerated_list_repeat1",
  [alias_sym_list_item] = "list_item",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__char_bullet] = sym__char_bullet,
  [sym__numeric_bullet] = sym__numeric_bullet,
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
  [aux_sym__line] = aux_sym__line,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_paragraph_repeat1] = aux_sym_paragraph_repeat1,
  [aux_sym_bullet_list_repeat1] = aux_sym_bullet_list_repeat1,
  [aux_sym_enumerated_list_repeat1] = aux_sym_enumerated_list_repeat1,
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
      if (eof) ADVANCE(6);
      if (lookahead == '#') ADVANCE(10);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == 8226 ||
          lookahead == 8227 ||
          lookahead == 8259) ADVANCE(14);
      if (lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'I' ||
          lookahead == 'L' ||
          lookahead == 'M' ||
          lookahead == 'V' ||
          lookahead == 'X') ADVANCE(11);
      if (lookahead == 'c' ||
          lookahead == 'd' ||
          lookahead == 'i' ||
          lookahead == 'l' ||
          lookahead == 'm' ||
          lookahead == 'v' ||
          lookahead == 'x') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(10);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 1:
      if (lookahead == '.') ADVANCE(4);
      if (lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'I' ||
          lookahead == 'L' ||
          lookahead == 'M' ||
          lookahead == 'V' ||
          lookahead == 'X') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '.') ADVANCE(4);
      if (lookahead == 'c' ||
          lookahead == 'd' ||
          lookahead == 'i' ||
          lookahead == 'l' ||
          lookahead == 'm' ||
          lookahead == 'v' ||
          lookahead == 'x') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '.') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(8);
      END_STATE();
    case 5:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym__char_bullet);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym__numeric_bullet);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(aux_sym__line_token1);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '.') ADVANCE(4);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '.') ADVANCE(4);
      if (lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'I' ||
          lookahead == 'L' ||
          lookahead == 'M' ||
          lookahead == 'V' ||
          lookahead == 'X') ADVANCE(1);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '.') ADVANCE(4);
      if (lookahead == 'c' ||
          lookahead == 'd' ||
          lookahead == 'i' ||
          lookahead == 'l' ||
          lookahead == 'm' ||
          lookahead == 'v' ||
          lookahead == 'x') ADVANCE(2);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '.') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(7);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0, .external_lex_state = 1},
  [2] = {.lex_state = 0, .external_lex_state = 1},
  [3] = {.lex_state = 0, .external_lex_state = 1},
  [4] = {.lex_state = 0, .external_lex_state = 1},
  [5] = {.lex_state = 0, .external_lex_state = 1},
  [6] = {.lex_state = 0, .external_lex_state = 1},
  [7] = {.lex_state = 0, .external_lex_state = 1},
  [8] = {.lex_state = 0, .external_lex_state = 1},
  [9] = {.lex_state = 0, .external_lex_state = 1},
  [10] = {.lex_state = 0, .external_lex_state = 1},
  [11] = {.lex_state = 0, .external_lex_state = 1},
  [12] = {.lex_state = 0, .external_lex_state = 1},
  [13] = {.lex_state = 0, .external_lex_state = 2},
  [14] = {.lex_state = 0, .external_lex_state = 2},
  [15] = {.lex_state = 0, .external_lex_state = 2},
  [16] = {.lex_state = 5, .external_lex_state = 2},
  [17] = {.lex_state = 5, .external_lex_state = 2},
  [18] = {.lex_state = 0, .external_lex_state = 2},
  [19] = {.lex_state = 5, .external_lex_state = 2},
  [20] = {.lex_state = 5, .external_lex_state = 2},
  [21] = {.lex_state = 5, .external_lex_state = 2},
  [22] = {.lex_state = 5, .external_lex_state = 2},
  [23] = {.lex_state = 5, .external_lex_state = 2},
  [24] = {.lex_state = 5, .external_lex_state = 2},
  [25] = {.lex_state = 5, .external_lex_state = 2},
  [26] = {.lex_state = 5, .external_lex_state = 2},
  [27] = {.lex_state = 0, .external_lex_state = 2},
  [28] = {.lex_state = 0, .external_lex_state = 2},
  [29] = {.lex_state = 5, .external_lex_state = 2},
  [30] = {.lex_state = 0, .external_lex_state = 2},
  [31] = {.lex_state = 0, .external_lex_state = 2},
  [32] = {.lex_state = 0, .external_lex_state = 2},
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
    [aux_sym__line_token1] = ACTIONS(1),
    [sym__eol] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(30),
    [sym__body_elements] = STATE(2),
    [sym_paragraph] = STATE(2),
    [sym__lists] = STATE(2),
    [sym_bullet_list] = STATE(2),
    [sym__bullet_list_item] = STATE(11),
    [sym_enumerated_list] = STATE(2),
    [sym__enumerated_list_item] = STATE(12),
    [aux_sym__line] = STATE(5),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_paragraph_repeat1] = STATE(17),
    [aux_sym_bullet_list_repeat1] = STATE(15),
    [aux_sym_enumerated_list_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym__char_bullet] = ACTIONS(7),
    [sym__numeric_bullet] = ACTIONS(9),
    [aux_sym__line_token1] = ACTIONS(11),
    [sym__eol] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(13),
  },
  [2] = {
    [sym__body_elements] = STATE(3),
    [sym_paragraph] = STATE(3),
    [sym__lists] = STATE(3),
    [sym_bullet_list] = STATE(3),
    [sym__bullet_list_item] = STATE(11),
    [sym_enumerated_list] = STATE(3),
    [sym__enumerated_list_item] = STATE(12),
    [aux_sym__line] = STATE(5),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_paragraph_repeat1] = STATE(17),
    [aux_sym_bullet_list_repeat1] = STATE(15),
    [aux_sym_enumerated_list_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(15),
    [sym__char_bullet] = ACTIONS(7),
    [sym__numeric_bullet] = ACTIONS(9),
    [aux_sym__line_token1] = ACTIONS(11),
    [sym__eol] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(17),
  },
  [3] = {
    [sym__body_elements] = STATE(3),
    [sym_paragraph] = STATE(3),
    [sym__lists] = STATE(3),
    [sym_bullet_list] = STATE(3),
    [sym__bullet_list_item] = STATE(11),
    [sym_enumerated_list] = STATE(3),
    [sym__enumerated_list_item] = STATE(12),
    [aux_sym__line] = STATE(5),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_paragraph_repeat1] = STATE(17),
    [aux_sym_bullet_list_repeat1] = STATE(15),
    [aux_sym_enumerated_list_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(19),
    [sym__char_bullet] = ACTIONS(21),
    [sym__numeric_bullet] = ACTIONS(24),
    [aux_sym__line_token1] = ACTIONS(27),
    [sym__eol] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(30),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(35), 1,
      aux_sym__line_token1,
    STATE(7), 1,
      aux_sym__line,
    ACTIONS(33), 5,
      sym__eol,
      sym__blank_line,
      ts_builtin_sym_end,
      sym__char_bullet,
      sym__numeric_bullet,
  [14] = 4,
    ACTIONS(40), 1,
      aux_sym__line_token1,
    ACTIONS(42), 1,
      sym__eol,
    STATE(7), 1,
      aux_sym__line,
    ACTIONS(38), 4,
      sym__blank_line,
      ts_builtin_sym_end,
      sym__char_bullet,
      sym__numeric_bullet,
  [30] = 4,
    ACTIONS(40), 1,
      aux_sym__line_token1,
    ACTIONS(42), 1,
      sym__eol,
    STATE(7), 1,
      aux_sym__line,
    ACTIONS(44), 4,
      sym__blank_line,
      ts_builtin_sym_end,
      sym__char_bullet,
      sym__numeric_bullet,
  [46] = 3,
    ACTIONS(48), 1,
      aux_sym__line_token1,
    STATE(7), 1,
      aux_sym__line,
    ACTIONS(46), 5,
      sym__eol,
      sym__blank_line,
      ts_builtin_sym_end,
      sym__char_bullet,
      sym__numeric_bullet,
  [60] = 3,
    ACTIONS(53), 1,
      aux_sym__line_token1,
    STATE(7), 1,
      aux_sym__line,
    ACTIONS(51), 5,
      sym__eol,
      sym__blank_line,
      ts_builtin_sym_end,
      sym__char_bullet,
      sym__numeric_bullet,
  [74] = 3,
    ACTIONS(58), 1,
      aux_sym__line_token1,
    ACTIONS(60), 1,
      sym__eol,
    ACTIONS(56), 4,
      sym__blank_line,
      ts_builtin_sym_end,
      sym__char_bullet,
      sym__numeric_bullet,
  [87] = 3,
    ACTIONS(64), 1,
      aux_sym__line_token1,
    ACTIONS(66), 1,
      sym__eol,
    ACTIONS(62), 4,
      sym__blank_line,
      ts_builtin_sym_end,
      sym__char_bullet,
      sym__numeric_bullet,
  [100] = 3,
    ACTIONS(66), 1,
      sym__eol,
    ACTIONS(70), 1,
      aux_sym__line_token1,
    ACTIONS(68), 4,
      sym__blank_line,
      ts_builtin_sym_end,
      sym__char_bullet,
      sym__numeric_bullet,
  [113] = 3,
    ACTIONS(60), 1,
      sym__eol,
    ACTIONS(74), 1,
      aux_sym__line_token1,
    ACTIONS(72), 4,
      sym__blank_line,
      ts_builtin_sym_end,
      sym__char_bullet,
      sym__numeric_bullet,
  [126] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(76), 1,
      sym__numeric_bullet,
    STATE(13), 1,
      aux_sym_enumerated_list_repeat1,
    STATE(32), 1,
      sym__enumerated_list_item,
  [139] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(9), 1,
      sym__numeric_bullet,
    STATE(9), 1,
      sym__enumerated_list_item,
    STATE(13), 1,
      aux_sym_enumerated_list_repeat1,
  [152] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(7), 1,
      sym__char_bullet,
    STATE(10), 1,
      sym__bullet_list_item,
    STATE(18), 1,
      aux_sym_bullet_list_repeat1,
  [165] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(79), 1,
      aux_sym__line_token1,
    STATE(16), 1,
      aux_sym_paragraph_repeat1,
    STATE(21), 1,
      aux_sym__line,
  [178] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(82), 1,
      aux_sym__line_token1,
    STATE(6), 1,
      aux_sym__line,
    STATE(16), 1,
      aux_sym_paragraph_repeat1,
  [191] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(84), 1,
      sym__char_bullet,
    STATE(18), 1,
      aux_sym_bullet_list_repeat1,
    STATE(31), 1,
      sym__bullet_list_item,
  [204] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(87), 1,
      aux_sym__line_token1,
    STATE(8), 1,
      aux_sym__line,
  [214] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(89), 1,
      aux_sym__line_token1,
    STATE(4), 1,
      aux_sym__line,
  [224] = 3,
    ACTIONS(42), 1,
      sym__eol,
    ACTIONS(91), 1,
      aux_sym__line_token1,
    STATE(24), 1,
      aux_sym__line,
  [234] = 3,
    ACTIONS(51), 1,
      sym__eol,
    ACTIONS(91), 1,
      aux_sym__line_token1,
    STATE(24), 1,
      aux_sym__line,
  [244] = 3,
    ACTIONS(33), 1,
      sym__eol,
    ACTIONS(91), 1,
      aux_sym__line_token1,
    STATE(24), 1,
      aux_sym__line,
  [254] = 3,
    ACTIONS(46), 1,
      sym__eol,
    ACTIONS(93), 1,
      aux_sym__line_token1,
    STATE(24), 1,
      aux_sym__line,
  [264] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(96), 1,
      aux_sym__line_token1,
    STATE(22), 1,
      aux_sym__line,
  [274] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(98), 1,
      aux_sym__line_token1,
    STATE(23), 1,
      aux_sym__line,
  [284] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(100), 1,
      sym__char_bullet,
  [291] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(102), 1,
      sym__numeric_bullet,
  [298] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(104), 1,
      aux_sym__line_token1,
  [305] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(106), 1,
      ts_builtin_sym_end,
  [312] = 1,
    ACTIONS(66), 1,
      sym__eol,
  [316] = 1,
    ACTIONS(60), 1,
      sym__eol,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 14,
  [SMALL_STATE(6)] = 30,
  [SMALL_STATE(7)] = 46,
  [SMALL_STATE(8)] = 60,
  [SMALL_STATE(9)] = 74,
  [SMALL_STATE(10)] = 87,
  [SMALL_STATE(11)] = 100,
  [SMALL_STATE(12)] = 113,
  [SMALL_STATE(13)] = 126,
  [SMALL_STATE(14)] = 139,
  [SMALL_STATE(15)] = 152,
  [SMALL_STATE(16)] = 165,
  [SMALL_STATE(17)] = 178,
  [SMALL_STATE(18)] = 191,
  [SMALL_STATE(19)] = 204,
  [SMALL_STATE(20)] = 214,
  [SMALL_STATE(21)] = 224,
  [SMALL_STATE(22)] = 234,
  [SMALL_STATE(23)] = 244,
  [SMALL_STATE(24)] = 254,
  [SMALL_STATE(25)] = 264,
  [SMALL_STATE(26)] = 274,
  [SMALL_STATE(27)] = 284,
  [SMALL_STATE(28)] = 291,
  [SMALL_STATE(29)] = 298,
  [SMALL_STATE(30)] = 305,
  [SMALL_STATE(31)] = 312,
  [SMALL_STATE(32)] = 316,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(19),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(20),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(5),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(3),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__enumerated_list_item, 2),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__enumerated_list_item, 2), SHIFT(7),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 1),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__line, 2),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__line, 2), SHIFT_REPEAT(7),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bullet_list_item, 2),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__bullet_list_item, 2), SHIFT(7),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumerated_list, 2, .production_id = 2),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enumerated_list, 2, .production_id = 2),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bullet_list, 2, .production_id = 2),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bullet_list, 2, .production_id = 2),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bullet_list, 1, .production_id = 1),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bullet_list, 1, .production_id = 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumerated_list, 1, .production_id = 1),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enumerated_list, 1, .production_id = 1),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enumerated_list_repeat1, 2), SHIFT_REPEAT(26),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(21),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bullet_list_repeat1, 2), SHIFT_REPEAT(25),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__line, 2), SHIFT_REPEAT(24),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bullet_list_repeat1, 2, .production_id = 1),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enumerated_list_repeat1, 2, .production_id = 1),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [106] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
