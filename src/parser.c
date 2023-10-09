#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 119
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 67
#define ALIAS_COUNT 1
#define TOKEN_COUNT 42
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 16
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 21

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
  anon_sym_contains = 30,
  anon_sym_or = 31,
  anon_sym_and = 32,
  anon_sym_PIPE = 33,
  anon_sym_COLON = 34,
  anon_sym_COMMA = 35,
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
  sym_comparision_operator = 52,
  sym_logical_operator = 53,
  sym_filter = 54,
  sym_argument_list = 55,
  sym_argument = 56,
  sym_include_expression = 57,
  sym_render_expression = 58,
  sym_binary_expression = 59,
  sym_if_expression = 60,
  sym_elseif_expression = 61,
  sym_else_expression = 62,
  aux_sym_program_repeat1 = 63,
  aux_sym_access_repeat1 = 64,
  aux_sym_argument_list_repeat1 = 65,
  aux_sym_if_expression_repeat1 = 66,
  alias_sym_block = 67,
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
  [anon_sym_contains] = "contains",
  [anon_sym_or] = "or",
  [anon_sym_and] = "and",
  [anon_sym_PIPE] = "|",
  [anon_sym_COLON] = ":",
  [anon_sym_COMMA] = ",",
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
  [sym_comparision_operator] = "comparision_operator",
  [sym_logical_operator] = "logical_operator",
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
  [anon_sym_contains] = anon_sym_contains,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_COMMA] = anon_sym_COMMA,
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
  [sym_comparision_operator] = sym_comparision_operator,
  [sym_logical_operator] = sym_logical_operator,
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
  [anon_sym_contains] = {
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
  [sym_comparision_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_logical_operator] = {
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
  field_left = 9,
  field_name = 10,
  field_operand = 11,
  field_operator = 12,
  field_render = 13,
  field_rendered_file = 14,
  field_right = 15,
  field_value = 16,
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
  [field_left] = "left",
  [field_name] = "name",
  [field_operand] = "operand",
  [field_operator] = "operator",
  [field_render] = "render",
  [field_rendered_file] = "rendered_file",
  [field_right] = "right",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
  [3] = {.index = 4, .length = 2},
  [4] = {.index = 6, .length = 1},
  [5] = {.index = 7, .length = 2},
  [6] = {.index = 9, .length = 2},
  [7] = {.index = 11, .length = 3},
  [8] = {.index = 14, .length = 2},
  [9] = {.index = 16, .length = 1},
  [10] = {.index = 17, .length = 2},
  [11] = {.index = 19, .length = 1},
  [12] = {.index = 20, .length = 2},
  [13] = {.index = 22, .length = 1},
  [14] = {.index = 23, .length = 2},
  [15] = {.index = 25, .length = 2},
  [16] = {.index = 27, .length = 2},
  [17] = {.index = 29, .length = 3},
  [18] = {.index = 32, .length = 3},
  [19] = {.index = 35, .length = 3},
  [20] = {.index = 38, .length = 4},
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
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [14] =
    {field_left, 1},
    {field_right, 3},
  [16] =
    {field_alternatives, 0},
  [17] =
    {field_alternatives, 0, .inherited = true},
    {field_alternatives, 1, .inherited = true},
  [19] =
    {field_condition, 2},
  [20] =
    {field_key, 0},
    {field_value, 2},
  [22] =
    {field_consequence, 3},
  [23] =
    {field_alternatives, 4},
    {field_condition, 2},
  [25] =
    {field_condition, 2},
    {field_consequence, 4},
  [27] =
    {field_alternatives, 4, .inherited = true},
    {field_condition, 2},
  [29] =
    {field_alternatives, 5},
    {field_condition, 2},
    {field_consequence, 4},
  [32] =
    {field_alternatives, 5, .inherited = true},
    {field_condition, 2},
    {field_consequence, 4},
  [35] =
    {field_alternatives, 4, .inherited = true},
    {field_alternatives, 5},
    {field_condition, 2},
  [38] =
    {field_alternatives, 5, .inherited = true},
    {field_alternatives, 6},
    {field_condition, 2},
    {field_consequence, 4},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [13] = {
    [3] = alias_sym_block,
  },
  [15] = {
    [4] = alias_sym_block,
  },
  [17] = {
    [4] = alias_sym_block,
  },
  [18] = {
    [4] = alias_sym_block,
  },
  [20] = {
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
  [118] = 118,
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
      ACCEPT_TOKEN(anon_sym_contains);
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
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
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
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 1},
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
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
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
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 12},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 33},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 36},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
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
    [anon_sym_contains] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_render] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_endif] = ACTIONS(1),
    [anon_sym_elseif] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(116),
    [sym__statement] = STATE(51),
    [sym__control_flow] = STATE(51),
    [sym_if_expression] = STATE(51),
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
    STATE(96), 1,
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
    STATE(96), 1,
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
    STATE(96), 1,
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
    STATE(84), 1,
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
    STATE(21), 10,
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
  [331] = 8,
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
    STATE(36), 10,
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
  [366] = 5,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    STATE(12), 1,
      aux_sym_access_repeat1,
    ACTIONS(45), 2,
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
      anon_sym_contains,
      anon_sym_or,
      anon_sym_and,
      anon_sym_PIPE,
  [394] = 5,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    STATE(13), 1,
      aux_sym_access_repeat1,
    ACTIONS(49), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(47), 12,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_contains,
      anon_sym_or,
      anon_sym_and,
      anon_sym_PIPE,
  [422] = 5,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(56), 1,
      anon_sym_LBRACK,
    STATE(13), 1,
      aux_sym_access_repeat1,
    ACTIONS(59), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(51), 12,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_contains,
      anon_sym_or,
      anon_sym_and,
      anon_sym_PIPE,
  [450] = 5,
    ACTIONS(65), 1,
      anon_sym_COLON,
    ACTIONS(67), 1,
      anon_sym_COMMA,
    STATE(15), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(63), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(61), 12,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_contains,
      anon_sym_or,
      anon_sym_and,
      anon_sym_PIPE,
  [478] = 4,
    ACTIONS(67), 1,
      anon_sym_COMMA,
    STATE(22), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(71), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(69), 12,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_contains,
      anon_sym_or,
      anon_sym_and,
      anon_sym_PIPE,
  [503] = 3,
    ACTIONS(65), 1,
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
      anon_sym_contains,
      anon_sym_or,
      anon_sym_and,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [526] = 2,
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
      anon_sym_contains,
      anon_sym_or,
      anon_sym_and,
      anon_sym_PIPE,
  [547] = 2,
    ACTIONS(83), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(81), 14,
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
      anon_sym_contains,
      anon_sym_or,
      anon_sym_and,
      anon_sym_PIPE,
  [568] = 2,
    ACTIONS(87), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(85), 14,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_RBRACK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_contains,
      anon_sym_or,
      anon_sym_and,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [589] = 4,
    ACTIONS(67), 1,
      anon_sym_COMMA,
    STATE(15), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(63), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(61), 12,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_contains,
      anon_sym_or,
      anon_sym_and,
      anon_sym_PIPE,
  [614] = 7,
    ACTIONS(97), 1,
      anon_sym_PIPE,
    STATE(8), 1,
      sym_logical_operator,
    STATE(9), 1,
      sym_comparision_operator,
    ACTIONS(93), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(95), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(89), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
    ACTIONS(91), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_contains,
  [645] = 4,
    ACTIONS(99), 1,
      anon_sym_COMMA,
    STATE(22), 1,
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
      anon_sym_contains,
      anon_sym_or,
      anon_sym_and,
      anon_sym_PIPE,
  [670] = 7,
    ACTIONS(97), 1,
      anon_sym_PIPE,
    STATE(8), 1,
      sym_logical_operator,
    STATE(9), 1,
      sym_comparision_operator,
    ACTIONS(93), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(95), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(102), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
    ACTIONS(91), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_contains,
  [701] = 5,
    STATE(8), 1,
      sym_logical_operator,
    STATE(9), 1,
      sym_comparision_operator,
    ACTIONS(93), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(91), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_contains,
    ACTIONS(102), 7,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_or,
      anon_sym_and,
      anon_sym_PIPE,
  [728] = 2,
    ACTIONS(106), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(104), 13,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_contains,
      anon_sym_or,
      anon_sym_and,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [748] = 3,
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
      anon_sym_contains,
      anon_sym_or,
      anon_sym_and,
      anon_sym_PIPE,
  [770] = 2,
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
      anon_sym_contains,
      anon_sym_or,
      anon_sym_and,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [790] = 2,
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
      anon_sym_contains,
      anon_sym_or,
      anon_sym_and,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [810] = 2,
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
      anon_sym_contains,
      anon_sym_or,
      anon_sym_and,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [830] = 2,
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
      anon_sym_contains,
      anon_sym_or,
      anon_sym_and,
      anon_sym_PIPE,
  [849] = 2,
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
      anon_sym_contains,
      anon_sym_or,
      anon_sym_and,
      anon_sym_PIPE,
  [868] = 2,
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
      anon_sym_contains,
      anon_sym_or,
      anon_sym_and,
      anon_sym_PIPE,
  [887] = 7,
    ACTIONS(97), 1,
      anon_sym_PIPE,
    STATE(8), 1,
      sym_logical_operator,
    STATE(9), 1,
      sym_comparision_operator,
    ACTIONS(93), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(95), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(134), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
    ACTIONS(91), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_contains,
  [916] = 7,
    ACTIONS(97), 1,
      anon_sym_PIPE,
    STATE(8), 1,
      sym_logical_operator,
    STATE(9), 1,
      sym_comparision_operator,
    ACTIONS(93), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(95), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(136), 2,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
    ACTIONS(91), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_contains,
  [945] = 7,
    ACTIONS(97), 1,
      anon_sym_PIPE,
    STATE(8), 1,
      sym_logical_operator,
    STATE(9), 1,
      sym_comparision_operator,
    ACTIONS(93), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(95), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(134), 2,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
    ACTIONS(91), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_contains,
  [974] = 7,
    ACTIONS(97), 1,
      anon_sym_PIPE,
    STATE(8), 1,
      sym_logical_operator,
    STATE(9), 1,
      sym_comparision_operator,
    ACTIONS(93), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(95), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(138), 2,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
    ACTIONS(91), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_contains,
  [1003] = 9,
    ACTIONS(5), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    ACTIONS(11), 1,
      sym_comment,
    STATE(43), 1,
      aux_sym_program_repeat1,
    STATE(72), 1,
      aux_sym_if_expression_repeat1,
    STATE(85), 1,
      sym_elseif_expression,
    STATE(89), 1,
      sym_else_expression,
    ACTIONS(140), 2,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(51), 3,
      sym__statement,
      sym__control_flow,
      sym_if_expression,
  [1034] = 9,
    ACTIONS(5), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    ACTIONS(11), 1,
      sym_comment,
    STATE(37), 1,
      aux_sym_program_repeat1,
    STATE(73), 1,
      aux_sym_if_expression_repeat1,
    STATE(85), 1,
      sym_elseif_expression,
    STATE(86), 1,
      sym_else_expression,
    ACTIONS(142), 2,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(51), 3,
      sym__statement,
      sym__control_flow,
      sym_if_expression,
  [1065] = 7,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_token1,
    ACTIONS(144), 1,
      sym_identifier,
    STATE(32), 1,
      sym_argument_list,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(20), 5,
      sym__literal,
      sym_string,
      sym_number,
      sym_boolean,
      sym_argument,
  [1092] = 6,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_token1,
    ACTIONS(146), 1,
      sym_identifier,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(29), 5,
      sym__literal,
      sym_string,
      sym_number,
      sym_boolean,
      sym_argument,
  [1116] = 7,
    ACTIONS(5), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(148), 1,
      ts_builtin_sym_end,
    STATE(43), 1,
      aux_sym_program_repeat1,
    ACTIONS(9), 2,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(51), 3,
      sym__statement,
      sym__control_flow,
      sym_if_expression,
  [1141] = 6,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_token1,
    ACTIONS(150), 1,
      sym_identifier,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(27), 4,
      sym__literal,
      sym_string,
      sym_number,
      sym_boolean,
  [1164] = 7,
    ACTIONS(152), 1,
      ts_builtin_sym_end,
    ACTIONS(154), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(157), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    ACTIONS(163), 1,
      sym_comment,
    STATE(43), 1,
      aux_sym_program_repeat1,
    ACTIONS(160), 2,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(51), 3,
      sym__statement,
      sym__control_flow,
      sym_if_expression,
  [1189] = 6,
    ACTIONS(5), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    ACTIONS(11), 1,
      sym_comment,
    STATE(47), 1,
      aux_sym_program_repeat1,
    ACTIONS(166), 2,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(51), 3,
      sym__statement,
      sym__control_flow,
      sym_if_expression,
  [1211] = 6,
    ACTIONS(5), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    ACTIONS(11), 1,
      sym_comment,
    STATE(43), 1,
      aux_sym_program_repeat1,
    ACTIONS(168), 2,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(51), 3,
      sym__statement,
      sym__control_flow,
      sym_if_expression,
  [1233] = 6,
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
    STATE(51), 3,
      sym__statement,
      sym__control_flow,
      sym_if_expression,
  [1255] = 6,
    ACTIONS(5), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    ACTIONS(11), 1,
      sym_comment,
    STATE(43), 1,
      aux_sym_program_repeat1,
    ACTIONS(172), 2,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(51), 3,
      sym__statement,
      sym__control_flow,
      sym_if_expression,
  [1277] = 2,
    ACTIONS(176), 3,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      aux_sym_number_token1,
    ACTIONS(174), 5,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
      anon_sym_include,
      anon_sym_render,
  [1290] = 2,
    ACTIONS(180), 3,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      aux_sym_number_token1,
    ACTIONS(178), 5,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
      anon_sym_include,
      anon_sym_render,
  [1303] = 2,
    ACTIONS(182), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE_DASH,
      sym_comment,
    ACTIONS(184), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
  [1314] = 2,
    ACTIONS(186), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE_DASH,
      sym_comment,
    ACTIONS(188), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
  [1325] = 2,
    ACTIONS(190), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE_DASH,
      sym_comment,
    ACTIONS(192), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
  [1336] = 2,
    ACTIONS(194), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE_DASH,
      sym_comment,
    ACTIONS(196), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
  [1347] = 2,
    ACTIONS(190), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE_DASH,
      sym_comment,
    ACTIONS(192), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
  [1358] = 2,
    ACTIONS(190), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE_DASH,
      sym_comment,
    ACTIONS(192), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
  [1369] = 2,
    ACTIONS(198), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE_DASH,
      sym_comment,
    ACTIONS(200), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
  [1380] = 2,
    ACTIONS(202), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE_DASH,
      sym_comment,
    ACTIONS(204), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
  [1391] = 2,
    ACTIONS(206), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE_DASH,
      sym_comment,
    ACTIONS(208), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
  [1402] = 2,
    ACTIONS(198), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE_DASH,
      sym_comment,
    ACTIONS(200), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
  [1413] = 2,
    ACTIONS(210), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE_DASH,
      sym_comment,
    ACTIONS(212), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
  [1424] = 2,
    ACTIONS(198), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE_DASH,
      sym_comment,
    ACTIONS(200), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
  [1435] = 2,
    ACTIONS(210), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE_DASH,
      sym_comment,
    ACTIONS(212), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
  [1446] = 2,
    ACTIONS(210), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE_DASH,
      sym_comment,
    ACTIONS(212), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
  [1457] = 2,
    ACTIONS(190), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE_DASH,
      sym_comment,
    ACTIONS(192), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
  [1468] = 2,
    ACTIONS(182), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE_DASH,
      sym_comment,
    ACTIONS(184), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
  [1479] = 2,
    ACTIONS(198), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE_DASH,
      sym_comment,
    ACTIONS(200), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
  [1490] = 2,
    ACTIONS(210), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE_DASH,
      sym_comment,
    ACTIONS(212), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
  [1501] = 2,
    ACTIONS(182), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE_DASH,
      sym_comment,
    ACTIONS(184), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
  [1512] = 2,
    ACTIONS(182), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE_DASH,
      sym_comment,
    ACTIONS(184), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
  [1523] = 2,
    ACTIONS(214), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE_DASH,
      sym_comment,
    ACTIONS(216), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
  [1534] = 2,
    ACTIONS(218), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE_DASH,
      sym_comment,
    ACTIONS(220), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
  [1545] = 5,
    ACTIONS(222), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(224), 1,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(74), 1,
      aux_sym_if_expression_repeat1,
    STATE(85), 1,
      sym_elseif_expression,
    STATE(98), 1,
      sym_else_expression,
  [1561] = 5,
    ACTIONS(226), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(228), 1,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(74), 1,
      aux_sym_if_expression_repeat1,
    STATE(82), 1,
      sym_else_expression,
    STATE(85), 1,
      sym_elseif_expression,
  [1577] = 4,
    ACTIONS(230), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(233), 1,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(74), 1,
      aux_sym_if_expression_repeat1,
    STATE(85), 1,
      sym_elseif_expression,
  [1590] = 3,
    ACTIONS(35), 1,
      anon_sym_else,
    ACTIONS(236), 1,
      anon_sym_endif,
    ACTIONS(238), 1,
      anon_sym_elseif,
  [1600] = 3,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    STATE(31), 1,
      sym_string,
  [1610] = 3,
    ACTIONS(35), 1,
      anon_sym_else,
    ACTIONS(238), 1,
      anon_sym_elseif,
    ACTIONS(240), 1,
      anon_sym_endif,
  [1620] = 3,
    ACTIONS(35), 1,
      anon_sym_else,
    ACTIONS(238), 1,
      anon_sym_elseif,
    ACTIONS(242), 1,
      anon_sym_endif,
  [1630] = 3,
    ACTIONS(35), 1,
      anon_sym_else,
    ACTIONS(238), 1,
      anon_sym_elseif,
    ACTIONS(244), 1,
      anon_sym_endif,
  [1640] = 3,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    STATE(118), 1,
      sym_string,
  [1650] = 3,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    STATE(30), 1,
      sym_string,
  [1660] = 2,
    ACTIONS(246), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(248), 1,
      anon_sym_LBRACE_PERCENT_DASH,
  [1667] = 2,
    ACTIONS(250), 1,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(252), 1,
      anon_sym_DASH_PERCENT_RBRACE,
  [1674] = 1,
    ACTIONS(134), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [1679] = 2,
    ACTIONS(254), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(256), 1,
      anon_sym_LBRACE_PERCENT_DASH,
  [1686] = 2,
    ACTIONS(258), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(260), 1,
      anon_sym_LBRACE_PERCENT_DASH,
  [1693] = 1,
    ACTIONS(262), 2,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [1698] = 1,
    ACTIONS(264), 2,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [1703] = 2,
    ACTIONS(266), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(268), 1,
      anon_sym_LBRACE_PERCENT_DASH,
  [1710] = 2,
    ACTIONS(270), 1,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(272), 1,
      anon_sym_DASH_PERCENT_RBRACE,
  [1717] = 2,
    ACTIONS(274), 1,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(276), 1,
      anon_sym_DASH_PERCENT_RBRACE,
  [1724] = 1,
    ACTIONS(278), 2,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [1729] = 2,
    ACTIONS(280), 1,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(282), 1,
      anon_sym_DASH_PERCENT_RBRACE,
  [1736] = 2,
    ACTIONS(284), 1,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(286), 1,
      anon_sym_DASH_PERCENT_RBRACE,
  [1743] = 2,
    ACTIONS(288), 1,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(290), 1,
      anon_sym_DASH_PERCENT_RBRACE,
  [1750] = 1,
    ACTIONS(134), 2,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [1755] = 2,
    ACTIONS(292), 1,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(294), 1,
      anon_sym_DASH_PERCENT_RBRACE,
  [1762] = 2,
    ACTIONS(296), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(298), 1,
      anon_sym_LBRACE_PERCENT_DASH,
  [1769] = 1,
    ACTIONS(300), 2,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [1774] = 1,
    ACTIONS(302), 2,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [1779] = 2,
    ACTIONS(304), 1,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(306), 1,
      anon_sym_DASH_PERCENT_RBRACE,
  [1786] = 1,
    ACTIONS(238), 1,
      anon_sym_elseif,
  [1790] = 1,
    ACTIONS(308), 1,
      anon_sym_endif,
  [1794] = 1,
    ACTIONS(310), 1,
      anon_sym_endif,
  [1798] = 1,
    ACTIONS(312), 1,
      anon_sym_SQUOTE,
  [1802] = 1,
    ACTIONS(312), 1,
      anon_sym_DQUOTE,
  [1806] = 1,
    ACTIONS(314), 1,
      anon_sym_EQ,
  [1810] = 1,
    ACTIONS(316), 1,
      sym_identifier,
  [1814] = 1,
    ACTIONS(318), 1,
      anon_sym_endif,
  [1818] = 1,
    ACTIONS(320), 1,
      anon_sym_endif,
  [1822] = 1,
    ACTIONS(322), 1,
      sym_identifier,
  [1826] = 1,
    ACTIONS(324), 1,
      aux_sym_string_token1,
  [1830] = 1,
    ACTIONS(326), 1,
      anon_sym_endif,
  [1834] = 1,
    ACTIONS(328), 1,
      aux_sym_string_token2,
  [1838] = 1,
    ACTIONS(330), 1,
      sym_identifier,
  [1842] = 1,
    ACTIONS(332), 1,
      ts_builtin_sym_end,
  [1846] = 1,
    ACTIONS(334), 1,
      anon_sym_endif,
  [1850] = 1,
    ACTIONS(336), 1,
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
  [SMALL_STATE(11)] = 366,
  [SMALL_STATE(12)] = 394,
  [SMALL_STATE(13)] = 422,
  [SMALL_STATE(14)] = 450,
  [SMALL_STATE(15)] = 478,
  [SMALL_STATE(16)] = 503,
  [SMALL_STATE(17)] = 526,
  [SMALL_STATE(18)] = 547,
  [SMALL_STATE(19)] = 568,
  [SMALL_STATE(20)] = 589,
  [SMALL_STATE(21)] = 614,
  [SMALL_STATE(22)] = 645,
  [SMALL_STATE(23)] = 670,
  [SMALL_STATE(24)] = 701,
  [SMALL_STATE(25)] = 728,
  [SMALL_STATE(26)] = 748,
  [SMALL_STATE(27)] = 770,
  [SMALL_STATE(28)] = 790,
  [SMALL_STATE(29)] = 810,
  [SMALL_STATE(30)] = 830,
  [SMALL_STATE(31)] = 849,
  [SMALL_STATE(32)] = 868,
  [SMALL_STATE(33)] = 887,
  [SMALL_STATE(34)] = 916,
  [SMALL_STATE(35)] = 945,
  [SMALL_STATE(36)] = 974,
  [SMALL_STATE(37)] = 1003,
  [SMALL_STATE(38)] = 1034,
  [SMALL_STATE(39)] = 1065,
  [SMALL_STATE(40)] = 1092,
  [SMALL_STATE(41)] = 1116,
  [SMALL_STATE(42)] = 1141,
  [SMALL_STATE(43)] = 1164,
  [SMALL_STATE(44)] = 1189,
  [SMALL_STATE(45)] = 1211,
  [SMALL_STATE(46)] = 1233,
  [SMALL_STATE(47)] = 1255,
  [SMALL_STATE(48)] = 1277,
  [SMALL_STATE(49)] = 1290,
  [SMALL_STATE(50)] = 1303,
  [SMALL_STATE(51)] = 1314,
  [SMALL_STATE(52)] = 1325,
  [SMALL_STATE(53)] = 1336,
  [SMALL_STATE(54)] = 1347,
  [SMALL_STATE(55)] = 1358,
  [SMALL_STATE(56)] = 1369,
  [SMALL_STATE(57)] = 1380,
  [SMALL_STATE(58)] = 1391,
  [SMALL_STATE(59)] = 1402,
  [SMALL_STATE(60)] = 1413,
  [SMALL_STATE(61)] = 1424,
  [SMALL_STATE(62)] = 1435,
  [SMALL_STATE(63)] = 1446,
  [SMALL_STATE(64)] = 1457,
  [SMALL_STATE(65)] = 1468,
  [SMALL_STATE(66)] = 1479,
  [SMALL_STATE(67)] = 1490,
  [SMALL_STATE(68)] = 1501,
  [SMALL_STATE(69)] = 1512,
  [SMALL_STATE(70)] = 1523,
  [SMALL_STATE(71)] = 1534,
  [SMALL_STATE(72)] = 1545,
  [SMALL_STATE(73)] = 1561,
  [SMALL_STATE(74)] = 1577,
  [SMALL_STATE(75)] = 1590,
  [SMALL_STATE(76)] = 1600,
  [SMALL_STATE(77)] = 1610,
  [SMALL_STATE(78)] = 1620,
  [SMALL_STATE(79)] = 1630,
  [SMALL_STATE(80)] = 1640,
  [SMALL_STATE(81)] = 1650,
  [SMALL_STATE(82)] = 1660,
  [SMALL_STATE(83)] = 1667,
  [SMALL_STATE(84)] = 1674,
  [SMALL_STATE(85)] = 1679,
  [SMALL_STATE(86)] = 1686,
  [SMALL_STATE(87)] = 1693,
  [SMALL_STATE(88)] = 1698,
  [SMALL_STATE(89)] = 1703,
  [SMALL_STATE(90)] = 1710,
  [SMALL_STATE(91)] = 1717,
  [SMALL_STATE(92)] = 1724,
  [SMALL_STATE(93)] = 1729,
  [SMALL_STATE(94)] = 1736,
  [SMALL_STATE(95)] = 1743,
  [SMALL_STATE(96)] = 1750,
  [SMALL_STATE(97)] = 1755,
  [SMALL_STATE(98)] = 1762,
  [SMALL_STATE(99)] = 1769,
  [SMALL_STATE(100)] = 1774,
  [SMALL_STATE(101)] = 1779,
  [SMALL_STATE(102)] = 1786,
  [SMALL_STATE(103)] = 1790,
  [SMALL_STATE(104)] = 1794,
  [SMALL_STATE(105)] = 1798,
  [SMALL_STATE(106)] = 1802,
  [SMALL_STATE(107)] = 1806,
  [SMALL_STATE(108)] = 1810,
  [SMALL_STATE(109)] = 1814,
  [SMALL_STATE(110)] = 1818,
  [SMALL_STATE(111)] = 1822,
  [SMALL_STATE(112)] = 1826,
  [SMALL_STATE(113)] = 1830,
  [SMALL_STATE(114)] = 1834,
  [SMALL_STATE(115)] = 1838,
  [SMALL_STATE(116)] = 1842,
  [SMALL_STATE(117)] = 1846,
  [SMALL_STATE(118)] = 1850,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access, 2, .production_id = 1),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_access, 2, .production_id = 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_access_repeat1, 2, .production_id = 5),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_access_repeat1, 2, .production_id = 5), SHIFT_REPEAT(108),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_access_repeat1, 2, .production_id = 5), SHIFT_REPEAT(80),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_access_repeat1, 2, .production_id = 5),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 1),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_access_repeat1, 3, .production_id = 4),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_access_repeat1, 3, .production_id = 4),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_access_repeat1, 2, .production_id = 4),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_access_repeat1, 2, .production_id = 4),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4, .production_id = 8),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(40),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 7),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 3, .production_id = 6),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter, 3, .production_id = 6),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 3, .production_id = 12),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 3, .production_id = 12),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_expression, 2, .production_id = 2),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_expression, 2, .production_id = 2),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_render_expression, 2, .production_id = 3),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_render_expression, 2, .production_id = 3),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 5, .production_id = 6),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter, 5, .production_id = 6),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [154] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(51),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elseif_expression, 4, .production_id = 11),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_expression, 4, .production_id = 13),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_expression, 3),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elseif_expression, 5, .production_id = 15),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparision_operator, 1),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparision_operator, 1),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_logical_operator, 1),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logical_operator, 1),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expression, 9, .production_id = 18),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expression, 9, .production_id = 18),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 1),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 1),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expression, 10, .production_id = 20),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expression, 10, .production_id = 20),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expression, 8, .production_id = 14),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expression, 8, .production_id = 14),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expression, 9, .production_id = 19),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expression, 9, .production_id = 19),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 3),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 3),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expression, 8, .production_id = 15),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expression, 8, .production_id = 15),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expression, 8, .production_id = 16),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expression, 8, .production_id = 16),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expression, 7, .production_id = 11),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expression, 7, .production_id = 11),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expression, 9, .production_id = 17),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expression, 9, .production_id = 17),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [230] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_expression_repeat1, 2, .production_id = 10), SHIFT_REPEAT(102),
  [233] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_expression_repeat1, 2, .production_id = 10), SHIFT_REPEAT(102),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_expression_repeat1, 1, .production_id = 9),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_expression_repeat1, 1, .production_id = 9),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [332] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
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
