#include "ast.h"
#include <stdlib.h>

static void evaluate(Expr* expr);

static void visitLiteralExpr(Expr* expr) {
    free(expr);
}

static void visitUnaryExpr(Expr* expr) {
    evaluate(expr->unaryExpr.right);
    free(expr);
}

static void visitBinaryExpr(Expr* expr) {
    evaluate(expr->binaryExpr.left);
    evaluate(expr->binaryExpr.right);
    free(expr);
}

static void visitGroupExpr(Expr* expr) {
    evaluate(expr->groupExpr.expr);
    free(expr);
}

static void visitIdentifierExpr(Expr* expr) {
    free(expr);
}

static void visitIntegerationExpr(Expr* expr) {
    evaluate(expr->integerationExpr.int_expr);
    evaluate(expr->integerationExpr.a);
    evaluate(expr->integerationExpr.b); 
    free(expr);
}

static void evaluate(Expr* expr) {
    switch (expr->type) {
        case literal_expr: return visitLiteralExpr(expr);
        case unary_expr: return visitUnaryExpr(expr);
        case binary_expr: return visitBinaryExpr(expr);
        case group_expr: return visitGroupExpr(expr);
        case identifier_expr: return visitIdentifierExpr(expr);
        case integeration_expr: return visitIntegerationExpr(expr);
    }
}

void destroyAST(Expr* ast) {
    evaluate(ast);
}
