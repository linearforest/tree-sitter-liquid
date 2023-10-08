#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 118
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 66
#define ALIAS_COUNT 1
#define TOKEN_COUNT 42
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 14
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 20

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
  anon_sym_assign = 19,
  anon_sym_EQ = 20,
  anon_sym_DOT = 21,
  anon_sym_LBRACK = 22,
  anon_sym_RBRACK = 23,
  anon_sym_EQ_EQ = 24,
  anon_sym_BANG_EQ = 25,
  anon_sym_GT = 26,
  anon_sym_LT = 27,
  anon_sym_GT_EQ = 28,
  anon_sym_LT_EQ = 29,
  anon_sym_or = 30,
  anon_sym_and = 31,
  anon_sym_PIPE = 32,
  anon_sym_COLON = 33,
  anon_sym_COMMA = 34,
  sym_contains_operator = 35,
  anon_sym_include = 36,
  anon_sym_render = 37,
  anon_sym_if = 38,
  anon_sym_endif = 39,
  anon_sym_elseif = 40,
  anon_sym_else = 41,
  sym_program = 42,
  sym__statement = 43,
  sym__literal = 44,
  sym_string = 45,
  sym_number = 46,
  sym_boolean = 47,
  sym_assignment = 48,
  sym__control_flow = 49,
  sym__expression = 50,
  sym_access = 51,
  sym_binary_operator = 52,
  sym_filter = 53,
  sym_argument_list = 54,
  sym_argument = 55,
  sym_include_expression = 56,
  sym_render_expression = 57,
  sym_binary_expression = 58,
  sym_if_expression = 59,
  sym_elseif_expression = 60,
  sym_else_expression = 61,
  aux_sym_program_repeat1 = 62,
  aux_sym_access_repeat1 = 63,
  aux_sym_argument_list_repeat1 = 64,
  aux_sym_if_expression_repeat1 = 65,
  alias_sym_block = 66,
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
  [anon_sym_assign] = "assign",
  [anon_sym_EQ] = "=",
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
  [anon_sym_PIPE] = "|",
  [anon_sym_COLON] = ":",
  [anon_sym_COMMA] = ",",
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
  [sym_assignment] = "assignment",
  [sym__control_flow] = "_control_flow",
  [sym__expression] = "_expression",
  [sym_access] = "access",
  [sym_binary_operator] = "binary_operator",
  [sym_filter] = "filter",
  [sym_argument_list] = "argument_list",
  [sym_argument] = "argument",
  [sym_include_expression] = "include_expression",
  [sym_render_expression] = "render_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_if_expression] = "if_expression",
  [sym_elseif_expression] = "elseif_expression",
  [sym_else_expression] = "else_expression",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_access_repeat1] = "access_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
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
  [anon_sym_assign] = anon_sym_assign,
  [anon_sym_EQ] = anon_sym_EQ,
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
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_COMMA] = anon_sym_COMMA,
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
  [sym_assignment] = sym_assignment,
  [sym__control_flow] = sym__control_flow,
  [sym__expression] = sym__expression,
  [sym_access] = sym_access,
  [sym_binary_operator] = sym_binary_operator,
  [sym_filter] = sym_filter,
  [sym_argument_list] = sym_argument_list,
  [sym_argument] = sym_argument,
  [sym_include_expression] = sym_include_expression,
  [sym_render_expression] = sym_render_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_if_expression] = sym_if_expression,
  [sym_elseif_expression] = sym_elseif_expression,
  [sym_else_expression] = sym_else_expression,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_access_repeat1] = aux_sym_access_repeat1,
  [aux_sym_argument_list_repeat1] = aux_sym_argument_list_repeat1,
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
  [anon_sym_assign] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
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
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
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
  [sym_assignment] = {
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
  [sym_filter] = {
    .visible = true,
    .named = true,
  },
  [sym_argument_list] = {
    .visible = true,
    .named = true,
  },
  [sym_argument] = {
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
  [aux_sym_argument_list_repeat1] = {
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
  field_body = 2,
  field_condition = 3,
  field_consequence = 4,
  field_field = 5,
  field_include = 6,
  field_included_file = 7,
  field_key = 8,
  field_name = 9,
  field_operand = 10,
  field_render = 11,
  field_rendered_file = 12,
  field_value = 13,
  field_variable_name = 14,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alternatives] = "alternatives",
  [field_body] = "body",
  [field_condition] = "condition",
  [field_consequence] = "consequence",
  [field_field] = "field",
  [field_include] = "include",
  [field_included_file] = "included_file",
  [field_key] = "key",
  [field_name] = "name",
  [field_operand] = "operand",
  [field_render] = "render",
  [field_rendered_file] = "rendered_file",
  [field_value] = "value",
  [field_variable_name] = "variable_name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
  [3] = {.index = 4, .length = 2},
  [4] = {.index = 6, .length = 1},
  [5] = {.index = 7, .length = 2},
  [6] = {.index = 9, .length = 2},
  [7] = {.index = 11, .length = 2},
  [8] = {.index = 13, .length = 1},
  [9] = {.index = 14, .length = 2},
  [10] = {.index = 16, .length = 1},
  [11] = {.index = 17, .length = 2},
  [12] = {.index = 19, .length = 1},
  [13] = {.index = 20, .length = 2},
  [14] = {.index = 22, .length = 2},
  [15] = {.index = 24, .length = 2},
  [16] = {.index = 26, .length = 3},
  [17] = {.index = 29, .length = 3},
  [18] = {.index = 32, .length = 3},
  [19] = {.index = 35, .length = 4},
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
    {field_body, 0},
    {field_name, 2},
  [11] =
    {field_value, 3},
    {field_variable_name, 1},
  [13] =
    {field_alternatives, 0},
  [14] =
    {field_alternatives, 0, .inherited = true},
    {field_alternatives, 1, .inherited = true},
  [16] =
    {field_condition, 2},
  [17] =
    {field_key, 0},
    {field_value, 2},
  [19] =
    {field_consequence, 3},
  [20] =
    {field_alternatives, 4},
    {field_condition, 2},
  [22] =
    {field_condition, 2},
    {field_consequence, 4},
  [24] =
    {field_alternatives, 4, .inherited = true},
    {field_condition, 2},
  [26] =
    {field_alternatives, 5},
    {field_condition, 2},
    {field_consequence, 4},
  [29] =
    {field_alternatives, 5, .inherited = true},
    {field_condition, 2},
    {field_consequence, 4},
  [32] =
    {field_alternatives, 4, .inherited = true},
    {field_alternatives, 5},
    {field_condition, 2},
  [35] =
    {field_alternatives, 5, .inherited = true},
    {field_alternatives, 6},
    {field_condition, 2},
    {field_consequence, 4},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [12] = {
    [3] = alias_sym_block,
  },
  [14] = {
    [4] = alias_sym_block,
  },
  [16] = {
    [4] = alias_sym_block,
  },
  [17] = {
    [4] = alias_sym_block,
  },
  [19] = {
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
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(19);
      if (lookahead == '!') ADVANCE(10);
      if (lookahead == '"') ADVANCE(35);
      if (lookahead == '%') ADVANCE(13);
      if (lookahead == '\'') ADVANCE(32);
      if (lookahead == ',') ADVANCE(55);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == '.') ADVANCE(43);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == '<') ADVANCE(50);
      if (lookahead == '=') ADVANCE(41);
      if (lookahead == '>') ADVANCE(49);
      if (lookahead == '[') ADVANCE(44);
      if (lookahead == ']') ADVANCE(45);
      if (lookahead == '{') ADVANCE(4);
      if (lookahead == '|') ADVANCE(53);
      if (lookahead == '}') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(10);
      if (lookahead == '"') ADVANCE(35);
      if (lookahead == '%') ADVANCE(13);
      if (lookahead == '\'') ADVANCE(32);
      if (lookahead == ',') ADVANCE(55);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == '<') ADVANCE(50);
      if (lookahead == '=') ADVANCE(11);
      if (lookahead == '>') ADVANCE(49);
      if (lookahead == ']') ADVANCE(45);
      if (lookahead == '{') ADVANCE(7);
      if (lookahead == '|') ADVANCE(53);
      if (lookahead == '}') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(10);
      if (lookahead == '%') ADVANCE(13);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '.') ADVANCE(42);
      if (lookahead == '<') ADVANCE(50);
      if (lookahead == '=') ADVANCE(11);
      if (lookahead == '>') ADVANCE(49);
      if (lookahead == '[') ADVANCE(44);
      if (lookahead == '|') ADVANCE(53);
      if (lookahead == '}') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '%') ADVANCE(24);
      if (lookahead == '{') ADVANCE(20);
      END_STATE();
    case 5:
      if (lookahead == '%') ADVANCE(5);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == '}') ADVANCE(30);
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
      if (lookahead == '%') ADVANCE(25);
      END_STATE();
    case 8:
      if (lookahead == '%') ADVANCE(15);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == '}') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 9:
      if (lookahead == '%') ADVANCE(15);
      if (lookahead == '}') ADVANCE(16);
      END_STATE();
    case 10:
      if (lookahead == '=') ADVANCE(48);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(47);
      END_STATE();
    case 12:
      if (lookahead == '=') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      END_STATE();
    case 13:
      if (lookahead == '}') ADVANCE(28);
      END_STATE();
    case 14:
      if (lookahead == '}') ADVANCE(22);
      END_STATE();
    case 15:
      if (lookahead == '}') ADVANCE(29);
      END_STATE();
    case 16:
      if (lookahead == '}') ADVANCE(23);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 18:
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(6);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead == '-') ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE_DASH);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_DASH_RBRACE_RBRACE);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENT);
      if (lookahead == '#') ADVANCE(18);
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENT);
      if (lookahead == '-') ADVANCE(26);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENT_DASH);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENT_DASH);
      if (lookahead == '#') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_PERCENT_RBRACE);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_DASH_PERCENT_RBRACE);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '%') ADVANCE(5);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(6);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_trim);
      if (lookahead == '%') ADVANCE(15);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == '}') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(34);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(37);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(47);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(51);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(52);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_COMMA);
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
      if (lookahead == 's') ADVANCE(10);
      END_STATE();
    case 2:
      if (lookahead == 'o') ADVANCE(11);
      END_STATE();
    case 3:
      if (lookahead == 'l') ADVANCE(12);
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(14);
      END_STATE();
    case 5:
      if (lookahead == 'f') ADVANCE(15);
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 6:
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 8:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 9:
      if (lookahead == 'd') ADVANCE(20);
      END_STATE();
    case 10:
      if (lookahead == 's') ADVANCE(21);
      END_STATE();
    case 11:
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 12:
      if (lookahead == 's') ADVANCE(23);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(24);
      END_STATE();
    case 14:
      if (lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 16:
      if (lookahead == 'c') ADVANCE(26);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 18:
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 19:
      if (lookahead == 'u') ADVANCE(28);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 21:
      if (lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 22:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 24:
      if (lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 25:
      if (lookahead == 's') ADVANCE(33);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(34);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(35);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 29:
      if (lookahead == 'g') ADVANCE(37);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 32:
      if (lookahead == 'f') ADVANCE(40);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 34:
      if (lookahead == 'u') ADVANCE(42);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 37:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 39:
      if (lookahead == 'f') ADVANCE(46);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_endif);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 42:
      if (lookahead == 'd') ADVANCE(47);
      END_STATE();
    case 43:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_assign);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_elseif);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_render);
      END_STATE();
    case 49:
      if (lookahead == 's') ADVANCE(51);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 51:
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
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 12},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 33},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 36},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
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
    [anon_sym_assign] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
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
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_contains_operator] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_render] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_endif] = ACTIONS(1),
    [anon_sym_elseif] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(115),
    [sym__statement] = STATE(65),
    [sym__control_flow] = STATE(65),
    [sym_if_expression] = STATE(65),
    [aux_sym_program_repeat1] = STATE(41),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(5),
    [anon_sym_LBRACE_LBRACE_DASH] = ACTIONS(7),
    [anon_sym_LBRACE_PERCENT] = ACTIONS(9),
    [anon_sym_LBRACE_PERCENT_DASH] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_token1,
    ACTIONS(23), 1,
      anon_sym_assign,
    ACTIONS(25), 1,
      anon_sym_include,
    ACTIONS(27), 1,
      anon_sym_render,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_endif,
    ACTIONS(33), 1,
      anon_sym_elseif,
    ACTIONS(35), 1,
      anon_sym_else,
    STATE(95), 1,
      sym_assignment,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(35), 10,
      sym__literal,
      sym_string,
      sym_number,
      sym_boolean,
      sym__expression,
      sym_access,
      sym_filter,
      sym_include_expression,
      sym_render_expression,
      sym_binary_expression,
  [53] = 14,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_token1,
    ACTIONS(23), 1,
      anon_sym_assign,
    ACTIONS(25), 1,
      anon_sym_include,
    ACTIONS(27), 1,
      anon_sym_render,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(33), 1,
      anon_sym_elseif,
    ACTIONS(35), 1,
      anon_sym_else,
    ACTIONS(37), 1,
      anon_sym_endif,
    STATE(95), 1,
      sym_assignment,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(35), 10,
      sym__literal,
      sym_string,
      sym_number,
      sym_boolean,
      sym__expression,
      sym_access,
      sym_filter,
      sym_include_expression,
      sym_render_expression,
      sym_binary_expression,
  [106] = 11,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_token1,
    ACTIONS(23), 1,
      anon_sym_assign,
    ACTIONS(25), 1,
      anon_sym_include,
    ACTIONS(27), 1,
      anon_sym_render,
    ACTIONS(29), 1,
      anon_sym_if,
    STATE(95), 1,
      sym_assignment,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(35), 10,
      sym__literal,
      sym_string,
      sym_number,
      sym_boolean,
      sym__expression,
      sym_access,
      sym_filter,
      sym_include_expression,
      sym_render_expression,
      sym_binary_expression,
  [150] = 10,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_token1,
    ACTIONS(23), 1,
      anon_sym_assign,
    ACTIONS(25), 1,
      anon_sym_include,
    ACTIONS(27), 1,
      anon_sym_render,
    STATE(83), 1,
      sym_assignment,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(33), 10,
      sym__literal,
      sym_string,
      sym_number,
      sym_boolean,
      sym__expression,
      sym_access,
      sym_filter,
      sym_include_expression,
      sym_render_expression,
      sym_binary_expression,
  [191] = 8,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_token1,
    ACTIONS(25), 1,
      anon_sym_include,
    ACTIONS(27), 1,
      anon_sym_render,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(32), 10,
      sym__literal,
      sym_string,
      sym_number,
      sym_boolean,
      sym__expression,
      sym_access,
      sym_filter,
      sym_include_expression,
      sym_render_expression,
      sym_binary_expression,
  [226] = 8,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_token1,
    ACTIONS(25), 1,
      anon_sym_include,
    ACTIONS(27), 1,
      anon_sym_render,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(23), 10,
      sym__literal,
      sym_string,
      sym_number,
      sym_boolean,
      sym__expression,
      sym_access,
      sym_filter,
      sym_include_expression,
      sym_render_expression,
      sym_binary_expression,
  [261] = 8,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_token1,
    ACTIONS(25), 1,
      anon_sym_include,
    ACTIONS(27), 1,
      anon_sym_render,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(34), 10,
      sym__literal,
      sym_string,
      sym_number,
      sym_boolean,
      sym__expression,
      sym_access,
      sym_filter,
      sym_include_expression,
      sym_render_expression,
      sym_binary_expression,
  [296] = 8,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_token1,
    ACTIONS(25), 1,
      anon_sym_include,
    ACTIONS(27), 1,
      anon_sym_render,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 10,
      sym__literal,
      sym_string,
      sym_number,
      sym_boolean,
      sym__expression,
      sym_access,
      sym_filter,
      sym_include_expression,
      sym_render_expression,
      sym_binary_expression,
  [331] = 5,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(44), 1,
      anon_sym_LBRACK,
    STATE(10), 1,
      aux_sym_access_repeat1,
    ACTIONS(47), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(39), 12,
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
      anon_sym_PIPE,
      sym_contains_operator,
  [359] = 5,
    ACTIONS(53), 1,
      anon_sym_COLON,
    ACTIONS(55), 1,
      anon_sym_COMMA,
    STATE(18), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(51), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(49), 12,
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
      anon_sym_PIPE,
      sym_contains_operator,
  [387] = 5,
    ACTIONS(59), 1,
      anon_sym_DOT,
    ACTIONS(61), 1,
      anon_sym_LBRACK,
    STATE(10), 1,
      aux_sym_access_repeat1,
    ACTIONS(63), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(57), 12,
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
      anon_sym_PIPE,
      sym_contains_operator,
  [415] = 5,
    ACTIONS(59), 1,
      anon_sym_DOT,
    ACTIONS(61), 1,
      anon_sym_LBRACK,
    STATE(12), 1,
      aux_sym_access_repeat1,
    ACTIONS(67), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(65), 12,
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
      anon_sym_PIPE,
      sym_contains_operator,
  [443] = 2,
    ACTIONS(71), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(69), 14,
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
      anon_sym_PIPE,
      anon_sym_COMMA,
      sym_contains_operator,
  [464] = 4,
    ACTIONS(55), 1,
      anon_sym_COMMA,
    STATE(18), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(51), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(49), 12,
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
      anon_sym_PIPE,
      sym_contains_operator,
  [489] = 3,
    ACTIONS(53), 1,
      anon_sym_COLON,
    ACTIONS(75), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(73), 13,
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
      anon_sym_PIPE,
      anon_sym_COMMA,
      sym_contains_operator,
  [512] = 2,
    ACTIONS(79), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(77), 14,
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
      anon_sym_PIPE,
      sym_contains_operator,
  [533] = 4,
    ACTIONS(55), 1,
      anon_sym_COMMA,
    STATE(19), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(83), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(81), 12,
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
      anon_sym_PIPE,
      sym_contains_operator,
  [558] = 4,
    ACTIONS(85), 1,
      anon_sym_COMMA,
    STATE(19), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(75), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(73), 12,
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
      anon_sym_PIPE,
      sym_contains_operator,
  [583] = 2,
    ACTIONS(90), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(88), 14,
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
      anon_sym_PIPE,
      sym_contains_operator,
  [604] = 2,
    ACTIONS(75), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(73), 13,
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
      anon_sym_PIPE,
      anon_sym_COMMA,
      sym_contains_operator,
  [624] = 2,
    ACTIONS(94), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(92), 13,
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
      anon_sym_PIPE,
      anon_sym_COMMA,
      sym_contains_operator,
  [644] = 6,
    ACTIONS(102), 1,
      anon_sym_PIPE,
    ACTIONS(104), 1,
      sym_contains_operator,
    STATE(9), 1,
      sym_binary_operator,
    ACTIONS(100), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(96), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
    ACTIONS(98), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_or,
      anon_sym_and,
  [672] = 5,
    ACTIONS(104), 1,
      sym_contains_operator,
    STATE(9), 1,
      sym_binary_operator,
    ACTIONS(100), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(106), 5,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_PIPE,
    ACTIONS(98), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_or,
      anon_sym_and,
  [698] = 3,
    ACTIONS(112), 1,
      anon_sym_COLON,
    ACTIONS(110), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(108), 12,
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
      anon_sym_PIPE,
      sym_contains_operator,
  [720] = 2,
    ACTIONS(116), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(114), 13,
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
      anon_sym_PIPE,
      anon_sym_COMMA,
      sym_contains_operator,
  [740] = 2,
    ACTIONS(120), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(118), 13,
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
      anon_sym_PIPE,
      anon_sym_COMMA,
      sym_contains_operator,
  [760] = 2,
    ACTIONS(124), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(122), 12,
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
      anon_sym_PIPE,
      sym_contains_operator,
  [779] = 2,
    ACTIONS(128), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(126), 12,
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
      anon_sym_PIPE,
      sym_contains_operator,
  [798] = 2,
    ACTIONS(132), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(130), 12,
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
      anon_sym_PIPE,
      sym_contains_operator,
  [817] = 2,
    ACTIONS(134), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(106), 12,
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
      anon_sym_PIPE,
      sym_contains_operator,
  [836] = 6,
    ACTIONS(102), 1,
      anon_sym_PIPE,
    ACTIONS(104), 1,
      sym_contains_operator,
    STATE(9), 1,
      sym_binary_operator,
    ACTIONS(100), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(136), 2,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
    ACTIONS(98), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_or,
      anon_sym_and,
  [862] = 6,
    ACTIONS(102), 1,
      anon_sym_PIPE,
    ACTIONS(104), 1,
      sym_contains_operator,
    STATE(9), 1,
      sym_binary_operator,
    ACTIONS(100), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(138), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
    ACTIONS(98), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_or,
      anon_sym_and,
  [888] = 6,
    ACTIONS(102), 1,
      anon_sym_PIPE,
    ACTIONS(104), 1,
      sym_contains_operator,
    STATE(9), 1,
      sym_binary_operator,
    ACTIONS(100), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(140), 2,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
    ACTIONS(98), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_or,
      anon_sym_and,
  [914] = 6,
    ACTIONS(102), 1,
      anon_sym_PIPE,
    ACTIONS(104), 1,
      sym_contains_operator,
    STATE(9), 1,
      sym_binary_operator,
    ACTIONS(100), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(138), 2,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
    ACTIONS(98), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_or,
      anon_sym_and,
  [940] = 9,
    ACTIONS(5), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    ACTIONS(11), 1,
      sym_comment,
    STATE(40), 1,
      aux_sym_program_repeat1,
    STATE(70), 1,
      aux_sym_if_expression_repeat1,
    STATE(84), 1,
      sym_elseif_expression,
    STATE(88), 1,
      sym_else_expression,
    ACTIONS(142), 2,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(65), 3,
      sym__statement,
      sym__control_flow,
      sym_if_expression,
  [971] = 9,
    ACTIONS(5), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    ACTIONS(11), 1,
      sym_comment,
    STATE(36), 1,
      aux_sym_program_repeat1,
    STATE(71), 1,
      aux_sym_if_expression_repeat1,
    STATE(84), 1,
      sym_elseif_expression,
    STATE(85), 1,
      sym_else_expression,
    ACTIONS(144), 2,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(65), 3,
      sym__statement,
      sym__control_flow,
      sym_if_expression,
  [1002] = 7,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_token1,
    ACTIONS(146), 1,
      sym_identifier,
    STATE(29), 1,
      sym_argument_list,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(15), 5,
      sym__literal,
      sym_string,
      sym_number,
      sym_boolean,
      sym_argument,
  [1029] = 6,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_token1,
    ACTIONS(148), 1,
      sym_identifier,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(21), 5,
      sym__literal,
      sym_string,
      sym_number,
      sym_boolean,
      sym_argument,
  [1053] = 7,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    ACTIONS(152), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(155), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    ACTIONS(161), 1,
      sym_comment,
    STATE(40), 1,
      aux_sym_program_repeat1,
    ACTIONS(158), 2,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(65), 3,
      sym__statement,
      sym__control_flow,
      sym_if_expression,
  [1078] = 7,
    ACTIONS(5), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(164), 1,
      ts_builtin_sym_end,
    STATE(40), 1,
      aux_sym_program_repeat1,
    ACTIONS(9), 2,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(65), 3,
      sym__statement,
      sym__control_flow,
      sym_if_expression,
  [1103] = 6,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_token1,
    ACTIONS(166), 1,
      sym_identifier,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(22), 4,
      sym__literal,
      sym_string,
      sym_number,
      sym_boolean,
  [1126] = 6,
    ACTIONS(5), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    ACTIONS(11), 1,
      sym_comment,
    STATE(46), 1,
      aux_sym_program_repeat1,
    ACTIONS(168), 2,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(65), 3,
      sym__statement,
      sym__control_flow,
      sym_if_expression,
  [1148] = 6,
    ACTIONS(5), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    ACTIONS(11), 1,
      sym_comment,
    STATE(45), 1,
      aux_sym_program_repeat1,
    ACTIONS(170), 2,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(65), 3,
      sym__statement,
      sym__control_flow,
      sym_if_expression,
  [1170] = 6,
    ACTIONS(5), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    ACTIONS(11), 1,
      sym_comment,
    STATE(40), 1,
      aux_sym_program_repeat1,
    ACTIONS(172), 2,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(65), 3,
      sym__statement,
      sym__control_flow,
      sym_if_expression,
  [1192] = 6,
    ACTIONS(5), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    ACTIONS(11), 1,
      sym_comment,
    STATE(40), 1,
      aux_sym_program_repeat1,
    ACTIONS(174), 2,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(65), 3,
      sym__statement,
      sym__control_flow,
      sym_if_expression,
  [1214] = 2,
    ACTIONS(178), 3,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      aux_sym_number_token1,
    ACTIONS(176), 5,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
      anon_sym_include,
      anon_sym_render,
  [1227] = 2,
    ACTIONS(180), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE_DASH,
      sym_comment,
    ACTIONS(182), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
  [1238] = 2,
    ACTIONS(180), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE_DASH,
      sym_comment,
    ACTIONS(182), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
  [1249] = 2,
    ACTIONS(184), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE_DASH,
      sym_comment,
    ACTIONS(186), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
  [1260] = 2,
    ACTIONS(184), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE_DASH,
      sym_comment,
    ACTIONS(186), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
  [1271] = 2,
    ACTIONS(188), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE_DASH,
      sym_comment,
    ACTIONS(190), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
  [1282] = 2,
    ACTIONS(184), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE_DASH,
      sym_comment,
    ACTIONS(186), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
  [1293] = 2,
    ACTIONS(192), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE_DASH,
      sym_comment,
    ACTIONS(194), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
  [1304] = 2,
    ACTIONS(192), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE_DASH,
      sym_comment,
    ACTIONS(194), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
  [1315] = 2,
    ACTIONS(196), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE_DASH,
      sym_comment,
    ACTIONS(198), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
  [1326] = 2,
    ACTIONS(192), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE_DASH,
      sym_comment,
    ACTIONS(194), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
  [1337] = 2,
    ACTIONS(192), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE_DASH,
      sym_comment,
    ACTIONS(194), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
  [1348] = 2,
    ACTIONS(200), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE_DASH,
      sym_comment,
    ACTIONS(202), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
  [1359] = 2,
    ACTIONS(204), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE_DASH,
      sym_comment,
    ACTIONS(206), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
  [1370] = 2,
    ACTIONS(180), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE_DASH,
      sym_comment,
    ACTIONS(182), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
  [1381] = 2,
    ACTIONS(180), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE_DASH,
      sym_comment,
    ACTIONS(182), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
  [1392] = 2,
    ACTIONS(204), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE_DASH,
      sym_comment,
    ACTIONS(206), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
  [1403] = 2,
    ACTIONS(184), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE_DASH,
      sym_comment,
    ACTIONS(186), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
  [1414] = 2,
    ACTIONS(208), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE_DASH,
      sym_comment,
    ACTIONS(210), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
  [1425] = 2,
    ACTIONS(212), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE_DASH,
      sym_comment,
    ACTIONS(214), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
  [1436] = 2,
    ACTIONS(204), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE_DASH,
      sym_comment,
    ACTIONS(206), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
  [1447] = 2,
    ACTIONS(204), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE_DASH,
      sym_comment,
    ACTIONS(206), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
  [1458] = 2,
    ACTIONS(216), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE_DASH,
      sym_comment,
    ACTIONS(218), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
  [1469] = 5,
    ACTIONS(220), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(222), 1,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(72), 1,
      aux_sym_if_expression_repeat1,
    STATE(84), 1,
      sym_elseif_expression,
    STATE(97), 1,
      sym_else_expression,
  [1485] = 5,
    ACTIONS(224), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(226), 1,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(72), 1,
      aux_sym_if_expression_repeat1,
    STATE(81), 1,
      sym_else_expression,
    STATE(84), 1,
      sym_elseif_expression,
  [1501] = 4,
    ACTIONS(228), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(231), 1,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(72), 1,
      aux_sym_if_expression_repeat1,
    STATE(84), 1,
      sym_elseif_expression,
  [1514] = 3,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    STATE(31), 1,
      sym_string,
  [1524] = 3,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    STATE(28), 1,
      sym_string,
  [1534] = 3,
    ACTIONS(35), 1,
      anon_sym_else,
    ACTIONS(234), 1,
      anon_sym_endif,
    ACTIONS(236), 1,
      anon_sym_elseif,
  [1544] = 3,
    ACTIONS(35), 1,
      anon_sym_else,
    ACTIONS(236), 1,
      anon_sym_elseif,
    ACTIONS(238), 1,
      anon_sym_endif,
  [1554] = 3,
    ACTIONS(35), 1,
      anon_sym_else,
    ACTIONS(236), 1,
      anon_sym_elseif,
    ACTIONS(240), 1,
      anon_sym_endif,
  [1564] = 3,
    ACTIONS(35), 1,
      anon_sym_else,
    ACTIONS(236), 1,
      anon_sym_elseif,
    ACTIONS(242), 1,
      anon_sym_endif,
  [1574] = 3,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    STATE(117), 1,
      sym_string,
  [1584] = 3,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    STATE(30), 1,
      sym_string,
  [1594] = 2,
    ACTIONS(244), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(246), 1,
      anon_sym_LBRACE_PERCENT_DASH,
  [1601] = 2,
    ACTIONS(248), 1,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(250), 1,
      anon_sym_DASH_PERCENT_RBRACE,
  [1608] = 1,
    ACTIONS(138), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [1613] = 2,
    ACTIONS(252), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(254), 1,
      anon_sym_LBRACE_PERCENT_DASH,
  [1620] = 2,
    ACTIONS(256), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(258), 1,
      anon_sym_LBRACE_PERCENT_DASH,
  [1627] = 1,
    ACTIONS(260), 2,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [1632] = 1,
    ACTIONS(262), 2,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [1637] = 2,
    ACTIONS(264), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(266), 1,
      anon_sym_LBRACE_PERCENT_DASH,
  [1644] = 2,
    ACTIONS(268), 1,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(270), 1,
      anon_sym_DASH_PERCENT_RBRACE,
  [1651] = 2,
    ACTIONS(272), 1,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(274), 1,
      anon_sym_DASH_PERCENT_RBRACE,
  [1658] = 1,
    ACTIONS(276), 2,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [1663] = 2,
    ACTIONS(278), 1,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(280), 1,
      anon_sym_DASH_PERCENT_RBRACE,
  [1670] = 2,
    ACTIONS(282), 1,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(284), 1,
      anon_sym_DASH_PERCENT_RBRACE,
  [1677] = 2,
    ACTIONS(286), 1,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(288), 1,
      anon_sym_DASH_PERCENT_RBRACE,
  [1684] = 1,
    ACTIONS(138), 2,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [1689] = 2,
    ACTIONS(290), 1,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(292), 1,
      anon_sym_DASH_PERCENT_RBRACE,
  [1696] = 2,
    ACTIONS(294), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(296), 1,
      anon_sym_LBRACE_PERCENT_DASH,
  [1703] = 1,
    ACTIONS(298), 2,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [1708] = 1,
    ACTIONS(300), 2,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [1713] = 2,
    ACTIONS(302), 1,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(304), 1,
      anon_sym_DASH_PERCENT_RBRACE,
  [1720] = 1,
    ACTIONS(236), 1,
      anon_sym_elseif,
  [1724] = 1,
    ACTIONS(306), 1,
      anon_sym_endif,
  [1728] = 1,
    ACTIONS(308), 1,
      anon_sym_endif,
  [1732] = 1,
    ACTIONS(310), 1,
      anon_sym_SQUOTE,
  [1736] = 1,
    ACTIONS(310), 1,
      anon_sym_DQUOTE,
  [1740] = 1,
    ACTIONS(312), 1,
      anon_sym_EQ,
  [1744] = 1,
    ACTIONS(314), 1,
      sym_identifier,
  [1748] = 1,
    ACTIONS(316), 1,
      anon_sym_endif,
  [1752] = 1,
    ACTIONS(318), 1,
      anon_sym_endif,
  [1756] = 1,
    ACTIONS(320), 1,
      aux_sym_string_token1,
  [1760] = 1,
    ACTIONS(322), 1,
      anon_sym_endif,
  [1764] = 1,
    ACTIONS(324), 1,
      aux_sym_string_token2,
  [1768] = 1,
    ACTIONS(326), 1,
      sym_identifier,
  [1772] = 1,
    ACTIONS(328), 1,
      sym_identifier,
  [1776] = 1,
    ACTIONS(330), 1,
      ts_builtin_sym_end,
  [1780] = 1,
    ACTIONS(332), 1,
      anon_sym_endif,
  [1784] = 1,
    ACTIONS(334), 1,
      anon_sym_RBRACK,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 53,
  [SMALL_STATE(4)] = 106,
  [SMALL_STATE(5)] = 150,
  [SMALL_STATE(6)] = 191,
  [SMALL_STATE(7)] = 226,
  [SMALL_STATE(8)] = 261,
  [SMALL_STATE(9)] = 296,
  [SMALL_STATE(10)] = 331,
  [SMALL_STATE(11)] = 359,
  [SMALL_STATE(12)] = 387,
  [SMALL_STATE(13)] = 415,
  [SMALL_STATE(14)] = 443,
  [SMALL_STATE(15)] = 464,
  [SMALL_STATE(16)] = 489,
  [SMALL_STATE(17)] = 512,
  [SMALL_STATE(18)] = 533,
  [SMALL_STATE(19)] = 558,
  [SMALL_STATE(20)] = 583,
  [SMALL_STATE(21)] = 604,
  [SMALL_STATE(22)] = 624,
  [SMALL_STATE(23)] = 644,
  [SMALL_STATE(24)] = 672,
  [SMALL_STATE(25)] = 698,
  [SMALL_STATE(26)] = 720,
  [SMALL_STATE(27)] = 740,
  [SMALL_STATE(28)] = 760,
  [SMALL_STATE(29)] = 779,
  [SMALL_STATE(30)] = 798,
  [SMALL_STATE(31)] = 817,
  [SMALL_STATE(32)] = 836,
  [SMALL_STATE(33)] = 862,
  [SMALL_STATE(34)] = 888,
  [SMALL_STATE(35)] = 914,
  [SMALL_STATE(36)] = 940,
  [SMALL_STATE(37)] = 971,
  [SMALL_STATE(38)] = 1002,
  [SMALL_STATE(39)] = 1029,
  [SMALL_STATE(40)] = 1053,
  [SMALL_STATE(41)] = 1078,
  [SMALL_STATE(42)] = 1103,
  [SMALL_STATE(43)] = 1126,
  [SMALL_STATE(44)] = 1148,
  [SMALL_STATE(45)] = 1170,
  [SMALL_STATE(46)] = 1192,
  [SMALL_STATE(47)] = 1214,
  [SMALL_STATE(48)] = 1227,
  [SMALL_STATE(49)] = 1238,
  [SMALL_STATE(50)] = 1249,
  [SMALL_STATE(51)] = 1260,
  [SMALL_STATE(52)] = 1271,
  [SMALL_STATE(53)] = 1282,
  [SMALL_STATE(54)] = 1293,
  [SMALL_STATE(55)] = 1304,
  [SMALL_STATE(56)] = 1315,
  [SMALL_STATE(57)] = 1326,
  [SMALL_STATE(58)] = 1337,
  [SMALL_STATE(59)] = 1348,
  [SMALL_STATE(60)] = 1359,
  [SMALL_STATE(61)] = 1370,
  [SMALL_STATE(62)] = 1381,
  [SMALL_STATE(63)] = 1392,
  [SMALL_STATE(64)] = 1403,
  [SMALL_STATE(65)] = 1414,
  [SMALL_STATE(66)] = 1425,
  [SMALL_STATE(67)] = 1436,
  [SMALL_STATE(68)] = 1447,
  [SMALL_STATE(69)] = 1458,
  [SMALL_STATE(70)] = 1469,
  [SMALL_STATE(71)] = 1485,
  [SMALL_STATE(72)] = 1501,
  [SMALL_STATE(73)] = 1514,
  [SMALL_STATE(74)] = 1524,
  [SMALL_STATE(75)] = 1534,
  [SMALL_STATE(76)] = 1544,
  [SMALL_STATE(77)] = 1554,
  [SMALL_STATE(78)] = 1564,
  [SMALL_STATE(79)] = 1574,
  [SMALL_STATE(80)] = 1584,
  [SMALL_STATE(81)] = 1594,
  [SMALL_STATE(82)] = 1601,
  [SMALL_STATE(83)] = 1608,
  [SMALL_STATE(84)] = 1613,
  [SMALL_STATE(85)] = 1620,
  [SMALL_STATE(86)] = 1627,
  [SMALL_STATE(87)] = 1632,
  [SMALL_STATE(88)] = 1637,
  [SMALL_STATE(89)] = 1644,
  [SMALL_STATE(90)] = 1651,
  [SMALL_STATE(91)] = 1658,
  [SMALL_STATE(92)] = 1663,
  [SMALL_STATE(93)] = 1670,
  [SMALL_STATE(94)] = 1677,
  [SMALL_STATE(95)] = 1684,
  [SMALL_STATE(96)] = 1689,
  [SMALL_STATE(97)] = 1696,
  [SMALL_STATE(98)] = 1703,
  [SMALL_STATE(99)] = 1708,
  [SMALL_STATE(100)] = 1713,
  [SMALL_STATE(101)] = 1720,
  [SMALL_STATE(102)] = 1724,
  [SMALL_STATE(103)] = 1728,
  [SMALL_STATE(104)] = 1732,
  [SMALL_STATE(105)] = 1736,
  [SMALL_STATE(106)] = 1740,
  [SMALL_STATE(107)] = 1744,
  [SMALL_STATE(108)] = 1748,
  [SMALL_STATE(109)] = 1752,
  [SMALL_STATE(110)] = 1756,
  [SMALL_STATE(111)] = 1760,
  [SMALL_STATE(112)] = 1764,
  [SMALL_STATE(113)] = 1768,
  [SMALL_STATE(114)] = 1772,
  [SMALL_STATE(115)] = 1776,
  [SMALL_STATE(116)] = 1780,
  [SMALL_STATE(117)] = 1784,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_access_repeat1, 2, .production_id = 5),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_access_repeat1, 2, .production_id = 5), SHIFT_REPEAT(107),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_access_repeat1, 2, .production_id = 5), SHIFT_REPEAT(79),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_access_repeat1, 2, .production_id = 5),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 1),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access, 2, .production_id = 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_access, 2, .production_id = 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_access_repeat1, 3, .production_id = 4),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_access_repeat1, 3, .production_id = 4),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(39),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_access_repeat1, 2, .production_id = 4),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_access_repeat1, 2, .production_id = 4),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 3, .production_id = 11),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 3, .production_id = 11),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4, .production_id = 7),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 3, .production_id = 6),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter, 3, .production_id = 6),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_render_expression, 2, .production_id = 3),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_render_expression, 2, .production_id = 3),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 5, .production_id = 6),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter, 5, .production_id = 6),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_expression, 2, .production_id = 2),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_expression, 2, .production_id = 2),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(65),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_expression, 3),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elseif_expression, 4, .production_id = 10),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elseif_expression, 5, .production_id = 14),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_expression, 4, .production_id = 12),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operator, 1),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operator, 1),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expression, 8, .production_id = 15),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expression, 8, .production_id = 15),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expression, 10, .production_id = 19),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expression, 10, .production_id = 19),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expression, 8, .production_id = 13),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expression, 8, .production_id = 13),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expression, 9, .production_id = 18),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expression, 9, .production_id = 18),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 3),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 3),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expression, 8, .production_id = 14),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expression, 8, .production_id = 14),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expression, 9, .production_id = 17),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expression, 9, .production_id = 17),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 1),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 1),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expression, 9, .production_id = 16),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expression, 9, .production_id = 16),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expression, 7, .production_id = 10),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expression, 7, .production_id = 10),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [228] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_expression_repeat1, 2, .production_id = 9), SHIFT_REPEAT(101),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_expression_repeat1, 2, .production_id = 9), SHIFT_REPEAT(101),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_expression_repeat1, 1, .production_id = 8),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_expression_repeat1, 1, .production_id = 8),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [330] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
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
