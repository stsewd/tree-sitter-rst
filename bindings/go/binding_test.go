package tree_sitter_rst_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_rst "github.com/stsewd/tree-sitter-rst//bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_rst.Language())
	if language == nil {
		t.Errorf("Error loading ReStructuredText grammar")
	}
}
