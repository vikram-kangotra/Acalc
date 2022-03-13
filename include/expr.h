#ifndef EXPR_H
#define EXPR_H

#include "token.h"

typedef struct Expr Expr;

struct Expr {
    enum { literal_expr, unary_expr, binary_expr, group_expr, identifier_expr} type;
    Token* token;
    union {
        struct {
            Expr* right;
        } unaryExpr;
        struct {
            Expr* left;
            Expr* right;
        } binaryExpr;
        struct {
            Expr* expr;
        } groupExpr;
    };
};

Expr* make_literal_expr(Token* token);
Expr* make_unary_expr(Token* token, Expr* right);
Expr* make_binary_expr(Expr* left, Token* op, Expr* right);
Expr* make_group_expr(Expr* expr);
Expr* make_identifier_expr(Token* token);

#endif
