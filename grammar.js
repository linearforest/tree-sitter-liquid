const lf = "\n";

function any_directive(...args) {
  return choice(
    seq(choice("{{", "{{-"), ...args, choice("}}", "-}}")),
    seq(choice("{%", "{%-"), ...args, choice("%}", "-%}")),
  );
}

function directive(...args) {
  return seq(choice("{%", "{%-"), ...args, choice("%}", "-%}"));
}

const PREC = Object.fromEntries(
  [
    ["comparision_operator", "<", ">", "<=", ">=", "==", "!=", "contains"],
    ["logical_operator", "and", "or"],
  ]
    .reverse()
    .flatMap((ks, i) => ks.map(k => [k, i])),
);

module.exports = grammar({
  name: "liquid",

  word: $ => $.identifier,

  conflicts: $ => [],

  rules: {
    program: $ => repeat($._statement),

    _statement: $ =>
      choice(
        $._control_flow,
        any_directive($._expression),
        any_directive($.assignment),
        $.comment,
      ),

    comment: $ => token(directive(/\s*#/, /[^#]+/)),

    code: $ => repeat1(choice($._expression)),

    trim: $ => token("-"),

    _literal: $ => choice($.string, $.number, $.boolean),

    string: $ => choice(seq("'", /[^']*/, "'"), seq('"', /[^"]*/, '"')),

    number: $ => choice(/-?\d*\.?\d+/),

    boolean: $ => choice("true", "false"),

    assignment: $ =>
      seq(
        "assign",
        field("left", $.identifier),
        "=",
        field("right", $._expression),
      ),

    _control_flow: $ => choice($.if_expression),

    _expression: $ =>
      choice(
        $.filter,
        $.identifier,
        $.include_expression,
        $.render_expression,
        $.access,
        $.binary_expression,
        $._literal,
        //TODO: add more expression types
      ),

    access: $ =>
      choice(
        prec(
          1,
          seq(
            field("operand", $.identifier),
            repeat1(
              choice(
                seq(".", field("field", $.identifier)),
                seq("[", field("field", $.string), "]"),
              ),
            ),
          ),
        ),
      ),

    identifier: $ => /[a-zA-Z_][a-zA-Z0-9]*/,

    comparision_operator: $ =>
      choice("==", "!=", ">", "<", ">=", "<=", "contains"),

    logical_operator: $ => choice("or", "and"),

    filter: $ =>
      seq(
        field("body", $._expression),
        "|",
        field("name", $.identifier),
        optional(seq(":", $.argument_list)),
      ),

    argument_list: $ =>
      seq(
        choice($._literal, $.identifier, $.argument),
        repeat(seq(",", choice($._literal, $.identifier, $.argument))),
      ),

    argument: $ =>
      seq(
        field("key", $.identifier),
        ":",
        field("value", choice($._literal, $.identifier)),
      ),

    include_expression: $ =>
      seq(field("include", "include"), field("included_file", $.string)),

    render_expression: $ =>
      seq(field("render", "render"), field("rendered_file", $.string)),

    binary_expression: $ => {
      const productions = ["comparision_operator", "logical_operator"];

      // https://shopify.dev/docs/api/liquid/basics#order-of-operations
      return choice(
        ...productions.map(term =>
          prec.right(
            PREC[term],
            seq(
              field("left", $._expression),
              field("operator", $[term]),
              field("right", $._expression),
            ),
          ),
        ),
      );
    },

    if_expression: $ =>
      seq(
        directive(seq("if", field("condition", $._expression))),

        field("consequence", alias(repeat($._statement), $.block)),

        repeat(field("alternatives", $.elseif_expression)),

        optional(field("alternatives", $.else_expression)),

        directive("endif"),
      ),

    elseif_expression: $ =>
      prec.left(
        1,
        seq(
          directive(seq("elseif", field("condition", $._expression))),
          field("consequence", alias(repeat($._statement), $.block)),
        ),
      ),

    else_expression: $ =>
      prec.left(
        1,
        seq(
          directive("else"),
          field("consequence", alias(repeat($._statement), $.block)),
        ),
      ),
  },
});
