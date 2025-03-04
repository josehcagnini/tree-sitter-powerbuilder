
; Highlight class names
(class_name
  (identifier) @class.name)

; Highlight identifiers in forward prototypes
((type) @type)
((integer) @number)
((comment) @comment)
((string_literal_content) @string)
((function_name) @function)
((visibility) @visibility)
((return_statement) @keyword.return)

(function_parameters 
          (function_parameter 
            (type) @type 
            (identifier) @variable ))
