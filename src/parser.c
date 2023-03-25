#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 96
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 74
#define ALIAS_COUNT 0
#define TOKEN_COUNT 33
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_package = 1,
  anon_sym_SEMI = 2,
  anon_sym_api = 3,
  anon_sym_impl = 4,
  anon_sym_fn = 5,
  sym_identifier = 6,
  anon_sym_LPAREN = 7,
  anon_sym_RPAREN = 8,
  anon_sym_DASH_GT = 9,
  anon_sym_auto = 10,
  anon_sym_i32 = 11,
  anon_sym_0 = 12,
  sym_non_zero_digit = 13,
  sym_digit = 14,
  anon_sym_0x = 15,
  anon_sym_0X = 16,
  aux_sym_hex_digit_token1 = 17,
  aux_sym_hex_digit_token2 = 18,
  anon_sym_DQUOTE = 19,
  sym_string_char = 20,
  anon_sym_TAB = 21,
  anon_sym_LF = 22,
  anon_sym_CR = 23,
  anon_sym_BSLASH = 24,
  anon_sym_BSLASHu = 25,
  anon_sym_LBRACE = 26,
  anon_sym_RBRACE = 27,
  anon_sym_var = 28,
  anon_sym_EQ = 29,
  anon_sym_return = 30,
  anon_sym_COLON = 31,
  anon_sym__ = 32,
  sym_source_file = 33,
  sym_input = 34,
  sym_package_directive = 35,
  sym_api_or_impl = 36,
  sym_declaration = 37,
  sym_function_declaration = 38,
  sym_declared_name = 39,
  sym_maybe_empty_tuple_pattern = 40,
  sym_return_term = 41,
  sym_expression = 42,
  sym_if_expression = 43,
  sym_statement_expression = 44,
  sym_ref_deref_expression = 45,
  sym_postfix_expression = 46,
  sym_primary_expression = 47,
  sym_int_literal = 48,
  sym_decimal_number = 49,
  sym_hex_int_literal = 50,
  sym_hex_indicator = 51,
  sym_hex_number = 52,
  sym_hex_digit = 53,
  sym_string_literal = 54,
  sym_double_quoted_string_literal = 55,
  sym_string_escape = 56,
  sym_string_single_escpace = 57,
  sym_numeric_escape = 58,
  sym_code_point = 59,
  sym_block = 60,
  sym_statement = 61,
  sym_return_expression = 62,
  sym_tuple = 63,
  sym_paren_expression_base = 64,
  sym_paren_expression_contents = 65,
  sym_pattern = 66,
  sym_non_expression_pattern = 67,
  sym_binding_lhs = 68,
  aux_sym_input_repeat1 = 69,
  aux_sym_decimal_number_repeat1 = 70,
  aux_sym_hex_number_repeat1 = 71,
  aux_sym_double_quoted_string_literal_repeat1 = 72,
  aux_sym_block_repeat1 = 73,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_package] = "package",
  [anon_sym_SEMI] = ";",
  [anon_sym_api] = "api",
  [anon_sym_impl] = "impl",
  [anon_sym_fn] = "fn",
  [sym_identifier] = "identifier",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_auto] = "auto",
  [anon_sym_i32] = "i32",
  [anon_sym_0] = "0",
  [sym_non_zero_digit] = "non_zero_digit",
  [sym_digit] = "digit",
  [anon_sym_0x] = "0x",
  [anon_sym_0X] = "0X",
  [aux_sym_hex_digit_token1] = "hex_digit_token1",
  [aux_sym_hex_digit_token2] = "hex_digit_token2",
  [anon_sym_DQUOTE] = "\"",
  [sym_string_char] = "string_char",
  [anon_sym_TAB] = "\t",
  [anon_sym_LF] = "\n",
  [anon_sym_CR] = "\r",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_BSLASHu] = "\\u",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_var] = "var",
  [anon_sym_EQ] = "=",
  [anon_sym_return] = "return",
  [anon_sym_COLON] = ":",
  [anon_sym__] = "_",
  [sym_source_file] = "source_file",
  [sym_input] = "input",
  [sym_package_directive] = "package_directive",
  [sym_api_or_impl] = "api_or_impl",
  [sym_declaration] = "declaration",
  [sym_function_declaration] = "function_declaration",
  [sym_declared_name] = "declared_name",
  [sym_maybe_empty_tuple_pattern] = "maybe_empty_tuple_pattern",
  [sym_return_term] = "return_term",
  [sym_expression] = "expression",
  [sym_if_expression] = "if_expression",
  [sym_statement_expression] = "statement_expression",
  [sym_ref_deref_expression] = "ref_deref_expression",
  [sym_postfix_expression] = "postfix_expression",
  [sym_primary_expression] = "primary_expression",
  [sym_int_literal] = "int_literal",
  [sym_decimal_number] = "decimal_number",
  [sym_hex_int_literal] = "hex_int_literal",
  [sym_hex_indicator] = "hex_indicator",
  [sym_hex_number] = "hex_number",
  [sym_hex_digit] = "hex_digit",
  [sym_string_literal] = "string_literal",
  [sym_double_quoted_string_literal] = "double_quoted_string_literal",
  [sym_string_escape] = "string_escape",
  [sym_string_single_escpace] = "string_single_escpace",
  [sym_numeric_escape] = "numeric_escape",
  [sym_code_point] = "code_point",
  [sym_block] = "block",
  [sym_statement] = "statement",
  [sym_return_expression] = "return_expression",
  [sym_tuple] = "tuple",
  [sym_paren_expression_base] = "paren_expression_base",
  [sym_paren_expression_contents] = "paren_expression_contents",
  [sym_pattern] = "pattern",
  [sym_non_expression_pattern] = "non_expression_pattern",
  [sym_binding_lhs] = "binding_lhs",
  [aux_sym_input_repeat1] = "input_repeat1",
  [aux_sym_decimal_number_repeat1] = "decimal_number_repeat1",
  [aux_sym_hex_number_repeat1] = "hex_number_repeat1",
  [aux_sym_double_quoted_string_literal_repeat1] = "double_quoted_string_literal_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_package] = anon_sym_package,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_api] = anon_sym_api,
  [anon_sym_impl] = anon_sym_impl,
  [anon_sym_fn] = anon_sym_fn,
  [sym_identifier] = sym_identifier,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_auto] = anon_sym_auto,
  [anon_sym_i32] = anon_sym_i32,
  [anon_sym_0] = anon_sym_0,
  [sym_non_zero_digit] = sym_non_zero_digit,
  [sym_digit] = sym_digit,
  [anon_sym_0x] = anon_sym_0x,
  [anon_sym_0X] = anon_sym_0X,
  [aux_sym_hex_digit_token1] = aux_sym_hex_digit_token1,
  [aux_sym_hex_digit_token2] = aux_sym_hex_digit_token2,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_string_char] = sym_string_char,
  [anon_sym_TAB] = anon_sym_TAB,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_CR] = anon_sym_CR,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [anon_sym_BSLASHu] = anon_sym_BSLASHu,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_var] = anon_sym_var,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym__] = anon_sym__,
  [sym_source_file] = sym_source_file,
  [sym_input] = sym_input,
  [sym_package_directive] = sym_package_directive,
  [sym_api_or_impl] = sym_api_or_impl,
  [sym_declaration] = sym_declaration,
  [sym_function_declaration] = sym_function_declaration,
  [sym_declared_name] = sym_declared_name,
  [sym_maybe_empty_tuple_pattern] = sym_maybe_empty_tuple_pattern,
  [sym_return_term] = sym_return_term,
  [sym_expression] = sym_expression,
  [sym_if_expression] = sym_if_expression,
  [sym_statement_expression] = sym_statement_expression,
  [sym_ref_deref_expression] = sym_ref_deref_expression,
  [sym_postfix_expression] = sym_postfix_expression,
  [sym_primary_expression] = sym_primary_expression,
  [sym_int_literal] = sym_int_literal,
  [sym_decimal_number] = sym_decimal_number,
  [sym_hex_int_literal] = sym_hex_int_literal,
  [sym_hex_indicator] = sym_hex_indicator,
  [sym_hex_number] = sym_hex_number,
  [sym_hex_digit] = sym_hex_digit,
  [sym_string_literal] = sym_string_literal,
  [sym_double_quoted_string_literal] = sym_double_quoted_string_literal,
  [sym_string_escape] = sym_string_escape,
  [sym_string_single_escpace] = sym_string_single_escpace,
  [sym_numeric_escape] = sym_numeric_escape,
  [sym_code_point] = sym_code_point,
  [sym_block] = sym_block,
  [sym_statement] = sym_statement,
  [sym_return_expression] = sym_return_expression,
  [sym_tuple] = sym_tuple,
  [sym_paren_expression_base] = sym_paren_expression_base,
  [sym_paren_expression_contents] = sym_paren_expression_contents,
  [sym_pattern] = sym_pattern,
  [sym_non_expression_pattern] = sym_non_expression_pattern,
  [sym_binding_lhs] = sym_binding_lhs,
  [aux_sym_input_repeat1] = aux_sym_input_repeat1,
  [aux_sym_decimal_number_repeat1] = aux_sym_decimal_number_repeat1,
  [aux_sym_hex_number_repeat1] = aux_sym_hex_number_repeat1,
  [aux_sym_double_quoted_string_literal_repeat1] = aux_sym_double_quoted_string_literal_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_package] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_api] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_impl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fn] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_auto] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_0] = {
    .visible = true,
    .named = false,
  },
  [sym_non_zero_digit] = {
    .visible = true,
    .named = true,
  },
  [sym_digit] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_0x] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_0X] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_hex_digit_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_hex_digit_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_string_char] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_TAB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHu] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_var] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_input] = {
    .visible = true,
    .named = true,
  },
  [sym_package_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_api_or_impl] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_function_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_declared_name] = {
    .visible = true,
    .named = true,
  },
  [sym_maybe_empty_tuple_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_return_term] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_if_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_statement_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_ref_deref_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_postfix_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_primary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_int_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_decimal_number] = {
    .visible = true,
    .named = true,
  },
  [sym_hex_int_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_hex_indicator] = {
    .visible = true,
    .named = true,
  },
  [sym_hex_number] = {
    .visible = true,
    .named = true,
  },
  [sym_hex_digit] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_double_quoted_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_string_escape] = {
    .visible = true,
    .named = true,
  },
  [sym_string_single_escpace] = {
    .visible = true,
    .named = true,
  },
  [sym_numeric_escape] = {
    .visible = true,
    .named = true,
  },
  [sym_code_point] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_return_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple] = {
    .visible = true,
    .named = true,
  },
  [sym_paren_expression_base] = {
    .visible = true,
    .named = true,
  },
  [sym_paren_expression_contents] = {
    .visible = true,
    .named = true,
  },
  [sym_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_non_expression_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_binding_lhs] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_input_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_decimal_number_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_hex_number_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_double_quoted_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
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
  [15] = 11,
  [16] = 12,
  [17] = 12,
  [18] = 11,
  [19] = 11,
  [20] = 12,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 24,
  [27] = 25,
  [28] = 28,
  [29] = 24,
  [30] = 25,
  [31] = 31,
  [32] = 25,
  [33] = 24,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(37);
      if (lookahead == '"') ADVANCE(73);
      if (lookahead == '(') ADVANCE(56);
      if (lookahead == ')') ADVANCE(57);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '0') ADVANCE(63);
      if (lookahead == ':') ADVANCE(104);
      if (lookahead == ';') ADVANCE(39);
      if (lookahead == '=') ADVANCE(101);
      if (lookahead == '\\') ADVANCE(95);
      if (lookahead == '_') ADVANCE(105);
      if (lookahead == 'a') ADVANCE(71);
      if (lookahead == 'f') ADVANCE(70);
      if (lookahead == 'i') ADVANCE(11);
      if (lookahead == 'p') ADVANCE(14);
      if (lookahead == 'r') ADVANCE(19);
      if (lookahead == 'v') ADVANCE(15);
      if (lookahead == '{') ADVANCE(97);
      if (lookahead == '}') ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('b' <= lookahead && lookahead <= 'e')) ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(72);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(80);
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '\r') ADVANCE(90);
      if (lookahead == ' ') ADVANCE(75);
      if (lookahead == '"') ADVANCE(73);
      if (lookahead == '\\') ADVANCE(95);
      if (lookahead != 0) ADVANCE(74);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(81);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '\r') ADVANCE(91);
      if (lookahead == ' ') ADVANCE(76);
      if (lookahead == '"') ADVANCE(73);
      if (lookahead == '(') ADVANCE(56);
      if (lookahead == '=') ADVANCE(101);
      if (lookahead == '\\') ADVANCE(95);
      if (lookahead != 0) ADVANCE(74);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(82);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == '\r') ADVANCE(92);
      if (lookahead == ' ') ADVANCE(77);
      if (lookahead == '"') ADVANCE(73);
      if (lookahead == '(') ADVANCE(56);
      if (lookahead == ')') ADVANCE(57);
      if (lookahead == '\\') ADVANCE(95);
      if (lookahead != 0) ADVANCE(74);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(83);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '\r') ADVANCE(93);
      if (lookahead == ' ') ADVANCE(78);
      if (lookahead == '"') ADVANCE(73);
      if (lookahead == '(') ADVANCE(56);
      if (lookahead == ';') ADVANCE(39);
      if (lookahead == '\\') ADVANCE(95);
      if (lookahead != 0) ADVANCE(74);
      END_STATE();
    case 5:
      if (lookahead == '\t') ADVANCE(84);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '\r') ADVANCE(94);
      if (lookahead == ' ') ADVANCE(79);
      if (lookahead == '"') ADVANCE(73);
      if (lookahead == '(') ADVANCE(56);
      if (lookahead == '\\') ADVANCE(95);
      if (lookahead == '{') ADVANCE(97);
      if (lookahead != 0) ADVANCE(74);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(73);
      if (lookahead == ')') ADVANCE(57);
      if (lookahead == '0') ADVANCE(64);
      if (lookahead == 'i') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(73);
      if (lookahead == '0') ADVANCE(64);
      if (lookahead == '_') ADVANCE(105);
      if (lookahead == 'a') ADVANCE(53);
      if (lookahead == 'i') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(73);
      if (lookahead == '0') ADVANCE(64);
      if (lookahead == 'i') ADVANCE(44);
      if (lookahead == 'r') ADVANCE(46);
      if (lookahead == 'v') ADVANCE(45);
      if (lookahead == '}') ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 9:
      if (lookahead == '(') ADVANCE(56);
      if (lookahead == ')') ADVANCE(57);
      if (lookahead == ';') ADVANCE(39);
      if (lookahead == '=') ADVANCE(101);
      if (lookahead == '{') ADVANCE(97);
      if (lookahead == '}') ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(72);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      END_STATE();
    case 10:
      if (lookahead == '2') ADVANCE(61);
      END_STATE();
    case 11:
      if (lookahead == '3') ADVANCE(10);
      if (lookahead == 'm') ADVANCE(29);
      END_STATE();
    case 12:
      if (lookahead == '>') ADVANCE(58);
      END_STATE();
    case 13:
      if (lookahead == 'X') ADVANCE(68);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(17);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(30);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(20);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(22);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 20:
      if (lookahead == 'g') ADVANCE(18);
      END_STATE();
    case 21:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 22:
      if (lookahead == 'k') ADVANCE(16);
      END_STATE();
    case 23:
      if (lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 24:
      if (lookahead == 'm') ADVANCE(29);
      END_STATE();
    case 25:
      if (lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 26:
      if (lookahead == 'n') ADVANCE(102);
      END_STATE();
    case 27:
      if (lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 28:
      if (lookahead == 'p') ADVANCE(21);
      END_STATE();
    case 29:
      if (lookahead == 'p') ADVANCE(23);
      END_STATE();
    case 30:
      if (lookahead == 'r') ADVANCE(99);
      END_STATE();
    case 31:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 32:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 33:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == 'u') ADVANCE(31);
      END_STATE();
    case 35:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 36:
      if (eof) ADVANCE(37);
      if (lookahead == '0') ADVANCE(13);
      if (lookahead == 'a') ADVANCE(28);
      if (lookahead == 'f') ADVANCE(25);
      if (lookahead == 'i') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      END_STATE();
    case 37:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_package);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_api);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_impl);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_auto);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_auto);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_i32);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_i32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == 'X') ADVANCE(68);
      if (lookahead == 'x') ADVANCE(67);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == 'x') ADVANCE(67);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_non_zero_digit);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_digit);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_0x);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_0X);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_hex_digit_token1);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_hex_digit_token1);
      if (lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_hex_digit_token1);
      if (lookahead == 'p') ADVANCE(21);
      if (lookahead == 'u') ADVANCE(32);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_hex_digit_token2);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_string_char);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_string_char);
      if (lookahead == '\t') ADVANCE(80);
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '\r') ADVANCE(90);
      if (lookahead == ' ') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(74);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_string_char);
      if (lookahead == '\t') ADVANCE(81);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '\r') ADVANCE(91);
      if (lookahead == ' ') ADVANCE(76);
      if (lookahead == '(') ADVANCE(56);
      if (lookahead == '=') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(74);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_string_char);
      if (lookahead == '\t') ADVANCE(82);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == '\r') ADVANCE(92);
      if (lookahead == ' ') ADVANCE(77);
      if (lookahead == '(') ADVANCE(56);
      if (lookahead == ')') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(74);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_string_char);
      if (lookahead == '\t') ADVANCE(83);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '\r') ADVANCE(93);
      if (lookahead == ' ') ADVANCE(78);
      if (lookahead == '(') ADVANCE(56);
      if (lookahead == ';') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(74);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_string_char);
      if (lookahead == '\t') ADVANCE(84);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '\r') ADVANCE(94);
      if (lookahead == ' ') ADVANCE(79);
      if (lookahead == '(') ADVANCE(56);
      if (lookahead == '{') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(74);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\t') ADVANCE(80);
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '\r') ADVANCE(90);
      if (lookahead == ' ') ADVANCE(75);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\t') ADVANCE(81);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '\r') ADVANCE(91);
      if (lookahead == ' ') ADVANCE(76);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\t') ADVANCE(82);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == '\r') ADVANCE(92);
      if (lookahead == ' ') ADVANCE(77);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\t') ADVANCE(83);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '\r') ADVANCE(93);
      if (lookahead == ' ') ADVANCE(78);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\t') ADVANCE(84);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '\r') ADVANCE(94);
      if (lookahead == ' ') ADVANCE(79);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\t') ADVANCE(80);
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '\r') ADVANCE(90);
      if (lookahead == ' ') ADVANCE(75);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\t') ADVANCE(81);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '\r') ADVANCE(91);
      if (lookahead == ' ') ADVANCE(76);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\t') ADVANCE(82);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == '\r') ADVANCE(92);
      if (lookahead == ' ') ADVANCE(77);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\t') ADVANCE(83);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '\r') ADVANCE(93);
      if (lookahead == ' ') ADVANCE(78);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\t') ADVANCE(84);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '\r') ADVANCE(94);
      if (lookahead == ' ') ADVANCE(79);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\t') ADVANCE(80);
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '\r') ADVANCE(90);
      if (lookahead == ' ') ADVANCE(75);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\t') ADVANCE(81);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '\r') ADVANCE(91);
      if (lookahead == ' ') ADVANCE(76);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\t') ADVANCE(82);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == '\r') ADVANCE(92);
      if (lookahead == ' ') ADVANCE(77);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\t') ADVANCE(83);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '\r') ADVANCE(93);
      if (lookahead == ' ') ADVANCE(78);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\t') ADVANCE(84);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '\r') ADVANCE(94);
      if (lookahead == ' ') ADVANCE(79);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'u') ADVANCE(96);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_BSLASHu);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_var);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_return);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 7},
  [3] = {.lex_state = 7},
  [4] = {.lex_state = 8},
  [5] = {.lex_state = 8},
  [6] = {.lex_state = 8},
  [7] = {.lex_state = 6},
  [8] = {.lex_state = 6},
  [9] = {.lex_state = 7},
  [10] = {.lex_state = 6},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 9},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 9},
  [22] = {.lex_state = 8},
  [23] = {.lex_state = 8},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 9},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 8},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 9},
  [36] = {.lex_state = 9},
  [37] = {.lex_state = 9},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 9},
  [42] = {.lex_state = 9},
  [43] = {.lex_state = 9},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 36},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 36},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 36},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 9},
  [62] = {.lex_state = 36},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 36},
  [66] = {.lex_state = 36},
  [67] = {.lex_state = 35},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 36},
  [70] = {.lex_state = 36},
  [71] = {.lex_state = 36},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 36},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 35},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_package] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_api] = ACTIONS(1),
    [anon_sym_impl] = ACTIONS(1),
    [anon_sym_fn] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_auto] = ACTIONS(1),
    [anon_sym_i32] = ACTIONS(1),
    [anon_sym_0] = ACTIONS(1),
    [sym_non_zero_digit] = ACTIONS(1),
    [sym_digit] = ACTIONS(1),
    [anon_sym_0x] = ACTIONS(1),
    [anon_sym_0X] = ACTIONS(1),
    [aux_sym_hex_digit_token1] = ACTIONS(1),
    [aux_sym_hex_digit_token2] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_BSLASHu] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(95),
    [sym_input] = STATE(94),
    [sym_package_directive] = STATE(47),
    [anon_sym_package] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 20,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(7), 1,
      anon_sym_auto,
    ACTIONS(9), 1,
      anon_sym_i32,
    ACTIONS(11), 1,
      anon_sym_0,
    ACTIONS(13), 1,
      sym_non_zero_digit,
    ACTIONS(15), 1,
      anon_sym_0x,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym__,
    STATE(34), 1,
      sym_postfix_expression,
    STATE(42), 1,
      sym_hex_indicator,
    STATE(46), 1,
      sym_double_quoted_string_literal,
    STATE(53), 1,
      sym_primary_expression,
    STATE(57), 1,
      sym_ref_deref_expression,
    STATE(58), 1,
      sym_statement_expression,
    STATE(59), 1,
      sym_if_expression,
    STATE(79), 1,
      sym_binding_lhs,
    STATE(82), 1,
      sym_pattern,
    STATE(52), 2,
      sym_decimal_number,
      sym_hex_int_literal,
    STATE(56), 2,
      sym_int_literal,
      sym_string_literal,
    STATE(83), 2,
      sym_expression,
      sym_non_expression_pattern,
  [64] = 20,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(7), 1,
      anon_sym_auto,
    ACTIONS(9), 1,
      anon_sym_i32,
    ACTIONS(11), 1,
      anon_sym_0,
    ACTIONS(13), 1,
      sym_non_zero_digit,
    ACTIONS(15), 1,
      anon_sym_0x,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym__,
    STATE(34), 1,
      sym_postfix_expression,
    STATE(42), 1,
      sym_hex_indicator,
    STATE(46), 1,
      sym_double_quoted_string_literal,
    STATE(53), 1,
      sym_primary_expression,
    STATE(57), 1,
      sym_ref_deref_expression,
    STATE(58), 1,
      sym_statement_expression,
    STATE(59), 1,
      sym_if_expression,
    STATE(79), 1,
      sym_binding_lhs,
    STATE(80), 1,
      sym_pattern,
    STATE(52), 2,
      sym_decimal_number,
      sym_hex_int_literal,
    STATE(56), 2,
      sym_int_literal,
      sym_string_literal,
    STATE(83), 2,
      sym_expression,
      sym_non_expression_pattern,
  [128] = 17,
    ACTIONS(11), 1,
      anon_sym_0,
    ACTIONS(13), 1,
      sym_non_zero_digit,
    ACTIONS(15), 1,
      anon_sym_0x,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_RBRACE,
    ACTIONS(25), 1,
      anon_sym_var,
    ACTIONS(27), 1,
      anon_sym_return,
    STATE(34), 1,
      sym_postfix_expression,
    STATE(42), 1,
      sym_hex_indicator,
    STATE(46), 1,
      sym_double_quoted_string_literal,
    STATE(53), 1,
      sym_primary_expression,
    STATE(57), 1,
      sym_ref_deref_expression,
    STATE(91), 1,
      sym_statement_expression,
    ACTIONS(9), 2,
      sym_identifier,
      anon_sym_i32,
    STATE(5), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(52), 2,
      sym_decimal_number,
      sym_hex_int_literal,
    STATE(56), 2,
      sym_int_literal,
      sym_string_literal,
  [184] = 17,
    ACTIONS(11), 1,
      anon_sym_0,
    ACTIONS(13), 1,
      sym_non_zero_digit,
    ACTIONS(15), 1,
      anon_sym_0x,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_var,
    ACTIONS(27), 1,
      anon_sym_return,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    STATE(34), 1,
      sym_postfix_expression,
    STATE(42), 1,
      sym_hex_indicator,
    STATE(46), 1,
      sym_double_quoted_string_literal,
    STATE(53), 1,
      sym_primary_expression,
    STATE(57), 1,
      sym_ref_deref_expression,
    STATE(91), 1,
      sym_statement_expression,
    ACTIONS(9), 2,
      sym_identifier,
      anon_sym_i32,
    STATE(6), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(52), 2,
      sym_decimal_number,
      sym_hex_int_literal,
    STATE(56), 2,
      sym_int_literal,
      sym_string_literal,
  [240] = 17,
    ACTIONS(34), 1,
      anon_sym_0,
    ACTIONS(37), 1,
      sym_non_zero_digit,
    ACTIONS(40), 1,
      anon_sym_0x,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(46), 1,
      anon_sym_RBRACE,
    ACTIONS(48), 1,
      anon_sym_var,
    ACTIONS(51), 1,
      anon_sym_return,
    STATE(34), 1,
      sym_postfix_expression,
    STATE(42), 1,
      sym_hex_indicator,
    STATE(46), 1,
      sym_double_quoted_string_literal,
    STATE(53), 1,
      sym_primary_expression,
    STATE(57), 1,
      sym_ref_deref_expression,
    STATE(91), 1,
      sym_statement_expression,
    ACTIONS(31), 2,
      sym_identifier,
      anon_sym_i32,
    STATE(6), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(52), 2,
      sym_decimal_number,
      sym_hex_int_literal,
    STATE(56), 2,
      sym_int_literal,
      sym_string_literal,
  [296] = 17,
    ACTIONS(11), 1,
      anon_sym_0,
    ACTIONS(13), 1,
      sym_non_zero_digit,
    ACTIONS(15), 1,
      anon_sym_0x,
    ACTIONS(54), 1,
      anon_sym_RPAREN,
    ACTIONS(56), 1,
      anon_sym_DQUOTE,
    STATE(34), 1,
      sym_postfix_expression,
    STATE(42), 1,
      sym_hex_indicator,
    STATE(46), 1,
      sym_double_quoted_string_literal,
    STATE(53), 1,
      sym_primary_expression,
    STATE(57), 1,
      sym_ref_deref_expression,
    STATE(58), 1,
      sym_statement_expression,
    STATE(59), 1,
      sym_if_expression,
    STATE(87), 1,
      sym_paren_expression_contents,
    STATE(89), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_identifier,
      anon_sym_i32,
    STATE(52), 2,
      sym_decimal_number,
      sym_hex_int_literal,
    STATE(56), 2,
      sym_int_literal,
      sym_string_literal,
  [351] = 16,
    ACTIONS(11), 1,
      anon_sym_0,
    ACTIONS(13), 1,
      sym_non_zero_digit,
    ACTIONS(15), 1,
      anon_sym_0x,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    STATE(34), 1,
      sym_postfix_expression,
    STATE(42), 1,
      sym_hex_indicator,
    STATE(46), 1,
      sym_double_quoted_string_literal,
    STATE(53), 1,
      sym_primary_expression,
    STATE(57), 1,
      sym_ref_deref_expression,
    STATE(58), 1,
      sym_statement_expression,
    STATE(59), 1,
      sym_if_expression,
    STATE(72), 1,
      sym_expression,
    STATE(76), 1,
      sym_return_expression,
    ACTIONS(9), 2,
      sym_identifier,
      anon_sym_i32,
    STATE(52), 2,
      sym_decimal_number,
      sym_hex_int_literal,
    STATE(56), 2,
      sym_int_literal,
      sym_string_literal,
  [403] = 16,
    ACTIONS(11), 1,
      anon_sym_0,
    ACTIONS(13), 1,
      sym_non_zero_digit,
    ACTIONS(15), 1,
      anon_sym_0x,
    ACTIONS(58), 1,
      anon_sym_auto,
    ACTIONS(60), 1,
      anon_sym_DQUOTE,
    STATE(34), 1,
      sym_postfix_expression,
    STATE(42), 1,
      sym_hex_indicator,
    STATE(46), 1,
      sym_double_quoted_string_literal,
    STATE(53), 1,
      sym_primary_expression,
    STATE(57), 1,
      sym_ref_deref_expression,
    STATE(58), 1,
      sym_statement_expression,
    STATE(59), 1,
      sym_if_expression,
    STATE(88), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_identifier,
      anon_sym_i32,
    STATE(52), 2,
      sym_decimal_number,
      sym_hex_int_literal,
    STATE(56), 2,
      sym_int_literal,
      sym_string_literal,
  [455] = 15,
    ACTIONS(11), 1,
      anon_sym_0,
    ACTIONS(13), 1,
      sym_non_zero_digit,
    ACTIONS(15), 1,
      anon_sym_0x,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    STATE(34), 1,
      sym_postfix_expression,
    STATE(42), 1,
      sym_hex_indicator,
    STATE(46), 1,
      sym_double_quoted_string_literal,
    STATE(53), 1,
      sym_primary_expression,
    STATE(57), 1,
      sym_ref_deref_expression,
    STATE(58), 1,
      sym_statement_expression,
    STATE(59), 1,
      sym_if_expression,
    STATE(81), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_identifier,
      anon_sym_i32,
    STATE(52), 2,
      sym_decimal_number,
      sym_hex_int_literal,
    STATE(56), 2,
      sym_int_literal,
      sym_string_literal,
  [504] = 6,
    ACTIONS(62), 1,
      anon_sym_DQUOTE,
    ACTIONS(64), 1,
      sym_string_char,
    ACTIONS(68), 1,
      anon_sym_BSLASHu,
    STATE(14), 2,
      sym_string_escape,
      aux_sym_double_quoted_string_literal_repeat1,
    STATE(38), 2,
      sym_string_single_escpace,
      sym_numeric_escape,
    ACTIONS(66), 4,
      anon_sym_TAB,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_BSLASH,
  [528] = 6,
    ACTIONS(68), 1,
      anon_sym_BSLASHu,
    ACTIONS(70), 1,
      anon_sym_DQUOTE,
    ACTIONS(72), 1,
      sym_string_char,
    STATE(11), 2,
      sym_string_escape,
      aux_sym_double_quoted_string_literal_repeat1,
    STATE(38), 2,
      sym_string_single_escpace,
      sym_numeric_escape,
    ACTIONS(66), 4,
      anon_sym_TAB,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_BSLASH,
  [552] = 3,
    STATE(13), 2,
      sym_hex_digit,
      aux_sym_hex_number_repeat1,
    ACTIONS(76), 3,
      sym_digit,
      aux_sym_hex_digit_token1,
      aux_sym_hex_digit_token2,
    ACTIONS(74), 6,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ,
  [570] = 5,
    ACTIONS(82), 1,
      sym_string_char,
    ACTIONS(85), 1,
      anon_sym_BSLASHu,
    STATE(14), 2,
      sym_string_escape,
      aux_sym_double_quoted_string_literal_repeat1,
    STATE(38), 2,
      sym_string_single_escpace,
      sym_numeric_escape,
    ACTIONS(79), 5,
      anon_sym_DQUOTE,
      anon_sym_TAB,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_BSLASH,
  [592] = 6,
    ACTIONS(64), 1,
      sym_string_char,
    ACTIONS(68), 1,
      anon_sym_BSLASHu,
    ACTIONS(88), 1,
      anon_sym_DQUOTE,
    STATE(14), 2,
      sym_string_escape,
      aux_sym_double_quoted_string_literal_repeat1,
    STATE(38), 2,
      sym_string_single_escpace,
      sym_numeric_escape,
    ACTIONS(66), 4,
      anon_sym_TAB,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_BSLASH,
  [616] = 6,
    ACTIONS(68), 1,
      anon_sym_BSLASHu,
    ACTIONS(90), 1,
      anon_sym_DQUOTE,
    ACTIONS(92), 1,
      sym_string_char,
    STATE(19), 2,
      sym_string_escape,
      aux_sym_double_quoted_string_literal_repeat1,
    STATE(38), 2,
      sym_string_single_escpace,
      sym_numeric_escape,
    ACTIONS(66), 4,
      anon_sym_TAB,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_BSLASH,
  [640] = 6,
    ACTIONS(68), 1,
      anon_sym_BSLASHu,
    ACTIONS(94), 1,
      anon_sym_DQUOTE,
    ACTIONS(96), 1,
      sym_string_char,
    STATE(18), 2,
      sym_string_escape,
      aux_sym_double_quoted_string_literal_repeat1,
    STATE(38), 2,
      sym_string_single_escpace,
      sym_numeric_escape,
    ACTIONS(66), 4,
      anon_sym_TAB,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_BSLASH,
  [664] = 6,
    ACTIONS(64), 1,
      sym_string_char,
    ACTIONS(68), 1,
      anon_sym_BSLASHu,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    STATE(14), 2,
      sym_string_escape,
      aux_sym_double_quoted_string_literal_repeat1,
    STATE(38), 2,
      sym_string_single_escpace,
      sym_numeric_escape,
    ACTIONS(66), 4,
      anon_sym_TAB,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_BSLASH,
  [688] = 6,
    ACTIONS(64), 1,
      sym_string_char,
    ACTIONS(68), 1,
      anon_sym_BSLASHu,
    ACTIONS(100), 1,
      anon_sym_DQUOTE,
    STATE(14), 2,
      sym_string_escape,
      aux_sym_double_quoted_string_literal_repeat1,
    STATE(38), 2,
      sym_string_single_escpace,
      sym_numeric_escape,
    ACTIONS(66), 4,
      anon_sym_TAB,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_BSLASH,
  [712] = 6,
    ACTIONS(68), 1,
      anon_sym_BSLASHu,
    ACTIONS(102), 1,
      anon_sym_DQUOTE,
    ACTIONS(104), 1,
      sym_string_char,
    STATE(15), 2,
      sym_string_escape,
      aux_sym_double_quoted_string_literal_repeat1,
    STATE(38), 2,
      sym_string_single_escpace,
      sym_numeric_escape,
    ACTIONS(66), 4,
      anon_sym_TAB,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_BSLASH,
  [736] = 3,
    STATE(13), 2,
      sym_hex_digit,
      aux_sym_hex_number_repeat1,
    ACTIONS(108), 3,
      sym_digit,
      aux_sym_hex_digit_token1,
      aux_sym_hex_digit_token2,
    ACTIONS(106), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_EQ,
  [753] = 2,
    ACTIONS(112), 4,
      sym_non_zero_digit,
      anon_sym_0x,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
    ACTIONS(110), 5,
      sym_identifier,
      anon_sym_i32,
      anon_sym_0,
      anon_sym_var,
      anon_sym_return,
  [767] = 2,
    ACTIONS(116), 4,
      sym_non_zero_digit,
      anon_sym_0x,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
    ACTIONS(114), 5,
      sym_identifier,
      anon_sym_i32,
      anon_sym_0,
      anon_sym_var,
      anon_sym_return,
  [781] = 2,
    ACTIONS(118), 2,
      anon_sym_LPAREN,
      anon_sym_EQ,
    ACTIONS(120), 7,
      anon_sym_DQUOTE,
      sym_string_char,
      anon_sym_TAB,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_BSLASH,
      anon_sym_BSLASHu,
  [795] = 2,
    ACTIONS(122), 2,
      anon_sym_LPAREN,
      anon_sym_EQ,
    ACTIONS(120), 7,
      anon_sym_DQUOTE,
      sym_string_char,
      anon_sym_TAB,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_BSLASH,
      anon_sym_BSLASHu,
  [809] = 2,
    ACTIONS(118), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(120), 7,
      anon_sym_DQUOTE,
      sym_string_char,
      anon_sym_TAB,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_BSLASH,
      anon_sym_BSLASHu,
  [823] = 2,
    ACTIONS(122), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(120), 7,
      anon_sym_DQUOTE,
      sym_string_char,
      anon_sym_TAB,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_BSLASH,
      anon_sym_BSLASHu,
  [837] = 1,
    ACTIONS(124), 9,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_digit,
      aux_sym_hex_digit_token1,
      aux_sym_hex_digit_token2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ,
  [849] = 2,
    ACTIONS(118), 2,
      anon_sym_SEMI,
      anon_sym_LPAREN,
    ACTIONS(120), 7,
      anon_sym_DQUOTE,
      sym_string_char,
      anon_sym_TAB,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_BSLASH,
      anon_sym_BSLASHu,
  [863] = 2,
    ACTIONS(122), 2,
      anon_sym_SEMI,
      anon_sym_LPAREN,
    ACTIONS(120), 7,
      anon_sym_DQUOTE,
      sym_string_char,
      anon_sym_TAB,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_BSLASH,
      anon_sym_BSLASHu,
  [877] = 2,
    ACTIONS(128), 4,
      sym_non_zero_digit,
      anon_sym_0x,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
    ACTIONS(126), 5,
      sym_identifier,
      anon_sym_i32,
      anon_sym_0,
      anon_sym_var,
      anon_sym_return,
  [891] = 2,
    ACTIONS(122), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
    ACTIONS(120), 7,
      anon_sym_DQUOTE,
      sym_string_char,
      anon_sym_TAB,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_BSLASH,
      anon_sym_BSLASHu,
  [905] = 2,
    ACTIONS(118), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
    ACTIONS(120), 7,
      anon_sym_DQUOTE,
      sym_string_char,
      anon_sym_TAB,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_BSLASH,
      anon_sym_BSLASHu,
  [919] = 4,
    ACTIONS(132), 1,
      anon_sym_LPAREN,
    STATE(48), 1,
      sym_tuple,
    STATE(49), 1,
      sym_paren_expression_base,
    ACTIONS(130), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_EQ,
  [935] = 3,
    ACTIONS(136), 1,
      sym_digit,
    STATE(36), 1,
      aux_sym_decimal_number_repeat1,
    ACTIONS(134), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_EQ,
  [949] = 3,
    ACTIONS(140), 1,
      sym_digit,
    STATE(37), 1,
      aux_sym_decimal_number_repeat1,
    ACTIONS(138), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_EQ,
  [963] = 3,
    ACTIONS(144), 1,
      sym_digit,
    STATE(37), 1,
      aux_sym_decimal_number_repeat1,
    ACTIONS(142), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_EQ,
  [977] = 1,
    ACTIONS(147), 7,
      anon_sym_DQUOTE,
      sym_string_char,
      anon_sym_TAB,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_BSLASH,
      anon_sym_BSLASHu,
  [987] = 1,
    ACTIONS(120), 7,
      anon_sym_DQUOTE,
      sym_string_char,
      anon_sym_TAB,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_BSLASH,
      anon_sym_BSLASHu,
  [997] = 1,
    ACTIONS(149), 7,
      anon_sym_DQUOTE,
      sym_string_char,
      anon_sym_TAB,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_BSLASH,
      anon_sym_BSLASHu,
  [1007] = 3,
    ACTIONS(151), 1,
      anon_sym_RBRACE,
    STATE(13), 2,
      sym_hex_digit,
      aux_sym_hex_number_repeat1,
    ACTIONS(108), 3,
      sym_digit,
      aux_sym_hex_digit_token1,
      aux_sym_hex_digit_token2,
  [1020] = 3,
    STATE(50), 1,
      sym_hex_number,
    STATE(21), 2,
      sym_hex_digit,
      aux_sym_hex_number_repeat1,
    ACTIONS(108), 3,
      sym_digit,
      aux_sym_hex_digit_token1,
      aux_sym_hex_digit_token2,
  [1033] = 3,
    STATE(74), 1,
      sym_code_point,
    STATE(41), 2,
      sym_hex_digit,
      aux_sym_hex_number_repeat1,
    ACTIONS(108), 3,
      sym_digit,
      aux_sym_hex_digit_token1,
      aux_sym_hex_digit_token2,
  [1046] = 1,
    ACTIONS(153), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_EQ,
  [1054] = 1,
    ACTIONS(134), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_EQ,
  [1062] = 1,
    ACTIONS(155), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_EQ,
  [1070] = 4,
    ACTIONS(157), 1,
      ts_builtin_sym_end,
    ACTIONS(159), 1,
      anon_sym_fn,
    STATE(66), 1,
      sym_function_declaration,
    STATE(51), 2,
      sym_declaration,
      aux_sym_input_repeat1,
  [1084] = 1,
    ACTIONS(161), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_EQ,
  [1092] = 1,
    ACTIONS(163), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_EQ,
  [1100] = 1,
    ACTIONS(165), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_EQ,
  [1108] = 4,
    ACTIONS(159), 1,
      anon_sym_fn,
    ACTIONS(167), 1,
      ts_builtin_sym_end,
    STATE(66), 1,
      sym_function_declaration,
    STATE(55), 2,
      sym_declaration,
      aux_sym_input_repeat1,
  [1122] = 1,
    ACTIONS(169), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_EQ,
  [1130] = 1,
    ACTIONS(171), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_EQ,
  [1138] = 1,
    ACTIONS(173), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_EQ,
  [1146] = 4,
    ACTIONS(175), 1,
      ts_builtin_sym_end,
    ACTIONS(177), 1,
      anon_sym_fn,
    STATE(66), 1,
      sym_function_declaration,
    STATE(55), 2,
      sym_declaration,
      aux_sym_input_repeat1,
  [1160] = 1,
    ACTIONS(180), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_EQ,
  [1168] = 1,
    ACTIONS(182), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_EQ,
  [1175] = 1,
    ACTIONS(184), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_EQ,
  [1182] = 1,
    ACTIONS(186), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_EQ,
  [1189] = 2,
    ACTIONS(188), 1,
      anon_sym_COLON,
    ACTIONS(180), 2,
      anon_sym_LPAREN,
      anon_sym_EQ,
  [1197] = 1,
    ACTIONS(190), 3,
      sym_digit,
      aux_sym_hex_digit_token1,
      aux_sym_hex_digit_token2,
  [1203] = 2,
    STATE(73), 1,
      sym_api_or_impl,
    ACTIONS(192), 2,
      anon_sym_api,
      anon_sym_impl,
  [1211] = 2,
    ACTIONS(194), 1,
      anon_sym_LPAREN,
    STATE(68), 1,
      sym_maybe_empty_tuple_pattern,
  [1218] = 2,
    ACTIONS(196), 1,
      anon_sym_LBRACE,
    STATE(70), 1,
      sym_block,
  [1225] = 1,
    ACTIONS(198), 2,
      ts_builtin_sym_end,
      anon_sym_fn,
  [1230] = 1,
    ACTIONS(200), 2,
      ts_builtin_sym_end,
      anon_sym_fn,
  [1235] = 2,
    ACTIONS(202), 1,
      sym_identifier,
    STATE(63), 1,
      sym_declared_name,
  [1242] = 2,
    ACTIONS(204), 1,
      anon_sym_DASH_GT,
    STATE(64), 1,
      sym_return_term,
  [1249] = 1,
    ACTIONS(206), 2,
      ts_builtin_sym_end,
      anon_sym_fn,
  [1254] = 1,
    ACTIONS(208), 2,
      ts_builtin_sym_end,
      anon_sym_fn,
  [1259] = 1,
    ACTIONS(210), 2,
      ts_builtin_sym_end,
      anon_sym_fn,
  [1264] = 1,
    ACTIONS(212), 1,
      anon_sym_SEMI,
  [1268] = 1,
    ACTIONS(214), 1,
      anon_sym_SEMI,
  [1272] = 1,
    ACTIONS(216), 1,
      anon_sym_RBRACE,
  [1276] = 1,
    ACTIONS(218), 1,
      anon_sym_LPAREN,
  [1280] = 1,
    ACTIONS(220), 1,
      anon_sym_SEMI,
  [1284] = 1,
    ACTIONS(222), 1,
      anon_sym_SEMI,
  [1288] = 1,
    ACTIONS(224), 1,
      anon_sym_LBRACE,
  [1292] = 1,
    ACTIONS(226), 1,
      anon_sym_COLON,
  [1296] = 1,
    ACTIONS(228), 1,
      anon_sym_EQ,
  [1300] = 1,
    ACTIONS(230), 1,
      anon_sym_SEMI,
  [1304] = 1,
    ACTIONS(232), 1,
      anon_sym_EQ,
  [1308] = 1,
    ACTIONS(234), 1,
      anon_sym_EQ,
  [1312] = 1,
    ACTIONS(188), 1,
      anon_sym_COLON,
  [1316] = 1,
    ACTIONS(236), 1,
      anon_sym_EQ,
  [1320] = 1,
    ACTIONS(238), 1,
      anon_sym_0X,
  [1324] = 1,
    ACTIONS(240), 1,
      anon_sym_RPAREN,
  [1328] = 1,
    ACTIONS(242), 1,
      anon_sym_LBRACE,
  [1332] = 1,
    ACTIONS(244), 1,
      anon_sym_RPAREN,
  [1336] = 1,
    ACTIONS(246), 1,
      anon_sym_DASH_GT,
  [1340] = 1,
    ACTIONS(248), 1,
      anon_sym_SEMI,
  [1344] = 1,
    ACTIONS(250), 1,
      anon_sym_RPAREN,
  [1348] = 1,
    ACTIONS(252), 1,
      sym_identifier,
  [1352] = 1,
    ACTIONS(254), 1,
      ts_builtin_sym_end,
  [1356] = 1,
    ACTIONS(256), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 64,
  [SMALL_STATE(4)] = 128,
  [SMALL_STATE(5)] = 184,
  [SMALL_STATE(6)] = 240,
  [SMALL_STATE(7)] = 296,
  [SMALL_STATE(8)] = 351,
  [SMALL_STATE(9)] = 403,
  [SMALL_STATE(10)] = 455,
  [SMALL_STATE(11)] = 504,
  [SMALL_STATE(12)] = 528,
  [SMALL_STATE(13)] = 552,
  [SMALL_STATE(14)] = 570,
  [SMALL_STATE(15)] = 592,
  [SMALL_STATE(16)] = 616,
  [SMALL_STATE(17)] = 640,
  [SMALL_STATE(18)] = 664,
  [SMALL_STATE(19)] = 688,
  [SMALL_STATE(20)] = 712,
  [SMALL_STATE(21)] = 736,
  [SMALL_STATE(22)] = 753,
  [SMALL_STATE(23)] = 767,
  [SMALL_STATE(24)] = 781,
  [SMALL_STATE(25)] = 795,
  [SMALL_STATE(26)] = 809,
  [SMALL_STATE(27)] = 823,
  [SMALL_STATE(28)] = 837,
  [SMALL_STATE(29)] = 849,
  [SMALL_STATE(30)] = 863,
  [SMALL_STATE(31)] = 877,
  [SMALL_STATE(32)] = 891,
  [SMALL_STATE(33)] = 905,
  [SMALL_STATE(34)] = 919,
  [SMALL_STATE(35)] = 935,
  [SMALL_STATE(36)] = 949,
  [SMALL_STATE(37)] = 963,
  [SMALL_STATE(38)] = 977,
  [SMALL_STATE(39)] = 987,
  [SMALL_STATE(40)] = 997,
  [SMALL_STATE(41)] = 1007,
  [SMALL_STATE(42)] = 1020,
  [SMALL_STATE(43)] = 1033,
  [SMALL_STATE(44)] = 1046,
  [SMALL_STATE(45)] = 1054,
  [SMALL_STATE(46)] = 1062,
  [SMALL_STATE(47)] = 1070,
  [SMALL_STATE(48)] = 1084,
  [SMALL_STATE(49)] = 1092,
  [SMALL_STATE(50)] = 1100,
  [SMALL_STATE(51)] = 1108,
  [SMALL_STATE(52)] = 1122,
  [SMALL_STATE(53)] = 1130,
  [SMALL_STATE(54)] = 1138,
  [SMALL_STATE(55)] = 1146,
  [SMALL_STATE(56)] = 1160,
  [SMALL_STATE(57)] = 1168,
  [SMALL_STATE(58)] = 1175,
  [SMALL_STATE(59)] = 1182,
  [SMALL_STATE(60)] = 1189,
  [SMALL_STATE(61)] = 1197,
  [SMALL_STATE(62)] = 1203,
  [SMALL_STATE(63)] = 1211,
  [SMALL_STATE(64)] = 1218,
  [SMALL_STATE(65)] = 1225,
  [SMALL_STATE(66)] = 1230,
  [SMALL_STATE(67)] = 1235,
  [SMALL_STATE(68)] = 1242,
  [SMALL_STATE(69)] = 1249,
  [SMALL_STATE(70)] = 1254,
  [SMALL_STATE(71)] = 1259,
  [SMALL_STATE(72)] = 1264,
  [SMALL_STATE(73)] = 1268,
  [SMALL_STATE(74)] = 1272,
  [SMALL_STATE(75)] = 1276,
  [SMALL_STATE(76)] = 1280,
  [SMALL_STATE(77)] = 1284,
  [SMALL_STATE(78)] = 1288,
  [SMALL_STATE(79)] = 1292,
  [SMALL_STATE(80)] = 1296,
  [SMALL_STATE(81)] = 1300,
  [SMALL_STATE(82)] = 1304,
  [SMALL_STATE(83)] = 1308,
  [SMALL_STATE(84)] = 1312,
  [SMALL_STATE(85)] = 1316,
  [SMALL_STATE(86)] = 1320,
  [SMALL_STATE(87)] = 1324,
  [SMALL_STATE(88)] = 1328,
  [SMALL_STATE(89)] = 1332,
  [SMALL_STATE(90)] = 1336,
  [SMALL_STATE(91)] = 1340,
  [SMALL_STATE(92)] = 1344,
  [SMALL_STATE(93)] = 1348,
  [SMALL_STATE(94)] = 1352,
  [SMALL_STATE(95)] = 1356,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(56),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(45),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(35),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(86),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(12),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(3),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(8),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hex_number_repeat1, 2),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hex_number_repeat1, 2), SHIFT_REPEAT(28),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_literal_repeat1, 2), SHIFT_REPEAT(39),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_literal_repeat1, 2), SHIFT_REPEAT(14),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_literal_repeat1, 2), SHIFT_REPEAT(78),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex_number, 1),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 2),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 3),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 3),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string_literal, 3),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_single_escpace, 1),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string_literal, 2),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex_digit, 1),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 5),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 5),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ref_deref_expression, 1),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_number, 1),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_number, 2),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_decimal_number_repeat1, 2),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_decimal_number_repeat1, 2), SHIFT_REPEAT(37),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_escape, 1),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_escape, 4),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_point, 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paren_expression_base, 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_postfix_expression, 2),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex_int_literal, 2),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input, 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_literal, 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_postfix_expression, 1),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paren_expression_base, 3),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_input_repeat1, 2),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_input_repeat1, 2), SHIFT_REPEAT(67),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_expression, 1),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_expression, 1),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expression, 1),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding_lhs, 1),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex_indicator, 2),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_directive, 4),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 1),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 5),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_expression, 1),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declared_name, 1),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_api_or_impl, 1),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_non_expression_pattern, 3),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_non_expression_pattern, 1),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_term, 2),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paren_expression_contents, 1),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_maybe_empty_tuple_pattern, 2),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [256] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_carbon(void) {
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
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
