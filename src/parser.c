#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 50
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 59
#define ALIAS_COUNT 1
#define TOKEN_COUNT 37
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 5

enum {
  sym_identifier = 1,
  anon_sym_DASH = 2,
  anon_sym_BANG = 3,
  anon_sym_let = 4,
  anon_sym_EQ = 5,
  anon_sym_LBRACK = 6,
  anon_sym_COMMA = 7,
  anon_sym_RBRACK = 8,
  sym__remaining = 9,
  anon_sym_PLUS = 10,
  anon_sym_SLASH = 11,
  anon_sym_STAR = 12,
  anon_sym_PERCENT = 13,
  anon_sym_GT = 14,
  anon_sym_LT = 15,
  anon_sym_GT_EQ = 16,
  anon_sym_LT_EQ = 17,
  anon_sym_PLUS_DOT = 18,
  anon_sym_DASH_DOT = 19,
  anon_sym_SLASH_DOT = 20,
  anon_sym_STAR_DOT = 21,
  anon_sym_GT_DOT = 22,
  anon_sym_LT_DOT = 23,
  anon_sym_GT_EQ_DOT = 24,
  anon_sym_LT_EQ_DOT = 25,
  anon_sym_DQUOTE = 26,
  anon_sym_BSLASH = 27,
  aux_sym_string_token1 = 28,
  sym_integer = 29,
  anon_sym_DOT = 30,
  anon_sym_false = 31,
  anon_sym_False = 32,
  anon_sym_true = 33,
  anon_sym_True = 34,
  sym_comment = 35,
  sym__end = 36,
  sym_source_file = 37,
  sym__statement = 38,
  sym__expression_statement = 39,
  sym__expression = 40,
  sym__value = 41,
  sym__declaration = 42,
  sym_unary_expression = 43,
  sym_binary_expression = 44,
  sym__literal = 45,
  sym__boolean = 46,
  sym_binding = 47,
  sym_list = 48,
  sym_int_operator = 49,
  sym_float_operator = 50,
  sym_string = 51,
  sym__integer = 52,
  sym_float = 53,
  sym_false = 54,
  sym_true = 55,
  aux_sym_source_file_repeat1 = 56,
  aux_sym_list_repeat1 = 57,
  aux_sym_string_repeat1 = 58,
  alias_sym__integer = 59,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_DASH] = "-",
  [anon_sym_BANG] = "!",
  [anon_sym_let] = "let",
  [anon_sym_EQ] = "=",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [sym__remaining] = "_remaining",
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
  [sym__value] = "_value",
  [sym__declaration] = "_declaration",
  [sym_unary_expression] = "unary_expression",
  [sym_binary_expression] = "binary_expression",
  [sym__literal] = "_literal",
  [sym__boolean] = "_boolean",
  [sym_binding] = "binding",
  [sym_list] = "list",
  [sym_int_operator] = "int_operator",
  [sym_float_operator] = "float_operator",
  [sym_string] = "string",
  [sym__integer] = "_integer",
  [sym_float] = "float",
  [sym_false] = "false",
  [sym_true] = "true",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_list_repeat1] = "list_repeat1",
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
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym__remaining] = sym__remaining,
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
  [sym__value] = sym__value,
  [sym__declaration] = sym__declaration,
  [sym_unary_expression] = sym_unary_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym__literal] = sym__literal,
  [sym__boolean] = sym__boolean,
  [sym_binding] = sym_binding,
  [sym_list] = sym_list,
  [sym_int_operator] = sym_int_operator,
  [sym_float_operator] = sym_float_operator,
  [sym_string] = sym_string,
  [sym__integer] = sym__integer,
  [sym_float] = sym_float,
  [sym_false] = sym_false,
  [sym_true] = sym_true,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_list_repeat1] = aux_sym_list_repeat1,
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
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym__remaining] = {
    .visible = false,
    .named = true,
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
  [sym__value] = {
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
  [sym_list] = {
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
  [aux_sym_list_repeat1] = {
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
      if (eof) ADVANCE(5);
      if (lookahead == '!') ADVANCE(7);
      if (lookahead == '"') ADVANCE(29);
      if (lookahead == '%') ADVANCE(16);
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '+') ADVANCE(13);
      if (lookahead == ',') ADVANCE(10);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '<') ADVANCE(18);
      if (lookahead == '=') ADVANCE(8);
      if (lookahead == '>') ADVANCE(17);
      if (lookahead == '[') ADVANCE(9);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead == ']') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(39);
      if (lookahead == '%') ADVANCE(16);
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '+') ADVANCE(13);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '<') ADVANCE(18);
      if (lookahead == '>') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(29);
      if (lookahead == ',') ADVANCE(10);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == ']') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(29);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(33);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(38);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(22);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym__remaining);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '.') ADVANCE(21);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '.') ADVANCE(23);
      if (lookahead == '/') ADVANCE(38);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '.') ADVANCE(24);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '=') ADVANCE(19);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == '=') ADVANCE(20);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      if (lookahead == '.') ADVANCE(27);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      if (lookahead == '.') ADVANCE(28);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_PLUS_DOT);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_DASH_DOT);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_SLASH_DOT);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_STAR_DOT);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_GT_DOT);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LT_DOT);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_GT_EQ_DOT);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LT_EQ_DOT);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(38);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(31);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(12);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym__end);
      if (lookahead == '\n') ADVANCE(39);
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
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym__remaining] = ACTIONS(1),
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
    [sym_source_file] = STATE(45),
    [sym__statement] = STATE(2),
    [sym__expression_statement] = STATE(2),
    [sym__expression] = STATE(9),
    [sym__declaration] = STATE(2),
    [sym_unary_expression] = STATE(9),
    [sym_binary_expression] = STATE(9),
    [sym__literal] = STATE(9),
    [sym__boolean] = STATE(9),
    [sym_binding] = STATE(2),
    [sym_list] = STATE(9),
    [sym_string] = STATE(9),
    [sym__integer] = STATE(48),
    [sym_float] = STATE(9),
    [sym_false] = STATE(9),
    [sym_true] = STATE(9),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(9),
    [anon_sym_BANG] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_integer] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(19),
    [anon_sym_False] = ACTIONS(19),
    [anon_sym_true] = ACTIONS(21),
    [anon_sym_True] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_let,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      sym_integer,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    STATE(48), 1,
      sym__integer,
    ACTIONS(9), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(19), 2,
      anon_sym_false,
      anon_sym_False,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_True,
    STATE(3), 5,
      sym__statement,
      sym__expression_statement,
      sym__declaration,
      sym_binding,
      aux_sym_source_file_repeat1,
    STATE(9), 10,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
      sym__boolean,
      sym_list,
      sym_string,
      sym_float,
      sym_false,
      sym_true,
  [56] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(36), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(42), 1,
      sym_integer,
    STATE(48), 1,
      sym__integer,
    ACTIONS(30), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(45), 2,
      anon_sym_false,
      anon_sym_False,
    ACTIONS(48), 2,
      anon_sym_true,
      anon_sym_True,
    STATE(3), 5,
      sym__statement,
      sym__expression_statement,
      sym__declaration,
      sym_binding,
      aux_sym_source_file_repeat1,
    STATE(9), 10,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
      sym__boolean,
      sym_list,
      sym_string,
      sym_float,
      sym_false,
      sym_true,
  [112] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      sym_integer,
    ACTIONS(51), 1,
      sym_identifier,
    STATE(48), 1,
      sym__integer,
    ACTIONS(9), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(19), 2,
      anon_sym_false,
      anon_sym_False,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_True,
    STATE(10), 10,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
      sym__boolean,
      sym_list,
      sym_string,
      sym_float,
      sym_false,
      sym_true,
  [155] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      sym_integer,
    ACTIONS(53), 1,
      sym_identifier,
    STATE(48), 1,
      sym__integer,
    ACTIONS(9), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(19), 2,
      anon_sym_false,
      anon_sym_False,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_True,
    STATE(7), 10,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
      sym__boolean,
      sym_list,
      sym_string,
      sym_float,
      sym_false,
      sym_true,
  [198] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      sym_integer,
    ACTIONS(55), 1,
      sym_identifier,
    STATE(48), 1,
      sym__integer,
    ACTIONS(9), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(19), 2,
      anon_sym_false,
      anon_sym_False,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_True,
    STATE(8), 10,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
      sym__boolean,
      sym_list,
      sym_string,
      sym_float,
      sym_false,
      sym_true,
  [241] = 5,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__end,
    STATE(6), 2,
      sym_int_operator,
      sym_float_operator,
    ACTIONS(59), 8,
      anon_sym_PLUS_DOT,
      anon_sym_DASH_DOT,
      anon_sym_SLASH_DOT,
      anon_sym_STAR_DOT,
      anon_sym_GT_DOT,
      anon_sym_LT_DOT,
      anon_sym_GT_EQ_DOT,
      anon_sym_LT_EQ_DOT,
    ACTIONS(57), 9,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [273] = 4,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__end,
    STATE(6), 2,
      sym_int_operator,
      sym_float_operator,
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
  [303] = 5,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__end,
    STATE(6), 2,
      sym_int_operator,
      sym_float_operator,
    ACTIONS(59), 8,
      anon_sym_PLUS_DOT,
      anon_sym_DASH_DOT,
      anon_sym_SLASH_DOT,
      anon_sym_STAR_DOT,
      anon_sym_GT_DOT,
      anon_sym_LT_DOT,
      anon_sym_GT_EQ_DOT,
      anon_sym_LT_EQ_DOT,
    ACTIONS(57), 9,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [335] = 5,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(71), 1,
      sym__end,
    STATE(6), 2,
      sym_int_operator,
      sym_float_operator,
    ACTIONS(59), 8,
      anon_sym_PLUS_DOT,
      anon_sym_DASH_DOT,
      anon_sym_SLASH_DOT,
      anon_sym_STAR_DOT,
      anon_sym_GT_DOT,
      anon_sym_LT_DOT,
      anon_sym_GT_EQ_DOT,
      anon_sym_LT_EQ_DOT,
    ACTIONS(57), 9,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [367] = 4,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_DOT,
    ACTIONS(77), 1,
      sym__end,
    ACTIONS(73), 17,
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
  [396] = 3,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(79), 1,
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
  [422] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      sym_identifier,
    ACTIONS(84), 1,
      anon_sym_COMMA,
    ACTIONS(87), 1,
      anon_sym_RBRACK,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(92), 1,
      sym_integer,
    STATE(49), 1,
      sym__integer,
    ACTIONS(95), 2,
      anon_sym_false,
      anon_sym_False,
    ACTIONS(98), 2,
      anon_sym_true,
      anon_sym_True,
    STATE(13), 8,
      sym__value,
      sym__literal,
      sym__boolean,
      sym_string,
      sym_float,
      sym_false,
      sym_true,
      aux_sym_list_repeat1,
  [462] = 3,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(103), 1,
      sym__end,
    ACTIONS(101), 17,
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
  [488] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      sym_identifier,
    ACTIONS(107), 1,
      anon_sym_COMMA,
    ACTIONS(109), 1,
      anon_sym_RBRACK,
    ACTIONS(111), 1,
      anon_sym_DQUOTE,
    ACTIONS(113), 1,
      sym_integer,
    STATE(49), 1,
      sym__integer,
    ACTIONS(115), 2,
      anon_sym_false,
      anon_sym_False,
    ACTIONS(117), 2,
      anon_sym_true,
      anon_sym_True,
    STATE(13), 8,
      sym__value,
      sym__literal,
      sym__boolean,
      sym_string,
      sym_float,
      sym_false,
      sym_true,
      aux_sym_list_repeat1,
  [528] = 3,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(121), 1,
      sym__end,
    ACTIONS(119), 17,
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
  [554] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_COMMA,
    ACTIONS(111), 1,
      anon_sym_DQUOTE,
    ACTIONS(113), 1,
      sym_integer,
    ACTIONS(123), 1,
      sym_identifier,
    ACTIONS(125), 1,
      anon_sym_RBRACK,
    STATE(49), 1,
      sym__integer,
    ACTIONS(115), 2,
      anon_sym_false,
      anon_sym_False,
    ACTIONS(117), 2,
      anon_sym_true,
      anon_sym_True,
    STATE(15), 8,
      sym__value,
      sym__literal,
      sym__boolean,
      sym_string,
      sym_float,
      sym_false,
      sym_true,
      aux_sym_list_repeat1,
  [594] = 3,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(129), 1,
      sym__end,
    ACTIONS(127), 17,
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
  [620] = 3,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(133), 1,
      sym__end,
    ACTIONS(131), 17,
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
  [646] = 3,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(137), 1,
      sym__end,
    ACTIONS(135), 17,
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
  [672] = 3,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(141), 1,
      sym__end,
    ACTIONS(139), 17,
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
  [698] = 3,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(145), 1,
      sym__end,
    ACTIONS(143), 17,
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
  [724] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      anon_sym_DQUOTE,
    ACTIONS(113), 1,
      sym_integer,
    ACTIONS(147), 1,
      sym_identifier,
    STATE(49), 1,
      sym__integer,
    ACTIONS(115), 2,
      anon_sym_false,
      anon_sym_False,
    ACTIONS(117), 2,
      anon_sym_true,
      anon_sym_True,
    STATE(30), 7,
      sym__value,
      sym__literal,
      sym__boolean,
      sym_string,
      sym_float,
      sym_false,
      sym_true,
  [757] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 6,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym_integer,
    ACTIONS(151), 6,
      anon_sym_let,
      anon_sym_false,
      anon_sym_False,
      anon_sym_true,
      anon_sym_True,
      sym_identifier,
  [777] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 6,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym_integer,
    ACTIONS(155), 6,
      anon_sym_let,
      anon_sym_false,
      anon_sym_False,
      anon_sym_true,
      anon_sym_True,
      sym_identifier,
  [797] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_DOT,
    ACTIONS(77), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_integer,
    ACTIONS(73), 5,
      anon_sym_false,
      anon_sym_False,
      anon_sym_true,
      anon_sym_True,
      sym_identifier,
  [817] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 5,
      anon_sym_false,
      anon_sym_False,
      anon_sym_true,
      anon_sym_True,
      sym_identifier,
    ACTIONS(159), 5,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym_integer,
  [835] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 5,
      anon_sym_false,
      anon_sym_False,
      anon_sym_true,
      anon_sym_True,
      sym_identifier,
    ACTIONS(163), 5,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym_integer,
  [853] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_integer,
    ACTIONS(131), 5,
      anon_sym_false,
      anon_sym_False,
      anon_sym_true,
      anon_sym_True,
      sym_identifier,
  [870] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_integer,
    ACTIONS(165), 5,
      anon_sym_false,
      anon_sym_False,
      anon_sym_true,
      anon_sym_True,
      sym_identifier,
  [887] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_integer,
    ACTIONS(139), 5,
      anon_sym_false,
      anon_sym_False,
      anon_sym_true,
      anon_sym_True,
      sym_identifier,
  [904] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_integer,
    ACTIONS(119), 5,
      anon_sym_false,
      anon_sym_False,
      anon_sym_true,
      anon_sym_True,
      sym_identifier,
  [921] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_integer,
    ACTIONS(135), 5,
      anon_sym_false,
      anon_sym_False,
      anon_sym_true,
      anon_sym_True,
      sym_identifier,
  [938] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_integer,
    ACTIONS(75), 5,
      anon_sym_false,
      anon_sym_False,
      anon_sym_true,
      anon_sym_True,
      sym_identifier,
  [955] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_integer,
    ACTIONS(127), 5,
      anon_sym_false,
      anon_sym_False,
      anon_sym_true,
      anon_sym_True,
      sym_identifier,
  [972] = 5,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_DQUOTE,
    ACTIONS(169), 1,
      anon_sym_BSLASH,
    ACTIONS(172), 1,
      aux_sym_string_token1,
    STATE(36), 1,
      aux_sym_string_repeat1,
  [988] = 5,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_DQUOTE,
    ACTIONS(177), 1,
      anon_sym_BSLASH,
    ACTIONS(179), 1,
      aux_sym_string_token1,
    STATE(38), 1,
      aux_sym_string_repeat1,
  [1004] = 5,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_BSLASH,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
    ACTIONS(183), 1,
      aux_sym_string_token1,
    STATE(36), 1,
      aux_sym_string_repeat1,
  [1020] = 5,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_BSLASH,
    ACTIONS(185), 1,
      anon_sym_DQUOTE,
    ACTIONS(187), 1,
      aux_sym_string_token1,
    STATE(40), 1,
      aux_sym_string_repeat1,
  [1036] = 5,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_BSLASH,
    ACTIONS(183), 1,
      aux_sym_string_token1,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    STATE(36), 1,
      aux_sym_string_repeat1,
  [1052] = 2,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(167), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      aux_sym_string_token1,
  [1061] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      sym_integer,
    STATE(18), 1,
      sym__integer,
  [1071] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      sym_integer,
    STATE(35), 1,
      sym__integer,
  [1081] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_EQ,
  [1088] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      ts_builtin_sym_end,
  [1095] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      sym_identifier,
  [1102] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_DQUOTE,
  [1109] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_DOT,
  [1116] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_DOT,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 56,
  [SMALL_STATE(4)] = 112,
  [SMALL_STATE(5)] = 155,
  [SMALL_STATE(6)] = 198,
  [SMALL_STATE(7)] = 241,
  [SMALL_STATE(8)] = 273,
  [SMALL_STATE(9)] = 303,
  [SMALL_STATE(10)] = 335,
  [SMALL_STATE(11)] = 367,
  [SMALL_STATE(12)] = 396,
  [SMALL_STATE(13)] = 422,
  [SMALL_STATE(14)] = 462,
  [SMALL_STATE(15)] = 488,
  [SMALL_STATE(16)] = 528,
  [SMALL_STATE(17)] = 554,
  [SMALL_STATE(18)] = 594,
  [SMALL_STATE(19)] = 620,
  [SMALL_STATE(20)] = 646,
  [SMALL_STATE(21)] = 672,
  [SMALL_STATE(22)] = 698,
  [SMALL_STATE(23)] = 724,
  [SMALL_STATE(24)] = 757,
  [SMALL_STATE(25)] = 777,
  [SMALL_STATE(26)] = 797,
  [SMALL_STATE(27)] = 817,
  [SMALL_STATE(28)] = 835,
  [SMALL_STATE(29)] = 853,
  [SMALL_STATE(30)] = 870,
  [SMALL_STATE(31)] = 887,
  [SMALL_STATE(32)] = 904,
  [SMALL_STATE(33)] = 921,
  [SMALL_STATE(34)] = 938,
  [SMALL_STATE(35)] = 955,
  [SMALL_STATE(36)] = 972,
  [SMALL_STATE(37)] = 988,
  [SMALL_STATE(38)] = 1004,
  [SMALL_STATE(39)] = 1020,
  [SMALL_STATE(40)] = 1036,
  [SMALL_STATE(41)] = 1052,
  [SMALL_STATE(42)] = 1061,
  [SMALL_STATE(43)] = 1071,
  [SMALL_STATE(44)] = 1081,
  [SMALL_STATE(45)] = 1088,
  [SMALL_STATE(46)] = 1095,
  [SMALL_STATE(47)] = 1102,
  [SMALL_STATE(48)] = 1109,
  [SMALL_STATE(49)] = 1116,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(46),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(37),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(19),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal, 1),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__integer, 1, .production_id = 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer, 1, .production_id = 1),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(13),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(23),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(39),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(26),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(29),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(31),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 3, .production_id = 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 3, .production_id = 2),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_false, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_false, 1),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_true, 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_true, 1),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding, 5),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binding, 5),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_statement, 2),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_statement, 2),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int_operator, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_operator, 1),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_operator, 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_operator, 1),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [169] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(47),
  [172] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(36),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [197] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
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
