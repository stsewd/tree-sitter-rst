#include "table.h"

#include "chars.h"
#include "parser.h"
#include "scanner.h"
#include "tokens.h"

// =====================================================================
// Tables
// =====================================================================
//
// Tables are exposed as a single flat node — the scanner gobbles the
// whole table block (top border through bottom border) as one token,
// and individual rows/cells are not modelled. This is enough for syntax
// highlighters and outline tools to mark the block; richer structure
// can be added later without renaming the node.
//
// Disambiguating table borders from sibling constructs is delicate:
//
//   * '+' starts a grid border ("+---+") AND a char_bullet ("+ item").
//     We can't tell which without lookahead at the second character,
//     and the tree-sitter external scanner does NOT roll back lexer
//     state when the scanner returns false — every advance persists.
//     So once we commit to advancing past '+', the dispatcher must
//     produce a token: table, char_bullet, or text.
//
//   * '=' starts a simple-table border ("=== ===") AND a section
//     overline/underline ("======"). They differ only by presence of
//     internal whitespace inside the run.
//
// Strategy:
//   - Body context (parse_overline doesn't run because T_OVERLINE /
//     T_TRANSITION are not valid): scanner.c routes '+' and '=' to
//     parse_table_dispatch, which advances past the run and decides.
//   - Top level (T_OVERLINE / T_TRANSITION valid): parse_overline
//     runs first, handling adornments. At its parse_text fallback
//     points it calls try_grid_table_after_plus / try_simple_table_
//     after_run so a partially-consumed first line can still be
//     promoted to a table.

/// Per-line accumulators populated by ``scan_remaining_table_line`` and
/// inspected by ``classify_from_state``. Bundled into one struct so the
/// five fields stay together — passing five bool out-pointers in a row
/// would be order-fragile (nothing in the type system stops a caller
/// swapping ``seen_non_space`` and ``seen_dash_or_equals``).
typedef struct {
  // True iff every char on the line was a valid border char or space:
  //   grid:   '+', '-', '=', space
  //   simple: '=', '-', space
  bool only_border_chars;
  // True iff we saw at least one space *between* non-space chars. The
  // simple-table border test uses this to distinguish "=== ===" (table)
  // from "=========" (section adornment).
  bool has_internal_space;
  // True iff we've seen at least one non-space char on the line.
  bool seen_non_space;
  // True iff at least one '-' or '=' appeared. A grid border without
  // any of those would be just '+'s (a transition, not a table); a
  // simple border with neither would be all spaces.
  bool seen_dash_or_equals;
  // Last non-space char on the line. Grid borders end with '+'; data
  // rows that span multi-line cells end with '|' or '+'.
  int32_t last_non_space;
} TableLineState;

/// Skip up to ``max_indent`` columns of leading inline whitespace.
static void skip_indent_up_to(RSTScanner* scanner, uint32_t max_indent)
{
  uint32_t skipped = 0;
  while (skipped < max_indent && is_inline_space(scanner->lookahead)) {
    scanner->advance(scanner);
    skipped++;
  }
}

/// Read the rest of the current line into the given accumulators. The
/// caller seeds them with whatever has already been consumed of the
/// line (e.g. inside parse_overline, the leading run of '+' / '=' and
/// any trailing whitespace).
///
/// On return the scanner is positioned at the terminating newline (or
/// EOF). The accumulators reflect the *whole* line.
static void scan_remaining_table_line(
    RSTScanner* scanner, bool is_grid, TableLineState* s)
{
  while (!is_newline(scanner->lookahead) && scanner->lookahead != CHAR_EOF) {
    int32_t c = scanner->lookahead;
    if (is_grid) {
      if (c != '+' && c != '-' && c != '=' && !is_inline_space(c)) {
        s->only_border_chars = false;
      }
    } else {
      if (c != '=' && c != '-' && !is_inline_space(c)) {
        s->only_border_chars = false;
      }
    }
    if (is_inline_space(c)) {
      if (s->seen_non_space) {
        s->has_internal_space = true;
      }
    } else {
      s->seen_non_space = true;
      s->last_non_space = c;
      if (c == '-' || c == '=') {
        s->seen_dash_or_equals = true;
      }
    }
    scanner->advance(scanner);
  }
}

