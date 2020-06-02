#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 19
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 17
#define ALIAS_COUNT 0
#define TOKEN_COUNT 5
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3

enum {
  sym__bullet = 1,
  sym__char = 2,
  sym__whitespace = 3,
  sym__eol = 4,
  sym_source_file = 5,
  sym__body_elements = 6,
  sym_paragraph = 7,
  sym_bullet_list = 8,
  sym_list_item = 9,
  sym__line = 10,
  sym__emptyline = 11,
  aux_sym_source_file_repeat1 = 12,
  aux_sym_paragraph_repeat1 = 13,
  aux_sym_bullet_list_repeat1 = 14,
  aux_sym_list_item_repeat1 = 15,
  aux_sym__line_repeat1 = 16,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__bullet] = "_bullet",
  [sym__char] = "_char",
  [sym__whitespace] = "_whitespace",
  [sym__eol] = "_eol",
  [sym_source_file] = "source_file",
  [sym__body_elements] = "_body_elements",
  [sym_paragraph] = "paragraph",
  [sym_bullet_list] = "bullet_list",
  [sym_list_item] = "list_item",
  [sym__line] = "_line",
  [sym__emptyline] = "_emptyline",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_paragraph_repeat1] = "paragraph_repeat1",
  [aux_sym_bullet_list_repeat1] = "bullet_list_repeat1",
  [aux_sym_list_item_repeat1] = "list_item_repeat1",
  [aux_sym__line_repeat1] = "_line_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__bullet] = sym__bullet,
  [sym__char] = sym__char,
  [sym__whitespace] = sym__whitespace,
  [sym__eol] = sym__eol,
  [sym_source_file] = sym_source_file,
  [sym__body_elements] = sym__body_elements,
  [sym_paragraph] = sym_paragraph,
  [sym_bullet_list] = sym_bullet_list,
  [sym_list_item] = sym_list_item,
  [sym__line] = sym__line,
  [sym__emptyline] = sym__emptyline,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_paragraph_repeat1] = aux_sym_paragraph_repeat1,
  [aux_sym_bullet_list_repeat1] = aux_sym_bullet_list_repeat1,
  [aux_sym_list_item_repeat1] = aux_sym_list_item_repeat1,
  [aux_sym__line_repeat1] = aux_sym__line_repeat1,
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
  [sym_source_file] = {
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
  [sym_list_item] = {
    .visible = true,
    .named = true,
  },
  [sym__line] = {
    .visible = false,
    .named = true,
  },
  [sym__emptyline] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
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
  [aux_sym_list_item_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__line_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[1][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(3);
      if (lookahead == '\n') ADVANCE(6);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(5);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(5);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 2:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(6);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(sym__bullet);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym__char);
      END_STATE();
    case 6:
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
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 0, .external_lex_state = 1},
  [10] = {.lex_state = 0, .external_lex_state = 1},
  [11] = {.lex_state = 0, .external_lex_state = 1},
  [12] = {.lex_state = 2, .external_lex_state = 1},
  [13] = {.lex_state = 1, .external_lex_state = 1},
  [14] = {.lex_state = 2, .external_lex_state = 1},
  [15] = {.lex_state = 1, .external_lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 0},
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
    [sym__char] = ACTIONS(1),
    [sym__whitespace] = ACTIONS(1),
    [sym__eol] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(18),
    [sym__body_elements] = STATE(2),
    [sym_paragraph] = STATE(2),
    [sym_bullet_list] = STATE(2),
    [sym_list_item] = STATE(6),
    [sym__line] = STATE(4),
    [sym__emptyline] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_paragraph_repeat1] = STATE(4),
    [aux_sym_bullet_list_repeat1] = STATE(6),
    [aux_sym_list_item_repeat1] = STATE(12),
    [aux_sym__line_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__bullet] = ACTIONS(5),
    [sym__char] = ACTIONS(7),
    [sym__whitespace] = ACTIONS(9),
    [sym__eol] = ACTIONS(11),
  },
  [2] = {
    [sym__body_elements] = STATE(3),
    [sym_paragraph] = STATE(3),
    [sym_bullet_list] = STATE(3),
    [sym_list_item] = STATE(6),
    [sym__line] = STATE(4),
    [sym__emptyline] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym_paragraph_repeat1] = STATE(4),
    [aux_sym_bullet_list_repeat1] = STATE(6),
    [aux_sym_list_item_repeat1] = STATE(12),
    [aux_sym__line_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(13),
    [sym__bullet] = ACTIONS(5),
    [sym__char] = ACTIONS(7),
    [sym__whitespace] = ACTIONS(9),
    [sym__eol] = ACTIONS(15),
  },
  [3] = {
    [sym__body_elements] = STATE(3),
    [sym_paragraph] = STATE(3),
    [sym_bullet_list] = STATE(3),
    [sym_list_item] = STATE(6),
    [sym__line] = STATE(4),
    [sym__emptyline] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym_paragraph_repeat1] = STATE(4),
    [aux_sym_bullet_list_repeat1] = STATE(6),
    [aux_sym_list_item_repeat1] = STATE(12),
    [aux_sym__line_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(17),
    [sym__bullet] = ACTIONS(19),
    [sym__char] = ACTIONS(22),
    [sym__whitespace] = ACTIONS(25),
    [sym__eol] = ACTIONS(28),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(33), 1,
      sym__char,
    ACTIONS(36), 1,
      sym__whitespace,
    STATE(13), 1,
      aux_sym__line_repeat1,
    STATE(5), 2,
      sym__line,
      aux_sym_paragraph_repeat1,
    ACTIONS(31), 3,
      sym__eol,
      ts_builtin_sym_end,
      sym__bullet,
  [19] = 5,
    ACTIONS(40), 1,
      sym__char,
    ACTIONS(43), 1,
      sym__whitespace,
    STATE(13), 1,
      aux_sym__line_repeat1,
    STATE(5), 2,
      sym__line,
      aux_sym_paragraph_repeat1,
    ACTIONS(38), 3,
      sym__eol,
      ts_builtin_sym_end,
      sym__bullet,
  [38] = 4,
    ACTIONS(47), 1,
      sym__bullet,
    ACTIONS(45), 2,
      sym__eol,
      ts_builtin_sym_end,
    ACTIONS(50), 2,
      sym__char,
      sym__whitespace,
    STATE(7), 2,
      sym_list_item,
      aux_sym_bullet_list_repeat1,
  [54] = 4,
    ACTIONS(54), 1,
      sym__bullet,
    ACTIONS(52), 2,
      sym__eol,
      ts_builtin_sym_end,
    ACTIONS(57), 2,
      sym__char,
      sym__whitespace,
    STATE(7), 2,
      sym_list_item,
      aux_sym_bullet_list_repeat1,
  [70] = 5,
    ACTIONS(59), 1,
      sym__char,
    ACTIONS(61), 1,
      sym__whitespace,
    STATE(11), 1,
      sym__line,
    STATE(13), 1,
      aux_sym__line_repeat1,
    STATE(16), 1,
      aux_sym_list_item_repeat1,
  [86] = 2,
    ACTIONS(65), 2,
      sym__char,
      sym__whitespace,
    ACTIONS(63), 3,
      sym__eol,
      ts_builtin_sym_end,
      sym__bullet,
  [96] = 2,
    ACTIONS(69), 2,
      sym__char,
      sym__whitespace,
    ACTIONS(67), 3,
      sym__eol,
      ts_builtin_sym_end,
      sym__bullet,
  [106] = 2,
    ACTIONS(73), 2,
      sym__char,
      sym__whitespace,
    ACTIONS(71), 3,
      sym__eol,
      ts_builtin_sym_end,
      sym__bullet,
  [116] = 3,
    ACTIONS(75), 1,
      sym__whitespace,
    ACTIONS(77), 1,
      sym__eol,
    STATE(14), 1,
      aux_sym_list_item_repeat1,
  [126] = 3,
    ACTIONS(79), 1,
      sym__char,
    ACTIONS(81), 1,
      sym__eol,
    STATE(15), 1,
      aux_sym__line_repeat1,
  [136] = 3,
    ACTIONS(83), 1,
      sym__whitespace,
    ACTIONS(86), 1,
      sym__eol,
    STATE(14), 1,
      aux_sym_list_item_repeat1,
  [146] = 3,
    ACTIONS(88), 1,
      sym__char,
    ACTIONS(91), 1,
      sym__eol,
    STATE(15), 1,
      aux_sym__line_repeat1,
  [156] = 3,
    ACTIONS(86), 1,
      sym__char,
    ACTIONS(93), 1,
      sym__whitespace,
    STATE(16), 1,
      aux_sym_list_item_repeat1,
  [166] = 2,
    ACTIONS(96), 1,
      sym__whitespace,
    STATE(8), 1,
      aux_sym_list_item_repeat1,
  [173] = 1,
    ACTIONS(98), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 19,
  [SMALL_STATE(6)] = 38,
  [SMALL_STATE(7)] = 54,
  [SMALL_STATE(8)] = 70,
  [SMALL_STATE(9)] = 86,
  [SMALL_STATE(10)] = 96,
  [SMALL_STATE(11)] = 106,
  [SMALL_STATE(12)] = 116,
  [SMALL_STATE(13)] = 126,
  [SMALL_STATE(14)] = 136,
  [SMALL_STATE(15)] = 146,
  [SMALL_STATE(16)] = 156,
  [SMALL_STATE(17)] = 166,
  [SMALL_STATE(18)] = 173,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [5] = {.count = 1, .reusable = true}, SHIFT(17),
  [7] = {.count = 1, .reusable = false}, SHIFT(13),
  [9] = {.count = 1, .reusable = false}, SHIFT(12),
  [11] = {.count = 1, .reusable = true}, SHIFT(2),
  [13] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [15] = {.count = 1, .reusable = true}, SHIFT(3),
  [17] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [19] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [22] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [25] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [28] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [31] = {.count = 1, .reusable = true}, REDUCE(sym_paragraph, 1),
  [33] = {.count = 2, .reusable = false}, REDUCE(sym_paragraph, 1), SHIFT(13),
  [36] = {.count = 1, .reusable = false}, REDUCE(sym_paragraph, 1),
  [38] = {.count = 1, .reusable = true}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [40] = {.count = 2, .reusable = false}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(13),
  [43] = {.count = 1, .reusable = false}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [45] = {.count = 1, .reusable = true}, REDUCE(sym_bullet_list, 1),
  [47] = {.count = 2, .reusable = true}, REDUCE(sym_bullet_list, 1), SHIFT(17),
  [50] = {.count = 1, .reusable = false}, REDUCE(sym_bullet_list, 1),
  [52] = {.count = 1, .reusable = true}, REDUCE(aux_sym_bullet_list_repeat1, 2),
  [54] = {.count = 2, .reusable = true}, REDUCE(aux_sym_bullet_list_repeat1, 2), SHIFT_REPEAT(17),
  [57] = {.count = 1, .reusable = false}, REDUCE(aux_sym_bullet_list_repeat1, 2),
  [59] = {.count = 1, .reusable = true}, SHIFT(13),
  [61] = {.count = 1, .reusable = false}, SHIFT(16),
  [63] = {.count = 1, .reusable = true}, REDUCE(sym__emptyline, 2),
  [65] = {.count = 1, .reusable = false}, REDUCE(sym__emptyline, 2),
  [67] = {.count = 1, .reusable = true}, REDUCE(sym__line, 2),
  [69] = {.count = 1, .reusable = false}, REDUCE(sym__line, 2),
  [71] = {.count = 1, .reusable = true}, REDUCE(sym_list_item, 3),
  [73] = {.count = 1, .reusable = false}, REDUCE(sym_list_item, 3),
  [75] = {.count = 1, .reusable = true}, SHIFT(14),
  [77] = {.count = 1, .reusable = true}, SHIFT(9),
  [79] = {.count = 1, .reusable = true}, SHIFT(15),
  [81] = {.count = 1, .reusable = true}, SHIFT(10),
  [83] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_item_repeat1, 2), SHIFT_REPEAT(14),
  [86] = {.count = 1, .reusable = true}, REDUCE(aux_sym_list_item_repeat1, 2),
  [88] = {.count = 2, .reusable = true}, REDUCE(aux_sym__line_repeat1, 2), SHIFT_REPEAT(15),
  [91] = {.count = 1, .reusable = true}, REDUCE(aux_sym__line_repeat1, 2),
  [93] = {.count = 2, .reusable = false}, REDUCE(aux_sym_list_item_repeat1, 2), SHIFT_REPEAT(16),
  [96] = {.count = 1, .reusable = true}, SHIFT(8),
  [98] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
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
