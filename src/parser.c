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
#define STATE_COUNT 361
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 108
#define ALIAS_COUNT 0
#define TOKEN_COUNT 49
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
  anon_sym_SQUOTE = 27,
  anon_sym_DQUOTE = 28,
  aux_sym_string_literal_content_token1 = 29,
  aux_sym_string_literal_content_token2 = 30,
  sym_escape_sequence = 31,
  sym_end_of_event = 32,
  anon_sym_event = 33,
  anon_sym_SEMI = 34,
  anon_sym_endfunction = 35,
  anon_sym_endsubroutine = 36,
  anon_sym_public = 37,
  anon_sym_private = 38,
  anon_sym_protected = 39,
  sym_comment = 40,
  anon_sym_return = 41,
  anon_sym_STAR = 42,
  anon_sym_PLUS = 43,
  sym_newline = 44,
  anon_sym_IF = 45,
  anon_sym_THEN = 46,
  anon_sym_ENDIF = 47,
  sym__idt = 48,
  sym_source_file = 49,
  sym_class_name = 50,
  sym_class_type = 51,
  sym_forward_types = 52,
  sym_class_inherit_from = 53,
  sym_forward_type = 54,
  sym_global_class_properties = 55,
  sym_dummy_keyword = 56,
  sym_global_class_dummy = 57,
  sym_class_variables = 58,
  sym_forward_prototypes = 59,
  sym_class_properties = 60,
  sym_class_variable = 61,
  sym_variable = 62,
  sym_type = 63,
  sym_local_variable = 64,
  sym_function_prototype = 65,
  sym_function_parameters = 66,
  sym_function_parameter = 67,
  sym_value = 68,
  sym_boolean_literal = 69,
  sym_string_literal = 70,
  sym_string_literal_content = 71,
  sym_event_name = 72,
  sym_event_body = 73,
  sym_event_parameters = 74,
  sym_event_prototype = 75,
  sym_event_implementations = 76,
  sym_event_implementation = 77,
  sym_function_implementations = 78,
  sym_function_implementation = 79,
  sym_function_name = 80,
  sym_function_body = 81,
  sym_end_of_function = 82,
  sym_visibility = 83,
  sym_code_block = 84,
  sym_return_statement = 85,
  sym_local_declaration = 86,
  sym_binary_expression = 87,
  sym_assignment = 88,
  sym_object_name = 89,
  sym_object_method_call = 90,
  sym_if_statment = 91,
  sym_pb_constructions = 92,
  sym_expression = 93,
  sym_parenthesized_expression = 94,
  sym_function_call = 95,
  sym_function_call_parameters = 96,
  aux_sym_forward_types_repeat1 = 97,
  aux_sym_forward_prototypes_repeat1 = 98,
  aux_sym_class_properties_repeat1 = 99,
  aux_sym_class_variable_repeat1 = 100,
  aux_sym_variable_repeat1 = 101,
  aux_sym_function_parameters_repeat1 = 102,
  aux_sym_string_literal_repeat1 = 103,
  aux_sym_event_implementations_repeat1 = 104,
  aux_sym_function_implementations_repeat1 = 105,
  aux_sym_code_block_repeat1 = 106,
  aux_sym_function_call_parameters_repeat1 = 107,
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
  [anon_sym_SQUOTE] = "'",
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
  [sym__idt] = "_idt",
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
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
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
  [sym__idt] = sym__idt,
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
  [anon_sym_SQUOTE] = {
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
  [sym__idt] = {
    .visible = false,
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
  [6] = 3,
  [7] = 5,
  [8] = 5,
  [9] = 3,
  [10] = 5,
  [11] = 3,
  [12] = 5,
  [13] = 3,
  [14] = 3,
  [15] = 5,
  [16] = 16,
  [17] = 16,
  [18] = 16,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 20,
  [24] = 20,
  [25] = 20,
  [26] = 26,
  [27] = 19,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 28,
  [32] = 32,
  [33] = 28,
  [34] = 19,
  [35] = 35,
  [36] = 36,
  [37] = 35,
  [38] = 36,
  [39] = 36,
  [40] = 40,
  [41] = 35,
  [42] = 40,
  [43] = 40,
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
  [64] = 63,
  [65] = 59,
  [66] = 60,
  [67] = 61,
  [68] = 68,
  [69] = 69,
  [70] = 56,
  [71] = 53,
  [72] = 54,
  [73] = 57,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 54,
  [83] = 57,
  [84] = 55,
  [85] = 85,
  [86] = 56,
  [87] = 87,
  [88] = 88,
  [89] = 79,
  [90] = 80,
  [91] = 53,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 51,
  [96] = 92,
  [97] = 88,
  [98] = 98,
  [99] = 99,
  [100] = 92,
  [101] = 93,
  [102] = 102,
  [103] = 88,
  [104] = 79,
  [105] = 94,
  [106] = 92,
  [107] = 93,
  [108] = 108,
  [109] = 88,
  [110] = 79,
  [111] = 79,
  [112] = 92,
  [113] = 93,
  [114] = 88,
  [115] = 45,
  [116] = 102,
  [117] = 117,
  [118] = 52,
  [119] = 50,
  [120] = 45,
  [121] = 121,
  [122] = 122,
  [123] = 93,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 124,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 81,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 85,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 87,
  [141] = 134,
  [142] = 135,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 143,
  [147] = 147,
  [148] = 130,
  [149] = 117,
  [150] = 99,
  [151] = 81,
  [152] = 152,
  [153] = 85,
  [154] = 87,
  [155] = 155,
  [156] = 108,
  [157] = 53,
  [158] = 54,
  [159] = 57,
  [160] = 56,
  [161] = 161,
  [162] = 130,
  [163] = 163,
  [164] = 144,
  [165] = 130,
  [166] = 166,
  [167] = 130,
  [168] = 168,
  [169] = 117,
  [170] = 130,
  [171] = 99,
  [172] = 172,
  [173] = 108,
  [174] = 174,
  [175] = 49,
  [176] = 47,
  [177] = 177,
  [178] = 178,
  [179] = 134,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 53,
  [185] = 185,
  [186] = 54,
  [187] = 57,
  [188] = 188,
  [189] = 189,
  [190] = 56,
  [191] = 191,
  [192] = 134,
  [193] = 193,
  [194] = 194,
  [195] = 174,
  [196] = 196,
  [197] = 50,
  [198] = 55,
  [199] = 199,
  [200] = 200,
  [201] = 196,
  [202] = 49,
  [203] = 203,
  [204] = 199,
  [205] = 47,
  [206] = 203,
  [207] = 48,
  [208] = 194,
  [209] = 51,
  [210] = 189,
  [211] = 211,
  [212] = 48,
  [213] = 211,
  [214] = 214,
  [215] = 183,
  [216] = 52,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 50,
  [228] = 55,
  [229] = 229,
  [230] = 51,
  [231] = 223,
  [232] = 52,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 53,
  [237] = 54,
  [238] = 57,
  [239] = 56,
  [240] = 50,
  [241] = 55,
  [242] = 51,
  [243] = 52,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 219,
  [248] = 222,
  [249] = 246,
  [250] = 219,
  [251] = 222,
  [252] = 252,
  [253] = 246,
  [254] = 235,
  [255] = 221,
  [256] = 256,
  [257] = 235,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 265,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 267,
  [276] = 264,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 265,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 265,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 265,
  [292] = 292,
  [293] = 269,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 265,
  [298] = 298,
  [299] = 299,
  [300] = 283,
  [301] = 301,
  [302] = 263,
  [303] = 303,
  [304] = 285,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 191,
  [315] = 315,
  [316] = 311,
  [317] = 317,
  [318] = 318,
  [319] = 313,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 307,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 310,
  [334] = 334,
  [335] = 335,
  [336] = 307,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 340,
  [345] = 345,
  [346] = 343,
  [347] = 340,
  [348] = 340,
  [349] = 340,
  [350] = 350,
  [351] = 351,
  [352] = 340,
  [353] = 313,
  [354] = 338,
  [355] = 338,
  [356] = 356,
  [357] = 343,
  [358] = 358,
  [359] = 329,
  [360] = 360,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(213);
      ADVANCE_MAP(
        '"', 245,
        '\'', 244,
        '(', 232,
        ')', 233,
        '*', 267,
        '+', 268,
        ',', 229,
        '.', 215,
        '/', 15,
        ';', 257,
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
      if (lookahead == '"') ADVANCE(245);
      if (lookahead == '\'') ADVANCE(247);
      if (lookahead == '\\') ADVANCE(35);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(246);
      if (lookahead != 0) ADVANCE(247);
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
        '"', 245,
        '\'', 244,
        '(', 232,
        ')', 233,
        '*', 267,
        '+', 268,
        ',', 229,
        '.', 215,
        'f', 283,
        'n', 309,
        't', 303,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(236);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '"', 245,
        '\'', 244,
        '(', 232,
        '*', 267,
        '+', 268,
        ',', 229,
        '.', 215,
        '=', 228,
        '[', 37,
        'f', 283,
        'n', 309,
        't', 303,
        '\n', 269,
        '\r', 269,
      );
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(236);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(245);
      if (lookahead == '\'') ADVANCE(244);
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
          lookahead == '\r') ADVANCE(269);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 12:
      if (lookahead == ')') ADVANCE(233);
      if (lookahead == '*') ADVANCE(267);
      if (lookahead == '+') ADVANCE(268);
      if (lookahead == ',') ADVANCE(229);
      if (lookahead == '=') ADVANCE(228);
      if (lookahead == '[') ADVANCE(37);
      if (lookahead == 'e') ADVANCE(300);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 13:
      if (lookahead == ')') ADVANCE(233);
      if (lookahead == '*') ADVANCE(267);
      if (lookahead == '+') ADVANCE(268);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == 'I') ADVANCE(281);
      if (lookahead == 'e') ADVANCE(299);
      if (lookahead == 'r') ADVANCE(290);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 14:
      if (lookahead == ')') ADVANCE(233);
      if (lookahead == ',') ADVANCE(229);
      if (lookahead == 'r') ADVANCE(291);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 15:
      if (lookahead == '*') ADVANCE(17);
      if (lookahead == '/') ADVANCE(264);
      END_STATE();
    case 16:
      if (lookahead == '*') ADVANCE(16);
      if (lookahead == '/') ADVANCE(263);
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
      if (lookahead == 'e') ADVANCE(301);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 19:
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == 'E') ADVANCE(282);
      if (lookahead == 'I') ADVANCE(281);
      if (lookahead == 'r') ADVANCE(290);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 20:
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == 'I') ADVANCE(281);
      if (lookahead == 'e') ADVANCE(297);
      if (lookahead == 'r') ADVANCE(290);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 21:
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == 'I') ADVANCE(281);
      if (lookahead == 'r') ADVANCE(290);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(21);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
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
      if (lookahead == 'F') ADVANCE(270);
      END_STATE();
    case 28:
      if (lookahead == 'F') ADVANCE(273);
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
      if (lookahead == 'N') ADVANCE(272);
      END_STATE();
    case 34:
      if (lookahead == 'P') ADVANCE(23);
      END_STATE();
    case 35:
      ADVANCE_MAP(
        'U', 249,
        'u', 251,
        'x', 250,
        '"', 252,
        '\'', 252,
        '0', 252,
        '?', 252,
        '\\', 252,
        'a', 252,
        'b', 252,
        'e', 252,
        'f', 252,
        'n', 252,
        'r', 252,
        't', 252,
        'v', 252,
      );
      if (lookahead != 0) ADVANCE(248);
      END_STATE();
    case 36:
      ADVANCE_MAP(
        'U', 203,
        'u', 208,
        'x', 205,
        '"', 252,
        '\'', 252,
        '0', 252,
        '?', 252,
        '\\', 252,
        'a', 252,
        'b', 252,
        'e', 252,
        'f', 252,
        'n', 252,
        'r', 252,
        't', 252,
        'v', 252,
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
      if (lookahead == 'c') ADVANCE(260);
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
      if (lookahead == 'd') ADVANCE(262);
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
      if (lookahead == 'e') ADVANCE(261);
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
      if (lookahead == 'e') ADVANCE(259);
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
      if (lookahead == 'n') ADVANCE(265);
      END_STATE();
    case 112:
      if (lookahead == 'n') ADVANCE(222);
      END_STATE();
    case 113:
      if (lookahead == 'n') ADVANCE(230);
      END_STATE();
    case 114:
      if (lookahead == 'n') ADVANCE(258);
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
      if (lookahead == 't') ADVANCE(256);
      END_STATE();
    case 165:
      if (lookahead == 't') ADVANCE(255);
      END_STATE();
    case 166:
      if (lookahead == 't') ADVANCE(310);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 201:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      END_STATE();
    case 202:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(252);
      END_STATE();
    case 203:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(211);
      END_STATE();
    case 204:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(254);
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
        '"', 245,
        '\'', 244,
        '(', 232,
        ')', 233,
        '*', 267,
        '+', 268,
        ',', 229,
        '.', 215,
        '/', 15,
        ';', 257,
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_null);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_string_literal_content_token1);
      if (lookahead == '\'') ADVANCE(247);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(246);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(247);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_string_literal_content_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(247);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_string_literal_content_token2);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_string_literal_content_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(211);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_string_literal_content_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(204);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_string_literal_content_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(207);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(252);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(253);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_end_of_event);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_event);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_endfunction);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_endsubroutine);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(264);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_return);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_newline);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(269);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_IF);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_IF);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_THEN);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_ENDIF);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym__idt);
      if (lookahead == ' ') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym__idt);
      if (lookahead == ' ') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym__idt);
      if (lookahead == ' ') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym__idt);
      if (lookahead == ' ') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym__idt);
      if (lookahead == ' ') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym__idt);
      if (lookahead == ' ') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym__idt);
      if (lookahead == 'D') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym__idt);
      if (lookahead == 'F') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym__idt);
      if (lookahead == 'N') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym__idt);
      if (lookahead == 'a') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym__idt);
      if (lookahead == 'd') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym__idt);
      if (lookahead == 'd') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym__idt);
      if (lookahead == 'd') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym__idt);
      if (lookahead == 'd') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym__idt);
      if (lookahead == 'e') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym__idt);
      if (lookahead == 'e') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym__idt);
      if (lookahead == 'e') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym__idt);
      if (lookahead == 'e') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym__idt);
      if (lookahead == 'e') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym__idt);
      if (lookahead == 'f') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym__idt);
      if (lookahead == 'l') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym__idt);
      if (lookahead == 'l') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym__idt);
      if (lookahead == 'l') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym__idt);
      if (lookahead == 'n') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym__idt);
      if (lookahead == 'n') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym__idt);
      if (lookahead == 'n') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym__idt);
      if (lookahead == 'n') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym__idt);
      if (lookahead == 'n') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym__idt);
      if (lookahead == 'p') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym__idt);
      if (lookahead == 'r') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym__idt);
      if (lookahead == 'r') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym__idt);
      if (lookahead == 's') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym__idt);
      if (lookahead == 't') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym__idt);
      if (lookahead == 'u') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym__idt);
      if (lookahead == 'u') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym__idt);
      if (lookahead == 'u') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym__idt);
      if (lookahead == 'y') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym__idt);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
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
  [4] = {.lex_state = 20},
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
  [16] = {.lex_state = 7},
  [17] = {.lex_state = 7},
  [18] = {.lex_state = 7},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 13},
  [23] = {.lex_state = 6},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 6},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 6},
  [35] = {.lex_state = 20},
  [36] = {.lex_state = 20},
  [37] = {.lex_state = 19},
  [38] = {.lex_state = 19},
  [39] = {.lex_state = 13},
  [40] = {.lex_state = 21},
  [41] = {.lex_state = 13},
  [42] = {.lex_state = 21},
  [43] = {.lex_state = 21},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 6},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 6},
  [48] = {.lex_state = 6},
  [49] = {.lex_state = 6},
  [50] = {.lex_state = 6},
  [51] = {.lex_state = 6},
  [52] = {.lex_state = 6},
  [53] = {.lex_state = 6},
  [54] = {.lex_state = 6},
  [55] = {.lex_state = 6},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 6},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 6},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 13},
  [71] = {.lex_state = 13},
  [72] = {.lex_state = 13},
  [73] = {.lex_state = 13},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 11},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 14},
  [81] = {.lex_state = 20},
  [82] = {.lex_state = 20},
  [83] = {.lex_state = 20},
  [84] = {.lex_state = 12},
  [85] = {.lex_state = 20},
  [86] = {.lex_state = 20},
  [87] = {.lex_state = 20},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 14},
  [91] = {.lex_state = 20},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 14},
  [95] = {.lex_state = 12},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 20},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 18},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 14},
  [106] = {.lex_state = 1},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 20},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 1},
  [114] = {.lex_state = 1},
  [115] = {.lex_state = 7},
  [116] = {.lex_state = 12},
  [117] = {.lex_state = 20},
  [118] = {.lex_state = 12},
  [119] = {.lex_state = 12},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 14},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 18},
  [125] = {.lex_state = 1},
  [126] = {.lex_state = 1},
  [127] = {.lex_state = 12},
  [128] = {.lex_state = 13},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 200},
  [131] = {.lex_state = 13},
  [132] = {.lex_state = 7},
  [133] = {.lex_state = 200},
  [134] = {.lex_state = 12},
  [135] = {.lex_state = 12},
  [136] = {.lex_state = 13},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 7},
  [139] = {.lex_state = 7},
  [140] = {.lex_state = 13},
  [141] = {.lex_state = 18},
  [142] = {.lex_state = 18},
  [143] = {.lex_state = 18},
  [144] = {.lex_state = 18},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 12},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 200},
  [149] = {.lex_state = 19},
  [150] = {.lex_state = 19},
  [151] = {.lex_state = 19},
  [152] = {.lex_state = 166},
  [153] = {.lex_state = 19},
  [154] = {.lex_state = 19},
  [155] = {.lex_state = 7},
  [156] = {.lex_state = 13},
  [157] = {.lex_state = 19},
  [158] = {.lex_state = 19},
  [159] = {.lex_state = 19},
  [160] = {.lex_state = 19},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 200},
  [163] = {.lex_state = 200},
  [164] = {.lex_state = 12},
  [165] = {.lex_state = 200},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 200},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 13},
  [170] = {.lex_state = 200},
  [171] = {.lex_state = 13},
  [172] = {.lex_state = 7},
  [173] = {.lex_state = 19},
  [174] = {.lex_state = 12},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 7},
  [179] = {.lex_state = 7},
  [180] = {.lex_state = 14},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 14},
  [183] = {.lex_state = 12},
  [184] = {.lex_state = 7},
  [185] = {.lex_state = 7},
  [186] = {.lex_state = 7},
  [187] = {.lex_state = 7},
  [188] = {.lex_state = 7},
  [189] = {.lex_state = 12},
  [190] = {.lex_state = 7},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 14},
  [193] = {.lex_state = 7},
  [194] = {.lex_state = 12},
  [195] = {.lex_state = 18},
  [196] = {.lex_state = 18},
  [197] = {.lex_state = 7},
  [198] = {.lex_state = 7},
  [199] = {.lex_state = 18},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 12},
  [202] = {.lex_state = 7},
  [203] = {.lex_state = 18},
  [204] = {.lex_state = 12},
  [205] = {.lex_state = 7},
  [206] = {.lex_state = 12},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 18},
  [209] = {.lex_state = 7},
  [210] = {.lex_state = 18},
  [211] = {.lex_state = 18},
  [212] = {.lex_state = 7},
  [213] = {.lex_state = 12},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 18},
  [216] = {.lex_state = 7},
  [217] = {.lex_state = 7},
  [218] = {.lex_state = 14},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 14},
  [221] = {.lex_state = 18},
  [222] = {.lex_state = 7},
  [223] = {.lex_state = 18},
  [224] = {.lex_state = 7},
  [225] = {.lex_state = 7},
  [226] = {.lex_state = 7},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 12},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 7},
  [234] = {.lex_state = 7},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 18},
  [241] = {.lex_state = 18},
  [242] = {.lex_state = 18},
  [243] = {.lex_state = 18},
  [244] = {.lex_state = 7},
  [245] = {.lex_state = 7},
  [246] = {.lex_state = 7},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 7},
  [249] = {.lex_state = 7},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 7},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 7},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 12},
  [256] = {.lex_state = 7},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 7},
  [259] = {.lex_state = 200},
  [260] = {.lex_state = 200},
  [261] = {.lex_state = 200},
  [262] = {.lex_state = 200},
  [263] = {.lex_state = 200},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 200},
  [268] = {.lex_state = 200},
  [269] = {.lex_state = 200},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 200},
  [272] = {.lex_state = 166},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 200},
  [275] = {.lex_state = 200},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 200},
  [278] = {.lex_state = 166},
  [279] = {.lex_state = 200},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 200},
  [284] = {.lex_state = 88},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 200},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 200},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 88},
  [293] = {.lex_state = 200},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 200},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 200},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 200},
  [301] = {.lex_state = 200},
  [302] = {.lex_state = 200},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 200},
  [306] = {.lex_state = 7},
  [307] = {.lex_state = 7},
  [308] = {.lex_state = 166},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 7},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 7},
  [314] = {.lex_state = 200},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 200},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 7},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 88},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 7},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 7},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 7},
  [337] = {.lex_state = 200},
  [338] = {.lex_state = 7},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 200},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 7},
  [354] = {.lex_state = 7},
  [355] = {.lex_state = 7},
  [356] = {.lex_state = 200},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 7},
  [360] = {.lex_state = 0},
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
    [anon_sym_SQUOTE] = ACTIONS(1),
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
    [sym_source_file] = STATE(351),
    [anon_sym_HA_DOLLARPBExportHeader_DOLLAR] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(8), 1,
      anon_sym_RPAREN,
    ACTIONS(10), 1,
      sym_integer,
    ACTIONS(13), 1,
      sym_decimal,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(22), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      sym__idt,
    STATE(2), 1,
      aux_sym_function_call_parameters_repeat1,
    STATE(58), 1,
      sym_expression,
    STATE(291), 1,
      sym_function_name,
    STATE(348), 1,
      sym_object_name,
    STATE(50), 2,
      sym_boolean_literal,
      sym_string_literal,
    ACTIONS(16), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
    STATE(48), 6,
      sym_local_variable,
      sym_value,
      sym_binary_expression,
      sym_object_method_call,
      sym_parenthesized_expression,
      sym_function_call,
  [51] = 14,
    ACTIONS(28), 1,
      anon_sym_LPAREN,
    ACTIONS(30), 1,
      anon_sym_RPAREN,
    ACTIONS(32), 1,
      sym_integer,
    ACTIONS(34), 1,
      sym_decimal,
    ACTIONS(38), 1,
      anon_sym_SQUOTE,
    ACTIONS(40), 1,
      anon_sym_DQUOTE,
    ACTIONS(42), 1,
      sym__idt,
    STATE(5), 1,
      aux_sym_function_call_parameters_repeat1,
    STATE(58), 1,
      sym_expression,
    STATE(291), 1,
      sym_function_name,
    STATE(348), 1,
      sym_object_name,
    STATE(50), 2,
      sym_boolean_literal,
      sym_string_literal,
    ACTIONS(36), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
    STATE(48), 6,
      sym_local_variable,
      sym_value,
      sym_binary_expression,
      sym_object_method_call,
      sym_parenthesized_expression,
      sym_function_call,
  [102] = 15,
    ACTIONS(46), 1,
      sym_comment,
    ACTIONS(48), 1,
      anon_sym_return,
    ACTIONS(50), 1,
      anon_sym_IF,
    ACTIONS(52), 1,
      sym__idt,
    STATE(108), 1,
      sym_if_statment,
    STATE(155), 1,
      sym_local_variable,
    STATE(168), 1,
      sym_end_of_function,
    STATE(252), 1,
      sym_function_body,
    STATE(261), 1,
      sym_type,
    STATE(270), 1,
      sym_function_name,
    STATE(289), 1,
      sym_code_block,
    STATE(324), 1,
      sym_variable,
    STATE(340), 1,
      sym_object_name,
    ACTIONS(44), 2,
      anon_sym_endfunction,
      anon_sym_endsubroutine,
    STATE(35), 7,
      sym_return_statement,
      sym_local_declaration,
      sym_assignment,
      sym_object_method_call,
      sym_pb_constructions,
      sym_function_call,
      aux_sym_code_block_repeat1,
  [155] = 14,
    ACTIONS(28), 1,
      anon_sym_LPAREN,
    ACTIONS(32), 1,
      sym_integer,
    ACTIONS(34), 1,
      sym_decimal,
    ACTIONS(38), 1,
      anon_sym_SQUOTE,
    ACTIONS(40), 1,
      anon_sym_DQUOTE,
    ACTIONS(42), 1,
      sym__idt,
    ACTIONS(54), 1,
      anon_sym_RPAREN,
    STATE(2), 1,
      aux_sym_function_call_parameters_repeat1,
    STATE(58), 1,
      sym_expression,
    STATE(291), 1,
      sym_function_name,
    STATE(348), 1,
      sym_object_name,
    STATE(50), 2,
      sym_boolean_literal,
      sym_string_literal,
    ACTIONS(36), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
    STATE(48), 6,
      sym_local_variable,
      sym_value,
      sym_binary_expression,
      sym_object_method_call,
      sym_parenthesized_expression,
      sym_function_call,
  [206] = 14,
    ACTIONS(28), 1,
      anon_sym_LPAREN,
    ACTIONS(32), 1,
      sym_integer,
    ACTIONS(34), 1,
      sym_decimal,
    ACTIONS(38), 1,
      anon_sym_SQUOTE,
    ACTIONS(40), 1,
      anon_sym_DQUOTE,
    ACTIONS(42), 1,
      sym__idt,
    ACTIONS(56), 1,
      anon_sym_RPAREN,
    STATE(7), 1,
      aux_sym_function_call_parameters_repeat1,
    STATE(58), 1,
      sym_expression,
    STATE(291), 1,
      sym_function_name,
    STATE(348), 1,
      sym_object_name,
    STATE(50), 2,
      sym_boolean_literal,
      sym_string_literal,
    ACTIONS(36), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
    STATE(48), 6,
      sym_local_variable,
      sym_value,
      sym_binary_expression,
      sym_object_method_call,
      sym_parenthesized_expression,
      sym_function_call,
  [257] = 14,
    ACTIONS(28), 1,
      anon_sym_LPAREN,
    ACTIONS(32), 1,
      sym_integer,
    ACTIONS(34), 1,
      sym_decimal,
    ACTIONS(38), 1,
      anon_sym_SQUOTE,
    ACTIONS(40), 1,
      anon_sym_DQUOTE,
    ACTIONS(42), 1,
      sym__idt,
    ACTIONS(58), 1,
      anon_sym_RPAREN,
    STATE(2), 1,
      aux_sym_function_call_parameters_repeat1,
    STATE(58), 1,
      sym_expression,
    STATE(291), 1,
      sym_function_name,
    STATE(348), 1,
      sym_object_name,
    STATE(50), 2,
      sym_boolean_literal,
      sym_string_literal,
    ACTIONS(36), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
    STATE(48), 6,
      sym_local_variable,
      sym_value,
      sym_binary_expression,
      sym_object_method_call,
      sym_parenthesized_expression,
      sym_function_call,
  [308] = 14,
    ACTIONS(28), 1,
      anon_sym_LPAREN,
    ACTIONS(32), 1,
      sym_integer,
    ACTIONS(34), 1,
      sym_decimal,
    ACTIONS(38), 1,
      anon_sym_SQUOTE,
    ACTIONS(40), 1,
      anon_sym_DQUOTE,
    ACTIONS(42), 1,
      sym__idt,
    ACTIONS(60), 1,
      anon_sym_RPAREN,
    STATE(2), 1,
      aux_sym_function_call_parameters_repeat1,
    STATE(58), 1,
      sym_expression,
    STATE(291), 1,
      sym_function_name,
    STATE(348), 1,
      sym_object_name,
    STATE(50), 2,
      sym_boolean_literal,
      sym_string_literal,
    ACTIONS(36), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
    STATE(48), 6,
      sym_local_variable,
      sym_value,
      sym_binary_expression,
      sym_object_method_call,
      sym_parenthesized_expression,
      sym_function_call,
  [359] = 14,
    ACTIONS(28), 1,
      anon_sym_LPAREN,
    ACTIONS(32), 1,
      sym_integer,
    ACTIONS(34), 1,
      sym_decimal,
    ACTIONS(38), 1,
      anon_sym_SQUOTE,
    ACTIONS(40), 1,
      anon_sym_DQUOTE,
    ACTIONS(42), 1,
      sym__idt,
    ACTIONS(62), 1,
      anon_sym_RPAREN,
    STATE(10), 1,
      aux_sym_function_call_parameters_repeat1,
    STATE(58), 1,
      sym_expression,
    STATE(291), 1,
      sym_function_name,
    STATE(348), 1,
      sym_object_name,
    STATE(50), 2,
      sym_boolean_literal,
      sym_string_literal,
    ACTIONS(36), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
    STATE(48), 6,
      sym_local_variable,
      sym_value,
      sym_binary_expression,
      sym_object_method_call,
      sym_parenthesized_expression,
      sym_function_call,
  [410] = 14,
    ACTIONS(28), 1,
      anon_sym_LPAREN,
    ACTIONS(32), 1,
      sym_integer,
    ACTIONS(34), 1,
      sym_decimal,
    ACTIONS(38), 1,
      anon_sym_SQUOTE,
    ACTIONS(40), 1,
      anon_sym_DQUOTE,
    ACTIONS(42), 1,
      sym__idt,
    ACTIONS(64), 1,
      anon_sym_RPAREN,
    STATE(2), 1,
      aux_sym_function_call_parameters_repeat1,
    STATE(58), 1,
      sym_expression,
    STATE(291), 1,
      sym_function_name,
    STATE(348), 1,
      sym_object_name,
    STATE(50), 2,
      sym_boolean_literal,
      sym_string_literal,
    ACTIONS(36), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
    STATE(48), 6,
      sym_local_variable,
      sym_value,
      sym_binary_expression,
      sym_object_method_call,
      sym_parenthesized_expression,
      sym_function_call,
  [461] = 14,
    ACTIONS(28), 1,
      anon_sym_LPAREN,
    ACTIONS(32), 1,
      sym_integer,
    ACTIONS(34), 1,
      sym_decimal,
    ACTIONS(38), 1,
      anon_sym_SQUOTE,
    ACTIONS(40), 1,
      anon_sym_DQUOTE,
    ACTIONS(42), 1,
      sym__idt,
    ACTIONS(66), 1,
      anon_sym_RPAREN,
    STATE(12), 1,
      aux_sym_function_call_parameters_repeat1,
    STATE(58), 1,
      sym_expression,
    STATE(291), 1,
      sym_function_name,
    STATE(348), 1,
      sym_object_name,
    STATE(50), 2,
      sym_boolean_literal,
      sym_string_literal,
    ACTIONS(36), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
    STATE(48), 6,
      sym_local_variable,
      sym_value,
      sym_binary_expression,
      sym_object_method_call,
      sym_parenthesized_expression,
      sym_function_call,
  [512] = 14,
    ACTIONS(28), 1,
      anon_sym_LPAREN,
    ACTIONS(32), 1,
      sym_integer,
    ACTIONS(34), 1,
      sym_decimal,
    ACTIONS(38), 1,
      anon_sym_SQUOTE,
    ACTIONS(40), 1,
      anon_sym_DQUOTE,
    ACTIONS(42), 1,
      sym__idt,
    ACTIONS(68), 1,
      anon_sym_RPAREN,
    STATE(2), 1,
      aux_sym_function_call_parameters_repeat1,
    STATE(58), 1,
      sym_expression,
    STATE(291), 1,
      sym_function_name,
    STATE(348), 1,
      sym_object_name,
    STATE(50), 2,
      sym_boolean_literal,
      sym_string_literal,
    ACTIONS(36), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
    STATE(48), 6,
      sym_local_variable,
      sym_value,
      sym_binary_expression,
      sym_object_method_call,
      sym_parenthesized_expression,
      sym_function_call,
  [563] = 14,
    ACTIONS(28), 1,
      anon_sym_LPAREN,
    ACTIONS(32), 1,
      sym_integer,
    ACTIONS(34), 1,
      sym_decimal,
    ACTIONS(38), 1,
      anon_sym_SQUOTE,
    ACTIONS(40), 1,
      anon_sym_DQUOTE,
    ACTIONS(42), 1,
      sym__idt,
    ACTIONS(70), 1,
      anon_sym_RPAREN,
    STATE(8), 1,
      aux_sym_function_call_parameters_repeat1,
    STATE(58), 1,
      sym_expression,
    STATE(291), 1,
      sym_function_name,
    STATE(348), 1,
      sym_object_name,
    STATE(50), 2,
      sym_boolean_literal,
      sym_string_literal,
    ACTIONS(36), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
    STATE(48), 6,
      sym_local_variable,
      sym_value,
      sym_binary_expression,
      sym_object_method_call,
      sym_parenthesized_expression,
      sym_function_call,
  [614] = 14,
    ACTIONS(28), 1,
      anon_sym_LPAREN,
    ACTIONS(32), 1,
      sym_integer,
    ACTIONS(34), 1,
      sym_decimal,
    ACTIONS(38), 1,
      anon_sym_SQUOTE,
    ACTIONS(40), 1,
      anon_sym_DQUOTE,
    ACTIONS(42), 1,
      sym__idt,
    ACTIONS(72), 1,
      anon_sym_RPAREN,
    STATE(15), 1,
      aux_sym_function_call_parameters_repeat1,
    STATE(58), 1,
      sym_expression,
    STATE(291), 1,
      sym_function_name,
    STATE(348), 1,
      sym_object_name,
    STATE(50), 2,
      sym_boolean_literal,
      sym_string_literal,
    ACTIONS(36), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
    STATE(48), 6,
      sym_local_variable,
      sym_value,
      sym_binary_expression,
      sym_object_method_call,
      sym_parenthesized_expression,
      sym_function_call,
  [665] = 14,
    ACTIONS(28), 1,
      anon_sym_LPAREN,
    ACTIONS(32), 1,
      sym_integer,
    ACTIONS(34), 1,
      sym_decimal,
    ACTIONS(38), 1,
      anon_sym_SQUOTE,
    ACTIONS(40), 1,
      anon_sym_DQUOTE,
    ACTIONS(42), 1,
      sym__idt,
    ACTIONS(74), 1,
      anon_sym_RPAREN,
    STATE(2), 1,
      aux_sym_function_call_parameters_repeat1,
    STATE(58), 1,
      sym_expression,
    STATE(291), 1,
      sym_function_name,
    STATE(348), 1,
      sym_object_name,
    STATE(50), 2,
      sym_boolean_literal,
      sym_string_literal,
    ACTIONS(36), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
    STATE(48), 6,
      sym_local_variable,
      sym_value,
      sym_binary_expression,
      sym_object_method_call,
      sym_parenthesized_expression,
      sym_function_call,
  [716] = 12,
    ACTIONS(76), 1,
      anon_sym_LPAREN,
    ACTIONS(82), 1,
      anon_sym_SQUOTE,
    ACTIONS(84), 1,
      anon_sym_DQUOTE,
    ACTIONS(86), 1,
      sym_newline,
    ACTIONS(88), 1,
      sym__idt,
    STATE(253), 1,
      sym_expression,
    STATE(280), 1,
      sym_function_name,
    STATE(344), 1,
      sym_object_name,
    ACTIONS(78), 2,
      sym_integer,
      sym_decimal,
    STATE(197), 2,
      sym_boolean_literal,
      sym_string_literal,
    ACTIONS(80), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
    STATE(212), 6,
      sym_local_variable,
      sym_value,
      sym_binary_expression,
      sym_object_method_call,
      sym_parenthesized_expression,
      sym_function_call,
  [762] = 12,
    ACTIONS(76), 1,
      anon_sym_LPAREN,
    ACTIONS(82), 1,
      anon_sym_SQUOTE,
    ACTIONS(84), 1,
      anon_sym_DQUOTE,
    ACTIONS(88), 1,
      sym__idt,
    ACTIONS(90), 1,
      sym_newline,
    STATE(246), 1,
      sym_expression,
    STATE(280), 1,
      sym_function_name,
    STATE(344), 1,
      sym_object_name,
    ACTIONS(78), 2,
      sym_integer,
      sym_decimal,
    STATE(197), 2,
      sym_boolean_literal,
      sym_string_literal,
    ACTIONS(80), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
    STATE(212), 6,
      sym_local_variable,
      sym_value,
      sym_binary_expression,
      sym_object_method_call,
      sym_parenthesized_expression,
      sym_function_call,
  [808] = 12,
    ACTIONS(76), 1,
      anon_sym_LPAREN,
    ACTIONS(82), 1,
      anon_sym_SQUOTE,
    ACTIONS(84), 1,
      anon_sym_DQUOTE,
    ACTIONS(88), 1,
      sym__idt,
    ACTIONS(92), 1,
      sym_newline,
    STATE(249), 1,
      sym_expression,
    STATE(280), 1,
      sym_function_name,
    STATE(344), 1,
      sym_object_name,
    ACTIONS(78), 2,
      sym_integer,
      sym_decimal,
    STATE(197), 2,
      sym_boolean_literal,
      sym_string_literal,
    ACTIONS(80), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
    STATE(212), 6,
      sym_local_variable,
      sym_value,
      sym_binary_expression,
      sym_object_method_call,
      sym_parenthesized_expression,
      sym_function_call,
  [854] = 12,
    ACTIONS(94), 1,
      anon_sym_LPAREN,
    ACTIONS(96), 1,
      sym_integer,
    ACTIONS(98), 1,
      sym_decimal,
    ACTIONS(102), 1,
      anon_sym_SQUOTE,
    ACTIONS(104), 1,
      anon_sym_DQUOTE,
    ACTIONS(106), 1,
      sym__idt,
    STATE(235), 1,
      sym_expression,
    STATE(287), 1,
      sym_function_name,
    STATE(347), 1,
      sym_object_name,
    STATE(227), 2,
      sym_boolean_literal,
      sym_string_literal,
    ACTIONS(100), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
    STATE(207), 6,
      sym_local_variable,
      sym_value,
      sym_binary_expression,
      sym_object_method_call,
      sym_parenthesized_expression,
      sym_function_call,
  [899] = 12,
    ACTIONS(94), 1,
      anon_sym_LPAREN,
    ACTIONS(96), 1,
      sym_integer,
    ACTIONS(98), 1,
      sym_decimal,
    ACTIONS(102), 1,
      anon_sym_SQUOTE,
    ACTIONS(104), 1,
      anon_sym_DQUOTE,
    ACTIONS(106), 1,
      sym__idt,
    STATE(176), 1,
      sym_expression,
    STATE(287), 1,
      sym_function_name,
    STATE(347), 1,
      sym_object_name,
    STATE(227), 2,
      sym_boolean_literal,
      sym_string_literal,
    ACTIONS(100), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
    STATE(207), 6,
      sym_local_variable,
      sym_value,
      sym_binary_expression,
      sym_object_method_call,
      sym_parenthesized_expression,
      sym_function_call,
  [944] = 12,
    ACTIONS(78), 1,
      sym_integer,
    ACTIONS(88), 1,
      sym__idt,
    ACTIONS(108), 1,
      anon_sym_LPAREN,
    ACTIONS(110), 1,
      sym_decimal,
    ACTIONS(112), 1,
      anon_sym_SQUOTE,
    ACTIONS(114), 1,
      anon_sym_DQUOTE,
    STATE(132), 1,
      sym_expression,
    STATE(280), 1,
      sym_function_name,
    STATE(344), 1,
      sym_object_name,
    STATE(197), 2,
      sym_boolean_literal,
      sym_string_literal,
    ACTIONS(80), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
    STATE(212), 6,
      sym_local_variable,
      sym_value,
      sym_binary_expression,
      sym_object_method_call,
      sym_parenthesized_expression,
      sym_function_call,
  [989] = 14,
    ACTIONS(52), 1,
      sym__idt,
    ACTIONS(116), 1,
      sym_end_of_event,
    ACTIONS(118), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_return,
    ACTIONS(122), 1,
      anon_sym_IF,
    STATE(155), 1,
      sym_local_variable,
    STATE(156), 1,
      sym_if_statment,
    STATE(261), 1,
      sym_type,
    STATE(265), 1,
      sym_function_name,
    STATE(328), 1,
      sym_event_body,
    STATE(336), 1,
      sym_variable,
    STATE(350), 1,
      sym_code_block,
    STATE(352), 1,
      sym_object_name,
    STATE(41), 7,
      sym_return_statement,
      sym_local_declaration,
      sym_assignment,
      sym_object_method_call,
      sym_pb_constructions,
      sym_function_call,
      aux_sym_code_block_repeat1,
  [1038] = 12,
    ACTIONS(28), 1,
      anon_sym_LPAREN,
    ACTIONS(32), 1,
      sym_integer,
    ACTIONS(34), 1,
      sym_decimal,
    ACTIONS(38), 1,
      anon_sym_SQUOTE,
    ACTIONS(40), 1,
      anon_sym_DQUOTE,
    ACTIONS(42), 1,
      sym__idt,
    STATE(47), 1,
      sym_expression,
    STATE(291), 1,
      sym_function_name,
    STATE(348), 1,
      sym_object_name,
    STATE(50), 2,
      sym_boolean_literal,
      sym_string_literal,
    ACTIONS(36), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
    STATE(48), 6,
      sym_local_variable,
      sym_value,
      sym_binary_expression,
      sym_object_method_call,
      sym_parenthesized_expression,
      sym_function_call,
  [1083] = 12,
    ACTIONS(94), 1,
      anon_sym_LPAREN,
    ACTIONS(106), 1,
      sym__idt,
    ACTIONS(124), 1,
      sym_integer,
    ACTIONS(126), 1,
      sym_decimal,
    ACTIONS(130), 1,
      anon_sym_SQUOTE,
    ACTIONS(132), 1,
      anon_sym_DQUOTE,
    STATE(176), 1,
      sym_expression,
    STATE(265), 1,
      sym_function_name,
    STATE(352), 1,
      sym_object_name,
    STATE(119), 2,
      sym_boolean_literal,
      sym_string_literal,
    ACTIONS(128), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
    STATE(207), 6,
      sym_local_variable,
      sym_value,
      sym_binary_expression,
      sym_object_method_call,
      sym_parenthesized_expression,
      sym_function_call,
  [1128] = 12,
    ACTIONS(78), 1,
      sym_integer,
    ACTIONS(88), 1,
      sym__idt,
    ACTIONS(108), 1,
      anon_sym_LPAREN,
    ACTIONS(110), 1,
      sym_decimal,
    ACTIONS(112), 1,
      anon_sym_SQUOTE,
    ACTIONS(114), 1,
      anon_sym_DQUOTE,
    STATE(205), 1,
      sym_expression,
    STATE(280), 1,
      sym_function_name,
    STATE(344), 1,
      sym_object_name,
    STATE(197), 2,
      sym_boolean_literal,
      sym_string_literal,
    ACTIONS(80), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
    STATE(212), 6,
      sym_local_variable,
      sym_value,
      sym_binary_expression,
      sym_object_method_call,
      sym_parenthesized_expression,
      sym_function_call,
  [1173] = 12,
    ACTIONS(78), 1,
      sym_integer,
    ACTIONS(88), 1,
      sym__idt,
    ACTIONS(108), 1,
      anon_sym_LPAREN,
    ACTIONS(110), 1,
      sym_decimal,
    ACTIONS(112), 1,
      anon_sym_SQUOTE,
    ACTIONS(114), 1,
      anon_sym_DQUOTE,
    STATE(138), 1,
      sym_expression,
    STATE(280), 1,
      sym_function_name,
    STATE(344), 1,
      sym_object_name,
    STATE(197), 2,
      sym_boolean_literal,
      sym_string_literal,
    ACTIONS(80), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
    STATE(212), 6,
      sym_local_variable,
      sym_value,
      sym_binary_expression,
      sym_object_method_call,
      sym_parenthesized_expression,
      sym_function_call,
  [1218] = 12,
    ACTIONS(94), 1,
      anon_sym_LPAREN,
    ACTIONS(96), 1,
      sym_integer,
    ACTIONS(98), 1,
      sym_decimal,
    ACTIONS(102), 1,
      anon_sym_SQUOTE,
    ACTIONS(104), 1,
      anon_sym_DQUOTE,
    ACTIONS(106), 1,
      sym__idt,
    STATE(254), 1,
      sym_expression,
    STATE(287), 1,
      sym_function_name,
    STATE(347), 1,
      sym_object_name,
    STATE(227), 2,
      sym_boolean_literal,
      sym_string_literal,
    ACTIONS(100), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
    STATE(207), 6,
      sym_local_variable,
      sym_value,
      sym_binary_expression,
      sym_object_method_call,
      sym_parenthesized_expression,
      sym_function_call,
  [1263] = 12,
    ACTIONS(94), 1,
      anon_sym_LPAREN,
    ACTIONS(106), 1,
      sym__idt,
    ACTIONS(124), 1,
      sym_integer,
    ACTIONS(126), 1,
      sym_decimal,
    ACTIONS(130), 1,
      anon_sym_SQUOTE,
    ACTIONS(132), 1,
      anon_sym_DQUOTE,
    STATE(247), 1,
      sym_expression,
    STATE(265), 1,
      sym_function_name,
    STATE(352), 1,
      sym_object_name,
    STATE(119), 2,
      sym_boolean_literal,
      sym_string_literal,
    ACTIONS(128), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
    STATE(207), 6,
      sym_local_variable,
      sym_value,
      sym_binary_expression,
      sym_object_method_call,
      sym_parenthesized_expression,
      sym_function_call,
  [1308] = 12,
    ACTIONS(78), 1,
      sym_integer,
    ACTIONS(88), 1,
      sym__idt,
    ACTIONS(108), 1,
      anon_sym_LPAREN,
    ACTIONS(110), 1,
      sym_decimal,
    ACTIONS(112), 1,
      anon_sym_SQUOTE,
    ACTIONS(114), 1,
      anon_sym_DQUOTE,
    STATE(139), 1,
      sym_expression,
    STATE(280), 1,
      sym_function_name,
    STATE(344), 1,
      sym_object_name,
    STATE(197), 2,
      sym_boolean_literal,
      sym_string_literal,
    ACTIONS(80), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
    STATE(212), 6,
      sym_local_variable,
      sym_value,
      sym_binary_expression,
      sym_object_method_call,
      sym_parenthesized_expression,
      sym_function_call,
  [1353] = 12,
    ACTIONS(78), 1,
      sym_integer,
    ACTIONS(88), 1,
      sym__idt,
    ACTIONS(108), 1,
      anon_sym_LPAREN,
    ACTIONS(110), 1,
      sym_decimal,
    ACTIONS(112), 1,
      anon_sym_SQUOTE,
    ACTIONS(114), 1,
      anon_sym_DQUOTE,
    STATE(185), 1,
      sym_expression,
    STATE(280), 1,
      sym_function_name,
    STATE(344), 1,
      sym_object_name,
    STATE(197), 2,
      sym_boolean_literal,
      sym_string_literal,
    ACTIONS(80), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
    STATE(212), 6,
      sym_local_variable,
      sym_value,
      sym_binary_expression,
      sym_object_method_call,
      sym_parenthesized_expression,
      sym_function_call,
  [1398] = 12,
    ACTIONS(94), 1,
      anon_sym_LPAREN,
    ACTIONS(106), 1,
      sym__idt,
    ACTIONS(124), 1,
      sym_integer,
    ACTIONS(126), 1,
      sym_decimal,
    ACTIONS(130), 1,
      anon_sym_SQUOTE,
    ACTIONS(132), 1,
      anon_sym_DQUOTE,
    STATE(250), 1,
      sym_expression,
    STATE(265), 1,
      sym_function_name,
    STATE(352), 1,
      sym_object_name,
    STATE(119), 2,
      sym_boolean_literal,
      sym_string_literal,
    ACTIONS(128), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
    STATE(207), 6,
      sym_local_variable,
      sym_value,
      sym_binary_expression,
      sym_object_method_call,
      sym_parenthesized_expression,
      sym_function_call,
  [1443] = 12,
    ACTIONS(78), 1,
      sym_integer,
    ACTIONS(88), 1,
      sym__idt,
    ACTIONS(108), 1,
      anon_sym_LPAREN,
    ACTIONS(110), 1,
      sym_decimal,
    ACTIONS(112), 1,
      anon_sym_SQUOTE,
    ACTIONS(114), 1,
      anon_sym_DQUOTE,
    STATE(188), 1,
      sym_expression,
    STATE(280), 1,
      sym_function_name,
    STATE(344), 1,
      sym_object_name,
    STATE(197), 2,
      sym_boolean_literal,
      sym_string_literal,
    ACTIONS(80), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
    STATE(212), 6,
      sym_local_variable,
      sym_value,
      sym_binary_expression,
      sym_object_method_call,
      sym_parenthesized_expression,
      sym_function_call,
  [1488] = 12,
    ACTIONS(94), 1,
      anon_sym_LPAREN,
    ACTIONS(106), 1,
      sym__idt,
    ACTIONS(124), 1,
      sym_integer,
    ACTIONS(126), 1,
      sym_decimal,
    ACTIONS(130), 1,
      anon_sym_SQUOTE,
    ACTIONS(132), 1,
      anon_sym_DQUOTE,
    STATE(219), 1,
      sym_expression,
    STATE(265), 1,
      sym_function_name,
    STATE(352), 1,
      sym_object_name,
    STATE(119), 2,
      sym_boolean_literal,
      sym_string_literal,
    ACTIONS(128), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
    STATE(207), 6,
      sym_local_variable,
      sym_value,
      sym_binary_expression,
      sym_object_method_call,
      sym_parenthesized_expression,
      sym_function_call,
  [1533] = 12,
    ACTIONS(94), 1,
      anon_sym_LPAREN,
    ACTIONS(96), 1,
      sym_integer,
    ACTIONS(98), 1,
      sym_decimal,
    ACTIONS(102), 1,
      anon_sym_SQUOTE,
    ACTIONS(104), 1,
      anon_sym_DQUOTE,
    ACTIONS(106), 1,
      sym__idt,
    STATE(257), 1,
      sym_expression,
    STATE(287), 1,
      sym_function_name,
    STATE(347), 1,
      sym_object_name,
    STATE(227), 2,
      sym_boolean_literal,
      sym_string_literal,
    ACTIONS(100), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
    STATE(207), 6,
      sym_local_variable,
      sym_value,
      sym_binary_expression,
      sym_object_method_call,
      sym_parenthesized_expression,
      sym_function_call,
  [1578] = 12,
    ACTIONS(48), 1,
      anon_sym_return,
    ACTIONS(50), 1,
      anon_sym_IF,
    ACTIONS(52), 1,
      sym__idt,
    ACTIONS(136), 1,
      sym_comment,
    STATE(108), 1,
      sym_if_statment,
    STATE(155), 1,
      sym_local_variable,
    STATE(261), 1,
      sym_type,
    STATE(270), 1,
      sym_function_name,
    STATE(324), 1,
      sym_variable,
    STATE(340), 1,
      sym_object_name,
    ACTIONS(134), 2,
      anon_sym_endfunction,
      anon_sym_endsubroutine,
    STATE(36), 7,
      sym_return_statement,
      sym_local_declaration,
      sym_assignment,
      sym_object_method_call,
      sym_pb_constructions,
      sym_function_call,
      aux_sym_code_block_repeat1,
  [1622] = 12,
    ACTIONS(140), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_return,
    ACTIONS(146), 1,
      anon_sym_IF,
    ACTIONS(149), 1,
      sym__idt,
    STATE(108), 1,
      sym_if_statment,
    STATE(155), 1,
      sym_local_variable,
    STATE(261), 1,
      sym_type,
    STATE(270), 1,
      sym_function_name,
    STATE(324), 1,
      sym_variable,
    STATE(340), 1,
      sym_object_name,
    ACTIONS(138), 2,
      anon_sym_endfunction,
      anon_sym_endsubroutine,
    STATE(36), 7,
      sym_return_statement,
      sym_local_declaration,
      sym_assignment,
      sym_object_method_call,
      sym_pb_constructions,
      sym_function_call,
      aux_sym_code_block_repeat1,
  [1666] = 12,
    ACTIONS(52), 1,
      sym__idt,
    ACTIONS(134), 1,
      anon_sym_ENDIF,
    ACTIONS(152), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_return,
    ACTIONS(156), 1,
      anon_sym_IF,
    STATE(155), 1,
      sym_local_variable,
    STATE(173), 1,
      sym_if_statment,
    STATE(261), 1,
      sym_type,
    STATE(297), 1,
      sym_function_name,
    STATE(307), 1,
      sym_variable,
    STATE(349), 1,
      sym_object_name,
    STATE(38), 7,
      sym_return_statement,
      sym_local_declaration,
      sym_assignment,
      sym_object_method_call,
      sym_pb_constructions,
      sym_function_call,
      aux_sym_code_block_repeat1,
  [1709] = 12,
    ACTIONS(138), 1,
      anon_sym_ENDIF,
    ACTIONS(149), 1,
      sym__idt,
    ACTIONS(158), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_return,
    ACTIONS(164), 1,
      anon_sym_IF,
    STATE(155), 1,
      sym_local_variable,
    STATE(173), 1,
      sym_if_statment,
    STATE(261), 1,
      sym_type,
    STATE(297), 1,
      sym_function_name,
    STATE(307), 1,
      sym_variable,
    STATE(349), 1,
      sym_object_name,
    STATE(38), 7,
      sym_return_statement,
      sym_local_declaration,
      sym_assignment,
      sym_object_method_call,
      sym_pb_constructions,
      sym_function_call,
      aux_sym_code_block_repeat1,
  [1752] = 12,
    ACTIONS(138), 1,
      sym_end_of_event,
    ACTIONS(149), 1,
      sym__idt,
    ACTIONS(167), 1,
      sym_comment,
    ACTIONS(170), 1,
      anon_sym_return,
    ACTIONS(173), 1,
      anon_sym_IF,
    STATE(155), 1,
      sym_local_variable,
    STATE(156), 1,
      sym_if_statment,
    STATE(261), 1,
      sym_type,
    STATE(265), 1,
      sym_function_name,
    STATE(336), 1,
      sym_variable,
    STATE(352), 1,
      sym_object_name,
    STATE(39), 7,
      sym_return_statement,
      sym_local_declaration,
      sym_assignment,
      sym_object_method_call,
      sym_pb_constructions,
      sym_function_call,
      aux_sym_code_block_repeat1,
  [1795] = 12,
    ACTIONS(52), 1,
      sym__idt,
    ACTIONS(154), 1,
      anon_sym_return,
    ACTIONS(156), 1,
      anon_sym_IF,
    ACTIONS(176), 1,
      sym_comment,
    STATE(155), 1,
      sym_local_variable,
    STATE(173), 1,
      sym_if_statment,
    STATE(261), 1,
      sym_type,
    STATE(297), 1,
      sym_function_name,
    STATE(307), 1,
      sym_variable,
    STATE(349), 1,
      sym_object_name,
    STATE(357), 1,
      sym_code_block,
    STATE(37), 7,
      sym_return_statement,
      sym_local_declaration,
      sym_assignment,
      sym_object_method_call,
      sym_pb_constructions,
      sym_function_call,
      aux_sym_code_block_repeat1,
  [1838] = 12,
    ACTIONS(52), 1,
      sym__idt,
    ACTIONS(120), 1,
      anon_sym_return,
    ACTIONS(122), 1,
      anon_sym_IF,
    ACTIONS(134), 1,
      sym_end_of_event,
    ACTIONS(178), 1,
      sym_comment,
    STATE(155), 1,
      sym_local_variable,
    STATE(156), 1,
      sym_if_statment,
    STATE(261), 1,
      sym_type,
    STATE(265), 1,
      sym_function_name,
    STATE(336), 1,
      sym_variable,
    STATE(352), 1,
      sym_object_name,
    STATE(39), 7,
      sym_return_statement,
      sym_local_declaration,
      sym_assignment,
      sym_object_method_call,
      sym_pb_constructions,
      sym_function_call,
      aux_sym_code_block_repeat1,
  [1881] = 12,
    ACTIONS(52), 1,
      sym__idt,
    ACTIONS(154), 1,
      anon_sym_return,
    ACTIONS(156), 1,
      anon_sym_IF,
    ACTIONS(176), 1,
      sym_comment,
    STATE(155), 1,
      sym_local_variable,
    STATE(173), 1,
      sym_if_statment,
    STATE(261), 1,
      sym_type,
    STATE(297), 1,
      sym_function_name,
    STATE(307), 1,
      sym_variable,
    STATE(343), 1,
      sym_code_block,
    STATE(349), 1,
      sym_object_name,
    STATE(37), 7,
      sym_return_statement,
      sym_local_declaration,
      sym_assignment,
      sym_object_method_call,
      sym_pb_constructions,
      sym_function_call,
      aux_sym_code_block_repeat1,
  [1924] = 12,
    ACTIONS(52), 1,
      sym__idt,
    ACTIONS(154), 1,
      anon_sym_return,
    ACTIONS(156), 1,
      anon_sym_IF,
    ACTIONS(176), 1,
      sym_comment,
    STATE(155), 1,
      sym_local_variable,
    STATE(173), 1,
      sym_if_statment,
    STATE(261), 1,
      sym_type,
    STATE(297), 1,
      sym_function_name,
    STATE(307), 1,
      sym_variable,
    STATE(346), 1,
      sym_code_block,
    STATE(349), 1,
      sym_object_name,
    STATE(37), 7,
      sym_return_statement,
      sym_local_declaration,
      sym_assignment,
      sym_object_method_call,
      sym_pb_constructions,
      sym_function_call,
      aux_sym_code_block_repeat1,
  [1967] = 10,
    ACTIONS(180), 1,
      ts_builtin_sym_end,
    ACTIONS(182), 1,
      anon_sym_event,
    STATE(22), 1,
      sym_event_prototype,
    STATE(122), 1,
      sym_function_implementations,
    STATE(304), 1,
      sym_visibility,
    STATE(315), 1,
      sym_function_prototype,
    STATE(320), 1,
      sym_event_implementations,
    STATE(69), 2,
      sym_function_implementation,
      aux_sym_function_implementations_repeat1,
    STATE(145), 2,
      sym_event_implementation,
      aux_sym_event_implementations_repeat1,
    ACTIONS(184), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [2002] = 4,
    ACTIONS(186), 1,
      anon_sym_DOT,
    ACTIONS(190), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 5,
      sym_integer,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      sym__idt,
    ACTIONS(188), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_decimal,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_STAR,
      anon_sym_PLUS,
  [2025] = 10,
    ACTIONS(182), 1,
      anon_sym_event,
    ACTIONS(194), 1,
      ts_builtin_sym_end,
    STATE(22), 1,
      sym_event_prototype,
    STATE(98), 1,
      sym_function_implementations,
    STATE(304), 1,
      sym_visibility,
    STATE(309), 1,
      sym_event_implementations,
    STATE(315), 1,
      sym_function_prototype,
    STATE(69), 2,
      sym_function_implementation,
      aux_sym_function_implementations_repeat1,
    STATE(145), 2,
      sym_event_implementation,
      aux_sym_event_implementations_repeat1,
    ACTIONS(184), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [2060] = 2,
    ACTIONS(198), 5,
      sym_integer,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      sym__idt,
    ACTIONS(196), 8,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_decimal,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_STAR,
      anon_sym_PLUS,
  [2078] = 2,
    ACTIONS(202), 5,
      sym_integer,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      sym__idt,
    ACTIONS(200), 8,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_decimal,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_STAR,
      anon_sym_PLUS,
  [2096] = 2,
    ACTIONS(206), 5,
      sym_integer,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      sym__idt,
    ACTIONS(204), 8,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_decimal,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_STAR,
      anon_sym_PLUS,
  [2114] = 2,
    ACTIONS(210), 5,
      sym_integer,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      sym__idt,
    ACTIONS(208), 8,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_decimal,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_STAR,
      anon_sym_PLUS,
  [2132] = 2,
    ACTIONS(214), 5,
      sym_integer,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      sym__idt,
    ACTIONS(212), 8,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_decimal,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_STAR,
      anon_sym_PLUS,
  [2150] = 2,
    ACTIONS(218), 5,
      sym_integer,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      sym__idt,
    ACTIONS(216), 8,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_decimal,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_STAR,
      anon_sym_PLUS,
  [2168] = 2,
    ACTIONS(222), 5,
      sym_integer,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      sym__idt,
    ACTIONS(220), 8,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_decimal,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_STAR,
      anon_sym_PLUS,
  [2186] = 2,
    ACTIONS(226), 5,
      sym_integer,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      sym__idt,
    ACTIONS(224), 8,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_decimal,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_STAR,
      anon_sym_PLUS,
  [2204] = 2,
    ACTIONS(230), 5,
      sym_integer,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      sym__idt,
    ACTIONS(228), 8,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_decimal,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_STAR,
      anon_sym_PLUS,
  [2222] = 2,
    ACTIONS(234), 5,
      sym_integer,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      sym__idt,
    ACTIONS(232), 8,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_decimal,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_STAR,
      anon_sym_PLUS,
  [2240] = 2,
    ACTIONS(238), 5,
      sym_integer,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      sym__idt,
    ACTIONS(236), 8,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_decimal,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_STAR,
      anon_sym_PLUS,
  [2258] = 4,
    ACTIONS(240), 1,
      anon_sym_COMMA,
    ACTIONS(246), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(242), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_decimal,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(244), 5,
      sym_integer,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      sym__idt,
  [2280] = 7,
    ACTIONS(124), 1,
      sym_integer,
    ACTIONS(126), 1,
      sym_decimal,
    ACTIONS(130), 1,
      anon_sym_SQUOTE,
    ACTIONS(132), 1,
      anon_sym_DQUOTE,
    STATE(204), 1,
      sym_value,
    STATE(119), 2,
      sym_boolean_literal,
      sym_string_literal,
    ACTIONS(248), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
  [2305] = 7,
    ACTIONS(124), 1,
      sym_integer,
    ACTIONS(126), 1,
      sym_decimal,
    ACTIONS(130), 1,
      anon_sym_SQUOTE,
    ACTIONS(132), 1,
      anon_sym_DQUOTE,
    STATE(194), 1,
      sym_value,
    STATE(119), 2,
      sym_boolean_literal,
      sym_string_literal,
    ACTIONS(248), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
  [2330] = 7,
    ACTIONS(250), 1,
      sym_integer,
    ACTIONS(252), 1,
      sym_decimal,
    ACTIONS(256), 1,
      anon_sym_SQUOTE,
    ACTIONS(258), 1,
      anon_sym_DQUOTE,
    STATE(221), 1,
      sym_value,
    STATE(240), 2,
      sym_boolean_literal,
      sym_string_literal,
    ACTIONS(254), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
  [2355] = 2,
    ACTIONS(8), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_decimal,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(260), 5,
      sym_integer,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      sym__idt,
  [2370] = 7,
    ACTIONS(250), 1,
      sym_integer,
    ACTIONS(252), 1,
      sym_decimal,
    ACTIONS(256), 1,
      anon_sym_SQUOTE,
    ACTIONS(258), 1,
      anon_sym_DQUOTE,
    STATE(223), 1,
      sym_value,
    STATE(240), 2,
      sym_boolean_literal,
      sym_string_literal,
    ACTIONS(254), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
  [2395] = 7,
    ACTIONS(124), 1,
      sym_integer,
    ACTIONS(126), 1,
      sym_decimal,
    ACTIONS(130), 1,
      anon_sym_SQUOTE,
    ACTIONS(132), 1,
      anon_sym_DQUOTE,
    STATE(231), 1,
      sym_value,
    STATE(119), 2,
      sym_boolean_literal,
      sym_string_literal,
    ACTIONS(248), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
  [2420] = 7,
    ACTIONS(250), 1,
      sym_integer,
    ACTIONS(252), 1,
      sym_decimal,
    ACTIONS(256), 1,
      anon_sym_SQUOTE,
    ACTIONS(258), 1,
      anon_sym_DQUOTE,
    STATE(199), 1,
      sym_value,
    STATE(240), 2,
      sym_boolean_literal,
      sym_string_literal,
    ACTIONS(254), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
  [2445] = 7,
    ACTIONS(250), 1,
      sym_integer,
    ACTIONS(252), 1,
      sym_decimal,
    ACTIONS(256), 1,
      anon_sym_SQUOTE,
    ACTIONS(258), 1,
      anon_sym_DQUOTE,
    STATE(208), 1,
      sym_value,
    STATE(240), 2,
      sym_boolean_literal,
      sym_string_literal,
    ACTIONS(254), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
  [2470] = 7,
    ACTIONS(124), 1,
      sym_integer,
    ACTIONS(126), 1,
      sym_decimal,
    ACTIONS(130), 1,
      anon_sym_SQUOTE,
    ACTIONS(132), 1,
      anon_sym_DQUOTE,
    STATE(255), 1,
      sym_value,
    STATE(119), 2,
      sym_boolean_literal,
      sym_string_literal,
    ACTIONS(248), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
  [2495] = 5,
    STATE(304), 1,
      sym_visibility,
    STATE(315), 1,
      sym_function_prototype,
    ACTIONS(262), 2,
      ts_builtin_sym_end,
      anon_sym_event,
    STATE(68), 2,
      sym_function_implementation,
      aux_sym_function_implementations_repeat1,
    ACTIONS(264), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [2515] = 5,
    STATE(304), 1,
      sym_visibility,
    STATE(315), 1,
      sym_function_prototype,
    ACTIONS(267), 2,
      ts_builtin_sym_end,
      anon_sym_event,
    STATE(68), 2,
      sym_function_implementation,
      aux_sym_function_implementations_repeat1,
    ACTIONS(184), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [2535] = 2,
    ACTIONS(234), 3,
      anon_sym_return,
      anon_sym_IF,
      sym__idt,
    ACTIONS(232), 5,
      anon_sym_RPAREN,
      sym_end_of_event,
      sym_comment,
      anon_sym_STAR,
      anon_sym_PLUS,
  [2548] = 2,
    ACTIONS(222), 3,
      anon_sym_return,
      anon_sym_IF,
      sym__idt,
    ACTIONS(220), 5,
      anon_sym_RPAREN,
      sym_end_of_event,
      sym_comment,
      anon_sym_STAR,
      anon_sym_PLUS,
  [2561] = 2,
    ACTIONS(226), 3,
      anon_sym_return,
      anon_sym_IF,
      sym__idt,
    ACTIONS(224), 5,
      anon_sym_RPAREN,
      sym_end_of_event,
      sym_comment,
      anon_sym_STAR,
      anon_sym_PLUS,
  [2574] = 2,
    ACTIONS(238), 3,
      anon_sym_return,
      anon_sym_IF,
      sym__idt,
    ACTIONS(236), 5,
      anon_sym_RPAREN,
      sym_end_of_event,
      sym_comment,
      anon_sym_STAR,
      anon_sym_PLUS,
  [2587] = 5,
    ACTIONS(269), 1,
      anon_sym_endprototypes,
    STATE(76), 1,
      aux_sym_forward_prototypes_repeat1,
    STATE(285), 1,
      sym_visibility,
    STATE(306), 1,
      sym_function_prototype,
    ACTIONS(184), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [2605] = 5,
    ACTIONS(188), 1,
      sym_newline,
    ACTIONS(271), 1,
      anon_sym_DOT,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(275), 1,
      sym__idt,
    ACTIONS(192), 3,
      anon_sym_LBRACK_RBRACK,
      anon_sym_EQ,
      anon_sym_COMMA,
  [2623] = 5,
    ACTIONS(277), 1,
      anon_sym_endprototypes,
    STATE(76), 1,
      aux_sym_forward_prototypes_repeat1,
    STATE(285), 1,
      sym_visibility,
    STATE(306), 1,
      sym_function_prototype,
    ACTIONS(279), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [2641] = 5,
    ACTIONS(282), 1,
      anon_sym_endprototypes,
    STATE(74), 1,
      aux_sym_forward_prototypes_repeat1,
    STATE(285), 1,
      sym_visibility,
    STATE(306), 1,
      sym_function_prototype,
    ACTIONS(184), 3,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [2659] = 5,
    ACTIONS(286), 1,
      aux_sym_string_literal_content_token1,
    ACTIONS(289), 1,
      aux_sym_string_literal_content_token2,
    ACTIONS(292), 1,
      sym_escape_sequence,
    ACTIONS(284), 2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    STATE(78), 2,
      sym_string_literal_content,
      aux_sym_string_literal_repeat1,
  [2677] = 5,
    ACTIONS(295), 1,
      anon_sym_DQUOTE,
    ACTIONS(297), 1,
      aux_sym_string_literal_content_token1,
    ACTIONS(299), 1,
      aux_sym_string_literal_content_token2,
    ACTIONS(301), 1,
      sym_escape_sequence,
    STATE(101), 2,
      sym_string_literal_content,
      aux_sym_string_literal_repeat1,
  [2694] = 6,
    ACTIONS(303), 1,
      anon_sym_RPAREN,
    ACTIONS(305), 1,
      anon_sym_ref,
    ACTIONS(307), 1,
      sym__idt,
    STATE(105), 1,
      aux_sym_function_parameters_repeat1,
    STATE(180), 1,
      sym_function_parameter,
    STATE(305), 1,
      sym_type,
  [2713] = 2,
    ACTIONS(309), 3,
      anon_sym_endfunction,
      anon_sym_endsubroutine,
      sym_comment,
    ACTIONS(311), 3,
      anon_sym_return,
      anon_sym_IF,
      sym__idt,
  [2724] = 2,
    ACTIONS(224), 3,
      anon_sym_endfunction,
      anon_sym_endsubroutine,
      sym_comment,
    ACTIONS(226), 3,
      anon_sym_return,
      anon_sym_IF,
      sym__idt,
  [2735] = 2,
    ACTIONS(236), 3,
      anon_sym_endfunction,
      anon_sym_endsubroutine,
      sym_comment,
    ACTIONS(238), 3,
      anon_sym_return,
      anon_sym_IF,
      sym__idt,
  [2746] = 2,
    ACTIONS(230), 1,
      sym__idt,
    ACTIONS(228), 5,
      anon_sym_endvariables,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
  [2757] = 2,
    ACTIONS(313), 3,
      anon_sym_endfunction,
      anon_sym_endsubroutine,
      sym_comment,
    ACTIONS(315), 3,
      anon_sym_return,
      anon_sym_IF,
      sym__idt,
  [2768] = 2,
    ACTIONS(232), 3,
      anon_sym_endfunction,
      anon_sym_endsubroutine,
      sym_comment,
    ACTIONS(234), 3,
      anon_sym_return,
      anon_sym_IF,
      sym__idt,
  [2779] = 2,
    ACTIONS(317), 3,
      anon_sym_endfunction,
      anon_sym_endsubroutine,
      sym_comment,
    ACTIONS(319), 3,
      anon_sym_return,
      anon_sym_IF,
      sym__idt,
  [2790] = 5,
    ACTIONS(297), 1,
      aux_sym_string_literal_content_token1,
    ACTIONS(299), 1,
      aux_sym_string_literal_content_token2,
    ACTIONS(321), 1,
      anon_sym_SQUOTE,
    ACTIONS(323), 1,
      sym_escape_sequence,
    STATE(92), 2,
      sym_string_literal_content,
      aux_sym_string_literal_repeat1,
  [2807] = 5,
    ACTIONS(297), 1,
      aux_sym_string_literal_content_token1,
    ACTIONS(299), 1,
      aux_sym_string_literal_content_token2,
    ACTIONS(321), 1,
      anon_sym_DQUOTE,
    ACTIONS(325), 1,
      sym_escape_sequence,
    STATE(93), 2,
      sym_string_literal_content,
      aux_sym_string_literal_repeat1,
  [2824] = 6,
    ACTIONS(305), 1,
      anon_sym_ref,
    ACTIONS(307), 1,
      sym__idt,
    ACTIONS(327), 1,
      anon_sym_RPAREN,
    STATE(94), 1,
      aux_sym_function_parameters_repeat1,
    STATE(180), 1,
      sym_function_parameter,
    STATE(305), 1,
      sym_type,
  [2843] = 2,
    ACTIONS(220), 3,
      anon_sym_endfunction,
      anon_sym_endsubroutine,
      sym_comment,
    ACTIONS(222), 3,
      anon_sym_return,
      anon_sym_IF,
      sym__idt,
  [2854] = 5,
    ACTIONS(297), 1,
      aux_sym_string_literal_content_token1,
    ACTIONS(299), 1,
      aux_sym_string_literal_content_token2,
    ACTIONS(329), 1,
      anon_sym_SQUOTE,
    ACTIONS(331), 1,
      sym_escape_sequence,
    STATE(78), 2,
      sym_string_literal_content,
      aux_sym_string_literal_repeat1,
  [2871] = 5,
    ACTIONS(297), 1,
      aux_sym_string_literal_content_token1,
    ACTIONS(299), 1,
      aux_sym_string_literal_content_token2,
    ACTIONS(329), 1,
      anon_sym_DQUOTE,
    ACTIONS(331), 1,
      sym_escape_sequence,
    STATE(78), 2,
      sym_string_literal_content,
      aux_sym_string_literal_repeat1,
  [2888] = 6,
    ACTIONS(305), 1,
      anon_sym_ref,
    ACTIONS(307), 1,
      sym__idt,
    ACTIONS(333), 1,
      anon_sym_RPAREN,
    STATE(121), 1,
      aux_sym_function_parameters_repeat1,
    STATE(180), 1,
      sym_function_parameter,
    STATE(305), 1,
      sym_type,
  [2907] = 2,
    ACTIONS(214), 1,
      sym__idt,
    ACTIONS(212), 5,
      anon_sym_endvariables,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
  [2918] = 5,
    ACTIONS(297), 1,
      aux_sym_string_literal_content_token1,
    ACTIONS(299), 1,
      aux_sym_string_literal_content_token2,
    ACTIONS(331), 1,
      sym_escape_sequence,
    ACTIONS(335), 1,
      anon_sym_SQUOTE,
    STATE(78), 2,
      sym_string_literal_content,
      aux_sym_string_literal_repeat1,
  [2935] = 5,
    ACTIONS(295), 1,
      anon_sym_SQUOTE,
    ACTIONS(297), 1,
      aux_sym_string_literal_content_token1,
    ACTIONS(299), 1,
      aux_sym_string_literal_content_token2,
    ACTIONS(337), 1,
      sym_escape_sequence,
    STATE(100), 2,
      sym_string_literal_content,
      aux_sym_string_literal_repeat1,
  [2952] = 5,
    ACTIONS(180), 1,
      ts_builtin_sym_end,
    ACTIONS(182), 1,
      anon_sym_event,
    STATE(22), 1,
      sym_event_prototype,
    STATE(320), 1,
      sym_event_implementations,
    STATE(145), 2,
      sym_event_implementation,
      aux_sym_event_implementations_repeat1,
  [2969] = 2,
    ACTIONS(339), 3,
      anon_sym_endfunction,
      anon_sym_endsubroutine,
      sym_comment,
    ACTIONS(341), 3,
      anon_sym_return,
      anon_sym_IF,
      sym__idt,
  [2980] = 5,
    ACTIONS(297), 1,
      aux_sym_string_literal_content_token1,
    ACTIONS(299), 1,
      aux_sym_string_literal_content_token2,
    ACTIONS(331), 1,
      sym_escape_sequence,
    ACTIONS(343), 1,
      anon_sym_SQUOTE,
    STATE(78), 2,
      sym_string_literal_content,
      aux_sym_string_literal_repeat1,
  [2997] = 5,
    ACTIONS(297), 1,
      aux_sym_string_literal_content_token1,
    ACTIONS(299), 1,
      aux_sym_string_literal_content_token2,
    ACTIONS(331), 1,
      sym_escape_sequence,
    ACTIONS(343), 1,
      anon_sym_DQUOTE,
    STATE(78), 2,
      sym_string_literal_content,
      aux_sym_string_literal_repeat1,
  [3014] = 6,
    ACTIONS(345), 1,
      anon_sym_endtype,
    ACTIONS(347), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(349), 1,
      anon_sym_EQ,
    ACTIONS(351), 1,
      anon_sym_COMMA,
    ACTIONS(353), 1,
      sym__idt,
    STATE(195), 1,
      aux_sym_class_variable_repeat1,
  [3033] = 5,
    ACTIONS(297), 1,
      aux_sym_string_literal_content_token1,
    ACTIONS(299), 1,
      aux_sym_string_literal_content_token2,
    ACTIONS(355), 1,
      anon_sym_SQUOTE,
    ACTIONS(357), 1,
      sym_escape_sequence,
    STATE(106), 2,
      sym_string_literal_content,
      aux_sym_string_literal_repeat1,
  [3050] = 5,
    ACTIONS(297), 1,
      aux_sym_string_literal_content_token1,
    ACTIONS(299), 1,
      aux_sym_string_literal_content_token2,
    ACTIONS(355), 1,
      anon_sym_DQUOTE,
    ACTIONS(359), 1,
      sym_escape_sequence,
    STATE(107), 2,
      sym_string_literal_content,
      aux_sym_string_literal_repeat1,
  [3067] = 6,
    ACTIONS(305), 1,
      anon_sym_ref,
    ACTIONS(307), 1,
      sym__idt,
    ACTIONS(361), 1,
      anon_sym_RPAREN,
    STATE(121), 1,
      aux_sym_function_parameters_repeat1,
    STATE(180), 1,
      sym_function_parameter,
    STATE(305), 1,
      sym_type,
  [3086] = 5,
    ACTIONS(297), 1,
      aux_sym_string_literal_content_token1,
    ACTIONS(299), 1,
      aux_sym_string_literal_content_token2,
    ACTIONS(331), 1,
      sym_escape_sequence,
    ACTIONS(363), 1,
      anon_sym_SQUOTE,
    STATE(78), 2,
      sym_string_literal_content,
      aux_sym_string_literal_repeat1,
  [3103] = 5,
    ACTIONS(297), 1,
      aux_sym_string_literal_content_token1,
    ACTIONS(299), 1,
      aux_sym_string_literal_content_token2,
    ACTIONS(331), 1,
      sym_escape_sequence,
    ACTIONS(363), 1,
      anon_sym_DQUOTE,
    STATE(78), 2,
      sym_string_literal_content,
      aux_sym_string_literal_repeat1,
  [3120] = 2,
    ACTIONS(365), 3,
      anon_sym_endfunction,
      anon_sym_endsubroutine,
      sym_comment,
    ACTIONS(367), 3,
      anon_sym_return,
      anon_sym_IF,
      sym__idt,
  [3131] = 5,
    ACTIONS(297), 1,
      aux_sym_string_literal_content_token1,
    ACTIONS(299), 1,
      aux_sym_string_literal_content_token2,
    ACTIONS(369), 1,
      anon_sym_SQUOTE,
    ACTIONS(371), 1,
      sym_escape_sequence,
    STATE(112), 2,
      sym_string_literal_content,
      aux_sym_string_literal_repeat1,
  [3148] = 5,
    ACTIONS(297), 1,
      aux_sym_string_literal_content_token1,
    ACTIONS(299), 1,
      aux_sym_string_literal_content_token2,
    ACTIONS(369), 1,
      anon_sym_DQUOTE,
    ACTIONS(373), 1,
      sym_escape_sequence,
    STATE(113), 2,
      sym_string_literal_content,
      aux_sym_string_literal_repeat1,
  [3165] = 5,
    ACTIONS(297), 1,
      aux_sym_string_literal_content_token1,
    ACTIONS(299), 1,
      aux_sym_string_literal_content_token2,
    ACTIONS(375), 1,
      anon_sym_DQUOTE,
    ACTIONS(377), 1,
      sym_escape_sequence,
    STATE(123), 2,
      sym_string_literal_content,
      aux_sym_string_literal_repeat1,
  [3182] = 5,
    ACTIONS(297), 1,
      aux_sym_string_literal_content_token1,
    ACTIONS(299), 1,
      aux_sym_string_literal_content_token2,
    ACTIONS(331), 1,
      sym_escape_sequence,
    ACTIONS(379), 1,
      anon_sym_SQUOTE,
    STATE(78), 2,
      sym_string_literal_content,
      aux_sym_string_literal_repeat1,
  [3199] = 5,
    ACTIONS(297), 1,
      aux_sym_string_literal_content_token1,
    ACTIONS(299), 1,
      aux_sym_string_literal_content_token2,
    ACTIONS(331), 1,
      sym_escape_sequence,
    ACTIONS(379), 1,
      anon_sym_DQUOTE,
    STATE(78), 2,
      sym_string_literal_content,
      aux_sym_string_literal_repeat1,
  [3216] = 5,
    ACTIONS(297), 1,
      aux_sym_string_literal_content_token1,
    ACTIONS(299), 1,
      aux_sym_string_literal_content_token2,
    ACTIONS(375), 1,
      anon_sym_SQUOTE,
    ACTIONS(381), 1,
      sym_escape_sequence,
    STATE(96), 2,
      sym_string_literal_content,
      aux_sym_string_literal_repeat1,
  [3233] = 4,
    ACTIONS(188), 1,
      sym_newline,
    ACTIONS(271), 1,
      anon_sym_DOT,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 3,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
  [3248] = 6,
    ACTIONS(345), 1,
      anon_sym_endvariables,
    ACTIONS(353), 1,
      sym__idt,
    ACTIONS(383), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(385), 1,
      anon_sym_EQ,
    ACTIONS(387), 1,
      anon_sym_COMMA,
    STATE(174), 1,
      aux_sym_class_variable_repeat1,
  [3267] = 2,
    ACTIONS(389), 3,
      anon_sym_endfunction,
      anon_sym_endsubroutine,
      sym_comment,
    ACTIONS(391), 3,
      anon_sym_return,
      anon_sym_IF,
      sym__idt,
  [3278] = 2,
    ACTIONS(218), 1,
      sym__idt,
    ACTIONS(216), 5,
      anon_sym_endvariables,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
  [3289] = 2,
    ACTIONS(210), 1,
      sym__idt,
    ACTIONS(208), 5,
      anon_sym_endvariables,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
  [3300] = 3,
    ACTIONS(186), 1,
      anon_sym_DOT,
    ACTIONS(190), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 4,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_THEN,
  [3313] = 6,
    ACTIONS(393), 1,
      anon_sym_RPAREN,
    ACTIONS(395), 1,
      anon_sym_ref,
    ACTIONS(398), 1,
      sym__idt,
    STATE(121), 1,
      aux_sym_function_parameters_repeat1,
    STATE(180), 1,
      sym_function_parameter,
    STATE(305), 1,
      sym_type,
  [3332] = 5,
    ACTIONS(182), 1,
      anon_sym_event,
    ACTIONS(401), 1,
      ts_builtin_sym_end,
    STATE(22), 1,
      sym_event_prototype,
    STATE(312), 1,
      sym_event_implementations,
    STATE(145), 2,
      sym_event_implementation,
      aux_sym_event_implementations_repeat1,
  [3349] = 5,
    ACTIONS(297), 1,
      aux_sym_string_literal_content_token1,
    ACTIONS(299), 1,
      aux_sym_string_literal_content_token2,
    ACTIONS(331), 1,
      sym_escape_sequence,
    ACTIONS(335), 1,
      anon_sym_DQUOTE,
    STATE(78), 2,
      sym_string_literal_content,
      aux_sym_string_literal_repeat1,
  [3366] = 4,
    ACTIONS(307), 1,
      sym__idt,
    ACTIONS(403), 1,
      anon_sym_endtype,
    STATE(269), 1,
      sym_type,
    STATE(142), 2,
      sym_class_variable,
      aux_sym_class_properties_repeat1,
  [3380] = 2,
    ACTIONS(407), 1,
      aux_sym_string_literal_content_token1,
    ACTIONS(405), 4,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      aux_sym_string_literal_content_token2,
      sym_escape_sequence,
  [3390] = 2,
    ACTIONS(407), 1,
      aux_sym_string_literal_content_token1,
    ACTIONS(405), 4,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      aux_sym_string_literal_content_token2,
      sym_escape_sequence,
  [3400] = 4,
    ACTIONS(307), 1,
      sym__idt,
    ACTIONS(403), 1,
      anon_sym_endvariables,
    STATE(293), 1,
      sym_type,
    STATE(135), 2,
      sym_class_variable,
      aux_sym_class_properties_repeat1,
  [3414] = 2,
    ACTIONS(409), 2,
      sym_end_of_event,
      sym_comment,
    ACTIONS(411), 3,
      anon_sym_return,
      anon_sym_IF,
      sym__idt,
  [3424] = 1,
    ACTIONS(413), 5,
      ts_builtin_sym_end,
      anon_sym_event,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [3432] = 4,
    ACTIONS(415), 1,
      sym__idt,
    STATE(265), 1,
      sym_function_name,
    STATE(352), 1,
      sym_object_name,
    STATE(73), 2,
      sym_object_method_call,
      sym_function_call,
  [3446] = 2,
    ACTIONS(309), 2,
      sym_end_of_event,
      sym_comment,
    ACTIONS(311), 3,
      anon_sym_return,
      anon_sym_IF,
      sym__idt,
  [3456] = 4,
    ACTIONS(417), 1,
      anon_sym_COMMA,
    ACTIONS(421), 1,
      sym_newline,
    STATE(225), 1,
      aux_sym_variable_repeat1,
    ACTIONS(419), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
  [3470] = 4,
    ACTIONS(423), 1,
      sym__idt,
    STATE(269), 1,
      sym_type,
    STATE(358), 1,
      sym_class_properties,
    STATE(124), 2,
      sym_class_variable,
      aux_sym_class_properties_repeat1,
  [3484] = 2,
    ACTIONS(192), 1,
      sym__idt,
    ACTIONS(188), 4,
      anon_sym_endvariables,
      anon_sym_LBRACK_RBRACK,
      anon_sym_EQ,
      anon_sym_COMMA,
  [3494] = 4,
    ACTIONS(425), 1,
      anon_sym_endvariables,
    ACTIONS(427), 1,
      sym__idt,
    STATE(293), 1,
      sym_type,
    STATE(135), 2,
      sym_class_variable,
      aux_sym_class_properties_repeat1,
  [3508] = 2,
    ACTIONS(313), 2,
      sym_end_of_event,
      sym_comment,
    ACTIONS(315), 3,
      anon_sym_return,
      anon_sym_IF,
      sym__idt,
  [3518] = 1,
    ACTIONS(430), 5,
      ts_builtin_sym_end,
      anon_sym_event,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [3526] = 4,
    ACTIONS(417), 1,
      anon_sym_COMMA,
    ACTIONS(432), 1,
      sym_newline,
    STATE(234), 1,
      aux_sym_variable_repeat1,
    ACTIONS(419), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
  [3540] = 4,
    ACTIONS(417), 1,
      anon_sym_COMMA,
    ACTIONS(434), 1,
      sym_newline,
    STATE(244), 1,
      aux_sym_variable_repeat1,
    ACTIONS(419), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
  [3554] = 2,
    ACTIONS(317), 2,
      sym_end_of_event,
      sym_comment,
    ACTIONS(319), 3,
      anon_sym_return,
      anon_sym_IF,
      sym__idt,
  [3564] = 2,
    ACTIONS(192), 1,
      sym__idt,
    ACTIONS(188), 4,
      anon_sym_endtype,
      anon_sym_LBRACK_RBRACK,
      anon_sym_EQ,
      anon_sym_COMMA,
  [3574] = 4,
    ACTIONS(425), 1,
      anon_sym_endtype,
    ACTIONS(427), 1,
      sym__idt,
    STATE(269), 1,
      sym_type,
    STATE(142), 2,
      sym_class_variable,
      aux_sym_class_properties_repeat1,
  [3588] = 5,
    ACTIONS(351), 1,
      anon_sym_COMMA,
    ACTIONS(436), 1,
      anon_sym_endtype,
    ACTIONS(438), 1,
      anon_sym_EQ,
    ACTIONS(440), 1,
      sym__idt,
    STATE(196), 1,
      aux_sym_class_variable_repeat1,
  [3604] = 4,
    ACTIONS(444), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(446), 1,
      anon_sym_EQ,
    ACTIONS(448), 1,
      sym__idt,
    ACTIONS(442), 2,
      anon_sym_endtype,
      anon_sym_COMMA,
  [3618] = 4,
    ACTIONS(182), 1,
      anon_sym_event,
    ACTIONS(450), 1,
      ts_builtin_sym_end,
    STATE(22), 1,
      sym_event_prototype,
    STATE(161), 2,
      sym_event_implementation,
      aux_sym_event_implementations_repeat1,
  [3632] = 5,
    ACTIONS(387), 1,
      anon_sym_COMMA,
    ACTIONS(436), 1,
      anon_sym_endvariables,
    ACTIONS(440), 1,
      sym__idt,
    ACTIONS(452), 1,
      anon_sym_EQ,
    STATE(201), 1,
      aux_sym_class_variable_repeat1,
  [3648] = 1,
    ACTIONS(454), 5,
      ts_builtin_sym_end,
      anon_sym_event,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [3656] = 4,
    ACTIONS(415), 1,
      sym__idt,
    STATE(297), 1,
      sym_function_name,
    STATE(349), 1,
      sym_object_name,
    STATE(159), 2,
      sym_object_method_call,
      sym_function_call,
  [3670] = 2,
    ACTIONS(389), 2,
      sym_comment,
      anon_sym_ENDIF,
    ACTIONS(391), 3,
      anon_sym_return,
      anon_sym_IF,
      sym__idt,
  [3680] = 2,
    ACTIONS(339), 2,
      sym_comment,
      anon_sym_ENDIF,
    ACTIONS(341), 3,
      anon_sym_return,
      anon_sym_IF,
      sym__idt,
  [3690] = 2,
    ACTIONS(309), 2,
      sym_comment,
      anon_sym_ENDIF,
    ACTIONS(311), 3,
      anon_sym_return,
      anon_sym_IF,
      sym__idt,
  [3700] = 5,
    ACTIONS(456), 1,
      anon_sym_typevariables,
    ACTIONS(458), 1,
      sym__idt,
    STATE(278), 1,
      sym_global_class_dummy,
    STATE(284), 1,
      sym_class_variables,
    STATE(341), 1,
      sym_dummy_keyword,
  [3716] = 2,
    ACTIONS(313), 2,
      sym_comment,
      anon_sym_ENDIF,
    ACTIONS(315), 3,
      anon_sym_return,
      anon_sym_IF,
      sym__idt,
  [3726] = 2,
    ACTIONS(317), 2,
      sym_comment,
      anon_sym_ENDIF,
    ACTIONS(319), 3,
      anon_sym_return,
      anon_sym_IF,
      sym__idt,
  [3736] = 5,
    ACTIONS(417), 1,
      anon_sym_COMMA,
    ACTIONS(460), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(462), 1,
      anon_sym_EQ,
    ACTIONS(464), 1,
      sym_newline,
    STATE(256), 1,
      aux_sym_variable_repeat1,
  [3752] = 2,
    ACTIONS(365), 2,
      sym_end_of_event,
      sym_comment,
    ACTIONS(367), 3,
      anon_sym_return,
      anon_sym_IF,
      sym__idt,
  [3762] = 2,
    ACTIONS(220), 2,
      sym_comment,
      anon_sym_ENDIF,
    ACTIONS(222), 3,
      anon_sym_return,
      anon_sym_IF,
      sym__idt,
  [3772] = 2,
    ACTIONS(224), 2,
      sym_comment,
      anon_sym_ENDIF,
    ACTIONS(226), 3,
      anon_sym_return,
      anon_sym_IF,
      sym__idt,
  [3782] = 2,
    ACTIONS(236), 2,
      sym_comment,
      anon_sym_ENDIF,
    ACTIONS(238), 3,
      anon_sym_return,
      anon_sym_IF,
      sym__idt,
  [3792] = 2,
    ACTIONS(232), 2,
      sym_comment,
      anon_sym_ENDIF,
    ACTIONS(234), 3,
      anon_sym_return,
      anon_sym_IF,
      sym__idt,
  [3802] = 4,
    ACTIONS(466), 1,
      ts_builtin_sym_end,
    ACTIONS(468), 1,
      anon_sym_event,
    STATE(22), 1,
      sym_event_prototype,
    STATE(161), 2,
      sym_event_implementation,
      aux_sym_event_implementations_repeat1,
  [3816] = 4,
    ACTIONS(415), 1,
      sym__idt,
    STATE(270), 1,
      sym_function_name,
    STATE(340), 1,
      sym_object_name,
    STATE(83), 2,
      sym_object_method_call,
      sym_function_call,
  [3830] = 4,
    ACTIONS(423), 1,
      sym__idt,
    STATE(293), 1,
      sym_type,
    STATE(331), 1,
      sym_class_properties,
    STATE(127), 2,
      sym_class_variable,
      aux_sym_class_properties_repeat1,
  [3844] = 4,
    ACTIONS(448), 1,
      sym__idt,
    ACTIONS(471), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(473), 1,
      anon_sym_EQ,
    ACTIONS(442), 2,
      anon_sym_endvariables,
      anon_sym_COMMA,
  [3858] = 4,
    ACTIONS(415), 1,
      sym__idt,
    STATE(280), 1,
      sym_function_name,
    STATE(344), 1,
      sym_object_name,
    STATE(187), 2,
      sym_object_method_call,
      sym_function_call,
  [3872] = 1,
    ACTIONS(475), 5,
      ts_builtin_sym_end,
      anon_sym_event,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [3880] = 4,
    ACTIONS(415), 1,
      sym__idt,
    STATE(287), 1,
      sym_function_name,
    STATE(347), 1,
      sym_object_name,
    STATE(238), 2,
      sym_object_method_call,
      sym_function_call,
  [3894] = 1,
    ACTIONS(477), 5,
      ts_builtin_sym_end,
      anon_sym_event,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [3902] = 2,
    ACTIONS(389), 2,
      sym_end_of_event,
      sym_comment,
    ACTIONS(391), 3,
      anon_sym_return,
      anon_sym_IF,
      sym__idt,
  [3912] = 4,
    ACTIONS(415), 1,
      sym__idt,
    STATE(291), 1,
      sym_function_name,
    STATE(348), 1,
      sym_object_name,
    STATE(57), 2,
      sym_object_method_call,
      sym_function_call,
  [3926] = 2,
    ACTIONS(339), 2,
      sym_end_of_event,
      sym_comment,
    ACTIONS(341), 3,
      anon_sym_return,
      anon_sym_IF,
      sym__idt,
  [3936] = 5,
    ACTIONS(417), 1,
      anon_sym_COMMA,
    ACTIONS(479), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(481), 1,
      anon_sym_EQ,
    ACTIONS(483), 1,
      sym_newline,
    STATE(233), 1,
      aux_sym_variable_repeat1,
  [3952] = 2,
    ACTIONS(365), 2,
      sym_comment,
      anon_sym_ENDIF,
    ACTIONS(367), 3,
      anon_sym_return,
      anon_sym_IF,
      sym__idt,
  [3962] = 4,
    ACTIONS(387), 1,
      anon_sym_COMMA,
    ACTIONS(485), 1,
      anon_sym_endvariables,
    ACTIONS(487), 1,
      sym__idt,
    STATE(206), 1,
      aux_sym_class_variable_repeat1,
  [3975] = 1,
    ACTIONS(204), 4,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_THEN,
  [3982] = 1,
    ACTIONS(196), 4,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_THEN,
  [3989] = 1,
    ACTIONS(277), 4,
      anon_sym_endprototypes,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
  [3996] = 4,
    ACTIONS(489), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(491), 1,
      anon_sym_EQ,
    ACTIONS(493), 1,
      anon_sym_COMMA,
    ACTIONS(495), 1,
      sym_newline,
  [4009] = 2,
    ACTIONS(188), 1,
      sym_newline,
    ACTIONS(192), 3,
      anon_sym_LBRACK_RBRACK,
      anon_sym_EQ,
      anon_sym_COMMA,
  [4018] = 3,
    ACTIONS(497), 1,
      anon_sym_COMMA,
    ACTIONS(499), 1,
      anon_sym_RPAREN,
    ACTIONS(501), 2,
      anon_sym_ref,
      sym__idt,
  [4029] = 3,
    ACTIONS(503), 1,
      anon_sym_endforward,
    ACTIONS(505), 1,
      anon_sym_type,
    STATE(200), 2,
      sym_forward_type,
      aux_sym_forward_types_repeat1,
  [4040] = 2,
    ACTIONS(507), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(509), 2,
      anon_sym_ref,
      sym__idt,
  [4049] = 4,
    ACTIONS(387), 1,
      anon_sym_COMMA,
    ACTIONS(511), 1,
      anon_sym_endvariables,
    ACTIONS(513), 1,
      sym__idt,
    STATE(206), 1,
      aux_sym_class_variable_repeat1,
  [4062] = 2,
    ACTIONS(220), 1,
      sym_newline,
    ACTIONS(222), 3,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
  [4071] = 3,
    ACTIONS(515), 1,
      anon_sym_COMMA,
    ACTIONS(517), 1,
      sym_newline,
    ACTIONS(419), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
  [4082] = 2,
    ACTIONS(224), 1,
      sym_newline,
    ACTIONS(226), 3,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
  [4091] = 2,
    ACTIONS(236), 1,
      sym_newline,
    ACTIONS(238), 3,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
  [4100] = 3,
    ACTIONS(519), 1,
      anon_sym_COMMA,
    ACTIONS(521), 1,
      sym_newline,
    ACTIONS(419), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
  [4111] = 4,
    ACTIONS(387), 1,
      anon_sym_COMMA,
    ACTIONS(523), 1,
      anon_sym_endvariables,
    ACTIONS(525), 1,
      sym__idt,
    STATE(206), 1,
      aux_sym_class_variable_repeat1,
  [4124] = 2,
    ACTIONS(232), 1,
      sym_newline,
    ACTIONS(234), 3,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
  [4133] = 1,
    ACTIONS(527), 4,
      anon_sym_DOT,
      anon_sym_from,
      anon_sym_endtype,
      anon_sym_within,
  [4140] = 2,
    ACTIONS(188), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(192), 2,
      anon_sym_ref,
      sym__idt,
  [4149] = 4,
    ACTIONS(417), 1,
      anon_sym_COMMA,
    ACTIONS(421), 1,
      sym_newline,
    ACTIONS(529), 1,
      anon_sym_EQ,
    STATE(224), 1,
      aux_sym_variable_repeat1,
  [4162] = 4,
    ACTIONS(387), 1,
      anon_sym_COMMA,
    ACTIONS(531), 1,
      anon_sym_endvariables,
    ACTIONS(533), 1,
      sym__idt,
    STATE(183), 1,
      aux_sym_class_variable_repeat1,
  [4175] = 4,
    ACTIONS(351), 1,
      anon_sym_COMMA,
    ACTIONS(485), 1,
      anon_sym_endtype,
    ACTIONS(487), 1,
      sym__idt,
    STATE(203), 1,
      aux_sym_class_variable_repeat1,
  [4188] = 4,
    ACTIONS(351), 1,
      anon_sym_COMMA,
    ACTIONS(535), 1,
      anon_sym_endtype,
    ACTIONS(537), 1,
      sym__idt,
    STATE(203), 1,
      aux_sym_class_variable_repeat1,
  [4201] = 2,
    ACTIONS(208), 1,
      sym_newline,
    ACTIONS(210), 3,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
  [4210] = 2,
    ACTIONS(228), 1,
      sym_newline,
    ACTIONS(230), 3,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
  [4219] = 4,
    ACTIONS(351), 1,
      anon_sym_COMMA,
    ACTIONS(539), 1,
      anon_sym_endtype,
    ACTIONS(541), 1,
      sym__idt,
    STATE(210), 1,
      aux_sym_class_variable_repeat1,
  [4232] = 3,
    ACTIONS(505), 1,
      anon_sym_type,
    ACTIONS(543), 1,
      anon_sym_endforward,
    STATE(214), 2,
      sym_forward_type,
      aux_sym_forward_types_repeat1,
  [4243] = 4,
    ACTIONS(387), 1,
      anon_sym_COMMA,
    ACTIONS(535), 1,
      anon_sym_endvariables,
    ACTIONS(537), 1,
      sym__idt,
    STATE(206), 1,
      aux_sym_class_variable_repeat1,
  [4256] = 2,
    ACTIONS(204), 1,
      sym_newline,
    ACTIONS(206), 3,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
  [4265] = 4,
    ACTIONS(545), 1,
      anon_sym_endtype,
    ACTIONS(547), 1,
      anon_sym_COMMA,
    ACTIONS(550), 1,
      sym__idt,
    STATE(203), 1,
      aux_sym_class_variable_repeat1,
  [4278] = 4,
    ACTIONS(387), 1,
      anon_sym_COMMA,
    ACTIONS(539), 1,
      anon_sym_endvariables,
    ACTIONS(541), 1,
      sym__idt,
    STATE(189), 1,
      aux_sym_class_variable_repeat1,
  [4291] = 2,
    ACTIONS(196), 1,
      sym_newline,
    ACTIONS(198), 3,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
  [4300] = 4,
    ACTIONS(545), 1,
      anon_sym_endvariables,
    ACTIONS(550), 1,
      sym__idt,
    ACTIONS(552), 1,
      anon_sym_COMMA,
    STATE(206), 1,
      aux_sym_class_variable_repeat1,
  [4313] = 1,
    ACTIONS(200), 4,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_THEN,
  [4320] = 4,
    ACTIONS(351), 1,
      anon_sym_COMMA,
    ACTIONS(531), 1,
      anon_sym_endtype,
    ACTIONS(533), 1,
      sym__idt,
    STATE(215), 1,
      aux_sym_class_variable_repeat1,
  [4333] = 2,
    ACTIONS(212), 1,
      sym_newline,
    ACTIONS(214), 3,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
  [4342] = 4,
    ACTIONS(351), 1,
      anon_sym_COMMA,
    ACTIONS(523), 1,
      anon_sym_endtype,
    ACTIONS(525), 1,
      sym__idt,
    STATE(203), 1,
      aux_sym_class_variable_repeat1,
  [4355] = 3,
    ACTIONS(557), 1,
      anon_sym_EQ,
    ACTIONS(559), 1,
      sym__idt,
    ACTIONS(555), 2,
      anon_sym_endtype,
      anon_sym_COMMA,
  [4366] = 2,
    ACTIONS(200), 1,
      sym_newline,
    ACTIONS(202), 3,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
  [4375] = 3,
    ACTIONS(559), 1,
      sym__idt,
    ACTIONS(561), 1,
      anon_sym_EQ,
    ACTIONS(555), 2,
      anon_sym_endvariables,
      anon_sym_COMMA,
  [4386] = 3,
    ACTIONS(563), 1,
      anon_sym_endforward,
    ACTIONS(565), 1,
      anon_sym_type,
    STATE(214), 2,
      sym_forward_type,
      aux_sym_forward_types_repeat1,
  [4397] = 4,
    ACTIONS(351), 1,
      anon_sym_COMMA,
    ACTIONS(511), 1,
      anon_sym_endtype,
    ACTIONS(513), 1,
      sym__idt,
    STATE(203), 1,
      aux_sym_class_variable_repeat1,
  [4410] = 2,
    ACTIONS(216), 1,
      sym_newline,
    ACTIONS(218), 3,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
  [4419] = 4,
    ACTIONS(417), 1,
      anon_sym_COMMA,
    ACTIONS(481), 1,
      anon_sym_EQ,
    ACTIONS(483), 1,
      sym_newline,
    STATE(258), 1,
      aux_sym_variable_repeat1,
  [4432] = 2,
    ACTIONS(568), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(570), 2,
      anon_sym_ref,
      sym__idt,
  [4441] = 2,
    ACTIONS(572), 1,
      anon_sym_RPAREN,
    ACTIONS(574), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
  [4449] = 2,
    ACTIONS(393), 1,
      anon_sym_RPAREN,
    ACTIONS(576), 2,
      anon_sym_ref,
      sym__idt,
  [4457] = 2,
    ACTIONS(580), 1,
      sym__idt,
    ACTIONS(578), 2,
      anon_sym_endtype,
      anon_sym_COMMA,
  [4465] = 2,
    ACTIONS(582), 1,
      sym_newline,
    ACTIONS(419), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
  [4473] = 2,
    ACTIONS(586), 1,
      sym__idt,
    ACTIONS(584), 2,
      anon_sym_endtype,
      anon_sym_COMMA,
  [4481] = 3,
    ACTIONS(417), 1,
      anon_sym_COMMA,
    ACTIONS(588), 1,
      sym_newline,
    STATE(245), 1,
      aux_sym_variable_repeat1,
  [4491] = 3,
    ACTIONS(417), 1,
      anon_sym_COMMA,
    ACTIONS(588), 1,
      sym_newline,
    STATE(245), 1,
      aux_sym_variable_repeat1,
  [4501] = 3,
    ACTIONS(590), 1,
      anon_sym_EQ,
    ACTIONS(592), 1,
      anon_sym_COMMA,
    ACTIONS(594), 1,
      sym_newline,
  [4511] = 1,
    ACTIONS(208), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_THEN,
  [4517] = 1,
    ACTIONS(228), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_THEN,
  [4523] = 3,
    ACTIONS(596), 1,
      anon_sym_LPAREN,
    STATE(318), 1,
      sym_function_parameters,
    STATE(321), 1,
      sym_event_parameters,
  [4533] = 1,
    ACTIONS(212), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_THEN,
  [4539] = 2,
    ACTIONS(586), 1,
      sym__idt,
    ACTIONS(584), 2,
      anon_sym_endvariables,
      anon_sym_COMMA,
  [4547] = 1,
    ACTIONS(216), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_THEN,
  [4553] = 3,
    ACTIONS(417), 1,
      anon_sym_COMMA,
    ACTIONS(598), 1,
      sym_newline,
    STATE(245), 1,
      aux_sym_variable_repeat1,
  [4563] = 3,
    ACTIONS(417), 1,
      anon_sym_COMMA,
    ACTIONS(600), 1,
      sym_newline,
    STATE(245), 1,
      aux_sym_variable_repeat1,
  [4573] = 2,
    ACTIONS(604), 1,
      anon_sym_THEN,
    ACTIONS(602), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
  [4581] = 1,
    ACTIONS(220), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_THEN,
  [4587] = 1,
    ACTIONS(224), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_THEN,
  [4593] = 1,
    ACTIONS(236), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_THEN,
  [4599] = 1,
    ACTIONS(232), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_THEN,
  [4605] = 2,
    ACTIONS(210), 1,
      sym__idt,
    ACTIONS(208), 2,
      anon_sym_endtype,
      anon_sym_COMMA,
  [4613] = 2,
    ACTIONS(230), 1,
      sym__idt,
    ACTIONS(228), 2,
      anon_sym_endtype,
      anon_sym_COMMA,
  [4621] = 2,
    ACTIONS(214), 1,
      sym__idt,
    ACTIONS(212), 2,
      anon_sym_endtype,
      anon_sym_COMMA,
  [4629] = 2,
    ACTIONS(218), 1,
      sym__idt,
    ACTIONS(216), 2,
      anon_sym_endtype,
      anon_sym_COMMA,
  [4637] = 3,
    ACTIONS(417), 1,
      anon_sym_COMMA,
    ACTIONS(606), 1,
      sym_newline,
    STATE(245), 1,
      aux_sym_variable_repeat1,
  [4647] = 3,
    ACTIONS(608), 1,
      anon_sym_COMMA,
    ACTIONS(611), 1,
      sym_newline,
    STATE(245), 1,
      aux_sym_variable_repeat1,
  [4657] = 2,
    ACTIONS(613), 1,
      sym_newline,
    ACTIONS(419), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
  [4665] = 2,
    ACTIONS(615), 1,
      anon_sym_RPAREN,
    ACTIONS(574), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
  [4673] = 2,
    ACTIONS(617), 1,
      sym_newline,
    ACTIONS(419), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
  [4681] = 2,
    ACTIONS(619), 1,
      sym_newline,
    ACTIONS(419), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
  [4689] = 2,
    ACTIONS(621), 1,
      anon_sym_RPAREN,
    ACTIONS(574), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
  [4697] = 2,
    ACTIONS(623), 1,
      sym_newline,
    ACTIONS(419), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
  [4705] = 2,
    STATE(129), 1,
      sym_end_of_function,
    ACTIONS(44), 2,
      anon_sym_endfunction,
      anon_sym_endsubroutine,
  [4713] = 2,
    ACTIONS(625), 1,
      sym_newline,
    ACTIONS(419), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
  [4721] = 2,
    ACTIONS(627), 1,
      anon_sym_THEN,
    ACTIONS(602), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
  [4729] = 2,
    ACTIONS(580), 1,
      sym__idt,
    ACTIONS(578), 2,
      anon_sym_endvariables,
      anon_sym_COMMA,
  [4737] = 3,
    ACTIONS(417), 1,
      anon_sym_COMMA,
    ACTIONS(629), 1,
      sym_newline,
    STATE(245), 1,
      aux_sym_variable_repeat1,
  [4747] = 2,
    ACTIONS(631), 1,
      anon_sym_THEN,
    ACTIONS(602), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
  [4755] = 3,
    ACTIONS(417), 1,
      anon_sym_COMMA,
    ACTIONS(598), 1,
      sym_newline,
    STATE(245), 1,
      aux_sym_variable_repeat1,
  [4765] = 2,
    ACTIONS(633), 1,
      sym__idt,
    STATE(360), 1,
      sym_class_name,
  [4772] = 2,
    ACTIONS(635), 1,
      sym__idt,
    STATE(229), 1,
      sym_event_name,
  [4779] = 2,
    ACTIONS(637), 1,
      sym__idt,
    STATE(172), 1,
      sym_local_variable,
  [4786] = 2,
    ACTIONS(639), 1,
      sym__idt,
    STATE(182), 1,
      sym_local_variable,
  [4793] = 2,
    ACTIONS(423), 1,
      sym__idt,
    STATE(283), 1,
      sym_type,
  [4800] = 2,
    ACTIONS(641), 1,
      anon_sym_LPAREN,
    STATE(311), 1,
      sym_function_parameters,
  [4807] = 2,
    ACTIONS(643), 1,
      anon_sym_LPAREN,
    STATE(71), 1,
      sym_function_call_parameters,
  [4814] = 2,
    ACTIONS(645), 1,
      anon_sym_globaltype,
    STATE(152), 1,
      sym_global_class_properties,
  [4821] = 2,
    ACTIONS(647), 1,
      sym__idt,
    STATE(164), 1,
      sym_local_variable,
  [4828] = 2,
    ACTIONS(423), 1,
      sym__idt,
    STATE(262), 1,
      sym_type,
  [4835] = 2,
    ACTIONS(649), 1,
      sym__idt,
    STATE(102), 1,
      sym_local_variable,
  [4842] = 2,
    ACTIONS(651), 1,
      anon_sym_LPAREN,
    STATE(91), 1,
      sym_function_call_parameters,
  [4849] = 2,
    ACTIONS(633), 1,
      sym__idt,
    STATE(325), 1,
      sym_class_name,
  [4856] = 2,
    ACTIONS(653), 1,
      anon_sym_typevariables,
    ACTIONS(655), 1,
      sym__idt,
  [4863] = 1,
    ACTIONS(657), 2,
      anon_sym_function,
      anon_sym_subroutine,
  [4868] = 2,
    ACTIONS(633), 1,
      sym__idt,
    STATE(339), 1,
      sym_class_name,
  [4875] = 2,
    ACTIONS(649), 1,
      sym__idt,
    STATE(144), 1,
      sym_local_variable,
  [4882] = 2,
    ACTIONS(596), 1,
      anon_sym_LPAREN,
    STATE(316), 1,
      sym_function_parameters,
  [4889] = 2,
    ACTIONS(633), 1,
      sym__idt,
    STATE(326), 1,
      sym_class_name,
  [4896] = 2,
    ACTIONS(456), 1,
      anon_sym_typevariables,
    STATE(292), 1,
      sym_class_variables,
  [4903] = 2,
    ACTIONS(659), 1,
      sym__idt,
    STATE(133), 1,
      sym_class_name,
  [4910] = 2,
    ACTIONS(661), 1,
      anon_sym_LPAREN,
    STATE(184), 1,
      sym_function_call_parameters,
  [4917] = 2,
    ACTIONS(663), 1,
      anon_sym_forward,
    STATE(266), 1,
      sym_forward_types,
  [4924] = 2,
    ACTIONS(186), 1,
      anon_sym_DOT,
    ACTIONS(190), 1,
      anon_sym_LPAREN,
  [4931] = 2,
    ACTIONS(665), 1,
      sym__idt,
    STATE(264), 1,
      sym_function_name,
  [4938] = 2,
    ACTIONS(667), 1,
      anon_sym_forwardprototypes,
    STATE(46), 1,
      sym_forward_prototypes,
  [4945] = 1,
    ACTIONS(669), 2,
      anon_sym_function,
      anon_sym_subroutine,
  [4950] = 2,
    ACTIONS(633), 1,
      sym__idt,
    STATE(332), 1,
      sym_class_name,
  [4957] = 2,
    ACTIONS(671), 1,
      anon_sym_LPAREN,
    STATE(236), 1,
      sym_function_call_parameters,
  [4964] = 1,
    ACTIONS(673), 2,
      anon_sym_endforward,
      anon_sym_type,
  [4969] = 1,
    ACTIONS(675), 2,
      anon_sym_endfunction,
      anon_sym_endsubroutine,
  [4974] = 2,
    ACTIONS(633), 1,
      sym__idt,
    STATE(334), 1,
      sym_class_name,
  [4981] = 2,
    ACTIONS(677), 1,
      anon_sym_LPAREN,
    STATE(53), 1,
      sym_function_call_parameters,
  [4988] = 2,
    ACTIONS(667), 1,
      anon_sym_forwardprototypes,
    STATE(44), 1,
      sym_forward_prototypes,
  [4995] = 2,
    ACTIONS(647), 1,
      sym__idt,
    STATE(116), 1,
      sym_local_variable,
  [5002] = 1,
    ACTIONS(679), 2,
      ts_builtin_sym_end,
      anon_sym_event,
  [5007] = 2,
    ACTIONS(681), 1,
      sym__idt,
    STATE(281), 1,
      sym_class_type,
  [5014] = 2,
    ACTIONS(683), 1,
      anon_sym_globaltype,
    STATE(181), 1,
      sym_class_inherit_from,
  [5021] = 2,
    ACTIONS(685), 1,
      anon_sym_LPAREN,
    STATE(157), 1,
      sym_function_call_parameters,
  [5028] = 2,
    ACTIONS(633), 1,
      sym__idt,
    STATE(330), 1,
      sym_class_name,
  [5035] = 1,
    ACTIONS(687), 2,
      anon_sym_endforward,
      anon_sym_type,
  [5040] = 2,
    ACTIONS(665), 1,
      sym__idt,
    STATE(276), 1,
      sym_function_name,
  [5047] = 2,
    ACTIONS(637), 1,
      sym__idt,
    STATE(178), 1,
      sym_local_variable,
  [5054] = 2,
    ACTIONS(423), 1,
      sym__idt,
    STATE(300), 1,
      sym_type,
  [5061] = 1,
    ACTIONS(689), 2,
      ts_builtin_sym_end,
      anon_sym_event,
  [5066] = 1,
    ACTIONS(691), 2,
      anon_sym_function,
      anon_sym_subroutine,
  [5071] = 2,
    ACTIONS(639), 1,
      sym__idt,
    STATE(218), 1,
      sym_local_variable,
  [5078] = 1,
    ACTIONS(693), 1,
      sym_newline,
  [5082] = 1,
    ACTIONS(695), 1,
      sym_newline,
  [5086] = 1,
    ACTIONS(697), 1,
      anon_sym_typevariables,
  [5090] = 1,
    ACTIONS(180), 1,
      ts_builtin_sym_end,
  [5094] = 1,
    ACTIONS(699), 1,
      anon_sym_SEMI,
  [5098] = 1,
    ACTIONS(701), 1,
      sym_newline,
  [5102] = 1,
    ACTIONS(703), 1,
      ts_builtin_sym_end,
  [5106] = 1,
    ACTIONS(705), 1,
      sym_newline,
  [5110] = 1,
    ACTIONS(527), 1,
      sym__idt,
  [5114] = 1,
    ACTIONS(707), 1,
      anon_sym_SEMI,
  [5118] = 1,
    ACTIONS(701), 1,
      anon_sym_SEMI,
  [5122] = 1,
    ACTIONS(709), 1,
      sym__idt,
  [5126] = 1,
    ACTIONS(711), 1,
      anon_sym_SEMI,
  [5130] = 1,
    ACTIONS(713), 1,
      sym_newline,
  [5134] = 1,
    ACTIONS(401), 1,
      ts_builtin_sym_end,
  [5138] = 1,
    ACTIONS(715), 1,
      anon_sym_SEMI,
  [5142] = 1,
    ACTIONS(717), 1,
      anon_sym_forwardprototypes,
  [5146] = 1,
    ACTIONS(190), 1,
      anon_sym_LPAREN,
  [5150] = 1,
    ACTIONS(719), 1,
      sym_newline,
  [5154] = 1,
    ACTIONS(721), 1,
      anon_sym_endtype,
  [5158] = 1,
    ACTIONS(723), 1,
      anon_sym_DOT,
  [5162] = 1,
    ACTIONS(725), 1,
      anon_sym_forward,
  [5166] = 1,
    ACTIONS(727), 1,
      sym_end_of_event,
  [5170] = 1,
    ACTIONS(729), 1,
      anon_sym_SEMI,
  [5174] = 1,
    ACTIONS(731), 1,
      anon_sym_from,
  [5178] = 1,
    ACTIONS(733), 1,
      anon_sym_endvariables,
  [5182] = 1,
    ACTIONS(735), 1,
      anon_sym_from,
  [5186] = 1,
    ACTIONS(699), 1,
      sym_newline,
  [5190] = 1,
    ACTIONS(737), 1,
      anon_sym_endtype,
  [5194] = 1,
    ACTIONS(739), 1,
      anon_sym_globaltype,
  [5198] = 1,
    ACTIONS(741), 1,
      sym_newline,
  [5202] = 1,
    ACTIONS(743), 1,
      sym__idt,
  [5206] = 1,
    ACTIONS(745), 1,
      sym_newline,
  [5210] = 1,
    ACTIONS(747), 1,
      anon_sym_within,
  [5214] = 1,
    ACTIONS(749), 1,
      anon_sym_DOT,
  [5218] = 1,
    ACTIONS(751), 1,
      sym__idt,
  [5222] = 1,
    ACTIONS(753), 1,
      anon_sym_globaltype,
  [5226] = 1,
    ACTIONS(755), 1,
      anon_sym_ENDIF,
  [5230] = 1,
    ACTIONS(757), 1,
      anon_sym_DOT,
  [5234] = 1,
    ACTIONS(759), 1,
      anon_sym_LPAREN,
  [5238] = 1,
    ACTIONS(761), 1,
      anon_sym_ENDIF,
  [5242] = 1,
    ACTIONS(763), 1,
      anon_sym_DOT,
  [5246] = 1,
    ACTIONS(765), 1,
      anon_sym_DOT,
  [5250] = 1,
    ACTIONS(767), 1,
      anon_sym_DOT,
  [5254] = 1,
    ACTIONS(769), 1,
      sym_end_of_event,
  [5258] = 1,
    ACTIONS(771), 1,
      ts_builtin_sym_end,
  [5262] = 1,
    ACTIONS(773), 1,
      anon_sym_DOT,
  [5266] = 1,
    ACTIONS(775), 1,
      sym_newline,
  [5270] = 1,
    ACTIONS(777), 1,
      sym_newline,
  [5274] = 1,
    ACTIONS(779), 1,
      sym_newline,
  [5278] = 1,
    ACTIONS(781), 1,
      sym__idt,
  [5282] = 1,
    ACTIONS(783), 1,
      anon_sym_ENDIF,
  [5286] = 1,
    ACTIONS(785), 1,
      anon_sym_endtype,
  [5290] = 1,
    ACTIONS(729), 1,
      sym_newline,
  [5294] = 1,
    ACTIONS(787), 1,
      anon_sym_from,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 51,
  [SMALL_STATE(4)] = 102,
  [SMALL_STATE(5)] = 155,
  [SMALL_STATE(6)] = 206,
  [SMALL_STATE(7)] = 257,
  [SMALL_STATE(8)] = 308,
  [SMALL_STATE(9)] = 359,
  [SMALL_STATE(10)] = 410,
  [SMALL_STATE(11)] = 461,
  [SMALL_STATE(12)] = 512,
  [SMALL_STATE(13)] = 563,
  [SMALL_STATE(14)] = 614,
  [SMALL_STATE(15)] = 665,
  [SMALL_STATE(16)] = 716,
  [SMALL_STATE(17)] = 762,
  [SMALL_STATE(18)] = 808,
  [SMALL_STATE(19)] = 854,
  [SMALL_STATE(20)] = 899,
  [SMALL_STATE(21)] = 944,
  [SMALL_STATE(22)] = 989,
  [SMALL_STATE(23)] = 1038,
  [SMALL_STATE(24)] = 1083,
  [SMALL_STATE(25)] = 1128,
  [SMALL_STATE(26)] = 1173,
  [SMALL_STATE(27)] = 1218,
  [SMALL_STATE(28)] = 1263,
  [SMALL_STATE(29)] = 1308,
  [SMALL_STATE(30)] = 1353,
  [SMALL_STATE(31)] = 1398,
  [SMALL_STATE(32)] = 1443,
  [SMALL_STATE(33)] = 1488,
  [SMALL_STATE(34)] = 1533,
  [SMALL_STATE(35)] = 1578,
  [SMALL_STATE(36)] = 1622,
  [SMALL_STATE(37)] = 1666,
  [SMALL_STATE(38)] = 1709,
  [SMALL_STATE(39)] = 1752,
  [SMALL_STATE(40)] = 1795,
  [SMALL_STATE(41)] = 1838,
  [SMALL_STATE(42)] = 1881,
  [SMALL_STATE(43)] = 1924,
  [SMALL_STATE(44)] = 1967,
  [SMALL_STATE(45)] = 2002,
  [SMALL_STATE(46)] = 2025,
  [SMALL_STATE(47)] = 2060,
  [SMALL_STATE(48)] = 2078,
  [SMALL_STATE(49)] = 2096,
  [SMALL_STATE(50)] = 2114,
  [SMALL_STATE(51)] = 2132,
  [SMALL_STATE(52)] = 2150,
  [SMALL_STATE(53)] = 2168,
  [SMALL_STATE(54)] = 2186,
  [SMALL_STATE(55)] = 2204,
  [SMALL_STATE(56)] = 2222,
  [SMALL_STATE(57)] = 2240,
  [SMALL_STATE(58)] = 2258,
  [SMALL_STATE(59)] = 2280,
  [SMALL_STATE(60)] = 2305,
  [SMALL_STATE(61)] = 2330,
  [SMALL_STATE(62)] = 2355,
  [SMALL_STATE(63)] = 2370,
  [SMALL_STATE(64)] = 2395,
  [SMALL_STATE(65)] = 2420,
  [SMALL_STATE(66)] = 2445,
  [SMALL_STATE(67)] = 2470,
  [SMALL_STATE(68)] = 2495,
  [SMALL_STATE(69)] = 2515,
  [SMALL_STATE(70)] = 2535,
  [SMALL_STATE(71)] = 2548,
  [SMALL_STATE(72)] = 2561,
  [SMALL_STATE(73)] = 2574,
  [SMALL_STATE(74)] = 2587,
  [SMALL_STATE(75)] = 2605,
  [SMALL_STATE(76)] = 2623,
  [SMALL_STATE(77)] = 2641,
  [SMALL_STATE(78)] = 2659,
  [SMALL_STATE(79)] = 2677,
  [SMALL_STATE(80)] = 2694,
  [SMALL_STATE(81)] = 2713,
  [SMALL_STATE(82)] = 2724,
  [SMALL_STATE(83)] = 2735,
  [SMALL_STATE(84)] = 2746,
  [SMALL_STATE(85)] = 2757,
  [SMALL_STATE(86)] = 2768,
  [SMALL_STATE(87)] = 2779,
  [SMALL_STATE(88)] = 2790,
  [SMALL_STATE(89)] = 2807,
  [SMALL_STATE(90)] = 2824,
  [SMALL_STATE(91)] = 2843,
  [SMALL_STATE(92)] = 2854,
  [SMALL_STATE(93)] = 2871,
  [SMALL_STATE(94)] = 2888,
  [SMALL_STATE(95)] = 2907,
  [SMALL_STATE(96)] = 2918,
  [SMALL_STATE(97)] = 2935,
  [SMALL_STATE(98)] = 2952,
  [SMALL_STATE(99)] = 2969,
  [SMALL_STATE(100)] = 2980,
  [SMALL_STATE(101)] = 2997,
  [SMALL_STATE(102)] = 3014,
  [SMALL_STATE(103)] = 3033,
  [SMALL_STATE(104)] = 3050,
  [SMALL_STATE(105)] = 3067,
  [SMALL_STATE(106)] = 3086,
  [SMALL_STATE(107)] = 3103,
  [SMALL_STATE(108)] = 3120,
  [SMALL_STATE(109)] = 3131,
  [SMALL_STATE(110)] = 3148,
  [SMALL_STATE(111)] = 3165,
  [SMALL_STATE(112)] = 3182,
  [SMALL_STATE(113)] = 3199,
  [SMALL_STATE(114)] = 3216,
  [SMALL_STATE(115)] = 3233,
  [SMALL_STATE(116)] = 3248,
  [SMALL_STATE(117)] = 3267,
  [SMALL_STATE(118)] = 3278,
  [SMALL_STATE(119)] = 3289,
  [SMALL_STATE(120)] = 3300,
  [SMALL_STATE(121)] = 3313,
  [SMALL_STATE(122)] = 3332,
  [SMALL_STATE(123)] = 3349,
  [SMALL_STATE(124)] = 3366,
  [SMALL_STATE(125)] = 3380,
  [SMALL_STATE(126)] = 3390,
  [SMALL_STATE(127)] = 3400,
  [SMALL_STATE(128)] = 3414,
  [SMALL_STATE(129)] = 3424,
  [SMALL_STATE(130)] = 3432,
  [SMALL_STATE(131)] = 3446,
  [SMALL_STATE(132)] = 3456,
  [SMALL_STATE(133)] = 3470,
  [SMALL_STATE(134)] = 3484,
  [SMALL_STATE(135)] = 3494,
  [SMALL_STATE(136)] = 3508,
  [SMALL_STATE(137)] = 3518,
  [SMALL_STATE(138)] = 3526,
  [SMALL_STATE(139)] = 3540,
  [SMALL_STATE(140)] = 3554,
  [SMALL_STATE(141)] = 3564,
  [SMALL_STATE(142)] = 3574,
  [SMALL_STATE(143)] = 3588,
  [SMALL_STATE(144)] = 3604,
  [SMALL_STATE(145)] = 3618,
  [SMALL_STATE(146)] = 3632,
  [SMALL_STATE(147)] = 3648,
  [SMALL_STATE(148)] = 3656,
  [SMALL_STATE(149)] = 3670,
  [SMALL_STATE(150)] = 3680,
  [SMALL_STATE(151)] = 3690,
  [SMALL_STATE(152)] = 3700,
  [SMALL_STATE(153)] = 3716,
  [SMALL_STATE(154)] = 3726,
  [SMALL_STATE(155)] = 3736,
  [SMALL_STATE(156)] = 3752,
  [SMALL_STATE(157)] = 3762,
  [SMALL_STATE(158)] = 3772,
  [SMALL_STATE(159)] = 3782,
  [SMALL_STATE(160)] = 3792,
  [SMALL_STATE(161)] = 3802,
  [SMALL_STATE(162)] = 3816,
  [SMALL_STATE(163)] = 3830,
  [SMALL_STATE(164)] = 3844,
  [SMALL_STATE(165)] = 3858,
  [SMALL_STATE(166)] = 3872,
  [SMALL_STATE(167)] = 3880,
  [SMALL_STATE(168)] = 3894,
  [SMALL_STATE(169)] = 3902,
  [SMALL_STATE(170)] = 3912,
  [SMALL_STATE(171)] = 3926,
  [SMALL_STATE(172)] = 3936,
  [SMALL_STATE(173)] = 3952,
  [SMALL_STATE(174)] = 3962,
  [SMALL_STATE(175)] = 3975,
  [SMALL_STATE(176)] = 3982,
  [SMALL_STATE(177)] = 3989,
  [SMALL_STATE(178)] = 3996,
  [SMALL_STATE(179)] = 4009,
  [SMALL_STATE(180)] = 4018,
  [SMALL_STATE(181)] = 4029,
  [SMALL_STATE(182)] = 4040,
  [SMALL_STATE(183)] = 4049,
  [SMALL_STATE(184)] = 4062,
  [SMALL_STATE(185)] = 4071,
  [SMALL_STATE(186)] = 4082,
  [SMALL_STATE(187)] = 4091,
  [SMALL_STATE(188)] = 4100,
  [SMALL_STATE(189)] = 4111,
  [SMALL_STATE(190)] = 4124,
  [SMALL_STATE(191)] = 4133,
  [SMALL_STATE(192)] = 4140,
  [SMALL_STATE(193)] = 4149,
  [SMALL_STATE(194)] = 4162,
  [SMALL_STATE(195)] = 4175,
  [SMALL_STATE(196)] = 4188,
  [SMALL_STATE(197)] = 4201,
  [SMALL_STATE(198)] = 4210,
  [SMALL_STATE(199)] = 4219,
  [SMALL_STATE(200)] = 4232,
  [SMALL_STATE(201)] = 4243,
  [SMALL_STATE(202)] = 4256,
  [SMALL_STATE(203)] = 4265,
  [SMALL_STATE(204)] = 4278,
  [SMALL_STATE(205)] = 4291,
  [SMALL_STATE(206)] = 4300,
  [SMALL_STATE(207)] = 4313,
  [SMALL_STATE(208)] = 4320,
  [SMALL_STATE(209)] = 4333,
  [SMALL_STATE(210)] = 4342,
  [SMALL_STATE(211)] = 4355,
  [SMALL_STATE(212)] = 4366,
  [SMALL_STATE(213)] = 4375,
  [SMALL_STATE(214)] = 4386,
  [SMALL_STATE(215)] = 4397,
  [SMALL_STATE(216)] = 4410,
  [SMALL_STATE(217)] = 4419,
  [SMALL_STATE(218)] = 4432,
  [SMALL_STATE(219)] = 4441,
  [SMALL_STATE(220)] = 4449,
  [SMALL_STATE(221)] = 4457,
  [SMALL_STATE(222)] = 4465,
  [SMALL_STATE(223)] = 4473,
  [SMALL_STATE(224)] = 4481,
  [SMALL_STATE(225)] = 4491,
  [SMALL_STATE(226)] = 4501,
  [SMALL_STATE(227)] = 4511,
  [SMALL_STATE(228)] = 4517,
  [SMALL_STATE(229)] = 4523,
  [SMALL_STATE(230)] = 4533,
  [SMALL_STATE(231)] = 4539,
  [SMALL_STATE(232)] = 4547,
  [SMALL_STATE(233)] = 4553,
  [SMALL_STATE(234)] = 4563,
  [SMALL_STATE(235)] = 4573,
  [SMALL_STATE(236)] = 4581,
  [SMALL_STATE(237)] = 4587,
  [SMALL_STATE(238)] = 4593,
  [SMALL_STATE(239)] = 4599,
  [SMALL_STATE(240)] = 4605,
  [SMALL_STATE(241)] = 4613,
  [SMALL_STATE(242)] = 4621,
  [SMALL_STATE(243)] = 4629,
  [SMALL_STATE(244)] = 4637,
  [SMALL_STATE(245)] = 4647,
  [SMALL_STATE(246)] = 4657,
  [SMALL_STATE(247)] = 4665,
  [SMALL_STATE(248)] = 4673,
  [SMALL_STATE(249)] = 4681,
  [SMALL_STATE(250)] = 4689,
  [SMALL_STATE(251)] = 4697,
  [SMALL_STATE(252)] = 4705,
  [SMALL_STATE(253)] = 4713,
  [SMALL_STATE(254)] = 4721,
  [SMALL_STATE(255)] = 4729,
  [SMALL_STATE(256)] = 4737,
  [SMALL_STATE(257)] = 4747,
  [SMALL_STATE(258)] = 4755,
  [SMALL_STATE(259)] = 4765,
  [SMALL_STATE(260)] = 4772,
  [SMALL_STATE(261)] = 4779,
  [SMALL_STATE(262)] = 4786,
  [SMALL_STATE(263)] = 4793,
  [SMALL_STATE(264)] = 4800,
  [SMALL_STATE(265)] = 4807,
  [SMALL_STATE(266)] = 4814,
  [SMALL_STATE(267)] = 4821,
  [SMALL_STATE(268)] = 4828,
  [SMALL_STATE(269)] = 4835,
  [SMALL_STATE(270)] = 4842,
  [SMALL_STATE(271)] = 4849,
  [SMALL_STATE(272)] = 4856,
  [SMALL_STATE(273)] = 4863,
  [SMALL_STATE(274)] = 4868,
  [SMALL_STATE(275)] = 4875,
  [SMALL_STATE(276)] = 4882,
  [SMALL_STATE(277)] = 4889,
  [SMALL_STATE(278)] = 4896,
  [SMALL_STATE(279)] = 4903,
  [SMALL_STATE(280)] = 4910,
  [SMALL_STATE(281)] = 4917,
  [SMALL_STATE(282)] = 4924,
  [SMALL_STATE(283)] = 4931,
  [SMALL_STATE(284)] = 4938,
  [SMALL_STATE(285)] = 4945,
  [SMALL_STATE(286)] = 4950,
  [SMALL_STATE(287)] = 4957,
  [SMALL_STATE(288)] = 4964,
  [SMALL_STATE(289)] = 4969,
  [SMALL_STATE(290)] = 4974,
  [SMALL_STATE(291)] = 4981,
  [SMALL_STATE(292)] = 4988,
  [SMALL_STATE(293)] = 4995,
  [SMALL_STATE(294)] = 5002,
  [SMALL_STATE(295)] = 5007,
  [SMALL_STATE(296)] = 5014,
  [SMALL_STATE(297)] = 5021,
  [SMALL_STATE(298)] = 5028,
  [SMALL_STATE(299)] = 5035,
  [SMALL_STATE(300)] = 5040,
  [SMALL_STATE(301)] = 5047,
  [SMALL_STATE(302)] = 5054,
  [SMALL_STATE(303)] = 5061,
  [SMALL_STATE(304)] = 5066,
  [SMALL_STATE(305)] = 5071,
  [SMALL_STATE(306)] = 5078,
  [SMALL_STATE(307)] = 5082,
  [SMALL_STATE(308)] = 5086,
  [SMALL_STATE(309)] = 5090,
  [SMALL_STATE(310)] = 5094,
  [SMALL_STATE(311)] = 5098,
  [SMALL_STATE(312)] = 5102,
  [SMALL_STATE(313)] = 5106,
  [SMALL_STATE(314)] = 5110,
  [SMALL_STATE(315)] = 5114,
  [SMALL_STATE(316)] = 5118,
  [SMALL_STATE(317)] = 5122,
  [SMALL_STATE(318)] = 5126,
  [SMALL_STATE(319)] = 5130,
  [SMALL_STATE(320)] = 5134,
  [SMALL_STATE(321)] = 5138,
  [SMALL_STATE(322)] = 5142,
  [SMALL_STATE(323)] = 5146,
  [SMALL_STATE(324)] = 5150,
  [SMALL_STATE(325)] = 5154,
  [SMALL_STATE(326)] = 5158,
  [SMALL_STATE(327)] = 5162,
  [SMALL_STATE(328)] = 5166,
  [SMALL_STATE(329)] = 5170,
  [SMALL_STATE(330)] = 5174,
  [SMALL_STATE(331)] = 5178,
  [SMALL_STATE(332)] = 5182,
  [SMALL_STATE(333)] = 5186,
  [SMALL_STATE(334)] = 5190,
  [SMALL_STATE(335)] = 5194,
  [SMALL_STATE(336)] = 5198,
  [SMALL_STATE(337)] = 5202,
  [SMALL_STATE(338)] = 5206,
  [SMALL_STATE(339)] = 5210,
  [SMALL_STATE(340)] = 5214,
  [SMALL_STATE(341)] = 5218,
  [SMALL_STATE(342)] = 5222,
  [SMALL_STATE(343)] = 5226,
  [SMALL_STATE(344)] = 5230,
  [SMALL_STATE(345)] = 5234,
  [SMALL_STATE(346)] = 5238,
  [SMALL_STATE(347)] = 5242,
  [SMALL_STATE(348)] = 5246,
  [SMALL_STATE(349)] = 5250,
  [SMALL_STATE(350)] = 5254,
  [SMALL_STATE(351)] = 5258,
  [SMALL_STATE(352)] = 5262,
  [SMALL_STATE(353)] = 5266,
  [SMALL_STATE(354)] = 5270,
  [SMALL_STATE(355)] = 5274,
  [SMALL_STATE(356)] = 5278,
  [SMALL_STATE(357)] = 5282,
  [SMALL_STATE(358)] = 5286,
  [SMALL_STATE(359)] = 5290,
  [SMALL_STATE(360)] = 5294,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [5] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [8] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_parameters_repeat1, 2, 0, 0),
  [10] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [16] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(103),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(104),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [32] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [36] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 1, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_block_repeat1, 2, 0, 0),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_block_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_block_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_block_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_block_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_block_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_block_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_block_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_block_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_block_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [173] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_block_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 9, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_name, 1, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_variable, 1, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_name, 1, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_variable, 1, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 8, 0, 0),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, 0, 0),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3, 0, 0),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2, 0, 0),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2, 0, 0),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3, 0, 0),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2, 0, 0),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 2, 0, 0),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call_parameters, 2, 0, 0),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call_parameters, 2, 0, 0),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1, 0, 0),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1, 0, 0),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call_parameters, 3, 0, 0),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call_parameters, 3, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_method_call, 3, 0, 0),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_method_call, 3, 0, 0),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_parameters_repeat1, 1, 0, 0),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_call_parameters_repeat1, 1, 0, 0),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_call_parameters_repeat1, 2, 0, 0),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_implementations_repeat1, 2, 0, 0),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_implementations_repeat1, 2, 0, 0), SHIFT_REPEAT(273),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_implementations, 1, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_name, 1, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_name, 1, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_forward_prototypes_repeat1, 2, 0, 0),
  [279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_forward_prototypes_repeat1, 2, 0, 0), SHIFT_REPEAT(273),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0), SHIFT_REPEAT(125),
  [289] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0), SHIFT_REPEAT(126),
  [292] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0), SHIFT_REPEAT(78),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3, 0, 0),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 3, 0, 0),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 4, 0, 0),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statment, 7, 0, 0),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statment, 7, 0, 0),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_declaration, 2, 0, 0),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_declaration, 2, 0, 0),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_variable, 2, 0, 0),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_variable, 2, 0, 0),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pb_constructions, 1, 0, 0),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pb_constructions, 1, 0, 0),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2, 0, 0),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2, 0, 0),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_parameters_repeat1, 2, 0, 0),
  [395] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(268),
  [398] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(317),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 10, 0, 0),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_properties, 1, 0, 0),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal_content, 1, 0, 0),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal_content, 1, 0, 0),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_prototype, 4, 0, 0),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_event_prototype, 4, 0, 0),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_implementation, 4, 0, 0),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3, 0, 0),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_properties_repeat1, 2, 0, 0),
  [427] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_properties_repeat1, 2, 0, 0), SHIFT_REPEAT(317),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_forward_prototypes, 2, 0, 0),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 4, 0, 0),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 5, 0, 0),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_variable, 3, 0, 0),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_variable, 3, 0, 0),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_variable_repeat1, 2, 0, 5),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_variable_repeat1, 2, 0, 5),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_implementations, 1, 0, 0),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_forward_prototypes, 3, 0, 0),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [458] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [460] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1, 0, 0),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_event_implementations_repeat1, 2, 0, 0),
  [468] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_event_implementations_repeat1, 2, 0, 0), SHIFT_REPEAT(260),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_of_function, 1, 0, 0),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_implementation, 3, 0, 0),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 2, 0, 0),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_variable, 3, 0, 2),
  [487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_variable, 3, 0, 2),
  [489] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_repeat1, 2, 0, 5),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_repeat1, 2, 0, 5),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_parameters_repeat1, 1, 0, 0),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_parameters_repeat1, 1, 0, 0),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameter, 3, 0, 0),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_parameter, 3, 0, 0),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_variable, 6, 0, 11),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_variable, 6, 0, 11),
  [515] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_repeat1, 4, 0, 12),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_repeat1, 4, 0, 12),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_repeat1, 5, 0, 13),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_repeat1, 5, 0, 13),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_variable, 5, 0, 8),
  [525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_variable, 5, 0, 8),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name, 1, 0, 1),
  [529] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_variable, 5, 0, 0),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_variable, 5, 0, 0),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_variable, 4, 0, 4),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_variable, 4, 0, 4),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_variable, 4, 0, 0),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_variable, 4, 0, 0),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_variable_repeat1, 2, 0, 6),
  [547] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_variable_repeat1, 2, 0, 6), SHIFT_REPEAT(275),
  [550] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_variable_repeat1, 2, 0, 6),
  [552] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_variable_repeat1, 2, 0, 6), SHIFT_REPEAT(267),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_variable_repeat1, 3, 0, 9),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_variable_repeat1, 3, 0, 9),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_forward_types_repeat1, 2, 0, 0),
  [565] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_forward_types_repeat1, 2, 0, 0), SHIFT_REPEAT(259),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameter, 2, 0, 0),
  [570] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_parameter, 2, 0, 0),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [576] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_parameters_repeat1, 2, 0, 0),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_variable_repeat1, 4, 0, 12),
  [580] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_variable_repeat1, 4, 0, 12),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_variable_repeat1, 5, 0, 13),
  [586] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_variable_repeat1, 5, 0, 13),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 4, 0, 4),
  [590] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [592] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_repeat1, 3, 0, 9),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_repeat1, 3, 0, 9),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3, 0, 2),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 5, 0, 8),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 6, 0, 11),
  [608] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_repeat1, 2, 0, 6), SHIFT_REPEAT(301),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_repeat1, 2, 0, 6),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 2, 0, 7),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_class_properties, 6, 0, 3),
  [655] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_class_properties, 6, 0, 3),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_visibility, 1, 0, 0),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_forward_type, 7, 0, 10),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_body, 1, 0, 0),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_implementation, 2, 0, 0),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_inherit_from, 5, 0, 0),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_implementation, 3, 0, 0),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_class_dummy, 3, 0, 0),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameters, 2, 0, 0),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_prototype, 5, 0, 0),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 11, 0, 0),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_parameters, 1, 0, 0),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_variables, 3, 0, 0),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_type, 1, 0, 0),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameters, 3, 0, 0),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_forward_types, 3, 0, 0),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dummy_keyword, 1, 0, 0),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_forward_types, 4, 0, 0),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_name, 1, 0, 0),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_body, 1, 0, 0),
  [771] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
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
