; !!! check available @params for colors here:
;; https://github.com/catppuccin/nvim/blob/main/lua/catppuccin/groups/integrations/treesitter.lua
; Highlight class names

[
  ";"
  "."
  ","
  "["
  "]"
  "("
  ")"
] @punctuation.delimiter


[
 "IF"
 "THEN"
 "END IF"
 "ELSE"
 "ELSEIF"
 ] @keyword


((operator_compare) @operator)
((builtin_const) @keyword)

((class_name) @class.name)

;; (clas_name) @type)
((forward_types) @keyword.directive)
((forward_prototypes) @keyword.directive)
((dummy_keyword) @keyword.directive)

; Highlight identifiers in forward prototypes
((type) @keyword.type)
((integer) @number)
((comment) @comment)
((string_literal_content) @string)
((string_literal_content_single) @string)
((function_name) @function)
((visibility) @visibility)
((return_statement) @keyword.return)

(function_parameters 
          (function_parameter 
            (type) @keyword.type 
            (local_variable) @variable.member ))
((local_variable) @variable.instance)
((object_name) @variable.member)
(function_prototype
  (function_name) @function.declaration)
  ((event_name) @function.declaration)
