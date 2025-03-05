#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 326
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 107
#define ALIAS_COUNT 0
#define TOKEN_COUNT 48
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 14

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
  anon_sym_function = 17,
  anon_sym_subroutine = 18,
  anon_sym_LPAREN = 19,
  anon_sym_RPAREN = 20,
  anon_sym_ref = 21,
  sym_integer = 22,
  sym_decimal = 23,
  anon_sym_true = 24,
  anon_sym_false = 25,
  anon_sym_null = 26,
  anon_sym_DQUOTE = 27,
  aux_sym_string_literal_content_token1 = 28,
  aux_sym_string_literal_content_token2 = 29,
  sym_escape_sequence = 30,
  sym_end_of_event = 31,
  anon_sym_event = 32,
  anon_sym_SEMI = 33,
  anon_sym_endfunction = 34,
  anon_sym_endsubroutine = 35,
  anon_sym_public = 36,
  anon_sym_private = 37,
  anon_sym_protected = 38,
  sym_comment = 39,
  anon_sym_return = 40,
  anon_sym_STAR = 41,
  anon_sym_PLUS = 42,
  sym_newline = 43,
  anon_sym_IF = 44,
  anon_sym_THEN = 45,
  anon_sym_ENDIF = 46,
  sym_identifier = 47,
  sym_source_file = 48,
  sym_class_name = 49,
  sym_class_type = 50,
  sym_forward_types = 51,
  sym_class_inherit_from = 52,
  sym_forward_type = 53,
  sym_global_class_properties = 54,
  sym_dummy_keyword = 55,
  sym_global_class_dummy = 56,
  sym_class_variables = 57,
  sym_forward_prototypes = 58,
  sym_class_properties = 59,
  sym_class_variable = 60,
  sym_variable = 61,
  sym_type = 62,
  sym_local_variable = 63,
  sym_function_prototype = 64,
  sym_function_parameters = 65,
  sym_function_parameter = 66,
  sym_value = 67,
  sym_boolean_literal = 68,
  sym_string_literal = 69,
  sym_string_literal_content = 70,
  sym_event_name = 71,
  sym_event_body = 72,
  sym_event_parameters = 73,
  sym_event_prototype = 74,
  sym_event_implementations = 75,
  sym_event_implementation = 76,
  sym_function_implementations = 77,
  sym_function_implementation = 78,
  sym_function_name = 79,
  sym_function_body = 80,
  sym_end_of_function = 81,
  sym_visibility = 82,
  sym_code_block = 83,
  sym_return_statement = 84,
  sym_local_declaration = 85,
  sym_binary_expression = 86,
  sym_assignment = 87,
  sym_object_name = 88,
  sym_object_method_call = 89,
  sym_if_statment = 90,
  sym_pb_constructions = 91,
  sym_expression = 92,
  sym_parenthesized_expression = 93,
  sym_function_call = 94,
  sym_function_call_parameters = 95,
  aux_sym_forward_types_repeat1 = 96,
  aux_sym_forward_prototypes_repeat1 = 97,
  aux_sym_class_properties_repeat1 = 98,
  aux_sym_class_variable_repeat1 = 99,
  aux_sym_variable_repeat1 = 100,
  aux_sym_function_parameters_repeat1 = 101,
  aux_sym_string_literal_repeat1 = 102,
  aux_sym_event_implementations_repeat1 = 103,
  aux_sym_function_implementations_repeat1 = 104,
  aux_sym_code_block_repeat1 = 105,
  aux_sym_function_call_parameters_repeat1 = 106,
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
  [anon_sym_function] = "function",
  [anon_sym_subroutine] = "subroutine",
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
  [sym_end_of_event] = "end_of_event",
  [anon_sym_event] = "event",
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
  [anon_sym_IF] = "IF",
  [anon_sym_THEN] = "THEN",
  [anon_sym_ENDIF] = "END IF",
  [sym_identifier] = "identifier",
  [sym_source_file] = "source_file",
  [sym_class_name] = "class_name",
  [sym_class_type] = "class_type",
  [sym_forward_types] = "forward_types",
  [sym_class_inherit_from] = "class_inherit_from",
  [sym_forward_type] = "forward_type",
  [sym_global_class_properties] = "global_class_properties",
  [sym_dummy_keyword] = "dummy_keyword",
  [sym_global_class_dummy] = "global_class_dummy",
  [sym_class_variables] = "class_variables",
  [sym_forward_prototypes] = "forward_prototypes",
  [sym_class_properties] = "class_properties",
  [sym_class_variable] = "class_variable",
  [sym_variable] = "variable",
  [sym_type] = "type",
  [sym_local_variable] = "local_variable",
  [sym_function_prototype] = "function_prototype",
  [sym_function_parameters] = "function_parameters",
  [sym_function_parameter] = "function_parameter",
  [sym_value] = "value",
  [sym_boolean_literal] = "boolean_literal",
  [sym_string_literal] = "string_literal",
  [sym_string_literal_content] = "string_literal_content",
  [sym_event_name] = "event_name",
  [sym_event_body] = "event_body",
  [sym_event_parameters] = "event_parameters",
  [sym_event_prototype] = "event_prototype",
  [sym_event_implementations] = "event_implementations",
  [sym_event_implementation] = "event_implementation",
  [sym_function_implementations] = "function_implementations",
  [sym_function_implementation] = "function_implementation",
  [sym_function_name] = "function_name",
  [sym_function_body] = "function_body",
  [sym_end_of_function] = "end_of_function",
  [sym_visibility] = "visibility",
  [sym_code_block] = "code_block",
  [sym_return_statement] = "return_statement",
  [sym_local_declaration] = "local_declaration",
  [sym_binary_expression] = "binary_expression",
  [sym_assignment] = "assignment",
  [sym_object_name] = "object_name",
  [sym_object_method_call] = "object_method_call",
  [sym_if_statment] = "if_statment",
  [sym_pb_constructions] = "pb_constructions",
  [sym_expression] = "expression",
  [sym_parenthesized_expression] = "parenthesized_expression",
  [sym_function_call] = "function_call",
  [sym_function_call_parameters] = "function_call_parameters",
  [aux_sym_forward_types_repeat1] = "forward_types_repeat1",
  [aux_sym_forward_prototypes_repeat1] = "forward_prototypes_repeat1",
  [aux_sym_class_properties_repeat1] = "class_properties_repeat1",
  [aux_sym_class_variable_repeat1] = "class_variable_repeat1",
  [aux_sym_variable_repeat1] = "variable_repeat1",
  [aux_sym_function_parameters_repeat1] = "function_parameters_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
  [aux_sym_event_implementations_repeat1] = "event_implementations_repeat1",
  [aux_sym_function_implementations_repeat1] = "function_implementations_repeat1",
  [aux_sym_code_block_repeat1] = "code_block_repeat1",
  [aux_sym_function_call_parameters_repeat1] = "function_call_parameters_repeat1",
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
  [anon_sym_function] = anon_sym_function,
  [anon_sym_subroutine] = anon_sym_subroutine,
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
  [sym_end_of_event] = sym_end_of_event,
  [anon_sym_event] = anon_sym_event,
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
  [anon_sym_IF] = anon_sym_IF,
  [anon_sym_THEN] = anon_sym_THEN,
  [anon_sym_ENDIF] = anon_sym_ENDIF,
  [sym_identifier] = sym_identifier,
  [sym_source_file] = sym_source_file,
  [sym_class_name] = sym_class_name,
  [sym_class_type] = sym_class_type,
  [sym_forward_types] = sym_forward_types,
  [sym_class_inherit_from] = sym_class_inherit_from,
  [sym_forward_type] = sym_forward_type,
  [sym_global_class_properties] = sym_global_class_properties,
  [sym_dummy_keyword] = sym_dummy_keyword,
  [sym_global_class_dummy] = sym_global_class_dummy,
  [sym_class_variables] = sym_class_variables,
  [sym_forward_prototypes] = sym_forward_prototypes,
  [sym_class_properties] = sym_class_properties,
  [sym_class_variable] = sym_class_variable,
  [sym_variable] = sym_variable,
  [sym_type] = sym_type,
  [sym_local_variable] = sym_local_variable,
  [sym_function_prototype] = sym_function_prototype,
  [sym_function_parameters] = sym_function_parameters,
  [sym_function_parameter] = sym_function_parameter,
  [sym_value] = sym_value,
  [sym_boolean_literal] = sym_boolean_literal,
  [sym_string_literal] = sym_string_literal,
  [sym_string_literal_content] = sym_string_literal_content,
  [sym_event_name] = sym_event_name,
  [sym_event_body] = sym_event_body,
  [sym_event_parameters] = sym_event_parameters,
  [sym_event_prototype] = sym_event_prototype,
  [sym_event_implementations] = sym_event_implementations,
  [sym_event_implementation] = sym_event_implementation,
  [sym_function_implementations] = sym_function_implementations,
  [sym_function_implementation] = sym_function_implementation,
  [sym_function_name] = sym_function_name,
  [sym_function_body] = sym_function_body,
  [sym_end_of_function] = sym_end_of_function,
  [sym_visibility] = sym_visibility,
  [sym_code_block] = sym_code_block,
  [sym_return_statement] = sym_return_statement,
  [sym_local_declaration] = sym_local_declaration,
  [sym_binary_expression] = sym_binary_expression,
  [sym_assignment] = sym_assignment,
  [sym_object_name] = sym_object_name,
  [sym_object_method_call] = sym_object_method_call,
  [sym_if_statment] = sym_if_statment,
  [sym_pb_constructions] = sym_pb_constructions,
  [sym_expression] = sym_expression,
  [sym_parenthesized_expression] = sym_parenthesized_expression,
  [sym_function_call] = sym_function_call,
  [sym_function_call_parameters] = sym_function_call_parameters,
  [aux_sym_forward_types_repeat1] = aux_sym_forward_types_repeat1,
  [aux_sym_forward_prototypes_repeat1] = aux_sym_forward_prototypes_repeat1,
  [aux_sym_class_properties_repeat1] = aux_sym_class_properties_repeat1,
  [aux_sym_class_variable_repeat1] = aux_sym_class_variable_repeat1,
  [aux_sym_variable_repeat1] = aux_sym_variable_repeat1,
  [aux_sym_function_parameters_repeat1] = aux_sym_function_parameters_repeat1,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
  [aux_sym_event_implementations_repeat1] = aux_sym_event_implementations_repeat1,
  [aux_sym_function_implementations_repeat1] = aux_sym_function_implementations_repeat1,
  [aux_sym_code_block_repeat1] = aux_sym_code_block_repeat1,
  [aux_sym_function_call_parameters_repeat1] = aux_sym_function_call_parameters_repeat1,
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
  [anon_sym_function] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_subroutine] = {
    .visible = true,
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
  [sym_end_of_event] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_event] = {
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
  [anon_sym_IF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_THEN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ENDIF] = {
    .visible = true,
    .named = false,
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
  [sym_dummy_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_global_class_dummy] = {
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
  [sym_local_variable] = {
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
  [sym_event_name] = {
    .visible = true,
    .named = true,
  },
  [sym_event_body] = {
    .visible = true,
    .named = true,
  },
  [sym_event_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_event_prototype] = {
    .visible = true,
    .named = true,
  },
  [sym_event_implementations] = {
    .visible = true,
    .named = true,
  },
  [sym_event_implementation] = {
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
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_object_name] = {
    .visible = true,
    .named = true,
  },
  [sym_object_method_call] = {
    .visible = true,
    .named = true,
  },
  [sym_if_statment] = {
    .visible = true,
    .named = true,
  },
  [sym_pb_constructions] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call_parameters] = {
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
  [aux_sym_function_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_event_implementations_repeat1] = {
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
  [aux_sym_function_call_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_InstanceControlName = 1,
  field_classname = 2,
  field_comma = 3,
  field_dummy = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_InstanceControlName] = "InstanceControlName",
  [field_classname] = "classname",
  [field_comma] = "comma",
  [field_dummy] = "dummy",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 2},
  [6] = {.index = 6, .length = 2},
  [7] = {.index = 8, .length = 1},
  [8] = {.index = 9, .length = 1},
  [9] = {.index = 10, .length = 3},
  [10] = {.index = 13, .length = 1},
  [11] = {.index = 14, .length = 1},
  [12] = {.index = 15, .length = 4},
  [13] = {.index = 19, .length = 5},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_classname, 0},
  [1] =
    {field_comma, 2, .inherited = true},
  [2] =
    {field_dummy, 0},
  [3] =
    {field_comma, 3, .inherited = true},
  [4] =
    {field_comma, 0},
    {field_comma, 1},
  [6] =
    {field_comma, 0, .inherited = true},
    {field_comma, 1, .inherited = true},
  [8] =
    {field_comma, 1, .inherited = true},
  [9] =
    {field_comma, 4, .inherited = true},
  [10] =
    {field_comma, 0},
    {field_comma, 1},
    {field_comma, 2},
  [13] =
    {field_InstanceControlName, 1},
  [14] =
    {field_comma, 5, .inherited = true},
  [15] =
    {field_comma, 0},
    {field_comma, 1},
    {field_comma, 2},
    {field_comma, 3},
  [19] =
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
  [8] = 6,
  [9] = 6,
  [10] = 10,
  [11] = 11,
  [12] = 11,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 15,
  [22] = 15,
  [23] = 15,
  [24] = 13,
  [25] = 13,
  [26] = 11,
  [27] = 20,
  [28] = 19,
  [29] = 20,
  [30] = 30,
  [31] = 19,
  [32] = 30,
  [33] = 30,
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
  [52] = 49,
  [53] = 51,
  [54] = 54,
  [55] = 55,
  [56] = 50,
  [57] = 54,
  [58] = 42,
  [59] = 46,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 36,
  [67] = 67,
  [68] = 40,
  [69] = 41,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 43,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 77,
  [79] = 79,
  [80] = 42,
  [81] = 70,
  [82] = 82,
  [83] = 46,
  [84] = 70,
  [85] = 82,
  [86] = 70,
  [87] = 82,
  [88] = 70,
  [89] = 82,
  [90] = 90,
  [91] = 45,
  [92] = 36,
  [93] = 93,
  [94] = 82,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 93,
  [99] = 72,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 79,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 65,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 71,
  [118] = 103,
  [119] = 109,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 122,
  [124] = 124,
  [125] = 121,
  [126] = 76,
  [127] = 93,
  [128] = 72,
  [129] = 129,
  [130] = 79,
  [131] = 65,
  [132] = 71,
  [133] = 133,
  [134] = 42,
  [135] = 46,
  [136] = 136,
  [137] = 101,
  [138] = 76,
  [139] = 101,
  [140] = 140,
  [141] = 101,
  [142] = 101,
  [143] = 101,
  [144] = 112,
  [145] = 145,
  [146] = 41,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 37,
  [151] = 151,
  [152] = 152,
  [153] = 45,
  [154] = 148,
  [155] = 151,
  [156] = 156,
  [157] = 157,
  [158] = 43,
  [159] = 38,
  [160] = 39,
  [161] = 161,
  [162] = 109,
  [163] = 163,
  [164] = 38,
  [165] = 40,
  [166] = 39,
  [167] = 167,
  [168] = 149,
  [169] = 42,
  [170] = 46,
  [171] = 171,
  [172] = 37,
  [173] = 109,
  [174] = 174,
  [175] = 152,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 157,
  [184] = 161,
  [185] = 185,
  [186] = 185,
  [187] = 145,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 195,
  [198] = 40,
  [199] = 41,
  [200] = 200,
  [201] = 201,
  [202] = 45,
  [203] = 203,
  [204] = 43,
  [205] = 205,
  [206] = 42,
  [207] = 46,
  [208] = 40,
  [209] = 41,
  [210] = 45,
  [211] = 43,
  [212] = 212,
  [213] = 213,
  [214] = 200,
  [215] = 215,
  [216] = 190,
  [217] = 191,
  [218] = 218,
  [219] = 200,
  [220] = 190,
  [221] = 191,
  [222] = 196,
  [223] = 203,
  [224] = 203,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 228,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 242,
  [259] = 259,
  [260] = 242,
  [261] = 242,
  [262] = 242,
  [263] = 242,
  [264] = 264,
  [265] = 238,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 270,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 277,
  [284] = 273,
  [285] = 282,
  [286] = 286,
  [287] = 277,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 282,
  [293] = 293,
  [294] = 182,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 277,
  [299] = 299,
  [300] = 300,
  [301] = 277,
  [302] = 302,
  [303] = 303,
  [304] = 270,
  [305] = 305,
  [306] = 302,
  [307] = 307,
  [308] = 270,
  [309] = 309,
  [310] = 302,
  [311] = 311,
  [312] = 270,
  [313] = 313,
  [314] = 270,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 273,
  [319] = 278,
  [320] = 278,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 277,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(213);
      ADVANCE_MAP(
        '"', 244,
        '(', 232,
        ')', 233,
        '*', 266,
        '+', 267,
        ',', 229,
        '.', 215,
        '/', 15,
        ';', 256,
        '=', 228,
        'E', 32,
        'H', 22,
        'I', 27,
        'T', 29,
        '[', 37,
        '\\', 35,
        'e', 109,
        'f', 38,
        'g', 103,
        'n', 181,
        'p', 140,
        'r', 65,
        's', 180,
        't', 144,
        'w', 90,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(212);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(236);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(8);
      if (lookahead == '"') ADVANCE(244);
      if (lookahead == '\\') ADVANCE(35);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(245);
      if (lookahead != 0) ADVANCE(246);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(31);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(77);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(139);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(175);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '"', 244,
        '(', 232,
        ')', 233,
        '*', 266,
        '+', 267,
        ',', 229,
        '.', 215,
        'f', 282,
        'n', 308,
        't', 303,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(236);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '"', 244,
        '(', 232,
        '*', 266,
        '+', 267,
        ',', 229,
        '.', 215,
        '=', 228,
        '[', 37,
        'f', 282,
        'n', 308,
        't', 303,
        '\n', 268,
        '\r', 268,
      );
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(236);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(244);
      if (lookahead == '\\') ADVANCE(36);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      END_STATE();
    case 9:
      if (lookahead == '$') ADVANCE(34);
      END_STATE();
    case 10:
      if (lookahead == '$') ADVANCE(214);
      END_STATE();
    case 11:
      if (lookahead == '(') ADVANCE(232);
      if (lookahead == ',') ADVANCE(229);
      if (lookahead == '.') ADVANCE(215);
      if (lookahead == '=') ADVANCE(228);
      if (lookahead == '[') ADVANCE(37);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(268);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 12:
      if (lookahead == ')') ADVANCE(233);
      if (lookahead == '*') ADVANCE(266);
      if (lookahead == '+') ADVANCE(267);
      if (lookahead == ',') ADVANCE(229);
      if (lookahead == '=') ADVANCE(228);
      if (lookahead == '[') ADVANCE(37);
      if (lookahead == 'e') ADVANCE(299);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 13:
      if (lookahead == ')') ADVANCE(233);
      if (lookahead == '*') ADVANCE(266);
      if (lookahead == '+') ADVANCE(267);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == 'I') ADVANCE(280);
      if (lookahead == 'e') ADVANCE(298);
      if (lookahead == 'r') ADVANCE(287);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 14:
      if (lookahead == ')') ADVANCE(233);
      if (lookahead == ',') ADVANCE(229);
      if (lookahead == 'r') ADVANCE(290);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 15:
      if (lookahead == '*') ADVANCE(17);
      if (lookahead == '/') ADVANCE(263);
      END_STATE();
    case 16:
      if (lookahead == '*') ADVANCE(16);
      if (lookahead == '/') ADVANCE(262);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 17:
      if (lookahead == '*') ADVANCE(16);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == ',') ADVANCE(229);
      if (lookahead == '=') ADVANCE(228);
      if (lookahead == '[') ADVANCE(37);
      if (lookahead == 'e') ADVANCE(300);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 19:
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == 'E') ADVANCE(281);
      if (lookahead == 'I') ADVANCE(280);
      if (lookahead == 'r') ADVANCE(287);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 20:
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == 'I') ADVANCE(280);
      if (lookahead == 'e') ADVANCE(296);
      if (lookahead == 'r') ADVANCE(287);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 21:
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == 'I') ADVANCE(280);
      if (lookahead == 'r') ADVANCE(287);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(21);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 22:
      if (lookahead == 'A') ADVANCE(9);
      END_STATE();
    case 23:
      if (lookahead == 'B') ADVANCE(25);
      END_STATE();
    case 24:
      if (lookahead == 'D') ADVANCE(2);
      END_STATE();
    case 25:
      if (lookahead == 'E') ADVANCE(195);
      END_STATE();
    case 26:
      if (lookahead == 'E') ADVANCE(33);
      END_STATE();
    case 27:
      if (lookahead == 'F') ADVANCE(269);
      END_STATE();
    case 28:
      if (lookahead == 'F') ADVANCE(272);
      END_STATE();
    case 29:
      if (lookahead == 'H') ADVANCE(26);
      END_STATE();
    case 30:
      if (lookahead == 'H') ADVANCE(82);
      END_STATE();
    case 31:
      if (lookahead == 'I') ADVANCE(28);
      END_STATE();
    case 32:
      if (lookahead == 'N') ADVANCE(24);
      END_STATE();
    case 33:
      if (lookahead == 'N') ADVANCE(271);
      END_STATE();
    case 34:
      if (lookahead == 'P') ADVANCE(23);
      END_STATE();
    case 35:
      ADVANCE_MAP(
        'U', 248,
        'u', 250,
        'x', 249,
        '"', 251,
        '\'', 251,
        '0', 251,
        '?', 251,
        '\\', 251,
        'a', 251,
        'b', 251,
        'e', 251,
        'f', 251,
        'n', 251,
        'r', 251,
        't', 251,
        'v', 251,
      );
      if (lookahead != 0) ADVANCE(247);
      END_STATE();
    case 36:
      ADVANCE_MAP(
        'U', 203,
        'u', 208,
        'x', 205,
        '"', 251,
        '\'', 251,
        '0', 251,
        '?', 251,
        '\\', 251,
        'a', 251,
        'b', 251,
        'e', 251,
        'f', 251,
        'n', 251,
        'r', 251,
        't', 251,
        'v', 251,
      );
      END_STATE();
    case 37:
      if (lookahead == ']') ADVANCE(227);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(100);
      if (lookahead == 'o') ADVANCE(141);
      if (lookahead == 'r') ADVANCE(120);
      if (lookahead == 'u') ADVANCE(110);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(143);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(149);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(104);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(147);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(151);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(52);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(170);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(153);
      END_STATE();
    case 49:
      if (lookahead == 'b') ADVANCE(145);
      END_STATE();
    case 50:
      if (lookahead == 'b') ADVANCE(42);
      END_STATE();
    case 51:
      if (lookahead == 'b') ADVANCE(102);
      END_STATE();
    case 52:
      if (lookahead == 'b') ADVANCE(106);
      END_STATE();
    case 53:
      if (lookahead == 'b') ADVANCE(107);
      END_STATE();
    case 54:
      if (lookahead == 'b') ADVANCE(155);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(259);
      END_STATE();
    case 56:
      if (lookahead == 'c') ADVANCE(168);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(171);
      END_STATE();
    case 58:
      if (lookahead == 'c') ADVANCE(176);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(216);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(261);
      END_STATE();
    case 61:
      if (lookahead == 'd') ADVANCE(217);
      END_STATE();
    case 62:
      if (lookahead == 'd') ADVANCE(3);
      END_STATE();
    case 63:
      if (lookahead == 'd') ADVANCE(4);
      END_STATE();
    case 64:
      if (lookahead == 'd') ADVANCE(83);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(238);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(240);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(260);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(220);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(231);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(218);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(258);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(190);
      if (lookahead == 'f') ADVANCE(127);
      if (lookahead == 'p') ADVANCE(148);
      if (lookahead == 's') ADVANCE(187);
      if (lookahead == 't') ADVANCE(196);
      if (lookahead == 'v') ADVANCE(41);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 86:
      if (lookahead == 'f') ADVANCE(234);
      if (lookahead == 't') ADVANCE(183);
      END_STATE();
    case 87:
      if (lookahead == 'f') ADVANCE(186);
      if (lookahead == 's') ADVANCE(187);
      END_STATE();
    case 88:
      if (lookahead == 'f') ADVANCE(130);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(88);
      END_STATE();
    case 89:
      if (lookahead == 'h') ADVANCE(93);
      END_STATE();
    case 90:
      if (lookahead == 'i') ADVANCE(162);
      END_STATE();
    case 91:
      if (lookahead == 'i') ADVANCE(188);
      if (lookahead == 'o') ADVANCE(169);
      END_STATE();
    case 92:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 93:
      if (lookahead == 'i') ADVANCE(112);
      END_STATE();
    case 94:
      if (lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 95:
      if (lookahead == 'i') ADVANCE(123);
      END_STATE();
    case 96:
      if (lookahead == 'i') ADVANCE(117);
      END_STATE();
    case 97:
      if (lookahead == 'i') ADVANCE(126);
      END_STATE();
    case 98:
      if (lookahead == 'i') ADVANCE(118);
      END_STATE();
    case 99:
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 100:
      if (lookahead == 'l') ADVANCE(161);
      END_STATE();
    case 101:
      if (lookahead == 'l') ADVANCE(242);
      END_STATE();
    case 102:
      if (lookahead == 'l') ADVANCE(92);
      END_STATE();
    case 103:
      if (lookahead == 'l') ADVANCE(121);
      END_STATE();
    case 104:
      if (lookahead == 'l') ADVANCE(5);
      END_STATE();
    case 105:
      if (lookahead == 'l') ADVANCE(101);
      END_STATE();
    case 106:
      if (lookahead == 'l') ADVANCE(75);
      END_STATE();
    case 107:
      if (lookahead == 'l') ADVANCE(80);
      END_STATE();
    case 108:
      if (lookahead == 'm') ADVANCE(219);
      END_STATE();
    case 109:
      if (lookahead == 'n') ADVANCE(62);
      if (lookahead == 'v') ADVANCE(74);
      END_STATE();
    case 110:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 111:
      if (lookahead == 'n') ADVANCE(264);
      END_STATE();
    case 112:
      if (lookahead == 'n') ADVANCE(222);
      END_STATE();
    case 113:
      if (lookahead == 'n') ADVANCE(230);
      END_STATE();
    case 114:
      if (lookahead == 'n') ADVANCE(257);
      END_STATE();
    case 115:
      if (lookahead == 'n') ADVANCE(164);
      END_STATE();
    case 116:
      if (lookahead == 'n') ADVANCE(165);
      END_STATE();
    case 117:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 118:
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 119:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 120:
      if (lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 121:
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 122:
      if (lookahead == 'o') ADVANCE(184);
      END_STATE();
    case 123:
      if (lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 124:
      if (lookahead == 'o') ADVANCE(150);
      END_STATE();
    case 125:
      if (lookahead == 'o') ADVANCE(173);
      END_STATE();
    case 126:
      if (lookahead == 'o') ADVANCE(114);
      END_STATE();
    case 127:
      if (lookahead == 'o') ADVANCE(152);
      if (lookahead == 'u') ADVANCE(119);
      END_STATE();
    case 128:
      if (lookahead == 'o') ADVANCE(185);
      END_STATE();
    case 129:
      if (lookahead == 'o') ADVANCE(177);
      END_STATE();
    case 130:
      if (lookahead == 'o') ADVANCE(154);
      END_STATE();
    case 131:
      if (lookahead == 'o') ADVANCE(178);
      END_STATE();
    case 132:
      if (lookahead == 'o') ADVANCE(179);
      END_STATE();
    case 133:
      if (lookahead == 'p') ADVANCE(67);
      END_STATE();
    case 134:
      if (lookahead == 'p') ADVANCE(124);
      END_STATE();
    case 135:
      if (lookahead == 'p') ADVANCE(70);
      END_STATE();
    case 136:
      if (lookahead == 'p') ADVANCE(72);
      END_STATE();
    case 137:
      if (lookahead == 'p') ADVANCE(79);
      END_STATE();
    case 138:
      if (lookahead == 'p') ADVANCE(81);
      END_STATE();
    case 139:
      if (lookahead == 'p') ADVANCE(156);
      END_STATE();
    case 140:
      if (lookahead == 'r') ADVANCE(91);
      if (lookahead == 'u') ADVANCE(51);
      END_STATE();
    case 141:
      if (lookahead == 'r') ADVANCE(192);
      END_STATE();
    case 142:
      if (lookahead == 'r') ADVANCE(10);
      END_STATE();
    case 143:
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 144:
      if (lookahead == 'r') ADVANCE(182);
      if (lookahead == 'y') ADVANCE(133);
      END_STATE();
    case 145:
      if (lookahead == 'r') ADVANCE(122);
      END_STATE();
    case 146:
      if (lookahead == 'r') ADVANCE(111);
      END_STATE();
    case 147:
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 148:
      if (lookahead == 'r') ADVANCE(125);
      END_STATE();
    case 149:
      if (lookahead == 'r') ADVANCE(94);
      END_STATE();
    case 150:
      if (lookahead == 'r') ADVANCE(167);
      END_STATE();
    case 151:
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 152:
      if (lookahead == 'r') ADVANCE(193);
      END_STATE();
    case 153:
      if (lookahead == 'r') ADVANCE(99);
      END_STATE();
    case 154:
      if (lookahead == 'r') ADVANCE(194);
      END_STATE();
    case 155:
      if (lookahead == 'r') ADVANCE(128);
      END_STATE();
    case 156:
      if (lookahead == 'r') ADVANCE(132);
      END_STATE();
    case 157:
      if (lookahead == 's') ADVANCE(224);
      END_STATE();
    case 158:
      if (lookahead == 's') ADVANCE(226);
      END_STATE();
    case 159:
      if (lookahead == 's') ADVANCE(223);
      END_STATE();
    case 160:
      if (lookahead == 's') ADVANCE(225);
      END_STATE();
    case 161:
      if (lookahead == 's') ADVANCE(68);
      END_STATE();
    case 162:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 163:
      if (lookahead == 't') ADVANCE(196);
      END_STATE();
    case 164:
      if (lookahead == 't') ADVANCE(255);
      END_STATE();
    case 165:
      if (lookahead == 't') ADVANCE(254);
      END_STATE();
    case 166:
      if (lookahead == 't') ADVANCE(309);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 167:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 168:
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 169:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 170:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 171:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 172:
      if (lookahead == 't') ADVANCE(96);
      END_STATE();
    case 173:
      if (lookahead == 't') ADVANCE(129);
      END_STATE();
    case 174:
      if (lookahead == 't') ADVANCE(98);
      END_STATE();
    case 175:
      if (lookahead == 't') ADVANCE(197);
      END_STATE();
    case 176:
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 177:
      if (lookahead == 't') ADVANCE(198);
      END_STATE();
    case 178:
      if (lookahead == 't') ADVANCE(199);
      END_STATE();
    case 179:
      if (lookahead == 't') ADVANCE(131);
      END_STATE();
    case 180:
      if (lookahead == 'u') ADVANCE(49);
      END_STATE();
    case 181:
      if (lookahead == 'u') ADVANCE(105);
      END_STATE();
    case 182:
      if (lookahead == 'u') ADVANCE(66);
      END_STATE();
    case 183:
      if (lookahead == 'u') ADVANCE(146);
      END_STATE();
    case 184:
      if (lookahead == 'u') ADVANCE(172);
      END_STATE();
    case 185:
      if (lookahead == 'u') ADVANCE(174);
      END_STATE();
    case 186:
      if (lookahead == 'u') ADVANCE(119);
      END_STATE();
    case 187:
      if (lookahead == 'u') ADVANCE(54);
      END_STATE();
    case 188:
      if (lookahead == 'v') ADVANCE(46);
      END_STATE();
    case 189:
      if (lookahead == 'v') ADVANCE(41);
      END_STATE();
    case 190:
      if (lookahead == 'v') ADVANCE(85);
      END_STATE();
    case 191:
      if (lookahead == 'v') ADVANCE(48);
      END_STATE();
    case 192:
      if (lookahead == 'w') ADVANCE(39);
      END_STATE();
    case 193:
      if (lookahead == 'w') ADVANCE(43);
      END_STATE();
    case 194:
      if (lookahead == 'w') ADVANCE(44);
      END_STATE();
    case 195:
      if (lookahead == 'x') ADVANCE(134);
      END_STATE();
    case 196:
      if (lookahead == 'y') ADVANCE(135);
      END_STATE();
    case 197:
      if (lookahead == 'y') ADVANCE(136);
      END_STATE();
    case 198:
      if (lookahead == 'y') ADVANCE(137);
      END_STATE();
    case 199:
      if (lookahead == 'y') ADVANCE(138);
      END_STATE();
    case 200:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(200);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 201:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      END_STATE();
    case 202:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(251);
      END_STATE();
    case 203:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(211);
      END_STATE();
    case 204:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(253);
      END_STATE();
    case 205:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(204);
      END_STATE();
    case 206:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(202);
      END_STATE();
    case 207:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(206);
      END_STATE();
    case 208:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(207);
      END_STATE();
    case 209:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(208);
      END_STATE();
    case 210:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(209);
      END_STATE();
    case 211:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(210);
      END_STATE();
    case 212:
      if (eof) ADVANCE(213);
      ADVANCE_MAP(
        '"', 244,
        '(', 232,
        ')', 233,
        '*', 266,
        '+', 267,
        ',', 229,
        '.', 215,
        '/', 15,
        ';', 256,
        '=', 228,
        'E', 32,
        'H', 22,
        'I', 27,
        'T', 29,
        '[', 37,
        '\\', 36,
        'e', 109,
        'f', 38,
        'g', 103,
        'n', 181,
        'p', 140,
        'r', 65,
        's', 180,
        't', 144,
        'w', 90,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(212);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(236);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_HA_DOLLARPBExportHeader_DOLLAR);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_forward);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_endforward);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_globaltype);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_endtype);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_within);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_typevariables);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_endvariables);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_forwardprototypes);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_endprototypes);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_subroutine);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_ref);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_ref);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(236);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_decimal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_null);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_string_literal_content_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(245);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(246);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_string_literal_content_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(246);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_string_literal_content_token2);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_string_literal_content_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(211);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_string_literal_content_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(204);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_string_literal_content_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(207);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(251);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(252);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_end_of_event);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_event);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_endfunction);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_endsubroutine);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(263);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_return);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_newline);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(268);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_IF);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_IF);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_THEN);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_ENDIF);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 20},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 6},
  [5] = {.lex_state = 6},
  [6] = {.lex_state = 7},
  [7] = {.lex_state = 13},
  [8] = {.lex_state = 7},
  [9] = {.lex_state = 7},
  [10] = {.lex_state = 6},
  [11] = {.lex_state = 6},
  [12] = {.lex_state = 6},
  [13] = {.lex_state = 6},
  [14] = {.lex_state = 6},
  [15] = {.lex_state = 6},
  [16] = {.lex_state = 6},
  [17] = {.lex_state = 6},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 20},
  [20] = {.lex_state = 20},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 6},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 13},
  [28] = {.lex_state = 19},
  [29] = {.lex_state = 19},
  [30] = {.lex_state = 21},
  [31] = {.lex_state = 13},
  [32] = {.lex_state = 21},
  [33] = {.lex_state = 21},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 6},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 6},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 6},
  [46] = {.lex_state = 6},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 6},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 13},
  [59] = {.lex_state = 13},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 11},
  [64] = {.lex_state = 14},
  [65] = {.lex_state = 20},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 14},
  [68] = {.lex_state = 12},
  [69] = {.lex_state = 12},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 20},
  [72] = {.lex_state = 20},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 12},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 20},
  [77] = {.lex_state = 18},
  [78] = {.lex_state = 12},
  [79] = {.lex_state = 20},
  [80] = {.lex_state = 20},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 20},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 14},
  [91] = {.lex_state = 12},
  [92] = {.lex_state = 7},
  [93] = {.lex_state = 20},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 200},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 13},
  [99] = {.lex_state = 13},
  [100] = {.lex_state = 7},
  [101] = {.lex_state = 200},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 12},
  [104] = {.lex_state = 13},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 13},
  [107] = {.lex_state = 7},
  [108] = {.lex_state = 200},
  [109] = {.lex_state = 12},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 12},
  [113] = {.lex_state = 13},
  [114] = {.lex_state = 7},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 7},
  [117] = {.lex_state = 13},
  [118] = {.lex_state = 18},
  [119] = {.lex_state = 18},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 18},
  [122] = {.lex_state = 12},
  [123] = {.lex_state = 18},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 12},
  [126] = {.lex_state = 19},
  [127] = {.lex_state = 19},
  [128] = {.lex_state = 19},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 19},
  [131] = {.lex_state = 19},
  [132] = {.lex_state = 19},
  [133] = {.lex_state = 166},
  [134] = {.lex_state = 19},
  [135] = {.lex_state = 19},
  [136] = {.lex_state = 7},
  [137] = {.lex_state = 200},
  [138] = {.lex_state = 13},
  [139] = {.lex_state = 200},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 200},
  [142] = {.lex_state = 200},
  [143] = {.lex_state = 200},
  [144] = {.lex_state = 18},
  [145] = {.lex_state = 18},
  [146] = {.lex_state = 7},
  [147] = {.lex_state = 1},
  [148] = {.lex_state = 12},
  [149] = {.lex_state = 18},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 12},
  [152] = {.lex_state = 18},
  [153] = {.lex_state = 7},
  [154] = {.lex_state = 18},
  [155] = {.lex_state = 18},
  [156] = {.lex_state = 14},
  [157] = {.lex_state = 18},
  [158] = {.lex_state = 7},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 12},
  [162] = {.lex_state = 7},
  [163] = {.lex_state = 7},
  [164] = {.lex_state = 7},
  [165] = {.lex_state = 7},
  [166] = {.lex_state = 7},
  [167] = {.lex_state = 14},
  [168] = {.lex_state = 12},
  [169] = {.lex_state = 7},
  [170] = {.lex_state = 7},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 7},
  [173] = {.lex_state = 14},
  [174] = {.lex_state = 14},
  [175] = {.lex_state = 12},
  [176] = {.lex_state = 7},
  [177] = {.lex_state = 7},
  [178] = {.lex_state = 7},
  [179] = {.lex_state = 1},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 7},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 12},
  [184] = {.lex_state = 18},
  [185] = {.lex_state = 18},
  [186] = {.lex_state = 12},
  [187] = {.lex_state = 12},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 7},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 7},
  [192] = {.lex_state = 7},
  [193] = {.lex_state = 7},
  [194] = {.lex_state = 7},
  [195] = {.lex_state = 18},
  [196] = {.lex_state = 18},
  [197] = {.lex_state = 12},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 7},
  [201] = {.lex_state = 14},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 7},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 18},
  [209] = {.lex_state = 18},
  [210] = {.lex_state = 18},
  [211] = {.lex_state = 18},
  [212] = {.lex_state = 7},
  [213] = {.lex_state = 7},
  [214] = {.lex_state = 7},
  [215] = {.lex_state = 7},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 7},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 7},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 7},
  [222] = {.lex_state = 12},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 7},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 200},
  [228] = {.lex_state = 200},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 200},
  [233] = {.lex_state = 200},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 200},
  [236] = {.lex_state = 88},
  [237] = {.lex_state = 200},
  [238] = {.lex_state = 200},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 200},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 200},
  [244] = {.lex_state = 88},
  [245] = {.lex_state = 200},
  [246] = {.lex_state = 200},
  [247] = {.lex_state = 200},
  [248] = {.lex_state = 200},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 200},
  [254] = {.lex_state = 200},
  [255] = {.lex_state = 166},
  [256] = {.lex_state = 200},
  [257] = {.lex_state = 200},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 200},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 166},
  [265] = {.lex_state = 200},
  [266] = {.lex_state = 200},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 200},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 7},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 7},
  [278] = {.lex_state = 7},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 7},
  [283] = {.lex_state = 7},
  [284] = {.lex_state = 7},
  [285] = {.lex_state = 7},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 7},
  [288] = {.lex_state = 7},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 7},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 200},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 166},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 7},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 7},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 88},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 200},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 200},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 7},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 200},
  [318] = {.lex_state = 7},
  [319] = {.lex_state = 7},
  [320] = {.lex_state = 7},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 200},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 7},
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
    [anon_sym_function] = ACTIONS(1),
    [anon_sym_subroutine] = ACTIONS(1),
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
    [sym_end_of_event] = ACTIONS(1),
    [anon_sym_event] = ACTIONS(1),
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
    [anon_sym_IF] = ACTIONS(1),
    [anon_sym_THEN] = ACTIONS(1),
    [anon_sym_ENDIF] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(321),
    [anon_sym_HA_DOLLARPBExportHeader_DOLLAR] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 15,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_return,
    ACTIONS(11), 1,
      anon_sym_IF,
    ACTIONS(13), 1,
      sym_identifier,
    STATE(76), 1,
      sym_if_statment,
    STATE(97), 1,
      sym_end_of_function,
    STATE(136), 1,
      sym_local_variable,
    STATE(218), 1,
      sym_function_body,
    STATE(227), 1,
      sym_type,
    STATE(241), 1,
      sym_code_block,
    STATE(258), 1,
      sym_function_name,
    STATE(273), 1,
      sym_variable,
    STATE(304), 1,
      sym_object_name,
    ACTIONS(5), 2,
      anon_sym_endfunction,
      anon_sym_endsubroutine,
    STATE(19), 7,
      sym_return_statement,
      sym_local_declaration,
      sym_assignment,
      sym_object_method_call,
      sym_pb_constructions,
      sym_function_call,
      aux_sym_code_block_repeat1,
  [53] = 13,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(18), 1,
      anon_sym_RPAREN,
    ACTIONS(20), 1,
      sym_integer,
    ACTIONS(23), 1,
      sym_decimal,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(32), 1,
      sym_identifier,
    STATE(3), 1,
      aux_sym_function_call_parameters_repeat1,
    STATE(44), 1,
      sym_expression,
    STATE(262), 1,
      sym_function_name,
    STATE(314), 1,
      sym_object_name,
    STATE(40), 2,
      sym_boolean_literal,
      sym_string_literal,
    ACTIONS(26), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
    STATE(37), 6,
      sym_local_variable,
      sym_value,
      sym_binary_expression,
      sym_object_method_call,
      sym_parenthesized_expression,
      sym_function_call,
  [101] = 13,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_RPAREN,
    ACTIONS(39), 1,
      sym_integer,
    ACTIONS(41), 1,
      sym_decimal,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      sym_identifier,
    STATE(5), 1,
      aux_sym_function_call_parameters_repeat1,
    STATE(44), 1,
      sym_expression,
    STATE(262), 1,
      sym_function_name,
    STATE(314), 1,
      sym_object_name,
    STATE(40), 2,
      sym_boolean_literal,
      sym_string_literal,
    ACTIONS(43), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
    STATE(37), 6,
      sym_local_variable,
      sym_value,
      sym_binary_expression,
      sym_object_method_call,
      sym_parenthesized_expression,
      sym_function_call,
  [149] = 13,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      sym_integer,
    ACTIONS(41), 1,
      sym_decimal,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_RPAREN,
    STATE(3), 1,
      aux_sym_function_call_parameters_repeat1,
    STATE(44), 1,
      sym_expression,
    STATE(262), 1,
      sym_function_name,
    STATE(314), 1,
      sym_object_name,
    STATE(40), 2,
      sym_boolean_literal,
      sym_string_literal,
    ACTIONS(43), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
    STATE(37), 6,
      sym_local_variable,
      sym_value,
      sym_binary_expression,
      sym_object_method_call,
      sym_parenthesized_expression,
      sym_function_call,
  [197] = 11,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      sym_newline,
    ACTIONS(61), 1,
      sym_identifier,
    STATE(200), 1,
      sym_expression,
    STATE(260), 1,
      sym_function_name,
    STATE(308), 1,
      sym_object_name,
    ACTIONS(53), 2,
      sym_integer,
      sym_decimal,
    STATE(165), 2,
      sym_boolean_literal,
      sym_string_literal,
    ACTIONS(55), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
    STATE(172), 6,
      sym_local_variable,
      sym_value,
      sym_binary_expression,
      sym_object_method_call,
      sym_parenthesized_expression,
      sym_function_call,
  [240] = 14,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(63), 1,
      sym_end_of_event,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_return,
    ACTIONS(69), 1,
      anon_sym_IF,
    STATE(136), 1,
      sym_local_variable,
    STATE(138), 1,
      sym_if_statment,
    STATE(227), 1,
      sym_type,
    STATE(242), 1,
      sym_function_name,
    STATE(272), 1,
      sym_event_body,
    STATE(275), 1,
      sym_code_block,
    STATE(279), 1,
      sym_object_name,
    STATE(318), 1,
      sym_variable,
    STATE(31), 7,
      sym_return_statement,
      sym_local_declaration,
      sym_assignment,
      sym_object_method_call,
      sym_pb_constructions,
      sym_function_call,
      aux_sym_code_block_repeat1,
  [289] = 11,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(71), 1,
      sym_newline,
    STATE(214), 1,
      sym_expression,
    STATE(260), 1,
      sym_function_name,
    STATE(308), 1,
      sym_object_name,
    ACTIONS(53), 2,
      sym_integer,
      sym_decimal,
    STATE(165), 2,
      sym_boolean_literal,
      sym_string_literal,
    ACTIONS(55), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
    STATE(172), 6,
      sym_local_variable,
      sym_value,
      sym_binary_expression,
      sym_object_method_call,
      sym_parenthesized_expression,
      sym_function_call,
  [332] = 11,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(73), 1,
      sym_newline,
    STATE(219), 1,
      sym_expression,
    STATE(260), 1,
      sym_function_name,
    STATE(308), 1,
      sym_object_name,
    ACTIONS(53), 2,
      sym_integer,
      sym_decimal,
    STATE(165), 2,
      sym_boolean_literal,
      sym_string_literal,
    ACTIONS(55), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
    STATE(172), 6,
      sym_local_variable,
      sym_value,
      sym_binary_expression,
      sym_object_method_call,
      sym_parenthesized_expression,
      sym_function_call,
  [375] = 11,
    ACTIONS(53), 1,
      sym_integer,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      sym_decimal,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    STATE(177), 1,
      sym_expression,
    STATE(260), 1,
      sym_function_name,
    STATE(308), 1,
      sym_object_name,
    STATE(165), 2,
      sym_boolean_literal,
      sym_string_literal,
    ACTIONS(55), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
    STATE(172), 6,
      sym_local_variable,
      sym_value,
      sym_binary_expression,
      sym_object_method_call,
      sym_parenthesized_expression,
      sym_function_call,
  [417] = 11,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      sym_integer,
    ACTIONS(85), 1,
      sym_decimal,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      sym_identifier,
    STATE(223), 1,
      sym_expression,
    STATE(261), 1,
      sym_function_name,
    STATE(312), 1,
      sym_object_name,
    STATE(198), 2,
      sym_boolean_literal,
      sym_string_literal,
    ACTIONS(87), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
    STATE(150), 6,
      sym_local_variable,
      sym_value,
      sym_binary_expression,
      sym_object_method_call,
      sym_parenthesized_expression,
      sym_function_call,
  [459] = 11,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      sym_integer,
    ACTIONS(85), 1,
      sym_decimal,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      sym_identifier,
    STATE(203), 1,
      sym_expression,
    STATE(261), 1,
      sym_function_name,
    STATE(312), 1,
      sym_object_name,
    STATE(198), 2,
      sym_boolean_literal,
      sym_string_literal,
    ACTIONS(87), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
    STATE(150), 6,
      sym_local_variable,
      sym_value,
      sym_binary_expression,
      sym_object_method_call,
      sym_parenthesized_expression,
      sym_function_call,
  [501] = 11,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      sym_identifier,
    ACTIONS(93), 1,
      sym_integer,
    ACTIONS(95), 1,
      sym_decimal,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    STATE(190), 1,
      sym_expression,
    STATE(242), 1,
      sym_function_name,
    STATE(279), 1,
      sym_object_name,
    STATE(68), 2,
      sym_boolean_literal,
      sym_string_literal,
    ACTIONS(97), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
    STATE(150), 6,
      sym_local_variable,
      sym_value,
      sym_binary_expression,
      sym_object_method_call,
      sym_parenthesized_expression,
      sym_function_call,
  [543] = 11,
    ACTIONS(53), 1,
      sym_integer,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      sym_decimal,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    STATE(107), 1,
      sym_expression,
    STATE(260), 1,
      sym_function_name,
    STATE(308), 1,
      sym_object_name,
    STATE(165), 2,
      sym_boolean_literal,
      sym_string_literal,
    ACTIONS(55), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
    STATE(172), 6,
      sym_local_variable,
      sym_value,
      sym_binary_expression,
      sym_object_method_call,
      sym_parenthesized_expression,
      sym_function_call,
  [585] = 11,
    ACTIONS(53), 1,
      sym_integer,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      sym_decimal,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    STATE(166), 1,
      sym_expression,
    STATE(260), 1,
      sym_function_name,
    STATE(308), 1,
      sym_object_name,
    STATE(165), 2,
      sym_boolean_literal,
      sym_string_literal,
    ACTIONS(55), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
    STATE(172), 6,
      sym_local_variable,
      sym_value,
      sym_binary_expression,
      sym_object_method_call,
      sym_parenthesized_expression,
      sym_function_call,
  [627] = 11,
    ACTIONS(53), 1,
      sym_integer,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      sym_decimal,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    STATE(114), 1,
      sym_expression,
    STATE(260), 1,
      sym_function_name,
    STATE(308), 1,
      sym_object_name,
    STATE(165), 2,
      sym_boolean_literal,
      sym_string_literal,
    ACTIONS(55), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
    STATE(172), 6,
      sym_local_variable,
      sym_value,
      sym_binary_expression,
      sym_object_method_call,
      sym_parenthesized_expression,
      sym_function_call,
  [669] = 11,
    ACTIONS(53), 1,
      sym_integer,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      sym_decimal,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    STATE(116), 1,
      sym_expression,
    STATE(260), 1,
      sym_function_name,
    STATE(308), 1,
      sym_object_name,
    STATE(165), 2,
      sym_boolean_literal,
      sym_string_literal,
    ACTIONS(55), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
    STATE(172), 6,
      sym_local_variable,
      sym_value,
      sym_binary_expression,
      sym_object_method_call,
      sym_parenthesized_expression,
      sym_function_call,
  [711] = 11,
    ACTIONS(53), 1,
      sym_integer,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      sym_decimal,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    STATE(176), 1,
      sym_expression,
    STATE(260), 1,
      sym_function_name,
    STATE(308), 1,
      sym_object_name,
    STATE(165), 2,
      sym_boolean_literal,
      sym_string_literal,
    ACTIONS(55), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
    STATE(172), 6,
      sym_local_variable,
      sym_value,
      sym_binary_expression,
      sym_object_method_call,
      sym_parenthesized_expression,
      sym_function_call,
  [753] = 12,
    ACTIONS(9), 1,
      anon_sym_return,
    ACTIONS(11), 1,
      anon_sym_IF,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(103), 1,
      sym_comment,
    STATE(76), 1,
      sym_if_statment,
    STATE(136), 1,
      sym_local_variable,
    STATE(227), 1,
      sym_type,
    STATE(258), 1,
      sym_function_name,
    STATE(273), 1,
      sym_variable,
    STATE(304), 1,
      sym_object_name,
    ACTIONS(101), 2,
      anon_sym_endfunction,
      anon_sym_endsubroutine,
    STATE(20), 7,
      sym_return_statement,
      sym_local_declaration,
      sym_assignment,
      sym_object_method_call,
      sym_pb_constructions,
      sym_function_call,
      aux_sym_code_block_repeat1,
  [797] = 12,
    ACTIONS(107), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_return,
    ACTIONS(113), 1,
      anon_sym_IF,
    ACTIONS(116), 1,
      sym_identifier,
    STATE(76), 1,
      sym_if_statment,
    STATE(136), 1,
      sym_local_variable,
    STATE(227), 1,
      sym_type,
    STATE(258), 1,
      sym_function_name,
    STATE(273), 1,
      sym_variable,
    STATE(304), 1,
      sym_object_name,
    ACTIONS(105), 2,
      anon_sym_endfunction,
      anon_sym_endsubroutine,
    STATE(20), 7,
      sym_return_statement,
      sym_local_declaration,
      sym_assignment,
      sym_object_method_call,
      sym_pb_constructions,
      sym_function_call,
      aux_sym_code_block_repeat1,
  [841] = 11,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      sym_integer,
    ACTIONS(85), 1,
      sym_decimal,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      sym_identifier,
    STATE(160), 1,
      sym_expression,
    STATE(261), 1,
      sym_function_name,
    STATE(312), 1,
      sym_object_name,
    STATE(198), 2,
      sym_boolean_literal,
      sym_string_literal,
    ACTIONS(87), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
    STATE(150), 6,
      sym_local_variable,
      sym_value,
      sym_binary_expression,
      sym_object_method_call,
      sym_parenthesized_expression,
      sym_function_call,
  [883] = 11,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      sym_identifier,
    ACTIONS(93), 1,
      sym_integer,
    ACTIONS(95), 1,
      sym_decimal,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    STATE(160), 1,
      sym_expression,
    STATE(242), 1,
      sym_function_name,
    STATE(279), 1,
      sym_object_name,
    STATE(68), 2,
      sym_boolean_literal,
      sym_string_literal,
    ACTIONS(97), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
    STATE(150), 6,
      sym_local_variable,
      sym_value,
      sym_binary_expression,
      sym_object_method_call,
      sym_parenthesized_expression,
      sym_function_call,
  [925] = 11,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      sym_integer,
    ACTIONS(41), 1,
      sym_decimal,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      sym_identifier,
    STATE(39), 1,
      sym_expression,
    STATE(262), 1,
      sym_function_name,
    STATE(314), 1,
      sym_object_name,
    STATE(40), 2,
      sym_boolean_literal,
      sym_string_literal,
    ACTIONS(43), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
    STATE(37), 6,
      sym_local_variable,
      sym_value,
      sym_binary_expression,
      sym_object_method_call,
      sym_parenthesized_expression,
      sym_function_call,
  [967] = 11,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      sym_identifier,
    ACTIONS(93), 1,
      sym_integer,
    ACTIONS(95), 1,
      sym_decimal,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    STATE(216), 1,
      sym_expression,
    STATE(242), 1,
      sym_function_name,
    STATE(279), 1,
      sym_object_name,
    STATE(68), 2,
      sym_boolean_literal,
      sym_string_literal,
    ACTIONS(97), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
    STATE(150), 6,
      sym_local_variable,
      sym_value,
      sym_binary_expression,
      sym_object_method_call,
      sym_parenthesized_expression,
      sym_function_call,
  [1009] = 11,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      sym_identifier,
    ACTIONS(93), 1,
      sym_integer,
    ACTIONS(95), 1,
      sym_decimal,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    STATE(220), 1,
      sym_expression,
    STATE(242), 1,
      sym_function_name,
    STATE(279), 1,
      sym_object_name,
    STATE(68), 2,
      sym_boolean_literal,
      sym_string_literal,
    ACTIONS(97), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
    STATE(150), 6,
      sym_local_variable,
      sym_value,
      sym_binary_expression,
      sym_object_method_call,
      sym_parenthesized_expression,
      sym_function_call,
  [1051] = 11,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      sym_integer,
    ACTIONS(85), 1,
      sym_decimal,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      sym_identifier,
    STATE(224), 1,
      sym_expression,
    STATE(261), 1,
      sym_function_name,
    STATE(312), 1,
      sym_object_name,
    STATE(198), 2,
      sym_boolean_literal,
      sym_string_literal,
    ACTIONS(87), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
    STATE(150), 6,
      sym_local_variable,
      sym_value,
      sym_binary_expression,
      sym_object_method_call,
      sym_parenthesized_expression,
      sym_function_call,
  [1093] = 12,
    ACTIONS(105), 1,
      sym_end_of_event,
    ACTIONS(116), 1,
      sym_identifier,
    ACTIONS(119), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_return,
    ACTIONS(125), 1,
      anon_sym_IF,
    STATE(136), 1,
      sym_local_variable,
    STATE(138), 1,
      sym_if_statment,
    STATE(227), 1,
      sym_type,
    STATE(242), 1,
      sym_function_name,
    STATE(279), 1,
      sym_object_name,
    STATE(318), 1,
      sym_variable,
    STATE(27), 7,
      sym_return_statement,
      sym_local_declaration,
      sym_assignment,
      sym_object_method_call,
      sym_pb_constructions,
      sym_function_call,
      aux_sym_code_block_repeat1,
  [1136] = 12,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(101), 1,
      anon_sym_ENDIF,
    ACTIONS(128), 1,
      sym_comment,
    ACTIONS(130), 1,
      anon_sym_return,
    ACTIONS(132), 1,
      anon_sym_IF,
    STATE(126), 1,
      sym_if_statment,
    STATE(136), 1,
      sym_local_variable,
    STATE(227), 1,
      sym_type,
    STATE(263), 1,
      sym_function_name,
    STATE(270), 1,
      sym_object_name,
    STATE(284), 1,
      sym_variable,
    STATE(29), 7,
      sym_return_statement,
      sym_local_declaration,
      sym_assignment,
      sym_object_method_call,
      sym_pb_constructions,
      sym_function_call,
      aux_sym_code_block_repeat1,
  [1179] = 12,
    ACTIONS(105), 1,
      anon_sym_ENDIF,
    ACTIONS(116), 1,
      sym_identifier,
    ACTIONS(134), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_return,
    ACTIONS(140), 1,
      anon_sym_IF,
    STATE(126), 1,
      sym_if_statment,
    STATE(136), 1,
      sym_local_variable,
    STATE(227), 1,
      sym_type,
    STATE(263), 1,
      sym_function_name,
    STATE(270), 1,
      sym_object_name,
    STATE(284), 1,
      sym_variable,
    STATE(29), 7,
      sym_return_statement,
      sym_local_declaration,
      sym_assignment,
      sym_object_method_call,
      sym_pb_constructions,
      sym_function_call,
      aux_sym_code_block_repeat1,
  [1222] = 12,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(130), 1,
      anon_sym_return,
    ACTIONS(132), 1,
      anon_sym_IF,
    ACTIONS(143), 1,
      sym_comment,
    STATE(126), 1,
      sym_if_statment,
    STATE(136), 1,
      sym_local_variable,
    STATE(227), 1,
      sym_type,
    STATE(263), 1,
      sym_function_name,
    STATE(270), 1,
      sym_object_name,
    STATE(284), 1,
      sym_variable,
    STATE(306), 1,
      sym_code_block,
    STATE(28), 7,
      sym_return_statement,
      sym_local_declaration,
      sym_assignment,
      sym_object_method_call,
      sym_pb_constructions,
      sym_function_call,
      aux_sym_code_block_repeat1,
  [1265] = 12,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_return,
    ACTIONS(69), 1,
      anon_sym_IF,
    ACTIONS(101), 1,
      sym_end_of_event,
    ACTIONS(145), 1,
      sym_comment,
    STATE(136), 1,
      sym_local_variable,
    STATE(138), 1,
      sym_if_statment,
    STATE(227), 1,
      sym_type,
    STATE(242), 1,
      sym_function_name,
    STATE(279), 1,
      sym_object_name,
    STATE(318), 1,
      sym_variable,
    STATE(27), 7,
      sym_return_statement,
      sym_local_declaration,
      sym_assignment,
      sym_object_method_call,
      sym_pb_constructions,
      sym_function_call,
      aux_sym_code_block_repeat1,
  [1308] = 12,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(130), 1,
      anon_sym_return,
    ACTIONS(132), 1,
      anon_sym_IF,
    ACTIONS(143), 1,
      sym_comment,
    STATE(126), 1,
      sym_if_statment,
    STATE(136), 1,
      sym_local_variable,
    STATE(227), 1,
      sym_type,
    STATE(263), 1,
      sym_function_name,
    STATE(270), 1,
      sym_object_name,
    STATE(284), 1,
      sym_variable,
    STATE(310), 1,
      sym_code_block,
    STATE(28), 7,
      sym_return_statement,
      sym_local_declaration,
      sym_assignment,
      sym_object_method_call,
      sym_pb_constructions,
      sym_function_call,
      aux_sym_code_block_repeat1,
  [1351] = 12,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(130), 1,
      anon_sym_return,
    ACTIONS(132), 1,
      anon_sym_IF,
    ACTIONS(143), 1,
      sym_comment,
    STATE(126), 1,
      sym_if_statment,
    STATE(136), 1,
      sym_local_variable,
    STATE(227), 1,
      sym_type,
    STATE(263), 1,
      sym_function_name,
    STATE(270), 1,
      sym_object_name,
    STATE(284), 1,
      sym_variable,
    STATE(302), 1,
      sym_code_block,
    STATE(28), 7,
      sym_return_statement,
      sym_local_declaration,
      sym_assignment,
      sym_object_method_call,
      sym_pb_constructions,
      sym_function_call,
      aux_sym_code_block_repeat1,
  [1394] = 10,
    ACTIONS(147), 1,
      ts_builtin_sym_end,
    ACTIONS(149), 1,
      anon_sym_event,
    STATE(7), 1,
      sym_event_prototype,
    STATE(95), 1,
      sym_function_implementations,
    STATE(268), 1,
      sym_visibility,
    STATE(289), 1,
      sym_event_implementations,
    STATE(303), 1,
      sym_function_prototype,
    STATE(55), 2,
      sym_function_implementation,
      aux_sym_function_implementations_repeat1,
    STATE(124), 2,
      sym_event_implementation,
      aux_sym_event_implementations_repeat1,
    ACTIONS(151), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [1429] = 10,
    ACTIONS(149), 1,
      anon_sym_event,
    ACTIONS(153), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      sym_event_prototype,
    STATE(73), 1,
      sym_function_implementations,
    STATE(268), 1,
      sym_visibility,
    STATE(303), 1,
      sym_function_prototype,
    STATE(315), 1,
      sym_event_implementations,
    STATE(55), 2,
      sym_function_implementation,
      aux_sym_function_implementations_repeat1,
    STATE(124), 2,
      sym_event_implementation,
      aux_sym_event_implementations_repeat1,
    ACTIONS(151), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [1464] = 4,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(159), 1,
      anon_sym_LPAREN,
    ACTIONS(161), 5,
      sym_integer,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      sym_identifier,
    ACTIONS(157), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_decimal,
      anon_sym_DQUOTE,
      anon_sym_STAR,
      anon_sym_PLUS,
  [1486] = 2,
    ACTIONS(165), 5,
      sym_integer,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      sym_identifier,
    ACTIONS(163), 7,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_decimal,
      anon_sym_DQUOTE,
      anon_sym_STAR,
      anon_sym_PLUS,
  [1503] = 2,
    ACTIONS(169), 5,
      sym_integer,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      sym_identifier,
    ACTIONS(167), 7,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_decimal,
      anon_sym_DQUOTE,
      anon_sym_STAR,
      anon_sym_PLUS,
  [1520] = 2,
    ACTIONS(173), 5,
      sym_integer,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      sym_identifier,
    ACTIONS(171), 7,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_decimal,
      anon_sym_DQUOTE,
      anon_sym_STAR,
      anon_sym_PLUS,
  [1537] = 2,
    ACTIONS(177), 5,
      sym_integer,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      sym_identifier,
    ACTIONS(175), 7,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_decimal,
      anon_sym_DQUOTE,
      anon_sym_STAR,
      anon_sym_PLUS,
  [1554] = 2,
    ACTIONS(181), 5,
      sym_integer,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      sym_identifier,
    ACTIONS(179), 7,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_decimal,
      anon_sym_DQUOTE,
      anon_sym_STAR,
      anon_sym_PLUS,
  [1571] = 2,
    ACTIONS(185), 5,
      sym_integer,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      sym_identifier,
    ACTIONS(183), 7,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_decimal,
      anon_sym_DQUOTE,
      anon_sym_STAR,
      anon_sym_PLUS,
  [1588] = 2,
    ACTIONS(189), 5,
      sym_integer,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      sym_identifier,
    ACTIONS(187), 7,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_decimal,
      anon_sym_DQUOTE,
      anon_sym_STAR,
      anon_sym_PLUS,
  [1605] = 4,
    ACTIONS(191), 1,
      anon_sym_COMMA,
    ACTIONS(197), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(193), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_decimal,
      anon_sym_DQUOTE,
    ACTIONS(195), 5,
      sym_integer,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      sym_identifier,
  [1626] = 2,
    ACTIONS(201), 5,
      sym_integer,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      sym_identifier,
    ACTIONS(199), 7,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_decimal,
      anon_sym_DQUOTE,
      anon_sym_STAR,
      anon_sym_PLUS,
  [1643] = 2,
    ACTIONS(205), 5,
      sym_integer,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      sym_identifier,
    ACTIONS(203), 7,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_decimal,
      anon_sym_DQUOTE,
      anon_sym_STAR,
      anon_sym_PLUS,
  [1660] = 5,
    STATE(268), 1,
      sym_visibility,
    STATE(303), 1,
      sym_function_prototype,
    ACTIONS(207), 2,
      ts_builtin_sym_end,
      anon_sym_event,
    STATE(47), 2,
      sym_function_implementation,
      aux_sym_function_implementations_repeat1,
    ACTIONS(209), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [1680] = 2,
    ACTIONS(18), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_decimal,
      anon_sym_DQUOTE,
    ACTIONS(212), 5,
      sym_integer,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      sym_identifier,
  [1694] = 6,
    ACTIONS(214), 1,
      sym_integer,
    ACTIONS(216), 1,
      sym_decimal,
    ACTIONS(220), 1,
      anon_sym_DQUOTE,
    STATE(195), 1,
      sym_value,
    STATE(208), 2,
      sym_boolean_literal,
      sym_string_literal,
    ACTIONS(218), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
  [1716] = 6,
    ACTIONS(93), 1,
      sym_integer,
    ACTIONS(95), 1,
      sym_decimal,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    STATE(175), 1,
      sym_value,
    STATE(68), 2,
      sym_boolean_literal,
      sym_string_literal,
    ACTIONS(222), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
  [1738] = 6,
    ACTIONS(214), 1,
      sym_integer,
    ACTIONS(216), 1,
      sym_decimal,
    ACTIONS(220), 1,
      anon_sym_DQUOTE,
    STATE(196), 1,
      sym_value,
    STATE(208), 2,
      sym_boolean_literal,
      sym_string_literal,
    ACTIONS(218), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
  [1760] = 6,
    ACTIONS(93), 1,
      sym_integer,
    ACTIONS(95), 1,
      sym_decimal,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    STATE(197), 1,
      sym_value,
    STATE(68), 2,
      sym_boolean_literal,
      sym_string_literal,
    ACTIONS(222), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
  [1782] = 6,
    ACTIONS(93), 1,
      sym_integer,
    ACTIONS(95), 1,
      sym_decimal,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    STATE(222), 1,
      sym_value,
    STATE(68), 2,
      sym_boolean_literal,
      sym_string_literal,
    ACTIONS(222), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
  [1804] = 6,
    ACTIONS(214), 1,
      sym_integer,
    ACTIONS(216), 1,
      sym_decimal,
    ACTIONS(220), 1,
      anon_sym_DQUOTE,
    STATE(145), 1,
      sym_value,
    STATE(208), 2,
      sym_boolean_literal,
      sym_string_literal,
    ACTIONS(218), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
  [1826] = 5,
    STATE(268), 1,
      sym_visibility,
    STATE(303), 1,
      sym_function_prototype,
    ACTIONS(224), 2,
      ts_builtin_sym_end,
      anon_sym_event,
    STATE(47), 2,
      sym_function_implementation,
      aux_sym_function_implementations_repeat1,
    ACTIONS(151), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [1846] = 6,
    ACTIONS(214), 1,
      sym_integer,
    ACTIONS(216), 1,
      sym_decimal,
    ACTIONS(220), 1,
      anon_sym_DQUOTE,
    STATE(152), 1,
      sym_value,
    STATE(208), 2,
      sym_boolean_literal,
      sym_string_literal,
    ACTIONS(218), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
  [1868] = 6,
    ACTIONS(93), 1,
      sym_integer,
    ACTIONS(95), 1,
      sym_decimal,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    STATE(187), 1,
      sym_value,
    STATE(68), 2,
      sym_boolean_literal,
      sym_string_literal,
    ACTIONS(222), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
  [1890] = 2,
    ACTIONS(185), 3,
      anon_sym_return,
      anon_sym_IF,
      sym_identifier,
    ACTIONS(183), 5,
      anon_sym_RPAREN,
      sym_end_of_event,
      sym_comment,
      anon_sym_STAR,
      anon_sym_PLUS,
  [1903] = 2,
    ACTIONS(205), 3,
      anon_sym_return,
      anon_sym_IF,
      sym_identifier,
    ACTIONS(203), 5,
      anon_sym_RPAREN,
      sym_end_of_event,
      sym_comment,
      anon_sym_STAR,
      anon_sym_PLUS,
  [1916] = 4,
    ACTIONS(226), 1,
      anon_sym_endprototypes,
    STATE(268), 1,
      sym_visibility,
    STATE(60), 2,
      sym_function_prototype,
      aux_sym_forward_prototypes_repeat1,
    ACTIONS(228), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [1932] = 4,
    ACTIONS(231), 1,
      anon_sym_endprototypes,
    STATE(268), 1,
      sym_visibility,
    STATE(62), 2,
      sym_function_prototype,
      aux_sym_forward_prototypes_repeat1,
    ACTIONS(151), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [1948] = 4,
    ACTIONS(233), 1,
      anon_sym_endprototypes,
    STATE(268), 1,
      sym_visibility,
    STATE(60), 2,
      sym_function_prototype,
      aux_sym_forward_prototypes_repeat1,
    ACTIONS(151), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [1964] = 5,
    ACTIONS(157), 1,
      sym_newline,
    ACTIONS(235), 1,
      anon_sym_DOT,
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    ACTIONS(239), 1,
      sym_identifier,
    ACTIONS(161), 3,
      anon_sym_LBRACK_RBRACK,
      anon_sym_EQ,
      anon_sym_COMMA,
  [1982] = 6,
    ACTIONS(241), 1,
      anon_sym_RPAREN,
    ACTIONS(243), 1,
      anon_sym_ref,
    ACTIONS(246), 1,
      sym_identifier,
    STATE(64), 1,
      aux_sym_function_parameters_repeat1,
    STATE(167), 1,
      sym_function_parameter,
    STATE(259), 1,
      sym_type,
  [2001] = 2,
    ACTIONS(249), 3,
      anon_sym_endfunction,
      anon_sym_endsubroutine,
      sym_comment,
    ACTIONS(251), 3,
      anon_sym_return,
      anon_sym_IF,
      sym_identifier,
  [2012] = 3,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(159), 1,
      anon_sym_LPAREN,
    ACTIONS(157), 4,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_THEN,
  [2025] = 6,
    ACTIONS(253), 1,
      anon_sym_RPAREN,
    ACTIONS(255), 1,
      anon_sym_ref,
    ACTIONS(257), 1,
      sym_identifier,
    STATE(64), 1,
      aux_sym_function_parameters_repeat1,
    STATE(167), 1,
      sym_function_parameter,
    STATE(259), 1,
      sym_type,
  [2044] = 2,
    ACTIONS(177), 1,
      sym_identifier,
    ACTIONS(175), 5,
      anon_sym_endvariables,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
  [2055] = 2,
    ACTIONS(181), 1,
      sym_identifier,
    ACTIONS(179), 5,
      anon_sym_endvariables,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
  [2066] = 5,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      aux_sym_string_literal_content_token1,
    ACTIONS(263), 1,
      aux_sym_string_literal_content_token2,
    ACTIONS(265), 1,
      sym_escape_sequence,
    STATE(94), 2,
      sym_string_literal_content,
      aux_sym_string_literal_repeat1,
  [2083] = 2,
    ACTIONS(267), 3,
      anon_sym_endfunction,
      anon_sym_endsubroutine,
      sym_comment,
    ACTIONS(269), 3,
      anon_sym_return,
      anon_sym_IF,
      sym_identifier,
  [2094] = 2,
    ACTIONS(271), 3,
      anon_sym_endfunction,
      anon_sym_endsubroutine,
      sym_comment,
    ACTIONS(273), 3,
      anon_sym_return,
      anon_sym_IF,
      sym_identifier,
  [2105] = 5,
    ACTIONS(149), 1,
      anon_sym_event,
    ACTIONS(275), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      sym_event_prototype,
    STATE(316), 1,
      sym_event_implementations,
    STATE(124), 2,
      sym_event_implementation,
      aux_sym_event_implementations_repeat1,
  [2122] = 2,
    ACTIONS(189), 1,
      sym_identifier,
    ACTIONS(187), 5,
      anon_sym_endvariables,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
  [2133] = 5,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(279), 1,
      aux_sym_string_literal_content_token1,
    ACTIONS(282), 1,
      aux_sym_string_literal_content_token2,
    ACTIONS(285), 1,
      sym_escape_sequence,
    STATE(75), 2,
      sym_string_literal_content,
      aux_sym_string_literal_repeat1,
  [2150] = 2,
    ACTIONS(288), 3,
      anon_sym_endfunction,
      anon_sym_endsubroutine,
      sym_comment,
    ACTIONS(290), 3,
      anon_sym_return,
      anon_sym_IF,
      sym_identifier,
  [2161] = 6,
    ACTIONS(292), 1,
      anon_sym_endtype,
    ACTIONS(294), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(296), 1,
      anon_sym_EQ,
    ACTIONS(298), 1,
      anon_sym_COMMA,
    ACTIONS(300), 1,
      sym_identifier,
    STATE(184), 1,
      aux_sym_class_variable_repeat1,
  [2180] = 6,
    ACTIONS(292), 1,
      anon_sym_endvariables,
    ACTIONS(300), 1,
      sym_identifier,
    ACTIONS(302), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(304), 1,
      anon_sym_EQ,
    ACTIONS(306), 1,
      anon_sym_COMMA,
    STATE(161), 1,
      aux_sym_class_variable_repeat1,
  [2199] = 2,
    ACTIONS(308), 3,
      anon_sym_endfunction,
      anon_sym_endsubroutine,
      sym_comment,
    ACTIONS(310), 3,
      anon_sym_return,
      anon_sym_IF,
      sym_identifier,
  [2210] = 2,
    ACTIONS(183), 3,
      anon_sym_endfunction,
      anon_sym_endsubroutine,
      sym_comment,
    ACTIONS(185), 3,
      anon_sym_return,
      anon_sym_IF,
      sym_identifier,
  [2221] = 5,
    ACTIONS(261), 1,
      aux_sym_string_literal_content_token1,
    ACTIONS(263), 1,
      aux_sym_string_literal_content_token2,
    ACTIONS(312), 1,
      anon_sym_DQUOTE,
    ACTIONS(314), 1,
      sym_escape_sequence,
    STATE(82), 2,
      sym_string_literal_content,
      aux_sym_string_literal_repeat1,
  [2238] = 5,
    ACTIONS(261), 1,
      aux_sym_string_literal_content_token1,
    ACTIONS(263), 1,
      aux_sym_string_literal_content_token2,
    ACTIONS(316), 1,
      anon_sym_DQUOTE,
    ACTIONS(318), 1,
      sym_escape_sequence,
    STATE(75), 2,
      sym_string_literal_content,
      aux_sym_string_literal_repeat1,
  [2255] = 2,
    ACTIONS(203), 3,
      anon_sym_endfunction,
      anon_sym_endsubroutine,
      sym_comment,
    ACTIONS(205), 3,
      anon_sym_return,
      anon_sym_IF,
      sym_identifier,
  [2266] = 5,
    ACTIONS(261), 1,
      aux_sym_string_literal_content_token1,
    ACTIONS(263), 1,
      aux_sym_string_literal_content_token2,
    ACTIONS(320), 1,
      anon_sym_DQUOTE,
    ACTIONS(322), 1,
      sym_escape_sequence,
    STATE(85), 2,
      sym_string_literal_content,
      aux_sym_string_literal_repeat1,
  [2283] = 5,
    ACTIONS(261), 1,
      aux_sym_string_literal_content_token1,
    ACTIONS(263), 1,
      aux_sym_string_literal_content_token2,
    ACTIONS(318), 1,
      sym_escape_sequence,
    ACTIONS(324), 1,
      anon_sym_DQUOTE,
    STATE(75), 2,
      sym_string_literal_content,
      aux_sym_string_literal_repeat1,
  [2300] = 5,
    ACTIONS(261), 1,
      aux_sym_string_literal_content_token1,
    ACTIONS(263), 1,
      aux_sym_string_literal_content_token2,
    ACTIONS(326), 1,
      anon_sym_DQUOTE,
    ACTIONS(328), 1,
      sym_escape_sequence,
    STATE(87), 2,
      sym_string_literal_content,
      aux_sym_string_literal_repeat1,
  [2317] = 5,
    ACTIONS(261), 1,
      aux_sym_string_literal_content_token1,
    ACTIONS(263), 1,
      aux_sym_string_literal_content_token2,
    ACTIONS(318), 1,
      sym_escape_sequence,
    ACTIONS(330), 1,
      anon_sym_DQUOTE,
    STATE(75), 2,
      sym_string_literal_content,
      aux_sym_string_literal_repeat1,
  [2334] = 5,
    ACTIONS(261), 1,
      aux_sym_string_literal_content_token1,
    ACTIONS(263), 1,
      aux_sym_string_literal_content_token2,
    ACTIONS(332), 1,
      anon_sym_DQUOTE,
    ACTIONS(334), 1,
      sym_escape_sequence,
    STATE(89), 2,
      sym_string_literal_content,
      aux_sym_string_literal_repeat1,
  [2351] = 5,
    ACTIONS(261), 1,
      aux_sym_string_literal_content_token1,
    ACTIONS(263), 1,
      aux_sym_string_literal_content_token2,
    ACTIONS(318), 1,
      sym_escape_sequence,
    ACTIONS(336), 1,
      anon_sym_DQUOTE,
    STATE(75), 2,
      sym_string_literal_content,
      aux_sym_string_literal_repeat1,
  [2368] = 6,
    ACTIONS(255), 1,
      anon_sym_ref,
    ACTIONS(257), 1,
      sym_identifier,
    ACTIONS(338), 1,
      anon_sym_RPAREN,
    STATE(67), 1,
      aux_sym_function_parameters_repeat1,
    STATE(167), 1,
      sym_function_parameter,
    STATE(259), 1,
      sym_type,
  [2387] = 2,
    ACTIONS(201), 1,
      sym_identifier,
    ACTIONS(199), 5,
      anon_sym_endvariables,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
  [2398] = 4,
    ACTIONS(157), 1,
      sym_newline,
    ACTIONS(235), 1,
      anon_sym_DOT,
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    ACTIONS(161), 3,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
  [2413] = 2,
    ACTIONS(340), 3,
      anon_sym_endfunction,
      anon_sym_endsubroutine,
      sym_comment,
    ACTIONS(342), 3,
      anon_sym_return,
      anon_sym_IF,
      sym_identifier,
  [2424] = 5,
    ACTIONS(261), 1,
      aux_sym_string_literal_content_token1,
    ACTIONS(263), 1,
      aux_sym_string_literal_content_token2,
    ACTIONS(318), 1,
      sym_escape_sequence,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
    STATE(75), 2,
      sym_string_literal_content,
      aux_sym_string_literal_repeat1,
  [2441] = 5,
    ACTIONS(149), 1,
      anon_sym_event,
    ACTIONS(153), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      sym_event_prototype,
    STATE(315), 1,
      sym_event_implementations,
    STATE(124), 2,
      sym_event_implementation,
      aux_sym_event_implementations_repeat1,
  [2458] = 4,
    ACTIONS(346), 1,
      sym_identifier,
    STATE(228), 1,
      sym_type,
    STATE(280), 1,
      sym_class_properties,
    STATE(103), 2,
      sym_class_variable,
      aux_sym_class_properties_repeat1,
  [2472] = 1,
    ACTIONS(348), 5,
      ts_builtin_sym_end,
      anon_sym_event,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [2480] = 2,
    ACTIONS(340), 2,
      sym_end_of_event,
      sym_comment,
    ACTIONS(342), 3,
      anon_sym_return,
      anon_sym_IF,
      sym_identifier,
  [2490] = 2,
    ACTIONS(271), 2,
      sym_end_of_event,
      sym_comment,
    ACTIONS(273), 3,
      anon_sym_return,
      anon_sym_IF,
      sym_identifier,
  [2500] = 5,
    ACTIONS(350), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(352), 1,
      anon_sym_EQ,
    ACTIONS(354), 1,
      anon_sym_COMMA,
    ACTIONS(356), 1,
      sym_newline,
    STATE(192), 1,
      aux_sym_variable_repeat1,
  [2516] = 4,
    ACTIONS(358), 1,
      sym_identifier,
    STATE(242), 1,
      sym_function_name,
    STATE(279), 1,
      sym_object_name,
    STATE(59), 2,
      sym_object_method_call,
      sym_function_call,
  [2530] = 1,
    ACTIONS(360), 5,
      anon_sym_endprototypes,
      anon_sym_SEMI,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [2538] = 4,
    ACTIONS(257), 1,
      sym_identifier,
    ACTIONS(362), 1,
      anon_sym_endvariables,
    STATE(228), 1,
      sym_type,
    STATE(112), 2,
      sym_class_variable,
      aux_sym_class_properties_repeat1,
  [2552] = 2,
    ACTIONS(364), 2,
      sym_end_of_event,
      sym_comment,
    ACTIONS(366), 3,
      anon_sym_return,
      anon_sym_IF,
      sym_identifier,
  [2562] = 1,
    ACTIONS(368), 5,
      ts_builtin_sym_end,
      anon_sym_event,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [2570] = 2,
    ACTIONS(308), 2,
      sym_end_of_event,
      sym_comment,
    ACTIONS(310), 3,
      anon_sym_return,
      anon_sym_IF,
      sym_identifier,
  [2580] = 4,
    ACTIONS(354), 1,
      anon_sym_COMMA,
    ACTIONS(372), 1,
      sym_newline,
    STATE(213), 1,
      aux_sym_variable_repeat1,
    ACTIONS(370), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
  [2594] = 4,
    ACTIONS(346), 1,
      sym_identifier,
    STATE(240), 1,
      sym_type,
    STATE(276), 1,
      sym_class_properties,
    STATE(118), 2,
      sym_class_variable,
      aux_sym_class_properties_repeat1,
  [2608] = 2,
    ACTIONS(161), 1,
      sym_identifier,
    ACTIONS(157), 4,
      anon_sym_endvariables,
      anon_sym_LBRACK_RBRACK,
      anon_sym_EQ,
      anon_sym_COMMA,
  [2618] = 1,
    ACTIONS(374), 5,
      anon_sym_endprototypes,
      anon_sym_SEMI,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [2626] = 1,
    ACTIONS(376), 5,
      anon_sym_endprototypes,
      anon_sym_SEMI,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [2634] = 4,
    ACTIONS(378), 1,
      anon_sym_endvariables,
    ACTIONS(380), 1,
      sym_identifier,
    STATE(228), 1,
      sym_type,
    STATE(112), 2,
      sym_class_variable,
      aux_sym_class_properties_repeat1,
  [2648] = 2,
    ACTIONS(249), 2,
      sym_end_of_event,
      sym_comment,
    ACTIONS(251), 3,
      anon_sym_return,
      anon_sym_IF,
      sym_identifier,
  [2658] = 4,
    ACTIONS(354), 1,
      anon_sym_COMMA,
    ACTIONS(383), 1,
      sym_newline,
    STATE(225), 1,
      aux_sym_variable_repeat1,
    ACTIONS(370), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
  [2672] = 1,
    ACTIONS(385), 5,
      ts_builtin_sym_end,
      anon_sym_event,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [2680] = 4,
    ACTIONS(354), 1,
      anon_sym_COMMA,
    ACTIONS(387), 1,
      sym_newline,
    STATE(205), 1,
      aux_sym_variable_repeat1,
    ACTIONS(370), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
  [2694] = 2,
    ACTIONS(267), 2,
      sym_end_of_event,
      sym_comment,
    ACTIONS(269), 3,
      anon_sym_return,
      anon_sym_IF,
      sym_identifier,
  [2704] = 4,
    ACTIONS(257), 1,
      sym_identifier,
    ACTIONS(362), 1,
      anon_sym_endtype,
    STATE(240), 1,
      sym_type,
    STATE(144), 2,
      sym_class_variable,
      aux_sym_class_properties_repeat1,
  [2718] = 2,
    ACTIONS(161), 1,
      sym_identifier,
    ACTIONS(157), 4,
      anon_sym_endtype,
      anon_sym_LBRACK_RBRACK,
      anon_sym_EQ,
      anon_sym_COMMA,
  [2728] = 1,
    ACTIONS(389), 5,
      ts_builtin_sym_end,
      anon_sym_event,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [2736] = 5,
    ACTIONS(298), 1,
      anon_sym_COMMA,
    ACTIONS(391), 1,
      anon_sym_endtype,
    ACTIONS(393), 1,
      anon_sym_EQ,
    ACTIONS(395), 1,
      sym_identifier,
    STATE(185), 1,
      aux_sym_class_variable_repeat1,
  [2752] = 4,
    ACTIONS(399), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(401), 1,
      anon_sym_EQ,
    ACTIONS(403), 1,
      sym_identifier,
    ACTIONS(397), 2,
      anon_sym_endvariables,
      anon_sym_COMMA,
  [2766] = 4,
    ACTIONS(403), 1,
      sym_identifier,
    ACTIONS(405), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(407), 1,
      anon_sym_EQ,
    ACTIONS(397), 2,
      anon_sym_endtype,
      anon_sym_COMMA,
  [2780] = 4,
    ACTIONS(149), 1,
      anon_sym_event,
    ACTIONS(409), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      sym_event_prototype,
    STATE(140), 2,
      sym_event_implementation,
      aux_sym_event_implementations_repeat1,
  [2794] = 5,
    ACTIONS(306), 1,
      anon_sym_COMMA,
    ACTIONS(391), 1,
      anon_sym_endvariables,
    ACTIONS(395), 1,
      sym_identifier,
    ACTIONS(411), 1,
      anon_sym_EQ,
    STATE(186), 1,
      aux_sym_class_variable_repeat1,
  [2810] = 2,
    ACTIONS(288), 2,
      sym_comment,
      anon_sym_ENDIF,
    ACTIONS(290), 3,
      anon_sym_return,
      anon_sym_IF,
      sym_identifier,
  [2820] = 2,
    ACTIONS(340), 2,
      sym_comment,
      anon_sym_ENDIF,
    ACTIONS(342), 3,
      anon_sym_return,
      anon_sym_IF,
      sym_identifier,
  [2830] = 2,
    ACTIONS(271), 2,
      sym_comment,
      anon_sym_ENDIF,
    ACTIONS(273), 3,
      anon_sym_return,
      anon_sym_IF,
      sym_identifier,
  [2840] = 1,
    ACTIONS(413), 5,
      ts_builtin_sym_end,
      anon_sym_event,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [2848] = 2,
    ACTIONS(308), 2,
      sym_comment,
      anon_sym_ENDIF,
    ACTIONS(310), 3,
      anon_sym_return,
      anon_sym_IF,
      sym_identifier,
  [2858] = 2,
    ACTIONS(249), 2,
      sym_comment,
      anon_sym_ENDIF,
    ACTIONS(251), 3,
      anon_sym_return,
      anon_sym_IF,
      sym_identifier,
  [2868] = 2,
    ACTIONS(267), 2,
      sym_comment,
      anon_sym_ENDIF,
    ACTIONS(269), 3,
      anon_sym_return,
      anon_sym_IF,
      sym_identifier,
  [2878] = 5,
    ACTIONS(415), 1,
      anon_sym_typevariables,
    ACTIONS(417), 1,
      sym_identifier,
    STATE(236), 1,
      sym_class_variables,
    STATE(264), 1,
      sym_global_class_dummy,
    STATE(317), 1,
      sym_dummy_keyword,
  [2894] = 2,
    ACTIONS(183), 2,
      sym_comment,
      anon_sym_ENDIF,
    ACTIONS(185), 3,
      anon_sym_return,
      anon_sym_IF,
      sym_identifier,
  [2904] = 2,
    ACTIONS(203), 2,
      sym_comment,
      anon_sym_ENDIF,
    ACTIONS(205), 3,
      anon_sym_return,
      anon_sym_IF,
      sym_identifier,
  [2914] = 5,
    ACTIONS(354), 1,
      anon_sym_COMMA,
    ACTIONS(419), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(421), 1,
      anon_sym_EQ,
    ACTIONS(423), 1,
      sym_newline,
    STATE(189), 1,
      aux_sym_variable_repeat1,
  [2930] = 4,
    ACTIONS(358), 1,
      sym_identifier,
    STATE(258), 1,
      sym_function_name,
    STATE(304), 1,
      sym_object_name,
    STATE(83), 2,
      sym_object_method_call,
      sym_function_call,
  [2944] = 2,
    ACTIONS(288), 2,
      sym_end_of_event,
      sym_comment,
    ACTIONS(290), 3,
      anon_sym_return,
      anon_sym_IF,
      sym_identifier,
  [2954] = 4,
    ACTIONS(358), 1,
      sym_identifier,
    STATE(260), 1,
      sym_function_name,
    STATE(308), 1,
      sym_object_name,
    STATE(170), 2,
      sym_object_method_call,
      sym_function_call,
  [2968] = 4,
    ACTIONS(425), 1,
      ts_builtin_sym_end,
    ACTIONS(427), 1,
      anon_sym_event,
    STATE(7), 1,
      sym_event_prototype,
    STATE(140), 2,
      sym_event_implementation,
      aux_sym_event_implementations_repeat1,
  [2982] = 4,
    ACTIONS(358), 1,
      sym_identifier,
    STATE(261), 1,
      sym_function_name,
    STATE(312), 1,
      sym_object_name,
    STATE(207), 2,
      sym_object_method_call,
      sym_function_call,
  [2996] = 4,
    ACTIONS(358), 1,
      sym_identifier,
    STATE(262), 1,
      sym_function_name,
    STATE(314), 1,
      sym_object_name,
    STATE(46), 2,
      sym_object_method_call,
      sym_function_call,
  [3010] = 4,
    ACTIONS(358), 1,
      sym_identifier,
    STATE(263), 1,
      sym_function_name,
    STATE(270), 1,
      sym_object_name,
    STATE(135), 2,
      sym_object_method_call,
      sym_function_call,
  [3024] = 4,
    ACTIONS(378), 1,
      anon_sym_endtype,
    ACTIONS(380), 1,
      sym_identifier,
    STATE(240), 1,
      sym_type,
    STATE(144), 2,
      sym_class_variable,
      aux_sym_class_properties_repeat1,
  [3038] = 4,
    ACTIONS(298), 1,
      anon_sym_COMMA,
    ACTIONS(430), 1,
      anon_sym_endtype,
    ACTIONS(432), 1,
      sym_identifier,
    STATE(154), 1,
      aux_sym_class_variable_repeat1,
  [3051] = 2,
    ACTIONS(179), 1,
      sym_newline,
    ACTIONS(181), 3,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
  [3060] = 2,
    ACTIONS(436), 1,
      aux_sym_string_literal_content_token1,
    ACTIONS(434), 3,
      anon_sym_DQUOTE,
      aux_sym_string_literal_content_token2,
      sym_escape_sequence,
  [3069] = 4,
    ACTIONS(306), 1,
      anon_sym_COMMA,
    ACTIONS(438), 1,
      anon_sym_endvariables,
    ACTIONS(440), 1,
      sym_identifier,
    STATE(168), 1,
      aux_sym_class_variable_repeat1,
  [3082] = 4,
    ACTIONS(442), 1,
      anon_sym_endtype,
    ACTIONS(444), 1,
      anon_sym_COMMA,
    ACTIONS(447), 1,
      sym_identifier,
    STATE(149), 1,
      aux_sym_class_variable_repeat1,
  [3095] = 1,
    ACTIONS(163), 4,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_THEN,
  [3102] = 3,
    ACTIONS(451), 1,
      anon_sym_EQ,
    ACTIONS(453), 1,
      sym_identifier,
    ACTIONS(449), 2,
      anon_sym_endvariables,
      anon_sym_COMMA,
  [3113] = 4,
    ACTIONS(298), 1,
      anon_sym_COMMA,
    ACTIONS(455), 1,
      anon_sym_endtype,
    ACTIONS(457), 1,
      sym_identifier,
    STATE(157), 1,
      aux_sym_class_variable_repeat1,
  [3126] = 2,
    ACTIONS(199), 1,
      sym_newline,
    ACTIONS(201), 3,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
  [3135] = 4,
    ACTIONS(298), 1,
      anon_sym_COMMA,
    ACTIONS(438), 1,
      anon_sym_endtype,
    ACTIONS(440), 1,
      sym_identifier,
    STATE(149), 1,
      aux_sym_class_variable_repeat1,
  [3148] = 3,
    ACTIONS(453), 1,
      sym_identifier,
    ACTIONS(459), 1,
      anon_sym_EQ,
    ACTIONS(449), 2,
      anon_sym_endtype,
      anon_sym_COMMA,
  [3159] = 2,
    ACTIONS(461), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(463), 2,
      anon_sym_ref,
      sym_identifier,
  [3168] = 4,
    ACTIONS(298), 1,
      anon_sym_COMMA,
    ACTIONS(465), 1,
      anon_sym_endtype,
    ACTIONS(467), 1,
      sym_identifier,
    STATE(149), 1,
      aux_sym_class_variable_repeat1,
  [3181] = 2,
    ACTIONS(187), 1,
      sym_newline,
    ACTIONS(189), 3,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
  [3190] = 1,
    ACTIONS(167), 4,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_THEN,
  [3197] = 1,
    ACTIONS(171), 4,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_THEN,
  [3204] = 4,
    ACTIONS(306), 1,
      anon_sym_COMMA,
    ACTIONS(469), 1,
      anon_sym_endvariables,
    ACTIONS(471), 1,
      sym_identifier,
    STATE(168), 1,
      aux_sym_class_variable_repeat1,
  [3217] = 2,
    ACTIONS(157), 1,
      sym_newline,
    ACTIONS(161), 3,
      anon_sym_LBRACK_RBRACK,
      anon_sym_EQ,
      anon_sym_COMMA,
  [3226] = 4,
    ACTIONS(352), 1,
      anon_sym_EQ,
    ACTIONS(354), 1,
      anon_sym_COMMA,
    ACTIONS(356), 1,
      sym_newline,
    STATE(193), 1,
      aux_sym_variable_repeat1,
  [3239] = 2,
    ACTIONS(167), 1,
      sym_newline,
    ACTIONS(169), 3,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
  [3248] = 2,
    ACTIONS(175), 1,
      sym_newline,
    ACTIONS(177), 3,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
  [3257] = 2,
    ACTIONS(171), 1,
      sym_newline,
    ACTIONS(173), 3,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
  [3266] = 3,
    ACTIONS(473), 1,
      anon_sym_COMMA,
    ACTIONS(475), 1,
      anon_sym_RPAREN,
    ACTIONS(477), 2,
      anon_sym_ref,
      sym_identifier,
  [3277] = 4,
    ACTIONS(442), 1,
      anon_sym_endvariables,
    ACTIONS(447), 1,
      sym_identifier,
    ACTIONS(479), 1,
      anon_sym_COMMA,
    STATE(168), 1,
      aux_sym_class_variable_repeat1,
  [3290] = 2,
    ACTIONS(183), 1,
      sym_newline,
    ACTIONS(185), 3,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
  [3299] = 2,
    ACTIONS(203), 1,
      sym_newline,
    ACTIONS(205), 3,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
  [3308] = 3,
    ACTIONS(482), 1,
      anon_sym_endforward,
    ACTIONS(484), 1,
      anon_sym_type,
    STATE(171), 2,
      sym_forward_type,
      aux_sym_forward_types_repeat1,
  [3319] = 2,
    ACTIONS(163), 1,
      sym_newline,
    ACTIONS(165), 3,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
  [3328] = 2,
    ACTIONS(157), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(161), 2,
      anon_sym_ref,
      sym_identifier,
  [3337] = 2,
    ACTIONS(487), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(489), 2,
      anon_sym_ref,
      sym_identifier,
  [3346] = 4,
    ACTIONS(306), 1,
      anon_sym_COMMA,
    ACTIONS(455), 1,
      anon_sym_endvariables,
    ACTIONS(457), 1,
      sym_identifier,
    STATE(183), 1,
      aux_sym_class_variable_repeat1,
  [3359] = 3,
    ACTIONS(491), 1,
      anon_sym_COMMA,
    ACTIONS(493), 1,
      sym_newline,
    ACTIONS(370), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
  [3370] = 3,
    ACTIONS(495), 1,
      anon_sym_COMMA,
    ACTIONS(497), 1,
      sym_newline,
    ACTIONS(370), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
  [3381] = 4,
    ACTIONS(354), 1,
      anon_sym_COMMA,
    ACTIONS(372), 1,
      sym_newline,
    ACTIONS(499), 1,
      anon_sym_EQ,
    STATE(212), 1,
      aux_sym_variable_repeat1,
  [3394] = 2,
    ACTIONS(436), 1,
      aux_sym_string_literal_content_token1,
    ACTIONS(434), 3,
      anon_sym_DQUOTE,
      aux_sym_string_literal_content_token2,
      sym_escape_sequence,
  [3403] = 3,
    ACTIONS(501), 1,
      anon_sym_endforward,
    ACTIONS(503), 1,
      anon_sym_type,
    STATE(171), 2,
      sym_forward_type,
      aux_sym_forward_types_repeat1,
  [3414] = 4,
    ACTIONS(505), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(507), 1,
      anon_sym_EQ,
    ACTIONS(509), 1,
      anon_sym_COMMA,
    ACTIONS(511), 1,
      sym_newline,
  [3427] = 1,
    ACTIONS(513), 4,
      anon_sym_DOT,
      anon_sym_from,
      anon_sym_endtype,
      anon_sym_within,
  [3434] = 4,
    ACTIONS(306), 1,
      anon_sym_COMMA,
    ACTIONS(465), 1,
      anon_sym_endvariables,
    ACTIONS(467), 1,
      sym_identifier,
    STATE(168), 1,
      aux_sym_class_variable_repeat1,
  [3447] = 4,
    ACTIONS(298), 1,
      anon_sym_COMMA,
    ACTIONS(469), 1,
      anon_sym_endtype,
    ACTIONS(471), 1,
      sym_identifier,
    STATE(149), 1,
      aux_sym_class_variable_repeat1,
  [3460] = 4,
    ACTIONS(298), 1,
      anon_sym_COMMA,
    ACTIONS(515), 1,
      anon_sym_endtype,
    ACTIONS(517), 1,
      sym_identifier,
    STATE(149), 1,
      aux_sym_class_variable_repeat1,
  [3473] = 4,
    ACTIONS(306), 1,
      anon_sym_COMMA,
    ACTIONS(515), 1,
      anon_sym_endvariables,
    ACTIONS(517), 1,
      sym_identifier,
    STATE(168), 1,
      aux_sym_class_variable_repeat1,
  [3486] = 4,
    ACTIONS(306), 1,
      anon_sym_COMMA,
    ACTIONS(430), 1,
      anon_sym_endvariables,
    ACTIONS(432), 1,
      sym_identifier,
    STATE(148), 1,
      aux_sym_class_variable_repeat1,
  [3499] = 3,
    ACTIONS(503), 1,
      anon_sym_type,
    ACTIONS(519), 1,
      anon_sym_endforward,
    STATE(180), 2,
      sym_forward_type,
      aux_sym_forward_types_repeat1,
  [3510] = 3,
    ACTIONS(354), 1,
      anon_sym_COMMA,
    ACTIONS(521), 1,
      sym_newline,
    STATE(194), 1,
      aux_sym_variable_repeat1,
  [3520] = 2,
    ACTIONS(523), 1,
      anon_sym_RPAREN,
    ACTIONS(525), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
  [3528] = 2,
    ACTIONS(527), 1,
      sym_newline,
    ACTIONS(370), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
  [3536] = 3,
    ACTIONS(354), 1,
      anon_sym_COMMA,
    ACTIONS(529), 1,
      sym_newline,
    STATE(194), 1,
      aux_sym_variable_repeat1,
  [3546] = 3,
    ACTIONS(354), 1,
      anon_sym_COMMA,
    ACTIONS(529), 1,
      sym_newline,
    STATE(194), 1,
      aux_sym_variable_repeat1,
  [3556] = 3,
    ACTIONS(531), 1,
      anon_sym_COMMA,
    ACTIONS(534), 1,
      sym_newline,
    STATE(194), 1,
      aux_sym_variable_repeat1,
  [3566] = 2,
    ACTIONS(538), 1,
      sym_identifier,
    ACTIONS(536), 2,
      anon_sym_endtype,
      anon_sym_COMMA,
  [3574] = 2,
    ACTIONS(542), 1,
      sym_identifier,
    ACTIONS(540), 2,
      anon_sym_endtype,
      anon_sym_COMMA,
  [3582] = 2,
    ACTIONS(538), 1,
      sym_identifier,
    ACTIONS(536), 2,
      anon_sym_endvariables,
      anon_sym_COMMA,
  [3590] = 1,
    ACTIONS(175), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_THEN,
  [3596] = 1,
    ACTIONS(179), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_THEN,
  [3602] = 2,
    ACTIONS(544), 1,
      sym_newline,
    ACTIONS(370), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
  [3610] = 2,
    ACTIONS(241), 1,
      anon_sym_RPAREN,
    ACTIONS(546), 2,
      anon_sym_ref,
      sym_identifier,
  [3618] = 1,
    ACTIONS(199), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_THEN,
  [3624] = 2,
    ACTIONS(550), 1,
      anon_sym_THEN,
    ACTIONS(548), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
  [3632] = 1,
    ACTIONS(187), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_THEN,
  [3638] = 3,
    ACTIONS(354), 1,
      anon_sym_COMMA,
    ACTIONS(552), 1,
      sym_newline,
    STATE(194), 1,
      aux_sym_variable_repeat1,
  [3648] = 1,
    ACTIONS(183), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_THEN,
  [3654] = 1,
    ACTIONS(203), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_THEN,
  [3660] = 2,
    ACTIONS(177), 1,
      sym_identifier,
    ACTIONS(175), 2,
      anon_sym_endtype,
      anon_sym_COMMA,
  [3668] = 2,
    ACTIONS(181), 1,
      sym_identifier,
    ACTIONS(179), 2,
      anon_sym_endtype,
      anon_sym_COMMA,
  [3676] = 2,
    ACTIONS(201), 1,
      sym_identifier,
    ACTIONS(199), 2,
      anon_sym_endtype,
      anon_sym_COMMA,
  [3684] = 2,
    ACTIONS(189), 1,
      sym_identifier,
    ACTIONS(187), 2,
      anon_sym_endtype,
      anon_sym_COMMA,
  [3692] = 3,
    ACTIONS(354), 1,
      anon_sym_COMMA,
    ACTIONS(554), 1,
      sym_newline,
    STATE(194), 1,
      aux_sym_variable_repeat1,
  [3702] = 3,
    ACTIONS(354), 1,
      anon_sym_COMMA,
    ACTIONS(554), 1,
      sym_newline,
    STATE(194), 1,
      aux_sym_variable_repeat1,
  [3712] = 2,
    ACTIONS(556), 1,
      sym_newline,
    ACTIONS(370), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
  [3720] = 3,
    ACTIONS(558), 1,
      anon_sym_EQ,
    ACTIONS(560), 1,
      anon_sym_COMMA,
    ACTIONS(562), 1,
      sym_newline,
  [3730] = 2,
    ACTIONS(564), 1,
      anon_sym_RPAREN,
    ACTIONS(525), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
  [3738] = 2,
    ACTIONS(566), 1,
      sym_newline,
    ACTIONS(370), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
  [3746] = 2,
    STATE(105), 1,
      sym_end_of_function,
    ACTIONS(5), 2,
      anon_sym_endfunction,
      anon_sym_endsubroutine,
  [3754] = 2,
    ACTIONS(568), 1,
      sym_newline,
    ACTIONS(370), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
  [3762] = 2,
    ACTIONS(570), 1,
      anon_sym_RPAREN,
    ACTIONS(525), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
  [3770] = 2,
    ACTIONS(572), 1,
      sym_newline,
    ACTIONS(370), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
  [3778] = 2,
    ACTIONS(542), 1,
      sym_identifier,
    ACTIONS(540), 2,
      anon_sym_endvariables,
      anon_sym_COMMA,
  [3786] = 2,
    ACTIONS(574), 1,
      anon_sym_THEN,
    ACTIONS(548), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
  [3794] = 2,
    ACTIONS(576), 1,
      anon_sym_THEN,
    ACTIONS(548), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
  [3802] = 3,
    ACTIONS(354), 1,
      anon_sym_COMMA,
    ACTIONS(578), 1,
      sym_newline,
    STATE(194), 1,
      aux_sym_variable_repeat1,
  [3812] = 3,
    ACTIONS(580), 1,
      anon_sym_LPAREN,
    STATE(290), 1,
      sym_function_parameters,
    STATE(323), 1,
      sym_event_parameters,
  [3822] = 2,
    ACTIONS(582), 1,
      sym_identifier,
    STATE(100), 1,
      sym_local_variable,
  [3829] = 2,
    ACTIONS(584), 1,
      sym_identifier,
    STATE(78), 1,
      sym_local_variable,
  [3836] = 1,
    ACTIONS(586), 2,
      ts_builtin_sym_end,
      anon_sym_event,
  [3841] = 1,
    ACTIONS(588), 2,
      anon_sym_endforward,
      anon_sym_type,
  [3846] = 2,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(159), 1,
      anon_sym_LPAREN,
  [3853] = 2,
    ACTIONS(590), 1,
      sym_identifier,
    STATE(297), 1,
      sym_class_name,
  [3860] = 2,
    ACTIONS(590), 1,
      sym_identifier,
    STATE(274), 1,
      sym_class_name,
  [3867] = 1,
    ACTIONS(592), 2,
      anon_sym_endforward,
      anon_sym_type,
  [3872] = 2,
    ACTIONS(590), 1,
      sym_identifier,
    STATE(299), 1,
      sym_class_name,
  [3879] = 2,
    ACTIONS(594), 1,
      anon_sym_forwardprototypes,
    STATE(34), 1,
      sym_forward_prototypes,
  [3886] = 2,
    ACTIONS(596), 1,
      sym_identifier,
    STATE(226), 1,
      sym_event_name,
  [3893] = 2,
    ACTIONS(584), 1,
      sym_identifier,
    STATE(122), 1,
      sym_local_variable,
  [3900] = 2,
    ACTIONS(580), 1,
      anon_sym_LPAREN,
    STATE(110), 1,
      sym_function_parameters,
  [3907] = 2,
    ACTIONS(598), 1,
      sym_identifier,
    STATE(77), 1,
      sym_local_variable,
  [3914] = 1,
    ACTIONS(600), 2,
      anon_sym_endfunction,
      anon_sym_endsubroutine,
  [3919] = 2,
    ACTIONS(602), 1,
      anon_sym_LPAREN,
    STATE(283), 1,
      sym_function_call_parameters,
  [3926] = 2,
    ACTIONS(590), 1,
      sym_identifier,
    STATE(324), 1,
      sym_class_name,
  [3933] = 2,
    ACTIONS(594), 1,
      anon_sym_forwardprototypes,
    STATE(35), 1,
      sym_forward_prototypes,
  [3940] = 2,
    ACTIONS(582), 1,
      sym_identifier,
    STATE(181), 1,
      sym_local_variable,
  [3947] = 2,
    ACTIONS(604), 1,
      sym_identifier,
    STATE(174), 1,
      sym_local_variable,
  [3954] = 2,
    ACTIONS(606), 1,
      sym_identifier,
    STATE(239), 1,
      sym_function_name,
  [3961] = 2,
    ACTIONS(346), 1,
      sym_identifier,
    STATE(247), 1,
      sym_type,
  [3968] = 1,
    ACTIONS(608), 2,
      ts_builtin_sym_end,
      anon_sym_event,
  [3973] = 1,
    ACTIONS(610), 2,
      anon_sym_function,
      anon_sym_subroutine,
  [3978] = 2,
    ACTIONS(612), 1,
      anon_sym_forward,
    STATE(267), 1,
      sym_forward_types,
  [3985] = 2,
    ACTIONS(614), 1,
      anon_sym_globaltype,
    STATE(188), 1,
      sym_class_inherit_from,
  [3992] = 2,
    ACTIONS(590), 1,
      sym_identifier,
    STATE(293), 1,
      sym_class_name,
  [3999] = 2,
    ACTIONS(590), 1,
      sym_identifier,
    STATE(291), 1,
      sym_class_name,
  [4006] = 2,
    ACTIONS(616), 1,
      anon_sym_typevariables,
    ACTIONS(618), 1,
      sym_identifier,
  [4013] = 2,
    ACTIONS(346), 1,
      sym_identifier,
    STATE(246), 1,
      sym_type,
  [4020] = 2,
    ACTIONS(590), 1,
      sym_identifier,
    STATE(281), 1,
      sym_class_name,
  [4027] = 2,
    ACTIONS(602), 1,
      anon_sym_LPAREN,
    STATE(277), 1,
      sym_function_call_parameters,
  [4034] = 2,
    ACTIONS(604), 1,
      sym_identifier,
    STATE(156), 1,
      sym_local_variable,
  [4041] = 2,
    ACTIONS(602), 1,
      anon_sym_LPAREN,
    STATE(287), 1,
      sym_function_call_parameters,
  [4048] = 2,
    ACTIONS(602), 1,
      anon_sym_LPAREN,
    STATE(325), 1,
      sym_function_call_parameters,
  [4055] = 2,
    ACTIONS(602), 1,
      anon_sym_LPAREN,
    STATE(298), 1,
      sym_function_call_parameters,
  [4062] = 2,
    ACTIONS(602), 1,
      anon_sym_LPAREN,
    STATE(301), 1,
      sym_function_call_parameters,
  [4069] = 2,
    ACTIONS(415), 1,
      anon_sym_typevariables,
    STATE(244), 1,
      sym_class_variables,
  [4076] = 2,
    ACTIONS(598), 1,
      sym_identifier,
    STATE(123), 1,
      sym_local_variable,
  [4083] = 2,
    ACTIONS(620), 1,
      sym_identifier,
    STATE(108), 1,
      sym_class_name,
  [4090] = 2,
    ACTIONS(622), 1,
      anon_sym_globaltype,
    STATE(133), 1,
      sym_global_class_properties,
  [4097] = 1,
    ACTIONS(624), 2,
      anon_sym_function,
      anon_sym_subroutine,
  [4102] = 2,
    ACTIONS(626), 1,
      sym_identifier,
    STATE(251), 1,
      sym_class_type,
  [4109] = 1,
    ACTIONS(628), 1,
      anon_sym_DOT,
  [4113] = 1,
    ACTIONS(630), 1,
      anon_sym_globaltype,
  [4117] = 1,
    ACTIONS(632), 1,
      sym_end_of_event,
  [4121] = 1,
    ACTIONS(634), 1,
      sym_newline,
  [4125] = 1,
    ACTIONS(636), 1,
      anon_sym_within,
  [4129] = 1,
    ACTIONS(638), 1,
      sym_end_of_event,
  [4133] = 1,
    ACTIONS(640), 1,
      anon_sym_endtype,
  [4137] = 1,
    ACTIONS(642), 1,
      sym_newline,
  [4141] = 1,
    ACTIONS(644), 1,
      sym_newline,
  [4145] = 1,
    ACTIONS(646), 1,
      anon_sym_DOT,
  [4149] = 1,
    ACTIONS(648), 1,
      anon_sym_endvariables,
  [4153] = 1,
    ACTIONS(650), 1,
      anon_sym_DOT,
  [4157] = 1,
    ACTIONS(652), 1,
      sym_newline,
  [4161] = 1,
    ACTIONS(654), 1,
      sym_newline,
  [4165] = 1,
    ACTIONS(656), 1,
      sym_newline,
  [4169] = 1,
    ACTIONS(658), 1,
      sym_newline,
  [4173] = 1,
    ACTIONS(660), 1,
      anon_sym_LPAREN,
  [4177] = 1,
    ACTIONS(662), 1,
      sym_newline,
  [4181] = 1,
    ACTIONS(664), 1,
      sym_newline,
  [4185] = 1,
    ACTIONS(153), 1,
      ts_builtin_sym_end,
  [4189] = 1,
    ACTIONS(666), 1,
      anon_sym_SEMI,
  [4193] = 1,
    ACTIONS(668), 1,
      anon_sym_endtype,
  [4197] = 1,
    ACTIONS(670), 1,
      sym_newline,
  [4201] = 1,
    ACTIONS(672), 1,
      anon_sym_from,
  [4205] = 1,
    ACTIONS(513), 1,
      sym_identifier,
  [4209] = 1,
    ACTIONS(159), 1,
      anon_sym_LPAREN,
  [4213] = 1,
    ACTIONS(674), 1,
      anon_sym_typevariables,
  [4217] = 1,
    ACTIONS(676), 1,
      anon_sym_from,
  [4221] = 1,
    ACTIONS(678), 1,
      sym_newline,
  [4225] = 1,
    ACTIONS(680), 1,
      anon_sym_from,
  [4229] = 1,
    ACTIONS(682), 1,
      anon_sym_globaltype,
  [4233] = 1,
    ACTIONS(684), 1,
      sym_newline,
  [4237] = 1,
    ACTIONS(686), 1,
      anon_sym_ENDIF,
  [4241] = 1,
    ACTIONS(688), 1,
      anon_sym_SEMI,
  [4245] = 1,
    ACTIONS(690), 1,
      anon_sym_DOT,
  [4249] = 1,
    ACTIONS(692), 1,
      anon_sym_forward,
  [4253] = 1,
    ACTIONS(694), 1,
      anon_sym_ENDIF,
  [4257] = 1,
    ACTIONS(696), 1,
      anon_sym_forwardprototypes,
  [4261] = 1,
    ACTIONS(698), 1,
      anon_sym_DOT,
  [4265] = 1,
    ACTIONS(700), 1,
      sym_identifier,
  [4269] = 1,
    ACTIONS(702), 1,
      anon_sym_ENDIF,
  [4273] = 1,
    ACTIONS(704), 1,
      sym_identifier,
  [4277] = 1,
    ACTIONS(706), 1,
      anon_sym_DOT,
  [4281] = 1,
    ACTIONS(708), 1,
      sym_newline,
  [4285] = 1,
    ACTIONS(710), 1,
      anon_sym_DOT,
  [4289] = 1,
    ACTIONS(275), 1,
      ts_builtin_sym_end,
  [4293] = 1,
    ACTIONS(712), 1,
      ts_builtin_sym_end,
  [4297] = 1,
    ACTIONS(714), 1,
      sym_identifier,
  [4301] = 1,
    ACTIONS(716), 1,
      sym_newline,
  [4305] = 1,
    ACTIONS(718), 1,
      sym_newline,
  [4309] = 1,
    ACTIONS(720), 1,
      sym_newline,
  [4313] = 1,
    ACTIONS(722), 1,
      ts_builtin_sym_end,
  [4317] = 1,
    ACTIONS(724), 1,
      sym_identifier,
  [4321] = 1,
    ACTIONS(726), 1,
      anon_sym_SEMI,
  [4325] = 1,
    ACTIONS(728), 1,
      anon_sym_endtype,
  [4329] = 1,
    ACTIONS(730), 1,
      sym_newline,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 53,
  [SMALL_STATE(4)] = 101,
  [SMALL_STATE(5)] = 149,
  [SMALL_STATE(6)] = 197,
  [SMALL_STATE(7)] = 240,
  [SMALL_STATE(8)] = 289,
  [SMALL_STATE(9)] = 332,
  [SMALL_STATE(10)] = 375,
  [SMALL_STATE(11)] = 417,
  [SMALL_STATE(12)] = 459,
  [SMALL_STATE(13)] = 501,
  [SMALL_STATE(14)] = 543,
  [SMALL_STATE(15)] = 585,
  [SMALL_STATE(16)] = 627,
  [SMALL_STATE(17)] = 669,
  [SMALL_STATE(18)] = 711,
  [SMALL_STATE(19)] = 753,
  [SMALL_STATE(20)] = 797,
  [SMALL_STATE(21)] = 841,
  [SMALL_STATE(22)] = 883,
  [SMALL_STATE(23)] = 925,
  [SMALL_STATE(24)] = 967,
  [SMALL_STATE(25)] = 1009,
  [SMALL_STATE(26)] = 1051,
  [SMALL_STATE(27)] = 1093,
  [SMALL_STATE(28)] = 1136,
  [SMALL_STATE(29)] = 1179,
  [SMALL_STATE(30)] = 1222,
  [SMALL_STATE(31)] = 1265,
  [SMALL_STATE(32)] = 1308,
  [SMALL_STATE(33)] = 1351,
  [SMALL_STATE(34)] = 1394,
  [SMALL_STATE(35)] = 1429,
  [SMALL_STATE(36)] = 1464,
  [SMALL_STATE(37)] = 1486,
  [SMALL_STATE(38)] = 1503,
  [SMALL_STATE(39)] = 1520,
  [SMALL_STATE(40)] = 1537,
  [SMALL_STATE(41)] = 1554,
  [SMALL_STATE(42)] = 1571,
  [SMALL_STATE(43)] = 1588,
  [SMALL_STATE(44)] = 1605,
  [SMALL_STATE(45)] = 1626,
  [SMALL_STATE(46)] = 1643,
  [SMALL_STATE(47)] = 1660,
  [SMALL_STATE(48)] = 1680,
  [SMALL_STATE(49)] = 1694,
  [SMALL_STATE(50)] = 1716,
  [SMALL_STATE(51)] = 1738,
  [SMALL_STATE(52)] = 1760,
  [SMALL_STATE(53)] = 1782,
  [SMALL_STATE(54)] = 1804,
  [SMALL_STATE(55)] = 1826,
  [SMALL_STATE(56)] = 1846,
  [SMALL_STATE(57)] = 1868,
  [SMALL_STATE(58)] = 1890,
  [SMALL_STATE(59)] = 1903,
  [SMALL_STATE(60)] = 1916,
  [SMALL_STATE(61)] = 1932,
  [SMALL_STATE(62)] = 1948,
  [SMALL_STATE(63)] = 1964,
  [SMALL_STATE(64)] = 1982,
  [SMALL_STATE(65)] = 2001,
  [SMALL_STATE(66)] = 2012,
  [SMALL_STATE(67)] = 2025,
  [SMALL_STATE(68)] = 2044,
  [SMALL_STATE(69)] = 2055,
  [SMALL_STATE(70)] = 2066,
  [SMALL_STATE(71)] = 2083,
  [SMALL_STATE(72)] = 2094,
  [SMALL_STATE(73)] = 2105,
  [SMALL_STATE(74)] = 2122,
  [SMALL_STATE(75)] = 2133,
  [SMALL_STATE(76)] = 2150,
  [SMALL_STATE(77)] = 2161,
  [SMALL_STATE(78)] = 2180,
  [SMALL_STATE(79)] = 2199,
  [SMALL_STATE(80)] = 2210,
  [SMALL_STATE(81)] = 2221,
  [SMALL_STATE(82)] = 2238,
  [SMALL_STATE(83)] = 2255,
  [SMALL_STATE(84)] = 2266,
  [SMALL_STATE(85)] = 2283,
  [SMALL_STATE(86)] = 2300,
  [SMALL_STATE(87)] = 2317,
  [SMALL_STATE(88)] = 2334,
  [SMALL_STATE(89)] = 2351,
  [SMALL_STATE(90)] = 2368,
  [SMALL_STATE(91)] = 2387,
  [SMALL_STATE(92)] = 2398,
  [SMALL_STATE(93)] = 2413,
  [SMALL_STATE(94)] = 2424,
  [SMALL_STATE(95)] = 2441,
  [SMALL_STATE(96)] = 2458,
  [SMALL_STATE(97)] = 2472,
  [SMALL_STATE(98)] = 2480,
  [SMALL_STATE(99)] = 2490,
  [SMALL_STATE(100)] = 2500,
  [SMALL_STATE(101)] = 2516,
  [SMALL_STATE(102)] = 2530,
  [SMALL_STATE(103)] = 2538,
  [SMALL_STATE(104)] = 2552,
  [SMALL_STATE(105)] = 2562,
  [SMALL_STATE(106)] = 2570,
  [SMALL_STATE(107)] = 2580,
  [SMALL_STATE(108)] = 2594,
  [SMALL_STATE(109)] = 2608,
  [SMALL_STATE(110)] = 2618,
  [SMALL_STATE(111)] = 2626,
  [SMALL_STATE(112)] = 2634,
  [SMALL_STATE(113)] = 2648,
  [SMALL_STATE(114)] = 2658,
  [SMALL_STATE(115)] = 2672,
  [SMALL_STATE(116)] = 2680,
  [SMALL_STATE(117)] = 2694,
  [SMALL_STATE(118)] = 2704,
  [SMALL_STATE(119)] = 2718,
  [SMALL_STATE(120)] = 2728,
  [SMALL_STATE(121)] = 2736,
  [SMALL_STATE(122)] = 2752,
  [SMALL_STATE(123)] = 2766,
  [SMALL_STATE(124)] = 2780,
  [SMALL_STATE(125)] = 2794,
  [SMALL_STATE(126)] = 2810,
  [SMALL_STATE(127)] = 2820,
  [SMALL_STATE(128)] = 2830,
  [SMALL_STATE(129)] = 2840,
  [SMALL_STATE(130)] = 2848,
  [SMALL_STATE(131)] = 2858,
  [SMALL_STATE(132)] = 2868,
  [SMALL_STATE(133)] = 2878,
  [SMALL_STATE(134)] = 2894,
  [SMALL_STATE(135)] = 2904,
  [SMALL_STATE(136)] = 2914,
  [SMALL_STATE(137)] = 2930,
  [SMALL_STATE(138)] = 2944,
  [SMALL_STATE(139)] = 2954,
  [SMALL_STATE(140)] = 2968,
  [SMALL_STATE(141)] = 2982,
  [SMALL_STATE(142)] = 2996,
  [SMALL_STATE(143)] = 3010,
  [SMALL_STATE(144)] = 3024,
  [SMALL_STATE(145)] = 3038,
  [SMALL_STATE(146)] = 3051,
  [SMALL_STATE(147)] = 3060,
  [SMALL_STATE(148)] = 3069,
  [SMALL_STATE(149)] = 3082,
  [SMALL_STATE(150)] = 3095,
  [SMALL_STATE(151)] = 3102,
  [SMALL_STATE(152)] = 3113,
  [SMALL_STATE(153)] = 3126,
  [SMALL_STATE(154)] = 3135,
  [SMALL_STATE(155)] = 3148,
  [SMALL_STATE(156)] = 3159,
  [SMALL_STATE(157)] = 3168,
  [SMALL_STATE(158)] = 3181,
  [SMALL_STATE(159)] = 3190,
  [SMALL_STATE(160)] = 3197,
  [SMALL_STATE(161)] = 3204,
  [SMALL_STATE(162)] = 3217,
  [SMALL_STATE(163)] = 3226,
  [SMALL_STATE(164)] = 3239,
  [SMALL_STATE(165)] = 3248,
  [SMALL_STATE(166)] = 3257,
  [SMALL_STATE(167)] = 3266,
  [SMALL_STATE(168)] = 3277,
  [SMALL_STATE(169)] = 3290,
  [SMALL_STATE(170)] = 3299,
  [SMALL_STATE(171)] = 3308,
  [SMALL_STATE(172)] = 3319,
  [SMALL_STATE(173)] = 3328,
  [SMALL_STATE(174)] = 3337,
  [SMALL_STATE(175)] = 3346,
  [SMALL_STATE(176)] = 3359,
  [SMALL_STATE(177)] = 3370,
  [SMALL_STATE(178)] = 3381,
  [SMALL_STATE(179)] = 3394,
  [SMALL_STATE(180)] = 3403,
  [SMALL_STATE(181)] = 3414,
  [SMALL_STATE(182)] = 3427,
  [SMALL_STATE(183)] = 3434,
  [SMALL_STATE(184)] = 3447,
  [SMALL_STATE(185)] = 3460,
  [SMALL_STATE(186)] = 3473,
  [SMALL_STATE(187)] = 3486,
  [SMALL_STATE(188)] = 3499,
  [SMALL_STATE(189)] = 3510,
  [SMALL_STATE(190)] = 3520,
  [SMALL_STATE(191)] = 3528,
  [SMALL_STATE(192)] = 3536,
  [SMALL_STATE(193)] = 3546,
  [SMALL_STATE(194)] = 3556,
  [SMALL_STATE(195)] = 3566,
  [SMALL_STATE(196)] = 3574,
  [SMALL_STATE(197)] = 3582,
  [SMALL_STATE(198)] = 3590,
  [SMALL_STATE(199)] = 3596,
  [SMALL_STATE(200)] = 3602,
  [SMALL_STATE(201)] = 3610,
  [SMALL_STATE(202)] = 3618,
  [SMALL_STATE(203)] = 3624,
  [SMALL_STATE(204)] = 3632,
  [SMALL_STATE(205)] = 3638,
  [SMALL_STATE(206)] = 3648,
  [SMALL_STATE(207)] = 3654,
  [SMALL_STATE(208)] = 3660,
  [SMALL_STATE(209)] = 3668,
  [SMALL_STATE(210)] = 3676,
  [SMALL_STATE(211)] = 3684,
  [SMALL_STATE(212)] = 3692,
  [SMALL_STATE(213)] = 3702,
  [SMALL_STATE(214)] = 3712,
  [SMALL_STATE(215)] = 3720,
  [SMALL_STATE(216)] = 3730,
  [SMALL_STATE(217)] = 3738,
  [SMALL_STATE(218)] = 3746,
  [SMALL_STATE(219)] = 3754,
  [SMALL_STATE(220)] = 3762,
  [SMALL_STATE(221)] = 3770,
  [SMALL_STATE(222)] = 3778,
  [SMALL_STATE(223)] = 3786,
  [SMALL_STATE(224)] = 3794,
  [SMALL_STATE(225)] = 3802,
  [SMALL_STATE(226)] = 3812,
  [SMALL_STATE(227)] = 3822,
  [SMALL_STATE(228)] = 3829,
  [SMALL_STATE(229)] = 3836,
  [SMALL_STATE(230)] = 3841,
  [SMALL_STATE(231)] = 3846,
  [SMALL_STATE(232)] = 3853,
  [SMALL_STATE(233)] = 3860,
  [SMALL_STATE(234)] = 3867,
  [SMALL_STATE(235)] = 3872,
  [SMALL_STATE(236)] = 3879,
  [SMALL_STATE(237)] = 3886,
  [SMALL_STATE(238)] = 3893,
  [SMALL_STATE(239)] = 3900,
  [SMALL_STATE(240)] = 3907,
  [SMALL_STATE(241)] = 3914,
  [SMALL_STATE(242)] = 3919,
  [SMALL_STATE(243)] = 3926,
  [SMALL_STATE(244)] = 3933,
  [SMALL_STATE(245)] = 3940,
  [SMALL_STATE(246)] = 3947,
  [SMALL_STATE(247)] = 3954,
  [SMALL_STATE(248)] = 3961,
  [SMALL_STATE(249)] = 3968,
  [SMALL_STATE(250)] = 3973,
  [SMALL_STATE(251)] = 3978,
  [SMALL_STATE(252)] = 3985,
  [SMALL_STATE(253)] = 3992,
  [SMALL_STATE(254)] = 3999,
  [SMALL_STATE(255)] = 4006,
  [SMALL_STATE(256)] = 4013,
  [SMALL_STATE(257)] = 4020,
  [SMALL_STATE(258)] = 4027,
  [SMALL_STATE(259)] = 4034,
  [SMALL_STATE(260)] = 4041,
  [SMALL_STATE(261)] = 4048,
  [SMALL_STATE(262)] = 4055,
  [SMALL_STATE(263)] = 4062,
  [SMALL_STATE(264)] = 4069,
  [SMALL_STATE(265)] = 4076,
  [SMALL_STATE(266)] = 4083,
  [SMALL_STATE(267)] = 4090,
  [SMALL_STATE(268)] = 4097,
  [SMALL_STATE(269)] = 4102,
  [SMALL_STATE(270)] = 4109,
  [SMALL_STATE(271)] = 4113,
  [SMALL_STATE(272)] = 4117,
  [SMALL_STATE(273)] = 4121,
  [SMALL_STATE(274)] = 4125,
  [SMALL_STATE(275)] = 4129,
  [SMALL_STATE(276)] = 4133,
  [SMALL_STATE(277)] = 4137,
  [SMALL_STATE(278)] = 4141,
  [SMALL_STATE(279)] = 4145,
  [SMALL_STATE(280)] = 4149,
  [SMALL_STATE(281)] = 4153,
  [SMALL_STATE(282)] = 4157,
  [SMALL_STATE(283)] = 4161,
  [SMALL_STATE(284)] = 4165,
  [SMALL_STATE(285)] = 4169,
  [SMALL_STATE(286)] = 4173,
  [SMALL_STATE(287)] = 4177,
  [SMALL_STATE(288)] = 4181,
  [SMALL_STATE(289)] = 4185,
  [SMALL_STATE(290)] = 4189,
  [SMALL_STATE(291)] = 4193,
  [SMALL_STATE(292)] = 4197,
  [SMALL_STATE(293)] = 4201,
  [SMALL_STATE(294)] = 4205,
  [SMALL_STATE(295)] = 4209,
  [SMALL_STATE(296)] = 4213,
  [SMALL_STATE(297)] = 4217,
  [SMALL_STATE(298)] = 4221,
  [SMALL_STATE(299)] = 4225,
  [SMALL_STATE(300)] = 4229,
  [SMALL_STATE(301)] = 4233,
  [SMALL_STATE(302)] = 4237,
  [SMALL_STATE(303)] = 4241,
  [SMALL_STATE(304)] = 4245,
  [SMALL_STATE(305)] = 4249,
  [SMALL_STATE(306)] = 4253,
  [SMALL_STATE(307)] = 4257,
  [SMALL_STATE(308)] = 4261,
  [SMALL_STATE(309)] = 4265,
  [SMALL_STATE(310)] = 4269,
  [SMALL_STATE(311)] = 4273,
  [SMALL_STATE(312)] = 4277,
  [SMALL_STATE(313)] = 4281,
  [SMALL_STATE(314)] = 4285,
  [SMALL_STATE(315)] = 4289,
  [SMALL_STATE(316)] = 4293,
  [SMALL_STATE(317)] = 4297,
  [SMALL_STATE(318)] = 4301,
  [SMALL_STATE(319)] = 4305,
  [SMALL_STATE(320)] = 4309,
  [SMALL_STATE(321)] = 4313,
  [SMALL_STATE(322)] = 4317,
  [SMALL_STATE(323)] = 4321,
  [SMALL_STATE(324)] = 4325,
  [SMALL_STATE(325)] = 4329,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [18] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_parameters_repeat1, 2, 0, 0),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(86),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 1, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_block_repeat1, 2, 0, 0),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_block_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_block_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_block_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_block_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_block_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_block_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_block_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_block_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_block_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_block_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 8, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 9, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_name, 1, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_variable, 1, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_name, 1, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_variable, 1, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_parameters_repeat1, 1, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_call_parameters_repeat1, 1, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_method_call, 3, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_method_call, 3, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_implementations_repeat1, 2, 0, 0),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_implementations_repeat1, 2, 0, 0), SHIFT_REPEAT(250),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_call_parameters_repeat1, 2, 0, 0),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_implementations, 1, 0, 0),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_forward_prototypes_repeat1, 2, 0, 0),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_forward_prototypes_repeat1, 2, 0, 0), SHIFT_REPEAT(250),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_name, 1, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_name, 1, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_parameters_repeat1, 2, 0, 0),
  [243] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(256),
  [246] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(311),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 4, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statment, 7, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statment, 7, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_declaration, 2, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_declaration, 2, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 10, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0),
  [279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0), SHIFT_REPEAT(179),
  [282] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0), SHIFT_REPEAT(147),
  [285] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pb_constructions, 1, 0, 0),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pb_constructions, 1, 0, 0),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_variable, 2, 0, 0),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_variable, 2, 0, 0),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3, 0, 0),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 3, 0, 0),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2, 0, 0),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2, 0, 0),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_implementation, 3, 0, 0),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 2, 0, 0),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameters, 2, 0, 0),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_properties, 1, 0, 0),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_prototype, 4, 0, 0),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_event_prototype, 4, 0, 0),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_implementation, 4, 0, 0),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3, 0, 0),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_prototype, 5, 0, 0),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameters, 3, 0, 0),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_properties_repeat1, 2, 0, 0),
  [380] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_properties_repeat1, 2, 0, 0), SHIFT_REPEAT(311),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 4, 0, 0),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_forward_prototypes, 2, 0, 0),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 5, 0, 0),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_of_function, 1, 0, 0),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_variable, 3, 0, 0),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_variable, 3, 0, 0),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_variable_repeat1, 2, 0, 5),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_variable_repeat1, 2, 0, 5),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_implementations, 1, 0, 0),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_forward_prototypes, 3, 0, 0),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1, 0, 0),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_event_implementations_repeat1, 2, 0, 0),
  [427] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_event_implementations_repeat1, 2, 0, 0), SHIFT_REPEAT(237),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_variable, 4, 0, 0),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_variable, 4, 0, 0),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal_content, 1, 0, 0),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal_content, 1, 0, 0),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_variable, 5, 0, 8),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_variable, 5, 0, 8),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_variable_repeat1, 2, 0, 6),
  [444] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_variable_repeat1, 2, 0, 6), SHIFT_REPEAT(265),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_variable_repeat1, 2, 0, 6),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_variable_repeat1, 3, 0, 9),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_variable_repeat1, 3, 0, 9),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_variable, 5, 0, 0),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_variable, 5, 0, 0),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameter, 2, 0, 0),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_parameter, 2, 0, 0),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_variable, 6, 0, 11),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_variable, 6, 0, 11),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_variable, 3, 0, 2),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_variable, 3, 0, 2),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_parameters_repeat1, 1, 0, 0),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_parameters_repeat1, 1, 0, 0),
  [479] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_variable_repeat1, 2, 0, 6), SHIFT_REPEAT(238),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_forward_types_repeat1, 2, 0, 0),
  [484] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_forward_types_repeat1, 2, 0, 0), SHIFT_REPEAT(232),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameter, 3, 0, 0),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_parameter, 3, 0, 0),
  [491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_repeat1, 4, 0, 12),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_repeat1, 4, 0, 12),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_repeat1, 5, 0, 13),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_repeat1, 5, 0, 13),
  [499] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_repeat1, 2, 0, 5),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_repeat1, 2, 0, 5),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name, 1, 0, 1),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_variable, 4, 0, 4),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_variable, 4, 0, 4),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 2, 0, 7),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3, 0, 2),
  [531] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_repeat1, 2, 0, 6), SHIFT_REPEAT(245),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_repeat1, 2, 0, 6),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_variable_repeat1, 4, 0, 12),
  [538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_variable_repeat1, 4, 0, 12),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_variable_repeat1, 5, 0, 13),
  [542] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_variable_repeat1, 5, 0, 13),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [546] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_parameters_repeat1, 2, 0, 0),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 6, 0, 11),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 4, 0, 4),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [558] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [560] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_repeat1, 3, 0, 9),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_repeat1, 3, 0, 9),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 5, 0, 8),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_implementation, 2, 0, 0),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_inherit_from, 5, 0, 0),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_forward_type, 7, 0, 10),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_body, 1, 0, 0),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_implementation, 3, 0, 0),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_visibility, 1, 0, 0),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_class_properties, 6, 0, 3),
  [618] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_class_properties, 6, 0, 3),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_forward_types, 4, 0, 0),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_body, 1, 0, 0),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_name, 1, 0, 0),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call_parameters, 3, 0, 0),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_parameters, 1, 0, 0),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_class_dummy, 3, 0, 0),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_forward_types, 3, 0, 0),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_type, 1, 0, 0),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_variables, 3, 0, 0),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dummy_keyword, 1, 0, 0),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call_parameters, 2, 0, 0),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 11, 0, 0),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [722] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
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
