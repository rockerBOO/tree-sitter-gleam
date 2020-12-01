const PREC = {
  comparison: 2,
};

const numeric_types = [
  "u8",
  "i8",
  "u16",
  "i16",
  "u32",
  "i32",
  "u64",
  "i64",
  "u128",
  "i128",
  "isize",
  "usize",
  "f32",
  "f64",
];

const primitive_types = numeric_types.concat(["bool", "str", "char"]);

module.exports = grammar({
  name: "gleam",

  extras: ($) => [/\s/, $.comment],

  word: ($) => $.identifier,

  rules: {
    source_file: ($) => repeat($._statement),

    _statement: ($) => choice($._expression_statement, $._declaration),

    _expression_statement: ($) => seq($._expression, $._end),

    _expression: ($) =>
      choice(
        $.unary_expression,
        $.binary_expression,
        $._boolean,
        $._literal,
				$.string,
				$.identifier
      ),

    _declaration: ($) => choice($.binding),

    unary_expression: ($) => seq(choice("-", "!"), $._expression),

    binary_expression: ($) =>
      prec.left(
        PREC.comparison,
        seq(
          $._expression,
          choice($.int_operator, $.float_operator),
          $._expression
        )
      ),

    _literal: ($) => choice($.integer, $.float),
    _boolean: ($) => choice($.false, $.true),

    binding: ($) => seq("let", $.identifier, "=", $._expression, $._end),
    _operators: ($) => prec.right(choice($.int_operator, $.float_operator)),

    int_operator: () => choice("+", "-", "/", "*", "%", ">", "<", ">=", "<="),

    float_operator: () =>
      choice("+.", "-.", "/.", "*.", ">.", "<.", ">=.", "<=."),

    string: () => seq('"', repeat(choice(seq("\\", '"'), /[^"]/)), '"'),

    integer: () => /[0-9][0-9_]*/,
		_integer: ($) => alias($.integer, $._integer),
		float: ($) => {
			return seq(field('left', $._integer), ".", field('right', $._integer))
		},

    false: () => choice("false", "False"),
    true: () => choice("true", "True"),

    identifier: () => /[a-zA-Z]+/,

    comment: () => token(seq("//", /[^\n]*/)),

    _end: () => /\n/,
  },
});

function sepBy1(sep, rule) {
  return seq(rule, repeat(seq(sep, rule)));
}

function sepBy(sep, rule) {
  return optional(sepBy1(sep, rule));
}
