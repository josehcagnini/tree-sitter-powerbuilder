#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 92
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 56
#define ALIAS_COUNT 0
#define TOKEN_COUNT 30
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 1

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
  sym_identifier = 10,
  anon_sym_typevariables = 11,
  anon_sym_endvariables = 12,
  anon_sym_forwardprototypes = 13,
  anon_sym_endprototypes = 14,
  anon_sym_LPAREN = 15,
  anon_sym_COMMA = 16,
  anon_sym_RPAREN = 17,
  anon_sym_ref = 18,
  anon_sym_EQ = 19,
  aux_sym_type_token1 = 20,
  sym_integer = 21,
  sym_decimal = 22,
  anon_sym_true = 23,
  anon_sym_false = 24,
  anon_sym_null = 25,
  anon_sym_DQUOTE = 26,
  aux_sym_string_literal_content_token1 = 27,
  aux_sym_string_literal_content_token2 = 28,
  sym_escape_sequence = 29,
  sym_source_file = 30,
  sym_class_name = 31,
  sym_class_type = 32,
  sym_forward_types = 33,
  sym_class_inherit_from = 34,
  sym_forward_type = 35,
  sym_global_class_properties = 36,
  sym_class_variables = 37,
  sym_forward_prototypes = 38,
  sym_function_prototype = 39,
  sym_function_parameters = 40,
  sym_function_parameter = 41,
  sym_class_properties = 42,
  sym_property = 43,
  sym_type = 44,
  sym_property_name = 45,
  sym_value = 46,
  sym_boolean_literal = 47,
  sym_string_literal = 48,
  sym_string_literal_content = 49,
  aux_sym_forward_types_repeat1 = 50,
  aux_sym_forward_prototypes_repeat1 = 51,
  aux_sym_function_prototype_repeat1 = 52,
  aux_sym_function_parameters_repeat1 = 53,
  aux_sym_class_properties_repeat1 = 54,
  aux_sym_string_literal_repeat1 = 55,
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
  [sym_identifier] = "identifier",
  [anon_sym_typevariables] = "type variables",
  [anon_sym_endvariables] = "end variables",
  [anon_sym_forwardprototypes] = "forward prototypes",
  [anon_sym_endprototypes] = "end prototypes",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_ref] = "ref",
  [anon_sym_EQ] = "=",
  [aux_sym_type_token1] = "type_token1",
  [sym_integer] = "integer",
  [sym_decimal] = "decimal",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_null] = "null",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_literal_content_token1] = "string_literal_content_token1",
  [aux_sym_string_literal_content_token2] = "string_literal_content_token2",
  [sym_escape_sequence] = "escape_sequence",
  [sym_source_file] = "source_file",
  [sym_class_name] = "class_name",
  [sym_class_type] = "class_type",
  [sym_forward_types] = "forward_types",
  [sym_class_inherit_from] = "class_inherit_from",
  [sym_forward_type] = "forward_type",
  [sym_global_class_properties] = "global_class_properties",
  [sym_class_variables] = "class_variables",
  [sym_forward_prototypes] = "forward_prototypes",
  [sym_function_prototype] = "function_prototype",
  [sym_function_parameters] = "function_parameters",
  [sym_function_parameter] = "function_parameter",
  [sym_class_properties] = "class_properties",
  [sym_property] = "property",
  [sym_type] = "type",
  [sym_property_name] = "property_name",
  [sym_value] = "value",
  [sym_boolean_literal] = "boolean_literal",
  [sym_string_literal] = "string_literal",
  [sym_string_literal_content] = "string_literal_content",
  [aux_sym_forward_types_repeat1] = "forward_types_repeat1",
  [aux_sym_forward_prototypes_repeat1] = "forward_prototypes_repeat1",
  [aux_sym_function_prototype_repeat1] = "function_prototype_repeat1",
  [aux_sym_function_parameters_repeat1] = "function_parameters_repeat1",
  [aux_sym_class_properties_repeat1] = "class_properties_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
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
  [sym_identifier] = sym_identifier,
  [anon_sym_typevariables] = anon_sym_typevariables,
  [anon_sym_endvariables] = anon_sym_endvariables,
  [anon_sym_forwardprototypes] = anon_sym_forwardprototypes,
  [anon_sym_endprototypes] = anon_sym_endprototypes,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_ref] = anon_sym_ref,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym_type_token1] = aux_sym_type_token1,
  [sym_integer] = sym_integer,
  [sym_decimal] = sym_decimal,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_null] = anon_sym_null,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_literal_content_token1] = aux_sym_string_literal_content_token1,
  [aux_sym_string_literal_content_token2] = aux_sym_string_literal_content_token2,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_source_file] = sym_source_file,
  [sym_class_name] = sym_class_name,
  [sym_class_type] = sym_class_type,
  [sym_forward_types] = sym_forward_types,
  [sym_class_inherit_from] = sym_class_inherit_from,
  [sym_forward_type] = sym_forward_type,
  [sym_global_class_properties] = sym_global_class_properties,
  [sym_class_variables] = sym_class_variables,
  [sym_forward_prototypes] = sym_forward_prototypes,
  [sym_function_prototype] = sym_function_prototype,
  [sym_function_parameters] = sym_function_parameters,
  [sym_function_parameter] = sym_function_parameter,
  [sym_class_properties] = sym_class_properties,
  [sym_property] = sym_property,
  [sym_type] = sym_type,
  [sym_property_name] = sym_property_name,
  [sym_value] = sym_value,
  [sym_boolean_literal] = sym_boolean_literal,
  [sym_string_literal] = sym_string_literal,
  [sym_string_literal_content] = sym_string_literal_content,
  [aux_sym_forward_types_repeat1] = aux_sym_forward_types_repeat1,
  [aux_sym_forward_prototypes_repeat1] = aux_sym_forward_prototypes_repeat1,
  [aux_sym_function_prototype_repeat1] = aux_sym_function_prototype_repeat1,
  [aux_sym_function_parameters_repeat1] = aux_sym_function_parameters_repeat1,
  [aux_sym_class_properties_repeat1] = aux_sym_class_properties_repeat1,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
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
  [sym_identifier] = {
    .visible = true,
    .named = true,
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
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
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_type_token1] = {
    .visible = false,
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
  [sym_class_properties] = {
    .visible = true,
    .named = true,
  },
  [sym_property] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_property_name] = {
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
  [aux_sym_forward_types_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_forward_prototypes_repeat1] = {
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
  [aux_sym_class_properties_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_repeat1] = {
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
  [3] = 2,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 11,
  [14] = 12,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 16,
  [20] = 17,
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
  [34] = 30,
  [35] = 35,
  [36] = 36,
  [37] = 33,
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
  [55] = 48,
  [56] = 49,
  [57] = 52,
  [58] = 50,
  [59] = 53,
  [60] = 60,
  [61] = 60,
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
  [82] = 78,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(140);
      ADVANCE_MAP(
        '"', 178,
        '(', 158,
        ')', 160,
        ',', 159,
        '.', 142,
        '=', 163,
        'H', 14,
        '\\', 19,
        'e', 68,
        'f', 21,
        'g', 62,
        'n', 115,
        'r', 39,
        't', 89,
        'w', 56,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(139);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(6);
      if (lookahead == '"') ADVANCE(178);
      if (lookahead == '\\') ADVANCE(19);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(179);
      if (lookahead != 0) ADVANCE(180);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(53);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(110);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(117);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(87);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(178);
      if (lookahead == '\\') ADVANCE(20);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      END_STATE();
    case 7:
      if (lookahead == '$') ADVANCE(18);
      END_STATE();
    case 8:
      if (lookahead == '$') ADVANCE(141);
      END_STATE();
    case 9:
      if (lookahead == '(') ADVANCE(158);
      if (lookahead == 'e') ADVANCE(152);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 10:
      if (lookahead == '(') ADVANCE(158);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 11:
      if (lookahead == ')') ADVANCE(160);
      if (lookahead == ',') ADVANCE(159);
      if (lookahead == 'r') ADVANCE(168);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 12:
      if (lookahead == '=') ADVANCE(163);
      if (lookahead == 'e') ADVANCE(170);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 13:
      if (lookahead == '=') ADVANCE(163);
      if (lookahead == 'e') ADVANCE(171);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 14:
      if (lookahead == 'A') ADVANCE(7);
      END_STATE();
    case 15:
      if (lookahead == 'B') ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == 'E') ADVANCE(121);
      END_STATE();
    case 17:
      if (lookahead == 'H') ADVANCE(49);
      END_STATE();
    case 18:
      if (lookahead == 'P') ADVANCE(15);
      END_STATE();
    case 19:
      ADVANCE_MAP(
        'U', 182,
        'u', 184,
        'x', 183,
        '"', 185,
        '\'', 185,
        '0', 185,
        '?', 185,
        '\\', 185,
        'a', 185,
        'b', 185,
        'e', 185,
        'f', 185,
        'n', 185,
        'r', 185,
        't', 185,
        'v', 185,
      );
      if (lookahead != 0) ADVANCE(181);
      END_STATE();
    case 20:
      ADVANCE_MAP(
        'U', 130,
        'u', 135,
        'x', 132,
        '"', 185,
        '\'', 185,
        '0', 185,
        '?', 185,
        '\\', 185,
        'a', 185,
        'b', 185,
        'e', 185,
        'f', 185,
        'n', 185,
        'r', 185,
        't', 185,
        'v', 185,
      );
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(60);
      if (lookahead == 'o') ADVANCE(88);
      if (lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(32);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(91);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(92);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(63);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(93);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(96);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(33);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 31:
      if (lookahead == 'b') ADVANCE(26);
      END_STATE();
    case 32:
      if (lookahead == 'b') ADVANCE(65);
      END_STATE();
    case 33:
      if (lookahead == 'b') ADVANCE(66);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(2);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(143);
      END_STATE();
    case 36:
      if (lookahead == 'd') ADVANCE(144);
      END_STATE();
    case 37:
      if (lookahead == 'd') ADVANCE(5);
      END_STATE();
    case 38:
      if (lookahead == 'd') ADVANCE(51);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(4);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 52:
      if (lookahead == 'f') ADVANCE(161);
      END_STATE();
    case 53:
      if (lookahead == 'f') ADVANCE(74);
      if (lookahead == 'p') ADVANCE(94);
      if (lookahead == 't') ADVANCE(122);
      if (lookahead == 'v') ADVANCE(25);
      END_STATE();
    case 54:
      if (lookahead == 'f') ADVANCE(76);
      if (lookahead == 't') ADVANCE(125);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(54);
      END_STATE();
    case 55:
      if (lookahead == 'h') ADVANCE(57);
      END_STATE();
    case 56:
      if (lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 57:
      if (lookahead == 'i') ADVANCE(69);
      END_STATE();
    case 58:
      if (lookahead == 'i') ADVANCE(22);
      END_STATE();
    case 59:
      if (lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 60:
      if (lookahead == 'l') ADVANCE(105);
      END_STATE();
    case 61:
      if (lookahead == 'l') ADVANCE(177);
      END_STATE();
    case 62:
      if (lookahead == 'l') ADVANCE(71);
      END_STATE();
    case 63:
      if (lookahead == 'l') ADVANCE(3);
      END_STATE();
    case 64:
      if (lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 65:
      if (lookahead == 'l') ADVANCE(45);
      END_STATE();
    case 66:
      if (lookahead == 'l') ADVANCE(48);
      END_STATE();
    case 67:
      if (lookahead == 'm') ADVANCE(146);
      END_STATE();
    case 68:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 69:
      if (lookahead == 'n') ADVANCE(149);
      END_STATE();
    case 70:
      if (lookahead == 'o') ADVANCE(67);
      END_STATE();
    case 71:
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 72:
      if (lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 73:
      if (lookahead == 'o') ADVANCE(95);
      END_STATE();
    case 74:
      if (lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 75:
      if (lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 76:
      if (lookahead == 'o') ADVANCE(98);
      END_STATE();
    case 77:
      if (lookahead == 'o') ADVANCE(112);
      END_STATE();
    case 78:
      if (lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 79:
      if (lookahead == 'p') ADVANCE(94);
      END_STATE();
    case 80:
      if (lookahead == 'p') ADVANCE(41);
      END_STATE();
    case 81:
      if (lookahead == 'p') ADVANCE(43);
      END_STATE();
    case 82:
      if (lookahead == 'p') ADVANCE(73);
      END_STATE();
    case 83:
      if (lookahead == 'p') ADVANCE(44);
      END_STATE();
    case 84:
      if (lookahead == 'p') ADVANCE(47);
      END_STATE();
    case 85:
      if (lookahead == 'p') ADVANCE(46);
      END_STATE();
    case 86:
      if (lookahead == 'p') ADVANCE(50);
      END_STATE();
    case 87:
      if (lookahead == 'p') ADVANCE(100);
      END_STATE();
    case 88:
      if (lookahead == 'r') ADVANCE(118);
      END_STATE();
    case 89:
      if (lookahead == 'r') ADVANCE(114);
      if (lookahead == 'y') ADVANCE(80);
      END_STATE();
    case 90:
      if (lookahead == 'r') ADVANCE(8);
      END_STATE();
    case 91:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 92:
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 93:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 94:
      if (lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 95:
      if (lookahead == 'r') ADVANCE(108);
      END_STATE();
    case 96:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 97:
      if (lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 98:
      if (lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 99:
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 100:
      if (lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 101:
      if (lookahead == 's') ADVANCE(155);
      END_STATE();
    case 102:
      if (lookahead == 's') ADVANCE(157);
      END_STATE();
    case 103:
      if (lookahead == 's') ADVANCE(154);
      END_STATE();
    case 104:
      if (lookahead == 's') ADVANCE(156);
      END_STATE();
    case 105:
      if (lookahead == 's') ADVANCE(42);
      END_STATE();
    case 106:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 107:
      if (lookahead == 't') ADVANCE(122);
      END_STATE();
    case 108:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 109:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 110:
      if (lookahead == 't') ADVANCE(123);
      END_STATE();
    case 111:
      if (lookahead == 't') ADVANCE(124);
      END_STATE();
    case 112:
      if (lookahead == 't') ADVANCE(126);
      END_STATE();
    case 113:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 114:
      if (lookahead == 'u') ADVANCE(40);
      END_STATE();
    case 115:
      if (lookahead == 'u') ADVANCE(64);
      END_STATE();
    case 116:
      if (lookahead == 'v') ADVANCE(25);
      END_STATE();
    case 117:
      if (lookahead == 'v') ADVANCE(30);
      END_STATE();
    case 118:
      if (lookahead == 'w') ADVANCE(23);
      END_STATE();
    case 119:
      if (lookahead == 'w') ADVANCE(27);
      END_STATE();
    case 120:
      if (lookahead == 'w') ADVANCE(28);
      END_STATE();
    case 121:
      if (lookahead == 'x') ADVANCE(82);
      END_STATE();
    case 122:
      if (lookahead == 'y') ADVANCE(81);
      END_STATE();
    case 123:
      if (lookahead == 'y') ADVANCE(83);
      END_STATE();
    case 124:
      if (lookahead == 'y') ADVANCE(84);
      END_STATE();
    case 125:
      if (lookahead == 'y') ADVANCE(85);
      END_STATE();
    case 126:
      if (lookahead == 'y') ADVANCE(86);
      END_STATE();
    case 127:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 128:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(174);
      END_STATE();
    case 129:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(185);
      END_STATE();
    case 130:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(138);
      END_STATE();
    case 131:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(187);
      END_STATE();
    case 132:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(131);
      END_STATE();
    case 133:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(129);
      END_STATE();
    case 134:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(133);
      END_STATE();
    case 135:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(134);
      END_STATE();
    case 136:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(135);
      END_STATE();
    case 137:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(136);
      END_STATE();
    case 138:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(137);
      END_STATE();
    case 139:
      if (eof) ADVANCE(140);
      ADVANCE_MAP(
        '"', 178,
        '(', 158,
        ')', 160,
        ',', 159,
        '.', 142,
        '=', 163,
        'H', 14,
        '\\', 20,
        'e', 68,
        'f', 21,
        'g', 62,
        'n', 115,
        'r', 39,
        't', 89,
        'w', 56,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(139);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_HA_DOLLARPBExportHeader_DOLLAR);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_forward);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_endforward);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_globaltype);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_endtype);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_within);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_typevariables);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_endvariables);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_forwardprototypes);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_endprototypes);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_ref);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_ref);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == ' ') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == ' ') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == 'd') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == 'd') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == 'e') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == 'f') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == 'n') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == 'n') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_decimal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(174);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_string_literal_content_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(179);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(180);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_string_literal_content_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(180);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_string_literal_content_token2);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_string_literal_content_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(138);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_string_literal_content_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(131);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_string_literal_content_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(134);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(185);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(186);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 9},
  [5] = {.lex_state = 9},
  [6] = {.lex_state = 9},
  [7] = {.lex_state = 11},
  [8] = {.lex_state = 11},
  [9] = {.lex_state = 11},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 127},
  [16] = {.lex_state = 12},
  [17] = {.lex_state = 12},
  [18] = {.lex_state = 127},
  [19] = {.lex_state = 13},
  [20] = {.lex_state = 13},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 10},
  [25] = {.lex_state = 11},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 11},
  [28] = {.lex_state = 11},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 13},
  [31] = {.lex_state = 9},
  [32] = {.lex_state = 9},
  [33] = {.lex_state = 12},
  [34] = {.lex_state = 12},
  [35] = {.lex_state = 9},
  [36] = {.lex_state = 10},
  [37] = {.lex_state = 13},
  [38] = {.lex_state = 9},
  [39] = {.lex_state = 11},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 10},
  [45] = {.lex_state = 127},
  [46] = {.lex_state = 54},
  [47] = {.lex_state = 10},
  [48] = {.lex_state = 12},
  [49] = {.lex_state = 12},
  [50] = {.lex_state = 12},
  [51] = {.lex_state = 54},
  [52] = {.lex_state = 12},
  [53] = {.lex_state = 12},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 13},
  [56] = {.lex_state = 13},
  [57] = {.lex_state = 13},
  [58] = {.lex_state = 13},
  [59] = {.lex_state = 13},
  [60] = {.lex_state = 127},
  [61] = {.lex_state = 127},
  [62] = {.lex_state = 54},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 10},
  [65] = {.lex_state = 10},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 10},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 10},
  [73] = {.lex_state = 10},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 10},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 10},
  [82] = {.lex_state = 127},
  [83] = {.lex_state = 54},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 10},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 10},
  [91] = {.lex_state = 10},
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
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_ref] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_decimal] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_null] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_string_literal_content_token2] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(66),
    [anon_sym_HA_DOLLARPBExportHeader_DOLLAR] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(5), 1,
      sym_integer,
    ACTIONS(7), 1,
      sym_decimal,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    STATE(52), 1,
      sym_value,
    STATE(48), 2,
      sym_boolean_literal,
      sym_string_literal,
    ACTIONS(9), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
  [22] = 6,
    ACTIONS(13), 1,
      sym_integer,
    ACTIONS(15), 1,
      sym_decimal,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    STATE(57), 1,
      sym_value,
    STATE(55), 2,
      sym_boolean_literal,
      sym_string_literal,
    ACTIONS(17), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
  [44] = 6,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_endprototypes,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    STATE(24), 1,
      aux_sym_function_prototype_repeat1,
    STATE(32), 1,
      sym_function_parameters,
    STATE(6), 2,
      sym_function_prototype,
      aux_sym_forward_prototypes_repeat1,
  [64] = 6,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_endprototypes,
    STATE(24), 1,
      aux_sym_function_prototype_repeat1,
    STATE(32), 1,
      sym_function_parameters,
    STATE(4), 2,
      sym_function_prototype,
      aux_sym_forward_prototypes_repeat1,
  [84] = 6,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(32), 1,
      anon_sym_endprototypes,
    ACTIONS(34), 1,
      anon_sym_LPAREN,
    STATE(24), 1,
      aux_sym_function_prototype_repeat1,
    STATE(32), 1,
      sym_function_parameters,
    STATE(6), 2,
      sym_function_prototype,
      aux_sym_forward_prototypes_repeat1,
  [104] = 6,
    ACTIONS(37), 1,
      anon_sym_RPAREN,
    ACTIONS(39), 1,
      anon_sym_ref,
    ACTIONS(41), 1,
      aux_sym_type_token1,
    STATE(8), 1,
      aux_sym_function_parameters_repeat1,
    STATE(25), 1,
      sym_function_parameter,
    STATE(72), 1,
      sym_type,
  [123] = 6,
    ACTIONS(39), 1,
      anon_sym_ref,
    ACTIONS(41), 1,
      aux_sym_type_token1,
    ACTIONS(43), 1,
      anon_sym_RPAREN,
    STATE(9), 1,
      aux_sym_function_parameters_repeat1,
    STATE(25), 1,
      sym_function_parameter,
    STATE(72), 1,
      sym_type,
  [142] = 6,
    ACTIONS(45), 1,
      anon_sym_RPAREN,
    ACTIONS(47), 1,
      anon_sym_ref,
    ACTIONS(50), 1,
      aux_sym_type_token1,
    STATE(9), 1,
      aux_sym_function_parameters_repeat1,
    STATE(25), 1,
      sym_function_parameter,
    STATE(72), 1,
      sym_type,
  [161] = 5,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(55), 1,
      aux_sym_string_literal_content_token1,
    ACTIONS(58), 1,
      aux_sym_string_literal_content_token2,
    ACTIONS(61), 1,
      sym_escape_sequence,
    STATE(10), 2,
      sym_string_literal_content,
      aux_sym_string_literal_repeat1,
  [178] = 5,
    ACTIONS(64), 1,
      anon_sym_DQUOTE,
    ACTIONS(66), 1,
      aux_sym_string_literal_content_token1,
    ACTIONS(68), 1,
      aux_sym_string_literal_content_token2,
    ACTIONS(70), 1,
      sym_escape_sequence,
    STATE(12), 2,
      sym_string_literal_content,
      aux_sym_string_literal_repeat1,
  [195] = 5,
    ACTIONS(66), 1,
      aux_sym_string_literal_content_token1,
    ACTIONS(68), 1,
      aux_sym_string_literal_content_token2,
    ACTIONS(72), 1,
      anon_sym_DQUOTE,
    ACTIONS(74), 1,
      sym_escape_sequence,
    STATE(10), 2,
      sym_string_literal_content,
      aux_sym_string_literal_repeat1,
  [212] = 5,
    ACTIONS(66), 1,
      aux_sym_string_literal_content_token1,
    ACTIONS(68), 1,
      aux_sym_string_literal_content_token2,
    ACTIONS(76), 1,
      anon_sym_DQUOTE,
    ACTIONS(78), 1,
      sym_escape_sequence,
    STATE(14), 2,
      sym_string_literal_content,
      aux_sym_string_literal_repeat1,
  [229] = 5,
    ACTIONS(66), 1,
      aux_sym_string_literal_content_token1,
    ACTIONS(68), 1,
      aux_sym_string_literal_content_token2,
    ACTIONS(74), 1,
      sym_escape_sequence,
    ACTIONS(80), 1,
      anon_sym_DQUOTE,
    STATE(10), 2,
      sym_string_literal_content,
      aux_sym_string_literal_repeat1,
  [246] = 4,
    ACTIONS(82), 1,
      aux_sym_type_token1,
    STATE(61), 1,
      sym_type,
    STATE(89), 1,
      sym_class_properties,
    STATE(17), 2,
      sym_property,
      aux_sym_class_properties_repeat1,
  [260] = 4,
    ACTIONS(84), 1,
      anon_sym_endvariables,
    ACTIONS(86), 1,
      aux_sym_type_token1,
    STATE(61), 1,
      sym_type,
    STATE(16), 2,
      sym_property,
      aux_sym_class_properties_repeat1,
  [274] = 4,
    ACTIONS(89), 1,
      anon_sym_endvariables,
    ACTIONS(91), 1,
      aux_sym_type_token1,
    STATE(61), 1,
      sym_type,
    STATE(16), 2,
      sym_property,
      aux_sym_class_properties_repeat1,
  [288] = 4,
    ACTIONS(82), 1,
      aux_sym_type_token1,
    STATE(60), 1,
      sym_type,
    STATE(88), 1,
      sym_class_properties,
    STATE(20), 2,
      sym_property,
      aux_sym_class_properties_repeat1,
  [302] = 4,
    ACTIONS(84), 1,
      anon_sym_endtype,
    ACTIONS(86), 1,
      aux_sym_type_token1,
    STATE(60), 1,
      sym_type,
    STATE(19), 2,
      sym_property,
      aux_sym_class_properties_repeat1,
  [316] = 4,
    ACTIONS(89), 1,
      anon_sym_endtype,
    ACTIONS(91), 1,
      aux_sym_type_token1,
    STATE(60), 1,
      sym_type,
    STATE(19), 2,
      sym_property,
      aux_sym_class_properties_repeat1,
  [330] = 3,
    ACTIONS(93), 1,
      anon_sym_endforward,
    ACTIONS(95), 1,
      anon_sym_type,
    STATE(23), 2,
      sym_forward_type,
      aux_sym_forward_types_repeat1,
  [341] = 3,
    ACTIONS(95), 1,
      anon_sym_type,
    ACTIONS(97), 1,
      anon_sym_endforward,
    STATE(21), 2,
      sym_forward_type,
      aux_sym_forward_types_repeat1,
  [352] = 3,
    ACTIONS(99), 1,
      anon_sym_endforward,
    ACTIONS(101), 1,
      anon_sym_type,
    STATE(23), 2,
      sym_forward_type,
      aux_sym_forward_types_repeat1,
  [363] = 4,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(104), 1,
      sym_identifier,
    STATE(31), 1,
      sym_function_parameters,
    STATE(36), 1,
      aux_sym_function_prototype_repeat1,
  [376] = 3,
    ACTIONS(106), 1,
      anon_sym_COMMA,
    ACTIONS(108), 1,
      anon_sym_RPAREN,
    ACTIONS(110), 2,
      anon_sym_ref,
      aux_sym_type_token1,
  [387] = 2,
    ACTIONS(114), 1,
      aux_sym_string_literal_content_token1,
    ACTIONS(112), 3,
      anon_sym_DQUOTE,
      aux_sym_string_literal_content_token2,
      sym_escape_sequence,
  [396] = 2,
    ACTIONS(116), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(118), 2,
      anon_sym_ref,
      aux_sym_type_token1,
  [405] = 2,
    ACTIONS(120), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(122), 2,
      anon_sym_ref,
      aux_sym_type_token1,
  [414] = 2,
    ACTIONS(114), 1,
      aux_sym_string_literal_content_token1,
    ACTIONS(112), 3,
      anon_sym_DQUOTE,
      aux_sym_string_literal_content_token2,
      sym_escape_sequence,
  [423] = 3,
    ACTIONS(124), 1,
      anon_sym_endtype,
    ACTIONS(126), 1,
      anon_sym_EQ,
    ACTIONS(128), 1,
      aux_sym_type_token1,
  [433] = 2,
    ACTIONS(130), 1,
      sym_identifier,
    ACTIONS(132), 2,
      anon_sym_endprototypes,
      anon_sym_LPAREN,
  [441] = 2,
    ACTIONS(134), 1,
      sym_identifier,
    ACTIONS(136), 2,
      anon_sym_endprototypes,
      anon_sym_LPAREN,
  [449] = 2,
    ACTIONS(140), 1,
      aux_sym_type_token1,
    ACTIONS(138), 2,
      anon_sym_endvariables,
      anon_sym_EQ,
  [457] = 3,
    ACTIONS(124), 1,
      anon_sym_endvariables,
    ACTIONS(128), 1,
      aux_sym_type_token1,
    ACTIONS(142), 1,
      anon_sym_EQ,
  [467] = 2,
    ACTIONS(144), 1,
      sym_identifier,
    ACTIONS(146), 2,
      anon_sym_endprototypes,
      anon_sym_LPAREN,
  [475] = 3,
    ACTIONS(148), 1,
      sym_identifier,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    STATE(36), 1,
      aux_sym_function_prototype_repeat1,
  [485] = 2,
    ACTIONS(140), 1,
      aux_sym_type_token1,
    ACTIONS(138), 2,
      anon_sym_endtype,
      anon_sym_EQ,
  [493] = 2,
    ACTIONS(153), 1,
      sym_identifier,
    ACTIONS(155), 2,
      anon_sym_endprototypes,
      anon_sym_LPAREN,
  [501] = 2,
    ACTIONS(45), 1,
      anon_sym_RPAREN,
    ACTIONS(157), 2,
      anon_sym_ref,
      aux_sym_type_token1,
  [509] = 2,
    ACTIONS(159), 1,
      anon_sym_globaltype,
    STATE(46), 1,
      sym_global_class_properties,
  [516] = 2,
    ACTIONS(161), 1,
      anon_sym_forward,
    STATE(40), 1,
      sym_forward_types,
  [523] = 2,
    ACTIONS(163), 1,
      anon_sym_globaltype,
    STATE(22), 1,
      sym_class_inherit_from,
  [530] = 1,
    ACTIONS(165), 2,
      anon_sym_endforward,
      anon_sym_type,
  [535] = 2,
    ACTIONS(167), 1,
      sym_identifier,
    STATE(79), 1,
      sym_class_name,
  [542] = 2,
    ACTIONS(169), 1,
      aux_sym_type_token1,
    STATE(64), 1,
      sym_type,
  [549] = 2,
    ACTIONS(171), 1,
      anon_sym_typevariables,
    STATE(51), 1,
      sym_class_variables,
  [556] = 2,
    ACTIONS(173), 1,
      sym_identifier,
    STATE(41), 1,
      sym_class_type,
  [563] = 2,
    ACTIONS(175), 1,
      anon_sym_endvariables,
    ACTIONS(177), 1,
      aux_sym_type_token1,
  [570] = 2,
    ACTIONS(179), 1,
      anon_sym_endvariables,
    ACTIONS(181), 1,
      aux_sym_type_token1,
  [577] = 2,
    ACTIONS(183), 1,
      anon_sym_endvariables,
    ACTIONS(185), 1,
      aux_sym_type_token1,
  [584] = 2,
    ACTIONS(187), 1,
      anon_sym_forwardprototypes,
    STATE(63), 1,
      sym_forward_prototypes,
  [591] = 2,
    ACTIONS(189), 1,
      anon_sym_endvariables,
    ACTIONS(191), 1,
      aux_sym_type_token1,
  [598] = 2,
    ACTIONS(193), 1,
      anon_sym_endvariables,
    ACTIONS(195), 1,
      aux_sym_type_token1,
  [605] = 1,
    ACTIONS(197), 2,
      anon_sym_endforward,
      anon_sym_type,
  [610] = 2,
    ACTIONS(175), 1,
      anon_sym_endtype,
    ACTIONS(177), 1,
      aux_sym_type_token1,
  [617] = 2,
    ACTIONS(179), 1,
      anon_sym_endtype,
    ACTIONS(181), 1,
      aux_sym_type_token1,
  [624] = 2,
    ACTIONS(189), 1,
      anon_sym_endtype,
    ACTIONS(191), 1,
      aux_sym_type_token1,
  [631] = 2,
    ACTIONS(183), 1,
      anon_sym_endtype,
    ACTIONS(185), 1,
      aux_sym_type_token1,
  [638] = 2,
    ACTIONS(193), 1,
      anon_sym_endtype,
    ACTIONS(195), 1,
      aux_sym_type_token1,
  [645] = 2,
    ACTIONS(199), 1,
      aux_sym_type_token1,
    STATE(30), 1,
      sym_property_name,
  [652] = 2,
    ACTIONS(201), 1,
      aux_sym_type_token1,
    STATE(34), 1,
      sym_property_name,
  [659] = 1,
    ACTIONS(203), 1,
      anon_sym_typevariables,
  [663] = 1,
    ACTIONS(205), 1,
      ts_builtin_sym_end,
  [667] = 1,
    ACTIONS(207), 1,
      sym_identifier,
  [671] = 1,
    ACTIONS(209), 1,
      sym_identifier,
  [675] = 1,
    ACTIONS(211), 1,
      ts_builtin_sym_end,
  [679] = 1,
    ACTIONS(213), 1,
      anon_sym_endtype,
  [683] = 1,
    ACTIONS(215), 1,
      anon_sym_from,
  [687] = 1,
    ACTIONS(217), 1,
      anon_sym_endtype,
  [691] = 1,
    ACTIONS(219), 1,
      sym_identifier,
  [695] = 1,
    ACTIONS(221), 1,
      anon_sym_DOT,
  [699] = 1,
    ACTIONS(223), 1,
      sym_identifier,
  [703] = 1,
    ACTIONS(225), 1,
      sym_identifier,
  [707] = 1,
    ACTIONS(227), 1,
      anon_sym_from,
  [711] = 1,
    ACTIONS(229), 1,
      anon_sym_from,
  [715] = 1,
    ACTIONS(231), 1,
      ts_builtin_sym_end,
  [719] = 1,
    ACTIONS(233), 1,
      anon_sym_globaltype,
  [723] = 1,
    ACTIONS(235), 1,
      sym_identifier,
  [727] = 1,
    ACTIONS(237), 1,
      anon_sym_DOT,
  [731] = 1,
    ACTIONS(239), 1,
      anon_sym_globaltype,
  [735] = 1,
    ACTIONS(241), 1,
      sym_identifier,
  [739] = 1,
    ACTIONS(235), 1,
      aux_sym_type_token1,
  [743] = 1,
    ACTIONS(243), 1,
      anon_sym_forwardprototypes,
  [747] = 1,
    ACTIONS(245), 1,
      ts_builtin_sym_end,
  [751] = 1,
    ACTIONS(247), 1,
      sym_identifier,
  [755] = 1,
    ACTIONS(249), 1,
      anon_sym_forward,
  [759] = 1,
    ACTIONS(251), 1,
      anon_sym_within,
  [763] = 1,
    ACTIONS(253), 1,
      anon_sym_endtype,
  [767] = 1,
    ACTIONS(255), 1,
      anon_sym_endvariables,
  [771] = 1,
    ACTIONS(257), 1,
      sym_identifier,
  [775] = 1,
    ACTIONS(259), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 22,
  [SMALL_STATE(4)] = 44,
  [SMALL_STATE(5)] = 64,
  [SMALL_STATE(6)] = 84,
  [SMALL_STATE(7)] = 104,
  [SMALL_STATE(8)] = 123,
  [SMALL_STATE(9)] = 142,
  [SMALL_STATE(10)] = 161,
  [SMALL_STATE(11)] = 178,
  [SMALL_STATE(12)] = 195,
  [SMALL_STATE(13)] = 212,
  [SMALL_STATE(14)] = 229,
  [SMALL_STATE(15)] = 246,
  [SMALL_STATE(16)] = 260,
  [SMALL_STATE(17)] = 274,
  [SMALL_STATE(18)] = 288,
  [SMALL_STATE(19)] = 302,
  [SMALL_STATE(20)] = 316,
  [SMALL_STATE(21)] = 330,
  [SMALL_STATE(22)] = 341,
  [SMALL_STATE(23)] = 352,
  [SMALL_STATE(24)] = 363,
  [SMALL_STATE(25)] = 376,
  [SMALL_STATE(26)] = 387,
  [SMALL_STATE(27)] = 396,
  [SMALL_STATE(28)] = 405,
  [SMALL_STATE(29)] = 414,
  [SMALL_STATE(30)] = 423,
  [SMALL_STATE(31)] = 433,
  [SMALL_STATE(32)] = 441,
  [SMALL_STATE(33)] = 449,
  [SMALL_STATE(34)] = 457,
  [SMALL_STATE(35)] = 467,
  [SMALL_STATE(36)] = 475,
  [SMALL_STATE(37)] = 485,
  [SMALL_STATE(38)] = 493,
  [SMALL_STATE(39)] = 501,
  [SMALL_STATE(40)] = 509,
  [SMALL_STATE(41)] = 516,
  [SMALL_STATE(42)] = 523,
  [SMALL_STATE(43)] = 530,
  [SMALL_STATE(44)] = 535,
  [SMALL_STATE(45)] = 542,
  [SMALL_STATE(46)] = 549,
  [SMALL_STATE(47)] = 556,
  [SMALL_STATE(48)] = 563,
  [SMALL_STATE(49)] = 570,
  [SMALL_STATE(50)] = 577,
  [SMALL_STATE(51)] = 584,
  [SMALL_STATE(52)] = 591,
  [SMALL_STATE(53)] = 598,
  [SMALL_STATE(54)] = 605,
  [SMALL_STATE(55)] = 610,
  [SMALL_STATE(56)] = 617,
  [SMALL_STATE(57)] = 624,
  [SMALL_STATE(58)] = 631,
  [SMALL_STATE(59)] = 638,
  [SMALL_STATE(60)] = 645,
  [SMALL_STATE(61)] = 652,
  [SMALL_STATE(62)] = 659,
  [SMALL_STATE(63)] = 663,
  [SMALL_STATE(64)] = 667,
  [SMALL_STATE(65)] = 671,
  [SMALL_STATE(66)] = 675,
  [SMALL_STATE(67)] = 679,
  [SMALL_STATE(68)] = 683,
  [SMALL_STATE(69)] = 687,
  [SMALL_STATE(70)] = 691,
  [SMALL_STATE(71)] = 695,
  [SMALL_STATE(72)] = 699,
  [SMALL_STATE(73)] = 703,
  [SMALL_STATE(74)] = 707,
  [SMALL_STATE(75)] = 711,
  [SMALL_STATE(76)] = 715,
  [SMALL_STATE(77)] = 719,
  [SMALL_STATE(78)] = 723,
  [SMALL_STATE(79)] = 727,
  [SMALL_STATE(80)] = 731,
  [SMALL_STATE(81)] = 735,
  [SMALL_STATE(82)] = 739,
  [SMALL_STATE(83)] = 743,
  [SMALL_STATE(84)] = 747,
  [SMALL_STATE(85)] = 751,
  [SMALL_STATE(86)] = 755,
  [SMALL_STATE(87)] = 759,
  [SMALL_STATE(88)] = 763,
  [SMALL_STATE(89)] = 767,
  [SMALL_STATE(90)] = 771,
  [SMALL_STATE(91)] = 775,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_forward_prototypes_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_forward_prototypes_repeat1, 2, 0, 0),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_forward_prototypes_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_parameters_repeat1, 2, 0, 0),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(78),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_properties_repeat1, 2, 0, 0),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_properties_repeat1, 2, 0, 0), SHIFT_REPEAT(82),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_properties, 1, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_forward_types_repeat1, 2, 0, 0),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_forward_types_repeat1, 2, 0, 0), SHIFT_REPEAT(90),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_parameters_repeat1, 1, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_parameters_repeat1, 1, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal_content, 1, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal_content, 1, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameter, 2, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_parameter, 2, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameter, 3, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_parameter, 3, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 2, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 2, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_prototype, 2, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_prototype, 2, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_prototype, 1, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_prototype, 1, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_name, 1, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_name, 1, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_parameters, 2, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameters, 2, 0, 0),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_prototype_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_prototype_repeat1, 2, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_parameters, 3, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameters, 3, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_parameters_repeat1, 2, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_inherit_from, 5, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 4, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 4, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_forward_type, 7, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_class_properties, 6, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 8, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [211] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name, 1, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_forward_prototypes, 3, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_forward_types, 4, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_forward_types, 3, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_variables, 3, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_forward_prototypes, 2, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_type, 1, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
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
