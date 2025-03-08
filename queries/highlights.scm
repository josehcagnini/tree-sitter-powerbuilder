; !!! check available @params for colors here:
;; https://github.com/catppuccin/nvim/blob/main/lua/catppuccin/groups/integrations/treesitter.lua
; Highlight class names

((ERROR) @ts.error)
[
  ";"
  "."
  ","
  "["
  "]"
  "("
  ")"
] @punctuation.delimiter


;; [
;;  "IF"
;;  "THEN"
;;  "END IF"
;;  "ELSE"
;;  "ELSEIF"
;;  ] @keyword

[
 "event"
 "end event"
 "function"
 "end function"
 "type"
 "from"
 "end type"
 "type variables"
 "end variables"
 ] @keyword.directive

((event_prototype) @event_prototype)

((operator_assignment) @operator)
((operator_compare) @operator)
((operator_logical) @operator.logical)

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
((return_expression) @keyword.return)

(function_parameters 
          (function_parameter 
            (type) @keyword.type 
            (local_variable) @variable.local ))

((local_variable) @variable.local)

((object_name) @variable.member_left)

(object_method_call 
  left: (object_name)  @variable.member_left
  right: (object_name) @varibale.member)

(object_method_call 
  right: (array_call) @varibale.array_call)


(function_prototype
  (function_name) @function.declaration)
  ((event_name) @function.declaration)



((sql_keywords) @sql.keyword)
((sql_start_keywords) @sql.keyword)
((end_of_sql) @sql.keyword )
(sql_into_params 
 (local_variable) @sql.parameter)

;; (select_keyword) @keyword
;; (update_keyword) @keyword
;; (delete_keyword) @keyword
;; (insert_keyword) @keyword
;; (sql_into (token) @keyword)
;; (end_of_sql (token) @keyword)

; Control flow keywords
(if_keyword) @keyword.control.conditional
(elseif_keyword) @keyword.control.conditional
(then_keyword) @keyword.control.conditional
(else_keyword) @keyword.control.conditional
(endif_keyword) @keyword.control.conditional


(choose_block_start) @keyword
(choose_case) @keyword
(choose_case_else) @keyword
(choose_end) @keyword
