#include "interpreter.h"
#include "error.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

typedef struct {
    Expr* ast;
} Interpreter;

Interpreter interpreter;

static double evaluate(Expr* expr);

void initInterpreter(Expr* ast) {
   interpreter.ast = ast;
}

double visitLiteralExpr(Expr* expr) {
    return strtod(expr->token->start, NULL);
}

double visitUnaryExpr(Expr* expr) {
    switch (expr->token->type) {
        case TOKEN_MINUS:
            return -evaluate(expr->unaryExpr.right);
        default:
            return 0;
    }
}

double visitBinaryExpr(Expr* expr) {
    double left = evaluate(expr->binaryExpr.left);
    double right = evaluate(expr->binaryExpr.right);

    switch (expr->token->type) {
        case TOKEN_PLUS:
            return left + right;
        case TOKEN_MINUS:
            return left - right;
        case TOKEN_STAR:
            return left * right;
        case TOKEN_SLASH:
            if (right == 0)
                error_msg(expr->token, "divide by 0 is undefined");
            return left / right;
        default:
            return 0;
    }

    return 0;
}

double visitGroupExpr(Expr* expr) {
    return evaluate(expr->groupExpr.expr);
}

static double evaluate(Expr* expr) {
    switch (expr->type) {
        case literal_expr: return visitLiteralExpr(expr);
        case unary_expr: return visitUnaryExpr(expr);
        case binary_expr: return visitBinaryExpr(expr);
        case group_expr: return visitGroupExpr(expr);
    }
}

void interpret() {
    printf("%g", evaluate(interpreter.ast));
}
