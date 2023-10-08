#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 112
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 63
#define ALIAS_COUNT 1
#define TOKEN_COUNT 40
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 13
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 19

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
  anon_sym_PIPE = 30,
  anon_sym_COLON = 31,
  anon_sym_COMMA = 32,
  sym_contains_operator = 33,
  anon_sym_include = 34,
  anon_sym_render = 35,
  anon_sym_if = 36,
  anon_sym_endif = 37,
  anon_sym_elseif = 38,
  anon_sym_else = 39,
  sym_program = 40,
  sym__statement = 41,
  sym__literal = 42,
  sym_string = 43,
  sym_number = 44,
  sym_boolean = 45,
  sym__control_flow = 46,
  sym__expression = 47,
  sym_access = 48,
  sym_binary_operator = 49,
  sym_filter = 50,
  sym_argument_list = 51,
  sym_argument = 52,
  sym_include_expression = 53,
  sym_render_expression = 54,
  sym_binary_expression = 55,
  sym_if_expression = 56,
  sym_elseif_expression = 57,
  sym_else_expression = 58,
  aux_sym_program_repeat1 = 59,
  aux_sym_access_repeat1 = 60,
  aux_sym_argument_list_repeat1 = 61,
  aux_sym_if_expression_repeat1 = 62,
  alias_sym_block = 63,
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
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
  [3] = {.index = 4, .length = 2},
  [4] = {.index = 6, .length = 1},
  [5] = {.index = 7, .length = 2},
  [6] = {.index = 9, .length = 2},
  [7] = {.index = 11, .length = 1},
  [8] = {.index = 12, .length = 2},
  [9] = {.index = 14, .length = 1},
  [10] = {.index = 15, .length = 2},
  [11] = {.index = 17, .length = 1},
  [12] = {.index = 18, .length = 2},
  [13] = {.index = 20, .length = 2},
  [14] = {.index = 22, .length = 2},
  [15] = {.index = 24, .length = 3},
  [16] = {.index = 27, .length = 3},
  [17] = {.index = 30, .length = 3},
  [18] = {.index = 33, .length = 4},
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
    {field_alternatives, 0},
  [12] =
    {field_alternatives, 0, .inherited = true},
    {field_alternatives, 1, .inherited = true},
  [14] =
    {field_condition, 2},
  [15] =
    {field_key, 0},
    {field_value, 2},
  [17] =
    {field_consequence, 3},
  [18] =
    {field_alternatives, 4},
    {field_condition, 2},
  [20] =
    {field_condition, 2},
    {field_consequence, 4},
  [22] =
    {field_alternatives, 4, .inherited = true},
    {field_condition, 2},
  [24] =
    {field_alternatives, 5},
    {field_condition, 2},
    {field_consequence, 4},
  [27] =
    {field_alternatives, 5, .inherited = true},
    {field_condition, 2},
    {field_consequence, 4},
  [30] =
    {field_alternatives, 4, .inherited = true},
    {field_alternatives, 5},
    {field_condition, 2},
  [33] =
    {field_alternatives, 5, .inherited = true},
    {field_alternatives, 6},
    {field_condition, 2},
    {field_consequence, 4},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [11] = {
    [3] = alias_sym_block,
  },
  [13] = {
    [4] = alias_sym_block,
  },
  [15] = {
    [4] = alias_sym_block,
  },
  [16] = {
    [4] = alias_sym_block,
  },
  [18] = {
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
      if (lookahead == ',') ADVANCE(52);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '.') ADVANCE(40);
      if (lookahead == ':') ADVANCE(51);
      if (lookahead == '<') ADVANCE(47);
      if (lookahead == '=') ADVANCE(11);
      if (lookahead == '>') ADVANCE(46);
      if (lookahead == '[') ADVANCE(41);
      if (lookahead == ']') ADVANCE(42);
      if (lookahead == '{') ADVANCE(4);
      if (lookahead == '|') ADVANCE(50);
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
      if (lookahead == ',') ADVANCE(52);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == ':') ADVANCE(51);
      if (lookahead == '<') ADVANCE(47);
      if (lookahead == '=') ADVANCE(11);
      if (lookahead == '>') ADVANCE(46);
      if (lookahead == ']') ADVANCE(42);
      if (lookahead == '{') ADVANCE(7);
      if (lookahead == '|') ADVANCE(50);
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
      if (lookahead == '|') ADVANCE(50);
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
    case 50:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 52:
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
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 1},
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
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 1},
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
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 1},
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
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 35},
  [111] = {.lex_state = 32},
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
    [sym_program] = STATE(102),
    [sym__statement] = STATE(64),
    [sym__control_flow] = STATE(64),
    [sym_if_expression] = STATE(64),
    [aux_sym_program_repeat1] = STATE(39),
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
    STATE(30), 10,
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
  [47] = 12,
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
    STATE(30), 10,
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
  [94] = 9,
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
    STATE(30), 10,
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
  [132] = 8,
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
    STATE(31), 10,
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
  [167] = 8,
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
    STATE(25), 10,
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
  [202] = 8,
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
  [237] = 8,
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
  [272] = 5,
    ACTIONS(39), 1,
      anon_sym_DOT,
    ACTIONS(42), 1,
      anon_sym_LBRACK,
    STATE(9), 1,
      aux_sym_access_repeat1,
    ACTIONS(45), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(37), 12,
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
  [300] = 5,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    STATE(11), 1,
      aux_sym_access_repeat1,
    ACTIONS(53), 2,
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
      anon_sym_or,
      anon_sym_and,
      anon_sym_PIPE,
      sym_contains_operator,
  [328] = 5,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    STATE(9), 1,
      aux_sym_access_repeat1,
    ACTIONS(57), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(55), 12,
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
  [356] = 5,
    ACTIONS(63), 1,
      anon_sym_COLON,
    ACTIONS(65), 1,
      anon_sym_COMMA,
    STATE(19), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(61), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(59), 12,
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
  [384] = 4,
    ACTIONS(65), 1,
      anon_sym_COMMA,
    STATE(19), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(61), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(59), 12,
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
  [409] = 4,
    ACTIONS(71), 1,
      anon_sym_COMMA,
    STATE(14), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(69), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(67), 12,
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
  [434] = 3,
    ACTIONS(63), 1,
      anon_sym_COLON,
    ACTIONS(69), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(67), 13,
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
  [457] = 2,
    ACTIONS(76), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(74), 14,
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
  [478] = 2,
    ACTIONS(80), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(78), 14,
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
  [499] = 2,
    ACTIONS(84), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(82), 14,
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
  [520] = 4,
    ACTIONS(65), 1,
      anon_sym_COMMA,
    STATE(14), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(88), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(86), 12,
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
  [545] = 2,
    ACTIONS(92), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(90), 13,
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
  [565] = 2,
    ACTIONS(69), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(67), 13,
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
  [585] = 2,
    ACTIONS(96), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(94), 13,
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
  [605] = 2,
    ACTIONS(100), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(98), 13,
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
  [625] = 3,
    ACTIONS(106), 1,
      anon_sym_COLON,
    ACTIONS(104), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(102), 12,
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
  [647] = 5,
    ACTIONS(114), 1,
      sym_contains_operator,
    STATE(6), 1,
      sym_binary_operator,
    ACTIONS(112), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(108), 5,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_PIPE,
    ACTIONS(110), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_or,
      anon_sym_and,
  [673] = 2,
    ACTIONS(118), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(116), 12,
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
  [692] = 2,
    ACTIONS(122), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(120), 12,
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
  [711] = 2,
    ACTIONS(126), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(124), 12,
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
  [730] = 2,
    ACTIONS(128), 2,
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
  [749] = 6,
    ACTIONS(114), 1,
      sym_contains_operator,
    ACTIONS(132), 1,
      anon_sym_PIPE,
    STATE(6), 1,
      sym_binary_operator,
    ACTIONS(112), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(130), 2,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
    ACTIONS(110), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_or,
      anon_sym_and,
  [775] = 6,
    ACTIONS(114), 1,
      sym_contains_operator,
    ACTIONS(132), 1,
      anon_sym_PIPE,
    STATE(6), 1,
      sym_binary_operator,
    ACTIONS(112), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(130), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
    ACTIONS(110), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_or,
      anon_sym_and,
  [801] = 6,
    ACTIONS(114), 1,
      sym_contains_operator,
    ACTIONS(132), 1,
      anon_sym_PIPE,
    STATE(6), 1,
      sym_binary_operator,
    ACTIONS(112), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(134), 2,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
    ACTIONS(110), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_or,
      anon_sym_and,
  [827] = 6,
    ACTIONS(114), 1,
      sym_contains_operator,
    ACTIONS(132), 1,
      anon_sym_PIPE,
    STATE(6), 1,
      sym_binary_operator,
    ACTIONS(112), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(136), 2,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
    ACTIONS(110), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_or,
      anon_sym_and,
  [853] = 9,
    ACTIONS(5), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    ACTIONS(11), 1,
      sym_comment,
    STATE(38), 1,
      aux_sym_program_repeat1,
    STATE(69), 1,
      aux_sym_if_expression_repeat1,
    STATE(79), 1,
      sym_else_expression,
    STATE(89), 1,
      sym_elseif_expression,
    ACTIONS(138), 2,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(64), 3,
      sym__statement,
      sym__control_flow,
      sym_if_expression,
  [884] = 7,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_token1,
    ACTIONS(140), 1,
      sym_identifier,
    STATE(26), 1,
      sym_argument_list,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(13), 5,
      sym__literal,
      sym_string,
      sym_number,
      sym_boolean,
      sym_argument,
  [911] = 9,
    ACTIONS(5), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    ACTIONS(11), 1,
      sym_comment,
    STATE(34), 1,
      aux_sym_program_repeat1,
    STATE(68), 1,
      aux_sym_if_expression_repeat1,
    STATE(89), 1,
      sym_elseif_expression,
    STATE(90), 1,
      sym_else_expression,
    ACTIONS(142), 2,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(64), 3,
      sym__statement,
      sym__control_flow,
      sym_if_expression,
  [942] = 6,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_token1,
    ACTIONS(144), 1,
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
  [966] = 7,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
    ACTIONS(148), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(151), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    ACTIONS(157), 1,
      sym_comment,
    STATE(38), 1,
      aux_sym_program_repeat1,
    ACTIONS(154), 2,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(64), 3,
      sym__statement,
      sym__control_flow,
      sym_if_expression,
  [991] = 7,
    ACTIONS(5), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(160), 1,
      ts_builtin_sym_end,
    STATE(38), 1,
      aux_sym_program_repeat1,
    ACTIONS(9), 2,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(64), 3,
      sym__statement,
      sym__control_flow,
      sym_if_expression,
  [1016] = 6,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_token1,
    ACTIONS(162), 1,
      sym_identifier,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(23), 4,
      sym__literal,
      sym_string,
      sym_number,
      sym_boolean,
  [1039] = 6,
    ACTIONS(5), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    ACTIONS(11), 1,
      sym_comment,
    STATE(38), 1,
      aux_sym_program_repeat1,
    ACTIONS(164), 2,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(64), 3,
      sym__statement,
      sym__control_flow,
      sym_if_expression,
  [1061] = 6,
    ACTIONS(5), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    ACTIONS(11), 1,
      sym_comment,
    STATE(38), 1,
      aux_sym_program_repeat1,
    ACTIONS(166), 2,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(64), 3,
      sym__statement,
      sym__control_flow,
      sym_if_expression,
  [1083] = 6,
    ACTIONS(5), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    ACTIONS(11), 1,
      sym_comment,
    STATE(41), 1,
      aux_sym_program_repeat1,
    ACTIONS(168), 2,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(64), 3,
      sym__statement,
      sym__control_flow,
      sym_if_expression,
  [1105] = 6,
    ACTIONS(5), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    ACTIONS(11), 1,
      sym_comment,
    STATE(42), 1,
      aux_sym_program_repeat1,
    ACTIONS(170), 2,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(64), 3,
      sym__statement,
      sym__control_flow,
      sym_if_expression,
  [1127] = 2,
    ACTIONS(174), 3,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      aux_sym_number_token1,
    ACTIONS(172), 5,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
      anon_sym_include,
      anon_sym_render,
  [1140] = 2,
    ACTIONS(176), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE_DASH,
      sym_comment,
    ACTIONS(178), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
  [1151] = 2,
    ACTIONS(180), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE_DASH,
      sym_comment,
    ACTIONS(182), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
  [1162] = 2,
    ACTIONS(180), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE_DASH,
      sym_comment,
    ACTIONS(182), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
  [1173] = 2,
    ACTIONS(184), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE_DASH,
      sym_comment,
    ACTIONS(186), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
  [1184] = 2,
    ACTIONS(184), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE_DASH,
      sym_comment,
    ACTIONS(186), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
  [1195] = 2,
    ACTIONS(188), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE_DASH,
      sym_comment,
    ACTIONS(190), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
  [1206] = 2,
    ACTIONS(188), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE_DASH,
      sym_comment,
    ACTIONS(190), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
  [1217] = 2,
    ACTIONS(184), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE_DASH,
      sym_comment,
    ACTIONS(186), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
  [1228] = 2,
    ACTIONS(188), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE_DASH,
      sym_comment,
    ACTIONS(190), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
  [1239] = 2,
    ACTIONS(180), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE_DASH,
      sym_comment,
    ACTIONS(182), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
  [1250] = 2,
    ACTIONS(188), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE_DASH,
      sym_comment,
    ACTIONS(190), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
  [1261] = 2,
    ACTIONS(192), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE_DASH,
      sym_comment,
    ACTIONS(194), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
  [1272] = 2,
    ACTIONS(180), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE_DASH,
      sym_comment,
    ACTIONS(182), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
  [1283] = 2,
    ACTIONS(196), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE_DASH,
      sym_comment,
    ACTIONS(198), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
  [1294] = 2,
    ACTIONS(200), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE_DASH,
      sym_comment,
    ACTIONS(202), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
  [1305] = 2,
    ACTIONS(184), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE_DASH,
      sym_comment,
    ACTIONS(186), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
  [1316] = 2,
    ACTIONS(204), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE_DASH,
      sym_comment,
    ACTIONS(206), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
  [1327] = 2,
    ACTIONS(176), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE_DASH,
      sym_comment,
    ACTIONS(178), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
  [1338] = 2,
    ACTIONS(208), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE_DASH,
      sym_comment,
    ACTIONS(210), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
  [1349] = 2,
    ACTIONS(176), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE_DASH,
      sym_comment,
    ACTIONS(178), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
  [1360] = 2,
    ACTIONS(176), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE_DASH,
      sym_comment,
    ACTIONS(178), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
  [1371] = 2,
    ACTIONS(212), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE_DASH,
      sym_comment,
    ACTIONS(214), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
  [1382] = 5,
    ACTIONS(216), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(218), 1,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(70), 1,
      aux_sym_if_expression_repeat1,
    STATE(89), 1,
      sym_elseif_expression,
    STATE(96), 1,
      sym_else_expression,
  [1398] = 5,
    ACTIONS(220), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(222), 1,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(70), 1,
      aux_sym_if_expression_repeat1,
    STATE(84), 1,
      sym_else_expression,
    STATE(89), 1,
      sym_elseif_expression,
  [1414] = 4,
    ACTIONS(224), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(227), 1,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(70), 1,
      aux_sym_if_expression_repeat1,
    STATE(89), 1,
      sym_elseif_expression,
  [1427] = 3,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    STATE(29), 1,
      sym_string,
  [1437] = 3,
    ACTIONS(33), 1,
      anon_sym_else,
    ACTIONS(230), 1,
      anon_sym_endif,
    ACTIONS(232), 1,
      anon_sym_elseif,
  [1447] = 3,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    STATE(27), 1,
      sym_string,
  [1457] = 3,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    STATE(28), 1,
      sym_string,
  [1467] = 3,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    STATE(100), 1,
      sym_string,
  [1477] = 3,
    ACTIONS(33), 1,
      anon_sym_else,
    ACTIONS(232), 1,
      anon_sym_elseif,
    ACTIONS(234), 1,
      anon_sym_endif,
  [1487] = 3,
    ACTIONS(33), 1,
      anon_sym_else,
    ACTIONS(232), 1,
      anon_sym_elseif,
    ACTIONS(236), 1,
      anon_sym_endif,
  [1497] = 3,
    ACTIONS(33), 1,
      anon_sym_else,
    ACTIONS(232), 1,
      anon_sym_elseif,
    ACTIONS(238), 1,
      anon_sym_endif,
  [1507] = 2,
    ACTIONS(240), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(242), 1,
      anon_sym_LBRACE_PERCENT_DASH,
  [1514] = 1,
    ACTIONS(244), 2,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [1519] = 1,
    ACTIONS(246), 2,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [1524] = 1,
    ACTIONS(248), 2,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [1529] = 2,
    ACTIONS(250), 1,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(252), 1,
      anon_sym_DASH_PERCENT_RBRACE,
  [1536] = 2,
    ACTIONS(254), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(256), 1,
      anon_sym_LBRACE_PERCENT_DASH,
  [1543] = 2,
    ACTIONS(258), 1,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(260), 1,
      anon_sym_DASH_PERCENT_RBRACE,
  [1550] = 1,
    ACTIONS(262), 2,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [1555] = 2,
    ACTIONS(264), 1,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(266), 1,
      anon_sym_DASH_PERCENT_RBRACE,
  [1562] = 2,
    ACTIONS(268), 1,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(270), 1,
      anon_sym_DASH_PERCENT_RBRACE,
  [1569] = 2,
    ACTIONS(272), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(274), 1,
      anon_sym_LBRACE_PERCENT_DASH,
  [1576] = 2,
    ACTIONS(276), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(278), 1,
      anon_sym_LBRACE_PERCENT_DASH,
  [1583] = 2,
    ACTIONS(280), 1,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(282), 1,
      anon_sym_DASH_PERCENT_RBRACE,
  [1590] = 2,
    ACTIONS(284), 1,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(286), 1,
      anon_sym_DASH_PERCENT_RBRACE,
  [1597] = 1,
    ACTIONS(288), 2,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [1602] = 2,
    ACTIONS(290), 1,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(292), 1,
      anon_sym_DASH_PERCENT_RBRACE,
  [1609] = 2,
    ACTIONS(294), 1,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(296), 1,
      anon_sym_DASH_PERCENT_RBRACE,
  [1616] = 2,
    ACTIONS(298), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(300), 1,
      anon_sym_LBRACE_PERCENT_DASH,
  [1623] = 1,
    ACTIONS(302), 1,
      anon_sym_endif,
  [1627] = 1,
    ACTIONS(304), 1,
      anon_sym_endif,
  [1631] = 1,
    ACTIONS(306), 1,
      anon_sym_endif,
  [1635] = 1,
    ACTIONS(308), 1,
      anon_sym_RBRACK,
  [1639] = 1,
    ACTIONS(310), 1,
      sym_identifier,
  [1643] = 1,
    ACTIONS(312), 1,
      ts_builtin_sym_end,
  [1647] = 1,
    ACTIONS(314), 1,
      anon_sym_endif,
  [1651] = 1,
    ACTIONS(232), 1,
      anon_sym_elseif,
  [1655] = 1,
    ACTIONS(316), 1,
      sym_identifier,
  [1659] = 1,
    ACTIONS(318), 1,
      anon_sym_DQUOTE,
  [1663] = 1,
    ACTIONS(318), 1,
      anon_sym_SQUOTE,
  [1667] = 1,
    ACTIONS(320), 1,
      anon_sym_endif,
  [1671] = 1,
    ACTIONS(322), 1,
      anon_sym_endif,
  [1675] = 1,
    ACTIONS(324), 1,
      aux_sym_string_token2,
  [1679] = 1,
    ACTIONS(326), 1,
      aux_sym_string_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 47,
  [SMALL_STATE(4)] = 94,
  [SMALL_STATE(5)] = 132,
  [SMALL_STATE(6)] = 167,
  [SMALL_STATE(7)] = 202,
  [SMALL_STATE(8)] = 237,
  [SMALL_STATE(9)] = 272,
  [SMALL_STATE(10)] = 300,
  [SMALL_STATE(11)] = 328,
  [SMALL_STATE(12)] = 356,
  [SMALL_STATE(13)] = 384,
  [SMALL_STATE(14)] = 409,
  [SMALL_STATE(15)] = 434,
  [SMALL_STATE(16)] = 457,
  [SMALL_STATE(17)] = 478,
  [SMALL_STATE(18)] = 499,
  [SMALL_STATE(19)] = 520,
  [SMALL_STATE(20)] = 545,
  [SMALL_STATE(21)] = 565,
  [SMALL_STATE(22)] = 585,
  [SMALL_STATE(23)] = 605,
  [SMALL_STATE(24)] = 625,
  [SMALL_STATE(25)] = 647,
  [SMALL_STATE(26)] = 673,
  [SMALL_STATE(27)] = 692,
  [SMALL_STATE(28)] = 711,
  [SMALL_STATE(29)] = 730,
  [SMALL_STATE(30)] = 749,
  [SMALL_STATE(31)] = 775,
  [SMALL_STATE(32)] = 801,
  [SMALL_STATE(33)] = 827,
  [SMALL_STATE(34)] = 853,
  [SMALL_STATE(35)] = 884,
  [SMALL_STATE(36)] = 911,
  [SMALL_STATE(37)] = 942,
  [SMALL_STATE(38)] = 966,
  [SMALL_STATE(39)] = 991,
  [SMALL_STATE(40)] = 1016,
  [SMALL_STATE(41)] = 1039,
  [SMALL_STATE(42)] = 1061,
  [SMALL_STATE(43)] = 1083,
  [SMALL_STATE(44)] = 1105,
  [SMALL_STATE(45)] = 1127,
  [SMALL_STATE(46)] = 1140,
  [SMALL_STATE(47)] = 1151,
  [SMALL_STATE(48)] = 1162,
  [SMALL_STATE(49)] = 1173,
  [SMALL_STATE(50)] = 1184,
  [SMALL_STATE(51)] = 1195,
  [SMALL_STATE(52)] = 1206,
  [SMALL_STATE(53)] = 1217,
  [SMALL_STATE(54)] = 1228,
  [SMALL_STATE(55)] = 1239,
  [SMALL_STATE(56)] = 1250,
  [SMALL_STATE(57)] = 1261,
  [SMALL_STATE(58)] = 1272,
  [SMALL_STATE(59)] = 1283,
  [SMALL_STATE(60)] = 1294,
  [SMALL_STATE(61)] = 1305,
  [SMALL_STATE(62)] = 1316,
  [SMALL_STATE(63)] = 1327,
  [SMALL_STATE(64)] = 1338,
  [SMALL_STATE(65)] = 1349,
  [SMALL_STATE(66)] = 1360,
  [SMALL_STATE(67)] = 1371,
  [SMALL_STATE(68)] = 1382,
  [SMALL_STATE(69)] = 1398,
  [SMALL_STATE(70)] = 1414,
  [SMALL_STATE(71)] = 1427,
  [SMALL_STATE(72)] = 1437,
  [SMALL_STATE(73)] = 1447,
  [SMALL_STATE(74)] = 1457,
  [SMALL_STATE(75)] = 1467,
  [SMALL_STATE(76)] = 1477,
  [SMALL_STATE(77)] = 1487,
  [SMALL_STATE(78)] = 1497,
  [SMALL_STATE(79)] = 1507,
  [SMALL_STATE(80)] = 1514,
  [SMALL_STATE(81)] = 1519,
  [SMALL_STATE(82)] = 1524,
  [SMALL_STATE(83)] = 1529,
  [SMALL_STATE(84)] = 1536,
  [SMALL_STATE(85)] = 1543,
  [SMALL_STATE(86)] = 1550,
  [SMALL_STATE(87)] = 1555,
  [SMALL_STATE(88)] = 1562,
  [SMALL_STATE(89)] = 1569,
  [SMALL_STATE(90)] = 1576,
  [SMALL_STATE(91)] = 1583,
  [SMALL_STATE(92)] = 1590,
  [SMALL_STATE(93)] = 1597,
  [SMALL_STATE(94)] = 1602,
  [SMALL_STATE(95)] = 1609,
  [SMALL_STATE(96)] = 1616,
  [SMALL_STATE(97)] = 1623,
  [SMALL_STATE(98)] = 1627,
  [SMALL_STATE(99)] = 1631,
  [SMALL_STATE(100)] = 1635,
  [SMALL_STATE(101)] = 1639,
  [SMALL_STATE(102)] = 1643,
  [SMALL_STATE(103)] = 1647,
  [SMALL_STATE(104)] = 1651,
  [SMALL_STATE(105)] = 1655,
  [SMALL_STATE(106)] = 1659,
  [SMALL_STATE(107)] = 1663,
  [SMALL_STATE(108)] = 1667,
  [SMALL_STATE(109)] = 1671,
  [SMALL_STATE(110)] = 1675,
  [SMALL_STATE(111)] = 1679,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_access_repeat1, 2, .production_id = 5),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_access_repeat1, 2, .production_id = 5), SHIFT_REPEAT(105),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_access_repeat1, 2, .production_id = 5), SHIFT_REPEAT(75),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_access_repeat1, 2, .production_id = 5),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access, 2, .production_id = 1),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_access, 2, .production_id = 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 1),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(37),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_access_repeat1, 3, .production_id = 4),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_access_repeat1, 3, .production_id = 4),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_access_repeat1, 2, .production_id = 4),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_access_repeat1, 2, .production_id = 4),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 3, .production_id = 10),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 3, .production_id = 10),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 3, .production_id = 6),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter, 3, .production_id = 6),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 5, .production_id = 6),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter, 5, .production_id = 6),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_expression, 2, .production_id = 2),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_expression, 2, .production_id = 2),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_render_expression, 2, .production_id = 3),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_render_expression, 2, .production_id = 3),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [154] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(64),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elseif_expression, 5, .production_id = 13),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_expression, 4, .production_id = 11),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elseif_expression, 4, .production_id = 9),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_expression, 3),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operator, 1),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operator, 1),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expression, 10, .production_id = 18),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expression, 10, .production_id = 18),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expression, 9, .production_id = 16),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expression, 9, .production_id = 16),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expression, 9, .production_id = 17),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expression, 9, .production_id = 17),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expression, 8, .production_id = 14),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expression, 8, .production_id = 14),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expression, 8, .production_id = 13),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expression, 8, .production_id = 13),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 3),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 3),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expression, 8, .production_id = 12),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expression, 8, .production_id = 12),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expression, 7, .production_id = 9),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expression, 7, .production_id = 9),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 1),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 1),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expression, 9, .production_id = 15),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expression, 9, .production_id = 15),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [224] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_expression_repeat1, 2, .production_id = 8), SHIFT_REPEAT(104),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_expression_repeat1, 2, .production_id = 8), SHIFT_REPEAT(104),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_expression_repeat1, 1, .production_id = 7),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_expression_repeat1, 1, .production_id = 7),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [312] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
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
