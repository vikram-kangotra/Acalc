#ifndef clox_scanner_h
#define clox_scanner_h

#include "token.h"
#include "vector.h"

void initScanner(const char* const source);
void freeScanner();
Vector* scanTokens();

#endif
