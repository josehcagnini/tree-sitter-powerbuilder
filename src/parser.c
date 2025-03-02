#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 69
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 43
#define ALIAS_COUNT 0
#define TOKEN_COUNT 24
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
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
  anon_sym_EQ = 13,
  aux_sym_type_token1 = 14,
  sym_integer = 15,
  sym_decimal = 16,
  anon_sym_true = 17,
  anon_sym_false = 18,
  anon_sym_null = 19,
  anon_sym_DQUOTE = 20,
  aux_sym_string_literal_content_token1 = 21,
  aux_sym_string_literal_content_token2 = 22,
  sym_escape_sequence = 23,
  sym_source_file = 24,
  sym_class_name = 25,
  sym_class_type = 26,
  sym_forward_types = 27,
  sym_class_inherit_from = 28,
  sym_forward_type = 29,
  sym_global_class_properties = 30,
  sym_class_variables = 31,
  sym_class_properties = 32,
  sym_property = 33,
  sym_type = 34,
  sym_property_name = 35,
  sym_value = 36,
  sym_boolean_literal = 37,
  sym_string_literal = 38,
  sym_string_literal_content = 39,
  aux_sym_forward_types_repeat1 = 40,
  aux_sym_class_properties_repeat1 = 41,
  aux_sym_string_literal_repeat1 = 42,
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
  [sym_class_properties] = "class_properties",
  [sym_property] = "property",
  [sym_type] = "type",
  [sym_property_name] = "property_name",
  [sym_value] = "value",
  [sym_boolean_literal] = "boolean_literal",
  [sym_string_literal] = "string_literal",
  [sym_string_literal_content] = "string_literal_content",
  [aux_sym_forward_types_repeat1] = "forward_types_repeat1",
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
  [sym_class_properties] = sym_class_properties,
  [sym_property] = sym_property,
  [sym_type] = sym_type,
  [sym_property_name] = sym_property_name,
  [sym_value] = sym_value,
  [sym_boolean_literal] = sym_boolean_literal,
  [sym_string_literal] = sym_string_literal,
  [sym_string_literal_content] = sym_string_literal_content,
  [aux_sym_forward_types_repeat1] = aux_sym_forward_types_repeat1,
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
  [6] = 4,
  [7] = 7,
  [8] = 5,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 12,
  [14] = 10,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 20,
  [23] = 21,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 24,
  [34] = 34,
  [35] = 35,
  [36] = 34,
  [37] = 37,
  [38] = 38,
  [39] = 29,
  [40] = 31,
  [41] = 37,
  [42] = 38,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(109);
      ADVANCE_MAP(
        '"', 135,
        '.', 111,
        '=', 122,
        'H', 10,
        '\\', 15,
        'e', 57,
        'f', 17,
        'g', 51,
        'n', 86,
        't', 69,
        'w', 45,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(108);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(5);
      if (lookahead == '"') ADVANCE(135);
      if (lookahead == '\\') ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(136);
      if (lookahead != 0) ADVANCE(137);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(43);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(83);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(88);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(135);
      if (lookahead == '\\') ADVANCE(16);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      END_STATE();
    case 6:
      if (lookahead == '$') ADVANCE(14);
      END_STATE();
    case 7:
      if (lookahead == '$') ADVANCE(110);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(122);
      if (lookahead == 'e') ADVANCE(127);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 9:
      if (lookahead == '=') ADVANCE(122);
      if (lookahead == 'e') ADVANCE(128);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 10:
      if (lookahead == 'A') ADVANCE(6);
      END_STATE();
    case 11:
      if (lookahead == 'B') ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == 'E') ADVANCE(91);
      END_STATE();
    case 13:
      if (lookahead == 'H') ADVANCE(41);
      END_STATE();
    case 14:
      if (lookahead == 'P') ADVANCE(11);
      END_STATE();
    case 15:
      ADVANCE_MAP(
        'U', 139,
        'u', 141,
        'x', 140,
        '"', 142,
        '\'', 142,
        '0', 142,
        '?', 142,
        '\\', 142,
        'a', 142,
        'b', 142,
        'e', 142,
        'f', 142,
        'n', 142,
        'r', 142,
        't', 142,
        'v', 142,
      );
      if (lookahead != 0) ADVANCE(138);
      END_STATE();
    case 16:
      ADVANCE_MAP(
        'U', 99,
        'u', 104,
        'x', 101,
        '"', 142,
        '\'', 142,
        '0', 142,
        '?', 142,
        '\\', 142,
        'a', 142,
        'b', 142,
        'e', 142,
        'f', 142,
        'n', 142,
        'r', 142,
        't', 142,
        'v', 142,
      );
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(49);
      if (lookahead == 'o') ADVANCE(68);
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(72);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(32);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(52);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(73);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(28);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(76);
      END_STATE();
    case 26:
      if (lookahead == 'b') ADVANCE(22);
      END_STATE();
    case 27:
      if (lookahead == 'b') ADVANCE(54);
      END_STATE();
    case 28:
      if (lookahead == 'b') ADVANCE(55);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(2);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(112);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(113);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(42);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(4);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 43:
      if (lookahead == 'f') ADVANCE(62);
      if (lookahead == 't') ADVANCE(92);
      if (lookahead == 'v') ADVANCE(20);
      END_STATE();
    case 44:
      if (lookahead == 'h') ADVANCE(46);
      END_STATE();
    case 45:
      if (lookahead == 'i') ADVANCE(80);
      END_STATE();
    case 46:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 47:
      if (lookahead == 'i') ADVANCE(19);
      END_STATE();
    case 48:
      if (lookahead == 'i') ADVANCE(24);
      END_STATE();
    case 49:
      if (lookahead == 'l') ADVANCE(79);
      END_STATE();
    case 50:
      if (lookahead == 'l') ADVANCE(134);
      END_STATE();
    case 51:
      if (lookahead == 'l') ADVANCE(60);
      END_STATE();
    case 52:
      if (lookahead == 'l') ADVANCE(3);
      END_STATE();
    case 53:
      if (lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 54:
      if (lookahead == 'l') ADVANCE(38);
      END_STATE();
    case 55:
      if (lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 56:
      if (lookahead == 'm') ADVANCE(115);
      END_STATE();
    case 57:
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 58:
      if (lookahead == 'n') ADVANCE(118);
      END_STATE();
    case 59:
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 60:
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 61:
      if (lookahead == 'o') ADVANCE(74);
      END_STATE();
    case 62:
      if (lookahead == 'o') ADVANCE(75);
      END_STATE();
    case 63:
      if (lookahead == 'p') ADVANCE(34);
      END_STATE();
    case 64:
      if (lookahead == 'p') ADVANCE(61);
      END_STATE();
    case 65:
      if (lookahead == 'p') ADVANCE(36);
      END_STATE();
    case 66:
      if (lookahead == 'p') ADVANCE(37);
      END_STATE();
    case 67:
      if (lookahead == 'p') ADVANCE(39);
      END_STATE();
    case 68:
      if (lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 69:
      if (lookahead == 'r') ADVANCE(85);
      if (lookahead == 'y') ADVANCE(63);
      END_STATE();
    case 70:
      if (lookahead == 'r') ADVANCE(7);
      END_STATE();
    case 71:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 72:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 73:
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 74:
      if (lookahead == 'r') ADVANCE(82);
      END_STATE();
    case 75:
      if (lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 76:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 77:
      if (lookahead == 's') ADVANCE(121);
      END_STATE();
    case 78:
      if (lookahead == 's') ADVANCE(120);
      END_STATE();
    case 79:
      if (lookahead == 's') ADVANCE(35);
      END_STATE();
    case 80:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 81:
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 82:
      if (lookahead == 't') ADVANCE(13);
      END_STATE();
    case 83:
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 84:
      if (lookahead == 't') ADVANCE(94);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(84);
      END_STATE();
    case 85:
      if (lookahead == 'u') ADVANCE(33);
      END_STATE();
    case 86:
      if (lookahead == 'u') ADVANCE(53);
      END_STATE();
    case 87:
      if (lookahead == 'v') ADVANCE(20);
      END_STATE();
    case 88:
      if (lookahead == 'v') ADVANCE(25);
      END_STATE();
    case 89:
      if (lookahead == 'w') ADVANCE(18);
      END_STATE();
    case 90:
      if (lookahead == 'w') ADVANCE(23);
      END_STATE();
    case 91:
      if (lookahead == 'x') ADVANCE(64);
      END_STATE();
    case 92:
      if (lookahead == 'y') ADVANCE(65);
      END_STATE();
    case 93:
      if (lookahead == 'y') ADVANCE(66);
      END_STATE();
    case 94:
      if (lookahead == 'y') ADVANCE(67);
      END_STATE();
    case 95:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 96:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 97:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(131);
      END_STATE();
    case 98:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(142);
      END_STATE();
    case 99:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(107);
      END_STATE();
    case 100:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(144);
      END_STATE();
    case 101:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(100);
      END_STATE();
    case 102:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(98);
      END_STATE();
    case 103:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(102);
      END_STATE();
    case 104:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(103);
      END_STATE();
    case 105:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(104);
      END_STATE();
    case 106:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(105);
      END_STATE();
    case 107:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(106);
      END_STATE();
    case 108:
      if (eof) ADVANCE(109);
      ADVANCE_MAP(
        '"', 135,
        '.', 111,
        '=', 122,
        'H', 10,
        '\\', 16,
        'e', 57,
        'f', 17,
        'g', 51,
        'n', 86,
        't', 69,
        'w', 45,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(108);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_HA_DOLLARPBExportHeader_DOLLAR);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_forward);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_endforward);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_globaltype);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_endtype);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_within);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_typevariables);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_endvariables);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == ' ') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == ' ') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == 'd') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == 'd') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == 'n') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == 'n') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_decimal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(131);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_string_literal_content_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(136);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(137);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_string_literal_content_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(137);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_string_literal_content_token2);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_string_literal_content_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(107);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_string_literal_content_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(100);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_string_literal_content_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(103);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(142);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(143);
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
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 95},
  [10] = {.lex_state = 8},
  [11] = {.lex_state = 95},
  [12] = {.lex_state = 8},
  [13] = {.lex_state = 9},
  [14] = {.lex_state = 9},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 8},
  [21] = {.lex_state = 8},
  [22] = {.lex_state = 9},
  [23] = {.lex_state = 9},
  [24] = {.lex_state = 9},
  [25] = {.lex_state = 96},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 8},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 95},
  [32] = {.lex_state = 96},
  [33] = {.lex_state = 8},
  [34] = {.lex_state = 8},
  [35] = {.lex_state = 84},
  [36] = {.lex_state = 9},
  [37] = {.lex_state = 9},
  [38] = {.lex_state = 9},
  [39] = {.lex_state = 9},
  [40] = {.lex_state = 95},
  [41] = {.lex_state = 8},
  [42] = {.lex_state = 8},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 96},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 96},
  [50] = {.lex_state = 96},
  [51] = {.lex_state = 95},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 96},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 96},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 96},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 96},
  [67] = {.lex_state = 84},
  [68] = {.lex_state = 0},
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
    [sym_source_file] = STATE(65),
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
    STATE(41), 1,
      sym_value,
    STATE(33), 2,
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
    STATE(37), 1,
      sym_value,
    STATE(24), 2,
      sym_boolean_literal,
      sym_string_literal,
    ACTIONS(17), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
  [44] = 5,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      aux_sym_string_literal_content_token1,
    ACTIONS(25), 1,
      aux_sym_string_literal_content_token2,
    ACTIONS(27), 1,
      sym_escape_sequence,
    STATE(7), 2,
      sym_string_literal_content,
      aux_sym_string_literal_repeat1,
  [61] = 5,
    ACTIONS(23), 1,
      aux_sym_string_literal_content_token1,
    ACTIONS(25), 1,
      aux_sym_string_literal_content_token2,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      sym_escape_sequence,
    STATE(6), 2,
      sym_string_literal_content,
      aux_sym_string_literal_repeat1,
  [78] = 5,
    ACTIONS(23), 1,
      aux_sym_string_literal_content_token1,
    ACTIONS(25), 1,
      aux_sym_string_literal_content_token2,
    ACTIONS(27), 1,
      sym_escape_sequence,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    STATE(7), 2,
      sym_string_literal_content,
      aux_sym_string_literal_repeat1,
  [95] = 5,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      aux_sym_string_literal_content_token1,
    ACTIONS(40), 1,
      aux_sym_string_literal_content_token2,
    ACTIONS(43), 1,
      sym_escape_sequence,
    STATE(7), 2,
      sym_string_literal_content,
      aux_sym_string_literal_repeat1,
  [112] = 5,
    ACTIONS(23), 1,
      aux_sym_string_literal_content_token1,
    ACTIONS(25), 1,
      aux_sym_string_literal_content_token2,
    ACTIONS(46), 1,
      anon_sym_DQUOTE,
    ACTIONS(48), 1,
      sym_escape_sequence,
    STATE(4), 2,
      sym_string_literal_content,
      aux_sym_string_literal_repeat1,
  [129] = 4,
    ACTIONS(50), 1,
      aux_sym_type_token1,
    STATE(31), 1,
      sym_type,
    STATE(52), 1,
      sym_class_properties,
    STATE(10), 2,
      sym_property,
      aux_sym_class_properties_repeat1,
  [143] = 4,
    ACTIONS(52), 1,
      anon_sym_endvariables,
    ACTIONS(54), 1,
      aux_sym_type_token1,
    STATE(31), 1,
      sym_type,
    STATE(12), 2,
      sym_property,
      aux_sym_class_properties_repeat1,
  [157] = 4,
    ACTIONS(50), 1,
      aux_sym_type_token1,
    STATE(40), 1,
      sym_type,
    STATE(64), 1,
      sym_class_properties,
    STATE(14), 2,
      sym_property,
      aux_sym_class_properties_repeat1,
  [171] = 4,
    ACTIONS(56), 1,
      anon_sym_endvariables,
    ACTIONS(58), 1,
      aux_sym_type_token1,
    STATE(31), 1,
      sym_type,
    STATE(12), 2,
      sym_property,
      aux_sym_class_properties_repeat1,
  [185] = 4,
    ACTIONS(56), 1,
      anon_sym_endtype,
    ACTIONS(58), 1,
      aux_sym_type_token1,
    STATE(40), 1,
      sym_type,
    STATE(13), 2,
      sym_property,
      aux_sym_class_properties_repeat1,
  [199] = 4,
    ACTIONS(52), 1,
      anon_sym_endtype,
    ACTIONS(54), 1,
      aux_sym_type_token1,
    STATE(40), 1,
      sym_type,
    STATE(13), 2,
      sym_property,
      aux_sym_class_properties_repeat1,
  [213] = 3,
    ACTIONS(61), 1,
      anon_sym_endforward,
    ACTIONS(63), 1,
      anon_sym_type,
    STATE(17), 2,
      sym_forward_type,
      aux_sym_forward_types_repeat1,
  [224] = 3,
    ACTIONS(65), 1,
      anon_sym_endforward,
    ACTIONS(67), 1,
      anon_sym_type,
    STATE(16), 2,
      sym_forward_type,
      aux_sym_forward_types_repeat1,
  [235] = 3,
    ACTIONS(63), 1,
      anon_sym_type,
    ACTIONS(70), 1,
      anon_sym_endforward,
    STATE(16), 2,
      sym_forward_type,
      aux_sym_forward_types_repeat1,
  [246] = 2,
    ACTIONS(74), 1,
      aux_sym_string_literal_content_token1,
    ACTIONS(72), 3,
      anon_sym_DQUOTE,
      aux_sym_string_literal_content_token2,
      sym_escape_sequence,
  [255] = 2,
    ACTIONS(74), 1,
      aux_sym_string_literal_content_token1,
    ACTIONS(72), 3,
      anon_sym_DQUOTE,
      aux_sym_string_literal_content_token2,
      sym_escape_sequence,
  [264] = 2,
    ACTIONS(78), 1,
      aux_sym_type_token1,
    ACTIONS(76), 2,
      anon_sym_endvariables,
      anon_sym_EQ,
  [272] = 3,
    ACTIONS(80), 1,
      anon_sym_endvariables,
    ACTIONS(82), 1,
      anon_sym_EQ,
    ACTIONS(84), 1,
      aux_sym_type_token1,
  [282] = 2,
    ACTIONS(78), 1,
      aux_sym_type_token1,
    ACTIONS(76), 2,
      anon_sym_endtype,
      anon_sym_EQ,
  [290] = 3,
    ACTIONS(80), 1,
      anon_sym_endtype,
    ACTIONS(84), 1,
      aux_sym_type_token1,
    ACTIONS(86), 1,
      anon_sym_EQ,
  [300] = 2,
    ACTIONS(88), 1,
      anon_sym_endtype,
    ACTIONS(90), 1,
      aux_sym_type_token1,
  [307] = 2,
    ACTIONS(92), 1,
      sym_identifier,
    STATE(62), 1,
      sym_class_name,
  [314] = 2,
    ACTIONS(94), 1,
      anon_sym_globaltype,
    STATE(15), 1,
      sym_class_inherit_from,
  [321] = 2,
    ACTIONS(96), 1,
      anon_sym_globaltype,
    STATE(35), 1,
      sym_global_class_properties,
  [328] = 1,
    ACTIONS(98), 2,
      anon_sym_endforward,
      anon_sym_type,
  [333] = 2,
    ACTIONS(100), 1,
      anon_sym_endvariables,
    ACTIONS(102), 1,
      aux_sym_type_token1,
  [340] = 1,
    ACTIONS(104), 2,
      anon_sym_endforward,
      anon_sym_type,
  [345] = 2,
    ACTIONS(106), 1,
      aux_sym_type_token1,
    STATE(21), 1,
      sym_property_name,
  [352] = 2,
    ACTIONS(108), 1,
      sym_identifier,
    STATE(43), 1,
      sym_class_type,
  [359] = 2,
    ACTIONS(88), 1,
      anon_sym_endvariables,
    ACTIONS(90), 1,
      aux_sym_type_token1,
  [366] = 2,
    ACTIONS(110), 1,
      anon_sym_endvariables,
    ACTIONS(112), 1,
      aux_sym_type_token1,
  [373] = 2,
    ACTIONS(114), 1,
      anon_sym_typevariables,
    STATE(68), 1,
      sym_class_variables,
  [380] = 2,
    ACTIONS(110), 1,
      anon_sym_endtype,
    ACTIONS(112), 1,
      aux_sym_type_token1,
  [387] = 2,
    ACTIONS(116), 1,
      anon_sym_endtype,
    ACTIONS(118), 1,
      aux_sym_type_token1,
  [394] = 2,
    ACTIONS(120), 1,
      anon_sym_endtype,
    ACTIONS(122), 1,
      aux_sym_type_token1,
  [401] = 2,
    ACTIONS(100), 1,
      anon_sym_endtype,
    ACTIONS(102), 1,
      aux_sym_type_token1,
  [408] = 2,
    ACTIONS(124), 1,
      aux_sym_type_token1,
    STATE(23), 1,
      sym_property_name,
  [415] = 2,
    ACTIONS(116), 1,
      anon_sym_endvariables,
    ACTIONS(118), 1,
      aux_sym_type_token1,
  [422] = 2,
    ACTIONS(120), 1,
      anon_sym_endvariables,
    ACTIONS(122), 1,
      aux_sym_type_token1,
  [429] = 2,
    ACTIONS(126), 1,
      anon_sym_forward,
    STATE(27), 1,
      sym_forward_types,
  [436] = 1,
    ACTIONS(128), 1,
      anon_sym_within,
  [440] = 1,
    ACTIONS(130), 1,
      sym_identifier,
  [444] = 1,
    ACTIONS(132), 1,
      anon_sym_from,
  [448] = 1,
    ACTIONS(134), 1,
      anon_sym_globaltype,
  [452] = 1,
    ACTIONS(136), 1,
      anon_sym_endtype,
  [456] = 1,
    ACTIONS(138), 1,
      sym_identifier,
  [460] = 1,
    ACTIONS(140), 1,
      sym_identifier,
  [464] = 1,
    ACTIONS(142), 1,
      aux_sym_type_token1,
  [468] = 1,
    ACTIONS(144), 1,
      anon_sym_endvariables,
  [472] = 1,
    ACTIONS(146), 1,
      anon_sym_forward,
  [476] = 1,
    ACTIONS(148), 1,
      sym_identifier,
  [480] = 1,
    ACTIONS(150), 1,
      anon_sym_endtype,
  [484] = 1,
    ACTIONS(152), 1,
      sym_identifier,
  [488] = 1,
    ACTIONS(154), 1,
      anon_sym_DOT,
  [492] = 1,
    ACTIONS(156), 1,
      ts_builtin_sym_end,
  [496] = 1,
    ACTIONS(158), 1,
      anon_sym_from,
  [500] = 1,
    ACTIONS(160), 1,
      anon_sym_globaltype,
  [504] = 1,
    ACTIONS(162), 1,
      sym_identifier,
  [508] = 1,
    ACTIONS(164), 1,
      anon_sym_DOT,
  [512] = 1,
    ACTIONS(166), 1,
      anon_sym_from,
  [516] = 1,
    ACTIONS(168), 1,
      anon_sym_endtype,
  [520] = 1,
    ACTIONS(170), 1,
      ts_builtin_sym_end,
  [524] = 1,
    ACTIONS(172), 1,
      sym_identifier,
  [528] = 1,
    ACTIONS(174), 1,
      anon_sym_typevariables,
  [532] = 1,
    ACTIONS(176), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 22,
  [SMALL_STATE(4)] = 44,
  [SMALL_STATE(5)] = 61,
  [SMALL_STATE(6)] = 78,
  [SMALL_STATE(7)] = 95,
  [SMALL_STATE(8)] = 112,
  [SMALL_STATE(9)] = 129,
  [SMALL_STATE(10)] = 143,
  [SMALL_STATE(11)] = 157,
  [SMALL_STATE(12)] = 171,
  [SMALL_STATE(13)] = 185,
  [SMALL_STATE(14)] = 199,
  [SMALL_STATE(15)] = 213,
  [SMALL_STATE(16)] = 224,
  [SMALL_STATE(17)] = 235,
  [SMALL_STATE(18)] = 246,
  [SMALL_STATE(19)] = 255,
  [SMALL_STATE(20)] = 264,
  [SMALL_STATE(21)] = 272,
  [SMALL_STATE(22)] = 282,
  [SMALL_STATE(23)] = 290,
  [SMALL_STATE(24)] = 300,
  [SMALL_STATE(25)] = 307,
  [SMALL_STATE(26)] = 314,
  [SMALL_STATE(27)] = 321,
  [SMALL_STATE(28)] = 328,
  [SMALL_STATE(29)] = 333,
  [SMALL_STATE(30)] = 340,
  [SMALL_STATE(31)] = 345,
  [SMALL_STATE(32)] = 352,
  [SMALL_STATE(33)] = 359,
  [SMALL_STATE(34)] = 366,
  [SMALL_STATE(35)] = 373,
  [SMALL_STATE(36)] = 380,
  [SMALL_STATE(37)] = 387,
  [SMALL_STATE(38)] = 394,
  [SMALL_STATE(39)] = 401,
  [SMALL_STATE(40)] = 408,
  [SMALL_STATE(41)] = 415,
  [SMALL_STATE(42)] = 422,
  [SMALL_STATE(43)] = 429,
  [SMALL_STATE(44)] = 436,
  [SMALL_STATE(45)] = 440,
  [SMALL_STATE(46)] = 444,
  [SMALL_STATE(47)] = 448,
  [SMALL_STATE(48)] = 452,
  [SMALL_STATE(49)] = 456,
  [SMALL_STATE(50)] = 460,
  [SMALL_STATE(51)] = 464,
  [SMALL_STATE(52)] = 468,
  [SMALL_STATE(53)] = 472,
  [SMALL_STATE(54)] = 476,
  [SMALL_STATE(55)] = 480,
  [SMALL_STATE(56)] = 484,
  [SMALL_STATE(57)] = 488,
  [SMALL_STATE(58)] = 492,
  [SMALL_STATE(59)] = 496,
  [SMALL_STATE(60)] = 500,
  [SMALL_STATE(61)] = 504,
  [SMALL_STATE(62)] = 508,
  [SMALL_STATE(63)] = 512,
  [SMALL_STATE(64)] = 516,
  [SMALL_STATE(65)] = 520,
  [SMALL_STATE(66)] = 524,
  [SMALL_STATE(67)] = 528,
  [SMALL_STATE(68)] = 532,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_properties, 1, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_properties_repeat1, 2, 0, 0),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_properties_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_forward_types_repeat1, 2, 0, 0),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_forward_types_repeat1, 2, 0, 0), SHIFT_REPEAT(61),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal_content, 1, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal_content, 1, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_name, 1, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_name, 1, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 2, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 2, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_forward_type, 7, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_inherit_from, 5, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 4, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 4, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_forward_types, 4, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_type, 1, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name, 1, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_variables, 3, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_forward_types, 3, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [170] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_class_properties, 6, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 7, 0, 0),
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
