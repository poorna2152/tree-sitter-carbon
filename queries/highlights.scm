"fn" @keyword
"return" @keyword
"var" @keyword
"i32" @type
"auto" @type
(int_literal) @number
(declared_name (identifier) @function)
(package_directive (identifier) @package)
(string_literal) @string
(primary_expression (identifier)) @primary
