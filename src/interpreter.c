#include "interpreter.h"
#include "error.h"
#include "environment.h"
#include "ast.h"
#include "common.h"
#include <ctype.h>
#include <math.h>
#include <ctype.h>

typedef struct {
    Expr* ast;
} Interpreter;

Interpreter interpreter;

static double evaluate(Expr* expr);

void initInterpreter(Expr* ast) {
   interpreter.ast = ast;
   initEnvironment();
}

void freeInterpreter() {
    destroyAST(interpreter.ast);
}

double visitLiteralExpr(Expr* expr) {
    return strtod(expr->token->start, NULL);
}

double visitUnaryExpr(Expr* expr) {
    double right = evaluate(expr->unaryExpr.right);

    switch (expr->token->type) {
        case TOKEN_MINUS:
            return -right;
        case TOKEN_SIN:
            return sin(right);
        case TOKEN_COS:
            return cos(right);
        case TOKEN_TAN:
            return tan(right);
        case TOKEN_COSEC:
            return 1/sin(right);
        case TOKEN_SEC:
            return 1/cos(right);
        case TOKEN_COT:
            return 1/tan(right);
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
        case TOKEN_POWER:
            return pow(left, right);
        default:
            return 0;
    }

    return 0;
}

double visitGroupExpr(Expr* expr) {
    return evaluate(expr->groupExpr.expr);
}

double visitIdentifierExpr(Expr* expr) {
    return environment_get(expr->token);
}

double visitIntegerationExpr(Expr* expr) {
    Expr* int_expr = expr->integerationExpr.int_expr;
    double a = evaluate(expr->integerationExpr.a);
    double b = evaluate(expr->integerationExpr.b); 

    double result = 0;
    int n = 100000;
    double h = (b - a) / n;
    for (double i = 1; i <= n; ++i) {
        environment_define("x", a+i*h);
        result += evaluate(int_expr)*h;
    }
    return result;
}

static double evaluate(Expr* expr) {
    switch (expr->type) {
        case literal_expr: return visitLiteralExpr(expr);
        case unary_expr: return visitUnaryExpr(expr);
        case binary_expr: return visitBinaryExpr(expr);
        case group_expr: return visitGroupExpr(expr);
        case identifier_expr: return visitIdentifierExpr(expr);
        case integeration_expr: return visitIntegerationExpr(expr);
    }
}

void interpret() {
    printf("%.10g", evaluate(interpreter.ast));
}
