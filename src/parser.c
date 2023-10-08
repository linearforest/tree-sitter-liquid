#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 99
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 56
#define ALIAS_COUNT 1
#define TOKEN_COUNT 37
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 9
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 17

enum {
  sym_identifier = 1,
  anon_sym_LBRACE_LBRACE = 2,
  anon_sym_LBRACE_LBRACE_DASH = 3,
  anon_sym_RBRACE_RBRACE = 4,
  anon_sym_DASH_RBRACE_RBRACE = 5,
  anon_sym_LBRACE_PERCENT = 6,
  anon_sym_LBRACE_PERCENT_DASH = 7,
  anon_sym_PERCENT_RBRACE = 8,
  anon_sym_DASH_PERCENT_RBRACE = 9,
  sym_comment = 10,
  sym_trim = 11,
  anon_sym_SQUOTE = 12,
  aux_sym_string_token1 = 13,
  anon_sym_DQUOTE = 14,
  aux_sym_string_token2 = 15,
  aux_sym_number_token1 = 16,
  anon_sym_true = 17,
  anon_sym_false = 18,
  anon_sym_DOT = 19,
  anon_sym_LBRACK = 20,
  anon_sym_RBRACK = 21,
  anon_sym_EQ_EQ = 22,
  anon_sym_BANG_EQ = 23,
  anon_sym_GT = 24,
  anon_sym_LT = 25,
  anon_sym_GT_EQ = 26,
  anon_sym_LT_EQ = 27,
  anon_sym_or = 28,
  anon_sym_and = 29,
  sym_contains_operator = 30,
  anon_sym_include = 31,
  anon_sym_render = 32,
  anon_sym_if = 33,
  anon_sym_endif = 34,
  anon_sym_elseif = 35,
  anon_sym_else = 36,
  sym_program = 37,
  sym__statement = 38,
  sym__literal = 39,
  sym_string = 40,
  sym_number = 41,
  sym_boolean = 42,
  sym__control_flow = 43,
  sym__expression = 44,
  sym_access = 45,
  sym_binary_operator = 46,
  sym_include_expression = 47,
  sym_render_expression = 48,
  sym_binary_expression = 49,
  sym_if_expression = 50,
  sym_elseif_expression = 51,
  sym_else_expression = 52,
  aux_sym_program_repeat1 = 53,
  aux_sym_access_repeat1 = 54,
  aux_sym_if_expression_repeat1 = 55,
  alias_sym_block = 56,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_LBRACE_LBRACE_DASH] = "{{-",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [anon_sym_DASH_RBRACE_RBRACE] = "-}}",
  [anon_sym_LBRACE_PERCENT] = "{%",
  [anon_sym_LBRACE_PERCENT_DASH] = "{%-",
  [anon_sym_PERCENT_RBRACE] = "%}",
  [anon_sym_DASH_PERCENT_RBRACE] = "-%}",
  [sym_comment] = "comment",
  [sym_trim] = "trim",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token2] = "string_token2",
  [aux_sym_number_token1] = "number_token1",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_DOT] = ".",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_or] = "or",
  [anon_sym_and] = "and",
  [sym_contains_operator] = "contains_operator",
  [anon_sym_include] = "include",
  [anon_sym_render] = "render",
  [anon_sym_if] = "if",
  [anon_sym_endif] = "endif",
  [anon_sym_elseif] = "elseif",
  [anon_sym_else] = "else",
  [sym_program] = "program",
  [sym__statement] = "_statement",
  [sym__literal] = "_literal",
  [sym_string] = "string",
  [sym_number] = "number",
  [sym_boolean] = "boolean",
  [sym__control_flow] = "_control_flow",
  [sym__expression] = "_expression",
  [sym_access] = "access",
  [sym_binary_operator] = "binary_operator",
  [sym_include_expression] = "include_expression",
  [sym_render_expression] = "render_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_if_expression] = "if_expression",
  [sym_elseif_expression] = "elseif_expression",
  [sym_else_expression] = "else_expression",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_access_repeat1] = "access_repeat1",
  [aux_sym_if_expression_repeat1] = "if_expression_repeat1",
  [alias_sym_block] = "block",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [anon_sym_LBRACE_LBRACE_DASH] = anon_sym_LBRACE_LBRACE_DASH,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [anon_sym_DASH_RBRACE_RBRACE] = anon_sym_DASH_RBRACE_RBRACE,
  [anon_sym_LBRACE_PERCENT] = anon_sym_LBRACE_PERCENT,
  [anon_sym_LBRACE_PERCENT_DASH] = anon_sym_LBRACE_PERCENT_DASH,
  [anon_sym_PERCENT_RBRACE] = anon_sym_PERCENT_RBRACE,
  [anon_sym_DASH_PERCENT_RBRACE] = anon_sym_DASH_PERCENT_RBRACE,
  [sym_comment] = sym_comment,
  [sym_trim] = sym_trim,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [aux_sym_number_token1] = aux_sym_number_token1,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_and] = anon_sym_and,
  [sym_contains_operator] = sym_contains_operator,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_render] = anon_sym_render,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_endif] = anon_sym_endif,
  [anon_sym_elseif] = anon_sym_elseif,
  [anon_sym_else] = anon_sym_else,
  [sym_program] = sym_program,
  [sym__statement] = sym__statement,
  [sym__literal] = sym__literal,
  [sym_string] = sym_string,
  [sym_number] = sym_number,
  [sym_boolean] = sym_boolean,
  [sym__control_flow] = sym__control_flow,
  [sym__expression] = sym__expression,
  [sym_access] = sym_access,
  [sym_binary_operator] = sym_binary_operator,
  [sym_include_expression] = sym_include_expression,
  [sym_render_expression] = sym_render_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_if_expression] = sym_if_expression,
  [sym_elseif_expression] = sym_elseif_expression,
  [sym_else_expression] = sym_else_expression,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_access_repeat1] = aux_sym_access_repeat1,
  [aux_sym_if_expression_repeat1] = aux_sym_if_expression_repeat1,
  [alias_sym_block] = alias_sym_block,
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
  [anon_sym_LBRACE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_LBRACE_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_PERCENT_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_PERCENT_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_trim] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_number_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
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
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [sym_contains_operator] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_render] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_elseif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym__control_flow] = {
    .visible = false,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_access] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_include_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_render_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_if_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_elseif_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_else_expression] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_access_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_if_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_block] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_alternatives = 1,
  field_condition = 2,
  field_consequence = 3,
  field_field = 4,
  field_include = 5,
  field_included_file = 6,
  field_operand = 7,
  field_render = 8,
  field_rendered_file = 9,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alternatives] = "alternatives",
  [field_condition] = "condition",
  [field_consequence] = "consequence",
  [field_field] = "field",
  [field_include] = "include",
  [field_included_file] = "included_file",
  [field_operand] = "operand",
  [field_render] = "render",
  [field_rendered_file] = "rendered_file",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
  [3] = {.index = 4, .length = 2},
  [4] = {.index = 6, .length = 1},
  [5] = {.index = 7, .length = 2},
  [6] = {.index = 9, .length = 1},
  [7] = {.index = 10, .length = 2},
  [8] = {.index = 12, .length = 1},
  [9] = {.index = 13, .length = 1},
  [10] = {.index = 14, .length = 2},
  [11] = {.index = 16, .length = 2},
  [12] = {.index = 18, .length = 2},
  [13] = {.index = 20, .length = 3},
  [14] = {.index = 23, .length = 3},
  [15] = {.index = 26, .length = 3},
  [16] = {.index = 29, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_field, 1, .inherited = true},
    {field_operand, 0},
  [2] =
    {field_include, 0},
    {field_included_file, 1},
  [4] =
    {field_render, 0},
    {field_rendered_file, 1},
  [6] =
    {field_field, 1},
  [7] =
    {field_field, 0, .inherited = true},
    {field_field, 1, .inherited = true},
  [9] =
    {field_alternatives, 0},
  [10] =
    {field_alternatives, 0, .inherited = true},
    {field_alternatives, 1, .inherited = true},
  [12] =
    {field_condition, 2},
  [13] =
    {field_consequence, 3},
  [14] =
    {field_alternatives, 4},
    {field_condition, 2},
  [16] =
    {field_condition, 2},
    {field_consequence, 4},
  [18] =
    {field_alternatives, 4, .inherited = true},
    {field_condition, 2},
  [20] =
    {field_alternatives, 5},
    {field_condition, 2},
    {field_consequence, 4},
  [23] =
    {field_alternatives, 5, .inherited = true},
    {field_condition, 2},
    {field_consequence, 4},
  [26] =
    {field_alternatives, 4, .inherited = true},
    {field_alternatives, 5},
    {field_condition, 2},
  [29] =
    {field_alternatives, 5, .inherited = true},
    {field_alternatives, 6},
    {field_condition, 2},
    {field_consequence, 4},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [9] = {
    [3] = alias_sym_block,
  },
  [11] = {
    [4] = alias_sym_block,
  },
  [13] = {
    [4] = alias_sym_block,
  },
  [14] = {
    [4] = alias_sym_block,
  },
  [16] = {
    [4] = alias_sym_block,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym_program_repeat1, 2,
    aux_sym_program_repeat1,
    alias_sym_block,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(18);
      if (lookahead == '!') ADVANCE(10);
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '%') ADVANCE(12);
      if (lookahead == '\'') ADVANCE(31);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '.') ADVANCE(40);
      if (lookahead == '<') ADVANCE(47);
      if (lookahead == '=') ADVANCE(11);
      if (lookahead == '>') ADVANCE(46);
      if (lookahead == '[') ADVANCE(41);
      if (lookahead == ']') ADVANCE(42);
      if (lookahead == '{') ADVANCE(4);
      if (lookahead == '}') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(10);
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '%') ADVANCE(12);
      if (lookahead == '\'') ADVANCE(31);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == '<') ADVANCE(47);
      if (lookahead == '=') ADVANCE(11);
      if (lookahead == '>') ADVANCE(46);
      if (lookahead == ']') ADVANCE(42);
      if (lookahead == '{') ADVANCE(7);
      if (lookahead == '}') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(10);
      if (lookahead == '%') ADVANCE(12);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '.') ADVANCE(39);
      if (lookahead == '<') ADVANCE(47);
      if (lookahead == '=') ADVANCE(11);
      if (lookahead == '>') ADVANCE(46);
      if (lookahead == '[') ADVANCE(41);
      if (lookahead == '}') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '%') ADVANCE(23);
      if (lookahead == '{') ADVANCE(19);
      END_STATE();
    case 5:
      if (lookahead == '%') ADVANCE(5);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == '}') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '%') ADVANCE(5);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '%') ADVANCE(24);
      END_STATE();
    case 8:
      if (lookahead == '%') ADVANCE(14);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == '}') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 9:
      if (lookahead == '%') ADVANCE(14);
      if (lookahead == '}') ADVANCE(15);
      END_STATE();
    case 10:
      if (lookahead == '=') ADVANCE(45);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(44);
      END_STATE();
    case 12:
      if (lookahead == '}') ADVANCE(27);
      END_STATE();
    case 13:
      if (lookahead == '}') ADVANCE(21);
      END_STATE();
    case 14:
      if (lookahead == '}') ADVANCE(28);
      END_STATE();
    case 15:
      if (lookahead == '}') ADVANCE(22);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 17:
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(6);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead == '-') ADVANCE(20);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE_DASH);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_DASH_RBRACE_RBRACE);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENT);
      if (lookahead == '#') ADVANCE(17);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENT);
      if (lookahead == '-') ADVANCE(25);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENT_DASH);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENT_DASH);
      if (lookahead == '#') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_PERCENT_RBRACE);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_DASH_PERCENT_RBRACE);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '%') ADVANCE(5);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(6);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_trim);
      if (lookahead == '%') ADVANCE(14);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == '}') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(33);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(36);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(48);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(49);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
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
      if (lookahead == 'a') ADVANCE(1);
      if (lookahead == 'c') ADVANCE(2);
      if (lookahead == 'e') ADVANCE(3);
      if (lookahead == 'f') ADVANCE(4);
      if (lookahead == 'i') ADVANCE(5);
      if (lookahead == 'o') ADVANCE(6);
      if (lookahead == 'r') ADVANCE(7);
      if (lookahead == 't') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'n') ADVANCE(9);
      END_STATE();
    case 2:
      if (lookahead == 'o') ADVANCE(10);
      END_STATE();
    case 3:
      if (lookahead == 'l') ADVANCE(11);
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(13);
      END_STATE();
    case 5:
      if (lookahead == 'f') ADVANCE(14);
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 6:
      if (lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 8:
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 9:
      if (lookahead == 'd') ADVANCE(19);
      END_STATE();
    case 10:
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 11:
      if (lookahead == 's') ADVANCE(21);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(22);
      END_STATE();
    case 13:
      if (lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(24);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 17:
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 18:
      if (lookahead == 'u') ADVANCE(26);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 20:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 22:
      if (lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 23:
      if (lookahead == 's') ADVANCE(30);
      END_STATE();
    case 24:
      if (lookahead == 'l') ADVANCE(31);
      END_STATE();
    case 25:
      if (lookahead == 'd') ADVANCE(32);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 29:
      if (lookahead == 'f') ADVANCE(36);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 31:
      if (lookahead == 'u') ADVANCE(38);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 35:
      if (lookahead == 'f') ADVANCE(41);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_endif);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 38:
      if (lookahead == 'd') ADVANCE(42);
      END_STATE();
    case 39:
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_elseif);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_render);
      END_STATE();
    case 44:
      if (lookahead == 's') ADVANCE(46);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_contains_operator);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 35},
  [98] = {.lex_state = 32},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE_DASH] = ACTIONS(1),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1),
    [anon_sym_DASH_RBRACE_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_PERCENT] = ACTIONS(1),
    [anon_sym_LBRACE_PERCENT_DASH] = ACTIONS(1),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(1),
    [anon_sym_DASH_PERCENT_RBRACE] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_trim] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_number_token1] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [sym_contains_operator] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_render] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_endif] = ACTIONS(1),
    [anon_sym_elseif] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(91),
    [sym__statement] = STATE(49),
    [sym__control_flow] = STATE(49),
    [sym_if_expression] = STATE(49),
    [aux_sym_program_repeat1] = STATE(27),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(5),
    [anon_sym_LBRACE_LBRACE_DASH] = ACTIONS(7),
    [anon_sym_LBRACE_PERCENT] = ACTIONS(9),
    [anon_sym_LBRACE_PERCENT_DASH] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_token1,
    ACTIONS(23), 1,
      anon_sym_include,
    ACTIONS(25), 1,
      anon_sym_render,
    ACTIONS(27), 1,
      anon_sym_if,
    ACTIONS(29), 1,
      anon_sym_endif,
    ACTIONS(31), 1,
      anon_sym_elseif,
    ACTIONS(33), 1,
      anon_sym_else,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(26), 9,
      sym__literal,
      sym_string,
      sym_number,
      sym_boolean,
      sym__expression,
      sym_access,
      sym_include_expression,
      sym_render_expression,
      sym_binary_expression,
  [46] = 12,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_token1,
    ACTIONS(23), 1,
      anon_sym_include,
    ACTIONS(25), 1,
      anon_sym_render,
    ACTIONS(27), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_elseif,
    ACTIONS(33), 1,
      anon_sym_else,
    ACTIONS(35), 1,
      anon_sym_endif,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(26), 9,
      sym__literal,
      sym_string,
      sym_number,
      sym_boolean,
      sym__expression,
      sym_access,
      sym_include_expression,
      sym_render_expression,
      sym_binary_expression,
  [92] = 9,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_token1,
    ACTIONS(23), 1,
      anon_sym_include,
    ACTIONS(25), 1,
      anon_sym_render,
    ACTIONS(27), 1,
      anon_sym_if,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(26), 9,
      sym__literal,
      sym_string,
      sym_number,
      sym_boolean,
      sym__expression,
      sym_access,
      sym_include_expression,
      sym_render_expression,
      sym_binary_expression,
  [129] = 8,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_token1,
    ACTIONS(23), 1,
      anon_sym_include,
    ACTIONS(25), 1,
      anon_sym_render,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(21), 9,
      sym__literal,
      sym_string,
      sym_number,
      sym_boolean,
      sym__expression,
      sym_access,
      sym_include_expression,
      sym_render_expression,
      sym_binary_expression,
  [163] = 8,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_token1,
    ACTIONS(23), 1,
      anon_sym_include,
    ACTIONS(25), 1,
      anon_sym_render,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(23), 9,
      sym__literal,
      sym_string,
      sym_number,
      sym_boolean,
      sym__expression,
      sym_access,
      sym_include_expression,
      sym_render_expression,
      sym_binary_expression,
  [197] = 8,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_token1,
    ACTIONS(23), 1,
      anon_sym_include,
    ACTIONS(25), 1,
      anon_sym_render,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(22), 9,
      sym__literal,
      sym_string,
      sym_number,
      sym_boolean,
      sym__expression,
      sym_access,
      sym_include_expression,
      sym_render_expression,
      sym_binary_expression,
  [231] = 8,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_token1,
    ACTIONS(23), 1,
      anon_sym_include,
    ACTIONS(25), 1,
      anon_sym_render,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(14), 9,
      sym__literal,
      sym_string,
      sym_number,
      sym_boolean,
      sym__expression,
      sym_access,
      sym_include_expression,
      sym_render_expression,
      sym_binary_expression,
  [265] = 5,
    ACTIONS(39), 1,
      anon_sym_DOT,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    STATE(11), 1,
      aux_sym_access_repeat1,
    ACTIONS(43), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(37), 11,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_or,
      anon_sym_and,
      sym_contains_operator,
  [292] = 5,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(50), 1,
      anon_sym_LBRACK,
    STATE(10), 1,
      aux_sym_access_repeat1,
    ACTIONS(53), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(45), 11,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_or,
      anon_sym_and,
      sym_contains_operator,
  [319] = 5,
    ACTIONS(39), 1,
      anon_sym_DOT,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    STATE(10), 1,
      aux_sym_access_repeat1,
    ACTIONS(57), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(55), 11,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_or,
      anon_sym_and,
      sym_contains_operator,
  [346] = 2,
    ACTIONS(61), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(59), 13,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_or,
      anon_sym_and,
      sym_contains_operator,
  [366] = 2,
    ACTIONS(65), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(63), 13,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_or,
      anon_sym_and,
      sym_contains_operator,
  [386] = 5,
    ACTIONS(73), 1,
      sym_contains_operator,
    STATE(8), 1,
      sym_binary_operator,
    ACTIONS(71), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(67), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
    ACTIONS(69), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_or,
      anon_sym_and,
  [411] = 2,
    ACTIONS(77), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(75), 12,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_RBRACK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_or,
      anon_sym_and,
      sym_contains_operator,
  [430] = 2,
    ACTIONS(81), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(79), 11,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_or,
      anon_sym_and,
      sym_contains_operator,
  [448] = 2,
    ACTIONS(85), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(83), 11,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_or,
      anon_sym_and,
      sym_contains_operator,
  [466] = 2,
    ACTIONS(87), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(67), 11,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_or,
      anon_sym_and,
      sym_contains_operator,
  [484] = 2,
    ACTIONS(91), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(89), 11,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_or,
      anon_sym_and,
      sym_contains_operator,
  [502] = 2,
    ACTIONS(95), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(93), 11,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_or,
      anon_sym_and,
      sym_contains_operator,
  [520] = 5,
    ACTIONS(73), 1,
      sym_contains_operator,
    STATE(8), 1,
      sym_binary_operator,
    ACTIONS(71), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(97), 2,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
    ACTIONS(69), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_or,
      anon_sym_and,
  [543] = 5,
    ACTIONS(73), 1,
      sym_contains_operator,
    STATE(8), 1,
      sym_binary_operator,
    ACTIONS(71), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(99), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
    ACTIONS(69), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_or,
      anon_sym_and,
  [566] = 5,
    ACTIONS(73), 1,
      sym_contains_operator,
    STATE(8), 1,
      sym_binary_operator,
    ACTIONS(71), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(101), 2,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
    ACTIONS(69), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_or,
      anon_sym_and,
  [589] = 9,
    ACTIONS(5), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    ACTIONS(11), 1,
      sym_comment,
    STATE(28), 1,
      aux_sym_program_repeat1,
    STATE(56), 1,
      aux_sym_if_expression_repeat1,
    STATE(71), 1,
      sym_elseif_expression,
    STATE(78), 1,
      sym_else_expression,
    ACTIONS(103), 2,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(49), 3,
      sym__statement,
      sym__control_flow,
      sym_if_expression,
  [620] = 9,
    ACTIONS(5), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    ACTIONS(11), 1,
      sym_comment,
    STATE(24), 1,
      aux_sym_program_repeat1,
    STATE(57), 1,
      aux_sym_if_expression_repeat1,
    STATE(71), 1,
      sym_elseif_expression,
    STATE(84), 1,
      sym_else_expression,
    ACTIONS(105), 2,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(49), 3,
      sym__statement,
      sym__control_flow,
      sym_if_expression,
  [651] = 5,
    ACTIONS(73), 1,
      sym_contains_operator,
    STATE(8), 1,
      sym_binary_operator,
    ACTIONS(71), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(99), 2,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
    ACTIONS(69), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_or,
      anon_sym_and,
  [674] = 7,
    ACTIONS(5), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(107), 1,
      ts_builtin_sym_end,
    STATE(28), 1,
      aux_sym_program_repeat1,
    ACTIONS(9), 2,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(49), 3,
      sym__statement,
      sym__control_flow,
      sym_if_expression,
  [699] = 7,
    ACTIONS(109), 1,
      ts_builtin_sym_end,
    ACTIONS(111), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(114), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    ACTIONS(120), 1,
      sym_comment,
    STATE(28), 1,
      aux_sym_program_repeat1,
    ACTIONS(117), 2,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(49), 3,
      sym__statement,
      sym__control_flow,
      sym_if_expression,
  [724] = 6,
    ACTIONS(5), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    ACTIONS(11), 1,
      sym_comment,
    STATE(28), 1,
      aux_sym_program_repeat1,
    ACTIONS(123), 2,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(49), 3,
      sym__statement,
      sym__control_flow,
      sym_if_expression,
  [746] = 6,
    ACTIONS(5), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    ACTIONS(11), 1,
      sym_comment,
    STATE(32), 1,
      aux_sym_program_repeat1,
    ACTIONS(125), 2,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(49), 3,
      sym__statement,
      sym__control_flow,
      sym_if_expression,
  [768] = 6,
    ACTIONS(5), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    ACTIONS(11), 1,
      sym_comment,
    STATE(29), 1,
      aux_sym_program_repeat1,
    ACTIONS(127), 2,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(49), 3,
      sym__statement,
      sym__control_flow,
      sym_if_expression,
  [790] = 6,
    ACTIONS(5), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    ACTIONS(11), 1,
      sym_comment,
    STATE(28), 1,
      aux_sym_program_repeat1,
    ACTIONS(129), 2,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(49), 3,
      sym__statement,
      sym__control_flow,
      sym_if_expression,
  [812] = 2,
    ACTIONS(133), 3,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      aux_sym_number_token1,
    ACTIONS(131), 5,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
      anon_sym_include,
      anon_sym_render,
  [825] = 2,
    ACTIONS(135), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE_DASH,
      sym_comment,
    ACTIONS(137), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
  [836] = 2,
    ACTIONS(139), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE_DASH,
      sym_comment,
    ACTIONS(141), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
  [847] = 2,
    ACTIONS(143), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE_DASH,
      sym_comment,
    ACTIONS(145), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
  [858] = 2,
    ACTIONS(135), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE_DASH,
      sym_comment,
    ACTIONS(137), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
  [869] = 2,
    ACTIONS(143), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE_DASH,
      sym_comment,
    ACTIONS(145), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
  [880] = 2,
    ACTIONS(147), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE_DASH,
      sym_comment,
    ACTIONS(149), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
  [891] = 2,
    ACTIONS(151), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE_DASH,
      sym_comment,
    ACTIONS(153), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
  [902] = 2,
    ACTIONS(143), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE_DASH,
      sym_comment,
    ACTIONS(145), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
  [913] = 2,
    ACTIONS(143), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE_DASH,
      sym_comment,
    ACTIONS(145), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
  [924] = 2,
    ACTIONS(139), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE_DASH,
      sym_comment,
    ACTIONS(141), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
  [935] = 2,
    ACTIONS(135), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE_DASH,
      sym_comment,
    ACTIONS(137), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
  [946] = 2,
    ACTIONS(147), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE_DASH,
      sym_comment,
    ACTIONS(149), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
  [957] = 2,
    ACTIONS(139), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE_DASH,
      sym_comment,
    ACTIONS(141), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
  [968] = 2,
    ACTIONS(155), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE_DASH,
      sym_comment,
    ACTIONS(157), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
  [979] = 2,
    ACTIONS(139), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE_DASH,
      sym_comment,
    ACTIONS(141), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
  [990] = 2,
    ACTIONS(159), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE_DASH,
      sym_comment,
    ACTIONS(161), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
  [1001] = 2,
    ACTIONS(163), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE_DASH,
      sym_comment,
    ACTIONS(165), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
  [1012] = 2,
    ACTIONS(167), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE_DASH,
      sym_comment,
    ACTIONS(169), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
  [1023] = 2,
    ACTIONS(135), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE_DASH,
      sym_comment,
    ACTIONS(137), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
  [1034] = 2,
    ACTIONS(147), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE_DASH,
      sym_comment,
    ACTIONS(149), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
  [1045] = 2,
    ACTIONS(171), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE_DASH,
      sym_comment,
    ACTIONS(173), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
  [1056] = 2,
    ACTIONS(147), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE_DASH,
      sym_comment,
    ACTIONS(149), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
  [1067] = 5,
    ACTIONS(175), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(177), 1,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(58), 1,
      aux_sym_if_expression_repeat1,
    STATE(71), 1,
      sym_elseif_expression,
    STATE(83), 1,
      sym_else_expression,
  [1083] = 5,
    ACTIONS(179), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(181), 1,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(58), 1,
      aux_sym_if_expression_repeat1,
    STATE(70), 1,
      sym_else_expression,
    STATE(71), 1,
      sym_elseif_expression,
  [1099] = 4,
    ACTIONS(183), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(186), 1,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(58), 1,
      aux_sym_if_expression_repeat1,
    STATE(71), 1,
      sym_elseif_expression,
  [1112] = 3,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    STATE(20), 1,
      sym_string,
  [1122] = 3,
    ACTIONS(33), 1,
      anon_sym_else,
    ACTIONS(189), 1,
      anon_sym_endif,
    ACTIONS(191), 1,
      anon_sym_elseif,
  [1132] = 3,
    ACTIONS(33), 1,
      anon_sym_else,
    ACTIONS(191), 1,
      anon_sym_elseif,
    ACTIONS(193), 1,
      anon_sym_endif,
  [1142] = 3,
    ACTIONS(33), 1,
      anon_sym_else,
    ACTIONS(191), 1,
      anon_sym_elseif,
    ACTIONS(195), 1,
      anon_sym_endif,
  [1152] = 3,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    STATE(18), 1,
      sym_string,
  [1162] = 3,
    ACTIONS(33), 1,
      anon_sym_else,
    ACTIONS(191), 1,
      anon_sym_elseif,
    ACTIONS(197), 1,
      anon_sym_endif,
  [1172] = 3,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    STATE(19), 1,
      sym_string,
  [1182] = 3,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    STATE(87), 1,
      sym_string,
  [1192] = 2,
    ACTIONS(199), 1,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(201), 1,
      anon_sym_DASH_PERCENT_RBRACE,
  [1199] = 2,
    ACTIONS(203), 1,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(205), 1,
      anon_sym_DASH_PERCENT_RBRACE,
  [1206] = 1,
    ACTIONS(207), 2,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [1211] = 2,
    ACTIONS(209), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(211), 1,
      anon_sym_LBRACE_PERCENT_DASH,
  [1218] = 2,
    ACTIONS(213), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(215), 1,
      anon_sym_LBRACE_PERCENT_DASH,
  [1225] = 1,
    ACTIONS(217), 2,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [1230] = 2,
    ACTIONS(219), 1,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(221), 1,
      anon_sym_DASH_PERCENT_RBRACE,
  [1237] = 2,
    ACTIONS(223), 1,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(225), 1,
      anon_sym_DASH_PERCENT_RBRACE,
  [1244] = 2,
    ACTIONS(227), 1,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(229), 1,
      anon_sym_DASH_PERCENT_RBRACE,
  [1251] = 1,
    ACTIONS(231), 2,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [1256] = 2,
    ACTIONS(233), 1,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(235), 1,
      anon_sym_DASH_PERCENT_RBRACE,
  [1263] = 2,
    ACTIONS(237), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(239), 1,
      anon_sym_LBRACE_PERCENT_DASH,
  [1270] = 1,
    ACTIONS(241), 2,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [1275] = 2,
    ACTIONS(243), 1,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(245), 1,
      anon_sym_DASH_PERCENT_RBRACE,
  [1282] = 2,
    ACTIONS(247), 1,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(249), 1,
      anon_sym_DASH_PERCENT_RBRACE,
  [1289] = 1,
    ACTIONS(251), 2,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [1294] = 2,
    ACTIONS(253), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(255), 1,
      anon_sym_LBRACE_PERCENT_DASH,
  [1301] = 2,
    ACTIONS(257), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(259), 1,
      anon_sym_LBRACE_PERCENT_DASH,
  [1308] = 1,
    ACTIONS(191), 1,
      anon_sym_elseif,
  [1312] = 1,
    ACTIONS(261), 1,
      anon_sym_endif,
  [1316] = 1,
    ACTIONS(263), 1,
      anon_sym_RBRACK,
  [1320] = 1,
    ACTIONS(265), 1,
      anon_sym_endif,
  [1324] = 1,
    ACTIONS(267), 1,
      anon_sym_endif,
  [1328] = 1,
    ACTIONS(269), 1,
      anon_sym_endif,
  [1332] = 1,
    ACTIONS(271), 1,
      ts_builtin_sym_end,
  [1336] = 1,
    ACTIONS(273), 1,
      sym_identifier,
  [1340] = 1,
    ACTIONS(275), 1,
      anon_sym_DQUOTE,
  [1344] = 1,
    ACTIONS(275), 1,
      anon_sym_SQUOTE,
  [1348] = 1,
    ACTIONS(277), 1,
      anon_sym_endif,
  [1352] = 1,
    ACTIONS(279), 1,
      anon_sym_endif,
  [1356] = 1,
    ACTIONS(281), 1,
      aux_sym_string_token2,
  [1360] = 1,
    ACTIONS(283), 1,
      aux_sym_string_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 46,
  [SMALL_STATE(4)] = 92,
  [SMALL_STATE(5)] = 129,
  [SMALL_STATE(6)] = 163,
  [SMALL_STATE(7)] = 197,
  [SMALL_STATE(8)] = 231,
  [SMALL_STATE(9)] = 265,
  [SMALL_STATE(10)] = 292,
  [SMALL_STATE(11)] = 319,
  [SMALL_STATE(12)] = 346,
  [SMALL_STATE(13)] = 366,
  [SMALL_STATE(14)] = 386,
  [SMALL_STATE(15)] = 411,
  [SMALL_STATE(16)] = 430,
  [SMALL_STATE(17)] = 448,
  [SMALL_STATE(18)] = 466,
  [SMALL_STATE(19)] = 484,
  [SMALL_STATE(20)] = 502,
  [SMALL_STATE(21)] = 520,
  [SMALL_STATE(22)] = 543,
  [SMALL_STATE(23)] = 566,
  [SMALL_STATE(24)] = 589,
  [SMALL_STATE(25)] = 620,
  [SMALL_STATE(26)] = 651,
  [SMALL_STATE(27)] = 674,
  [SMALL_STATE(28)] = 699,
  [SMALL_STATE(29)] = 724,
  [SMALL_STATE(30)] = 746,
  [SMALL_STATE(31)] = 768,
  [SMALL_STATE(32)] = 790,
  [SMALL_STATE(33)] = 812,
  [SMALL_STATE(34)] = 825,
  [SMALL_STATE(35)] = 836,
  [SMALL_STATE(36)] = 847,
  [SMALL_STATE(37)] = 858,
  [SMALL_STATE(38)] = 869,
  [SMALL_STATE(39)] = 880,
  [SMALL_STATE(40)] = 891,
  [SMALL_STATE(41)] = 902,
  [SMALL_STATE(42)] = 913,
  [SMALL_STATE(43)] = 924,
  [SMALL_STATE(44)] = 935,
  [SMALL_STATE(45)] = 946,
  [SMALL_STATE(46)] = 957,
  [SMALL_STATE(47)] = 968,
  [SMALL_STATE(48)] = 979,
  [SMALL_STATE(49)] = 990,
  [SMALL_STATE(50)] = 1001,
  [SMALL_STATE(51)] = 1012,
  [SMALL_STATE(52)] = 1023,
  [SMALL_STATE(53)] = 1034,
  [SMALL_STATE(54)] = 1045,
  [SMALL_STATE(55)] = 1056,
  [SMALL_STATE(56)] = 1067,
  [SMALL_STATE(57)] = 1083,
  [SMALL_STATE(58)] = 1099,
  [SMALL_STATE(59)] = 1112,
  [SMALL_STATE(60)] = 1122,
  [SMALL_STATE(61)] = 1132,
  [SMALL_STATE(62)] = 1142,
  [SMALL_STATE(63)] = 1152,
  [SMALL_STATE(64)] = 1162,
  [SMALL_STATE(65)] = 1172,
  [SMALL_STATE(66)] = 1182,
  [SMALL_STATE(67)] = 1192,
  [SMALL_STATE(68)] = 1199,
  [SMALL_STATE(69)] = 1206,
  [SMALL_STATE(70)] = 1211,
  [SMALL_STATE(71)] = 1218,
  [SMALL_STATE(72)] = 1225,
  [SMALL_STATE(73)] = 1230,
  [SMALL_STATE(74)] = 1237,
  [SMALL_STATE(75)] = 1244,
  [SMALL_STATE(76)] = 1251,
  [SMALL_STATE(77)] = 1256,
  [SMALL_STATE(78)] = 1263,
  [SMALL_STATE(79)] = 1270,
  [SMALL_STATE(80)] = 1275,
  [SMALL_STATE(81)] = 1282,
  [SMALL_STATE(82)] = 1289,
  [SMALL_STATE(83)] = 1294,
  [SMALL_STATE(84)] = 1301,
  [SMALL_STATE(85)] = 1308,
  [SMALL_STATE(86)] = 1312,
  [SMALL_STATE(87)] = 1316,
  [SMALL_STATE(88)] = 1320,
  [SMALL_STATE(89)] = 1324,
  [SMALL_STATE(90)] = 1328,
  [SMALL_STATE(91)] = 1332,
  [SMALL_STATE(92)] = 1336,
  [SMALL_STATE(93)] = 1340,
  [SMALL_STATE(94)] = 1344,
  [SMALL_STATE(95)] = 1348,
  [SMALL_STATE(96)] = 1352,
  [SMALL_STATE(97)] = 1356,
  [SMALL_STATE(98)] = 1360,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_access_repeat1, 2, .production_id = 5),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_access_repeat1, 2, .production_id = 5), SHIFT_REPEAT(92),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_access_repeat1, 2, .production_id = 5), SHIFT_REPEAT(66),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_access_repeat1, 2, .production_id = 5),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access, 2, .production_id = 1),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_access, 2, .production_id = 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_access_repeat1, 3, .production_id = 4),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_access_repeat1, 3, .production_id = 4),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_access_repeat1, 2, .production_id = 4),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_access_repeat1, 2, .production_id = 4),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_render_expression, 2, .production_id = 3),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_render_expression, 2, .production_id = 3),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_expression, 2, .production_id = 2),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_expression, 2, .production_id = 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(7),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(7),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(49),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_expression, 4, .production_id = 9),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elseif_expression, 4, .production_id = 8),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_expression, 3),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elseif_expression, 5, .production_id = 11),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operator, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operator, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expression, 10, .production_id = 16),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expression, 10, .production_id = 16),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expression, 8, .production_id = 12),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expression, 8, .production_id = 12),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expression, 9, .production_id = 15),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expression, 9, .production_id = 15),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expression, 9, .production_id = 14),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expression, 9, .production_id = 14),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expression, 9, .production_id = 13),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expression, 9, .production_id = 13),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expression, 8, .production_id = 10),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expression, 8, .production_id = 10),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 1),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expression, 8, .production_id = 11),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expression, 8, .production_id = 11),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expression, 7, .production_id = 8),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expression, 7, .production_id = 8),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 3),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 3),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [183] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_expression_repeat1, 2, .production_id = 7), SHIFT_REPEAT(85),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_expression_repeat1, 2, .production_id = 7), SHIFT_REPEAT(85),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_expression_repeat1, 1, .production_id = 6),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_expression_repeat1, 1, .production_id = 6),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [271] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_liquid(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
