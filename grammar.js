/**
 * @file a parser for Power Builder script language
 * @author Aliaxander Zhukau <sashazjukov@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "powerbuilder",

  // extras: (_) => ["\r"],

  rules: {
    source_file: ($) =>
      seq(
        seq("HA$PBExportHeader$", $.class_name, ".", $.class_type),
        $.forward_types,
        $.global_class_properties,
        $.class_variables,
        $.forward_prototypes,
      ),
    class_name: ($) => $.identifier,
    class_type: ($) => $.identifier,

    forward_types: ($) =>
      seq(
        "forward",
        $.class_inherit_from,
        repeat($.forward_type),
        "end forward",
      ),

    class_inherit_from: ($) =>
      seq("global type", $.identifier, "from", $.identifier, "end type"),

    forward_type: ($) =>
      seq(
        "type",
        $.identifier,
        "from",
        $.identifier,
        "within",
        $.identifier,
        "end type",
      ),

    identifier: (_) => /[a-zA-Z0-9_]+/,

    global_class_properties: ($) =>
      seq(
        "global type",
        $.identifier,
        "from",
        $.identifier,
        $.class_properties,
        "end type",
      ),

    class_variables: ($) =>
      seq("type variables", $.class_properties, "end variables"),

    forward_prototypes: ($) =>
      seq("forward prototypes", $.function_prototype, "end prototypes"),

    function_prototyp: ($) => seq(repeat($.identifier), $.function_parameters),

    function_parameter: ($) => $.function_parameter,
    function_paramete: ($) => seq(opt("ref"), $.type, $.identifier),

    class_properties: ($) => repeat1($.property),

    property: ($) => seq($.type, $.property_name, optional(seq("=", $.value))),

    type: ($) => /\w+/,
    property_name: ($) => /\w+/,

    value: ($) =>
      choice($.string_literal, $.integer, $.decimal, $.boolean_literal),
    string: ($) => /"([^"\\]|\\.)*"/,
    integer: ($) => /\d+/,
    decimal: ($) => /\d+\.\d+/,

    //--=[ String ]=-
    boolean_literal: (_) => choice("true", "false", "null"),

    //--=[ String ]=-
    string_literal: ($) =>
      seq(
        '"',
        repeat(choice($.string_literal_content, $.escape_sequence)),
        '"',
      ),

    string_literal_content: (_) =>
      choice(
        token.immediate(prec(1, /[^"\\\n]+/)),
        prec(2, token.immediate(seq("\\", /[^abefnrtv'\"\\\?0]/))),
      ),

    escape_sequence: (_) =>
      token(
        choice(
          /\\x[0-9a-fA-F]{2,4}/,
          /\\u[0-9a-fA-F]{4}/,
          /\\U[0-9a-fA-F]{8}/,
          /\\[abefnrtv'\"\\\?0]/,
        ),
      ),
  },
});
