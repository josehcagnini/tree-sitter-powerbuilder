#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 148
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 92
#define ALIAS_COUNT 0
#define TOKEN_COUNT 48
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 2

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
  anon_sym_EQ = 14,
  anon_sym_COMMA = 15,
  aux_sym_type_token1 = 16,
  anon_sym_LPAREN = 17,
  anon_sym_RPAREN = 18,
  anon_sym_ref = 19,
  sym_identifier = 20,
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
  anon_sym_DASH = 39,
  anon_sym_BANG = 40,
  anon_sym_STAR = 41,
  anon_sym_PLUS = 42,
  anon_sym_PLUS_EQ = 43,
  anon_sym_DASH_EQ = 44,
  anon_sym_STAR_EQ = 45,
  anon_sym_SLASH_EQ = 46,
  anon_sym_PERCENT_EQ = 47,
  sym_source_file = 48,
  sym_class_name = 49,
  sym_class_type = 50,
  sym_forward_types = 51,
  sym_class_inherit_from = 52,
  sym_forward_type = 53,
  sym_global_class_properties = 54,
  sym_class_variables = 55,
  sym_forward_prototypes = 56,
  sym_class_properties = 57,
  sym_variable = 58,
  sym_type = 59,
  sym_variable_name = 60,
  sym_function_prototype = 61,
  sym_function_parameters = 62,
  sym_function_parameter = 63,
  sym_value = 64,
  sym_boolean_literal = 65,
  sym_string_literal = 66,
  sym_string_literal_content = 67,
  sym_function_implementations = 68,
  sym_function_implementation = 69,
  sym_function_decl = 70,
  sym_function_name = 71,
  sym_function_body = 72,
  sym__end_of_function = 73,
  sym_visibility = 74,
  sym_code_block = 75,
  sym_return_statement = 76,
  sym_local_declaration = 77,
  sym_expression = 78,
  sym_unary_expression = 79,
  sym_binary_expression = 80,
  sym_assignment_expression = 81,
  sym_lvalue_expression = 82,
  aux_sym_forward_types_repeat1 = 83,
  aux_sym_forward_prototypes_repeat1 = 84,
  aux_sym_class_properties_repeat1 = 85,
  aux_sym_variable_repeat1 = 86,
  aux_sym_function_prototype_repeat1 = 87,
  aux_sym_function_parameters_repeat1 = 88,
  aux_sym_string_literal_repeat1 = 89,
  aux_sym_function_implementations_repeat1 = 90,
  aux_sym_code_block_repeat1 = 91,
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
  [anon_sym_EQ] = "=",
  [anon_sym_COMMA] = ",",
  [aux_sym_type_token1] = "type_token1",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_ref] = "ref",
  [sym_identifier] = "identifier",
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
  [anon_sym_DASH] = "-",
  [anon_sym_BANG] = "!",
  [anon_sym_STAR] = "*",
  [anon_sym_PLUS] = "+",
  [anon_sym_PLUS_EQ] = "+=",
  [anon_sym_DASH_EQ] = "-=",
  [anon_sym_STAR_EQ] = "*=",
  [anon_sym_SLASH_EQ] = "/=",
  [anon_sym_PERCENT_EQ] = "%=",
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
  [sym__end_of_function] = "_end_of_function",
  [sym_visibility] = "visibility",
  [sym_code_block] = "code_block",
  [sym_return_statement] = "return_statement",
  [sym_local_declaration] = "local_declaration",
  [sym_expression] = "expression",
  [sym_unary_expression] = "unary_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_assignment_expression] = "assignment_expression",
  [sym_lvalue_expression] = "lvalue_expression",
  [aux_sym_forward_types_repeat1] = "forward_types_repeat1",
  [aux_sym_forward_prototypes_repeat1] = "forward_prototypes_repeat1",
  [aux_sym_class_properties_repeat1] = "class_properties_repeat1",
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
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_type_token1] = aux_sym_type_token1,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_ref] = anon_sym_ref,
  [sym_identifier] = sym_identifier,
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
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_PLUS_EQ] = anon_sym_PLUS_EQ,
  [anon_sym_DASH_EQ] = anon_sym_DASH_EQ,
  [anon_sym_STAR_EQ] = anon_sym_STAR_EQ,
  [anon_sym_SLASH_EQ] = anon_sym_SLASH_EQ,
  [anon_sym_PERCENT_EQ] = anon_sym_PERCENT_EQ,
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
  [sym__end_of_function] = sym__end_of_function,
  [sym_visibility] = sym_visibility,
  [sym_code_block] = sym_code_block,
  [sym_return_statement] = sym_return_statement,
  [sym_local_declaration] = sym_local_declaration,
  [sym_expression] = sym_expression,
  [sym_unary_expression] = sym_unary_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_assignment_expression] = sym_assignment_expression,
  [sym_lvalue_expression] = sym_lvalue_expression,
  [aux_sym_forward_types_repeat1] = aux_sym_forward_types_repeat1,
  [aux_sym_forward_prototypes_repeat1] = aux_sym_forward_prototypes_repeat1,
  [aux_sym_class_properties_repeat1] = aux_sym_class_properties_repeat1,
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
  [sym_identifier] = {
    .visible = true,
    .named = true,
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
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
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
  [anon_sym_PLUS_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_EQ] = {
    .visible = true,
    .named = false,
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
  [sym__end_of_function] = {
    .visible = false,
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
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_lvalue_expression] = {
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
  field_left = 1,
  field_operator = 2,
  field_right = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_left] = "left",
  [field_operator] = "operator",
  [field_right] = "right",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
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
  [19] = 18,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 18,
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
  [47] = 43,
  [48] = 44,
  [49] = 43,
  [50] = 44,
  [51] = 51,
  [52] = 51,
  [53] = 53,
  [54] = 54,
  [55] = 53,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 17,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 14,
  [66] = 15,
  [67] = 16,
  [68] = 17,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 14,
  [73] = 73,
  [74] = 15,
  [75] = 16,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 22,
  [84] = 21,
  [85] = 23,
  [86] = 25,
  [87] = 87,
  [88] = 23,
  [89] = 21,
  [90] = 90,
  [91] = 25,
  [92] = 26,
  [93] = 22,
  [94] = 90,
  [95] = 90,
  [96] = 96,
  [97] = 26,
  [98] = 98,
  [99] = 99,
  [100] = 34,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 36,
  [109] = 109,
  [110] = 110,
  [111] = 34,
  [112] = 112,
  [113] = 113,
  [114] = 36,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
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
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 123,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(187);
      ADVANCE_MAP(
        '!', 256,
        '"', 233,
        '%', 18,
        '(', 220,
        ')', 221,
        '*', 257,
        '+', 258,
        ',', 202,
        '-', 255,
        '.', 189,
        '/', 13,
        ';', 244,
        '=', 201,
        'H', 19,
        '\\', 24,
        'e', 92,
        'f', 26,
        'g', 86,
        'n', 158,
        'p', 121,
        'r', 52,
        't', 123,
        'w', 74,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(186);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(228);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(8);
      if (lookahead == '"') ADVANCE(233);
      if (lookahead == '\\') ADVANCE(24);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(234);
      if (lookahead != 0) ADVANCE(235);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(70);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(151);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(164);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(120);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '!', 256,
        '%', 18,
        '*', 257,
        '+', 258,
        ',', 202,
        '-', 255,
        '/', 13,
        '=', 201,
        'e', 212,
        'r', 209,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(256);
      if (lookahead == '(') ADVANCE(220);
      if (lookahead == '-') ADVANCE(254);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(233);
      if (lookahead == '\\') ADVANCE(25);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      END_STATE();
    case 9:
      if (lookahead == '$') ADVANCE(23);
      END_STATE();
    case 10:
      if (lookahead == '$') ADVANCE(188);
      END_STATE();
    case 11:
      if (lookahead == '(') ADVANCE(220);
      if (lookahead == ';') ADVANCE(244);
      if (lookahead == 'e') ADVANCE(226);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      END_STATE();
    case 12:
      if (lookahead == ')') ADVANCE(221);
      if (lookahead == ',') ADVANCE(202);
      if (lookahead == 'r') ADVANCE(210);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '/') ADVANCE(251);
      if (lookahead == '=') ADVANCE(262);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '/') ADVANCE(250);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == ',') ADVANCE(202);
      if (lookahead == '=') ADVANCE(201);
      if (lookahead == 'e') ADVANCE(214);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 17:
      if (lookahead == ',') ADVANCE(202);
      if (lookahead == '=') ADVANCE(201);
      if (lookahead == 'e') ADVANCE(215);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 18:
      if (lookahead == '=') ADVANCE(263);
      END_STATE();
    case 19:
      if (lookahead == 'A') ADVANCE(9);
      END_STATE();
    case 20:
      if (lookahead == 'B') ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == 'E') ADVANCE(168);
      END_STATE();
    case 22:
      if (lookahead == 'H') ADVANCE(66);
      END_STATE();
    case 23:
      if (lookahead == 'P') ADVANCE(20);
      END_STATE();
    case 24:
      ADVANCE_MAP(
        'U', 237,
        'u', 239,
        'x', 238,
        '"', 240,
        '\'', 240,
        '0', 240,
        '?', 240,
        '\\', 240,
        'a', 240,
        'b', 240,
        'e', 240,
        'f', 240,
        'n', 240,
        'r', 240,
        't', 240,
        'v', 240,
      );
      if (lookahead != 0) ADVANCE(236);
      END_STATE();
    case 25:
      ADVANCE_MAP(
        'U', 177,
        'u', 182,
        'x', 179,
        '"', 240,
        '\'', 240,
        '0', 240,
        '?', 240,
        '\\', 240,
        'a', 240,
        'b', 240,
        'e', 240,
        'f', 240,
        'n', 240,
        'r', 240,
        't', 240,
        'v', 240,
      );
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(83);
      if (lookahead == 'o') ADVANCE(122);
      if (lookahead == 'r') ADVANCE(100);
      if (lookahead == 'u') ADVANCE(93);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(125);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(129);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(87);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(128);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(132);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(39);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(147);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(134);
      END_STATE();
    case 37:
      if (lookahead == 'b') ADVANCE(30);
      END_STATE();
    case 38:
      if (lookahead == 'b') ADVANCE(85);
      END_STATE();
    case 39:
      if (lookahead == 'b') ADVANCE(89);
      END_STATE();
    case 40:
      if (lookahead == 'b') ADVANCE(130);
      END_STATE();
    case 41:
      if (lookahead == 'b') ADVANCE(90);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(247);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(145);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(148);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(152);
      END_STATE();
    case 46:
      if (lookahead == 'd') ADVANCE(2);
      END_STATE();
    case 47:
      if (lookahead == 'd') ADVANCE(190);
      END_STATE();
    case 48:
      if (lookahead == 'd') ADVANCE(249);
      END_STATE();
    case 49:
      if (lookahead == 'd') ADVANCE(191);
      END_STATE();
    case 50:
      if (lookahead == 'd') ADVANCE(5);
      END_STATE();
    case 51:
      if (lookahead == 'd') ADVANCE(67);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(230);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(231);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(248);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(194);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(246);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(4);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 69:
      if (lookahead == 'f') ADVANCE(222);
      if (lookahead == 't') ADVANCE(157);
      END_STATE();
    case 70:
      if (lookahead == 'f') ADVANCE(107);
      if (lookahead == 'p') ADVANCE(127);
      if (lookahead == 's') ADVANCE(159);
      if (lookahead == 't') ADVANCE(169);
      if (lookahead == 'v') ADVANCE(29);
      END_STATE();
    case 71:
      if (lookahead == 'f') ADVANCE(161);
      if (lookahead == 's') ADVANCE(159);
      END_STATE();
    case 72:
      if (lookahead == 'f') ADVANCE(109);
      if (lookahead == 't') ADVANCE(172);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(72);
      END_STATE();
    case 73:
      if (lookahead == 'h') ADVANCE(77);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(142);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(162);
      if (lookahead == 'o') ADVANCE(146);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(95);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(103);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(98);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(105);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 83:
      if (lookahead == 'l') ADVANCE(141);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(232);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(76);
      END_STATE();
    case 86:
      if (lookahead == 'l') ADVANCE(101);
      END_STATE();
    case 87:
      if (lookahead == 'l') ADVANCE(3);
      END_STATE();
    case 88:
      if (lookahead == 'l') ADVANCE(84);
      END_STATE();
    case 89:
      if (lookahead == 'l') ADVANCE(60);
      END_STATE();
    case 90:
      if (lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 91:
      if (lookahead == 'm') ADVANCE(193);
      END_STATE();
    case 92:
      if (lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(252);
      END_STATE();
    case 95:
      if (lookahead == 'n') ADVANCE(196);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(243);
      END_STATE();
    case 97:
      if (lookahead == 'n') ADVANCE(245);
      END_STATE();
    case 98:
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 99:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 100:
      if (lookahead == 'o') ADVANCE(91);
      END_STATE();
    case 101:
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 102:
      if (lookahead == 'o') ADVANCE(150);
      END_STATE();
    case 103:
      if (lookahead == 'o') ADVANCE(96);
      END_STATE();
    case 104:
      if (lookahead == 'o') ADVANCE(160);
      END_STATE();
    case 105:
      if (lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 106:
      if (lookahead == 'o') ADVANCE(131);
      END_STATE();
    case 107:
      if (lookahead == 'o') ADVANCE(133);
      if (lookahead == 'u') ADVANCE(99);
      END_STATE();
    case 108:
      if (lookahead == 'o') ADVANCE(153);
      END_STATE();
    case 109:
      if (lookahead == 'o') ADVANCE(135);
      END_STATE();
    case 110:
      if (lookahead == 'o') ADVANCE(154);
      END_STATE();
    case 111:
      if (lookahead == 'o') ADVANCE(155);
      END_STATE();
    case 112:
      if (lookahead == 'p') ADVANCE(54);
      END_STATE();
    case 113:
      if (lookahead == 'p') ADVANCE(127);
      END_STATE();
    case 114:
      if (lookahead == 'p') ADVANCE(106);
      END_STATE();
    case 115:
      if (lookahead == 'p') ADVANCE(57);
      END_STATE();
    case 116:
      if (lookahead == 'p') ADVANCE(58);
      END_STATE();
    case 117:
      if (lookahead == 'p') ADVANCE(63);
      END_STATE();
    case 118:
      if (lookahead == 'p') ADVANCE(62);
      END_STATE();
    case 119:
      if (lookahead == 'p') ADVANCE(65);
      END_STATE();
    case 120:
      if (lookahead == 'p') ADVANCE(136);
      END_STATE();
    case 121:
      if (lookahead == 'r') ADVANCE(75);
      if (lookahead == 'u') ADVANCE(38);
      END_STATE();
    case 122:
      if (lookahead == 'r') ADVANCE(165);
      END_STATE();
    case 123:
      if (lookahead == 'r') ADVANCE(156);
      if (lookahead == 'y') ADVANCE(112);
      END_STATE();
    case 124:
      if (lookahead == 'r') ADVANCE(10);
      END_STATE();
    case 125:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 126:
      if (lookahead == 'r') ADVANCE(94);
      END_STATE();
    case 127:
      if (lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 128:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 129:
      if (lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 130:
      if (lookahead == 'r') ADVANCE(104);
      END_STATE();
    case 131:
      if (lookahead == 'r') ADVANCE(144);
      END_STATE();
    case 132:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 133:
      if (lookahead == 'r') ADVANCE(166);
      END_STATE();
    case 134:
      if (lookahead == 'r') ADVANCE(82);
      END_STATE();
    case 135:
      if (lookahead == 'r') ADVANCE(167);
      END_STATE();
    case 136:
      if (lookahead == 'r') ADVANCE(111);
      END_STATE();
    case 137:
      if (lookahead == 's') ADVANCE(198);
      END_STATE();
    case 138:
      if (lookahead == 's') ADVANCE(200);
      END_STATE();
    case 139:
      if (lookahead == 's') ADVANCE(197);
      END_STATE();
    case 140:
      if (lookahead == 's') ADVANCE(199);
      END_STATE();
    case 141:
      if (lookahead == 's') ADVANCE(55);
      END_STATE();
    case 142:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 143:
      if (lookahead == 't') ADVANCE(169);
      END_STATE();
    case 144:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 145:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 146:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 147:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 148:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 149:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 150:
      if (lookahead == 't') ADVANCE(108);
      END_STATE();
    case 151:
      if (lookahead == 't') ADVANCE(170);
      END_STATE();
    case 152:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 153:
      if (lookahead == 't') ADVANCE(171);
      END_STATE();
    case 154:
      if (lookahead == 't') ADVANCE(173);
      END_STATE();
    case 155:
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 156:
      if (lookahead == 'u') ADVANCE(53);
      END_STATE();
    case 157:
      if (lookahead == 'u') ADVANCE(126);
      END_STATE();
    case 158:
      if (lookahead == 'u') ADVANCE(88);
      END_STATE();
    case 159:
      if (lookahead == 'u') ADVANCE(40);
      END_STATE();
    case 160:
      if (lookahead == 'u') ADVANCE(149);
      END_STATE();
    case 161:
      if (lookahead == 'u') ADVANCE(99);
      END_STATE();
    case 162:
      if (lookahead == 'v') ADVANCE(34);
      END_STATE();
    case 163:
      if (lookahead == 'v') ADVANCE(29);
      END_STATE();
    case 164:
      if (lookahead == 'v') ADVANCE(36);
      END_STATE();
    case 165:
      if (lookahead == 'w') ADVANCE(27);
      END_STATE();
    case 166:
      if (lookahead == 'w') ADVANCE(31);
      END_STATE();
    case 167:
      if (lookahead == 'w') ADVANCE(32);
      END_STATE();
    case 168:
      if (lookahead == 'x') ADVANCE(114);
      END_STATE();
    case 169:
      if (lookahead == 'y') ADVANCE(115);
      END_STATE();
    case 170:
      if (lookahead == 'y') ADVANCE(116);
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
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 175:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(229);
      END_STATE();
    case 176:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(240);
      END_STATE();
    case 177:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(185);
      END_STATE();
    case 178:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(242);
      END_STATE();
    case 179:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(178);
      END_STATE();
    case 180:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(176);
      END_STATE();
    case 181:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(180);
      END_STATE();
    case 182:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(181);
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
      if (eof) ADVANCE(187);
      ADVANCE_MAP(
        '!', 256,
        '"', 233,
        '%', 18,
        '(', 220,
        ')', 221,
        '*', 257,
        '+', 258,
        ',', 202,
        '-', 255,
        '.', 189,
        '/', 13,
        ';', 244,
        '=', 201,
        'H', 19,
        '\\', 25,
        'e', 92,
        'f', 26,
        'g', 86,
        'n', 158,
        'p', 121,
        'r', 52,
        't', 123,
        'w', 74,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(186);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(228);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_HA_DOLLARPBExportHeader_DOLLAR);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_forward);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_endforward);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_globaltype);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_endtype);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_within);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_typevariables);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_endvariables);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_forwardprototypes);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_endprototypes);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == ' ') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == ' ') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == ' ') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == 'd') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == 'd') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == 'd') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == 'e') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == 'e') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == 'f') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == 'n') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == 'n') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == 'n') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == 'n') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == 'r') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == 't') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == 'u') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_ref);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_ref);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(228);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_decimal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(229);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_string_literal_content_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(234);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(235);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_string_literal_content_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(235);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_string_literal_content_token2);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_string_literal_content_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(185);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_string_literal_content_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(178);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_string_literal_content_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(181);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(240);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(241);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_endfunction);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_endsubroutine);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(251);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_return);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(260);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=') ADVANCE(261);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(259);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_PERCENT_EQ);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 6},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 6},
  [5] = {.lex_state = 6},
  [6] = {.lex_state = 6},
  [7] = {.lex_state = 6},
  [8] = {.lex_state = 6},
  [9] = {.lex_state = 6},
  [10] = {.lex_state = 6},
  [11] = {.lex_state = 6},
  [12] = {.lex_state = 6},
  [13] = {.lex_state = 6},
  [14] = {.lex_state = 6},
  [15] = {.lex_state = 6},
  [16] = {.lex_state = 6},
  [17] = {.lex_state = 6},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 6},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 7},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 7},
  [33] = {.lex_state = 7},
  [34] = {.lex_state = 6},
  [35] = {.lex_state = 7},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 11},
  [38] = {.lex_state = 11},
  [39] = {.lex_state = 11},
  [40] = {.lex_state = 12},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 12},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 12},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 16},
  [52] = {.lex_state = 17},
  [53] = {.lex_state = 17},
  [54] = {.lex_state = 174},
  [55] = {.lex_state = 16},
  [56] = {.lex_state = 174},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 12},
  [60] = {.lex_state = 16},
  [61] = {.lex_state = 11},
  [62] = {.lex_state = 12},
  [63] = {.lex_state = 12},
  [64] = {.lex_state = 11},
  [65] = {.lex_state = 17},
  [66] = {.lex_state = 17},
  [67] = {.lex_state = 17},
  [68] = {.lex_state = 17},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 16},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 16},
  [75] = {.lex_state = 16},
  [76] = {.lex_state = 7},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 11},
  [81] = {.lex_state = 11},
  [82] = {.lex_state = 7},
  [83] = {.lex_state = 16},
  [84] = {.lex_state = 16},
  [85] = {.lex_state = 16},
  [86] = {.lex_state = 16},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 17},
  [89] = {.lex_state = 17},
  [90] = {.lex_state = 174},
  [91] = {.lex_state = 17},
  [92] = {.lex_state = 17},
  [93] = {.lex_state = 17},
  [94] = {.lex_state = 174},
  [95] = {.lex_state = 174},
  [96] = {.lex_state = 12},
  [97] = {.lex_state = 16},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 7},
  [100] = {.lex_state = 16},
  [101] = {.lex_state = 7},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 7},
  [108] = {.lex_state = 17},
  [109] = {.lex_state = 72},
  [110] = {.lex_state = 174},
  [111] = {.lex_state = 17},
  [112] = {.lex_state = 72},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 16},
  [115] = {.lex_state = 174},
  [116] = {.lex_state = 7},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 72},
  [119] = {.lex_state = 7},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 7},
  [123] = {.lex_state = 174},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 7},
  [128] = {.lex_state = 7},
  [129] = {.lex_state = 72},
  [130] = {.lex_state = 7},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 7},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 7},
  [143] = {.lex_state = 7},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 7},
  [147] = {.lex_state = 0},
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
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_DASH_EQ] = ACTIONS(1),
    [anon_sym_STAR_EQ] = ACTIONS(1),
    [anon_sym_SLASH_EQ] = ACTIONS(1),
    [anon_sym_PERCENT_EQ] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(131),
    [anon_sym_HA_DOLLARPBExportHeader_DOLLAR] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 15,
    ACTIONS(5), 1,
      aux_sym_type_token1,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_return,
    STATE(8), 1,
      sym_expression,
    STATE(31), 1,
      sym_variable,
    STATE(41), 1,
      sym_lvalue_expression,
    STATE(73), 1,
      sym__end_of_function,
    STATE(87), 1,
      sym_function_body,
    STATE(94), 1,
      sym_type,
    STATE(98), 1,
      sym_code_block,
    ACTIONS(9), 2,
      anon_sym_endfunction,
      anon_sym_endsubroutine,
    ACTIONS(15), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(3), 3,
      sym_return_statement,
      sym_local_declaration,
      aux_sym_code_block_repeat1,
    STATE(7), 3,
      sym_unary_expression,
      sym_binary_expression,
      sym_assignment_expression,
  [52] = 12,
    ACTIONS(5), 1,
      aux_sym_type_token1,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_return,
    ACTIONS(19), 1,
      sym_comment,
    STATE(8), 1,
      sym_expression,
    STATE(31), 1,
      sym_variable,
    STATE(41), 1,
      sym_lvalue_expression,
    STATE(94), 1,
      sym_type,
    ACTIONS(15), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(17), 2,
      anon_sym_endfunction,
      anon_sym_endsubroutine,
    STATE(4), 3,
      sym_return_statement,
      sym_local_declaration,
      aux_sym_code_block_repeat1,
    STATE(7), 3,
      sym_unary_expression,
      sym_binary_expression,
      sym_assignment_expression,
  [95] = 12,
    ACTIONS(21), 1,
      aux_sym_type_token1,
    ACTIONS(24), 1,
      sym_identifier,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(32), 1,
      anon_sym_return,
    STATE(8), 1,
      sym_expression,
    STATE(31), 1,
      sym_variable,
    STATE(41), 1,
      sym_lvalue_expression,
    STATE(94), 1,
      sym_type,
    ACTIONS(27), 2,
      anon_sym_endfunction,
      anon_sym_endsubroutine,
    ACTIONS(35), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(4), 3,
      sym_return_statement,
      sym_local_declaration,
      aux_sym_code_block_repeat1,
    STATE(7), 3,
      sym_unary_expression,
      sym_binary_expression,
      sym_assignment_expression,
  [138] = 3,
    ACTIONS(42), 4,
      anon_sym_endfunction,
      anon_sym_endsubroutine,
      sym_comment,
      anon_sym_BANG,
    ACTIONS(38), 6,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
    ACTIONS(40), 6,
      aux_sym_type_token1,
      sym_identifier,
      anon_sym_return,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
  [161] = 7,
    ACTIONS(7), 1,
      sym_identifier,
    STATE(9), 1,
      sym_expression,
    STATE(41), 1,
      sym_lvalue_expression,
    ACTIONS(15), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(44), 2,
      aux_sym_type_token1,
      anon_sym_return,
    ACTIONS(46), 3,
      anon_sym_endfunction,
      anon_sym_endsubroutine,
      sym_comment,
    STATE(7), 3,
      sym_unary_expression,
      sym_binary_expression,
      sym_assignment_expression,
  [189] = 2,
    ACTIONS(40), 3,
      aux_sym_type_token1,
      sym_identifier,
      anon_sym_return,
    ACTIONS(42), 7,
      anon_sym_endfunction,
      anon_sym_endsubroutine,
      sym_comment,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_PLUS,
  [204] = 4,
    ACTIONS(52), 1,
      anon_sym_STAR,
    ACTIONS(54), 1,
      anon_sym_PLUS,
    ACTIONS(48), 3,
      aux_sym_type_token1,
      sym_identifier,
      anon_sym_return,
    ACTIONS(50), 5,
      anon_sym_endfunction,
      anon_sym_endsubroutine,
      sym_comment,
      anon_sym_DASH,
      anon_sym_BANG,
  [223] = 4,
    ACTIONS(52), 1,
      anon_sym_STAR,
    ACTIONS(54), 1,
      anon_sym_PLUS,
    ACTIONS(56), 3,
      aux_sym_type_token1,
      sym_identifier,
      anon_sym_return,
    ACTIONS(58), 5,
      anon_sym_endfunction,
      anon_sym_endsubroutine,
      sym_comment,
      anon_sym_DASH,
      anon_sym_BANG,
  [242] = 2,
    ACTIONS(60), 3,
      aux_sym_type_token1,
      sym_identifier,
      anon_sym_return,
    ACTIONS(62), 7,
      anon_sym_endfunction,
      anon_sym_endsubroutine,
      sym_comment,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_PLUS,
  [257] = 2,
    ACTIONS(64), 3,
      aux_sym_type_token1,
      sym_identifier,
      anon_sym_return,
    ACTIONS(66), 7,
      anon_sym_endfunction,
      anon_sym_endsubroutine,
      sym_comment,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_PLUS,
  [272] = 3,
    ACTIONS(52), 1,
      anon_sym_STAR,
    ACTIONS(64), 3,
      aux_sym_type_token1,
      sym_identifier,
      anon_sym_return,
    ACTIONS(66), 6,
      anon_sym_endfunction,
      anon_sym_endsubroutine,
      sym_comment,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_PLUS,
  [289] = 4,
    ACTIONS(52), 1,
      anon_sym_STAR,
    ACTIONS(54), 1,
      anon_sym_PLUS,
    ACTIONS(68), 3,
      aux_sym_type_token1,
      sym_identifier,
      anon_sym_return,
    ACTIONS(70), 5,
      anon_sym_endfunction,
      anon_sym_endsubroutine,
      sym_comment,
      anon_sym_DASH,
      anon_sym_BANG,
  [308] = 2,
    ACTIONS(74), 3,
      aux_sym_type_token1,
      sym_identifier,
      anon_sym_return,
    ACTIONS(72), 7,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_endfunction,
      anon_sym_endsubroutine,
      sym_comment,
      anon_sym_DASH,
      anon_sym_BANG,
  [323] = 4,
    ACTIONS(76), 1,
      anon_sym_EQ,
    ACTIONS(78), 1,
      anon_sym_COMMA,
    ACTIONS(80), 3,
      aux_sym_type_token1,
      sym_identifier,
      anon_sym_return,
    ACTIONS(82), 5,
      anon_sym_endfunction,
      anon_sym_endsubroutine,
      sym_comment,
      anon_sym_DASH,
      anon_sym_BANG,
  [342] = 4,
    STATE(15), 1,
      sym_variable_name,
    STATE(17), 1,
      aux_sym_variable_repeat1,
    ACTIONS(84), 3,
      aux_sym_type_token1,
      sym_identifier,
      anon_sym_return,
    ACTIONS(86), 5,
      anon_sym_endfunction,
      anon_sym_endsubroutine,
      sym_comment,
      anon_sym_DASH,
      anon_sym_BANG,
  [361] = 5,
    ACTIONS(88), 1,
      aux_sym_type_token1,
    STATE(15), 1,
      sym_variable_name,
    STATE(17), 1,
      aux_sym_variable_repeat1,
    ACTIONS(91), 2,
      sym_identifier,
      anon_sym_return,
    ACTIONS(93), 5,
      anon_sym_endfunction,
      anon_sym_endsubroutine,
      sym_comment,
      anon_sym_DASH,
      anon_sym_BANG,
  [382] = 6,
    ACTIONS(95), 1,
      sym_integer,
    ACTIONS(97), 1,
      sym_decimal,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    STATE(25), 1,
      sym_value,
    STATE(23), 2,
      sym_boolean_literal,
      sym_string_literal,
    ACTIONS(99), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
  [404] = 6,
    ACTIONS(103), 1,
      sym_integer,
    ACTIONS(105), 1,
      sym_decimal,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    STATE(86), 1,
      sym_value,
    STATE(85), 2,
      sym_boolean_literal,
      sym_string_literal,
    ACTIONS(107), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
  [426] = 6,
    ACTIONS(111), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_function_decl,
    STATE(135), 1,
      sym_function_implementations,
    STATE(137), 1,
      sym_visibility,
    STATE(27), 2,
      sym_function_implementation,
      aux_sym_function_implementations_repeat1,
    ACTIONS(113), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [448] = 2,
    ACTIONS(117), 3,
      aux_sym_type_token1,
      sym_identifier,
      anon_sym_return,
    ACTIONS(115), 6,
      anon_sym_COMMA,
      anon_sym_endfunction,
      anon_sym_endsubroutine,
      sym_comment,
      anon_sym_DASH,
      anon_sym_BANG,
  [462] = 2,
    ACTIONS(121), 3,
      aux_sym_type_token1,
      sym_identifier,
      anon_sym_return,
    ACTIONS(119), 6,
      anon_sym_COMMA,
      anon_sym_endfunction,
      anon_sym_endsubroutine,
      sym_comment,
      anon_sym_DASH,
      anon_sym_BANG,
  [476] = 2,
    ACTIONS(125), 3,
      aux_sym_type_token1,
      sym_identifier,
      anon_sym_return,
    ACTIONS(123), 6,
      anon_sym_COMMA,
      anon_sym_endfunction,
      anon_sym_endsubroutine,
      sym_comment,
      anon_sym_DASH,
      anon_sym_BANG,
  [490] = 6,
    ACTIONS(127), 1,
      sym_integer,
    ACTIONS(129), 1,
      sym_decimal,
    ACTIONS(133), 1,
      anon_sym_DQUOTE,
    STATE(91), 1,
      sym_value,
    STATE(88), 2,
      sym_boolean_literal,
      sym_string_literal,
    ACTIONS(131), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
  [512] = 3,
    ACTIONS(135), 1,
      anon_sym_COMMA,
    ACTIONS(137), 3,
      aux_sym_type_token1,
      sym_identifier,
      anon_sym_return,
    ACTIONS(139), 5,
      anon_sym_endfunction,
      anon_sym_endsubroutine,
      sym_comment,
      anon_sym_DASH,
      anon_sym_BANG,
  [528] = 2,
    ACTIONS(143), 3,
      aux_sym_type_token1,
      sym_identifier,
      anon_sym_return,
    ACTIONS(141), 6,
      anon_sym_COMMA,
      anon_sym_endfunction,
      anon_sym_endsubroutine,
      sym_comment,
      anon_sym_DASH,
      anon_sym_BANG,
  [542] = 5,
    ACTIONS(145), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_function_decl,
    STATE(137), 1,
      sym_visibility,
    STATE(29), 2,
      sym_function_implementation,
      aux_sym_function_implementations_repeat1,
    ACTIONS(113), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [561] = 5,
    ACTIONS(147), 1,
      sym_identifier,
    STATE(10), 1,
      sym_expression,
    STATE(41), 1,
      sym_lvalue_expression,
    ACTIONS(15), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(7), 3,
      sym_unary_expression,
      sym_binary_expression,
      sym_assignment_expression,
  [580] = 5,
    ACTIONS(149), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_function_decl,
    STATE(137), 1,
      sym_visibility,
    STATE(29), 2,
      sym_function_implementation,
      aux_sym_function_implementations_repeat1,
    ACTIONS(151), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [599] = 2,
    ACTIONS(154), 3,
      aux_sym_type_token1,
      sym_identifier,
      anon_sym_return,
    ACTIONS(156), 5,
      anon_sym_endfunction,
      anon_sym_endsubroutine,
      sym_comment,
      anon_sym_DASH,
      anon_sym_BANG,
  [612] = 2,
    ACTIONS(158), 3,
      aux_sym_type_token1,
      sym_identifier,
      anon_sym_return,
    ACTIONS(160), 5,
      anon_sym_endfunction,
      anon_sym_endsubroutine,
      sym_comment,
      anon_sym_DASH,
      anon_sym_BANG,
  [625] = 5,
    ACTIONS(147), 1,
      sym_identifier,
    STATE(13), 1,
      sym_expression,
    STATE(41), 1,
      sym_lvalue_expression,
    ACTIONS(15), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(7), 3,
      sym_unary_expression,
      sym_binary_expression,
      sym_assignment_expression,
  [644] = 5,
    ACTIONS(147), 1,
      sym_identifier,
    STATE(11), 1,
      sym_expression,
    STATE(41), 1,
      sym_lvalue_expression,
    ACTIONS(15), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(7), 3,
      sym_unary_expression,
      sym_binary_expression,
      sym_assignment_expression,
  [663] = 2,
    ACTIONS(162), 3,
      aux_sym_type_token1,
      sym_identifier,
      anon_sym_return,
    ACTIONS(164), 5,
      anon_sym_endfunction,
      anon_sym_endsubroutine,
      sym_comment,
      anon_sym_DASH,
      anon_sym_BANG,
  [676] = 5,
    ACTIONS(147), 1,
      sym_identifier,
    STATE(12), 1,
      sym_expression,
    STATE(41), 1,
      sym_lvalue_expression,
    ACTIONS(15), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(7), 3,
      sym_unary_expression,
      sym_binary_expression,
      sym_assignment_expression,
  [695] = 2,
    ACTIONS(91), 3,
      aux_sym_type_token1,
      sym_identifier,
      anon_sym_return,
    ACTIONS(93), 5,
      anon_sym_endfunction,
      anon_sym_endsubroutine,
      sym_comment,
      anon_sym_DASH,
      anon_sym_BANG,
  [708] = 6,
    ACTIONS(166), 1,
      anon_sym_endprototypes,
    ACTIONS(168), 1,
      anon_sym_LPAREN,
    ACTIONS(170), 1,
      sym_identifier,
    STATE(76), 1,
      aux_sym_function_prototype_repeat1,
    STATE(80), 1,
      sym_function_parameters,
    STATE(38), 2,
      sym_function_prototype,
      aux_sym_forward_prototypes_repeat1,
  [728] = 6,
    ACTIONS(168), 1,
      anon_sym_LPAREN,
    ACTIONS(170), 1,
      sym_identifier,
    ACTIONS(172), 1,
      anon_sym_endprototypes,
    STATE(76), 1,
      aux_sym_function_prototype_repeat1,
    STATE(80), 1,
      sym_function_parameters,
    STATE(39), 2,
      sym_function_prototype,
      aux_sym_forward_prototypes_repeat1,
  [748] = 6,
    ACTIONS(174), 1,
      anon_sym_endprototypes,
    ACTIONS(176), 1,
      anon_sym_LPAREN,
    ACTIONS(179), 1,
      sym_identifier,
    STATE(76), 1,
      aux_sym_function_prototype_repeat1,
    STATE(80), 1,
      sym_function_parameters,
    STATE(39), 2,
      sym_function_prototype,
      aux_sym_forward_prototypes_repeat1,
  [768] = 6,
    ACTIONS(182), 1,
      aux_sym_type_token1,
    ACTIONS(184), 1,
      anon_sym_RPAREN,
    ACTIONS(186), 1,
      anon_sym_ref,
    STATE(45), 1,
      aux_sym_function_parameters_repeat1,
    STATE(62), 1,
      sym_function_parameter,
    STATE(116), 1,
      sym_type,
  [787] = 1,
    ACTIONS(188), 6,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
  [796] = 6,
    ACTIONS(190), 1,
      aux_sym_type_token1,
    ACTIONS(193), 1,
      anon_sym_RPAREN,
    ACTIONS(195), 1,
      anon_sym_ref,
    STATE(42), 1,
      aux_sym_function_parameters_repeat1,
    STATE(62), 1,
      sym_function_parameter,
    STATE(116), 1,
      sym_type,
  [815] = 5,
    ACTIONS(198), 1,
      anon_sym_DQUOTE,
    ACTIONS(200), 1,
      aux_sym_string_literal_content_token1,
    ACTIONS(202), 1,
      aux_sym_string_literal_content_token2,
    ACTIONS(204), 1,
      sym_escape_sequence,
    STATE(44), 2,
      sym_string_literal_content,
      aux_sym_string_literal_repeat1,
  [832] = 5,
    ACTIONS(200), 1,
      aux_sym_string_literal_content_token1,
    ACTIONS(202), 1,
      aux_sym_string_literal_content_token2,
    ACTIONS(206), 1,
      anon_sym_DQUOTE,
    ACTIONS(208), 1,
      sym_escape_sequence,
    STATE(46), 2,
      sym_string_literal_content,
      aux_sym_string_literal_repeat1,
  [849] = 6,
    ACTIONS(182), 1,
      aux_sym_type_token1,
    ACTIONS(186), 1,
      anon_sym_ref,
    ACTIONS(210), 1,
      anon_sym_RPAREN,
    STATE(42), 1,
      aux_sym_function_parameters_repeat1,
    STATE(62), 1,
      sym_function_parameter,
    STATE(116), 1,
      sym_type,
  [868] = 5,
    ACTIONS(212), 1,
      anon_sym_DQUOTE,
    ACTIONS(214), 1,
      aux_sym_string_literal_content_token1,
    ACTIONS(217), 1,
      aux_sym_string_literal_content_token2,
    ACTIONS(220), 1,
      sym_escape_sequence,
    STATE(46), 2,
      sym_string_literal_content,
      aux_sym_string_literal_repeat1,
  [885] = 5,
    ACTIONS(200), 1,
      aux_sym_string_literal_content_token1,
    ACTIONS(202), 1,
      aux_sym_string_literal_content_token2,
    ACTIONS(223), 1,
      anon_sym_DQUOTE,
    ACTIONS(225), 1,
      sym_escape_sequence,
    STATE(50), 2,
      sym_string_literal_content,
      aux_sym_string_literal_repeat1,
  [902] = 5,
    ACTIONS(200), 1,
      aux_sym_string_literal_content_token1,
    ACTIONS(202), 1,
      aux_sym_string_literal_content_token2,
    ACTIONS(208), 1,
      sym_escape_sequence,
    ACTIONS(227), 1,
      anon_sym_DQUOTE,
    STATE(46), 2,
      sym_string_literal_content,
      aux_sym_string_literal_repeat1,
  [919] = 5,
    ACTIONS(200), 1,
      aux_sym_string_literal_content_token1,
    ACTIONS(202), 1,
      aux_sym_string_literal_content_token2,
    ACTIONS(229), 1,
      anon_sym_DQUOTE,
    ACTIONS(231), 1,
      sym_escape_sequence,
    STATE(48), 2,
      sym_string_literal_content,
      aux_sym_string_literal_repeat1,
  [936] = 5,
    ACTIONS(200), 1,
      aux_sym_string_literal_content_token1,
    ACTIONS(202), 1,
      aux_sym_string_literal_content_token2,
    ACTIONS(208), 1,
      sym_escape_sequence,
    ACTIONS(233), 1,
      anon_sym_DQUOTE,
    STATE(46), 2,
      sym_string_literal_content,
      aux_sym_string_literal_repeat1,
  [953] = 4,
    ACTIONS(5), 1,
      aux_sym_type_token1,
    ACTIONS(235), 1,
      anon_sym_endvariables,
    STATE(95), 1,
      sym_type,
    STATE(55), 2,
      sym_variable,
      aux_sym_class_properties_repeat1,
  [967] = 4,
    ACTIONS(5), 1,
      aux_sym_type_token1,
    ACTIONS(235), 1,
      anon_sym_endtype,
    STATE(90), 1,
      sym_type,
    STATE(53), 2,
      sym_variable,
      aux_sym_class_properties_repeat1,
  [981] = 4,
    ACTIONS(237), 1,
      anon_sym_endtype,
    ACTIONS(239), 1,
      aux_sym_type_token1,
    STATE(90), 1,
      sym_type,
    STATE(53), 2,
      sym_variable,
      aux_sym_class_properties_repeat1,
  [995] = 4,
    ACTIONS(242), 1,
      aux_sym_type_token1,
    STATE(95), 1,
      sym_type,
    STATE(125), 1,
      sym_class_properties,
    STATE(51), 2,
      sym_variable,
      aux_sym_class_properties_repeat1,
  [1009] = 4,
    ACTIONS(237), 1,
      anon_sym_endvariables,
    ACTIONS(239), 1,
      aux_sym_type_token1,
    STATE(95), 1,
      sym_type,
    STATE(55), 2,
      sym_variable,
      aux_sym_class_properties_repeat1,
  [1023] = 4,
    ACTIONS(242), 1,
      aux_sym_type_token1,
    STATE(90), 1,
      sym_type,
    STATE(141), 1,
      sym_class_properties,
    STATE(52), 2,
      sym_variable,
      aux_sym_class_properties_repeat1,
  [1037] = 3,
    ACTIONS(244), 1,
      anon_sym_endforward,
    ACTIONS(246), 1,
      anon_sym_type,
    STATE(70), 2,
      sym_forward_type,
      aux_sym_forward_types_repeat1,
  [1048] = 2,
    ACTIONS(250), 1,
      aux_sym_string_literal_content_token1,
    ACTIONS(248), 3,
      anon_sym_DQUOTE,
      aux_sym_string_literal_content_token2,
      sym_escape_sequence,
  [1057] = 2,
    ACTIONS(252), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(254), 2,
      aux_sym_type_token1,
      anon_sym_ref,
  [1066] = 4,
    ACTIONS(93), 1,
      anon_sym_endvariables,
    ACTIONS(256), 1,
      aux_sym_type_token1,
    STATE(60), 1,
      aux_sym_variable_repeat1,
    STATE(74), 1,
      sym_variable_name,
  [1079] = 2,
    ACTIONS(261), 1,
      sym_identifier,
    ACTIONS(259), 3,
      anon_sym_endprototypes,
      anon_sym_LPAREN,
      anon_sym_SEMI,
  [1088] = 3,
    ACTIONS(263), 1,
      anon_sym_COMMA,
    ACTIONS(267), 1,
      anon_sym_RPAREN,
    ACTIONS(265), 2,
      aux_sym_type_token1,
      anon_sym_ref,
  [1099] = 2,
    ACTIONS(269), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(271), 2,
      aux_sym_type_token1,
      anon_sym_ref,
  [1108] = 2,
    ACTIONS(275), 1,
      sym_identifier,
    ACTIONS(273), 3,
      anon_sym_endprototypes,
      anon_sym_LPAREN,
      anon_sym_SEMI,
  [1117] = 2,
    ACTIONS(74), 1,
      aux_sym_type_token1,
    ACTIONS(72), 3,
      anon_sym_endtype,
      anon_sym_EQ,
      anon_sym_COMMA,
  [1126] = 4,
    ACTIONS(80), 1,
      aux_sym_type_token1,
    ACTIONS(82), 1,
      anon_sym_endtype,
    ACTIONS(277), 1,
      anon_sym_EQ,
    ACTIONS(279), 1,
      anon_sym_COMMA,
  [1139] = 4,
    ACTIONS(84), 1,
      aux_sym_type_token1,
    ACTIONS(86), 1,
      anon_sym_endtype,
    STATE(66), 1,
      sym_variable_name,
    STATE(68), 1,
      aux_sym_variable_repeat1,
  [1152] = 4,
    ACTIONS(93), 1,
      anon_sym_endtype,
    ACTIONS(281), 1,
      aux_sym_type_token1,
    STATE(66), 1,
      sym_variable_name,
    STATE(68), 1,
      aux_sym_variable_repeat1,
  [1165] = 1,
    ACTIONS(284), 4,
      ts_builtin_sym_end,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [1172] = 3,
    ACTIONS(246), 1,
      anon_sym_type,
    ACTIONS(286), 1,
      anon_sym_endforward,
    STATE(77), 2,
      sym_forward_type,
      aux_sym_forward_types_repeat1,
  [1183] = 1,
    ACTIONS(288), 4,
      ts_builtin_sym_end,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [1190] = 2,
    ACTIONS(74), 1,
      aux_sym_type_token1,
    ACTIONS(72), 3,
      anon_sym_endvariables,
      anon_sym_EQ,
      anon_sym_COMMA,
  [1199] = 1,
    ACTIONS(290), 4,
      ts_builtin_sym_end,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [1206] = 4,
    ACTIONS(80), 1,
      aux_sym_type_token1,
    ACTIONS(82), 1,
      anon_sym_endvariables,
    ACTIONS(292), 1,
      anon_sym_EQ,
    ACTIONS(294), 1,
      anon_sym_COMMA,
  [1219] = 4,
    ACTIONS(84), 1,
      aux_sym_type_token1,
    ACTIONS(86), 1,
      anon_sym_endvariables,
    STATE(60), 1,
      aux_sym_variable_repeat1,
    STATE(74), 1,
      sym_variable_name,
  [1232] = 4,
    ACTIONS(168), 1,
      anon_sym_LPAREN,
    ACTIONS(296), 1,
      sym_identifier,
    STATE(81), 1,
      sym_function_parameters,
    STATE(82), 1,
      aux_sym_function_prototype_repeat1,
  [1245] = 3,
    ACTIONS(298), 1,
      anon_sym_endforward,
    ACTIONS(300), 1,
      anon_sym_type,
    STATE(77), 2,
      sym_forward_type,
      aux_sym_forward_types_repeat1,
  [1256] = 1,
    ACTIONS(303), 4,
      ts_builtin_sym_end,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [1263] = 2,
    ACTIONS(250), 1,
      aux_sym_string_literal_content_token1,
    ACTIONS(248), 3,
      anon_sym_DQUOTE,
      aux_sym_string_literal_content_token2,
      sym_escape_sequence,
  [1272] = 2,
    ACTIONS(307), 1,
      sym_identifier,
    ACTIONS(305), 2,
      anon_sym_endprototypes,
      anon_sym_LPAREN,
  [1280] = 2,
    ACTIONS(311), 1,
      sym_identifier,
    ACTIONS(309), 2,
      anon_sym_endprototypes,
      anon_sym_LPAREN,
  [1288] = 3,
    ACTIONS(313), 1,
      anon_sym_LPAREN,
    ACTIONS(315), 1,
      sym_identifier,
    STATE(82), 1,
      aux_sym_function_prototype_repeat1,
  [1298] = 2,
    ACTIONS(121), 1,
      aux_sym_type_token1,
    ACTIONS(119), 2,
      anon_sym_endvariables,
      anon_sym_COMMA,
  [1306] = 2,
    ACTIONS(117), 1,
      aux_sym_type_token1,
    ACTIONS(115), 2,
      anon_sym_endvariables,
      anon_sym_COMMA,
  [1314] = 2,
    ACTIONS(125), 1,
      aux_sym_type_token1,
    ACTIONS(123), 2,
      anon_sym_endvariables,
      anon_sym_COMMA,
  [1322] = 3,
    ACTIONS(137), 1,
      aux_sym_type_token1,
    ACTIONS(139), 1,
      anon_sym_endvariables,
    ACTIONS(318), 1,
      anon_sym_COMMA,
  [1332] = 2,
    STATE(71), 1,
      sym__end_of_function,
    ACTIONS(320), 2,
      anon_sym_endfunction,
      anon_sym_endsubroutine,
  [1340] = 2,
    ACTIONS(125), 1,
      aux_sym_type_token1,
    ACTIONS(123), 2,
      anon_sym_endtype,
      anon_sym_COMMA,
  [1348] = 2,
    ACTIONS(117), 1,
      aux_sym_type_token1,
    ACTIONS(115), 2,
      anon_sym_endtype,
      anon_sym_COMMA,
  [1356] = 3,
    ACTIONS(322), 1,
      aux_sym_type_token1,
    STATE(66), 1,
      sym_variable_name,
    STATE(67), 1,
      aux_sym_variable_repeat1,
  [1366] = 3,
    ACTIONS(137), 1,
      aux_sym_type_token1,
    ACTIONS(139), 1,
      anon_sym_endtype,
    ACTIONS(324), 1,
      anon_sym_COMMA,
  [1376] = 2,
    ACTIONS(143), 1,
      aux_sym_type_token1,
    ACTIONS(141), 2,
      anon_sym_endtype,
      anon_sym_COMMA,
  [1384] = 2,
    ACTIONS(121), 1,
      aux_sym_type_token1,
    ACTIONS(119), 2,
      anon_sym_endtype,
      anon_sym_COMMA,
  [1392] = 3,
    ACTIONS(326), 1,
      aux_sym_type_token1,
    STATE(15), 1,
      sym_variable_name,
    STATE(16), 1,
      aux_sym_variable_repeat1,
  [1402] = 3,
    ACTIONS(328), 1,
      aux_sym_type_token1,
    STATE(74), 1,
      sym_variable_name,
    STATE(75), 1,
      aux_sym_variable_repeat1,
  [1412] = 2,
    ACTIONS(193), 1,
      anon_sym_RPAREN,
    ACTIONS(330), 2,
      aux_sym_type_token1,
      anon_sym_ref,
  [1420] = 2,
    ACTIONS(143), 1,
      aux_sym_type_token1,
    ACTIONS(141), 2,
      anon_sym_endvariables,
      anon_sym_COMMA,
  [1428] = 1,
    ACTIONS(332), 2,
      anon_sym_endfunction,
      anon_sym_endsubroutine,
  [1433] = 2,
    ACTIONS(334), 1,
      sym_identifier,
    STATE(102), 1,
      sym_function_name,
  [1440] = 2,
    ACTIONS(162), 1,
      aux_sym_type_token1,
    ACTIONS(164), 1,
      anon_sym_endvariables,
  [1447] = 2,
    ACTIONS(336), 1,
      sym_identifier,
    STATE(104), 1,
      sym_class_type,
  [1454] = 2,
    ACTIONS(168), 1,
      anon_sym_LPAREN,
    STATE(138), 1,
      sym_function_parameters,
  [1461] = 1,
    ACTIONS(338), 2,
      anon_sym_endforward,
      anon_sym_type,
  [1466] = 2,
    ACTIONS(340), 1,
      anon_sym_forward,
    STATE(106), 1,
      sym_forward_types,
  [1473] = 2,
    ACTIONS(342), 1,
      anon_sym_globaltype,
    STATE(57), 1,
      sym_class_inherit_from,
  [1480] = 2,
    ACTIONS(344), 1,
      anon_sym_globaltype,
    STATE(109), 1,
      sym_global_class_properties,
  [1487] = 2,
    ACTIONS(346), 1,
      sym_identifier,
    STATE(121), 1,
      sym_class_name,
  [1494] = 2,
    ACTIONS(91), 1,
      aux_sym_type_token1,
    ACTIONS(93), 1,
      anon_sym_endtype,
  [1501] = 2,
    ACTIONS(348), 1,
      anon_sym_typevariables,
    STATE(112), 1,
      sym_class_variables,
  [1508] = 2,
    ACTIONS(350), 1,
      aux_sym_type_token1,
    STATE(99), 1,
      sym_type,
  [1515] = 2,
    ACTIONS(162), 1,
      aux_sym_type_token1,
    ACTIONS(164), 1,
      anon_sym_endtype,
  [1522] = 2,
    ACTIONS(352), 1,
      anon_sym_forwardprototypes,
    STATE(20), 1,
      sym_forward_prototypes,
  [1529] = 1,
    ACTIONS(354), 2,
      anon_sym_endforward,
      anon_sym_type,
  [1534] = 2,
    ACTIONS(91), 1,
      aux_sym_type_token1,
    ACTIONS(93), 1,
      anon_sym_endvariables,
  [1541] = 2,
    ACTIONS(350), 1,
      aux_sym_type_token1,
    STATE(134), 1,
      sym_type,
  [1548] = 1,
    ACTIONS(356), 1,
      sym_identifier,
  [1552] = 1,
    ACTIONS(358), 1,
      anon_sym_forward,
  [1556] = 1,
    ACTIONS(360), 1,
      anon_sym_forwardprototypes,
  [1560] = 1,
    ACTIONS(362), 1,
      sym_identifier,
  [1564] = 1,
    ACTIONS(364), 1,
      anon_sym_LPAREN,
  [1568] = 1,
    ACTIONS(366), 1,
      anon_sym_DOT,
  [1572] = 1,
    ACTIONS(368), 1,
      sym_identifier,
  [1576] = 1,
    ACTIONS(370), 1,
      aux_sym_type_token1,
  [1580] = 1,
    ACTIONS(372), 1,
      anon_sym_from,
  [1584] = 1,
    ACTIONS(374), 1,
      anon_sym_endvariables,
  [1588] = 1,
    ACTIONS(376), 1,
      anon_sym_globaltype,
  [1592] = 1,
    ACTIONS(378), 1,
      sym_identifier,
  [1596] = 1,
    ACTIONS(380), 1,
      sym_identifier,
  [1600] = 1,
    ACTIONS(382), 1,
      anon_sym_typevariables,
  [1604] = 1,
    ACTIONS(384), 1,
      sym_identifier,
  [1608] = 1,
    ACTIONS(386), 1,
      ts_builtin_sym_end,
  [1612] = 1,
    ACTIONS(388), 1,
      anon_sym_from,
  [1616] = 1,
    ACTIONS(390), 1,
      anon_sym_function,
  [1620] = 1,
    ACTIONS(392), 1,
      sym_identifier,
  [1624] = 1,
    ACTIONS(394), 1,
      ts_builtin_sym_end,
  [1628] = 1,
    ACTIONS(396), 1,
      anon_sym_DOT,
  [1632] = 1,
    ACTIONS(398), 1,
      anon_sym_function,
  [1636] = 1,
    ACTIONS(400), 1,
      anon_sym_SEMI,
  [1640] = 1,
    ACTIONS(402), 1,
      anon_sym_endtype,
  [1644] = 1,
    ACTIONS(404), 1,
      anon_sym_within,
  [1648] = 1,
    ACTIONS(406), 1,
      anon_sym_endtype,
  [1652] = 1,
    ACTIONS(408), 1,
      sym_identifier,
  [1656] = 1,
    ACTIONS(370), 1,
      sym_identifier,
  [1660] = 1,
    ACTIONS(410), 1,
      anon_sym_from,
  [1664] = 1,
    ACTIONS(412), 1,
      anon_sym_globaltype,
  [1668] = 1,
    ACTIONS(414), 1,
      sym_identifier,
  [1672] = 1,
    ACTIONS(416), 1,
      anon_sym_endtype,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 52,
  [SMALL_STATE(4)] = 95,
  [SMALL_STATE(5)] = 138,
  [SMALL_STATE(6)] = 161,
  [SMALL_STATE(7)] = 189,
  [SMALL_STATE(8)] = 204,
  [SMALL_STATE(9)] = 223,
  [SMALL_STATE(10)] = 242,
  [SMALL_STATE(11)] = 257,
  [SMALL_STATE(12)] = 272,
  [SMALL_STATE(13)] = 289,
  [SMALL_STATE(14)] = 308,
  [SMALL_STATE(15)] = 323,
  [SMALL_STATE(16)] = 342,
  [SMALL_STATE(17)] = 361,
  [SMALL_STATE(18)] = 382,
  [SMALL_STATE(19)] = 404,
  [SMALL_STATE(20)] = 426,
  [SMALL_STATE(21)] = 448,
  [SMALL_STATE(22)] = 462,
  [SMALL_STATE(23)] = 476,
  [SMALL_STATE(24)] = 490,
  [SMALL_STATE(25)] = 512,
  [SMALL_STATE(26)] = 528,
  [SMALL_STATE(27)] = 542,
  [SMALL_STATE(28)] = 561,
  [SMALL_STATE(29)] = 580,
  [SMALL_STATE(30)] = 599,
  [SMALL_STATE(31)] = 612,
  [SMALL_STATE(32)] = 625,
  [SMALL_STATE(33)] = 644,
  [SMALL_STATE(34)] = 663,
  [SMALL_STATE(35)] = 676,
  [SMALL_STATE(36)] = 695,
  [SMALL_STATE(37)] = 708,
  [SMALL_STATE(38)] = 728,
  [SMALL_STATE(39)] = 748,
  [SMALL_STATE(40)] = 768,
  [SMALL_STATE(41)] = 787,
  [SMALL_STATE(42)] = 796,
  [SMALL_STATE(43)] = 815,
  [SMALL_STATE(44)] = 832,
  [SMALL_STATE(45)] = 849,
  [SMALL_STATE(46)] = 868,
  [SMALL_STATE(47)] = 885,
  [SMALL_STATE(48)] = 902,
  [SMALL_STATE(49)] = 919,
  [SMALL_STATE(50)] = 936,
  [SMALL_STATE(51)] = 953,
  [SMALL_STATE(52)] = 967,
  [SMALL_STATE(53)] = 981,
  [SMALL_STATE(54)] = 995,
  [SMALL_STATE(55)] = 1009,
  [SMALL_STATE(56)] = 1023,
  [SMALL_STATE(57)] = 1037,
  [SMALL_STATE(58)] = 1048,
  [SMALL_STATE(59)] = 1057,
  [SMALL_STATE(60)] = 1066,
  [SMALL_STATE(61)] = 1079,
  [SMALL_STATE(62)] = 1088,
  [SMALL_STATE(63)] = 1099,
  [SMALL_STATE(64)] = 1108,
  [SMALL_STATE(65)] = 1117,
  [SMALL_STATE(66)] = 1126,
  [SMALL_STATE(67)] = 1139,
  [SMALL_STATE(68)] = 1152,
  [SMALL_STATE(69)] = 1165,
  [SMALL_STATE(70)] = 1172,
  [SMALL_STATE(71)] = 1183,
  [SMALL_STATE(72)] = 1190,
  [SMALL_STATE(73)] = 1199,
  [SMALL_STATE(74)] = 1206,
  [SMALL_STATE(75)] = 1219,
  [SMALL_STATE(76)] = 1232,
  [SMALL_STATE(77)] = 1245,
  [SMALL_STATE(78)] = 1256,
  [SMALL_STATE(79)] = 1263,
  [SMALL_STATE(80)] = 1272,
  [SMALL_STATE(81)] = 1280,
  [SMALL_STATE(82)] = 1288,
  [SMALL_STATE(83)] = 1298,
  [SMALL_STATE(84)] = 1306,
  [SMALL_STATE(85)] = 1314,
  [SMALL_STATE(86)] = 1322,
  [SMALL_STATE(87)] = 1332,
  [SMALL_STATE(88)] = 1340,
  [SMALL_STATE(89)] = 1348,
  [SMALL_STATE(90)] = 1356,
  [SMALL_STATE(91)] = 1366,
  [SMALL_STATE(92)] = 1376,
  [SMALL_STATE(93)] = 1384,
  [SMALL_STATE(94)] = 1392,
  [SMALL_STATE(95)] = 1402,
  [SMALL_STATE(96)] = 1412,
  [SMALL_STATE(97)] = 1420,
  [SMALL_STATE(98)] = 1428,
  [SMALL_STATE(99)] = 1433,
  [SMALL_STATE(100)] = 1440,
  [SMALL_STATE(101)] = 1447,
  [SMALL_STATE(102)] = 1454,
  [SMALL_STATE(103)] = 1461,
  [SMALL_STATE(104)] = 1466,
  [SMALL_STATE(105)] = 1473,
  [SMALL_STATE(106)] = 1480,
  [SMALL_STATE(107)] = 1487,
  [SMALL_STATE(108)] = 1494,
  [SMALL_STATE(109)] = 1501,
  [SMALL_STATE(110)] = 1508,
  [SMALL_STATE(111)] = 1515,
  [SMALL_STATE(112)] = 1522,
  [SMALL_STATE(113)] = 1529,
  [SMALL_STATE(114)] = 1534,
  [SMALL_STATE(115)] = 1541,
  [SMALL_STATE(116)] = 1548,
  [SMALL_STATE(117)] = 1552,
  [SMALL_STATE(118)] = 1556,
  [SMALL_STATE(119)] = 1560,
  [SMALL_STATE(120)] = 1564,
  [SMALL_STATE(121)] = 1568,
  [SMALL_STATE(122)] = 1572,
  [SMALL_STATE(123)] = 1576,
  [SMALL_STATE(124)] = 1580,
  [SMALL_STATE(125)] = 1584,
  [SMALL_STATE(126)] = 1588,
  [SMALL_STATE(127)] = 1592,
  [SMALL_STATE(128)] = 1596,
  [SMALL_STATE(129)] = 1600,
  [SMALL_STATE(130)] = 1604,
  [SMALL_STATE(131)] = 1608,
  [SMALL_STATE(132)] = 1612,
  [SMALL_STATE(133)] = 1616,
  [SMALL_STATE(134)] = 1620,
  [SMALL_STATE(135)] = 1624,
  [SMALL_STATE(136)] = 1628,
  [SMALL_STATE(137)] = 1632,
  [SMALL_STATE(138)] = 1636,
  [SMALL_STATE(139)] = 1640,
  [SMALL_STATE(140)] = 1644,
  [SMALL_STATE(141)] = 1648,
  [SMALL_STATE(142)] = 1652,
  [SMALL_STATE(143)] = 1656,
  [SMALL_STATE(144)] = 1660,
  [SMALL_STATE(145)] = 1664,
  [SMALL_STATE(146)] = 1668,
  [SMALL_STATE(147)] = 1672,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 1, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_block_repeat1, 2, 0, 0), SHIFT_REPEAT(123),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_block_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_block_repeat1, 2, 0, 0),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_block_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_block_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_block_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lvalue_expression, 1, 0, 0),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 1, 0, 0),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 1, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_code_block_repeat1, 1, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_block_repeat1, 1, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_expression, 3, 0, 1),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_expression, 3, 0, 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_name, 1, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_name, 1, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_repeat1, 1, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_repeat1, 1, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 2, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 2, 0, 0),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_repeat1, 2, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_repeat1, 2, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 8, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_repeat1, 3, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_repeat1, 3, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_implementations, 1, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_implementations_repeat1, 2, 0, 0),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_implementations_repeat1, 2, 0, 0), SHIFT_REPEAT(133),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_decl, 6, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_decl, 6, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_declaration, 1, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_declaration, 1, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_repeat1, 4, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_repeat1, 4, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_forward_prototypes_repeat1, 2, 0, 0),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_forward_prototypes_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [179] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_forward_prototypes_repeat1, 2, 0, 0), SHIFT_REPEAT(76),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [190] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(143),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_parameters_repeat1, 2, 0, 0),
  [195] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(115),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0), SHIFT_REPEAT(79),
  [217] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0), SHIFT_REPEAT(58),
  [220] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_properties, 1, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_properties_repeat1, 2, 0, 0),
  [239] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_properties_repeat1, 2, 0, 0), SHIFT_REPEAT(123),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal_content, 1, 0, 0),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal_content, 1, 0, 0),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameter, 3, 0, 0),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_parameter, 3, 0, 0),
  [256] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_repeat1, 2, 0, 0), SHIFT_REPEAT(72),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameters, 2, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_parameters, 2, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_parameters_repeat1, 1, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_parameters_repeat1, 1, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameter, 2, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_parameter, 2, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameters, 3, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_parameters, 3, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [281] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_repeat1, 2, 0, 0), SHIFT_REPEAT(65),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_forward_prototypes, 3, 0, 0),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_implementation, 3, 0, 0),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_implementation, 2, 0, 0),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_forward_types_repeat1, 2, 0, 0),
  [300] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_forward_types_repeat1, 2, 0, 0), SHIFT_REPEAT(130),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_forward_prototypes, 2, 0, 0),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_prototype, 1, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_prototype, 1, 0, 0),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_prototype, 2, 0, 0),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_prototype, 2, 0, 0),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_prototype_repeat1, 2, 0, 0),
  [315] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_prototype_repeat1, 2, 0, 0), SHIFT_REPEAT(82),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_parameters_repeat1, 2, 0, 0),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_body, 1, 0, 0),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_forward_type, 7, 0, 0),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_inherit_from, 5, 0, 0),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_type, 1, 0, 0),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_variables, 3, 0, 0),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_name, 1, 0, 0),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_forward_types, 3, 0, 0),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_class_properties, 6, 0, 0),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [386] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_visibility, 1, 0, 0),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 9, 0, 0),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name, 1, 0, 0),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_forward_types, 4, 0, 0),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
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
