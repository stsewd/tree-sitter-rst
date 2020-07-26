;; Scopes

(document) @local.scope

(directive) @local.scope

;; Definitions

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

;; References

[
 (substitution_reference)
 (footnote_reference)
 (citation_reference)
 (reference)
] @local.reference
