#include "astPrinter.h"
#include <stdio.h>

static void evaluate(Expr* expr);

static void printToken(Token* token) {
    printf("%.*s", token->length, token->start);
}

static void visitLiteralExpr(Expr* expr) {
    printToken(expr->token);
}

static void visitUnaryExpr(Expr* expr) {
    printToken(expr->token);
    evaluate(expr->unaryExpr.right);
}

static void visitBinaryExpr(Expr* expr) {
    printf("(");
    evaluate(expr->binaryExpr.left);
    printToken(expr->token);
    evaluate(expr->binaryExpr.right);
    printf(")");
}

static void visitGroupExpr(Expr* expr) {
    printf("(");
    evaluate(expr->groupExpr.expr);
    printf(")");
}

static void evaluate(Expr* expr) {
    switch (expr->type) {
        case literal_expr: visitLiteralExpr(expr); break;
        case unary_expr: visitUnaryExpr(expr); break;
        case binary_expr: visitBinaryExpr(expr); break;
        case group_expr: visitGroupExpr(expr); break;
    }
}

void astPrinter(Expr* expr) {
    evaluate(expr);
}
