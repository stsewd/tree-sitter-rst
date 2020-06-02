#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 30
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 24
#define ALIAS_COUNT 1
#define TOKEN_COUNT 9
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3

enum {
  sym__bullet = 1,
  anon_sym_DOT = 2,
  anon_sym_LPAREN = 3,
  anon_sym_RPAREN = 4,
  sym__numeric_bullet_seq = 5,
  sym__char = 6,
  sym__whitespace = 7,
  sym__eol = 8,
  sym_document = 9,
  sym__body_elements = 10,
  sym_paragraph = 11,
  sym_list = 12,
  aux_sym__bullet_list = 13,
  sym__bullet_list_item = 14,
  aux_sym__enumerated_list = 15,
  sym__enumerated_list_item = 16,
  sym__numeric_bullet = 17,
  sym__line = 18,
  sym__blank_line = 19,
  aux_sym_document_repeat1 = 20,
  aux_sym_paragraph_repeat1 = 21,
  aux_sym__line_repeat1 = 22,
  aux_sym__blank_line_repeat1 = 23,
  alias_sym_list_item = 24,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__bullet] = "_bullet",
  [anon_sym_DOT] = ".",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym__numeric_bullet_seq] = "_numeric_bullet_seq",
  [sym__char] = "_char",
  [sym__whitespace] = "_whitespace",
  [sym__eol] = "_eol",
  [sym_document] = "document",
  [sym__body_elements] = "_body_elements",
  [sym_paragraph] = "paragraph",
  [sym_list] = "list",
  [aux_sym__bullet_list] = "_bullet_list",
  [sym__bullet_list_item] = "_bullet_list_item",
  [aux_sym__enumerated_list] = "_enumerated_list",
  [sym__enumerated_list_item] = "_enumerated_list_item",
  [sym__numeric_bullet] = "_numeric_bullet",
  [sym__line] = "_line",
  [sym__blank_line] = "_blank_line",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_paragraph_repeat1] = "paragraph_repeat1",
  [aux_sym__line_repeat1] = "_line_repeat1",
  [aux_sym__blank_line_repeat1] = "_blank_line_repeat1",
  [alias_sym_list_item] = "list_item",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__bullet] = sym__bullet,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym__numeric_bullet_seq] = sym__numeric_bullet_seq,
  [sym__char] = sym__char,
  [sym__whitespace] = sym__whitespace,
  [sym__eol] = sym__eol,
  [sym_document] = sym_document,
  [sym__body_elements] = sym__body_elements,
  [sym_paragraph] = sym_paragraph,
  [sym_list] = sym_list,
  [aux_sym__bullet_list] = aux_sym__bullet_list,
  [sym__bullet_list_item] = sym__bullet_list_item,
  [aux_sym__enumerated_list] = aux_sym__enumerated_list,
  [sym__enumerated_list_item] = sym__enumerated_list_item,
  [sym__numeric_bullet] = sym__numeric_bullet,
  [sym__line] = sym__line,
  [sym__blank_line] = sym__blank_line,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_paragraph_repeat1] = aux_sym_paragraph_repeat1,
  [aux_sym__line_repeat1] = aux_sym__line_repeat1,
  [aux_sym__blank_line_repeat1] = aux_sym__blank_line_repeat1,
  [alias_sym_list_item] = alias_sym_list_item,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__bullet] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym__numeric_bullet_seq] = {
    .visible = false,
    .named = true,
  },
  [sym__char] = {
    .visible = false,
    .named = true,
  },
  [sym__whitespace] = {
    .visible = false,
    .named = true,
  },
  [sym__eol] = {
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
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__bullet_list] = {
    .visible = false,
    .named = false,
  },
  [sym__bullet_list_item] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__enumerated_list] = {
    .visible = false,
    .named = false,
  },
  [sym__enumerated_list_item] = {
    .visible = false,
    .named = true,
  },
  [sym__numeric_bullet] = {
    .visible = false,
    .named = true,
  },
  [sym__line] = {
    .visible = false,
    .named = true,
  },
  [sym__blank_line] = {
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
  [aux_sym__line_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__blank_line_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_list_item] = {
    .visible = true,
    .named = true,
  },
};

