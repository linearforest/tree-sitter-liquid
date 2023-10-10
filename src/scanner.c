#include <stdio.h>
#include <tree_sitter/parser.h>
#include <wctype.h>

enum TokenType { COMMENT };

void *tree_sitter_liquid_external_scanner_create() { return NULL; }

void tree_sitter_liquid_external_scanner_destroy(void *payload) {}

unsigned tree_sitter_liquid_external_scanner_serialize(void *payload,
                                                       char *buffer) {
  return 0;
}
void tree_sitter_liquid_external_scanner_deserialize(void *payload,
                                                     const char *buffer,
                                                     unsigned length) {}

bool tree_sitter_liquid_external_scanner_scan(void *payload, TSLexer *lexer,
                                              const bool *valid_symbols) {
  // Eat whitespace
  while (iswspace(lexer->lookahead)) {
    lexer->advance(lexer, true);
  }

  if (valid_symbols[COMMENT]) {
    switch (lexer->lookahead) {
    case '#':
      lexer->result_symbol = COMMENT;

      // Stop at the end of the line, or the end of the document, or if the
      // parser has jumped.
      while (!(lexer->eof(lexer) == true || lexer->lookahead == '\n' ||
               lexer->is_at_included_range_start(lexer))) {
        lexer->advance(lexer, false);
      }

      return true;
    }
  }
  return false;
}
