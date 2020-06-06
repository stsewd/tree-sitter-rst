#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 23
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 14
#define ALIAS_COUNT 1
#define TOKEN_COUNT 5
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 2

enum {
  sym__char_bullet = 1,
  aux_sym__line_token1 = 2,
  sym__eol = 3,
  sym__blank_line = 4,
  sym_document = 5,
  sym__body_elements = 6,
  sym_paragraph = 7,
  sym_bullet_list = 8,
  sym__bullet_list_item = 9,
  aux_sym__line = 10,
  aux_sym_document_repeat1 = 11,
  aux_sym_paragraph_repeat1 = 12,
  aux_sym_bullet_list_repeat1 = 13,
  alias_sym_list_item = 14,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__char_bullet] = "_char_bullet",
  [aux_sym__line_token1] = "_line_token1",
  [sym__eol] = "_eol",
  [sym__blank_line] = "_blank_line",
  [sym_document] = "document",
  [sym__body_elements] = "_body_elements",
  [sym_paragraph] = "paragraph",
  [sym_bullet_list] = "bullet_list",
  [sym__bullet_list_item] = "_bullet_list_item",
  [aux_sym__line] = "_line",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_paragraph_repeat1] = "paragraph_repeat1",
  [aux_sym_bullet_list_repeat1] = "bullet_list_repeat1",
  [alias_sym_list_item] = "list_item",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__char_bullet] = sym__char_bullet,
  [aux_sym__line_token1] = aux_sym__line_token1,
  [sym__eol] = sym__eol,
  [sym__blank_line] = sym__blank_line,
  [sym_document] = sym_document,
  [sym__body_elements] = sym__body_elements,
  [sym_paragraph] = sym_paragraph,
  [sym_bullet_list] = sym_bullet_list,
  [sym__bullet_list_item] = sym__bullet_list_item,
  [aux_sym__line] = aux_sym__line,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_paragraph_repeat1] = aux_sym_paragraph_repeat1,
  [aux_sym_bullet_list_repeat1] = aux_sym_bullet_list_repeat1,
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
  [sym_bullet_list] = {
    .visible = true,
    .named = true,
  },
  [sym__bullet_list_item] = {
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
      if (eof) ADVANCE(2);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == 8226 ||
          lookahead == 8227 ||
          lookahead == 8259) ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 1:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(sym__char_bullet);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(aux_sym__line_token1);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(3);
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
  [10] = {.lex_state = 1, .external_lex_state = 2},
  [11] = {.lex_state = 0, .external_lex_state = 2},
  [12] = {.lex_state = 1, .external_lex_state = 2},
  [13] = {.lex_state = 0, .external_lex_state = 2},
  [14] = {.lex_state = 1, .external_lex_state = 2},
  [15] = {.lex_state = 1, .external_lex_state = 2},
  [16] = {.lex_state = 1, .external_lex_state = 2},
  [17] = {.lex_state = 1, .external_lex_state = 2},
  [18] = {.lex_state = 1, .external_lex_state = 2},
  [19] = {.lex_state = 1, .external_lex_state = 2},
  [20] = {.lex_state = 0, .external_lex_state = 2},
  [21] = {.lex_state = 0, .external_lex_state = 2},
  [22] = {.lex_state = 0, .external_lex_state = 2},
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
    [aux_sym__line_token1] = ACTIONS(1),
    [sym__eol] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(21),
    [sym__body_elements] = STATE(2),
    [sym_paragraph] = STATE(2),
    [sym_bullet_list] = STATE(2),
    [sym__bullet_list_item] = STATE(9),
    [aux_sym__line] = STATE(5),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_paragraph_repeat1] = STATE(12),
    [aux_sym_bullet_list_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym__char_bullet] = ACTIONS(7),
    [aux_sym__line_token1] = ACTIONS(9),
    [sym__eol] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(11),
  },
  [2] = {
    [sym__body_elements] = STATE(3),
    [sym_paragraph] = STATE(3),
    [sym_bullet_list] = STATE(3),
    [sym__bullet_list_item] = STATE(9),
    [aux_sym__line] = STATE(5),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_paragraph_repeat1] = STATE(12),
    [aux_sym_bullet_list_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(13),
    [sym__char_bullet] = ACTIONS(7),
    [aux_sym__line_token1] = ACTIONS(9),
    [sym__eol] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(15),
  },
  [3] = {
    [sym__body_elements] = STATE(3),
    [sym_paragraph] = STATE(3),
    [sym_bullet_list] = STATE(3),
    [sym__bullet_list_item] = STATE(9),
    [aux_sym__line] = STATE(5),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_paragraph_repeat1] = STATE(12),
    [aux_sym_bullet_list_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(17),
    [sym__char_bullet] = ACTIONS(19),
    [aux_sym__line_token1] = ACTIONS(22),
    [sym__eol] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(25),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(30), 1,
      aux_sym__line_token1,
    STATE(4), 1,
      aux_sym__line,
    ACTIONS(28), 4,
      sym__eol,
      sym__blank_line,
      ts_builtin_sym_end,
      sym__char_bullet,
  [13] = 4,
    ACTIONS(35), 1,
      aux_sym__line_token1,
    ACTIONS(37), 1,
      sym__eol,
    STATE(4), 1,
      aux_sym__line,
    ACTIONS(33), 3,
      sym__blank_line,
      ts_builtin_sym_end,
      sym__char_bullet,
  [28] = 4,
    ACTIONS(35), 1,
      aux_sym__line_token1,
    ACTIONS(37), 1,
      sym__eol,
    STATE(4), 1,
      aux_sym__line,
    ACTIONS(39), 3,
      sym__blank_line,
      ts_builtin_sym_end,
      sym__char_bullet,
  [43] = 3,
    ACTIONS(43), 1,
      aux_sym__line_token1,
    STATE(4), 1,
      aux_sym__line,
    ACTIONS(41), 4,
      sym__eol,
      sym__blank_line,
      ts_builtin_sym_end,
      sym__char_bullet,
  [56] = 3,
    ACTIONS(48), 1,
      aux_sym__line_token1,
    ACTIONS(50), 1,
      sym__eol,
    ACTIONS(46), 3,
      sym__blank_line,
      ts_builtin_sym_end,
      sym__char_bullet,
  [68] = 3,
    ACTIONS(50), 1,
      sym__eol,
    ACTIONS(54), 1,
      aux_sym__line_token1,
    ACTIONS(52), 3,
      sym__blank_line,
      ts_builtin_sym_end,
      sym__char_bullet,
  [80] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(56), 1,
      aux_sym__line_token1,
    STATE(10), 1,
      aux_sym_paragraph_repeat1,
    STATE(15), 1,
      aux_sym__line,
  [93] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(7), 1,
      sym__char_bullet,
    STATE(8), 1,
      sym__bullet_list_item,
    STATE(13), 1,
      aux_sym_bullet_list_repeat1,
  [106] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(59), 1,
      aux_sym__line_token1,
    STATE(6), 1,
      aux_sym__line,
    STATE(10), 1,
      aux_sym_paragraph_repeat1,
  [119] = 4,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(61), 1,
      sym__char_bullet,
    STATE(13), 1,
      aux_sym_bullet_list_repeat1,
    STATE(22), 1,
      sym__bullet_list_item,
  [132] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(64), 1,
      aux_sym__line_token1,
    STATE(7), 1,
      aux_sym__line,
  [142] = 3,
    ACTIONS(37), 1,
      sym__eol,
    ACTIONS(66), 1,
      aux_sym__line_token1,
    STATE(17), 1,
      aux_sym__line,
  [152] = 3,
    ACTIONS(41), 1,
      sym__eol,
    ACTIONS(66), 1,
      aux_sym__line_token1,
    STATE(17), 1,
      aux_sym__line,
  [162] = 3,
    ACTIONS(28), 1,
      sym__eol,
    ACTIONS(68), 1,
      aux_sym__line_token1,
    STATE(17), 1,
      aux_sym__line,
  [172] = 3,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(71), 1,
      aux_sym__line_token1,
    STATE(16), 1,
      aux_sym__line,
  [182] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(73), 1,
      aux_sym__line_token1,
  [189] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(75), 1,
      sym__char_bullet,
  [196] = 2,
    ACTIONS(3), 1,
      sym__eol,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
  [203] = 1,
    ACTIONS(50), 1,
      sym__eol,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 13,
  [SMALL_STATE(6)] = 28,
  [SMALL_STATE(7)] = 43,
  [SMALL_STATE(8)] = 56,
  [SMALL_STATE(9)] = 68,
  [SMALL_STATE(10)] = 80,
  [SMALL_STATE(11)] = 93,
  [SMALL_STATE(12)] = 106,
  [SMALL_STATE(13)] = 119,
  [SMALL_STATE(14)] = 132,
  [SMALL_STATE(15)] = 142,
  [SMALL_STATE(16)] = 152,
  [SMALL_STATE(17)] = 162,
  [SMALL_STATE(18)] = 172,
  [SMALL_STATE(19)] = 182,
  [SMALL_STATE(20)] = 189,
  [SMALL_STATE(21)] = 196,
  [SMALL_STATE(22)] = 203,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(14),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(5),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(3),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__line, 2),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__line, 2), SHIFT_REPEAT(4),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 1),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bullet_list_item, 2),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__bullet_list_item, 2), SHIFT(4),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bullet_list, 2, .production_id = 2),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bullet_list, 2, .production_id = 2),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bullet_list, 1, .production_id = 1),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bullet_list, 1, .production_id = 1),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(15),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bullet_list_repeat1, 2), SHIFT_REPEAT(18),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__line, 2), SHIFT_REPEAT(17),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bullet_list_repeat1, 2, .production_id = 1),
  [77] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
