#include "vector.h"
#include "scanner.h"
#include "parser.h"
#include "interpreter.h"
#include "astPrinter.h"

void run(const char* const line) {
    initScanner(line); 
    Vector* tokens = scanTokens();

    initParser(tokens);
    Expr* ast = parse();

    initInterpreter(ast);
    interpret();

    freeScanner();
    freeInterpreter();
}

void runFile(const char* const fileName) {
    FILE* fp = fopen(fileName, "r");
    if (fp == NULL) {
        fprintf(stderr, "Error: Couldn't open file '%s' for read", fileName);
        return;
    }
    fseek(fp, 0, SEEK_END);
    size_t len = ftell(fp);
    char line[len];
    fseek(fp, 0, SEEK_SET);
    fread(line, len, 1, fp);

    run(line);

    fclose(fp);
}

void repl() {
    char line[1024];
    while (true ) {
        printf("> ");
        if (!fgets(line, 1024, stdin)) {
            break;
        }
        run(line);
        printf("\n");
    }
}

void help() {
    fprintf(stderr, "Usage: acalc [FileName]\n\n");
    fprintf(stderr, "Description:\n");
    fprintf(stderr, 
            "\tAdvanced Calculator (ACalc) is capable of calculating complex\n"
            "\tmathematical expression. It supports algebra, trigonometry and\n"
            "\tdefinite integral.\n\n");
    fprintf(stderr, "example:\n");
    fprintf(stderr,
            "> 34+234/3243*2423-432+sin(32+432/23+tan(x))-2343/23-34*sin(tan(x))\n"
            "-324.5426186\n"
            "> int( sin(x) )(0, pi)\n"
            "2\n"
            "> int(x^5*sin(cos(x)) + tan(x)*sin(x))(pi, 2*pi/3)\n"
            "114.3102697");
}

int main(int argc, char* argv[]) {

    switch (argc) {
        case 1: repl(); break;
        case 2: runFile(argv[1]); break;
        default:
                help();
    }

    return 0;
}
