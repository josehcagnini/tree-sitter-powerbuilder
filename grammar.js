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
  // extras: ($) => [
  //   // /\s/, // whitespace
  //   $.newline,
  // ],

  rules: {
    source_file: ($) =>
      seq(
        seq("HA$PBExportHeader$", $.class_name, ".", $.class_type),
        $.forward_types,
        $.global_class_properties,
        $.class_variables,
        $.forward_prototypes,
        optional($.function_implementations),
      ),
    class_name: ($) => $.identifier,
    class_type: ($) => $.identifier,

    //--=[ Forwad Type ]=--
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

    //--=[ Global Calss properties ]=--

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
      seq("forward prototypes", repeat($.function_prototype), "end prototypes"),

    class_properties: ($) => repeat1($.class_variable),

    class_variable: ($) =>
      seq(
        $.type,
        commaSep1(
          seq($.variable_name, optional("[]"), optional(seq("=", $.value))),
        ),
      ),

    variable: ($) =>
      seq(
        $.type,
        commaSep1(
          seq(
            $.variable_name,
            optional("[]"),
            optional(seq("=", $.expression)),
          ),
        ),
      ),

    type: ($) => /\w+/,
    variable_name: ($) => /\w+/,

    //--=[ Functions prototypes  ]=--
    function_prototype: ($) => seq(repeat($.identifier), $.function_parameters),

    function_parameters: ($) =>
      seq("(", repeat(seq($.function_parameter, optional(","))), ")"),

    function_parameter: ($) => seq(optional("ref"), $.type, $.identifier),

    //--=[ Common definitions  ]=--

    value: ($) =>
      choice($.string_literal, $.integer, $.decimal, $.boolean_literal),
    string: ($) => /"([^"\\]|\\.)*"/,
    integer: ($) => /\d+/,
    decimal: ($) => /\d+\.\d+/,
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
    //----------------------

    // public function integer wf_copy_file (string as_file_from, string as_file_to, boolean ab_over_write)
    function_implementations: ($) => repeat1($.function_implementation),
    function_implementation: ($) =>
      seq($.function_decl, optional($.function_body), $.end_of_function),

    function_decl: ($) =>
      seq(
        $.visibility,
        "function",
        $.type,
        $.function_name,
        $.function_parameters,
        ";",
      ),
    function_name: ($) => $.identifier,
    function_body: ($) => $.code_block,
    end_of_function: ($) => choice("end function", "end subroutine"),

    visibility: ($) => choice("public", "private", "protected"),

    //--=[ CODE ]=--
    code_block: ($) =>
      repeat1(
        prec(
          1,
          choice(
            $.return_statement,
            $.local_declaration,
            $.comment,
            prec(2, $.assignment),
            // $.assignment_expression,
          ),
        ),
      ),

    comment: (_) =>
      token(
        choice(
          seq("//", /[^\n\r]*/),
          seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/"),
        ),
      ),

    return_statement: ($) =>
      prec.right(3, seq("return", optional($.expression), $.newline)),

    local_declaration: ($) => seq($.variable, $.newline),

    expression: ($) =>
      choice(
        $.identifier,
        $.unary_expression,
        // $.binary_expression,
        // $.assignment_expression,
        $.value,
        $.operator,
      ),

    unary_expression: ($) => prec.left(2, seq("-", $.expression)),

    binary_expression: ($) =>
      choice(
        prec.left(2, seq($.expression, "*", $.expression)),
        prec.left(1, seq($.expression, "+", $.expression)),
        // ...
      ),

    assignment_expression: ($) =>
      prec.left(
        2,
        seq(
          field("left", $.lvalue_expression),
          field("operator", "="),
          field("right", $.expression),
        ),
      ),
    lvalue_expression: ($) => $.identifier,

    operator: ($) => choice("+", "-", "*", "/", "<>", ">=", "<=", "<", ">"),

    newline: ($) => /[\n\r]/,
    //-----------------------
    assignment: ($) => seq($.identifier, "=", $.expression),

    expression: ($) =>
      choice(
        $.binary_expression,
        $.parenthesized_expression,
        // $.number,
        $.value,
        $.identifier,
      ),

    binary_expression: ($) =>
      prec.left(
        choice(
          seq($.expression, "*", $.expression),
          seq($.expression, "+", $.expression),
        ),
      ),

    parenthesized_expression: ($) => seq("(", $.expression, ")"),

    // identifier: (_) => /[a-zA-Z0-9_]+/,
    identifier: ($) => /[a-zA-Z_][a-zA-Z0-9_]*/,
    number: ($) => /\d+/,
  },
});

/*
 * Creates a rule to match one or more of the rules separated by a comma
 *
 * @param {Rule} rule
 *
 * @returns {SeqRule}
 */
function commaSep1(rule) {
  return seq(rule, repeat(field("comma", seq(",", rule))));
}
