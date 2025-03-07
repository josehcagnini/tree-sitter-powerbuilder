/*
 * @file a parser for Power Builder script language
 * @author Aliaxander Zhukau <sashazjukov@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const PREC = {
  END_EVENT: 21,
  LOCAL_DECLARATION: 0,
  SQL_BLOCK: 20,
  CHOOSE_CASE_ELSE: 20,
  UNARY: 17,
  FUNCTION_NAME: 10,
  EVENT_NAME: 10,
  CODE_BLOCK: 2,
  CODE_BLOCK_CHOICE: 1,
  LOCAL_VAR: 3,
  RETURN: 40,
  BUILTIN_CONST: 9,
  STRING_LITERAL: 1,
  STRING_ESCAPE: 2,
  ASSIGNMENT: 3,
};

module.exports = grammar({
  name: "powerbuilder",

  // conflicts: ($) => [[$.assignment, $.variable_list]],

  rules: {
    // Top-level structure
    source_file: ($) =>
      repeat1(
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
        optional($.type_variables),
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
    class_variable: ($) => $.local_declaration,
    // class_variable: ($) =>
    //   seq(
    //     $.type,
    //     seq($.local_variable, optional("[]"), optional(seq("=", $.value))),
    //   ),
    variable_list: ($) =>
      seq(
        commaSep1(
          seq(
            $.local_variable,
            optional("[]"),
            optional(seq($.operator_assignment, $.expression)),
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
    function_name: ($) => prec(PREC.FUNCTION_NAME, $._idt),
    function_body: ($) => $.code_block,
    end_of_function: ($) => choice("end function", "end subroutine"),

    // Event handling
    event_prototype_protptypes: ($) => repeat1($.event_prototype_protptype),
    event_prototype_protptype: ($) => seq($.event_prototype, $.newline),

    event_prototype: ($) =>
      seq(
        "event",
        optional(seq("type", $.type)),
        $.event_name,
        optional($.event_parameters),
        optional($.event_builtin_type),
      ),

    event_builtin_type: ($) => $._idt,

    event_implementations: ($) => repeat1($.event_implementation),
    event_implementation: ($) =>
      seq($.event_prototype, ";", optional($.event_body), $.end_of_event),

    event_name: ($) => prec(PREC.EVENT_NAME, $._idt),
    event_parameters: ($) => $.function_parameters,
    event_body: ($) => $.code_block,
    end_of_event: ($) =>
      prec(PREC.END_EVENT, seq(token.immediate("end event"), $.newline)),

    sql_block: ($) =>
      prec(
        PREC.SQL_BLOCK,
        seq(
          choice(
            $.sql_start_keywords,
            // $.select_keyword,
            // $.update_keyword,
            // $.delete_keyword,
            // $.insert_keyword,
          ),
          optional(
            repeat1(
              seq(
                $.sql_keywords,
                optional($.sql_into_params),
                optional($.sql_statments),
              ),
            ),
          ),

          $.end_of_sql,
        ),
      ),

    sql_start_keywords: ($) =>
      choice(
        caseInsensitive("DECLARE"),
        caseInsensitive("DROP"),
        caseInsensitive("EXECUTE"),
        caseInsensitive("SELECT"),
        caseInsensitive("SELECTBLOB"),
        caseInsensitive("DELETE"),
        caseInsensitive("UPDATE"),
        caseInsensitive("COMMIT"),
        caseInsensitive("ROLLBACK"),
        caseInsensitive("INSERT"),
      ),

    sql_keywords: ($) =>
      choice(
        caseInsensitive("DECLARE"),
        caseInsensitive("ADD"),
        caseInsensitive("DROP"),
        caseInsensitive("GO"),
        caseInsensitive("EXECUTE"),
        caseInsensitive("IMMEDIATE"),
        caseInsensitive("SELECT"),
        caseInsensitive("SELECTBLOB"),
        caseInsensitive("INTO"),
        caseInsensitive("WHERE"),
        caseInsensitive("GROUP"),
        caseInsensitive("BY"),
        caseInsensitive("HAVING"),
        caseInsensitive("WITH"),
        caseInsensitive("ORDER"),
        caseInsensitive("FROM"),
        caseInsensitive("AS"),
        caseInsensitive("DELETE"),
        caseInsensitive("UPDATE"),
        caseInsensitive("COMMIT"),
        caseInsensitive("ROLLBACK"),
        caseInsensitive("INSERT"),
        caseInsensitive("SET"),
        caseInsensitive("CREATE"),
        caseInsensitive("TABLE"),
        caseInsensitive("INDEX"),
        caseInsensitive("ALTER"),
        caseInsensitive("VIEW"),
        caseInsensitive("FUNCTION"),
        caseInsensitive("CREATE OR REPLACE"),
        caseInsensitive("COLUMN"),
        caseInsensitive("TRIGGER"),
      ),
    // Add explicit tokenized SQL keywords
    select_keyword: ($) => $.sql_keywords,
    // update_keyword: ($) => prec.right($.sql_keywords),
    // delete_keyword: ($) => prec.right($.sql_keywords),
    // insert_keyword: ($) => prec.right($.sql_keywords),

    // Keep existing SQL rules but add explicit tokenization
    sql_into_params: ($) =>
      // field("into_keyword", token(/(INTO|into|Into)/)),
      repeat1(seq(":", $.local_variable, optional(","))),

    sql_statments: ($) =>
      repeat1(
        choice(
          $._idt,
          $.operator_compare,
          ".",
          // seq(optional(":"), $.local_variable),
        ),
      ),
    end_of_sql: ($) =>
      seq(
        field("using_keyword", token(/(USING|using|Using)/)),
        $.local_variable,
        ";",
      ),

    choose_block_start: ($) => caseInsensitive("choose case"),
    choose_case: ($) => caseInsensitive("case"),

    choose_case_else: ($) =>
      prec(PREC.CHOOSE_CASE_ELSE, seq(caseInsensitive("case else"), $.newline)),
    choose_end: ($) => seq(caseInsensitive("end choose"), $.newline),

    choose_block: ($) =>
      seq(
        $.choose_block_start,
        $.expression,
        $.newline,
        repeat1(
          seq(
            choice(
              seq(
                $.choose_case,
                repeat1(seq($.expression, optional(","), optional("&"))),
                $.newline,
              ),
              $.choose_case_else,
            ),
            optional($.code_block),
          ),
        ),
        $.choose_end,
      ),

    // Code blocks and control structures
    code_block: ($) =>
      prec.right(
        repeat1(
          prec(
            PREC.CODE_BLOCK_CHOICE,
            choice(
              $.return_statement,
              $.local_declaration,
              $.comment,
              prec(PREC.ASSIGNMENT, $.assignment),
              $.function_call,
              $.if_statment,
              $.object_method_call,
              $.sql_block,
              $.choose_block,
              $.goto_def,
              $.goto_use,
            ),
          ),
        ),
      ),

    goto_def: ($) => seq($._idt, ":"),
    goto_use: ($) => seq(token(caseInsensitive("goto")), $._idt, $.newline),

    if_keyword: ($) => caseInsensitive("IF"),
    elseif_keyword: ($) => caseInsensitive("ELSEIF"),
    then_keyword: ($) => caseInsensitive("THEN"),
    else_keyword: ($) => caseInsensitive("ELSE"),
    endif_keyword: ($) => caseInsensitive("END IF"),

    // pb_constructions: ($) => choice($.if_statment),
    if_statment: ($) =>
      choice(
        seq(
          choice($.if_keyword, $.elseif_keyword),
          $.expression,
          $.then_keyword,
          optional($.comment),
          $.newline,
          optional($.code_block),
          optional(seq($.else_keyword, optional($.comment), $.newline)),
          optional($.code_block),
          $.endif_keyword,
          $.newline,
        ),
        seq(
          $.if_keyword,
          $.expression,
          $.then_keyword,
          $.code_block,
          $.newline,
        ),
      ),

    // repeat_statement: ($) =>
    //   seq(
    //     alias("repeat", $.repeat_start),
    //     optional($._block),
    //     alias("until", $.repeat_until),
    //     $._expression,
    //   ),

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
        PREC.UNARY,
        seq(
          field("operator", caseInsensitive("NOT")),
          field("argument", $.expression),
        ),
      ),

    binary_expression: ($) =>
      prec.left(choice(seq($.expression, $.operator_compare, $.expression))),
    parenthesized_expression: ($) => seq("(", $.expression, ")"),
    assignment: ($) =>
      seq(
        // $.object_method_call,
        $.local_variable,
        $.operator_assignment,
        repeat1($.expression),
        $.newline,
      ),
    operator_assignment: ($) => "=",

    // Literals and values
    value: ($) =>
      choice(
        $.string_literal,
        $.integer,
        $.decimal,
        $.boolean_literal,
        // $.local_variable,
      ),
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
    boolean_literal: ($) =>
      choice(caseInsensitive("TRUE"), caseInsensitive("FALSE")),
    operator_compare: ($) =>
      choice(
        "+",
        "-",
        "*",
        "/",
        ">",
        "<",
        "=",
        "<>",
        ">=",
        "<=",
        $.operator_logical,
      ),
    operator_logical: ($) =>
      choice(caseInsensitive("AND"), caseInsensitive("OR")),
    // Common components
    visibility: ($) =>
      choice(
        caseInsensitive("public"),
        caseInsensitive("private"),
        caseInsensitive("protected"),
      ),
    type: ($) => $._idt,
    local_variable: ($) =>
      prec.left(PREC.LOCAL_VAR, seq($._idt, optional($.array_construction))),
    builtin_const: ($) =>
      prec(
        PREC.BUILTIN_CONST,
        choice(seq($._idt, "!"), caseInsensitive("null")),
      ),
    object_method_call: ($) =>
      seq(
        field("left", $.object_name),
        ".",
        optional(caseInsensitive("event")),
        field(
          "right",
          choice(
            $.object_name,
            $.object_method_call,
            $.function_call,
            $.array_call,
          ),
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
      choice(token.immediate(prec(PREC.STRING_LITERAL, /[^'\n]+/))),
    string_literal_content: (_) =>
      choice(token.immediate(prec(PREC.STRING_LITERAL, /[^"\n]+/))),
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
      prec.right(PREC.RETURN, seq("return", optional($.expression), $.newline)),
    local_declaration: ($) =>
      prec(PREC.LOCAL_DECLARATION, seq($.type, $.variable_list, $.newline)),
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

function caseInsensitive(keyword) {
  return new RegExp(
    keyword
      .split("")
      .map((char) => `[${char.toLowerCase()}${char.toUpperCase()}]`)
      .join(""),
  );
}
