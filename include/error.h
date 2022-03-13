#ifndef ERROR_H
#define ERROR_H

#include "token.h"

void error_msg(Token* token, const char* const message);
void error(Token* token);

#endif
