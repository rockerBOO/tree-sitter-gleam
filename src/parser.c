#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 32
#define LARGE_STATE_COUNT 4
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
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
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
    [sym_source_file] = STATE(31),
    [sym__statement] = STATE(3),
    [sym__expression_statement] = STATE(3),
    [sym__expression] = STATE(6),
    [sym__declaration] = STATE(3),
    [sym_unary_expression] = STATE(6),
    [sym_binary_expression] = STATE(6),
    [sym__literal] = STATE(6),
    [sym__boolean] = STATE(6),
    [sym_binding] = STATE(3),
    [sym_string] = STATE(6),
    [sym__integer] = STATE(30),
    [sym_float] = STATE(6),
    [sym_false] = STATE(6),
    [sym_true] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(9),
    [anon_sym_BANG] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym_integer] = ACTIONS(15),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_False] = ACTIONS(17),
    [anon_sym_true] = ACTIONS(19),
    [anon_sym_True] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym__statement] = STATE(2),
    [sym__expression_statement] = STATE(2),
    [sym__expression] = STATE(6),
    [sym__declaration] = STATE(2),
    [sym_unary_expression] = STATE(6),
    [sym_binary_expression] = STATE(6),
    [sym__literal] = STATE(6),
    [sym__boolean] = STATE(6),
    [sym_binding] = STATE(2),
    [sym_string] = STATE(6),
    [sym__integer] = STATE(30),
    [sym_float] = STATE(6),
    [sym_false] = STATE(6),
    [sym_true] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(21),
    [sym_identifier] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(26),
    [anon_sym_BANG] = ACTIONS(26),
    [anon_sym_let] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(32),
    [sym_integer] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(38),
    [anon_sym_False] = ACTIONS(38),
    [anon_sym_true] = ACTIONS(41),
    [anon_sym_True] = ACTIONS(41),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym__statement] = STATE(2),
    [sym__expression_statement] = STATE(2),
    [sym__expression] = STATE(6),
    [sym__declaration] = STATE(2),
    [sym_unary_expression] = STATE(6),
    [sym_binary_expression] = STATE(6),
    [sym__literal] = STATE(6),
    [sym__boolean] = STATE(6),
    [sym_binding] = STATE(2),
    [sym_string] = STATE(6),
    [sym__integer] = STATE(30),
    [sym_float] = STATE(6),
    [sym_false] = STATE(6),
    [sym_true] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(44),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(9),
    [anon_sym_BANG] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym_integer] = ACTIONS(15),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_False] = ACTIONS(17),
    [anon_sym_true] = ACTIONS(19),
    [anon_sym_True] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(50), 1,
      sym_comment,
    ACTIONS(52), 1,
      sym__end,
    STATE(11), 2,
      sym_int_operator,
      sym_float_operator,
    ACTIONS(48), 8,
      anon_sym_PLUS_DOT,
      anon_sym_DASH_DOT,
      anon_sym_SLASH_DOT,
      anon_sym_STAR_DOT,
      anon_sym_GT_DOT,
      anon_sym_LT_DOT,
      anon_sym_GT_EQ_DOT,
      anon_sym_LT_EQ_DOT,
    ACTIONS(46), 9,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [32] = 5,
    ACTIONS(50), 1,
      sym_comment,
    ACTIONS(54), 1,
      sym__end,
    STATE(11), 2,
      sym_int_operator,
      sym_float_operator,
    ACTIONS(48), 8,
      anon_sym_PLUS_DOT,
      anon_sym_DASH_DOT,
      anon_sym_SLASH_DOT,
      anon_sym_STAR_DOT,
      anon_sym_GT_DOT,
      anon_sym_LT_DOT,
      anon_sym_GT_EQ_DOT,
      anon_sym_LT_EQ_DOT,
    ACTIONS(46), 9,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [64] = 5,
    ACTIONS(50), 1,
      sym_comment,
    ACTIONS(56), 1,
      sym__end,
    STATE(11), 2,
      sym_int_operator,
      sym_float_operator,
    ACTIONS(48), 8,
      anon_sym_PLUS_DOT,
      anon_sym_DASH_DOT,
      anon_sym_SLASH_DOT,
      anon_sym_STAR_DOT,
      anon_sym_GT_DOT,
      anon_sym_LT_DOT,
      anon_sym_GT_EQ_DOT,
      anon_sym_LT_EQ_DOT,
    ACTIONS(46), 9,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [96] = 4,
    ACTIONS(50), 1,
      sym_comment,
    ACTIONS(60), 1,
      sym__end,
    STATE(11), 2,
      sym_int_operator,
      sym_float_operator,
    ACTIONS(58), 17,
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
  [126] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      sym_integer,
    ACTIONS(62), 1,
      sym_identifier,
    STATE(30), 1,
      sym__integer,
    ACTIONS(9), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(17), 2,
      anon_sym_false,
      anon_sym_False,
    ACTIONS(19), 2,
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
  [165] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      sym_integer,
    ACTIONS(64), 1,
      sym_identifier,
    STATE(30), 1,
      sym__integer,
    ACTIONS(9), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(17), 2,
      anon_sym_false,
      anon_sym_False,
    ACTIONS(19), 2,
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
  [204] = 4,
    ACTIONS(50), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_DOT,
    ACTIONS(70), 1,
      sym__end,
    ACTIONS(66), 17,
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
  [233] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      sym_integer,
    ACTIONS(72), 1,
      sym_identifier,
    STATE(30), 1,
      sym__integer,
    ACTIONS(9), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(17), 2,
      anon_sym_false,
      anon_sym_False,
    ACTIONS(19), 2,
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
  [272] = 3,
    ACTIONS(50), 1,
      sym_comment,
    ACTIONS(76), 1,
      sym__end,
    ACTIONS(74), 17,
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
  [298] = 3,
    ACTIONS(50), 1,
      sym_comment,
    ACTIONS(78), 1,
      sym__end,
    ACTIONS(68), 17,
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
  [324] = 3,
    ACTIONS(50), 1,
      sym_comment,
    ACTIONS(82), 1,
      sym__end,
    ACTIONS(80), 17,
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
  [350] = 3,
    ACTIONS(50), 1,
      sym_comment,
    ACTIONS(86), 1,
      sym__end,
    ACTIONS(84), 17,
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
  [376] = 3,
    ACTIONS(50), 1,
      sym_comment,
    ACTIONS(90), 1,
      sym__end,
    ACTIONS(88), 17,
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
  [402] = 3,
    ACTIONS(50), 1,
      sym_comment,
    ACTIONS(94), 1,
      sym__end,
    ACTIONS(92), 17,
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
  [428] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 5,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_DQUOTE,
      sym_integer,
    ACTIONS(98), 6,
      anon_sym_let,
      anon_sym_false,
      anon_sym_False,
      anon_sym_true,
      anon_sym_True,
      sym_identifier,
  [447] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 5,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_DQUOTE,
      sym_integer,
    ACTIONS(102), 6,
      anon_sym_let,
      anon_sym_false,
      anon_sym_False,
      anon_sym_true,
      anon_sym_True,
      sym_identifier,
  [466] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 4,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_DQUOTE,
      sym_integer,
    ACTIONS(104), 5,
      anon_sym_false,
      anon_sym_False,
      anon_sym_true,
      anon_sym_True,
      sym_identifier,
  [483] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 4,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_DQUOTE,
      sym_integer,
    ACTIONS(108), 5,
      anon_sym_false,
      anon_sym_False,
      anon_sym_true,
      anon_sym_True,
      sym_identifier,
  [500] = 5,
    ACTIONS(50), 1,
      sym_comment,
    ACTIONS(112), 1,
      anon_sym_DQUOTE,
    ACTIONS(114), 1,
      anon_sym_BSLASH,
    ACTIONS(116), 1,
      aux_sym_string_token1,
    STATE(23), 1,
      aux_sym_string_repeat1,
  [516] = 5,
    ACTIONS(50), 1,
      sym_comment,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_BSLASH,
    ACTIONS(123), 1,
      aux_sym_string_token1,
    STATE(23), 1,
      aux_sym_string_repeat1,
  [532] = 5,
    ACTIONS(50), 1,
      sym_comment,
    ACTIONS(114), 1,
      anon_sym_BSLASH,
    ACTIONS(126), 1,
      anon_sym_DQUOTE,
    ACTIONS(128), 1,
      aux_sym_string_token1,
    STATE(22), 1,
      aux_sym_string_repeat1,
  [548] = 2,
    ACTIONS(50), 1,
      sym_comment,
    ACTIONS(118), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      aux_sym_string_token1,
  [557] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      sym_integer,
    STATE(15), 1,
      sym__integer,
  [567] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      sym_identifier,
  [574] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      anon_sym_DQUOTE,
  [581] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      anon_sym_EQ,
  [588] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 1,
      anon_sym_DOT,
  [595] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 32,
  [SMALL_STATE(6)] = 64,
  [SMALL_STATE(7)] = 96,
  [SMALL_STATE(8)] = 126,
  [SMALL_STATE(9)] = 165,
  [SMALL_STATE(10)] = 204,
  [SMALL_STATE(11)] = 233,
  [SMALL_STATE(12)] = 272,
  [SMALL_STATE(13)] = 298,
  [SMALL_STATE(14)] = 324,
  [SMALL_STATE(15)] = 350,
  [SMALL_STATE(16)] = 376,
  [SMALL_STATE(17)] = 402,
  [SMALL_STATE(18)] = 428,
  [SMALL_STATE(19)] = 447,
  [SMALL_STATE(20)] = 466,
  [SMALL_STATE(21)] = 483,
  [SMALL_STATE(22)] = 500,
  [SMALL_STATE(23)] = 516,
  [SMALL_STATE(24)] = 532,
  [SMALL_STATE(25)] = 548,
  [SMALL_STATE(26)] = 557,
  [SMALL_STATE(27)] = 567,
  [SMALL_STATE(28)] = 574,
  [SMALL_STATE(29)] = 581,
  [SMALL_STATE(30)] = 588,
  [SMALL_STATE(31)] = 595,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(27),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(24),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal, 1),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__integer, 1, .production_id = 1),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_false, 1),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_false, 1),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer, 1, .production_id = 1),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 3, .production_id = 2),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 3, .production_id = 2),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_true, 1),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_true, 1),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding, 5),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binding, 5),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_statement, 2),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_statement, 2),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int_operator, 1),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_operator, 1),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_operator, 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_operator, 1),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(28),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(23),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [140] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
