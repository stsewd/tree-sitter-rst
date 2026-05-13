; Diagnostic / lint queries for tree-sitter-rst.
;
; These are not standard tree-sitter editor queries (highlights, locals,
; injections, …); they are example patterns for tools that want to surface
; warnings or extract structured information from an RST tree.
;
; Run with the tree-sitter Python bindings, e.g.:
;
;     import tree_sitter, tree_sitter_rst
;     lang = tree_sitter.Language(tree_sitter_rst.language())
;     q = tree_sitter.Query(lang, open("queries/diagnostics.scm").read())
;     qc = tree_sitter.QueryCursor(q)
;     for _, caps in qc.matches(tree.root_node):
;         ...


; ---------------------------------------------------------------------------
; Suspicious unescaped `<` in a phrase reference name
; ---------------------------------------------------------------------------
;
; In a phrase reference body, ``<…>`` is reserved for embedded URIs/aliases.
; A literal ``<`` must be backslash-escaped, e.g. ``\``less \\< than\``_``.
; If the parser leaves a stray ``<`` in the name (because the closing ``>``
; was missing or the source was malformed), the input is almost certainly a
; typo — flag it.
;
; The regex matches a ``<`` that is NOT preceded by a backslash. Note: in
; tree-sitter query regex literals, ``\\`` is a single backslash in the
; subject string, so we double-escape to ``\\\\``.

((reference (name) @diagnostic.unescaped_lt)
 (#match? @diagnostic.unescaped_lt "(^|[^\\\\])<"))


; ---------------------------------------------------------------------------
; Parser error nodes
; ---------------------------------------------------------------------------

(ERROR) @diagnostic.parse_error


; ---------------------------------------------------------------------------
; Empty section title (probably an underline that lost its title)
; ---------------------------------------------------------------------------

((section (title) @diagnostic.empty_title)
 (#match? @diagnostic.empty_title "^\\s*$"))


; ===========================================================================
; The remaining patterns are not "diagnostics" but useful extraction
; queries — kept here as a single example file. Split them into separate
; files (e.g. queries/links.scm, queries/structure.scm) if your tooling
; benefits from that.
; ===========================================================================


; ---------------------------------------------------------------------------
; Hyperlinks: every URI the document points at
; ---------------------------------------------------------------------------
;
; Useful for link checkers / dead-link reporters. Captures both embedded
; URIs (`text <http://…>`_) and bare standalone hyperlinks.

(reference (uri) @link.embedded)
(standalone_hyperlink) @link.standalone


; ---------------------------------------------------------------------------
; Directives, by kind
; ---------------------------------------------------------------------------

(directive
  name: (type) @directive.kind
  body: (body) @directive.body)

; Pick out specific directive kinds — extend the list as needed.
((directive name: (type) @directive.todo)
 (#any-of? @directive.todo "todo" "TODO" "fixme" "FIXME"))

((directive name: (type) @directive.code)
 (#any-of? @directive.code "code" "code-block" "sourcecode"))


; ---------------------------------------------------------------------------
; Cross-references: footnote / citation use sites and definitions
; ---------------------------------------------------------------------------
;
; Pair the @ref.* captures against the @def.* captures in the host tool
; to find unresolved or unused references.

(footnote_reference) @ref.footnote
(citation_reference) @ref.citation

(footnote
  name: (label) @def.footnote_label
  body: (body)  @def.footnote_body)

(citation
  name: (label) @def.citation_label
  body: (body)  @def.citation_body)


; ---------------------------------------------------------------------------
; Structure: titles, field lists (good for TOC / metadata extraction)
; ---------------------------------------------------------------------------

(section (title) @structure.title)

(field
  (field_name) @structure.field_name
  (field_body) @structure.field_body)
