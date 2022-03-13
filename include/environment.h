#ifndef ENVIRONMENT_H
#define ENVIRONMENT_H

#include "token.h"

void initEnvironment();
double environment_get(Token* token);
void environment_define(const char* const name, double value);

#endif
