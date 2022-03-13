#include "expr.h"
#include <stdlib.h>

Expr* make_literal_expr(Token* token) {
    Expr* expr = (Expr*) malloc(sizeof(Expr));
    expr->type = literal_expr;
    expr->token = token;
    return expr;
}

Expr* make_unary_expr(Token* token, Expr* right) {
    Expr* expr = (Expr*) malloc(sizeof(Expr));
    expr->type = unary_expr;
    expr->token = token;
    expr->unaryExpr.right = right;
    return expr;
}

Expr* make_binary_expr(Expr* left, Token* op, Expr* right) {
    Expr* expr = (Expr*) malloc(sizeof(Expr));
    expr->type = binary_expr;
    expr->token = op;
    expr->binaryExpr.left = left;
    expr->binaryExpr.right = right;
    return expr;
}

Expr* make_group_expr(Expr* e) {
    Expr* expr = (Expr*) malloc(sizeof(Expr));
    expr->type = group_expr;
    expr->groupExpr.expr = e;
    return expr;
}

Expr* make_identifier_expr(Token* token) {
    Expr* expr = (Expr*) malloc(sizeof(Expr));
    expr->type = identifier_expr;
    expr->token = token;
    return expr;
}

Expr* make_integeration_expr(Expr* int_expr, Expr* a, Expr* b) {
    Expr* expr = (Expr*) malloc(sizeof(Expr));
    expr->type = integeration_expr;
    expr->integerationExpr.int_expr = int_expr;
    expr->integerationExpr.a = a;
    expr->integerationExpr.b = b;
    return expr;
}
