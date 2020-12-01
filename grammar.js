
const numeric_types = [
  'u8',
  'i8',
  'u16',
  'i16',
  'u32',
  'i32',
  'u64',
  'i64',
  'u128',
  'i128',
  'isize',
  'usize',
  'f32',
  'f64'
]

const primitive_types = numeric_types.concat(['bool', 'str', 'char'])

module.exports = grammar({
  name: 'gleam',

  extras: $ => [/\s/, $.comment],


  word: $ => $.identifier,

  rules: {
    source_file: $ => repeat($._statement),

    _statement: $ => choice(
      $._expression_statement,
    ),

		_expression_statement: $ => choice($._boolean, $._literal),

		_literal: $ => choice($.integer),
		_boolean: $ => choice($.false, $.true),

		integer: $ => token(seq(
      choice(
        /[0-9][0-9_]*/,
        /0x[0-9a-fA-F_]+/,
        /0b[01_]+/,
        /0o[0-7_]+/
      )
    )),

		false: $ => choice('false', 'False'),
		true: $ => choice('true', 'True'),

		identifier: $ => /[a-zA-Z]+/,

		comment: $ => token(seq(
      '//', /[^\n]*/,
    ))
  }
})

function sepBy1(sep, rule) {
  return seq(rule, repeat(seq(sep, rule)))
}

function sepBy(sep, rule) {
  return optional(sepBy1(sep, rule))
}
