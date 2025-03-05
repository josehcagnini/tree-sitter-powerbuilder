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
        optional($.global_class_dummy),
        $.class_variables,
        $.forward_prototypes,
        optional($.function_implementations),
        optional($.event_implementations),
      ),
    class_name: ($) => field("classname", $._idt),
    class_type: ($) => $._idt,

    //--=[ Forwad Type ]=--
    forward_types: ($) =>
      seq(
        "forward",
        $.class_inherit_from,
        repeat($.forward_type),
        "end forward",
      ),

    class_inherit_from: ($) =>
      seq("global type", $.class_name, "from", $.class_name, "end type"),

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

    //--=[ Global Calss properties ]=--

    global_class_properties: ($) =>
      seq(
        field("dummy", "global type"),
        $.class_name,
        "from",
        $.class_name,
        $.class_properties,
        "end type",
      ),

    dummy_keyword: ($) => $._idt,
    global_class_dummy: ($) => seq($.dummy_keyword, $._idt, $._idt),

    class_variables: ($) =>
      seq("type variables", $.class_properties, "end variables"),

    forward_prototypes: ($) =>
      seq(
        "forward prototypes",
        repeat(seq($.function_prototype, $.newline)),
        "end prototypes",
      ),

    class_properties: ($) => repeat1($.class_variable),

    class_variable: ($) =>
      seq(
        $.type,
        commaSep1(
          seq($.local_variable, optional("[]"), optional(seq("=", $.value))),
        ),
      ),

    variable: ($) =>
      seq(
        optional($.type),
        commaSep1(
          seq(
            $.local_variable,
            optional("[]"),
            optional(seq("=", $.expression)),
          ),
        ),
      ),

    type: ($) => $._idt,
    local_variable: ($) => prec(3, $._idt),

    //--=[ Functions prototypes  ]=--
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

    function_parameter: ($) => seq(optional("ref"), $.type, $.local_variable),

    //--=[ Common definitions  ]=--

    value: ($) =>
      choice($.string_literal, $.integer, $.decimal, $.boolean_literal),
    string: ($) => /"([^"\\]|\\.)*"/,
    integer: ($) => /\d+/,
    decimal: ($) => /\d+\.\d+/,
    boolean_literal: (_) => choice("true", "false", "null"),

    //--=[ String ]=-
    string_literal: ($) =>
      choice(
        seq(
          "'",
          repeat(choice($.string_literal_content, $.escape_sequence)),
          "'",
        ),
        seq(
          '"',
          repeat(choice($.string_literal_content, $.escape_sequence)),
          '"',
        ),
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
    event_name: ($) => prec(10, $._idt),
    event_body: ($) => $.code_block,
    end_of_event: ($) => "end event",
    event_parameters: ($) => $.function_parameters,

    event_prototype: ($) => seq("event", $.event_name, $.event_parameters, ";"),

    event_implementations: ($) => repeat1($.event_implementation),

    event_implementation: ($) =>
      seq($.event_prototype, optional($.event_body), $.end_of_event),
    // public function integer wf_copy_file (string as_file_from, string as_file_to, boolean ab_over_write)
    function_implementations: ($) => repeat1($.function_implementation),
    function_implementation: ($) =>
      seq(
        $.function_prototype,
        ";",
        optional($.function_body),
        $.end_of_function,
      ),

    // function_decl: ($) =>
    //   seq(
    //     $.visibility,
    //     "function",
    //     $.type,
    //     $.function_name,
    //     $.function_parameters,
    //     ";",
    //   ),
    function_name: ($) => prec(10, $._idt),
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
            $.function_call,
            $.pb_constructions,
            $.object_method_call,
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

    local_declaration: ($) => prec(-10, seq($.variable, $.newline)),

    // expression: ($) =>
    //   choice(
    //     $._idt,
    //     $.unary_expression,
    //     // $.binary_expression,
    //     // $.assignment_expression,
    //     $.value,
    //     $.operator,
    //   ),

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
    lvalue_expression: ($) => $._idt,

    operator: ($) => choice("+", "-", "*", "/", "<>", ">=", "<=", "<", ">"),

    newline: ($) => /[\n\r]/,
    //-----------------------
    assignment: ($) => seq($._idt, "=", $.expression, $.newline),

    object_name: ($) => $._idt,

    object_method_call: ($) =>
      seq($.object_name, ".", choice($.object_method_call, $.function_call)),
    if_statment: ($) =>
      seq(
        "IF",
        $.expression,
        "THEN",
        $.newline,
        $.code_block,
        "END IF",
        $.newline,
      ),
    pb_constructions: ($) => choice($.if_statment),
    expression: ($) =>
      choice(
        $.binary_expression,
        $.parenthesized_expression,
        // $.number,
        $.value,
        $.local_variable,
        $.function_call,
        $.object_method_call,
      ),

    binary_expression: ($) =>
      prec.left(
        choice(
          seq($.expression, "*", $.expression),
          seq($.expression, "+", $.expression),
        ),
      ),

    parenthesized_expression: ($) => seq("(", $.expression, ")"),

    // _idt: (_) => /[a-zA-Z0-9_]+/,
    _idt: ($) => /[a-zA-Z_][a-zA-Z0-9_]*/,
    number: ($) => /\d+/,

    function_call: ($) => seq($.function_name, $.function_call_parameters),
    function_call_parameters: ($) =>
      seq("(", optional(repeat1(seq($.expression, optional(",")))), ")"),
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
