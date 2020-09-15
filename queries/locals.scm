;; Scopes

(document) @local.scope

(directive) @local.scope

;; Definitions

(title) @local.definition

(substitution_definition
  name: (substitution) @local.definition)

(footnote
  name: (label) @local.definition)

(citation
  name: (label) @local.definition)

(target
  name: (reference) @local.definition)

; Inline targets
(target) @local.definition

; The role directive can define a new role
((directive
  name: (type) @_type
  body: (body) @definition)
 (#match? @_type "role::"))

;; References

[
 (substitution_reference)
 (footnote_reference)
 (citation_reference)
 (reference)
 (role)
] @local.reference
