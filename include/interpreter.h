#ifndef INTERPRETER_H
#define INTERPRETER_H

#include "expr.h"

void initInterpreter(Expr* ast);
void freeInterpreter();
void interpret();

#endif