/// Classify the *current* line based on accumulators populated by
/// ``scan_remaining_table_line``. See ``classify_table_line`` for the
/// border definitions; this just makes the decision step reusable when
/// the first part of the line was consumed elsewhere (e.g. inside
/// parse_overline).
///
/// Returns:
///   2 — clean border line
///   1 — data/continuation line that still belongs to the table
///   0 — line cannot belong to the table
static int classify_from_state(
    bool is_grid, int32_t first, const TableLineState* s)
{
  if (is_grid) {
    if (first == '+' && s->only_border_chars && s->last_non_space == '+'
        && s->seen_dash_or_equals) {
      return 2;
    }
    if (s->last_non_space == '|' || s->last_non_space == '+') {
      return 1;
    }
    return 0;
  }
  if (s->only_border_chars && s->has_internal_space && s->seen_dash_or_equals
      && (first == '=' || first == '-')) {
    return 2;
  }
  // Simple-table data lines can contain anything but must not be blank
  // (caller guards the blank-line case).
  return 1;
}

/// Walk a fresh line from column 0 of the table and classify it.
static int classify_table_line(RSTScanner* scanner, bool is_grid)
{
  int32_t first = scanner->lookahead;
  if (is_grid && first != '+' && first != '|') {
    return 0;
  }

  TableLineState s = {
    .only_border_chars = true,
  };
  scan_remaining_table_line(scanner, is_grid, &s);
  return classify_from_state(is_grid, first, &s);
}

/// Continue parsing a table after the first border line has been
/// consumed (and its trailing newline). Reads subsequent lines until
/// a non-table line, blank line, or EOF. Sets the appropriate token
/// (T_GRID_TABLE / T_SIMPLE_TABLE) if at least ``border_count`` >= 2
/// and returns true; otherwise leaves the lexer where it is and
/// returns false (the caller is responsible for any fallback because
/// ``advance`` cannot be undone).
///
/// The token end (``mark_end``) is placed at the *last column* of the
/// final border line — before its terminating newline — so that the
/// following blank line still presents two consecutive newlines to
/// ``parse_indent``, which is what ``T_BLANKLINE`` detection requires.
static bool finish_table_after_first_border(
    RSTScanner* scanner,
    bool is_grid,
    uint32_t start_col)
{
  TSLexer* lexer = scanner->lexer;
  int border_count = 1;

  while (true) {
    skip_indent_up_to(scanner, start_col);

    if (scanner->lookahead == CHAR_EOF || is_newline(scanner->lookahead)) {
      break;
    }

    int line_kind = classify_table_line(scanner, is_grid);
    if (line_kind == 0) {
      break;
    }

    // Pin the token end at the line's terminator BEFORE consuming the
    // newline (see comment above). For data lines we don't update
    // mark_end — the token must end on a border.
    if (line_kind == 2) {
      lexer->mark_end(lexer);
      border_count++;
    }

    if (is_newline(scanner->lookahead)) {
      scanner->advance(scanner);
    }
  }

  if (border_count < 2) {
    return false;
  }

  lexer->result_symbol = is_grid ? T_GRID_TABLE : T_SIMPLE_TABLE;
  return true;
}

/// Top-level integration hook for grid tables. Called from
/// ``parse_overline`` after it has consumed the leading '+' (so
/// ``overline_length`` == 1) and bumped into a non-adornment, non-space
/// character that would otherwise fall through to ``parse_text``.
///
/// The first '+' is already consumed; we read the rest of the first
/// line and decide. Returns true with T_GRID_TABLE if the line is a
/// valid grid border followed by enough table to commit; otherwise
/// returns false (the caller's ``parse_text`` fallback then runs as
/// before).
static bool try_grid_table_after_plus(RSTScanner* scanner, uint32_t start_col)
{
  TSLexer* lexer = scanner->lexer;
  const bool* valid_symbols = scanner->valid_symbols;

  if (!valid_symbols[T_GRID_TABLE]) {
    return false;
  }

  TableLineState s = {
    .only_border_chars = true,
    .seen_non_space = true, // we already consumed '+'
    .last_non_space = '+',
    // ``seen_dash_or_equals`` is left false on purpose: '+' alone is
    // not enough to qualify as a border (would otherwise eat
    // transitions like '++++').
  };
  scan_remaining_table_line(scanner, /* is_grid */ true, &s);
  if (classify_from_state(/* is_grid */ true, '+', &s) != 2) {
    return false;
  }

  // Pin the token end at end-of-border-line (before the newline) so
  // T_BLANKLINE detection still has both surrounding newlines after a
  // single-border table degenerates to "first line only".
  lexer->mark_end(lexer);
  if (is_newline(scanner->lookahead)) {
    scanner->advance(scanner);
  }

  return finish_table_after_first_border(scanner, /* is_grid */ true, start_col);
}

