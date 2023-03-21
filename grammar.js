module.exports = grammar({
  name: "carbon",
  rules: {
    source_file: ($) => $.input,
    input: ($) => seq($.package_directive, repeat($.declaration)),
    package_directive: ($) => seq("package", $.identifier, $.api_or_impl, ";"),
    api_or_impl: ($) => choice("api", "impl"),

    declaration: ($) => choice($.function_declaration),
    function_declaration: ($) =>
      seq(
        $.fn_virtual_override_intro,
        $.declared_name,
        $.maybe_empty_tuple_pattern,
        $.return_term,
        $.block
      ),
    fn_virtual_override_intro: ($) => "fn",
    declared_name: ($) => $.identifier,
    identifier: ($) => /[A-Za-z][A-Za-z0-9_]*/,
    maybe_empty_tuple_pattern: ($) => seq("(", ")"),
    return_term: ($) => choice(seq("->", "auto"), seq("->", $.expression)),

    expression: ($) => $.if_expression,
    if_expression: ($) => $.statement_expression,
    statement_expression: ($) => $.ref_deref_expression,
    ref_deref_expression: ($) => $.postfix_expression,
    postfix_expression: ($) =>
      choice($.primary_expression, seq($.postfix_expression, $.tuple)),
    primary_expression: ($) =>
      choice(
        $.identifier,
        $.int_literal,
        $.string_literal,
        $.sized_type_literal
      ),

    int_literal: ($) => prec(1, choice($.decimal_number, $.hex_int_literal)),
    decimal_number: ($) => choice("0", seq($.non_zero_digit, repeat($.digit))),
    non_zero_digit: ($) => /[1-9]/,
    digit: ($) => /[0-9]/,
    hex_int_literal: ($) => seq($.hex_indicator, $.hex_number),
    hex_indicator: ($) => seq("0x", "0X"),
    hex_number: ($) => repeat1($.hex_digit),
    hex_digit: ($) => choice($.digit, /[a-f]/, /[A-F]/),

    string_literal: ($) => $.double_quoted_string_literal,
    double_quoted_string_literal: ($) =>
      seq('"', repeat(choice($.string_char, $.string_escape)), '"'),
    string_char: ($) => /[^\\\"]/,
    string_escape: ($) => choice($.string_single_escpace, $.numeric_escape),
    string_single_escpace: ($) => choice("\t", "\n", "\r", "\\", '"'),
    numeric_escape: ($) => seq("\\u", "{", $.code_point, "}"),
    code_point: ($) => repeat1($.hex_digit),
    hex_digit: ($) => choice($.digit, /[a-f]/, /[A-F]/),

    sized_type_literal: ($) => "i32",

    block: ($) => seq("{", repeat($.statement), "}"),
    statement: ($) =>
      choice(
        seq("var", $.pattern, "=", $.expression, ";"),
        seq("return", $.return_expression, ";"),
        seq($.statement_expression, ";")
      ),
    return_expression: ($) => $.expression,

    tuple: ($) => $.paren_expression_base,
    paren_expression_base: ($) =>
      choice(seq("(", ")"), seq("(", $.paren_expression_contents, ")")),
    paren_expression_contents: ($) => $.expression,
    pattern: ($) => choice($.non_expression_pattern, $.expression),
    non_expression_pattern: ($) =>
      choice("auto", seq($.binding_lhs, ":", $.pattern)),
    binding_lhs: ($) => choice($.identifier, "_"),
  },
});
