; https://github.com/nvim-treesitter/nvim-treesitter/blob/master/queries/markdown/injections.scmgg
((sql_block) @injection.content
  (#set! injection.language "sql")
  (#set! injection.combined)
  (#set! injection.include-children)
  )


; https://github.com/nvim-treesitter/nvim-treesitter/blob/master/queries/markdown/injections.scmgg
((dw_sql) @injection.content
  (#set! injection.language "sql")
  (#set! injection.combined)
  (#set! injection.include-children)
  )

