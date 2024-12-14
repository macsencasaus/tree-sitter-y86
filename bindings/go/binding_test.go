package tree_sitter_y86_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_y86 "github.com/macsencasaus/tree-sitter-y86/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_y86.Language())
	if language == nil {
		t.Errorf("Error loading Y86 grammar")
	}
}