static TSSymbol ts_alias_sequences[2][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_list_item,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(4);
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == '#' ||
          lookahead == 'A' ||
          lookahead == 'B' ||
          ('E' <= lookahead && lookahead <= 'H') ||
          lookahead == 'J' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'U') ||
          lookahead == 'W' ||
          lookahead == 'Y' ||
          lookahead == 'Z' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          ('e' <= lookahead && lookahead <= 'h') ||
          lookahead == 'j' ||
          lookahead == 'k' ||
          ('n' <= lookahead && lookahead <= 'u') ||
          lookahead == 'w' ||
          lookahead == 'y' ||
          lookahead == 'z') ADVANCE(9);
      if (lookahead == '(') ADVANCE(7);
      if (lookahead == ')') ADVANCE(8);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == 8226 ||
          lookahead == 8227 ||
          lookahead == 8259) ADVANCE(5);
      if (lookahead == '.') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(13);
      if (('C' <= lookahead && lookahead <= 'X')) ADVANCE(10);
      if (('c' <= lookahead && lookahead <= 'x')) ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 1:
      if (lookahead == ')') ADVANCE(8);
      if (lookahead == '.') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(14);
      END_STATE();
    case 2:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 3:
      if (eof) ADVANCE(4);
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == '#' ||
          lookahead == 'A' ||
          lookahead == 'B' ||
          ('E' <= lookahead && lookahead <= 'H') ||
          lookahead == 'J' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'U') ||
          lookahead == 'W' ||
          lookahead == 'Y' ||
          lookahead == 'Z' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          ('e' <= lookahead && lookahead <= 'h') ||
          lookahead == 'j' ||
          lookahead == 'k' ||
          ('n' <= lookahead && lookahead <= 'u') ||
          lookahead == 'w' ||
          lookahead == 'y' ||
          lookahead == 'z') ADVANCE(9);
      if (lookahead == '(') ADVANCE(7);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == 8226 ||
          lookahead == 8227 ||
          lookahead == 8259) ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(13);
      if (('C' <= lookahead && lookahead <= 'X')) ADVANCE(10);
      if (('c' <= lookahead && lookahead <= 'x')) ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym__bullet);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym__numeric_bullet_seq);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym__numeric_bullet_seq);
      if (lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'I' ||
          lookahead == 'L' ||
          lookahead == 'M' ||
          lookahead == 'V' ||
          lookahead == 'X') ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym__numeric_bullet_seq);
      if (lookahead == 'c' ||
          lookahead == 'd' ||
          lookahead == 'i' ||
          lookahead == 'l' ||
          lookahead == 'm' ||
          lookahead == 'v' ||
          lookahead == 'x') ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym__numeric_bullet_seq);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym__char);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym__whitespace);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 3, .external_lex_state = 1},
  [2] = {.lex_state = 3, .external_lex_state = 1},
  [3] = {.lex_state = 3, .external_lex_state = 1},
  [4] = {.lex_state = 3, .external_lex_state = 1},
  [5] = {.lex_state = 3, .external_lex_state = 1},
  [6] = {.lex_state = 3, .external_lex_state = 1},
  [7] = {.lex_state = 3, .external_lex_state = 1},
  [8] = {.lex_state = 3, .external_lex_state = 1},
  [9] = {.lex_state = 3, .external_lex_state = 1},
  [10] = {.lex_state = 3, .external_lex_state = 1},
  [11] = {.lex_state = 3, .external_lex_state = 1},
  [12] = {.lex_state = 3, .external_lex_state = 1},
  [13] = {.lex_state = 3, .external_lex_state = 1},
  [14] = {.lex_state = 3, .external_lex_state = 1},
  [15] = {.lex_state = 3, .external_lex_state = 1},
  [16] = {.lex_state = 2, .external_lex_state = 1},
  [17] = {.lex_state = 1, .external_lex_state = 1},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2, .external_lex_state = 1},
  [21] = {.lex_state = 1, .external_lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 1},
};

