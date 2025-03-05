; !!! check available @params for colors here:
;; https://github.com/catppuccin/nvim/blob/main/lua/catppuccin/groups/integrations/treesitter.lua
; Highlight class names
(class_name
  (identifier) @class.name)

;; (clas_name) @type)
((forward_types) @keyword.dummy)
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
            (local_variable) @variable.member ))
((local_variable) @variable.instance)
((object_name) @variable.member)
((dummy_keyword) @keyword.dummy)
((forward_prototypes) @keyword.dummy)
(function_prototype
  (function_name) @function.declaration)
