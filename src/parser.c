#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 39
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 50
#define ALIAS_COUNT 0
#define TOKEN_COUNT 31
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 6

enum {
  sym_identifier = 1,
  aux_sym_content_token1 = 2,
  anon_sym_LBRACE_PERCENT_PERCENT = 3,
  anon_sym_LBRACE_PERCENT = 4,
  anon_sym_LBRACE_PERCENT_DASH = 5,
  anon_sym_PERCENT_RBRACE = 6,
  anon_sym_DASH_PERCENT_RBRACE = 7,
  anon_sym_LBRACE_LBRACE = 8,
  anon_sym_LBRACE_LBRACE_DASH = 9,
  anon_sym_RBRACE_RBRACE = 10,
  anon_sym_DASH_RBRACE_RBRACE = 11,
  anon_sym_SQUOTE = 12,
  aux_sym_string_token1 = 13,
  anon_sym_DQUOTE = 14,
  aux_sym_string_token2 = 15,
  aux_sym_number_token1 = 16,
  anon_sym_true = 17,
  anon_sym_false = 18,
  anon_sym_DOT = 19,
  anon_sym_EQ_EQ = 20,
  anon_sym_BANG_EQ = 21,
  anon_sym_GT = 22,
  anon_sym_LT = 23,
  anon_sym_GT_EQ = 24,
  anon_sym_LT_EQ = 25,
  anon_sym_or = 26,
  anon_sym_and = 27,
  sym_contains_operator = 28,
  anon_sym_include = 29,
  anon_sym_render = 30,
  sym_template = 31,
  sym_content = 32,
  sym_directive = 33,
  sym_output_directive = 34,
  sym_code = 35,
  sym__literal = 36,
  sym_string = 37,
  sym_number = 38,
  sym_boolean = 39,
  sym__expression = 40,
  sym_selector_expression = 41,
  sym_binary_operator = 42,
  sym_include_expression = 43,
  sym_render_expression = 44,
  sym_binary_expression = 45,
  aux_sym_template_repeat1 = 46,
  aux_sym_content_repeat1 = 47,
  aux_sym_code_repeat1 = 48,
  aux_sym_selector_expression_repeat1 = 49,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [aux_sym_content_token1] = "content_token1",
  [anon_sym_LBRACE_PERCENT_PERCENT] = "{%%",
  [anon_sym_LBRACE_PERCENT] = "{%",
  [anon_sym_LBRACE_PERCENT_DASH] = "{%-",
  [anon_sym_PERCENT_RBRACE] = "%}",
  [anon_sym_DASH_PERCENT_RBRACE] = "-%}",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_LBRACE_LBRACE_DASH] = "{{-",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [anon_sym_DASH_RBRACE_RBRACE] = "-}}",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token2] = "string_token2",
  [aux_sym_number_token1] = "number_token1",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_DOT] = ".",
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
  [sym_template] = "template",
  [sym_content] = "content",
  [sym_directive] = "directive",
  [sym_output_directive] = "output_directive",
  [sym_code] = "code",
  [sym__literal] = "_literal",
  [sym_string] = "string",
  [sym_number] = "number",
  [sym_boolean] = "boolean",
  [sym__expression] = "_expression",
  [sym_selector_expression] = "selector_expression",
  [sym_binary_operator] = "binary_operator",
  [sym_include_expression] = "include_expression",
  [sym_render_expression] = "render_expression",
  [sym_binary_expression] = "binary_expression",
  [aux_sym_template_repeat1] = "template_repeat1",
  [aux_sym_content_repeat1] = "content_repeat1",
  [aux_sym_code_repeat1] = "code_repeat1",
  [aux_sym_selector_expression_repeat1] = "selector_expression_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [aux_sym_content_token1] = aux_sym_content_token1,
  [anon_sym_LBRACE_PERCENT_PERCENT] = anon_sym_LBRACE_PERCENT_PERCENT,
  [anon_sym_LBRACE_PERCENT] = anon_sym_LBRACE_PERCENT,
  [anon_sym_LBRACE_PERCENT_DASH] = anon_sym_LBRACE_PERCENT_DASH,
  [anon_sym_PERCENT_RBRACE] = anon_sym_PERCENT_RBRACE,
  [anon_sym_DASH_PERCENT_RBRACE] = anon_sym_DASH_PERCENT_RBRACE,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [anon_sym_LBRACE_LBRACE_DASH] = anon_sym_LBRACE_LBRACE_DASH,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [anon_sym_DASH_RBRACE_RBRACE] = anon_sym_DASH_RBRACE_RBRACE,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [aux_sym_number_token1] = aux_sym_number_token1,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_DOT] = anon_sym_DOT,
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
  [sym_template] = sym_template,
  [sym_content] = sym_content,
  [sym_directive] = sym_directive,
  [sym_output_directive] = sym_output_directive,
  [sym_code] = sym_code,
  [sym__literal] = sym__literal,
  [sym_string] = sym_string,
  [sym_number] = sym_number,
  [sym_boolean] = sym_boolean,
  [sym__expression] = sym__expression,
  [sym_selector_expression] = sym_selector_expression,
  [sym_binary_operator] = sym_binary_operator,
  [sym_include_expression] = sym_include_expression,
  [sym_render_expression] = sym_render_expression,
  [sym_binary_expression] = sym_binary_expression,
  [aux_sym_template_repeat1] = aux_sym_template_repeat1,
  [aux_sym_content_repeat1] = aux_sym_content_repeat1,
  [aux_sym_code_repeat1] = aux_sym_code_repeat1,
  [aux_sym_selector_expression_repeat1] = aux_sym_selector_expression_repeat1,
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
  [aux_sym_content_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACE_PERCENT_PERCENT] = {
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
  [sym_template] = {
    .visible = true,
    .named = true,
  },
  [sym_content] = {
    .visible = true,
    .named = true,
  },
  [sym_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_output_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_code] = {
    .visible = true,
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
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_selector_expression] = {
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
  [aux_sym_template_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_content_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_code_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_selector_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_field = 1,
  field_include = 2,
  field_included_file = 3,
  field_operand = 4,
  field_render = 5,
  field_rendered_file = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
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
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(12);
      if (lookahead == '!') ADVANCE(3);
      if (lookahead == '"') ADVANCE(28);
      if (lookahead == '%') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(25);
      if (lookahead == '-') ADVANCE(2);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '<') ADVANCE(38);
      if (lookahead == '=') ADVANCE(4);
      if (lookahead == '>') ADVANCE(37);
      if (lookahead == '{') ADVANCE(1);
      if (lookahead == '}') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 1:
      if (lookahead == '%') ADVANCE(17);
      if (lookahead == '{') ADVANCE(21);
      END_STATE();
    case 2:
      if (lookahead == '%') ADVANCE(7);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == '}') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 3:
      if (lookahead == '=') ADVANCE(36);
      END_STATE();
    case 4:
      if (lookahead == '=') ADVANCE(35);
      END_STATE();
    case 5:
      if (lookahead == '}') ADVANCE(19);
      END_STATE();
    case 6:
      if (lookahead == '}') ADVANCE(23);
      END_STATE();
    case 7:
      if (lookahead == '}') ADVANCE(20);
      END_STATE();
    case 8:
      if (lookahead == '}') ADVANCE(24);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 11:
      if (eof) ADVANCE(12);
      if (lookahead == '{') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '%') ADVANCE(17);
      if (lookahead == '{') ADVANCE(21);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '{') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENT_PERCENT);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENT);
      if (lookahead == '%') ADVANCE(16);
      if (lookahead == '-') ADVANCE(18);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENT_DASH);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_PERCENT_RBRACE);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_DASH_PERCENT_RBRACE);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead == '-') ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE_DASH);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_DASH_RBRACE_RBRACE);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(27);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(30);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(39);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(40);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 40:
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
      if (lookahead == 'f') ADVANCE(3);
      if (lookahead == 'i') ADVANCE(4);
      if (lookahead == 'o') ADVANCE(5);
      if (lookahead == 'r') ADVANCE(6);
      if (lookahead == 't') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'n') ADVANCE(8);
      END_STATE();
    case 2:
      if (lookahead == 'o') ADVANCE(9);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(10);
      END_STATE();
    case 4:
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 5:
      if (lookahead == 'r') ADVANCE(12);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 7:
      if (lookahead == 'r') ADVANCE(14);
      END_STATE();
    case 8:
      if (lookahead == 'd') ADVANCE(15);
      END_STATE();
    case 9:
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 10:
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 11:
      if (lookahead == 'c') ADVANCE(18);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 13:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 14:
      if (lookahead == 'u') ADVANCE(20);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 16:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 17:
      if (lookahead == 's') ADVANCE(22);
      END_STATE();
    case 18:
      if (lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(24);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(26);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 23:
      if (lookahead == 'u') ADVANCE(28);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(31);
      END_STATE();
    case 29:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 30:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_render);
      END_STATE();
    case 33:
      if (lookahead == 's') ADVANCE(35);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_contains_operator);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 11},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 11},
  [20] = {.lex_state = 11},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 11},
  [23] = {.lex_state = 11},
  [24] = {.lex_state = 11},
  [25] = {.lex_state = 11},
  [26] = {.lex_state = 11},
  [27] = {.lex_state = 11},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 29},
  [38] = {.lex_state = 26},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_LBRACE_PERCENT_PERCENT] = ACTIONS(1),
    [anon_sym_LBRACE_PERCENT] = ACTIONS(1),
    [anon_sym_LBRACE_PERCENT_DASH] = ACTIONS(1),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(1),
    [anon_sym_DASH_PERCENT_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE_DASH] = ACTIONS(1),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1),
    [anon_sym_DASH_RBRACE_RBRACE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_number_token1] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
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
  },
  [1] = {
    [sym_template] = STATE(36),
    [sym_content] = STATE(19),
    [sym_directive] = STATE(19),
    [sym_output_directive] = STATE(19),
    [aux_sym_template_repeat1] = STATE(19),
    [aux_sym_content_repeat1] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_content_token1] = ACTIONS(5),
    [anon_sym_LBRACE_PERCENT_PERCENT] = ACTIONS(5),
    [anon_sym_LBRACE_PERCENT] = ACTIONS(7),
    [anon_sym_LBRACE_PERCENT_DASH] = ACTIONS(7),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(9),
    [anon_sym_LBRACE_LBRACE_DASH] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(15), 1,
      anon_sym_DOT,
    STATE(3), 1,
      aux_sym_selector_expression_repeat1,
    ACTIONS(11), 10,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_or,
      anon_sym_and,
      sym_contains_operator,
      anon_sym_include,
      anon_sym_render,
    ACTIONS(13), 11,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      aux_sym_number_token1,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [32] = 4,
    ACTIONS(15), 1,
      anon_sym_DOT,
    STATE(4), 1,
      aux_sym_selector_expression_repeat1,
    ACTIONS(17), 10,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_or,
      anon_sym_and,
      sym_contains_operator,
      anon_sym_include,
      anon_sym_render,
    ACTIONS(19), 11,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      aux_sym_number_token1,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [64] = 4,
    ACTIONS(25), 1,
      anon_sym_DOT,
    STATE(4), 1,
      aux_sym_selector_expression_repeat1,
    ACTIONS(21), 10,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_or,
      anon_sym_and,
      sym_contains_operator,
      anon_sym_include,
      anon_sym_render,
    ACTIONS(23), 11,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      aux_sym_number_token1,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [96] = 10,
    ACTIONS(28), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(36), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      aux_sym_number_token1,
    ACTIONS(45), 1,
      anon_sym_include,
    ACTIONS(48), 1,
      anon_sym_render,
    STATE(5), 1,
      aux_sym_code_repeat1,
    ACTIONS(42), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 4,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
    STATE(8), 9,
      sym__literal,
      sym_string,
      sym_number,
      sym_boolean,
      sym__expression,
      sym_selector_expression,
      sym_include_expression,
      sym_render_expression,
      sym_binary_expression,
  [139] = 6,
    ACTIONS(59), 1,
      sym_contains_operator,
    STATE(18), 1,
      sym_binary_operator,
    ACTIONS(55), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(57), 4,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(51), 5,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
      anon_sym_include,
      anon_sym_render,
    ACTIONS(53), 7,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      aux_sym_number_token1,
  [174] = 10,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(65), 1,
      anon_sym_SQUOTE,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(69), 1,
      aux_sym_number_token1,
    ACTIONS(73), 1,
      anon_sym_include,
    ACTIONS(75), 1,
      anon_sym_render,
    STATE(5), 1,
      aux_sym_code_repeat1,
    ACTIONS(71), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(63), 4,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
    STATE(8), 9,
      sym__literal,
      sym_string,
      sym_number,
      sym_boolean,
      sym__expression,
      sym_selector_expression,
      sym_include_expression,
      sym_render_expression,
      sym_binary_expression,
  [217] = 6,
    ACTIONS(59), 1,
      sym_contains_operator,
    STATE(18), 1,
      sym_binary_operator,
    ACTIONS(55), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(57), 4,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(77), 5,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
      anon_sym_include,
      anon_sym_render,
    ACTIONS(79), 7,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      aux_sym_number_token1,
  [252] = 2,
    ACTIONS(81), 11,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DOT,
      sym_identifier,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_or,
      anon_sym_and,
      sym_contains_operator,
      anon_sym_include,
      anon_sym_render,
    ACTIONS(83), 11,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      aux_sym_number_token1,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [279] = 2,
    ACTIONS(85), 10,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_or,
      anon_sym_and,
      sym_contains_operator,
      anon_sym_include,
      anon_sym_render,
    ACTIONS(87), 11,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      aux_sym_number_token1,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [305] = 2,
    ACTIONS(89), 10,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_or,
      anon_sym_and,
      sym_contains_operator,
      anon_sym_include,
      anon_sym_render,
    ACTIONS(91), 11,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      aux_sym_number_token1,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [331] = 11,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(65), 1,
      anon_sym_SQUOTE,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(69), 1,
      aux_sym_number_token1,
    ACTIONS(73), 1,
      anon_sym_include,
    ACTIONS(75), 1,
      anon_sym_render,
    STATE(7), 1,
      aux_sym_code_repeat1,
    STATE(31), 1,
      sym_code,
    ACTIONS(71), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(93), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
    STATE(8), 9,
      sym__literal,
      sym_string,
      sym_number,
      sym_boolean,
      sym__expression,
      sym_selector_expression,
      sym_include_expression,
      sym_render_expression,
      sym_binary_expression,
  [375] = 2,
    ACTIONS(95), 10,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_or,
      anon_sym_and,
      sym_contains_operator,
      anon_sym_include,
      anon_sym_render,
    ACTIONS(97), 11,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      aux_sym_number_token1,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [401] = 2,
    ACTIONS(99), 10,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_or,
      anon_sym_and,
      sym_contains_operator,
      anon_sym_include,
      anon_sym_render,
    ACTIONS(101), 11,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      aux_sym_number_token1,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [427] = 2,
    ACTIONS(51), 10,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_or,
      anon_sym_and,
      sym_contains_operator,
      anon_sym_include,
      anon_sym_render,
    ACTIONS(53), 11,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      aux_sym_number_token1,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [453] = 11,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(65), 1,
      anon_sym_SQUOTE,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(69), 1,
      aux_sym_number_token1,
    ACTIONS(73), 1,
      anon_sym_include,
    ACTIONS(75), 1,
      anon_sym_render,
    STATE(7), 1,
      aux_sym_code_repeat1,
    STATE(32), 1,
      sym_code,
    ACTIONS(71), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(103), 2,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
    STATE(8), 9,
      sym__literal,
      sym_string,
      sym_number,
      sym_boolean,
      sym__expression,
      sym_selector_expression,
      sym_include_expression,
      sym_render_expression,
      sym_binary_expression,
  [497] = 2,
    ACTIONS(105), 10,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_or,
      anon_sym_and,
      sym_contains_operator,
      anon_sym_include,
      anon_sym_render,
    ACTIONS(107), 11,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      aux_sym_number_token1,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [523] = 8,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(65), 1,
      anon_sym_SQUOTE,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(69), 1,
      aux_sym_number_token1,
    ACTIONS(73), 1,
      anon_sym_include,
    ACTIONS(75), 1,
      anon_sym_render,
    ACTIONS(71), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(6), 9,
      sym__literal,
      sym_string,
      sym_number,
      sym_boolean,
      sym__expression,
      sym_selector_expression,
      sym_include_expression,
      sym_render_expression,
      sym_binary_expression,
  [557] = 6,
    ACTIONS(109), 1,
      ts_builtin_sym_end,
    STATE(23), 1,
      aux_sym_content_repeat1,
    ACTIONS(5), 2,
      aux_sym_content_token1,
      anon_sym_LBRACE_PERCENT_PERCENT,
    ACTIONS(7), 2,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
    ACTIONS(9), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(20), 4,
      sym_content,
      sym_directive,
      sym_output_directive,
      aux_sym_template_repeat1,
  [582] = 6,
    ACTIONS(111), 1,
      ts_builtin_sym_end,
    STATE(23), 1,
      aux_sym_content_repeat1,
    ACTIONS(113), 2,
      aux_sym_content_token1,
      anon_sym_LBRACE_PERCENT_PERCENT,
    ACTIONS(116), 2,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
    ACTIONS(119), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(20), 4,
      sym_content,
      sym_directive,
      sym_output_directive,
      aux_sym_template_repeat1,
  [607] = 2,
    ACTIONS(124), 3,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      aux_sym_number_token1,
    ACTIONS(122), 5,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
      anon_sym_include,
      anon_sym_render,
  [620] = 4,
    ACTIONS(126), 1,
      ts_builtin_sym_end,
    STATE(22), 1,
      aux_sym_content_repeat1,
    ACTIONS(128), 2,
      aux_sym_content_token1,
      anon_sym_LBRACE_PERCENT_PERCENT,
    ACTIONS(131), 4,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [637] = 4,
    ACTIONS(133), 1,
      ts_builtin_sym_end,
    STATE(22), 1,
      aux_sym_content_repeat1,
    ACTIONS(135), 2,
      aux_sym_content_token1,
      anon_sym_LBRACE_PERCENT_PERCENT,
    ACTIONS(137), 4,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [654] = 2,
    ACTIONS(139), 1,
      ts_builtin_sym_end,
    ACTIONS(141), 6,
      aux_sym_content_token1,
      anon_sym_LBRACE_PERCENT_PERCENT,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [666] = 2,
    ACTIONS(143), 1,
      ts_builtin_sym_end,
    ACTIONS(145), 6,
      aux_sym_content_token1,
      anon_sym_LBRACE_PERCENT_PERCENT,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [678] = 2,
    ACTIONS(147), 1,
      ts_builtin_sym_end,
    ACTIONS(149), 6,
      aux_sym_content_token1,
      anon_sym_LBRACE_PERCENT_PERCENT,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [690] = 2,
    ACTIONS(151), 1,
      ts_builtin_sym_end,
    ACTIONS(153), 6,
      aux_sym_content_token1,
      anon_sym_LBRACE_PERCENT_PERCENT,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [702] = 3,
    ACTIONS(65), 1,
      anon_sym_SQUOTE,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    STATE(15), 1,
      sym_string,
  [712] = 3,
    ACTIONS(65), 1,
      anon_sym_SQUOTE,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    STATE(13), 1,
      sym_string,
  [722] = 3,
    ACTIONS(65), 1,
      anon_sym_SQUOTE,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    STATE(17), 1,
      sym_string,
  [732] = 1,
    ACTIONS(155), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [737] = 1,
    ACTIONS(157), 2,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [742] = 1,
    ACTIONS(159), 1,
      anon_sym_SQUOTE,
  [746] = 1,
    ACTIONS(159), 1,
      anon_sym_DQUOTE,
  [750] = 1,
    ACTIONS(161), 1,
      sym_identifier,
  [754] = 1,
    ACTIONS(163), 1,
      ts_builtin_sym_end,
  [758] = 1,
    ACTIONS(165), 1,
      aux_sym_string_token2,
  [762] = 1,
    ACTIONS(167), 1,
      aux_sym_string_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 32,
  [SMALL_STATE(4)] = 64,
  [SMALL_STATE(5)] = 96,
  [SMALL_STATE(6)] = 139,
  [SMALL_STATE(7)] = 174,
  [SMALL_STATE(8)] = 217,
  [SMALL_STATE(9)] = 252,
  [SMALL_STATE(10)] = 279,
  [SMALL_STATE(11)] = 305,
  [SMALL_STATE(12)] = 331,
  [SMALL_STATE(13)] = 375,
  [SMALL_STATE(14)] = 401,
  [SMALL_STATE(15)] = 427,
  [SMALL_STATE(16)] = 453,
  [SMALL_STATE(17)] = 497,
  [SMALL_STATE(18)] = 523,
  [SMALL_STATE(19)] = 557,
  [SMALL_STATE(20)] = 582,
  [SMALL_STATE(21)] = 607,
  [SMALL_STATE(22)] = 620,
  [SMALL_STATE(23)] = 637,
  [SMALL_STATE(24)] = 654,
  [SMALL_STATE(25)] = 666,
  [SMALL_STATE(26)] = 678,
  [SMALL_STATE(27)] = 690,
  [SMALL_STATE(28)] = 702,
  [SMALL_STATE(29)] = 712,
  [SMALL_STATE(30)] = 722,
  [SMALL_STATE(31)] = 732,
  [SMALL_STATE(32)] = 737,
  [SMALL_STATE(33)] = 742,
  [SMALL_STATE(34)] = 746,
  [SMALL_STATE(35)] = 750,
  [SMALL_STATE(36)] = 754,
  [SMALL_STATE(37)] = 758,
  [SMALL_STATE(38)] = 762,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [11] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_expression, 2, .production_id = 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_expression, 2, .production_id = 1),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_expression_repeat1, 2, .production_id = 5),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_expression_repeat1, 2, .production_id = 5),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_selector_expression_repeat1, 2, .production_id = 5), SHIFT_REPEAT(35),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(2),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(38),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(37),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(11),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(14),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(30),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(29),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_repeat1, 1),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_expression_repeat1, 2, .production_id = 4),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_expression_repeat1, 2, .production_id = 4),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_render_expression, 2, .production_id = 3),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_render_expression, 2, .production_id = 3),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_expression, 2, .production_id = 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_expression, 2, .production_id = 2),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(23),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(16),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(12),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operator, 1),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operator, 1),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(22),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content, 1),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_content, 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_directive, 2),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_directive, 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 3),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_directive, 3),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_directive, 3),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 2),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [163] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
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
