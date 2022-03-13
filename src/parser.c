#include "parser.h"
#include "expr.h"
#include "error.h"

// expression       ->  term;
// term             ->  factor (("-" | "+") factor)*;
// factor           ->  unary (("/" | "*") unary)*;
// unary            ->  ("-" | "sin" | "cos" | "tan") unary | power;
// power            ->  primary ("^" primary)*;
// integeration     ->  "int" "(" term ")" "(" term "," term ")" | primary;
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
    return NULL;
}

static Expr* primary() {
    if (match(TOKEN_NUMBER)) {
        return make_literal_expr(previous());
    }
    if (match(TOKEN_IDENTIFIER)) {
        return make_identifier_expr(previous());
    }
    if (match(TOKEN_LEFT_PAREN)) {
        Expr* expr = expression();
        consume(TOKEN_RIGHT_PAREN, "Expect ')' after expression.");
        return make_group_expr(expr);
    }

    error_msg(peek(), "Expect expression.");
    return NULL;
}

static Expr* integeration() {
    if (match(TOKEN_INT)) {
        consume(TOKEN_LEFT_PAREN, "Expect '(' after expression.");
        Expr* int_expr = expression();
        consume(TOKEN_RIGHT_PAREN, "Expect ')' after expression.");
        consume(TOKEN_LEFT_PAREN, "Expect '(' after expression.");
        Expr* a = expression();
        consume(TOKEN_COMMA, "Expect ',' after expression.");
        Expr* b = expression();
        consume(TOKEN_RIGHT_PAREN, "Expect ')' after expression.");
        return make_integeration_expr(int_expr, a, b);
    }
    return primary();
}

static Expr* power() {
    Expr* expr = integeration();

    while (match(TOKEN_POWER)) {
        Token* operator = previous();
        Expr* right = primary();
        expr = make_binary_expr(expr, operator, right);
    }
    return expr;
}

static Expr* unary() {
    if (match(TOKEN_MINUS) ||
        match(TOKEN_SIN) || match(TOKEN_COS) || match(TOKEN_TAN) 
        ) {
        Token* operator = previous();
        Expr* right = unary();
        return make_unary_expr(operator, right);
    }
    return power();
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
