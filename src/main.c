#include "common.h"
#include "vector.h"
#include "scanner.h"
#include "parser.h"
#include "interpreter.h"
#include <stdio.h>
#include "astPrinter.h"

void run(const char* const line) {
    initScanner(line); 
    Vector* tokens = scanTokens();

    initParser(tokens);
    Expr* ast = parse();

    //astPrinter(ast);

    initInterpreter(ast);
    interpret();

    freeScanner();
}

int main(int argc, char* argv[]) {
    
    char line[1024];

    while (true) {
        printf("> ");
        if (!fgets(line, 1024, stdin)) {
            break;
        }
        run(line);
        printf("\n");
    }

    return 0;
}
