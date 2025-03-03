#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 195
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 88
#define ALIAS_COUNT 0
#define TOKEN_COUNT 43
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 10

enum ts_symbol_identifiers {
  anon_sym_HA_DOLLARPBExportHeader_DOLLAR = 1,
  anon_sym_DOT = 2,
  anon_sym_forward = 3,
  anon_sym_endforward = 4,
  anon_sym_globaltype = 5,
  anon_sym_from = 6,
  anon_sym_endtype = 7,
  anon_sym_type = 8,
  anon_sym_within = 9,
  anon_sym_typevariables = 10,
  anon_sym_endvariables = 11,
  anon_sym_forwardprototypes = 12,
  anon_sym_endprototypes = 13,
  anon_sym_LBRACK_RBRACK = 14,
  anon_sym_EQ = 15,
  anon_sym_COMMA = 16,
  aux_sym_type_token1 = 17,
  anon_sym_LPAREN = 18,
  anon_sym_RPAREN = 19,
  anon_sym_ref = 20,
  sym_integer = 21,
  sym_decimal = 22,
  anon_sym_true = 23,
  anon_sym_false = 24,
  anon_sym_null = 25,
  anon_sym_DQUOTE = 26,
  aux_sym_string_literal_content_token1 = 27,
  aux_sym_string_literal_content_token2 = 28,
  sym_escape_sequence = 29,
  anon_sym_function = 30,
  anon_sym_SEMI = 31,
  anon_sym_endfunction = 32,
  anon_sym_endsubroutine = 33,
  anon_sym_public = 34,
  anon_sym_private = 35,
  anon_sym_protected = 36,
  sym_comment = 37,
  anon_sym_return = 38,
  anon_sym_STAR = 39,
  anon_sym_PLUS = 40,
  sym_newline = 41,
  sym_identifier = 42,
  sym_source_file = 43,
  sym_class_name = 44,
  sym_class_type = 45,
  sym_forward_types = 46,
  sym_class_inherit_from = 47,
  sym_forward_type = 48,
  sym_global_class_properties = 49,
  sym_class_variables = 50,
  sym_forward_prototypes = 51,
  sym_class_properties = 52,
  sym_class_variable = 53,
  sym_variable = 54,
  sym_type = 55,
  sym_variable_name = 56,
  sym_function_prototype = 57,
  sym_function_parameters = 58,
  sym_function_parameter = 59,
  sym_value = 60,
  sym_boolean_literal = 61,
  sym_string_literal = 62,
  sym_string_literal_content = 63,
  sym_function_implementations = 64,
  sym_function_implementation = 65,
  sym_function_decl = 66,
  sym_function_name = 67,
  sym_function_body = 68,
  sym_end_of_function = 69,
  sym_visibility = 70,
  sym_code_block = 71,
  sym_return_statement = 72,
  sym_local_declaration = 73,
  sym_expression = 74,
  sym_binary_expression = 75,
  sym_assignment = 76,
  sym_parenthesized_expression = 77,
  aux_sym_forward_types_repeat1 = 78,
  aux_sym_forward_prototypes_repeat1 = 79,
  aux_sym_class_properties_repeat1 = 80,
  aux_sym_class_variable_repeat1 = 81,
  aux_sym_variable_repeat1 = 82,
  aux_sym_function_prototype_repeat1 = 83,
  aux_sym_function_parameters_repeat1 = 84,
  aux_sym_string_literal_repeat1 = 85,
  aux_sym_function_implementations_repeat1 = 86,
  aux_sym_code_block_repeat1 = 87,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_HA_DOLLARPBExportHeader_DOLLAR] = "HA$PBExportHeader$",
  [anon_sym_DOT] = ".",
  [anon_sym_forward] = "forward",
  [anon_sym_endforward] = "end forward",
  [anon_sym_globaltype] = "global type",
  [anon_sym_from] = "from",
  [anon_sym_endtype] = "end type",
  [anon_sym_type] = "type",
  [anon_sym_within] = "within",
  [anon_sym_typevariables] = "type variables",
  [anon_sym_endvariables] = "end variables",
  [anon_sym_forwardprototypes] = "forward prototypes",
  [anon_sym_endprototypes] = "end prototypes",
  [anon_sym_LBRACK_RBRACK] = "[]",
  [anon_sym_EQ] = "=",
  [anon_sym_COMMA] = ",",
  [aux_sym_type_token1] = "type_token1",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_ref] = "ref",
  [sym_integer] = "integer",
  [sym_decimal] = "decimal",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_null] = "null",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_literal_content_token1] = "string_literal_content_token1",
  [aux_sym_string_literal_content_token2] = "string_literal_content_token2",
  [sym_escape_sequence] = "escape_sequence",
  [anon_sym_function] = "function",
  [anon_sym_SEMI] = ";",
  [anon_sym_endfunction] = "end function",
  [anon_sym_endsubroutine] = "end subroutine",
  [anon_sym_public] = "public",
  [anon_sym_private] = "private",
  [anon_sym_protected] = "protected",
  [sym_comment] = "comment",
  [anon_sym_return] = "return",
  [anon_sym_STAR] = "*",
  [anon_sym_PLUS] = "+",
  [sym_newline] = "newline",
  [sym_identifier] = "identifier",
  [sym_source_file] = "source_file",
  [sym_class_name] = "class_name",
  [sym_class_type] = "class_type",
  [sym_forward_types] = "forward_types",
  [sym_class_inherit_from] = "class_inherit_from",
  [sym_forward_type] = "forward_type",
  [sym_global_class_properties] = "global_class_properties",
  [sym_class_variables] = "class_variables",
  [sym_forward_prototypes] = "forward_prototypes",
  [sym_class_properties] = "class_properties",
  [sym_class_variable] = "class_variable",
  [sym_variable] = "variable",
  [sym_type] = "type",
  [sym_variable_name] = "variable_name",
  [sym_function_prototype] = "function_prototype",
  [sym_function_parameters] = "function_parameters",
  [sym_function_parameter] = "function_parameter",
  [sym_value] = "value",
  [sym_boolean_literal] = "boolean_literal",
  [sym_string_literal] = "string_literal",
  [sym_string_literal_content] = "string_literal_content",
  [sym_function_implementations] = "function_implementations",
  [sym_function_implementation] = "function_implementation",
  [sym_function_decl] = "function_decl",
  [sym_function_name] = "function_name",
  [sym_function_body] = "function_body",
  [sym_end_of_function] = "end_of_function",
  [sym_visibility] = "visibility",
  [sym_code_block] = "code_block",
  [sym_return_statement] = "return_statement",
  [sym_local_declaration] = "local_declaration",
  [sym_expression] = "expression",
  [sym_binary_expression] = "binary_expression",
  [sym_assignment] = "assignment",
  [sym_parenthesized_expression] = "parenthesized_expression",
  [aux_sym_forward_types_repeat1] = "forward_types_repeat1",
  [aux_sym_forward_prototypes_repeat1] = "forward_prototypes_repeat1",
  [aux_sym_class_properties_repeat1] = "class_properties_repeat1",
  [aux_sym_class_variable_repeat1] = "class_variable_repeat1",
  [aux_sym_variable_repeat1] = "variable_repeat1",
  [aux_sym_function_prototype_repeat1] = "function_prototype_repeat1",
  [aux_sym_function_parameters_repeat1] = "function_parameters_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
  [aux_sym_function_implementations_repeat1] = "function_implementations_repeat1",
  [aux_sym_code_block_repeat1] = "code_block_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_HA_DOLLARPBExportHeader_DOLLAR] = anon_sym_HA_DOLLARPBExportHeader_DOLLAR,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_forward] = anon_sym_forward,
  [anon_sym_endforward] = anon_sym_endforward,
  [anon_sym_globaltype] = anon_sym_globaltype,
  [anon_sym_from] = anon_sym_from,
  [anon_sym_endtype] = anon_sym_endtype,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_within] = anon_sym_within,
  [anon_sym_typevariables] = anon_sym_typevariables,
  [anon_sym_endvariables] = anon_sym_endvariables,
  [anon_sym_forwardprototypes] = anon_sym_forwardprototypes,
  [anon_sym_endprototypes] = anon_sym_endprototypes,
  [anon_sym_LBRACK_RBRACK] = anon_sym_LBRACK_RBRACK,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_type_token1] = aux_sym_type_token1,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_ref] = anon_sym_ref,
  [sym_integer] = sym_integer,
  [sym_decimal] = sym_decimal,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_null] = anon_sym_null,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_literal_content_token1] = aux_sym_string_literal_content_token1,
  [aux_sym_string_literal_content_token2] = aux_sym_string_literal_content_token2,
  [sym_escape_sequence] = sym_escape_sequence,
  [anon_sym_function] = anon_sym_function,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_endfunction] = anon_sym_endfunction,
  [anon_sym_endsubroutine] = anon_sym_endsubroutine,
  [anon_sym_public] = anon_sym_public,
  [anon_sym_private] = anon_sym_private,
  [anon_sym_protected] = anon_sym_protected,
  [sym_comment] = sym_comment,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [sym_newline] = sym_newline,
  [sym_identifier] = sym_identifier,
  [sym_source_file] = sym_source_file,
  [sym_class_name] = sym_class_name,
  [sym_class_type] = sym_class_type,
  [sym_forward_types] = sym_forward_types,
  [sym_class_inherit_from] = sym_class_inherit_from,
  [sym_forward_type] = sym_forward_type,
  [sym_global_class_properties] = sym_global_class_properties,
  [sym_class_variables] = sym_class_variables,
  [sym_forward_prototypes] = sym_forward_prototypes,
  [sym_class_properties] = sym_class_properties,
  [sym_class_variable] = sym_class_variable,
  [sym_variable] = sym_variable,
  [sym_type] = sym_type,
  [sym_variable_name] = sym_variable_name,
  [sym_function_prototype] = sym_function_prototype,
  [sym_function_parameters] = sym_function_parameters,
  [sym_function_parameter] = sym_function_parameter,
  [sym_value] = sym_value,
  [sym_boolean_literal] = sym_boolean_literal,
  [sym_string_literal] = sym_string_literal,
  [sym_string_literal_content] = sym_string_literal_content,
  [sym_function_implementations] = sym_function_implementations,
  [sym_function_implementation] = sym_function_implementation,
  [sym_function_decl] = sym_function_decl,
  [sym_function_name] = sym_function_name,
  [sym_function_body] = sym_function_body,
  [sym_end_of_function] = sym_end_of_function,
  [sym_visibility] = sym_visibility,
  [sym_code_block] = sym_code_block,
  [sym_return_statement] = sym_return_statement,
  [sym_local_declaration] = sym_local_declaration,
  [sym_expression] = sym_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_assignment] = sym_assignment,
  [sym_parenthesized_expression] = sym_parenthesized_expression,
  [aux_sym_forward_types_repeat1] = aux_sym_forward_types_repeat1,
  [aux_sym_forward_prototypes_repeat1] = aux_sym_forward_prototypes_repeat1,
  [aux_sym_class_properties_repeat1] = aux_sym_class_properties_repeat1,
  [aux_sym_class_variable_repeat1] = aux_sym_class_variable_repeat1,
  [aux_sym_variable_repeat1] = aux_sym_variable_repeat1,
  [aux_sym_function_prototype_repeat1] = aux_sym_function_prototype_repeat1,
  [aux_sym_function_parameters_repeat1] = aux_sym_function_parameters_repeat1,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
  [aux_sym_function_implementations_repeat1] = aux_sym_function_implementations_repeat1,
  [aux_sym_code_block_repeat1] = aux_sym_code_block_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_HA_DOLLARPBExportHeader_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_forward] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endforward] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_globaltype] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_from] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endtype] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_within] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_typevariables] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endvariables] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_forwardprototypes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endprototypes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_type_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ref] = {
    .visible = true,
    .named = false,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_decimal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_null] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_literal_content_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_content_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_function] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endfunction] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endsubroutine] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_public] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_private] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_protected] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [sym_newline] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_class_name] = {
    .visible = true,
    .named = true,
  },
  [sym_class_type] = {
    .visible = true,
    .named = true,
  },
  [sym_forward_types] = {
    .visible = true,
    .named = true,
  },
  [sym_class_inherit_from] = {
    .visible = true,
    .named = true,
  },
  [sym_forward_type] = {
    .visible = true,
    .named = true,
  },
  [sym_global_class_properties] = {
    .visible = true,
    .named = true,
  },
  [sym_class_variables] = {
    .visible = true,
    .named = true,
  },
  [sym_forward_prototypes] = {
    .visible = true,
    .named = true,
  },
  [sym_class_properties] = {
    .visible = true,
    .named = true,
  },
  [sym_class_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_name] = {
    .visible = true,
    .named = true,
  },
  [sym_function_prototype] = {
    .visible = true,
    .named = true,
  },
  [sym_function_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_function_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal_content] = {
    .visible = true,
    .named = true,
  },
  [sym_function_implementations] = {
    .visible = true,
    .named = true,
  },
  [sym_function_implementation] = {
    .visible = true,
    .named = true,
  },
  [sym_function_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_function_name] = {
    .visible = true,
    .named = true,
  },
  [sym_function_body] = {
    .visible = true,
    .named = true,
  },
  [sym_end_of_function] = {
    .visible = true,
    .named = true,
  },
  [sym_visibility] = {
    .visible = true,
    .named = true,
  },
  [sym_code_block] = {
    .visible = true,
    .named = true,
  },
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_local_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized_expression] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_forward_types_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_forward_prototypes_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_class_properties_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_class_variable_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variable_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_prototype_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_implementations_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_code_block_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_comma = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_comma] = "comma",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 1},
  [6] = {.index = 7, .length = 3},
  [7] = {.index = 10, .length = 1},
  [8] = {.index = 11, .length = 4},
  [9] = {.index = 15, .length = 5},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_comma, 2, .inherited = true},
  [1] =
    {field_comma, 3, .inherited = true},
  [2] =
    {field_comma, 0},
    {field_comma, 1},
  [4] =
    {field_comma, 0, .inherited = true},
    {field_comma, 1, .inherited = true},
  [6] =
    {field_comma, 4, .inherited = true},
  [7] =
    {field_comma, 0},
    {field_comma, 1},
    {field_comma, 2},
  [10] =
    {field_comma, 5, .inherited = true},
  [11] =
    {field_comma, 0},
    {field_comma, 1},
    {field_comma, 2},
    {field_comma, 3},
  [15] =
    {field_comma, 0},
    {field_comma, 1},
    {field_comma, 2},
    {field_comma, 3},
    {field_comma, 4},
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
  [10] = 6,
  [11] = 11,
  [12] = 6,
  [13] = 4,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 20,
  [22] = 19,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 17,
  [27] = 18,
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
  [40] = 28,
  [41] = 41,
  [42] = 32,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 34,
  [49] = 49,
  [50] = 33,
  [51] = 51,
  [52] = 47,
  [53] = 49,
  [54] = 41,
  [55] = 49,
  [56] = 41,
  [57] = 49,
  [58] = 41,
  [59] = 59,
  [60] = 60,
  [61] = 60,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 62,
  [67] = 67,
  [68] = 64,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 63,
  [73] = 73,
  [74] = 67,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 23,
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
  [93] = 24,
  [94] = 25,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 76,
  [101] = 33,
  [102] = 34,
  [103] = 78,
  [104] = 79,
  [105] = 99,
  [106] = 84,
  [107] = 28,
  [108] = 87,
  [109] = 88,
  [110] = 110,
  [111] = 92,
  [112] = 32,
  [113] = 113,
  [114] = 63,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 34,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 122,
  [133] = 126,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 33,
  [138] = 28,
  [139] = 32,
  [140] = 131,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 148,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 146,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 163,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(189);
      ADVANCE_MAP(
        '"', 235,
        '(', 223,
        ')', 224,
        '*', 256,
        '+', 257,
        ',', 205,
        '.', 191,
        '/', 16,
        ';', 246,
        '=', 204,
        'H', 20,
        '[', 27,
        '\\', 25,
        'e', 94,
        'f', 28,
        'g', 88,
        'n', 160,
        'p', 123,
        'r', 54,
        't', 125,
        'w', 76,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(188);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(227);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(8);
      if (lookahead == '"') ADVANCE(235);
      if (lookahead == '\\') ADVANCE(25);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(236);
      if (lookahead != 0) ADVANCE(237);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(72);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(153);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(166);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(122);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '"', 235,
        '(', 223,
        '*', 256,
        '+', 257,
        ',', 205,
        '=', 204,
        '[', 27,
        'f', 260,
        'n', 271,
        't', 268,
        '\n', 258,
        '\r', 258,
      );
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(235);
      if (lookahead == '(') ADVANCE(223);
      if (lookahead == 'f') ADVANCE(260);
      if (lookahead == 'n') ADVANCE(271);
      if (lookahead == 't') ADVANCE(268);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(235);
      if (lookahead == '\\') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      END_STATE();
    case 9:
      if (lookahead == '$') ADVANCE(24);
      END_STATE();
    case 10:
      if (lookahead == '$') ADVANCE(190);
      END_STATE();
    case 11:
      if (lookahead == '(') ADVANCE(223);
      if (lookahead == ';') ADVANCE(246);
      if (lookahead == 'e') ADVANCE(267);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 12:
      if (lookahead == '(') ADVANCE(223);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 13:
      if (lookahead == ')') ADVANCE(224);
      if (lookahead == '*') ADVANCE(256);
      if (lookahead == '+') ADVANCE(257);
      if (lookahead == ',') ADVANCE(205);
      if (lookahead == '=') ADVANCE(204);
      if (lookahead == '[') ADVANCE(27);
      if (lookahead == 'e') ADVANCE(217);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 14:
      if (lookahead == ')') ADVANCE(224);
      if (lookahead == '*') ADVANCE(256);
      if (lookahead == '+') ADVANCE(257);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == 'e') ADVANCE(215);
      if (lookahead == 'r') ADVANCE(212);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(222);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 15:
      if (lookahead == ')') ADVANCE(224);
      if (lookahead == ',') ADVANCE(205);
      if (lookahead == 'r') ADVANCE(213);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 16:
      if (lookahead == '*') ADVANCE(18);
      if (lookahead == '/') ADVANCE(253);
      END_STATE();
    case 17:
      if (lookahead == '*') ADVANCE(17);
      if (lookahead == '/') ADVANCE(252);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead == '*') ADVANCE(17);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == ',') ADVANCE(205);
      if (lookahead == '=') ADVANCE(204);
      if (lookahead == '[') ADVANCE(27);
      if (lookahead == 'e') ADVANCE(218);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 20:
      if (lookahead == 'A') ADVANCE(9);
      END_STATE();
    case 21:
      if (lookahead == 'B') ADVANCE(22);
      END_STATE();
    case 22:
      if (lookahead == 'E') ADVANCE(170);
      END_STATE();
    case 23:
      if (lookahead == 'H') ADVANCE(68);
      END_STATE();
    case 24:
      if (lookahead == 'P') ADVANCE(21);
      END_STATE();
    case 25:
      ADVANCE_MAP(
        'U', 239,
        'u', 241,
        'x', 240,
        '"', 242,
        '\'', 242,
        '0', 242,
        '?', 242,
        '\\', 242,
        'a', 242,
        'b', 242,
        'e', 242,
        'f', 242,
        'n', 242,
        'r', 242,
        't', 242,
        'v', 242,
      );
      if (lookahead != 0) ADVANCE(238);
      END_STATE();
    case 26:
      ADVANCE_MAP(
        'U', 179,
        'u', 184,
        'x', 181,
        '"', 242,
        '\'', 242,
        '0', 242,
        '?', 242,
        '\\', 242,
        'a', 242,
        'b', 242,
        'e', 242,
        'f', 242,
        'n', 242,
        'r', 242,
        't', 242,
        'v', 242,
      );
      END_STATE();
    case 27:
      if (lookahead == ']') ADVANCE(203);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(85);
      if (lookahead == 'o') ADVANCE(124);
      if (lookahead == 'r') ADVANCE(102);
      if (lookahead == 'u') ADVANCE(95);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(127);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(131);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(89);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(130);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(134);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(149);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(136);
      END_STATE();
    case 39:
      if (lookahead == 'b') ADVANCE(32);
      END_STATE();
    case 40:
      if (lookahead == 'b') ADVANCE(87);
      END_STATE();
    case 41:
      if (lookahead == 'b') ADVANCE(91);
      END_STATE();
    case 42:
      if (lookahead == 'b') ADVANCE(132);
      END_STATE();
    case 43:
      if (lookahead == 'b') ADVANCE(92);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(249);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(147);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(150);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(154);
      END_STATE();
    case 48:
      if (lookahead == 'd') ADVANCE(2);
      END_STATE();
    case 49:
      if (lookahead == 'd') ADVANCE(192);
      END_STATE();
    case 50:
      if (lookahead == 'd') ADVANCE(251);
      END_STATE();
    case 51:
      if (lookahead == 'd') ADVANCE(193);
      END_STATE();
    case 52:
      if (lookahead == 'd') ADVANCE(5);
      END_STATE();
    case 53:
      if (lookahead == 'd') ADVANCE(69);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(229);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(231);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(250);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(196);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(194);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(248);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(4);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 71:
      if (lookahead == 'f') ADVANCE(225);
      if (lookahead == 't') ADVANCE(159);
      END_STATE();
    case 72:
      if (lookahead == 'f') ADVANCE(109);
      if (lookahead == 'p') ADVANCE(129);
      if (lookahead == 's') ADVANCE(161);
      if (lookahead == 't') ADVANCE(171);
      if (lookahead == 'v') ADVANCE(31);
      END_STATE();
    case 73:
      if (lookahead == 'f') ADVANCE(163);
      if (lookahead == 's') ADVANCE(161);
      END_STATE();
    case 74:
      if (lookahead == 'f') ADVANCE(111);
      if (lookahead == 't') ADVANCE(174);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(74);
      END_STATE();
    case 75:
      if (lookahead == 'h') ADVANCE(79);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(144);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(164);
      if (lookahead == 'o') ADVANCE(148);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(97);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(105);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(100);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 84:
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(143);
      END_STATE();
    case 86:
      if (lookahead == 'l') ADVANCE(233);
      END_STATE();
    case 87:
      if (lookahead == 'l') ADVANCE(78);
      END_STATE();
    case 88:
      if (lookahead == 'l') ADVANCE(103);
      END_STATE();
    case 89:
      if (lookahead == 'l') ADVANCE(3);
      END_STATE();
    case 90:
      if (lookahead == 'l') ADVANCE(86);
      END_STATE();
    case 91:
      if (lookahead == 'l') ADVANCE(62);
      END_STATE();
    case 92:
      if (lookahead == 'l') ADVANCE(66);
      END_STATE();
    case 93:
      if (lookahead == 'm') ADVANCE(195);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 95:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(254);
      END_STATE();
    case 97:
      if (lookahead == 'n') ADVANCE(198);
      END_STATE();
    case 98:
      if (lookahead == 'n') ADVANCE(245);
      END_STATE();
    case 99:
      if (lookahead == 'n') ADVANCE(247);
      END_STATE();
    case 100:
      if (lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 102:
      if (lookahead == 'o') ADVANCE(93);
      END_STATE();
    case 103:
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 104:
      if (lookahead == 'o') ADVANCE(152);
      END_STATE();
    case 105:
      if (lookahead == 'o') ADVANCE(98);
      END_STATE();
    case 106:
      if (lookahead == 'o') ADVANCE(162);
      END_STATE();
    case 107:
      if (lookahead == 'o') ADVANCE(99);
      END_STATE();
    case 108:
      if (lookahead == 'o') ADVANCE(133);
      END_STATE();
    case 109:
      if (lookahead == 'o') ADVANCE(135);
      if (lookahead == 'u') ADVANCE(101);
      END_STATE();
    case 110:
      if (lookahead == 'o') ADVANCE(155);
      END_STATE();
    case 111:
      if (lookahead == 'o') ADVANCE(137);
      END_STATE();
    case 112:
      if (lookahead == 'o') ADVANCE(156);
      END_STATE();
    case 113:
      if (lookahead == 'o') ADVANCE(157);
      END_STATE();
    case 114:
      if (lookahead == 'p') ADVANCE(56);
      END_STATE();
    case 115:
      if (lookahead == 'p') ADVANCE(129);
      END_STATE();
    case 116:
      if (lookahead == 'p') ADVANCE(108);
      END_STATE();
    case 117:
      if (lookahead == 'p') ADVANCE(59);
      END_STATE();
    case 118:
      if (lookahead == 'p') ADVANCE(60);
      END_STATE();
    case 119:
      if (lookahead == 'p') ADVANCE(65);
      END_STATE();
    case 120:
      if (lookahead == 'p') ADVANCE(64);
      END_STATE();
    case 121:
      if (lookahead == 'p') ADVANCE(67);
      END_STATE();
    case 122:
      if (lookahead == 'p') ADVANCE(138);
      END_STATE();
    case 123:
      if (lookahead == 'r') ADVANCE(77);
      if (lookahead == 'u') ADVANCE(40);
      END_STATE();
    case 124:
      if (lookahead == 'r') ADVANCE(167);
      END_STATE();
    case 125:
      if (lookahead == 'r') ADVANCE(158);
      if (lookahead == 'y') ADVANCE(114);
      END_STATE();
    case 126:
      if (lookahead == 'r') ADVANCE(10);
      END_STATE();
    case 127:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 128:
      if (lookahead == 'r') ADVANCE(96);
      END_STATE();
    case 129:
      if (lookahead == 'r') ADVANCE(104);
      END_STATE();
    case 130:
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 131:
      if (lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 132:
      if (lookahead == 'r') ADVANCE(106);
      END_STATE();
    case 133:
      if (lookahead == 'r') ADVANCE(146);
      END_STATE();
    case 134:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 135:
      if (lookahead == 'r') ADVANCE(168);
      END_STATE();
    case 136:
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 137:
      if (lookahead == 'r') ADVANCE(169);
      END_STATE();
    case 138:
      if (lookahead == 'r') ADVANCE(113);
      END_STATE();
    case 139:
      if (lookahead == 's') ADVANCE(200);
      END_STATE();
    case 140:
      if (lookahead == 's') ADVANCE(202);
      END_STATE();
    case 141:
      if (lookahead == 's') ADVANCE(199);
      END_STATE();
    case 142:
      if (lookahead == 's') ADVANCE(201);
      END_STATE();
    case 143:
      if (lookahead == 's') ADVANCE(57);
      END_STATE();
    case 144:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 145:
      if (lookahead == 't') ADVANCE(171);
      END_STATE();
    case 146:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 147:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 148:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 149:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 150:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 151:
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 152:
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 153:
      if (lookahead == 't') ADVANCE(172);
      END_STATE();
    case 154:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 155:
      if (lookahead == 't') ADVANCE(173);
      END_STATE();
    case 156:
      if (lookahead == 't') ADVANCE(175);
      END_STATE();
    case 157:
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 158:
      if (lookahead == 'u') ADVANCE(55);
      END_STATE();
    case 159:
      if (lookahead == 'u') ADVANCE(128);
      END_STATE();
    case 160:
      if (lookahead == 'u') ADVANCE(90);
      END_STATE();
    case 161:
      if (lookahead == 'u') ADVANCE(42);
      END_STATE();
    case 162:
      if (lookahead == 'u') ADVANCE(151);
      END_STATE();
    case 163:
      if (lookahead == 'u') ADVANCE(101);
      END_STATE();
    case 164:
      if (lookahead == 'v') ADVANCE(36);
      END_STATE();
    case 165:
      if (lookahead == 'v') ADVANCE(31);
      END_STATE();
    case 166:
      if (lookahead == 'v') ADVANCE(38);
      END_STATE();
    case 167:
      if (lookahead == 'w') ADVANCE(29);
      END_STATE();
    case 168:
      if (lookahead == 'w') ADVANCE(33);
      END_STATE();
    case 169:
      if (lookahead == 'w') ADVANCE(34);
      END_STATE();
    case 170:
      if (lookahead == 'x') ADVANCE(116);
      END_STATE();
    case 171:
      if (lookahead == 'y') ADVANCE(117);
      END_STATE();
    case 172:
      if (lookahead == 'y') ADVANCE(118);
      END_STATE();
    case 173:
      if (lookahead == 'y') ADVANCE(119);
      END_STATE();
    case 174:
      if (lookahead == 'y') ADVANCE(120);
      END_STATE();
    case 175:
      if (lookahead == 'y') ADVANCE(121);
      END_STATE();
    case 176:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 177:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(228);
      END_STATE();
    case 178:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(242);
      END_STATE();
    case 179:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(187);
      END_STATE();
    case 180:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(244);
      END_STATE();
    case 181:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(180);
      END_STATE();
    case 182:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(178);
      END_STATE();
    case 183:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(182);
      END_STATE();
    case 184:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(183);
      END_STATE();
    case 185:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(184);
      END_STATE();
    case 186:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(185);
      END_STATE();
    case 187:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(186);
      END_STATE();
    case 188:
      if (eof) ADVANCE(189);
      ADVANCE_MAP(
        '"', 235,
        '(', 223,
        ')', 224,
        '*', 256,
        '+', 257,
        ',', 205,
        '.', 191,
        '/', 16,
        ';', 246,
        '=', 204,
        'H', 20,
        '[', 27,
        '\\', 26,
        'e', 94,
        'f', 28,
        'g', 88,
        'n', 160,
        'p', 123,
        'r', 54,
        't', 125,
        'w', 76,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(188);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(227);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_HA_DOLLARPBExportHeader_DOLLAR);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_forward);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_endforward);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_globaltype);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_endtype);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_within);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_typevariables);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_endvariables);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_forwardprototypes);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_endprototypes);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == ' ') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == ' ') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == ' ') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == 'd') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == 'd') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == 'd') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == 'e') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == 'e') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == 'f') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == 'n') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == 'n') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == 'n') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == 'n') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == 'r') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == 't') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == 'u') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_ref);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_ref);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(227);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_decimal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(228);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_null);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_string_literal_content_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(236);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(237);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_string_literal_content_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(237);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_string_literal_content_token2);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_string_literal_content_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(187);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_string_literal_content_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(180);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_string_literal_content_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(183);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(242);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(243);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_endfunction);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_endsubroutine);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(253);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_return);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_newline);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(258);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 14},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 7},
  [5] = {.lex_state = 7},
  [6] = {.lex_state = 7},
  [7] = {.lex_state = 7},
  [8] = {.lex_state = 7},
  [9] = {.lex_state = 7},
  [10] = {.lex_state = 7},
  [11] = {.lex_state = 7},
  [12] = {.lex_state = 7},
  [13] = {.lex_state = 7},
  [14] = {.lex_state = 14},
  [15] = {.lex_state = 14},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 14},
  [24] = {.lex_state = 14},
  [25] = {.lex_state = 14},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 14},
  [29] = {.lex_state = 14},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 14},
  [33] = {.lex_state = 14},
  [34] = {.lex_state = 14},
  [35] = {.lex_state = 11},
  [36] = {.lex_state = 11},
  [37] = {.lex_state = 11},
  [38] = {.lex_state = 14},
  [39] = {.lex_state = 14},
  [40] = {.lex_state = 13},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 13},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 15},
  [45] = {.lex_state = 15},
  [46] = {.lex_state = 14},
  [47] = {.lex_state = 19},
  [48] = {.lex_state = 13},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 13},
  [51] = {.lex_state = 15},
  [52] = {.lex_state = 13},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 14},
  [60] = {.lex_state = 19},
  [61] = {.lex_state = 13},
  [62] = {.lex_state = 13},
  [63] = {.lex_state = 19},
  [64] = {.lex_state = 13},
  [65] = {.lex_state = 6},
  [66] = {.lex_state = 19},
  [67] = {.lex_state = 19},
  [68] = {.lex_state = 19},
  [69] = {.lex_state = 176},
  [70] = {.lex_state = 176},
  [71] = {.lex_state = 6},
  [72] = {.lex_state = 13},
  [73] = {.lex_state = 6},
  [74] = {.lex_state = 13},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 13},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 13},
  [79] = {.lex_state = 13},
  [80] = {.lex_state = 15},
  [81] = {.lex_state = 11},
  [82] = {.lex_state = 6},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 13},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 13},
  [88] = {.lex_state = 13},
  [89] = {.lex_state = 15},
  [90] = {.lex_state = 6},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 13},
  [93] = {.lex_state = 6},
  [94] = {.lex_state = 6},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 6},
  [97] = {.lex_state = 6},
  [98] = {.lex_state = 6},
  [99] = {.lex_state = 19},
  [100] = {.lex_state = 19},
  [101] = {.lex_state = 6},
  [102] = {.lex_state = 6},
  [103] = {.lex_state = 19},
  [104] = {.lex_state = 19},
  [105] = {.lex_state = 13},
  [106] = {.lex_state = 19},
  [107] = {.lex_state = 6},
  [108] = {.lex_state = 19},
  [109] = {.lex_state = 19},
  [110] = {.lex_state = 11},
  [111] = {.lex_state = 19},
  [112] = {.lex_state = 6},
  [113] = {.lex_state = 15},
  [114] = {.lex_state = 6},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 12},
  [119] = {.lex_state = 19},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 11},
  [122] = {.lex_state = 13},
  [123] = {.lex_state = 6},
  [124] = {.lex_state = 6},
  [125] = {.lex_state = 6},
  [126] = {.lex_state = 13},
  [127] = {.lex_state = 6},
  [128] = {.lex_state = 6},
  [129] = {.lex_state = 6},
  [130] = {.lex_state = 15},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 19},
  [133] = {.lex_state = 19},
  [134] = {.lex_state = 11},
  [135] = {.lex_state = 12},
  [136] = {.lex_state = 6},
  [137] = {.lex_state = 19},
  [138] = {.lex_state = 19},
  [139] = {.lex_state = 19},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 176},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 74},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 176},
  [147] = {.lex_state = 176},
  [148] = {.lex_state = 176},
  [149] = {.lex_state = 12},
  [150] = {.lex_state = 176},
  [151] = {.lex_state = 12},
  [152] = {.lex_state = 74},
  [153] = {.lex_state = 12},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 176},
  [156] = {.lex_state = 176},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 176},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 74},
  [163] = {.lex_state = 176},
  [164] = {.lex_state = 12},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 12},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 12},
  [169] = {.lex_state = 12},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 12},
  [172] = {.lex_state = 12},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 12},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 12},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 6},
  [187] = {.lex_state = 12},
  [188] = {.lex_state = 74},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 12},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_HA_DOLLARPBExportHeader_DOLLAR] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_forward] = ACTIONS(1),
    [anon_sym_endforward] = ACTIONS(1),
    [anon_sym_globaltype] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [anon_sym_endtype] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_within] = ACTIONS(1),
    [anon_sym_endvariables] = ACTIONS(1),
    [anon_sym_endprototypes] = ACTIONS(1),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_ref] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_decimal] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_null] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_string_literal_content_token2] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_endfunction] = ACTIONS(1),
    [anon_sym_endsubroutine] = ACTIONS(1),
    [anon_sym_public] = ACTIONS(1),
    [anon_sym_private] = ACTIONS(1),
    [anon_sym_protected] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(192),
    [anon_sym_HA_DOLLARPBExportHeader_DOLLAR] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(5), 1,
      aux_sym_type_token1,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_return,
    ACTIONS(13), 1,
      sym_identifier,
    STATE(95), 1,
      sym_end_of_function,
    STATE(120), 1,
      sym_function_body,
    STATE(156), 1,
      sym_type,
    STATE(159), 1,
      sym_code_block,
    STATE(186), 1,
      sym_variable,
    ACTIONS(7), 2,
      anon_sym_endfunction,
      anon_sym_endsubroutine,
    STATE(14), 4,
      sym_return_statement,
      sym_local_declaration,
      sym_assignment,
      aux_sym_code_block_repeat1,
  [38] = 9,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_newline,
    ACTIONS(25), 1,
      sym_identifier,
    STATE(123), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_integer,
      sym_decimal,
    STATE(101), 2,
      sym_boolean_literal,
      sym_string_literal,
    ACTIONS(19), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
    STATE(82), 3,
      sym_value,
      sym_binary_expression,
      sym_parenthesized_expression,
  [72] = 9,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      sym_integer,
    ACTIONS(31), 1,
      sym_decimal,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_identifier,
    STATE(131), 1,
      sym_expression,
    STATE(50), 2,
      sym_boolean_literal,
      sym_string_literal,
    ACTIONS(33), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
    STATE(23), 3,
      sym_value,
      sym_binary_expression,
      sym_parenthesized_expression,
  [105] = 9,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      sym_integer,
    ACTIONS(41), 1,
      sym_decimal,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    STATE(29), 1,
      sym_expression,
    STATE(33), 2,
      sym_boolean_literal,
      sym_string_literal,
    ACTIONS(43), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
    STATE(23), 3,
      sym_value,
      sym_binary_expression,
      sym_parenthesized_expression,
  [138] = 9,
    ACTIONS(17), 1,
      sym_integer,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      sym_decimal,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    STATE(94), 1,
      sym_expression,
    STATE(101), 2,
      sym_boolean_literal,
      sym_string_literal,
    ACTIONS(19), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
    STATE(82), 3,
      sym_value,
      sym_binary_expression,
      sym_parenthesized_expression,
  [171] = 9,
    ACTIONS(17), 1,
      sym_integer,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      sym_decimal,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    STATE(65), 1,
      sym_expression,
    STATE(101), 2,
      sym_boolean_literal,
      sym_string_literal,
    ACTIONS(19), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
    STATE(82), 3,
      sym_value,
      sym_binary_expression,
      sym_parenthesized_expression,
  [204] = 9,
    ACTIONS(17), 1,
      sym_integer,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      sym_decimal,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    STATE(71), 1,
      sym_expression,
    STATE(101), 2,
      sym_boolean_literal,
      sym_string_literal,
    ACTIONS(19), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
    STATE(82), 3,
      sym_value,
      sym_binary_expression,
      sym_parenthesized_expression,
  [237] = 9,
    ACTIONS(17), 1,
      sym_integer,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      sym_decimal,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    STATE(97), 1,
      sym_expression,
    STATE(101), 2,
      sym_boolean_literal,
      sym_string_literal,
    ACTIONS(19), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
    STATE(82), 3,
      sym_value,
      sym_binary_expression,
      sym_parenthesized_expression,
  [270] = 9,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      sym_integer,
    ACTIONS(41), 1,
      sym_decimal,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    STATE(25), 1,
      sym_expression,
    STATE(33), 2,
      sym_boolean_literal,
      sym_string_literal,
    ACTIONS(43), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
    STATE(23), 3,
      sym_value,
      sym_binary_expression,
      sym_parenthesized_expression,
  [303] = 9,
    ACTIONS(17), 1,
      sym_integer,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      sym_decimal,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    STATE(98), 1,
      sym_expression,
    STATE(101), 2,
      sym_boolean_literal,
      sym_string_literal,
    ACTIONS(19), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
    STATE(82), 3,
      sym_value,
      sym_binary_expression,
      sym_parenthesized_expression,
  [336] = 9,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      sym_integer,
    ACTIONS(31), 1,
      sym_decimal,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_identifier,
    STATE(25), 1,
      sym_expression,
    STATE(50), 2,
      sym_boolean_literal,
      sym_string_literal,
    ACTIONS(33), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
    STATE(23), 3,
      sym_value,
      sym_binary_expression,
      sym_parenthesized_expression,
  [369] = 9,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      sym_integer,
    ACTIONS(31), 1,
      sym_decimal,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_identifier,
    STATE(140), 1,
      sym_expression,
    STATE(50), 2,
      sym_boolean_literal,
      sym_string_literal,
    ACTIONS(33), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
    STATE(23), 3,
      sym_value,
      sym_binary_expression,
      sym_parenthesized_expression,
  [402] = 8,
    ACTIONS(5), 1,
      aux_sym_type_token1,
    ACTIONS(11), 1,
      anon_sym_return,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(55), 1,
      sym_comment,
    STATE(156), 1,
      sym_type,
    STATE(186), 1,
      sym_variable,
    ACTIONS(53), 2,
      anon_sym_endfunction,
      anon_sym_endsubroutine,
    STATE(15), 4,
      sym_return_statement,
      sym_local_declaration,
      sym_assignment,
      aux_sym_code_block_repeat1,
  [431] = 8,
    ACTIONS(57), 1,
      aux_sym_type_token1,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_return,
    ACTIONS(68), 1,
      sym_identifier,
    STATE(156), 1,
      sym_type,
    STATE(186), 1,
      sym_variable,
    ACTIONS(60), 2,
      anon_sym_endfunction,
      anon_sym_endsubroutine,
    STATE(15), 4,
      sym_return_statement,
      sym_local_declaration,
      sym_assignment,
      aux_sym_code_block_repeat1,
  [460] = 6,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_function_decl,
    STATE(165), 1,
      sym_visibility,
    STATE(180), 1,
      sym_function_implementations,
    STATE(30), 2,
      sym_function_implementation,
      aux_sym_function_implementations_repeat1,
    ACTIONS(73), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [482] = 6,
    ACTIONS(29), 1,
      sym_integer,
    ACTIONS(31), 1,
      sym_decimal,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(78), 1,
      sym_value,
    STATE(50), 2,
      sym_boolean_literal,
      sym_string_literal,
    ACTIONS(75), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
  [504] = 6,
    ACTIONS(29), 1,
      sym_integer,
    ACTIONS(31), 1,
      sym_decimal,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(84), 1,
      sym_value,
    STATE(50), 2,
      sym_boolean_literal,
      sym_string_literal,
    ACTIONS(75), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
  [526] = 6,
    ACTIONS(29), 1,
      sym_integer,
    ACTIONS(31), 1,
      sym_decimal,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(122), 1,
      sym_value,
    STATE(50), 2,
      sym_boolean_literal,
      sym_string_literal,
    ACTIONS(75), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
  [548] = 6,
    ACTIONS(29), 1,
      sym_integer,
    ACTIONS(31), 1,
      sym_decimal,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(126), 1,
      sym_value,
    STATE(50), 2,
      sym_boolean_literal,
      sym_string_literal,
    ACTIONS(75), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
  [570] = 6,
    ACTIONS(77), 1,
      sym_integer,
    ACTIONS(79), 1,
      sym_decimal,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    STATE(133), 1,
      sym_value,
    STATE(137), 2,
      sym_boolean_literal,
      sym_string_literal,
    ACTIONS(81), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
  [592] = 6,
    ACTIONS(77), 1,
      sym_integer,
    ACTIONS(79), 1,
      sym_decimal,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    STATE(132), 1,
      sym_value,
    STATE(137), 2,
      sym_boolean_literal,
      sym_string_literal,
    ACTIONS(81), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
  [614] = 2,
    ACTIONS(85), 3,
      aux_sym_type_token1,
      anon_sym_return,
      sym_identifier,
    ACTIONS(87), 6,
      anon_sym_RPAREN,
      anon_sym_endfunction,
      anon_sym_endsubroutine,
      sym_comment,
      anon_sym_STAR,
      anon_sym_PLUS,
  [628] = 2,
    ACTIONS(89), 3,
      aux_sym_type_token1,
      anon_sym_return,
      sym_identifier,
    ACTIONS(91), 6,
      anon_sym_RPAREN,
      anon_sym_endfunction,
      anon_sym_endsubroutine,
      sym_comment,
      anon_sym_STAR,
      anon_sym_PLUS,
  [642] = 2,
    ACTIONS(93), 3,
      aux_sym_type_token1,
      anon_sym_return,
      sym_identifier,
    ACTIONS(95), 6,
      anon_sym_RPAREN,
      anon_sym_endfunction,
      anon_sym_endsubroutine,
      sym_comment,
      anon_sym_STAR,
      anon_sym_PLUS,
  [656] = 6,
    ACTIONS(77), 1,
      sym_integer,
    ACTIONS(79), 1,
      sym_decimal,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    STATE(103), 1,
      sym_value,
    STATE(137), 2,
      sym_boolean_literal,
      sym_string_literal,
    ACTIONS(81), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
  [678] = 6,
    ACTIONS(77), 1,
      sym_integer,
    ACTIONS(79), 1,
      sym_decimal,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    STATE(106), 1,
      sym_value,
    STATE(137), 2,
      sym_boolean_literal,
      sym_string_literal,
    ACTIONS(81), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
  [700] = 2,
    ACTIONS(97), 3,
      aux_sym_type_token1,
      anon_sym_return,
      sym_identifier,
    ACTIONS(99), 5,
      anon_sym_endfunction,
      anon_sym_endsubroutine,
      sym_comment,
      anon_sym_STAR,
      anon_sym_PLUS,
  [713] = 3,
    ACTIONS(105), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(101), 3,
      aux_sym_type_token1,
      anon_sym_return,
      sym_identifier,
    ACTIONS(103), 3,
      anon_sym_endfunction,
      anon_sym_endsubroutine,
      sym_comment,
  [728] = 5,
    ACTIONS(107), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_function_decl,
    STATE(165), 1,
      sym_visibility,
    STATE(31), 2,
      sym_function_implementation,
      aux_sym_function_implementations_repeat1,
    ACTIONS(73), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [747] = 5,
    ACTIONS(109), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_function_decl,
    STATE(165), 1,
      sym_visibility,
    STATE(31), 2,
      sym_function_implementation,
      aux_sym_function_implementations_repeat1,
    ACTIONS(111), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [766] = 2,
    ACTIONS(114), 3,
      aux_sym_type_token1,
      anon_sym_return,
      sym_identifier,
    ACTIONS(116), 5,
      anon_sym_endfunction,
      anon_sym_endsubroutine,
      sym_comment,
      anon_sym_STAR,
      anon_sym_PLUS,
  [779] = 2,
    ACTIONS(118), 3,
      aux_sym_type_token1,
      anon_sym_return,
      sym_identifier,
    ACTIONS(120), 5,
      anon_sym_endfunction,
      anon_sym_endsubroutine,
      sym_comment,
      anon_sym_STAR,
      anon_sym_PLUS,
  [792] = 2,
    ACTIONS(122), 3,
      aux_sym_type_token1,
      anon_sym_return,
      sym_identifier,
    ACTIONS(124), 5,
      anon_sym_endfunction,
      anon_sym_endsubroutine,
      sym_comment,
      anon_sym_STAR,
      anon_sym_PLUS,
  [805] = 6,
    ACTIONS(126), 1,
      anon_sym_endprototypes,
    ACTIONS(128), 1,
      anon_sym_LPAREN,
    ACTIONS(130), 1,
      sym_identifier,
    STATE(118), 1,
      aux_sym_function_prototype_repeat1,
    STATE(121), 1,
      sym_function_parameters,
    STATE(37), 2,
      sym_function_prototype,
      aux_sym_forward_prototypes_repeat1,
  [825] = 6,
    ACTIONS(128), 1,
      anon_sym_LPAREN,
    ACTIONS(130), 1,
      sym_identifier,
    ACTIONS(132), 1,
      anon_sym_endprototypes,
    STATE(118), 1,
      aux_sym_function_prototype_repeat1,
    STATE(121), 1,
      sym_function_parameters,
    STATE(35), 2,
      sym_function_prototype,
      aux_sym_forward_prototypes_repeat1,
  [845] = 6,
    ACTIONS(134), 1,
      anon_sym_endprototypes,
    ACTIONS(136), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      sym_identifier,
    STATE(118), 1,
      aux_sym_function_prototype_repeat1,
    STATE(121), 1,
      sym_function_parameters,
    STATE(37), 2,
      sym_function_prototype,
      aux_sym_forward_prototypes_repeat1,
  [865] = 2,
    ACTIONS(142), 3,
      aux_sym_type_token1,
      anon_sym_return,
      sym_identifier,
    ACTIONS(144), 3,
      anon_sym_endfunction,
      anon_sym_endsubroutine,
      sym_comment,
  [876] = 2,
    ACTIONS(146), 3,
      aux_sym_type_token1,
      anon_sym_return,
      sym_identifier,
    ACTIONS(148), 3,
      anon_sym_endfunction,
      anon_sym_endsubroutine,
      sym_comment,
  [887] = 2,
    ACTIONS(97), 1,
      aux_sym_type_token1,
    ACTIONS(99), 5,
      anon_sym_endvariables,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
  [898] = 5,
    ACTIONS(150), 1,
      anon_sym_DQUOTE,
    ACTIONS(152), 1,
      aux_sym_string_literal_content_token1,
    ACTIONS(154), 1,
      aux_sym_string_literal_content_token2,
    ACTIONS(156), 1,
      sym_escape_sequence,
    STATE(43), 2,
      sym_string_literal_content,
      aux_sym_string_literal_repeat1,
  [915] = 2,
    ACTIONS(114), 1,
      aux_sym_type_token1,
    ACTIONS(116), 5,
      anon_sym_endvariables,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
  [926] = 5,
    ACTIONS(158), 1,
      anon_sym_DQUOTE,
    ACTIONS(160), 1,
      aux_sym_string_literal_content_token1,
    ACTIONS(163), 1,
      aux_sym_string_literal_content_token2,
    ACTIONS(166), 1,
      sym_escape_sequence,
    STATE(43), 2,
      sym_string_literal_content,
      aux_sym_string_literal_repeat1,
  [943] = 6,
    ACTIONS(169), 1,
      aux_sym_type_token1,
    ACTIONS(171), 1,
      anon_sym_RPAREN,
    ACTIONS(173), 1,
      anon_sym_ref,
    STATE(45), 1,
      aux_sym_function_parameters_repeat1,
    STATE(113), 1,
      sym_function_parameter,
    STATE(168), 1,
      sym_type,
  [962] = 6,
    ACTIONS(169), 1,
      aux_sym_type_token1,
    ACTIONS(173), 1,
      anon_sym_ref,
    ACTIONS(175), 1,
      anon_sym_RPAREN,
    STATE(51), 1,
      aux_sym_function_parameters_repeat1,
    STATE(113), 1,
      sym_function_parameter,
    STATE(168), 1,
      sym_type,
  [981] = 2,
    ACTIONS(177), 3,
      aux_sym_type_token1,
      anon_sym_return,
      sym_identifier,
    ACTIONS(179), 3,
      anon_sym_endfunction,
      anon_sym_endsubroutine,
      sym_comment,
  [992] = 6,
    ACTIONS(181), 1,
      anon_sym_endtype,
    ACTIONS(183), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(185), 1,
      anon_sym_EQ,
    ACTIONS(187), 1,
      anon_sym_COMMA,
    ACTIONS(189), 1,
      aux_sym_type_token1,
    STATE(99), 1,
      aux_sym_class_variable_repeat1,
  [1011] = 2,
    ACTIONS(122), 1,
      aux_sym_type_token1,
    ACTIONS(124), 5,
      anon_sym_endvariables,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
  [1022] = 5,
    ACTIONS(152), 1,
      aux_sym_string_literal_content_token1,
    ACTIONS(154), 1,
      aux_sym_string_literal_content_token2,
    ACTIONS(191), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      sym_escape_sequence,
    STATE(41), 2,
      sym_string_literal_content,
      aux_sym_string_literal_repeat1,
  [1039] = 2,
    ACTIONS(118), 1,
      aux_sym_type_token1,
    ACTIONS(120), 5,
      anon_sym_endvariables,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
  [1050] = 6,
    ACTIONS(195), 1,
      aux_sym_type_token1,
    ACTIONS(198), 1,
      anon_sym_RPAREN,
    ACTIONS(200), 1,
      anon_sym_ref,
    STATE(51), 1,
      aux_sym_function_parameters_repeat1,
    STATE(113), 1,
      sym_function_parameter,
    STATE(168), 1,
      sym_type,
  [1069] = 6,
    ACTIONS(181), 1,
      anon_sym_endvariables,
    ACTIONS(189), 1,
      aux_sym_type_token1,
    ACTIONS(203), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(205), 1,
      anon_sym_EQ,
    ACTIONS(207), 1,
      anon_sym_COMMA,
    STATE(105), 1,
      aux_sym_class_variable_repeat1,
  [1088] = 5,
    ACTIONS(152), 1,
      aux_sym_string_literal_content_token1,
    ACTIONS(154), 1,
      aux_sym_string_literal_content_token2,
    ACTIONS(209), 1,
      anon_sym_DQUOTE,
    ACTIONS(211), 1,
      sym_escape_sequence,
    STATE(54), 2,
      sym_string_literal_content,
      aux_sym_string_literal_repeat1,
  [1105] = 5,
    ACTIONS(152), 1,
      aux_sym_string_literal_content_token1,
    ACTIONS(154), 1,
      aux_sym_string_literal_content_token2,
    ACTIONS(156), 1,
      sym_escape_sequence,
    ACTIONS(213), 1,
      anon_sym_DQUOTE,
    STATE(43), 2,
      sym_string_literal_content,
      aux_sym_string_literal_repeat1,
  [1122] = 5,
    ACTIONS(152), 1,
      aux_sym_string_literal_content_token1,
    ACTIONS(154), 1,
      aux_sym_string_literal_content_token2,
    ACTIONS(215), 1,
      anon_sym_DQUOTE,
    ACTIONS(217), 1,
      sym_escape_sequence,
    STATE(56), 2,
      sym_string_literal_content,
      aux_sym_string_literal_repeat1,
  [1139] = 5,
    ACTIONS(152), 1,
      aux_sym_string_literal_content_token1,
    ACTIONS(154), 1,
      aux_sym_string_literal_content_token2,
    ACTIONS(156), 1,
      sym_escape_sequence,
    ACTIONS(219), 1,
      anon_sym_DQUOTE,
    STATE(43), 2,
      sym_string_literal_content,
      aux_sym_string_literal_repeat1,
  [1156] = 5,
    ACTIONS(152), 1,
      aux_sym_string_literal_content_token1,
    ACTIONS(154), 1,
      aux_sym_string_literal_content_token2,
    ACTIONS(221), 1,
      anon_sym_DQUOTE,
    ACTIONS(223), 1,
      sym_escape_sequence,
    STATE(58), 2,
      sym_string_literal_content,
      aux_sym_string_literal_repeat1,
  [1173] = 5,
    ACTIONS(152), 1,
      aux_sym_string_literal_content_token1,
    ACTIONS(154), 1,
      aux_sym_string_literal_content_token2,
    ACTIONS(156), 1,
      sym_escape_sequence,
    ACTIONS(225), 1,
      anon_sym_DQUOTE,
    STATE(43), 2,
      sym_string_literal_content,
      aux_sym_string_literal_repeat1,
  [1190] = 2,
    ACTIONS(227), 3,
      aux_sym_type_token1,
      anon_sym_return,
      sym_identifier,
    ACTIONS(229), 3,
      anon_sym_endfunction,
      anon_sym_endsubroutine,
      sym_comment,
  [1201] = 4,
    ACTIONS(5), 1,
      aux_sym_type_token1,
    ACTIONS(231), 1,
      anon_sym_endtype,
    STATE(155), 1,
      sym_type,
    STATE(66), 2,
      sym_class_variable,
      aux_sym_class_properties_repeat1,
  [1215] = 4,
    ACTIONS(5), 1,
      aux_sym_type_token1,
    ACTIONS(231), 1,
      anon_sym_endvariables,
    STATE(146), 1,
      sym_type,
    STATE(62), 2,
      sym_class_variable,
      aux_sym_class_properties_repeat1,
  [1229] = 4,
    ACTIONS(233), 1,
      anon_sym_endvariables,
    ACTIONS(235), 1,
      aux_sym_type_token1,
    STATE(146), 1,
      sym_type,
    STATE(62), 2,
      sym_class_variable,
      aux_sym_class_properties_repeat1,
  [1243] = 2,
    ACTIONS(240), 1,
      aux_sym_type_token1,
    ACTIONS(238), 4,
      anon_sym_endtype,
      anon_sym_LBRACK_RBRACK,
      anon_sym_EQ,
      anon_sym_COMMA,
  [1253] = 4,
    ACTIONS(244), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(246), 1,
      anon_sym_EQ,
    ACTIONS(248), 1,
      aux_sym_type_token1,
    ACTIONS(242), 2,
      anon_sym_endvariables,
      anon_sym_COMMA,
  [1267] = 4,
    ACTIONS(250), 1,
      anon_sym_COMMA,
    ACTIONS(254), 1,
      sym_newline,
    STATE(127), 1,
      aux_sym_variable_repeat1,
    ACTIONS(252), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
  [1281] = 4,
    ACTIONS(233), 1,
      anon_sym_endtype,
    ACTIONS(235), 1,
      aux_sym_type_token1,
    STATE(155), 1,
      sym_type,
    STATE(66), 2,
      sym_class_variable,
      aux_sym_class_properties_repeat1,
  [1295] = 5,
    ACTIONS(187), 1,
      anon_sym_COMMA,
    ACTIONS(256), 1,
      anon_sym_endtype,
    ACTIONS(258), 1,
      anon_sym_EQ,
    ACTIONS(260), 1,
      aux_sym_type_token1,
    STATE(100), 1,
      aux_sym_class_variable_repeat1,
  [1311] = 4,
    ACTIONS(248), 1,
      aux_sym_type_token1,
    ACTIONS(262), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(264), 1,
      anon_sym_EQ,
    ACTIONS(242), 2,
      anon_sym_endtype,
      anon_sym_COMMA,
  [1325] = 4,
    ACTIONS(266), 1,
      aux_sym_type_token1,
    STATE(146), 1,
      sym_type,
    STATE(173), 1,
      sym_class_properties,
    STATE(61), 2,
      sym_class_variable,
      aux_sym_class_properties_repeat1,
  [1339] = 4,
    ACTIONS(266), 1,
      aux_sym_type_token1,
    STATE(155), 1,
      sym_type,
    STATE(176), 1,
      sym_class_properties,
    STATE(60), 2,
      sym_class_variable,
      aux_sym_class_properties_repeat1,
  [1353] = 4,
    ACTIONS(250), 1,
      anon_sym_COMMA,
    ACTIONS(268), 1,
      sym_newline,
    STATE(129), 1,
      aux_sym_variable_repeat1,
    ACTIONS(252), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
  [1367] = 2,
    ACTIONS(240), 1,
      aux_sym_type_token1,
    ACTIONS(238), 4,
      anon_sym_endvariables,
      anon_sym_LBRACK_RBRACK,
      anon_sym_EQ,
      anon_sym_COMMA,
  [1377] = 5,
    ACTIONS(250), 1,
      anon_sym_COMMA,
    ACTIONS(270), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(272), 1,
      anon_sym_EQ,
    ACTIONS(274), 1,
      sym_newline,
    STATE(136), 1,
      aux_sym_variable_repeat1,
  [1393] = 5,
    ACTIONS(207), 1,
      anon_sym_COMMA,
    ACTIONS(256), 1,
      anon_sym_endvariables,
    ACTIONS(260), 1,
      aux_sym_type_token1,
    ACTIONS(276), 1,
      anon_sym_EQ,
    STATE(76), 1,
      aux_sym_class_variable_repeat1,
  [1409] = 3,
    ACTIONS(278), 1,
      anon_sym_endforward,
    ACTIONS(280), 1,
      anon_sym_type,
    STATE(116), 2,
      sym_forward_type,
      aux_sym_forward_types_repeat1,
  [1420] = 4,
    ACTIONS(207), 1,
      anon_sym_COMMA,
    ACTIONS(282), 1,
      anon_sym_endvariables,
    ACTIONS(284), 1,
      aux_sym_type_token1,
    STATE(79), 1,
      aux_sym_class_variable_repeat1,
  [1433] = 3,
    ACTIONS(286), 1,
      anon_sym_endforward,
    ACTIONS(288), 1,
      anon_sym_type,
    STATE(77), 2,
      sym_forward_type,
      aux_sym_forward_types_repeat1,
  [1444] = 4,
    ACTIONS(207), 1,
      anon_sym_COMMA,
    ACTIONS(291), 1,
      anon_sym_endvariables,
    ACTIONS(293), 1,
      aux_sym_type_token1,
    STATE(87), 1,
      aux_sym_class_variable_repeat1,
  [1457] = 4,
    ACTIONS(295), 1,
      anon_sym_endvariables,
    ACTIONS(297), 1,
      anon_sym_COMMA,
    ACTIONS(300), 1,
      aux_sym_type_token1,
    STATE(79), 1,
      aux_sym_class_variable_repeat1,
  [1470] = 2,
    ACTIONS(302), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(304), 2,
      aux_sym_type_token1,
      anon_sym_ref,
  [1479] = 2,
    ACTIONS(308), 1,
      sym_identifier,
    ACTIONS(306), 3,
      anon_sym_endprototypes,
      anon_sym_LPAREN,
      anon_sym_SEMI,
  [1488] = 2,
    ACTIONS(87), 1,
      sym_newline,
    ACTIONS(85), 3,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
  [1497] = 1,
    ACTIONS(310), 4,
      ts_builtin_sym_end,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [1504] = 4,
    ACTIONS(207), 1,
      anon_sym_COMMA,
    ACTIONS(312), 1,
      anon_sym_endvariables,
    ACTIONS(314), 1,
      aux_sym_type_token1,
    STATE(92), 1,
      aux_sym_class_variable_repeat1,
  [1517] = 2,
    ACTIONS(318), 1,
      aux_sym_string_literal_content_token1,
    ACTIONS(316), 3,
      anon_sym_DQUOTE,
      aux_sym_string_literal_content_token2,
      sym_escape_sequence,
  [1526] = 2,
    ACTIONS(318), 1,
      aux_sym_string_literal_content_token1,
    ACTIONS(316), 3,
      anon_sym_DQUOTE,
      aux_sym_string_literal_content_token2,
      sym_escape_sequence,
  [1535] = 4,
    ACTIONS(207), 1,
      anon_sym_COMMA,
    ACTIONS(320), 1,
      anon_sym_endvariables,
    ACTIONS(322), 1,
      aux_sym_type_token1,
    STATE(79), 1,
      aux_sym_class_variable_repeat1,
  [1548] = 3,
    ACTIONS(326), 1,
      anon_sym_EQ,
    ACTIONS(328), 1,
      aux_sym_type_token1,
    ACTIONS(324), 2,
      anon_sym_endvariables,
      anon_sym_COMMA,
  [1559] = 2,
    ACTIONS(330), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(332), 2,
      aux_sym_type_token1,
      anon_sym_ref,
  [1568] = 4,
    ACTIONS(250), 1,
      anon_sym_COMMA,
    ACTIONS(334), 1,
      anon_sym_EQ,
    ACTIONS(336), 1,
      sym_newline,
    STATE(124), 1,
      aux_sym_variable_repeat1,
  [1581] = 1,
    ACTIONS(338), 4,
      ts_builtin_sym_end,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [1588] = 4,
    ACTIONS(207), 1,
      anon_sym_COMMA,
    ACTIONS(340), 1,
      anon_sym_endvariables,
    ACTIONS(342), 1,
      aux_sym_type_token1,
    STATE(79), 1,
      aux_sym_class_variable_repeat1,
  [1601] = 2,
    ACTIONS(91), 1,
      sym_newline,
    ACTIONS(89), 3,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
  [1610] = 2,
    ACTIONS(95), 1,
      sym_newline,
    ACTIONS(93), 3,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
  [1619] = 1,
    ACTIONS(344), 4,
      ts_builtin_sym_end,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [1626] = 4,
    ACTIONS(346), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(348), 1,
      anon_sym_EQ,
    ACTIONS(350), 1,
      anon_sym_COMMA,
    ACTIONS(352), 1,
      sym_newline,
  [1639] = 3,
    ACTIONS(354), 1,
      anon_sym_COMMA,
    ACTIONS(356), 1,
      sym_newline,
    ACTIONS(252), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
  [1650] = 3,
    ACTIONS(358), 1,
      anon_sym_COMMA,
    ACTIONS(360), 1,
      sym_newline,
    ACTIONS(252), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
  [1661] = 4,
    ACTIONS(187), 1,
      anon_sym_COMMA,
    ACTIONS(362), 1,
      anon_sym_endtype,
    ACTIONS(364), 1,
      aux_sym_type_token1,
    STATE(104), 1,
      aux_sym_class_variable_repeat1,
  [1674] = 4,
    ACTIONS(187), 1,
      anon_sym_COMMA,
    ACTIONS(282), 1,
      anon_sym_endtype,
    ACTIONS(284), 1,
      aux_sym_type_token1,
    STATE(104), 1,
      aux_sym_class_variable_repeat1,
  [1687] = 2,
    ACTIONS(120), 1,
      sym_newline,
    ACTIONS(118), 3,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
  [1696] = 2,
    ACTIONS(124), 1,
      sym_newline,
    ACTIONS(122), 3,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
  [1705] = 4,
    ACTIONS(187), 1,
      anon_sym_COMMA,
    ACTIONS(291), 1,
      anon_sym_endtype,
    ACTIONS(293), 1,
      aux_sym_type_token1,
    STATE(108), 1,
      aux_sym_class_variable_repeat1,
  [1718] = 4,
    ACTIONS(295), 1,
      anon_sym_endtype,
    ACTIONS(300), 1,
      aux_sym_type_token1,
    ACTIONS(366), 1,
      anon_sym_COMMA,
    STATE(104), 1,
      aux_sym_class_variable_repeat1,
  [1731] = 4,
    ACTIONS(207), 1,
      anon_sym_COMMA,
    ACTIONS(362), 1,
      anon_sym_endvariables,
    ACTIONS(364), 1,
      aux_sym_type_token1,
    STATE(79), 1,
      aux_sym_class_variable_repeat1,
  [1744] = 4,
    ACTIONS(187), 1,
      anon_sym_COMMA,
    ACTIONS(312), 1,
      anon_sym_endtype,
    ACTIONS(314), 1,
      aux_sym_type_token1,
    STATE(111), 1,
      aux_sym_class_variable_repeat1,
  [1757] = 2,
    ACTIONS(99), 1,
      sym_newline,
    ACTIONS(97), 3,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
  [1766] = 4,
    ACTIONS(187), 1,
      anon_sym_COMMA,
    ACTIONS(320), 1,
      anon_sym_endtype,
    ACTIONS(322), 1,
      aux_sym_type_token1,
    STATE(104), 1,
      aux_sym_class_variable_repeat1,
  [1779] = 3,
    ACTIONS(328), 1,
      aux_sym_type_token1,
    ACTIONS(369), 1,
      anon_sym_EQ,
    ACTIONS(324), 2,
      anon_sym_endtype,
      anon_sym_COMMA,
  [1790] = 2,
    ACTIONS(373), 1,
      sym_identifier,
    ACTIONS(371), 3,
      anon_sym_endprototypes,
      anon_sym_LPAREN,
      anon_sym_SEMI,
  [1799] = 4,
    ACTIONS(187), 1,
      anon_sym_COMMA,
    ACTIONS(340), 1,
      anon_sym_endtype,
    ACTIONS(342), 1,
      aux_sym_type_token1,
    STATE(104), 1,
      aux_sym_class_variable_repeat1,
  [1812] = 2,
    ACTIONS(116), 1,
      sym_newline,
    ACTIONS(114), 3,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
  [1821] = 3,
    ACTIONS(375), 1,
      anon_sym_COMMA,
    ACTIONS(379), 1,
      anon_sym_RPAREN,
    ACTIONS(377), 2,
      aux_sym_type_token1,
      anon_sym_ref,
  [1832] = 2,
    ACTIONS(238), 1,
      sym_newline,
    ACTIONS(240), 3,
      anon_sym_LBRACK_RBRACK,
      anon_sym_EQ,
      anon_sym_COMMA,
  [1841] = 1,
    ACTIONS(381), 4,
      ts_builtin_sym_end,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [1848] = 3,
    ACTIONS(280), 1,
      anon_sym_type,
    ACTIONS(383), 1,
      anon_sym_endforward,
    STATE(77), 2,
      sym_forward_type,
      aux_sym_forward_types_repeat1,
  [1859] = 1,
    ACTIONS(385), 4,
      ts_builtin_sym_end,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [1866] = 4,
    ACTIONS(128), 1,
      anon_sym_LPAREN,
    ACTIONS(387), 1,
      sym_identifier,
    STATE(134), 1,
      sym_function_parameters,
    STATE(135), 1,
      aux_sym_function_prototype_repeat1,
  [1879] = 2,
    ACTIONS(122), 1,
      aux_sym_type_token1,
    ACTIONS(124), 2,
      anon_sym_endtype,
      anon_sym_COMMA,
  [1887] = 2,
    STATE(83), 1,
      sym_end_of_function,
    ACTIONS(7), 2,
      anon_sym_endfunction,
      anon_sym_endsubroutine,
  [1895] = 2,
    ACTIONS(391), 1,
      sym_identifier,
    ACTIONS(389), 2,
      anon_sym_endprototypes,
      anon_sym_LPAREN,
  [1903] = 2,
    ACTIONS(395), 1,
      aux_sym_type_token1,
    ACTIONS(393), 2,
      anon_sym_endvariables,
      anon_sym_COMMA,
  [1911] = 2,
    ACTIONS(397), 1,
      sym_newline,
    ACTIONS(252), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
  [1919] = 3,
    ACTIONS(250), 1,
      anon_sym_COMMA,
    ACTIONS(399), 1,
      sym_newline,
    STATE(125), 1,
      aux_sym_variable_repeat1,
  [1929] = 3,
    ACTIONS(401), 1,
      anon_sym_COMMA,
    ACTIONS(404), 1,
      sym_newline,
    STATE(125), 1,
      aux_sym_variable_repeat1,
  [1939] = 2,
    ACTIONS(408), 1,
      aux_sym_type_token1,
    ACTIONS(406), 2,
      anon_sym_endvariables,
      anon_sym_COMMA,
  [1947] = 3,
    ACTIONS(250), 1,
      anon_sym_COMMA,
    ACTIONS(410), 1,
      sym_newline,
    STATE(125), 1,
      aux_sym_variable_repeat1,
  [1957] = 3,
    ACTIONS(412), 1,
      anon_sym_EQ,
    ACTIONS(414), 1,
      anon_sym_COMMA,
    ACTIONS(416), 1,
      sym_newline,
  [1967] = 3,
    ACTIONS(250), 1,
      anon_sym_COMMA,
    ACTIONS(418), 1,
      sym_newline,
    STATE(125), 1,
      aux_sym_variable_repeat1,
  [1977] = 2,
    ACTIONS(198), 1,
      anon_sym_RPAREN,
    ACTIONS(420), 2,
      aux_sym_type_token1,
      anon_sym_ref,
  [1985] = 2,
    ACTIONS(422), 1,
      anon_sym_RPAREN,
    ACTIONS(424), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
  [1993] = 2,
    ACTIONS(395), 1,
      aux_sym_type_token1,
    ACTIONS(393), 2,
      anon_sym_endtype,
      anon_sym_COMMA,
  [2001] = 2,
    ACTIONS(408), 1,
      aux_sym_type_token1,
    ACTIONS(406), 2,
      anon_sym_endtype,
      anon_sym_COMMA,
  [2009] = 2,
    ACTIONS(428), 1,
      sym_identifier,
    ACTIONS(426), 2,
      anon_sym_endprototypes,
      anon_sym_LPAREN,
  [2017] = 3,
    ACTIONS(430), 1,
      anon_sym_LPAREN,
    ACTIONS(432), 1,
      sym_identifier,
    STATE(135), 1,
      aux_sym_function_prototype_repeat1,
  [2027] = 3,
    ACTIONS(250), 1,
      anon_sym_COMMA,
    ACTIONS(435), 1,
      sym_newline,
    STATE(125), 1,
      aux_sym_variable_repeat1,
  [2037] = 2,
    ACTIONS(118), 1,
      aux_sym_type_token1,
    ACTIONS(120), 2,
      anon_sym_endtype,
      anon_sym_COMMA,
  [2045] = 2,
    ACTIONS(97), 1,
      aux_sym_type_token1,
    ACTIONS(99), 2,
      anon_sym_endtype,
      anon_sym_COMMA,
  [2053] = 2,
    ACTIONS(114), 1,
      aux_sym_type_token1,
    ACTIONS(116), 2,
      anon_sym_endtype,
      anon_sym_COMMA,
  [2061] = 2,
    ACTIONS(437), 1,
      anon_sym_RPAREN,
    ACTIONS(424), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
  [2069] = 2,
    ACTIONS(439), 1,
      aux_sym_type_token1,
    STATE(187), 1,
      sym_type,
  [2076] = 1,
    ACTIONS(441), 2,
      anon_sym_endforward,
      anon_sym_type,
  [2081] = 2,
    ACTIONS(443), 1,
      anon_sym_typevariables,
    STATE(152), 1,
      sym_class_variables,
  [2088] = 2,
    ACTIONS(445), 1,
      anon_sym_globaltype,
    STATE(143), 1,
      sym_global_class_properties,
  [2095] = 1,
    ACTIONS(447), 2,
      anon_sym_endforward,
      anon_sym_type,
  [2100] = 2,
    ACTIONS(449), 1,
      aux_sym_type_token1,
    STATE(52), 1,
      sym_variable_name,
  [2107] = 2,
    ACTIONS(451), 1,
      aux_sym_type_token1,
    STATE(96), 1,
      sym_variable_name,
  [2114] = 2,
    ACTIONS(453), 1,
      aux_sym_type_token1,
    STATE(68), 1,
      sym_variable_name,
  [2121] = 2,
    ACTIONS(455), 1,
      sym_identifier,
    STATE(154), 1,
      sym_function_name,
  [2128] = 2,
    ACTIONS(449), 1,
      aux_sym_type_token1,
    STATE(64), 1,
      sym_variable_name,
  [2135] = 2,
    ACTIONS(457), 1,
      sym_identifier,
    STATE(157), 1,
      sym_class_type,
  [2142] = 2,
    ACTIONS(459), 1,
      anon_sym_forwardprototypes,
    STATE(16), 1,
      sym_forward_prototypes,
  [2149] = 2,
    ACTIONS(461), 1,
      sym_identifier,
    STATE(179), 1,
      sym_class_name,
  [2156] = 2,
    ACTIONS(128), 1,
      anon_sym_LPAREN,
    STATE(174), 1,
      sym_function_parameters,
  [2163] = 2,
    ACTIONS(453), 1,
      aux_sym_type_token1,
    STATE(47), 1,
      sym_variable_name,
  [2170] = 2,
    ACTIONS(451), 1,
      aux_sym_type_token1,
    STATE(73), 1,
      sym_variable_name,
  [2177] = 2,
    ACTIONS(463), 1,
      anon_sym_forward,
    STATE(144), 1,
      sym_forward_types,
  [2184] = 2,
    ACTIONS(465), 1,
      anon_sym_globaltype,
    STATE(75), 1,
      sym_class_inherit_from,
  [2191] = 1,
    ACTIONS(467), 2,
      anon_sym_endfunction,
      anon_sym_endsubroutine,
  [2196] = 2,
    ACTIONS(439), 1,
      aux_sym_type_token1,
    STATE(149), 1,
      sym_type,
  [2203] = 1,
    ACTIONS(469), 1,
      anon_sym_forward,
  [2207] = 1,
    ACTIONS(471), 1,
      anon_sym_forwardprototypes,
  [2211] = 1,
    ACTIONS(473), 1,
      aux_sym_type_token1,
  [2215] = 1,
    ACTIONS(475), 1,
      sym_identifier,
  [2219] = 1,
    ACTIONS(477), 1,
      anon_sym_function,
  [2223] = 1,
    ACTIONS(479), 1,
      sym_identifier,
  [2227] = 1,
    ACTIONS(481), 1,
      anon_sym_DOT,
  [2231] = 1,
    ACTIONS(483), 1,
      sym_identifier,
  [2235] = 1,
    ACTIONS(485), 1,
      sym_identifier,
  [2239] = 1,
    ACTIONS(487), 1,
      anon_sym_endtype,
  [2243] = 1,
    ACTIONS(489), 1,
      sym_identifier,
  [2247] = 1,
    ACTIONS(473), 1,
      sym_identifier,
  [2251] = 1,
    ACTIONS(491), 1,
      anon_sym_endvariables,
  [2255] = 1,
    ACTIONS(493), 1,
      anon_sym_SEMI,
  [2259] = 1,
    ACTIONS(495), 1,
      anon_sym_within,
  [2263] = 1,
    ACTIONS(497), 1,
      anon_sym_endtype,
  [2267] = 1,
    ACTIONS(499), 1,
      sym_identifier,
  [2271] = 1,
    ACTIONS(501), 1,
      anon_sym_globaltype,
  [2275] = 1,
    ACTIONS(503), 1,
      anon_sym_DOT,
  [2279] = 1,
    ACTIONS(505), 1,
      ts_builtin_sym_end,
  [2283] = 1,
    ACTIONS(507), 1,
      anon_sym_endtype,
  [2287] = 1,
    ACTIONS(509), 1,
      anon_sym_from,
  [2291] = 1,
    ACTIONS(511), 1,
      sym_identifier,
  [2295] = 1,
    ACTIONS(513), 1,
      anon_sym_from,
  [2299] = 1,
    ACTIONS(515), 1,
      anon_sym_EQ,
  [2303] = 1,
    ACTIONS(517), 1,
      sym_newline,
  [2307] = 1,
    ACTIONS(519), 1,
      sym_identifier,
  [2311] = 1,
    ACTIONS(521), 1,
      anon_sym_typevariables,
  [2315] = 1,
    ACTIONS(523), 1,
      anon_sym_globaltype,
  [2319] = 1,
    ACTIONS(525), 1,
      anon_sym_LPAREN,
  [2323] = 1,
    ACTIONS(527), 1,
      sym_identifier,
  [2327] = 1,
    ACTIONS(529), 1,
      ts_builtin_sym_end,
  [2331] = 1,
    ACTIONS(531), 1,
      anon_sym_function,
  [2335] = 1,
    ACTIONS(533), 1,
      anon_sym_from,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 38,
  [SMALL_STATE(4)] = 72,
  [SMALL_STATE(5)] = 105,
  [SMALL_STATE(6)] = 138,
  [SMALL_STATE(7)] = 171,
  [SMALL_STATE(8)] = 204,
  [SMALL_STATE(9)] = 237,
  [SMALL_STATE(10)] = 270,
  [SMALL_STATE(11)] = 303,
  [SMALL_STATE(12)] = 336,
  [SMALL_STATE(13)] = 369,
  [SMALL_STATE(14)] = 402,
  [SMALL_STATE(15)] = 431,
  [SMALL_STATE(16)] = 460,
  [SMALL_STATE(17)] = 482,
  [SMALL_STATE(18)] = 504,
  [SMALL_STATE(19)] = 526,
  [SMALL_STATE(20)] = 548,
  [SMALL_STATE(21)] = 570,
  [SMALL_STATE(22)] = 592,
  [SMALL_STATE(23)] = 614,
  [SMALL_STATE(24)] = 628,
  [SMALL_STATE(25)] = 642,
  [SMALL_STATE(26)] = 656,
  [SMALL_STATE(27)] = 678,
  [SMALL_STATE(28)] = 700,
  [SMALL_STATE(29)] = 713,
  [SMALL_STATE(30)] = 728,
  [SMALL_STATE(31)] = 747,
  [SMALL_STATE(32)] = 766,
  [SMALL_STATE(33)] = 779,
  [SMALL_STATE(34)] = 792,
  [SMALL_STATE(35)] = 805,
  [SMALL_STATE(36)] = 825,
  [SMALL_STATE(37)] = 845,
  [SMALL_STATE(38)] = 865,
  [SMALL_STATE(39)] = 876,
  [SMALL_STATE(40)] = 887,
  [SMALL_STATE(41)] = 898,
  [SMALL_STATE(42)] = 915,
  [SMALL_STATE(43)] = 926,
  [SMALL_STATE(44)] = 943,
  [SMALL_STATE(45)] = 962,
  [SMALL_STATE(46)] = 981,
  [SMALL_STATE(47)] = 992,
  [SMALL_STATE(48)] = 1011,
  [SMALL_STATE(49)] = 1022,
  [SMALL_STATE(50)] = 1039,
  [SMALL_STATE(51)] = 1050,
  [SMALL_STATE(52)] = 1069,
  [SMALL_STATE(53)] = 1088,
  [SMALL_STATE(54)] = 1105,
  [SMALL_STATE(55)] = 1122,
  [SMALL_STATE(56)] = 1139,
  [SMALL_STATE(57)] = 1156,
  [SMALL_STATE(58)] = 1173,
  [SMALL_STATE(59)] = 1190,
  [SMALL_STATE(60)] = 1201,
  [SMALL_STATE(61)] = 1215,
  [SMALL_STATE(62)] = 1229,
  [SMALL_STATE(63)] = 1243,
  [SMALL_STATE(64)] = 1253,
  [SMALL_STATE(65)] = 1267,
  [SMALL_STATE(66)] = 1281,
  [SMALL_STATE(67)] = 1295,
  [SMALL_STATE(68)] = 1311,
  [SMALL_STATE(69)] = 1325,
  [SMALL_STATE(70)] = 1339,
  [SMALL_STATE(71)] = 1353,
  [SMALL_STATE(72)] = 1367,
  [SMALL_STATE(73)] = 1377,
  [SMALL_STATE(74)] = 1393,
  [SMALL_STATE(75)] = 1409,
  [SMALL_STATE(76)] = 1420,
  [SMALL_STATE(77)] = 1433,
  [SMALL_STATE(78)] = 1444,
  [SMALL_STATE(79)] = 1457,
  [SMALL_STATE(80)] = 1470,
  [SMALL_STATE(81)] = 1479,
  [SMALL_STATE(82)] = 1488,
  [SMALL_STATE(83)] = 1497,
  [SMALL_STATE(84)] = 1504,
  [SMALL_STATE(85)] = 1517,
  [SMALL_STATE(86)] = 1526,
  [SMALL_STATE(87)] = 1535,
  [SMALL_STATE(88)] = 1548,
  [SMALL_STATE(89)] = 1559,
  [SMALL_STATE(90)] = 1568,
  [SMALL_STATE(91)] = 1581,
  [SMALL_STATE(92)] = 1588,
  [SMALL_STATE(93)] = 1601,
  [SMALL_STATE(94)] = 1610,
  [SMALL_STATE(95)] = 1619,
  [SMALL_STATE(96)] = 1626,
  [SMALL_STATE(97)] = 1639,
  [SMALL_STATE(98)] = 1650,
  [SMALL_STATE(99)] = 1661,
  [SMALL_STATE(100)] = 1674,
  [SMALL_STATE(101)] = 1687,
  [SMALL_STATE(102)] = 1696,
  [SMALL_STATE(103)] = 1705,
  [SMALL_STATE(104)] = 1718,
  [SMALL_STATE(105)] = 1731,
  [SMALL_STATE(106)] = 1744,
  [SMALL_STATE(107)] = 1757,
  [SMALL_STATE(108)] = 1766,
  [SMALL_STATE(109)] = 1779,
  [SMALL_STATE(110)] = 1790,
  [SMALL_STATE(111)] = 1799,
  [SMALL_STATE(112)] = 1812,
  [SMALL_STATE(113)] = 1821,
  [SMALL_STATE(114)] = 1832,
  [SMALL_STATE(115)] = 1841,
  [SMALL_STATE(116)] = 1848,
  [SMALL_STATE(117)] = 1859,
  [SMALL_STATE(118)] = 1866,
  [SMALL_STATE(119)] = 1879,
  [SMALL_STATE(120)] = 1887,
  [SMALL_STATE(121)] = 1895,
  [SMALL_STATE(122)] = 1903,
  [SMALL_STATE(123)] = 1911,
  [SMALL_STATE(124)] = 1919,
  [SMALL_STATE(125)] = 1929,
  [SMALL_STATE(126)] = 1939,
  [SMALL_STATE(127)] = 1947,
  [SMALL_STATE(128)] = 1957,
  [SMALL_STATE(129)] = 1967,
  [SMALL_STATE(130)] = 1977,
  [SMALL_STATE(131)] = 1985,
  [SMALL_STATE(132)] = 1993,
  [SMALL_STATE(133)] = 2001,
  [SMALL_STATE(134)] = 2009,
  [SMALL_STATE(135)] = 2017,
  [SMALL_STATE(136)] = 2027,
  [SMALL_STATE(137)] = 2037,
  [SMALL_STATE(138)] = 2045,
  [SMALL_STATE(139)] = 2053,
  [SMALL_STATE(140)] = 2061,
  [SMALL_STATE(141)] = 2069,
  [SMALL_STATE(142)] = 2076,
  [SMALL_STATE(143)] = 2081,
  [SMALL_STATE(144)] = 2088,
  [SMALL_STATE(145)] = 2095,
  [SMALL_STATE(146)] = 2100,
  [SMALL_STATE(147)] = 2107,
  [SMALL_STATE(148)] = 2114,
  [SMALL_STATE(149)] = 2121,
  [SMALL_STATE(150)] = 2128,
  [SMALL_STATE(151)] = 2135,
  [SMALL_STATE(152)] = 2142,
  [SMALL_STATE(153)] = 2149,
  [SMALL_STATE(154)] = 2156,
  [SMALL_STATE(155)] = 2163,
  [SMALL_STATE(156)] = 2170,
  [SMALL_STATE(157)] = 2177,
  [SMALL_STATE(158)] = 2184,
  [SMALL_STATE(159)] = 2191,
  [SMALL_STATE(160)] = 2196,
  [SMALL_STATE(161)] = 2203,
  [SMALL_STATE(162)] = 2207,
  [SMALL_STATE(163)] = 2211,
  [SMALL_STATE(164)] = 2215,
  [SMALL_STATE(165)] = 2219,
  [SMALL_STATE(166)] = 2223,
  [SMALL_STATE(167)] = 2227,
  [SMALL_STATE(168)] = 2231,
  [SMALL_STATE(169)] = 2235,
  [SMALL_STATE(170)] = 2239,
  [SMALL_STATE(171)] = 2243,
  [SMALL_STATE(172)] = 2247,
  [SMALL_STATE(173)] = 2251,
  [SMALL_STATE(174)] = 2255,
  [SMALL_STATE(175)] = 2259,
  [SMALL_STATE(176)] = 2263,
  [SMALL_STATE(177)] = 2267,
  [SMALL_STATE(178)] = 2271,
  [SMALL_STATE(179)] = 2275,
  [SMALL_STATE(180)] = 2279,
  [SMALL_STATE(181)] = 2283,
  [SMALL_STATE(182)] = 2287,
  [SMALL_STATE(183)] = 2291,
  [SMALL_STATE(184)] = 2295,
  [SMALL_STATE(185)] = 2299,
  [SMALL_STATE(186)] = 2303,
  [SMALL_STATE(187)] = 2307,
  [SMALL_STATE(188)] = 2311,
  [SMALL_STATE(189)] = 2315,
  [SMALL_STATE(190)] = 2319,
  [SMALL_STATE(191)] = 2323,
  [SMALL_STATE(192)] = 2327,
  [SMALL_STATE(193)] = 2331,
  [SMALL_STATE(194)] = 2335,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 1, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_block_repeat1, 2, 0, 0), SHIFT_REPEAT(163),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_block_repeat1, 2, 0, 0),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_block_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_block_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_block_repeat1, 2, 0, 0), SHIFT_REPEAT(185),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 8, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_implementations, 1, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_implementations_repeat1, 2, 0, 0),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_implementations_repeat1, 2, 0, 0), SHIFT_REPEAT(193),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_forward_prototypes_repeat1, 2, 0, 0),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_forward_prototypes_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_forward_prototypes_repeat1, 2, 0, 0), SHIFT_REPEAT(118),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_declaration, 2, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_declaration, 2, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 3, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0), SHIFT_REPEAT(85),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0), SHIFT_REPEAT(86),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_decl, 6, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_decl, 6, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_variable, 2, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_variable, 2, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [195] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(172),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_parameters_repeat1, 2, 0, 0),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(141),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_properties, 1, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_properties_repeat1, 2, 0, 0),
  [235] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_properties_repeat1, 2, 0, 0), SHIFT_REPEAT(163),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_name, 1, 0, 0),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_name, 1, 0, 0),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_variable_repeat1, 2, 0, 3),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_variable_repeat1, 2, 0, 3),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 4, 0, 0),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_variable, 3, 0, 0),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_variable, 3, 0, 0),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 5, 0, 0),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 2, 0, 0),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_variable, 4, 0, 2),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_variable, 4, 0, 2),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_forward_types_repeat1, 2, 0, 0),
  [288] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_forward_types_repeat1, 2, 0, 0), SHIFT_REPEAT(171),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_variable, 4, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_variable, 4, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_variable_repeat1, 2, 0, 4),
  [297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_variable_repeat1, 2, 0, 4), SHIFT_REPEAT(150),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_variable_repeat1, 2, 0, 4),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameter, 2, 0, 0),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_parameter, 2, 0, 0),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameters, 3, 0, 0),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_parameters, 3, 0, 0),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_implementation, 3, 0, 0),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_variable, 5, 0, 0),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_variable, 5, 0, 0),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal_content, 1, 0, 0),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal_content, 1, 0, 0),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_variable, 5, 0, 5),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_variable, 5, 0, 5),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_variable_repeat1, 3, 0, 6),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_variable_repeat1, 3, 0, 6),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameter, 3, 0, 0),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_parameter, 3, 0, 0),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3, 0, 0),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_forward_prototypes, 2, 0, 0),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_variable, 6, 0, 7),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_variable, 6, 0, 7),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_implementation, 2, 0, 0),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_repeat1, 2, 0, 3),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_repeat1, 2, 0, 3),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_repeat1, 4, 0, 8),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_repeat1, 4, 0, 8),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_repeat1, 5, 0, 9),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_repeat1, 5, 0, 9),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_variable, 3, 0, 1),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_variable, 3, 0, 1),
  [366] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_variable_repeat1, 2, 0, 4), SHIFT_REPEAT(148),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameters, 2, 0, 0),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_parameters, 2, 0, 0),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_parameters_repeat1, 1, 0, 0),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_parameters_repeat1, 1, 0, 0),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_forward_prototypes, 3, 0, 0),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_of_function, 1, 0, 0),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_prototype, 1, 0, 0),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_prototype, 1, 0, 0),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_variable_repeat1, 4, 0, 8),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_variable_repeat1, 4, 0, 8),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 4, 0, 2),
  [401] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_repeat1, 2, 0, 4), SHIFT_REPEAT(147),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_repeat1, 2, 0, 4),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_variable_repeat1, 5, 0, 9),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_variable_repeat1, 5, 0, 9),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 5, 0, 5),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_repeat1, 3, 0, 6),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_repeat1, 3, 0, 6),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 6, 0, 7),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_parameters_repeat1, 2, 0, 0),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_prototype, 2, 0, 0),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_prototype, 2, 0, 0),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_prototype_repeat1, 2, 0, 0),
  [432] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_prototype_repeat1, 2, 0, 0), SHIFT_REPEAT(135),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3, 0, 1),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_forward_type, 7, 0, 0),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_inherit_from, 5, 0, 0),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_body, 1, 0, 0),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_type, 1, 0, 0),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_variables, 3, 0, 0),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name, 1, 0, 0),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_forward_types, 3, 0, 0),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 9, 0, 0),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_class_properties, 6, 0, 0),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_forward_types, 4, 0, 0),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_name, 1, 0, 0),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [529] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_visibility, 1, 0, 0),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_powerbuilder(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
