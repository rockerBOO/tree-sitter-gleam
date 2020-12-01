#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 47
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 52
#define ALIAS_COUNT 1
#define TOKEN_COUNT 33
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 5

enum {
  sym_identifier = 1,
  anon_sym_DASH = 2,
  anon_sym_BANG = 3,
  anon_sym_let = 4,
  anon_sym_EQ = 5,
  anon_sym_PLUS = 6,
  anon_sym_SLASH = 7,
  anon_sym_STAR = 8,
  anon_sym_PERCENT = 9,
  anon_sym_GT = 10,
  anon_sym_LT = 11,
  anon_sym_GT_EQ = 12,
  anon_sym_LT_EQ = 13,
  anon_sym_PLUS_DOT = 14,
  anon_sym_DASH_DOT = 15,
  anon_sym_SLASH_DOT = 16,
  anon_sym_STAR_DOT = 17,
  anon_sym_GT_DOT = 18,
  anon_sym_LT_DOT = 19,
  anon_sym_GT_EQ_DOT = 20,
  anon_sym_LT_EQ_DOT = 21,
  anon_sym_DQUOTE = 22,
  anon_sym_BSLASH = 23,
  aux_sym_string_token1 = 24,
  sym_integer = 25,
  anon_sym_DOT = 26,
  anon_sym_false = 27,
  anon_sym_False = 28,
  anon_sym_true = 29,
  anon_sym_True = 30,
  sym_comment = 31,
  sym__end = 32,
  sym_source_file = 33,
  sym__statement = 34,
  sym__expression_statement = 35,
  sym__expression = 36,
  sym__declaration = 37,
  sym_unary_expression = 38,
  sym_binary_expression = 39,
  sym__literal = 40,
  sym__boolean = 41,
  sym_binding = 42,
  sym_int_operator = 43,
  sym_float_operator = 44,
  sym_string = 45,
  sym__integer = 46,
  sym_float = 47,
  sym_false = 48,
  sym_true = 49,
  aux_sym_source_file_repeat1 = 50,
  aux_sym_string_repeat1 = 51,
  alias_sym__integer = 52,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_DASH] = "-",
  [anon_sym_BANG] = "!",
  [anon_sym_let] = "let",
  [anon_sym_EQ] = "=",
  [anon_sym_PLUS] = "+",
  [anon_sym_SLASH] = "/",
  [anon_sym_STAR] = "*",
  [anon_sym_PERCENT] = "%",
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_PLUS_DOT] = "+.",
  [anon_sym_DASH_DOT] = "-.",
  [anon_sym_SLASH_DOT] = "/.",
  [anon_sym_STAR_DOT] = "*.",
  [anon_sym_GT_DOT] = ">.",
  [anon_sym_LT_DOT] = "<.",
  [anon_sym_GT_EQ_DOT] = ">=.",
  [anon_sym_LT_EQ_DOT] = "<=.",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_BSLASH] = "\\",
  [aux_sym_string_token1] = "string_token1",
  [sym_integer] = "integer",
  [anon_sym_DOT] = ".",
  [anon_sym_false] = "false",
  [anon_sym_False] = "False",
  [anon_sym_true] = "true",
  [anon_sym_True] = "True",
  [sym_comment] = "comment",
  [sym__end] = "_end",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym__expression_statement] = "_expression_statement",
  [sym__expression] = "_expression",
  [sym__declaration] = "_declaration",
  [sym_unary_expression] = "unary_expression",
  [sym_binary_expression] = "binary_expression",
  [sym__literal] = "_literal",
  [sym__boolean] = "_boolean",
  [sym_binding] = "binding",
  [sym_int_operator] = "int_operator",
  [sym_float_operator] = "float_operator",
  [sym_string] = "string",
  [sym__integer] = "_integer",
  [sym_float] = "float",
  [sym_false] = "false",
  [sym_true] = "true",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [alias_sym__integer] = "_integer",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_PLUS_DOT] = anon_sym_PLUS_DOT,
  [anon_sym_DASH_DOT] = anon_sym_DASH_DOT,
  [anon_sym_SLASH_DOT] = anon_sym_SLASH_DOT,
  [anon_sym_STAR_DOT] = anon_sym_STAR_DOT,
  [anon_sym_GT_DOT] = anon_sym_GT_DOT,
  [anon_sym_LT_DOT] = anon_sym_LT_DOT,
  [anon_sym_GT_EQ_DOT] = anon_sym_GT_EQ_DOT,
  [anon_sym_LT_EQ_DOT] = anon_sym_LT_EQ_DOT,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [sym_integer] = sym_integer,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_False] = anon_sym_False,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_True] = anon_sym_True,
  [sym_comment] = sym_comment,
  [sym__end] = sym__end,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym__expression_statement] = sym__expression_statement,
  [sym__expression] = sym__expression,
  [sym__declaration] = sym__declaration,
  [sym_unary_expression] = sym_unary_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym__literal] = sym__literal,
  [sym__boolean] = sym__boolean,
  [sym_binding] = sym_binding,
  [sym_int_operator] = sym_int_operator,
  [sym_float_operator] = sym_float_operator,
  [sym_string] = sym_string,
  [sym__integer] = sym__integer,
  [sym_float] = sym_float,
  [sym_false] = sym_false,
  [sym_true] = sym_true,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [alias_sym__integer] = alias_sym__integer,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_False] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_True] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__end] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym__expression_statement] = {
    .visible = false,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym__declaration] = {
    .visible = false,
    .named = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [sym__boolean] = {
    .visible = false,
    .named = true,
  },
  [sym_binding] = {
    .visible = true,
    .named = true,
  },
  [sym_int_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_float_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym__integer] = {
    .visible = false,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym__integer] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_left = 1,
  field_right = 2,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_left] = "left",
  [field_right] = "right",
};