enum {
  ts_external_token__eol = 0,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__eol] = sym__eol,
};

static bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__eol] = true,
  },
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__bullet] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym__numeric_bullet_seq] = ACTIONS(1),
    [sym__char] = ACTIONS(1),
    [sym__whitespace] = ACTIONS(1),
    [sym__eol] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(27),
    [sym__body_elements] = STATE(2),
    [sym_paragraph] = STATE(2),
    [sym_list] = STATE(2),
    [aux_sym__bullet_list] = STATE(9),
    [sym__bullet_list_item] = STATE(10),
    [aux_sym__enumerated_list] = STATE(6),
    [sym__enumerated_list_item] = STATE(11),
    [sym__numeric_bullet] = STATE(23),
    [sym__line] = STATE(7),
    [sym__blank_line] = STATE(2),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_paragraph_repeat1] = STATE(7),
    [aux_sym__line_repeat1] = STATE(16),
    [aux_sym__blank_line_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__bullet] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym__numeric_bullet_seq] = ACTIONS(9),
    [sym__char] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(13),
    [sym__eol] = ACTIONS(15),
  },
  [2] = {
    [sym__body_elements] = STATE(3),
    [sym_paragraph] = STATE(3),
    [sym_list] = STATE(3),
    [aux_sym__bullet_list] = STATE(9),
    [sym__bullet_list_item] = STATE(10),
    [aux_sym__enumerated_list] = STATE(6),
    [sym__enumerated_list_item] = STATE(11),
    [sym__numeric_bullet] = STATE(23),
    [sym__line] = STATE(7),
    [sym__blank_line] = STATE(3),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_paragraph_repeat1] = STATE(7),
    [aux_sym__line_repeat1] = STATE(16),
    [aux_sym__blank_line_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(17),
    [sym__bullet] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym__numeric_bullet_seq] = ACTIONS(9),
    [sym__char] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(13),
    [sym__eol] = ACTIONS(19),
  },
  [3] = {
    [sym__body_elements] = STATE(3),
    [sym_paragraph] = STATE(3),
    [sym_list] = STATE(3),
    [aux_sym__bullet_list] = STATE(9),
    [sym__bullet_list_item] = STATE(10),
    [aux_sym__enumerated_list] = STATE(6),
    [sym__enumerated_list_item] = STATE(11),
    [sym__numeric_bullet] = STATE(23),
    [sym__line] = STATE(7),
    [sym__blank_line] = STATE(3),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_paragraph_repeat1] = STATE(7),
    [aux_sym__line_repeat1] = STATE(16),
    [aux_sym__blank_line_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(21),
    [sym__bullet] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(26),
    [sym__numeric_bullet_seq] = ACTIONS(29),
    [sym__char] = ACTIONS(32),
    [sym__whitespace] = ACTIONS(35),
    [sym__eol] = ACTIONS(38),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(43), 1,
      sym__char,
    ACTIONS(46), 1,
      sym__whitespace,
    STATE(16), 1,
      aux_sym__line_repeat1,
    STATE(4), 2,
      sym__line,
      aux_sym_paragraph_repeat1,
    ACTIONS(41), 5,
      sym__eol,
      ts_builtin_sym_end,
      sym__bullet,
      anon_sym_LPAREN,
      sym__numeric_bullet_seq,
  [21] = 7,
    ACTIONS(50), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      sym__numeric_bullet_seq,
    STATE(5), 1,
      aux_sym__enumerated_list,
    STATE(11), 1,
      sym__enumerated_list_item,
    STATE(23), 1,
      sym__numeric_bullet,
    ACTIONS(56), 2,
      sym__char,
      sym__whitespace,
    ACTIONS(48), 3,
      sym__eol,
      ts_builtin_sym_end,
      sym__bullet,
  [46] = 7,
    ACTIONS(60), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      sym__numeric_bullet_seq,
    STATE(5), 1,
      aux_sym__enumerated_list,
    STATE(11), 1,
      sym__enumerated_list_item,
    STATE(23), 1,
      sym__numeric_bullet,
    ACTIONS(66), 2,
      sym__char,
      sym__whitespace,
    ACTIONS(58), 3,
      sym__eol,
      ts_builtin_sym_end,
      sym__bullet,
  [71] = 5,
    ACTIONS(70), 1,
      sym__char,
    ACTIONS(73), 1,
      sym__whitespace,
    STATE(16), 1,
      aux_sym__line_repeat1,
    STATE(4), 2,
      sym__line,
      aux_sym_paragraph_repeat1,
    ACTIONS(68), 5,
      sym__eol,
      ts_builtin_sym_end,
      sym__bullet,
      anon_sym_LPAREN,
      sym__numeric_bullet_seq,
  [92] = 5,
    ACTIONS(77), 1,
      sym__bullet,
    STATE(8), 1,
      aux_sym__bullet_list,
    STATE(10), 1,
      sym__bullet_list_item,
    ACTIONS(80), 2,
      sym__char,
      sym__whitespace,
    ACTIONS(75), 4,
      sym__eol,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      sym__numeric_bullet_seq,
  [112] = 5,
    ACTIONS(82), 1,
      sym__bullet,
    STATE(8), 1,
      aux_sym__bullet_list,
    STATE(10), 1,
      sym__bullet_list_item,
    ACTIONS(66), 2,
      sym__char,
      sym__whitespace,
    ACTIONS(58), 4,
      sym__eol,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      sym__numeric_bullet_seq,
  [132] = 2,
    ACTIONS(87), 2,
      sym__char,
      sym__whitespace,
    ACTIONS(85), 5,
      sym__eol,
      ts_builtin_sym_end,
      sym__bullet,
      anon_sym_LPAREN,
      sym__numeric_bullet_seq,
  [144] = 2,
    ACTIONS(91), 2,
      sym__char,
      sym__whitespace,
    ACTIONS(89), 5,
      sym__eol,
      ts_builtin_sym_end,
      sym__bullet,
      anon_sym_LPAREN,
      sym__numeric_bullet_seq,
  [156] = 2,
    ACTIONS(95), 2,
      sym__char,
      sym__whitespace,
    ACTIONS(93), 5,
      sym__eol,
      ts_builtin_sym_end,
      sym__bullet,
      anon_sym_LPAREN,
      sym__numeric_bullet_seq,
  [168] = 2,
    ACTIONS(99), 2,
      sym__char,
      sym__whitespace,
    ACTIONS(97), 5,
      sym__eol,
      ts_builtin_sym_end,
      sym__bullet,
      anon_sym_LPAREN,
      sym__numeric_bullet_seq,
  [180] = 2,
    ACTIONS(103), 2,
      sym__char,
      sym__whitespace,
    ACTIONS(101), 5,
      sym__eol,
      ts_builtin_sym_end,
      sym__bullet,
      anon_sym_LPAREN,
      sym__numeric_bullet_seq,
  [192] = 2,
    ACTIONS(107), 2,
      sym__char,
      sym__whitespace,
    ACTIONS(105), 5,
      sym__eol,
      ts_builtin_sym_end,
      sym__bullet,
      anon_sym_LPAREN,
      sym__numeric_bullet_seq,
  [204] = 3,
    ACTIONS(109), 1,
      sym__char,
    ACTIONS(111), 1,
      sym__eol,
    STATE(20), 1,
      aux_sym__line_repeat1,
  [214] = 3,
    ACTIONS(113), 1,
      sym__whitespace,
    ACTIONS(115), 1,
      sym__eol,
    STATE(21), 1,
      aux_sym__blank_line_repeat1,
  [224] = 3,
    ACTIONS(117), 1,
      sym__char,
    STATE(14), 1,
      sym__line,
    STATE(16), 1,
      aux_sym__line_repeat1,
  [234] = 3,
    ACTIONS(117), 1,
      sym__char,
    STATE(15), 1,
      sym__line,
    STATE(16), 1,
      aux_sym__line_repeat1,
  [244] = 3,
    ACTIONS(119), 1,
      sym__char,
    ACTIONS(122), 1,
      sym__eol,
    STATE(20), 1,
      aux_sym__line_repeat1,
  [254] = 3,
    ACTIONS(124), 1,
      sym__whitespace,
    ACTIONS(127), 1,
      sym__eol,
    STATE(21), 1,
      aux_sym__blank_line_repeat1,
  [264] = 1,
    ACTIONS(129), 2,
      anon_sym_DOT,
      anon_sym_RPAREN,
  [269] = 1,
    ACTIONS(131), 1,
      sym__whitespace,
  [273] = 1,
    ACTIONS(133), 1,
      sym__whitespace,
  [277] = 1,
    ACTIONS(135), 1,
      anon_sym_RPAREN,
  [281] = 1,
    ACTIONS(137), 1,
      sym__whitespace,
  [285] = 1,
    ACTIONS(139), 1,
      ts_builtin_sym_end,
  [289] = 1,
    ACTIONS(141), 1,
      sym__numeric_bullet_seq,
  [293] = 1,
    ACTIONS(143), 1,
      sym__whitespace,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 21,
  [SMALL_STATE(6)] = 46,
  [SMALL_STATE(7)] = 71,
  [SMALL_STATE(8)] = 92,
  [SMALL_STATE(9)] = 112,
  [SMALL_STATE(10)] = 132,
  [SMALL_STATE(11)] = 144,
  [SMALL_STATE(12)] = 156,
  [SMALL_STATE(13)] = 168,
  [SMALL_STATE(14)] = 180,
  [SMALL_STATE(15)] = 192,
  [SMALL_STATE(16)] = 204,
  [SMALL_STATE(17)] = 214,
  [SMALL_STATE(18)] = 224,
  [SMALL_STATE(19)] = 234,
  [SMALL_STATE(20)] = 244,
  [SMALL_STATE(21)] = 254,
  [SMALL_STATE(22)] = 264,
  [SMALL_STATE(23)] = 269,
  [SMALL_STATE(24)] = 273,
  [SMALL_STATE(25)] = 277,
  [SMALL_STATE(26)] = 281,
  [SMALL_STATE(27)] = 285,
  [SMALL_STATE(28)] = 289,
  [SMALL_STATE(29)] = 293,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, REDUCE(sym_document, 0),
  [5] = {.count = 1, .reusable = true}, SHIFT(24),
  [7] = {.count = 1, .reusable = true}, SHIFT(28),
  [9] = {.count = 1, .reusable = true}, SHIFT(22),
  [11] = {.count = 1, .reusable = false}, SHIFT(16),
  [13] = {.count = 1, .reusable = false}, SHIFT(17),
  [15] = {.count = 1, .reusable = true}, SHIFT(2),
  [17] = {.count = 1, .reusable = true}, REDUCE(sym_document, 1),
  [19] = {.count = 1, .reusable = true}, SHIFT(3),
  [21] = {.count = 1, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2),
  [23] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(24),
  [26] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(28),
  [29] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(22),
  [32] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(16),
  [35] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(17),
  [38] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(3),
  [41] = {.count = 1, .reusable = true}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [43] = {.count = 2, .reusable = false}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(16),
  [46] = {.count = 1, .reusable = false}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [48] = {.count = 1, .reusable = true}, REDUCE(aux_sym__enumerated_list, 2),
  [50] = {.count = 2, .reusable = true}, REDUCE(aux_sym__enumerated_list, 2), SHIFT_REPEAT(28),
  [53] = {.count = 2, .reusable = true}, REDUCE(aux_sym__enumerated_list, 2), SHIFT_REPEAT(22),
  [56] = {.count = 1, .reusable = false}, REDUCE(aux_sym__enumerated_list, 2),
  [58] = {.count = 1, .reusable = true}, REDUCE(sym_list, 1),
  [60] = {.count = 2, .reusable = true}, REDUCE(sym_list, 1), SHIFT(28),
  [63] = {.count = 2, .reusable = true}, REDUCE(sym_list, 1), SHIFT(22),
  [66] = {.count = 1, .reusable = false}, REDUCE(sym_list, 1),
  [68] = {.count = 1, .reusable = true}, REDUCE(sym_paragraph, 1),
  [70] = {.count = 2, .reusable = false}, REDUCE(sym_paragraph, 1), SHIFT(16),
  [73] = {.count = 1, .reusable = false}, REDUCE(sym_paragraph, 1),
  [75] = {.count = 1, .reusable = true}, REDUCE(aux_sym__bullet_list, 2),
  [77] = {.count = 2, .reusable = true}, REDUCE(aux_sym__bullet_list, 2), SHIFT_REPEAT(24),
  [80] = {.count = 1, .reusable = false}, REDUCE(aux_sym__bullet_list, 2),
  [82] = {.count = 2, .reusable = true}, REDUCE(sym_list, 1), SHIFT(24),
  [85] = {.count = 1, .reusable = true}, REDUCE(aux_sym__bullet_list, 1, .production_id = 1),
  [87] = {.count = 1, .reusable = false}, REDUCE(aux_sym__bullet_list, 1, .production_id = 1),
  [89] = {.count = 1, .reusable = true}, REDUCE(aux_sym__enumerated_list, 1, .production_id = 1),
  [91] = {.count = 1, .reusable = false}, REDUCE(aux_sym__enumerated_list, 1, .production_id = 1),
  [93] = {.count = 1, .reusable = true}, REDUCE(sym__line, 2),
  [95] = {.count = 1, .reusable = false}, REDUCE(sym__line, 2),
  [97] = {.count = 1, .reusable = true}, REDUCE(sym__blank_line, 2),
  [99] = {.count = 1, .reusable = false}, REDUCE(sym__blank_line, 2),
  [101] = {.count = 1, .reusable = true}, REDUCE(sym__bullet_list_item, 3),
  [103] = {.count = 1, .reusable = false}, REDUCE(sym__bullet_list_item, 3),
  [105] = {.count = 1, .reusable = true}, REDUCE(sym__enumerated_list_item, 3),
  [107] = {.count = 1, .reusable = false}, REDUCE(sym__enumerated_list_item, 3),
  [109] = {.count = 1, .reusable = true}, SHIFT(20),
  [111] = {.count = 1, .reusable = true}, SHIFT(12),
  [113] = {.count = 1, .reusable = true}, SHIFT(21),
  [115] = {.count = 1, .reusable = true}, SHIFT(13),
  [117] = {.count = 1, .reusable = true}, SHIFT(16),
  [119] = {.count = 2, .reusable = true}, REDUCE(aux_sym__line_repeat1, 2), SHIFT_REPEAT(20),
  [122] = {.count = 1, .reusable = true}, REDUCE(aux_sym__line_repeat1, 2),
  [124] = {.count = 2, .reusable = true}, REDUCE(aux_sym__blank_line_repeat1, 2), SHIFT_REPEAT(21),
  [127] = {.count = 1, .reusable = true}, REDUCE(aux_sym__blank_line_repeat1, 2),
  [129] = {.count = 1, .reusable = true}, SHIFT(26),
  [131] = {.count = 1, .reusable = true}, SHIFT(19),
  [133] = {.count = 1, .reusable = true}, SHIFT(18),
  [135] = {.count = 1, .reusable = true}, SHIFT(29),
  [137] = {.count = 1, .reusable = true}, REDUCE(sym__numeric_bullet, 2),
  [139] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [141] = {.count = 1, .reusable = true}, SHIFT(25),
  [143] = {.count = 1, .reusable = true}, REDUCE(sym__numeric_bullet, 3),
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