/// Top-level integration hook for simple tables. Called from
/// ``parse_overline`` after the leading run of '=' and trailing inline
/// whitespace have been consumed (state: ``has_internal_space`` is
/// true, ``seen_dash_or_equals`` is true, ``last_non_space`` == '=').
static bool try_simple_table_after_run(RSTScanner* scanner, uint32_t start_col)
{
  TSLexer* lexer = scanner->lexer;
  const bool* valid_symbols = scanner->valid_symbols;

  if (!valid_symbols[T_SIMPLE_TABLE]) {
    return false;
  }

  TableLineState s = {
    .only_border_chars = true,
    .has_internal_space = true, // run + space already consumed
    .seen_non_space = true,
    .seen_dash_or_equals = true,
    .last_non_space = '=',
  };
  scan_remaining_table_line(scanner, /* is_grid */ false, &s);
  if (classify_from_state(/* is_grid */ false, '=', &s) != 2) {
    return false;
  }

  if (is_newline(scanner->lookahead)) {
    scanner->advance(scanner);
  }
  lexer->mark_end(lexer);

  return finish_table_after_first_border(
      scanner, /* is_grid */ false, start_col);
}

/// Body-context dispatcher for lines starting with '+' or '='. Called
/// from rst_scanner_scan when parse_overline is *not* in play (i.e.
/// neither T_OVERLINE nor T_TRANSITION is valid here). Once we begin
/// advancing we cannot return false safely, so this function always
/// commits to a token: T_GRID_TABLE / T_SIMPLE_TABLE, T_CHAR_BULLET,
/// or T_TEXT.
static bool parse_table_dispatch(RSTScanner* scanner)
{
  TSLexer* lexer = scanner->lexer;
  const bool* valid_symbols = scanner->valid_symbols;

  int32_t first = scanner->lookahead;
  bool is_grid = (first == '+');
  if (!is_grid && first != '=') {
    return false;
  }
  if (is_grid && !valid_symbols[T_GRID_TABLE]) {
    return false;
  }
  if (!is_grid && !valid_symbols[T_SIMPLE_TABLE]) {
    return false;
  }

  uint32_t start_col = lexer->get_column(lexer);

  // Consume the leading run of the same character. For grid this is
  // typically a single '+'; for simple it is several '='s.
  int run_length = 0;
  while (scanner->lookahead == first) {
    scanner->advance(scanner);
    run_length++;
  }

  // Bullet shortcut: a single '+' followed by inline whitespace is a
  // char_bullet, and parse_inner_list_element expects exactly this
  // state (the bullet char already consumed, lookahead at the trailing
  // whitespace).
  if (is_grid && run_length == 1 && is_inline_space(scanner->lookahead)
      && valid_symbols[T_CHAR_BULLET]) {
    return parse_inner_list_element(scanner, 1, T_CHAR_BULLET);
  }

  // Seed the line accumulators with what the run contributed.
  // ``seen_dash_or_equals`` reflects only the leading run: '=' counts,
  // '+' alone does not.
  TableLineState s = {
    .only_border_chars = true,
    .seen_non_space = (run_length > 0),
    .seen_dash_or_equals = !is_grid,
    .last_non_space = first,
  };
  scan_remaining_table_line(scanner, is_grid, &s);
  int kind = classify_from_state(is_grid, first, &s);

  if (kind == 2) {
    lexer->mark_end(lexer);
    if (is_newline(scanner->lookahead)) {
      scanner->advance(scanner);
    }
    if (finish_table_after_first_border(scanner, is_grid, start_col)) {
      return true;
    }
    // Single border line on its own — fall through to text.
  }

  // Not a table. Best we can do, given that we've already consumed up
  // to the newline, is emit the line as text. parse_text would only
  // read until whitespace from the current lookahead, but we want the
  // *whole* consumed span to belong to the produced T_TEXT, so just
  // mark_end here and signal T_TEXT directly.
  if (valid_symbols[T_TEXT]) {
    lexer->mark_end(lexer);
    lexer->result_symbol = T_TEXT;
    return true;
  }
  return false;
}
