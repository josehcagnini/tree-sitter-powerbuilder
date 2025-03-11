; https://github.com/nvim-treesitter/nvim-treesitter/blob/master/queries/lua/locals.scm
[(code_block) ] @local.scope

; Definitions
; ((assignment_statement)
;   (variable_list
;     (identifier) @local.definition.var))

((code_block)
 (local_variable) @local.definition.var)
