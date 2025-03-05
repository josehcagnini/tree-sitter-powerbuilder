/*
 * @file a parser for Power Builder script language
 * @author Aliaxander Zhukau <sashazjukov@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "powerbuilder",

  rules: {
    // Top-level structure
    source_file: ($) =>
      seq(
        seq("HA$PBExportHeader$", $.class_name, ".", $.class_type),
        $.forward_types,
        $.global_class_properties,
        optional($.global_class_dummy),
        $.class_variables,
        $.forward_prototypes,
        choice(
          optional($.event_implementations),
          optional($.function_implementations),
        ),
      ),

    // optional($.event_prototype_protptypes),
    // Class structure
    class_name: ($) => field("classname", $._idt),
    class_type: ($) => $._idt,
    global_class_properties: ($) =>
      seq(
        field("dummy", "global type"),
        $.class_name,
        "from",
        $.class_name,
        $.newline,
        $.type_variables,
        "end type",
      ),

    class_inherit_from: ($) =>
      seq("global type", $.class_name, "from", $.class_name, "end type"),

    // Forward declarations
    forward_types: ($) =>
      seq(
        "forward",
        $.class_inherit_from,
        repeat($.forward_type),
        "end forward",
      ),
    forward_type: ($) =>
      seq(
        "type",
        field("InstanceControlName", $.class_name),
        "from",
        $.class_name,
        "within",
        $.class_name,
        "end type",
      ),

    // Variables and properties
    class_variables: ($) =>
      seq("type variables", $.type_variables, "end variables"),
    type_variables: ($) =>
      repeat1(choice($.class_variable, $.event_prototype_protptype)),
    class_variable: ($) =>
      seq(
        $.type,
        seq($.local_variable, optional("[]"), optional(seq("=", $.value))),
      ),
    variable_list: ($) =>
      seq(
        commaSep1(
          seq(
            $.local_variable,
            optional("[]"),
            optional(seq("=", $.expression)),
          ),
        ),
      ),

    // Function prototypes
    forward_prototypes: ($) =>
      seq(
        "forward prototypes",
        repeat(seq($.function_prototype, $.newline)),
        "end prototypes",
      ),
    function_prototype: ($) =>
      seq(
        $.visibility,
        choice("function", "subroutine"),
        $.type,
        $.function_name,
        $.function_parameters,
      ),
    function_parameters: ($) =>
      seq("(", repeat(seq($.function_parameter, optional(","))), ")"),

    function_parameter: ($) =>
      seq(optional("ref"), $.type, $.local_variable, optional(seq("[", "]"))),

    // Function implementations
    function_implementations: ($) => repeat1($.function_implementation),
    function_implementation: ($) =>
      seq(
        $.function_prototype,
        ";",
        optional($.function_body),
        $.end_of_function,
      ),
    function_name: ($) => prec(10, $._idt),
    function_body: ($) => $.code_block,
    end_of_function: ($) => choice("end function", "end subroutine"),

    // Event handling
    event_prototype_protptypes: ($) => repeat1($.event_prototype_protptype),
    event_prototype_protptype: ($) => seq($.event_prototype, $.newline),

    event_implementations: ($) => repeat1($.event_implementation),
    event_implementation: ($) =>
      seq($.event_prototype, ";", $.event_body, $.end_of_event),
    event_prototype: ($) => seq("event", $.event_name, $.event_parameters),

    event_name: ($) => prec(10, $._idt),
    event_parameters: ($) => $.function_parameters,
    event_body: ($) => $.code_block,
    end_of_event: ($) => prec(20, seq("end event", $.newline)),

    sql_block: ($) =>
      prec(
        20,
        seq(
          choice("SELECT", "UPDATE", "DELETE", "INSERT"),
          optional($.sql_into),
          $.sql_statments,
          $.end_of_sql,
        ),
      ),

    sql_into: ($) =>
      prec.right(
        seq("INTO", repeat(seq(":", $.local_variable, optional(",")))),
      ),
    sql_statments: ($) =>
      repeat1(
        choice(
          $._idt,
          $.operator_compare,
          seq(optional(":"), $.local_variable),
        ),
      ),
    end_of_sql: ($) => seq("USING", $.local_variable, ";"),

    // Code blocks and control structures
    code_block: ($) =>
      prec.right(
        repeat1(
          prec(
            1,
            choice(
              $.return_statement,
              $.local_declaration,
              $.comment,
              prec(2, $.assignment),
              $.function_call,
              $.pb_constructions,
              $.object_method_call,
              $.sql_block,
            ),
          ),
        ),
      ),

    pb_constructions: ($) => choice($.if_statment),
    if_statment: ($) =>
      seq(
        field("keyword", choice("IF", "ELSEIF")),
        $.expression,
        field("keyword", "THEN"),
        optional($.comment),
        $.newline,
        optional($.code_block),
        optional(seq("ELSE", optional($.comment))),
        optional($.code_block),
        field("keyword", "END IF"),
        $.newline,
      ),

    // Expressions
    expression: ($) =>
      choice(
        $.binary_expression,
        $.parenthesized_expression,
        $.value,
        $.local_variable,
        $.builtin_const,
        $.function_call,
        $.object_method_call,
      ),
    unary_expression: ($) =>
      prec.left(
        17,
        seq(field("operator", "NOT"), field("argument", $.expression)),
      ),

    binary_expression: ($) =>
      prec.left(choice(seq($.expression, $.operator_compare, $.expression))),
    parenthesized_expression: ($) => seq("(", $.expression, ")"),
    assignment: ($) =>
      seq($.object_method_call, "=", repeat1($.expression), $.newline),

    // Literals and values
    value: ($) =>
      choice($.string_literal, $.integer, $.decimal, $.boolean_literal),
    string_literal: ($) =>
      choice(
        seq(
          "'",
          repeat(choice($.string_literal_content_single, $.escape_sequence)),
          "'",
        ),
        seq(
          '"',
          repeat(choice($.string_literal_content, $.escape_sequence)),
          '"',
        ),
      ),
    integer: ($) => /\d+/,
    decimal: ($) => /\d+\.\d+/,
    boolean_literal: ($) => choice("TRUE", "true", "FALSE", "false", "null"),
    operator_compare: ($) =>
      choice("+", "-", "*", "/", ">", "<", "=", "<>", ">=", "<=", "OR", "AND"),

    // Common components
    visibility: ($) => choice("public", "private", "protected"),
    type: ($) => $._idt,
    local_variable: ($) =>
      prec.left(3, seq($._idt, optional($.array_construction))),
    builtin_const: ($) => prec(4, seq($._idt, "!")),
    object_method_call: ($) =>
      seq(
        $.object_name,
        ".",
        choice(
          $.object_name,
          $.object_method_call,
          $.function_call,
          $.array_call,
        ),
      ),
    function_call: ($) => seq($.function_name, $.function_call_parameters),
    function_call_parameters: ($) =>
      seq("(", optional(repeat1(seq($.expression, optional(",")))), ")"),

    // Low-level tokens
    _idt: ($) => /[a-zA-Z_][a-zA-Z0-9_]*/,
    newline: ($) => /[\n\r]/,
    comment: (_) =>
      token(
        choice(
          seq("//", /[^\n\r]*/),
          seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/"),
        ),
      ),
    string_literal_content_single: (_) =>
      choice(
        token.immediate(prec(1, /[^'\\\n]+/)),
        prec(2, token.immediate(seq("\\", /[^abefnrtv'\"\\\?0]/))),
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

    // Helper rules
    global_class_dummy: ($) => seq($.dummy_keyword, $._idt, $._idt),
    dummy_keyword: ($) => $._idt,
    array_construction: ($) => seq("[", $.expression, "]"),
    object_name: ($) => $._idt,
    array_call: ($) => seq($._idt, $.array_construction),
    return_statement: ($) =>
      prec.right(3, seq("return", optional($.expression), $.newline)),
    local_declaration: ($) => seq(optional($.type), $.variable_list, $.newline),
  },
});

// ... existing helper functions ...

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
