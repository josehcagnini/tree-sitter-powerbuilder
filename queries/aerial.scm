; https://github.com/stevearc/aerial.nvim/blob/master/queries/php/aerial.scm
; (source_file
  (forward_type_implemetation
    InstanceControlName: (type_name) @name
    (#set! "kind" "Class")) @symbol

  (function_implementation
    (function_prototype
      (function_name) @name
      (#set! "kind" "Function"))) @symbol

  (event_implementation 
    (event_prototype_implementation
      (event_name) @name )
    (#set! "kind" "Event")) @symbol
  ; ) @symbol

; ((event_name) @name 
;               (#set! "kind" "Function")) @Symbol



; (function_definition
;   name: (name) @name
;   (#set! "kind" "Function")) @symbol

;
; found in the LSP spec:
; https://microsoft.github.io/language-server-protocol/specifications/lsp/3.17/specification/#symbolKind
; A current list is below.
;
; Array
; Boolean
; Class
; Constant
; Constructor
; Enum
; EnumMember
; Event
; Field
; File
; Function
; Interface
; Key
; Method
; Module
; Namespace
; Null
; Number
; Object
; Operator
; Package
; Property
; String
; Struct
; TypeParameter
; Variable

