#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 25
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 23
#define ALIAS_COUNT 1
#define TOKEN_COUNT 8
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3

enum {
  sym__bullet = 1,
  aux_sym__numeric_bullet_token1 = 2,
  aux_sym__numeric_bullet_token2 = 3,
  aux_sym__numeric_bullet_token3 = 4,
  aux_sym__line_token1 = 5,
  sym__whitespace = 6,
  sym__eol = 7,
  sym_document = 8,
  sym__body_elements = 9,
  sym_paragraph = 10,
  sym_list = 11,
  aux_sym__bullet_list = 12,
  sym__bullet_list_item = 13,
  aux_sym__enumerated_list = 14,
  sym__enumerated_list_item = 15,
  sym__numeric_bullet = 16,
  sym__line = 17,
  sym__blank_line = 18,
  aux_sym_document_repeat1 = 19,
  aux_sym_paragraph_repeat1 = 20,
  aux_sym__line_repeat1 = 21,
  aux_sym__blank_line_repeat1 = 22,
  alias_sym_list_item = 23,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__bullet] = "_bullet",
  [aux_sym__numeric_bullet_token1] = "_numeric_bullet_token1",
  [aux_sym__numeric_bullet_token2] = "_numeric_bullet_token2",
  [aux_sym__numeric_bullet_token3] = "_numeric_bullet_token3",
  [aux_sym__line_token1] = "_line_token1",
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
  [aux_sym__numeric_bullet_token1] = aux_sym__numeric_bullet_token1,
  [aux_sym__numeric_bullet_token2] = aux_sym__numeric_bullet_token2,
  [aux_sym__numeric_bullet_token3] = aux_sym__numeric_bullet_token3,
  [aux_sym__line_token1] = aux_sym__line_token1,
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
  [aux_sym__numeric_bullet_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__numeric_bullet_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__numeric_bullet_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__line_token1] = {
    .visible = false,
    .named = false,
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
      if (eof) ADVANCE(10);
      if (lookahead == '\n') ADVANCE(21);
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
          lookahead == 'z') ADVANCE(16);
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == 8226 ||
          lookahead == 8227 ||
          lookahead == 8259) ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(15);
      if (('C' <= lookahead && lookahead <= 'X')) ADVANCE(17);
      if (('c' <= lookahead && lookahead <= 'x')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 1:
      if (lookahead == ')') ADVANCE(14);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'I' ||
          lookahead == 'L' ||
          lookahead == 'M' ||
          lookahead == 'V' ||
          lookahead == 'X') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == ')') ADVANCE(14);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == 'c' ||
          lookahead == 'd' ||
          lookahead == 'i' ||
          lookahead == 'l' ||
          lookahead == 'm' ||
          lookahead == 'v' ||
          lookahead == 'x') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == ')') ADVANCE(14);
      if (lookahead == '.') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == ')') ADVANCE(13);
      END_STATE();
    case 5:
      if (lookahead == ')') ADVANCE(13);
      if (lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'I' ||
          lookahead == 'L' ||
          lookahead == 'M' ||
          lookahead == 'V' ||
          lookahead == 'X') ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == ')') ADVANCE(13);
      if (lookahead == 'c' ||
          lookahead == 'd' ||
          lookahead == 'i' ||
          lookahead == 'l' ||
          lookahead == 'm' ||
          lookahead == 'v' ||
          lookahead == 'x') ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == ')') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(21);
      END_STATE();
    case 9:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(15);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym__bullet);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym__numeric_bullet_token1);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym__numeric_bullet_token2);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym__numeric_bullet_token3);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym__line_token1);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == ')') ADVANCE(14);
      if (lookahead == '.') ADVANCE(12);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == ')') ADVANCE(14);
      if (lookahead == '.') ADVANCE(12);
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
      if (lookahead == ')') ADVANCE(14);
      if (lookahead == '.') ADVANCE(12);
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
      if (lookahead == ')') ADVANCE(14);
      if (lookahead == '.') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym__line_token1);
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
          lookahead == 'z') ADVANCE(4);
      if (('C' <= lookahead && lookahead <= 'X')) ADVANCE(5);
      if (('c' <= lookahead && lookahead <= 'x')) ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym__whitespace);
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
  [13] = {.lex_state = 0, .external_lex_state = 1},
  [14] = {.lex_state = 0, .external_lex_state = 1},
  [15] = {.lex_state = 0, .external_lex_state = 1},
  [16] = {.lex_state = 9, .external_lex_state = 1},
  [17] = {.lex_state = 8, .external_lex_state = 1},
  [18] = {.lex_state = 9},
  [19] = {.lex_state = 9},
  [20] = {.lex_state = 9, .external_lex_state = 1},
  [21] = {.lex_state = 8, .external_lex_state = 1},
  [22] = {.lex_state = 8},
  [23] = {.lex_state = 8},
  [24] = {.lex_state = 0},
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
    [aux_sym__numeric_bullet_token1] = ACTIONS(1),
    [aux_sym__numeric_bullet_token2] = ACTIONS(1),
    [aux_sym__numeric_bullet_token3] = ACTIONS(1),
    [aux_sym__line_token1] = ACTIONS(1),
    [sym__whitespace] = ACTIONS(1),
    [sym__eol] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(24),
    [sym__body_elements] = STATE(2),
    [sym_paragraph] = STATE(2),
    [sym_list] = STATE(2),
    [aux_sym__bullet_list] = STATE(8),
    [sym__bullet_list_item] = STATE(10),
    [aux_sym__enumerated_list] = STATE(5),
    [sym__enumerated_list_item] = STATE(11),
    [sym__numeric_bullet] = STATE(22),
    [sym__line] = STATE(6),
    [sym__blank_line] = STATE(2),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_paragraph_repeat1] = STATE(6),
    [aux_sym__line_repeat1] = STATE(16),
    [aux_sym__blank_line_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__bullet] = ACTIONS(5),
    [aux_sym__numeric_bullet_token1] = ACTIONS(7),
    [aux_sym__numeric_bullet_token2] = ACTIONS(7),
    [aux_sym__numeric_bullet_token3] = ACTIONS(7),
    [aux_sym__line_token1] = ACTIONS(9),
    [sym__whitespace] = ACTIONS(11),
    [sym__eol] = ACTIONS(13),
  },
  [2] = {
    [sym__body_elements] = STATE(3),
    [sym_paragraph] = STATE(3),
    [sym_list] = STATE(3),
    [aux_sym__bullet_list] = STATE(8),
    [sym__bullet_list_item] = STATE(10),
    [aux_sym__enumerated_list] = STATE(5),
    [sym__enumerated_list_item] = STATE(11),
    [sym__numeric_bullet] = STATE(22),
    [sym__line] = STATE(6),
    [sym__blank_line] = STATE(3),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_paragraph_repeat1] = STATE(6),
    [aux_sym__line_repeat1] = STATE(16),
    [aux_sym__blank_line_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(15),
    [sym__bullet] = ACTIONS(5),
    [aux_sym__numeric_bullet_token1] = ACTIONS(7),
    [aux_sym__numeric_bullet_token2] = ACTIONS(7),
    [aux_sym__numeric_bullet_token3] = ACTIONS(7),
    [aux_sym__line_token1] = ACTIONS(9),
    [sym__whitespace] = ACTIONS(11),
    [sym__eol] = ACTIONS(17),
  },
  [3] = {
    [sym__body_elements] = STATE(3),
    [sym_paragraph] = STATE(3),
    [sym_list] = STATE(3),
    [aux_sym__bullet_list] = STATE(8),
    [sym__bullet_list_item] = STATE(10),
    [aux_sym__enumerated_list] = STATE(5),
    [sym__enumerated_list_item] = STATE(11),
    [sym__numeric_bullet] = STATE(22),
    [sym__line] = STATE(6),
    [sym__blank_line] = STATE(3),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_paragraph_repeat1] = STATE(6),
    [aux_sym__line_repeat1] = STATE(16),
    [aux_sym__blank_line_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(19),
    [sym__bullet] = ACTIONS(21),
    [aux_sym__numeric_bullet_token1] = ACTIONS(24),
    [aux_sym__numeric_bullet_token2] = ACTIONS(24),
    [aux_sym__numeric_bullet_token3] = ACTIONS(24),
    [aux_sym__line_token1] = ACTIONS(27),
    [sym__whitespace] = ACTIONS(30),
    [sym__eol] = ACTIONS(33),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(38), 1,
      aux_sym__line_token1,
    ACTIONS(41), 1,
      sym__whitespace,
    STATE(16), 1,
      aux_sym__line_repeat1,
    STATE(4), 2,
      sym__line,
      aux_sym_paragraph_repeat1,
    ACTIONS(36), 6,
      sym__eol,
      ts_builtin_sym_end,
      sym__bullet,
      aux_sym__numeric_bullet_token1,
      aux_sym__numeric_bullet_token2,
      aux_sym__numeric_bullet_token3,
  [22] = 6,
    STATE(7), 1,
      aux_sym__enumerated_list,
    STATE(11), 1,
      sym__enumerated_list_item,
    STATE(22), 1,
      sym__numeric_bullet,
    ACTIONS(48), 2,
      aux_sym__line_token1,
      sym__whitespace,
    ACTIONS(43), 3,
      sym__eol,
      ts_builtin_sym_end,
      sym__bullet,
    ACTIONS(45), 3,
      aux_sym__numeric_bullet_token1,
      aux_sym__numeric_bullet_token2,
      aux_sym__numeric_bullet_token3,
  [46] = 5,
    ACTIONS(52), 1,
      aux_sym__line_token1,
    ACTIONS(55), 1,
      sym__whitespace,
    STATE(16), 1,
      aux_sym__line_repeat1,
    STATE(4), 2,
      sym__line,
      aux_sym_paragraph_repeat1,
    ACTIONS(50), 6,
      sym__eol,
      ts_builtin_sym_end,
      sym__bullet,
      aux_sym__numeric_bullet_token1,
      aux_sym__numeric_bullet_token2,
      aux_sym__numeric_bullet_token3,
  [68] = 6,
    STATE(7), 1,
      aux_sym__enumerated_list,
    STATE(11), 1,
      sym__enumerated_list_item,
    STATE(22), 1,
      sym__numeric_bullet,
    ACTIONS(62), 2,
      aux_sym__line_token1,
      sym__whitespace,
    ACTIONS(57), 3,
      sym__eol,
      ts_builtin_sym_end,
      sym__bullet,
    ACTIONS(59), 3,
      aux_sym__numeric_bullet_token1,
      aux_sym__numeric_bullet_token2,
      aux_sym__numeric_bullet_token3,
  [92] = 5,
    ACTIONS(64), 1,
      sym__bullet,
    STATE(9), 1,
      aux_sym__bullet_list,
    STATE(10), 1,
      sym__bullet_list_item,
    ACTIONS(48), 2,
      aux_sym__line_token1,
      sym__whitespace,
    ACTIONS(43), 5,
      sym__eol,
      ts_builtin_sym_end,
      aux_sym__numeric_bullet_token1,
      aux_sym__numeric_bullet_token2,
      aux_sym__numeric_bullet_token3,
  [113] = 5,
    ACTIONS(69), 1,
      sym__bullet,
    STATE(9), 1,
      aux_sym__bullet_list,
    STATE(10), 1,
      sym__bullet_list_item,
    ACTIONS(72), 2,
      aux_sym__line_token1,
      sym__whitespace,
    ACTIONS(67), 5,
      sym__eol,
      ts_builtin_sym_end,
      aux_sym__numeric_bullet_token1,
      aux_sym__numeric_bullet_token2,
      aux_sym__numeric_bullet_token3,
  [134] = 2,
    ACTIONS(76), 2,
      aux_sym__line_token1,
      sym__whitespace,
    ACTIONS(74), 6,
      sym__eol,
      ts_builtin_sym_end,
      sym__bullet,
      aux_sym__numeric_bullet_token1,
      aux_sym__numeric_bullet_token2,
      aux_sym__numeric_bullet_token3,
  [147] = 2,
    ACTIONS(80), 2,
      aux_sym__line_token1,
      sym__whitespace,
    ACTIONS(78), 6,
      sym__eol,
      ts_builtin_sym_end,
      sym__bullet,
      aux_sym__numeric_bullet_token1,
      aux_sym__numeric_bullet_token2,
      aux_sym__numeric_bullet_token3,
  [160] = 2,
    ACTIONS(84), 2,
      aux_sym__line_token1,
      sym__whitespace,
    ACTIONS(82), 6,
      sym__eol,
      ts_builtin_sym_end,
      sym__bullet,
      aux_sym__numeric_bullet_token1,
      aux_sym__numeric_bullet_token2,
      aux_sym__numeric_bullet_token3,
  [173] = 2,
    ACTIONS(88), 2,
      aux_sym__line_token1,
      sym__whitespace,
    ACTIONS(86), 6,
      sym__eol,
      ts_builtin_sym_end,
      sym__bullet,
      aux_sym__numeric_bullet_token1,
      aux_sym__numeric_bullet_token2,
      aux_sym__numeric_bullet_token3,
  [186] = 2,
    ACTIONS(92), 2,
      aux_sym__line_token1,
      sym__whitespace,
    ACTIONS(90), 6,
      sym__eol,
      ts_builtin_sym_end,
      sym__bullet,
      aux_sym__numeric_bullet_token1,
      aux_sym__numeric_bullet_token2,
      aux_sym__numeric_bullet_token3,
  [199] = 2,
    ACTIONS(96), 2,
      aux_sym__line_token1,
      sym__whitespace,
    ACTIONS(94), 6,
      sym__eol,
      ts_builtin_sym_end,
      sym__bullet,
      aux_sym__numeric_bullet_token1,
      aux_sym__numeric_bullet_token2,
      aux_sym__numeric_bullet_token3,
  [212] = 3,
    ACTIONS(98), 1,
      aux_sym__line_token1,
    ACTIONS(100), 1,
      sym__eol,
    STATE(20), 1,
      aux_sym__line_repeat1,
  [222] = 3,
    ACTIONS(102), 1,
      sym__whitespace,
    ACTIONS(104), 1,
      sym__eol,
    STATE(21), 1,
      aux_sym__blank_line_repeat1,
  [232] = 3,
    ACTIONS(106), 1,
      aux_sym__line_token1,
    STATE(14), 1,
      sym__line,
    STATE(16), 1,
      aux_sym__line_repeat1,
  [242] = 3,
    ACTIONS(106), 1,
      aux_sym__line_token1,
    STATE(15), 1,
      sym__line,
    STATE(16), 1,
      aux_sym__line_repeat1,
  [252] = 3,
    ACTIONS(108), 1,
      aux_sym__line_token1,
    ACTIONS(111), 1,
      sym__eol,
    STATE(20), 1,
      aux_sym__line_repeat1,
  [262] = 3,
    ACTIONS(113), 1,
      sym__whitespace,
    ACTIONS(116), 1,
      sym__eol,
    STATE(21), 1,
      aux_sym__blank_line_repeat1,
  [272] = 1,
    ACTIONS(118), 1,
      sym__whitespace,
  [276] = 1,
    ACTIONS(120), 1,
      sym__whitespace,
  [280] = 1,
    ACTIONS(122), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 22,
  [SMALL_STATE(6)] = 46,
  [SMALL_STATE(7)] = 68,
  [SMALL_STATE(8)] = 92,
  [SMALL_STATE(9)] = 113,
  [SMALL_STATE(10)] = 134,
  [SMALL_STATE(11)] = 147,
  [SMALL_STATE(12)] = 160,
  [SMALL_STATE(13)] = 173,
  [SMALL_STATE(14)] = 186,
  [SMALL_STATE(15)] = 199,
  [SMALL_STATE(16)] = 212,
  [SMALL_STATE(17)] = 222,
  [SMALL_STATE(18)] = 232,
  [SMALL_STATE(19)] = 242,
  [SMALL_STATE(20)] = 252,
  [SMALL_STATE(21)] = 262,
  [SMALL_STATE(22)] = 272,
  [SMALL_STATE(23)] = 276,
  [SMALL_STATE(24)] = 280,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, REDUCE(sym_document, 0),
  [5] = {.count = 1, .reusable = true}, SHIFT(23),
  [7] = {.count = 1, .reusable = true}, SHIFT(22),
  [9] = {.count = 1, .reusable = false}, SHIFT(16),
  [11] = {.count = 1, .reusable = false}, SHIFT(17),
  [13] = {.count = 1, .reusable = true}, SHIFT(2),
  [15] = {.count = 1, .reusable = true}, REDUCE(sym_document, 1),
  [17] = {.count = 1, .reusable = true}, SHIFT(3),
  [19] = {.count = 1, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2),
  [21] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(23),
  [24] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(22),
  [27] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(16),
  [30] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(17),
  [33] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(3),
  [36] = {.count = 1, .reusable = true}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [38] = {.count = 2, .reusable = false}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(16),
  [41] = {.count = 1, .reusable = false}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [43] = {.count = 1, .reusable = true}, REDUCE(sym_list, 1),
  [45] = {.count = 2, .reusable = true}, REDUCE(sym_list, 1), SHIFT(22),
  [48] = {.count = 1, .reusable = false}, REDUCE(sym_list, 1),
  [50] = {.count = 1, .reusable = true}, REDUCE(sym_paragraph, 1),
  [52] = {.count = 2, .reusable = false}, REDUCE(sym_paragraph, 1), SHIFT(16),
  [55] = {.count = 1, .reusable = false}, REDUCE(sym_paragraph, 1),
  [57] = {.count = 1, .reusable = true}, REDUCE(aux_sym__enumerated_list, 2),
  [59] = {.count = 2, .reusable = true}, REDUCE(aux_sym__enumerated_list, 2), SHIFT_REPEAT(22),
  [62] = {.count = 1, .reusable = false}, REDUCE(aux_sym__enumerated_list, 2),
  [64] = {.count = 2, .reusable = true}, REDUCE(sym_list, 1), SHIFT(23),
  [67] = {.count = 1, .reusable = true}, REDUCE(aux_sym__bullet_list, 2),
  [69] = {.count = 2, .reusable = true}, REDUCE(aux_sym__bullet_list, 2), SHIFT_REPEAT(23),
  [72] = {.count = 1, .reusable = false}, REDUCE(aux_sym__bullet_list, 2),
  [74] = {.count = 1, .reusable = true}, REDUCE(aux_sym__bullet_list, 1, .production_id = 1),
  [76] = {.count = 1, .reusable = false}, REDUCE(aux_sym__bullet_list, 1, .production_id = 1),
  [78] = {.count = 1, .reusable = true}, REDUCE(aux_sym__enumerated_list, 1, .production_id = 1),
  [80] = {.count = 1, .reusable = false}, REDUCE(aux_sym__enumerated_list, 1, .production_id = 1),
  [82] = {.count = 1, .reusable = true}, REDUCE(sym__line, 2),
  [84] = {.count = 1, .reusable = false}, REDUCE(sym__line, 2),
  [86] = {.count = 1, .reusable = true}, REDUCE(sym__blank_line, 2),
  [88] = {.count = 1, .reusable = false}, REDUCE(sym__blank_line, 2),
  [90] = {.count = 1, .reusable = true}, REDUCE(sym__bullet_list_item, 3),
  [92] = {.count = 1, .reusable = false}, REDUCE(sym__bullet_list_item, 3),
  [94] = {.count = 1, .reusable = true}, REDUCE(sym__enumerated_list_item, 3),
  [96] = {.count = 1, .reusable = false}, REDUCE(sym__enumerated_list_item, 3),
  [98] = {.count = 1, .reusable = true}, SHIFT(20),
  [100] = {.count = 1, .reusable = true}, SHIFT(12),
  [102] = {.count = 1, .reusable = true}, SHIFT(21),
  [104] = {.count = 1, .reusable = true}, SHIFT(13),
  [106] = {.count = 1, .reusable = true}, SHIFT(16),
  [108] = {.count = 2, .reusable = true}, REDUCE(aux_sym__line_repeat1, 2), SHIFT_REPEAT(20),
  [111] = {.count = 1, .reusable = true}, REDUCE(aux_sym__line_repeat1, 2),
  [113] = {.count = 2, .reusable = true}, REDUCE(aux_sym__blank_line_repeat1, 2), SHIFT_REPEAT(21),
  [116] = {.count = 1, .reusable = true}, REDUCE(aux_sym__blank_line_repeat1, 2),
  [118] = {.count = 1, .reusable = true}, SHIFT(19),
  [120] = {.count = 1, .reusable = true}, SHIFT(18),
  [122] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
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