static const TSFieldMapSlice ts_field_map_slices[3] = {
  [2] = {.index = 0, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_left, 0},
    {field_right, 2},
};

static TSSymbol ts_alias_sequences[3][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym__integer,
  },
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(3);
      if (lookahead == '!') ADVANCE(5);
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '%') ADVANCE(10);
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '+') ADVANCE(7);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '.') ADVANCE(29);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '<') ADVANCE(12);
      if (lookahead == '=') ADVANCE(6);
      if (lookahead == '>') ADVANCE(11);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(32);
      if (lookahead == '%') ADVANCE(10);
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '+') ADVANCE(7);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '.') ADVANCE(29);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '<') ADVANCE(12);
      if (lookahead == '>') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(16);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '.') ADVANCE(15);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == '/') ADVANCE(31);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '.') ADVANCE(18);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == '=') ADVANCE(13);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == '=') ADVANCE(14);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      if (lookahead == '.') ADVANCE(21);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      if (lookahead == '.') ADVANCE(22);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_PLUS_DOT);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_DASH_DOT);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_SLASH_DOT);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_STAR_DOT);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_GT_DOT);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LT_DOT);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_GT_EQ_DOT);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LT_EQ_DOT);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(31);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(25);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym__end);
      if (lookahead == '\n') ADVANCE(32);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'F') ADVANCE(1);
      if (lookahead == 'T') ADVANCE(2);
      if (lookahead == 'f') ADVANCE(3);
      if (lookahead == 'l') ADVANCE(4);
      if (lookahead == 't') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'a') ADVANCE(6);
      END_STATE();
    case 2:
      if (lookahead == 'r') ADVANCE(7);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(8);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 5:
      if (lookahead == 'r') ADVANCE(10);
      END_STATE();
    case 6:
      if (lookahead == 'l') ADVANCE(11);
      END_STATE();
    case 7:
      if (lookahead == 'u') ADVANCE(12);
      END_STATE();
    case 8:
      if (lookahead == 'l') ADVANCE(13);
      END_STATE();
    case 9:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 10:
      if (lookahead == 'u') ADVANCE(15);
      END_STATE();
    case 11:
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 13:
      if (lookahead == 's') ADVANCE(18);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_True);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_False);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_PLUS_DOT] = ACTIONS(1),
    [anon_sym_DASH_DOT] = ACTIONS(1),
    [anon_sym_SLASH_DOT] = ACTIONS(1),
    [anon_sym_STAR_DOT] = ACTIONS(1),
    [anon_sym_GT_DOT] = ACTIONS(1),
    [anon_sym_LT_DOT] = ACTIONS(1),
    [anon_sym_GT_EQ_DOT] = ACTIONS(1),
    [anon_sym_LT_EQ_DOT] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_False] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_True] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(43),
    [sym__statement] = STATE(3),
    [sym__expression_statement] = STATE(3),
    [sym__expression] = STATE(9),
    [sym__declaration] = STATE(3),
    [sym_unary_expression] = STATE(9),
    [sym_binary_expression] = STATE(9),
    [sym__literal] = STATE(9),
    [sym__boolean] = STATE(9),
    [sym_binding] = STATE(3),
    [sym_string] = STATE(9),
    [sym__integer] = STATE(44),
    [sym_float] = STATE(9),
    [sym_false] = STATE(9),
    [sym_true] = STATE(9),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_DASH] = ACTIONS(7),
    [anon_sym_BANG] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [sym_integer] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_False] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_True] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(24), 1,
      anon_sym_let,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(30), 1,
      sym_integer,
    STATE(44), 1,
      sym__integer,
    ACTIONS(21), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(33), 2,
      anon_sym_false,
      anon_sym_False,
    ACTIONS(36), 2,
      anon_sym_true,
      anon_sym_True,
    STATE(2), 5,
      sym__statement,
      sym__expression_statement,
      sym__declaration,
      sym_binding,
      aux_sym_source_file_repeat1,
    STATE(9), 9,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
      sym__boolean,
      sym_string,
      sym_float,
      sym_false,
      sym_true,
  [49] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_let,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      sym_integer,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    STATE(44), 1,
      sym__integer,
    ACTIONS(7), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(15), 2,
      anon_sym_false,
      anon_sym_False,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_True,
    STATE(2), 5,
      sym__statement,
      sym__expression_statement,
      sym__declaration,
      sym_binding,
      aux_sym_source_file_repeat1,
    STATE(9), 9,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
      sym__boolean,
      sym_string,
      sym_float,
      sym_false,
      sym_true,
  [98] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_EQ,
    ACTIONS(45), 1,
      anon_sym_PERCENT,
    STATE(21), 2,
      sym_int_operator,
      sym_float_operator,
    ACTIONS(41), 8,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(47), 8,
      anon_sym_PLUS_DOT,
      anon_sym_DASH_DOT,
      anon_sym_SLASH_DOT,
      anon_sym_STAR_DOT,
      anon_sym_GT_DOT,
      anon_sym_LT_DOT,
      anon_sym_GT_EQ_DOT,
      anon_sym_LT_EQ_DOT,
  [132] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(21), 2,
      sym_int_operator,
      sym_float_operator,
    ACTIONS(49), 8,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(51), 10,
      anon_sym_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_DOT,
      anon_sym_DASH_DOT,
      anon_sym_SLASH_DOT,
      anon_sym_STAR_DOT,
      anon_sym_GT_DOT,
      anon_sym_LT_DOT,
      anon_sym_GT_EQ_DOT,
      anon_sym_LT_EQ_DOT,
  [162] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_PERCENT,
    ACTIONS(53), 1,
      anon_sym_EQ,
    STATE(21), 2,
      sym_int_operator,
      sym_float_operator,
    ACTIONS(41), 8,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(47), 8,
      anon_sym_PLUS_DOT,
      anon_sym_DASH_DOT,
      anon_sym_SLASH_DOT,
      anon_sym_STAR_DOT,
      anon_sym_GT_DOT,
      anon_sym_LT_DOT,
      anon_sym_GT_EQ_DOT,
      anon_sym_LT_EQ_DOT,
  [196] = 5,
    ACTIONS(57), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__end,
    STATE(20), 2,
      sym_int_operator,
      sym_float_operator,
    ACTIONS(55), 8,
      anon_sym_PLUS_DOT,
      anon_sym_DASH_DOT,
      anon_sym_SLASH_DOT,
      anon_sym_STAR_DOT,
      anon_sym_GT_DOT,
      anon_sym_LT_DOT,
      anon_sym_GT_EQ_DOT,
      anon_sym_LT_EQ_DOT,
    ACTIONS(41), 9,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [228] = 4,
    ACTIONS(51), 1,
      sym__end,
    ACTIONS(57), 1,
      sym_comment,
    STATE(20), 2,
      sym_int_operator,
      sym_float_operator,
    ACTIONS(49), 17,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PLUS_DOT,
      anon_sym_DASH_DOT,
      anon_sym_SLASH_DOT,
      anon_sym_STAR_DOT,
      anon_sym_GT_DOT,
      anon_sym_LT_DOT,
      anon_sym_GT_EQ_DOT,
      anon_sym_LT_EQ_DOT,
  [258] = 5,
    ACTIONS(57), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym__end,
    STATE(20), 2,
      sym_int_operator,
      sym_float_operator,
    ACTIONS(55), 8,
      anon_sym_PLUS_DOT,
      anon_sym_DASH_DOT,
      anon_sym_SLASH_DOT,
      anon_sym_STAR_DOT,
      anon_sym_GT_DOT,
      anon_sym_LT_DOT,
      anon_sym_GT_EQ_DOT,
      anon_sym_LT_EQ_DOT,
    ACTIONS(41), 9,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [290] = 5,
    ACTIONS(53), 1,
      sym__end,
    ACTIONS(57), 1,
      sym_comment,
    STATE(20), 2,
      sym_int_operator,
      sym_float_operator,
    ACTIONS(55), 8,
      anon_sym_PLUS_DOT,
      anon_sym_DASH_DOT,
      anon_sym_SLASH_DOT,
      anon_sym_STAR_DOT,
      anon_sym_GT_DOT,
      anon_sym_LT_DOT,
      anon_sym_GT_EQ_DOT,
      anon_sym_LT_EQ_DOT,
    ACTIONS(41), 9,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [322] = 4,
    ACTIONS(57), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_DOT,
    ACTIONS(67), 1,
      sym__end,
    ACTIONS(63), 17,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PLUS_DOT,
      anon_sym_DASH_DOT,
      anon_sym_SLASH_DOT,
      anon_sym_STAR_DOT,
      anon_sym_GT_DOT,
      anon_sym_LT_DOT,
      anon_sym_GT_EQ_DOT,
      anon_sym_LT_EQ_DOT,
  [351] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_DOT,
    ACTIONS(63), 8,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(67), 10,
      anon_sym_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_DOT,
      anon_sym_DASH_DOT,
      anon_sym_SLASH_DOT,
      anon_sym_STAR_DOT,
      anon_sym_GT_DOT,
      anon_sym_LT_DOT,
      anon_sym_GT_EQ_DOT,
      anon_sym_LT_EQ_DOT,
  [380] = 3,
    ACTIONS(57), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym__end,
    ACTIONS(71), 17,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PLUS_DOT,
      anon_sym_DASH_DOT,
      anon_sym_SLASH_DOT,
      anon_sym_STAR_DOT,
      anon_sym_GT_DOT,
      anon_sym_LT_DOT,
      anon_sym_GT_EQ_DOT,
      anon_sym_LT_EQ_DOT,
  [406] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 8,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(77), 10,
      anon_sym_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_DOT,
      anon_sym_DASH_DOT,
      anon_sym_SLASH_DOT,
      anon_sym_STAR_DOT,
      anon_sym_GT_DOT,
      anon_sym_LT_DOT,
      anon_sym_GT_EQ_DOT,
      anon_sym_LT_EQ_DOT,
  [432] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      sym_integer,
    STATE(46), 1,
      sym__integer,
    ACTIONS(79), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(85), 2,
      anon_sym_false,
      anon_sym_False,
    ACTIONS(87), 2,
      anon_sym_true,
      anon_sym_True,
    STATE(6), 9,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
      sym__boolean,
      sym_string,
      sym_float,
      sym_false,
      sym_true,
  [468] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 8,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(91), 10,
      anon_sym_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_DOT,
      anon_sym_DASH_DOT,
      anon_sym_SLASH_DOT,
      anon_sym_STAR_DOT,
      anon_sym_GT_DOT,
      anon_sym_LT_DOT,
      anon_sym_GT_EQ_DOT,
      anon_sym_LT_EQ_DOT,
  [494] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 8,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(69), 10,
      anon_sym_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_DOT,
      anon_sym_DASH_DOT,
      anon_sym_SLASH_DOT,
      anon_sym_STAR_DOT,
      anon_sym_GT_DOT,
      anon_sym_LT_DOT,
      anon_sym_GT_EQ_DOT,
      anon_sym_LT_EQ_DOT,
  [520] = 3,
    ACTIONS(57), 1,
      sym_comment,
    ACTIONS(95), 1,
      sym__end,
    ACTIONS(93), 17,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PLUS_DOT,
      anon_sym_DASH_DOT,
      anon_sym_SLASH_DOT,
      anon_sym_STAR_DOT,
      anon_sym_GT_DOT,
      anon_sym_LT_DOT,
      anon_sym_GT_EQ_DOT,
      anon_sym_LT_EQ_DOT,
  [546] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      sym_integer,
    STATE(46), 1,
      sym__integer,
    ACTIONS(79), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(85), 2,
      anon_sym_false,
      anon_sym_False,
    ACTIONS(87), 2,
      anon_sym_true,
      anon_sym_True,
    STATE(4), 9,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
      sym__boolean,
      sym_string,
      sym_float,
      sym_false,
      sym_true,
  [582] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      sym_integer,
    STATE(44), 1,
      sym__integer,
    ACTIONS(7), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(15), 2,
      anon_sym_false,
      anon_sym_False,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_True,
    STATE(8), 9,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
      sym__boolean,
      sym_string,
      sym_float,
      sym_false,
      sym_true,
  [618] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      sym_integer,
    STATE(46), 1,
      sym__integer,
    ACTIONS(79), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(85), 2,
      anon_sym_false,
      anon_sym_False,
    ACTIONS(87), 2,
      anon_sym_true,
      anon_sym_True,
    STATE(5), 9,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
      sym__boolean,
      sym_string,
      sym_float,
      sym_false,
      sym_true,
  [654] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      sym_integer,
    STATE(44), 1,
      sym__integer,
    ACTIONS(7), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(15), 2,
      anon_sym_false,
      anon_sym_False,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_True,
    STATE(10), 9,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
      sym__boolean,
      sym_string,
      sym_float,
      sym_false,
      sym_true,
  [690] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      sym_integer,
    STATE(44), 1,
      sym__integer,
    ACTIONS(7), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(15), 2,
      anon_sym_false,
      anon_sym_False,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_True,
    STATE(7), 9,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
      sym__boolean,
      sym_string,
      sym_float,
      sym_false,
      sym_true,
  [726] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 8,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(73), 10,
      anon_sym_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_DOT,
      anon_sym_DASH_DOT,
      anon_sym_SLASH_DOT,
      anon_sym_STAR_DOT,
      anon_sym_GT_DOT,
      anon_sym_LT_DOT,
      anon_sym_GT_EQ_DOT,
      anon_sym_LT_EQ_DOT,
  [752] = 3,
    ACTIONS(57), 1,
      sym_comment,
    ACTIONS(99), 1,
      sym__end,
    ACTIONS(97), 17,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PLUS_DOT,
      anon_sym_DASH_DOT,
      anon_sym_SLASH_DOT,
      anon_sym_STAR_DOT,
      anon_sym_GT_DOT,
      anon_sym_LT_DOT,
      anon_sym_GT_EQ_DOT,
      anon_sym_LT_EQ_DOT,
  [778] = 3,
    ACTIONS(57), 1,
      sym_comment,
    ACTIONS(77), 1,
      sym__end,
    ACTIONS(75), 17,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PLUS_DOT,
      anon_sym_DASH_DOT,
      anon_sym_SLASH_DOT,
      anon_sym_STAR_DOT,
      anon_sym_GT_DOT,
      anon_sym_LT_DOT,
      anon_sym_GT_EQ_DOT,
      anon_sym_LT_EQ_DOT,
  [804] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 8,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(99), 10,
      anon_sym_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_DOT,
      anon_sym_DASH_DOT,
      anon_sym_SLASH_DOT,
      anon_sym_STAR_DOT,
      anon_sym_GT_DOT,
      anon_sym_LT_DOT,
      anon_sym_GT_EQ_DOT,
      anon_sym_LT_EQ_DOT,
  [830] = 3,
    ACTIONS(57), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__end,
    ACTIONS(65), 17,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PLUS_DOT,
      anon_sym_DASH_DOT,
      anon_sym_SLASH_DOT,
      anon_sym_STAR_DOT,
      anon_sym_GT_DOT,
      anon_sym_LT_DOT,
      anon_sym_GT_EQ_DOT,
      anon_sym_LT_EQ_DOT,
  [856] = 3,
    ACTIONS(57), 1,
      sym_comment,
    ACTIONS(91), 1,
      sym__end,
    ACTIONS(89), 17,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PLUS_DOT,
      anon_sym_DASH_DOT,
      anon_sym_SLASH_DOT,
      anon_sym_STAR_DOT,
      anon_sym_GT_DOT,
      anon_sym_LT_DOT,
      anon_sym_GT_EQ_DOT,
      anon_sym_LT_EQ_DOT,
  [882] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 8,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(95), 10,
      anon_sym_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_DOT,
      anon_sym_DASH_DOT,
      anon_sym_SLASH_DOT,
      anon_sym_STAR_DOT,
      anon_sym_GT_DOT,
      anon_sym_LT_DOT,
      anon_sym_GT_EQ_DOT,
      anon_sym_LT_EQ_DOT,
  [908] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 10,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_let,
      anon_sym_DQUOTE,
      sym_integer,
      anon_sym_false,
      anon_sym_False,
      anon_sym_true,
      anon_sym_True,
  [924] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 10,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_let,
      anon_sym_DQUOTE,
      sym_integer,
      anon_sym_false,
      anon_sym_False,
      anon_sym_true,
      anon_sym_True,
  [940] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 8,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_DQUOTE,
      sym_integer,
      anon_sym_false,
      anon_sym_False,
      anon_sym_true,
      anon_sym_True,
  [954] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 8,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_DQUOTE,
      sym_integer,
      anon_sym_false,
      anon_sym_False,
      anon_sym_true,
      anon_sym_True,
  [968] = 5,
    ACTIONS(57), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(111), 1,
      anon_sym_BSLASH,
    ACTIONS(114), 1,
      aux_sym_string_token1,
    STATE(35), 1,
      aux_sym_string_repeat1,
  [984] = 5,
    ACTIONS(57), 1,
      sym_comment,
    ACTIONS(117), 1,
      anon_sym_DQUOTE,
    ACTIONS(119), 1,
      anon_sym_BSLASH,
    ACTIONS(121), 1,
      aux_sym_string_token1,
    STATE(37), 1,
      aux_sym_string_repeat1,
  [1000] = 5,
    ACTIONS(57), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_BSLASH,
    ACTIONS(123), 1,
      anon_sym_DQUOTE,
    ACTIONS(125), 1,
      aux_sym_string_token1,
    STATE(35), 1,
      aux_sym_string_repeat1,
  [1016] = 5,
    ACTIONS(57), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_BSLASH,
    ACTIONS(127), 1,
      anon_sym_DQUOTE,
    ACTIONS(129), 1,
      aux_sym_string_token1,
    STATE(39), 1,
      aux_sym_string_repeat1,
  [1032] = 5,
    ACTIONS(57), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_BSLASH,
    ACTIONS(125), 1,
      aux_sym_string_token1,
    ACTIONS(131), 1,
      anon_sym_DQUOTE,
    STATE(35), 1,
      aux_sym_string_repeat1,
  [1048] = 2,
    ACTIONS(57), 1,
      sym_comment,
    ACTIONS(109), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      aux_sym_string_token1,
  [1057] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      sym_integer,
    STATE(16), 1,
      sym__integer,
  [1067] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      sym_integer,
    STATE(29), 1,
      sym__integer,
  [1077] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      ts_builtin_sym_end,
  [1084] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      anon_sym_DOT,
  [1091] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      anon_sym_DQUOTE,
  [1098] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_DOT,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 49,
  [SMALL_STATE(4)] = 98,
  [SMALL_STATE(5)] = 132,
  [SMALL_STATE(6)] = 162,
  [SMALL_STATE(7)] = 196,
  [SMALL_STATE(8)] = 228,
  [SMALL_STATE(9)] = 258,
  [SMALL_STATE(10)] = 290,
  [SMALL_STATE(11)] = 322,
  [SMALL_STATE(12)] = 351,
  [SMALL_STATE(13)] = 380,
  [SMALL_STATE(14)] = 406,
  [SMALL_STATE(15)] = 432,
  [SMALL_STATE(16)] = 468,
  [SMALL_STATE(17)] = 494,
  [SMALL_STATE(18)] = 520,
  [SMALL_STATE(19)] = 546,
  [SMALL_STATE(20)] = 582,
  [SMALL_STATE(21)] = 618,
  [SMALL_STATE(22)] = 654,
  [SMALL_STATE(23)] = 690,
  [SMALL_STATE(24)] = 726,
  [SMALL_STATE(25)] = 752,
  [SMALL_STATE(26)] = 778,
  [SMALL_STATE(27)] = 804,
  [SMALL_STATE(28)] = 830,
  [SMALL_STATE(29)] = 856,
  [SMALL_STATE(30)] = 882,
  [SMALL_STATE(31)] = 908,
  [SMALL_STATE(32)] = 924,
  [SMALL_STATE(33)] = 940,
  [SMALL_STATE(34)] = 954,
  [SMALL_STATE(35)] = 968,
  [SMALL_STATE(36)] = 984,
  [SMALL_STATE(37)] = 1000,
  [SMALL_STATE(38)] = 1016,
  [SMALL_STATE(39)] = 1032,
  [SMALL_STATE(40)] = 1048,
  [SMALL_STATE(41)] = 1057,
  [SMALL_STATE(42)] = 1067,
  [SMALL_STATE(43)] = 1077,
  [SMALL_STATE(44)] = 1084,
  [SMALL_STATE(45)] = 1091,
  [SMALL_STATE(46)] = 1098,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(22),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(19),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(36),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(25),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal, 1),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__integer, 1, .production_id = 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer, 1, .production_id = 1),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 3, .production_id = 2),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 3, .production_id = 2),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_false, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_false, 1),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_true, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_true, 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding, 5),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_statement, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_operator, 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_operator, 1),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(45),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(35),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [137] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_gleam(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const uint16_t *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .field_count = FIELD_COUNT,
    .field_map_slices = (const TSFieldMapSlice *)ts_field_map_slices,
    .field_map_entries = (const TSFieldMapEntry *)ts_field_map_entries,
    .field_names = ts_field_names,
    .large_state_count = LARGE_STATE_COUNT,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .state_count = STATE_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
