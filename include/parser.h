#ifndef PARSER_H
#define PARSER_H

#include "expr.h"
#include "vector.h"

void initParser(Vector* expr);
Expr* parse();

#endif
