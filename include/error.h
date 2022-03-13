#ifndef ERROR_H
#define ERROR_H

#include <stdio.h>
#include <stdlib.h>
#include "token.h"

void error_msg(Token* token, const char* const message) {
    printf("[line %d] Error: %.*s\n%s\n", token->line, token->length, token->start, message);
    exit(65);
}

void error(Token* token) {
    error_msg(token, "");
}

#endif
