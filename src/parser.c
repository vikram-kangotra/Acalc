#include "parser.h"
#include "expr.h"
#include "error.h"

// expression       ->  term;
// term             ->  factor (("-" | "+") factor)*;
// factor           ->  unary (("/" | "*") unary)*;
// unary            ->  ("-") unary | primary;
// primary          ->  NUMBER
//                  |   IDENTIFIER
//                  |   "(" expression ")";

typedef struct {
    Vector* tokens;
    uint32_t current;
} Parser;

Parser parser;

void initParser(Vector* tokens) {
   parser.tokens = tokens; 
   parser.current = 0;
}

static Expr* expression();

static Token* peek() {
    return parser.tokens->body[parser.current];
}

static Token* previous() {
    return parser.tokens->body[parser.current - 1];
}

static bool isAtEnd() {
    return peek()->type == TOKEN_EOF;
}

static Token* advance() {
    if (!isAtEnd()) parser.current++;
    return previous();
}

static bool check(TokenType type) {
    if (isAtEnd()) return false;
    return peek()->type == type;
}

static bool match(TokenType type) {
    if (check(type)) {
        advance();
        return true;
    }
    return false;
}

static Token* consume(TokenType type, const char* const message) {
    if (check(type)) return advance();
    error_msg(peek(), message);
}

static Expr* primary() {
    if (match(TOKEN_NUMBER)) {
        return make_literal_expr(previous());
    }
    if (match(TOKEN_LEFT_PAREN)) {
        Expr* expr = expression();
        consume(TOKEN_RIGHT_PAREN, "Expect ')' after expression.");
        return make_group_expr(expr);
    }

    error_msg(peek(), "Expect expression.");
}

static Expr* unary() {
    if (match(TOKEN_MINUS)) {
        Token* operator = previous();
        Expr* right = unary();
        return make_unary_expr(operator, right);
    }
    return primary();
}

static Expr* factor() {
    Expr* expr = unary();

    while (match(TOKEN_SLASH) || match(TOKEN_STAR)) {
        Token* operator = previous();
        Expr* right = unary();
        expr = make_binary_expr(expr, operator, right);
    }
    return expr;
}

static Expr* term() {
    Expr* expr = factor();

    while (match(TOKEN_MINUS) || match(TOKEN_PLUS)) {
        Token* operator = previous();
        Expr* right = factor();
        expr = make_binary_expr(expr, operator, right);
    }
    return expr;
}

static Expr* expression() {
    return term();
}

Expr* parse() {
    return expression();
}
