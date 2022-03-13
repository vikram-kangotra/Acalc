#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "common.h"
#include "scanner.h"
#include "vector.h"

typedef struct {
    Vector* tokens;
    const char* start;
    const char* current;
    int line;
} Scanner;

Scanner scanner;

void initScanner(const char* const source) {
    scanner.tokens = vec_make();
    scanner.start = source;
    scanner.current = source;
    scanner.line = 1;
}

void freeScanner() {
    vec_destroy(scanner.tokens);
}

static bool isAlpha(char c) {
    return (c >= 'a' && c <= 'z') ||
            (c >= 'A' && c <= 'Z') ||
            (c == '_');
}

static bool isDigit(char c) {
    return c >= '0' && c <= '9';
}

static bool isAtEnd() {
    return *scanner.current == '\0';
}

static char advance() {
    scanner.current++;
    return scanner.current[-1];
}

static char peek() {
    return *scanner.current;
}

static char peekNext() {
    if (isAtEnd()) return '\0';
    return scanner.current[1];
}

static bool match(char expected) {
    if (isAtEnd()) return false;
    if (peek() != expected) return false;

    scanner.current++;
    return true;
}

static Token* makeToken(TokenType type) {
    Token* token = (Token*) malloc(sizeof(Token));
    token->type = type;
    token->start = scanner.start;
    token->length = (int)(scanner.current - scanner.start);
    token->line = scanner.line;
    return token;
}

static Token* errorToken(const char* const message) {
    Token* token = (Token*) malloc(sizeof(Token));
    token->type = TOKEN_ERROR;
    token->start = message;
    token->length = (int)strlen(message);
    token->line = scanner.line;

    return token;
}

static void skipWhitespace() {
    for (;;) {
        char c = peek();
        switch (c) {
            case ' ':
            case '\r':
            case '\t':
                advance();
                break;
            case '\n':
                scanner.line++;
                advance();
                break;
            case '/':
                if (peekNext() == '/') {
                    while (peek() != '\n' && !isAtEnd()) advance();
                } else {
                    return;
                }
                break;
            default:
                return;
        }
    }
}

static TokenType checkKeyword(int start, int length,
        const char* const rest, TokenType type) {
    if (scanner.current - scanner.start == start + length &&
            memcmp(scanner.start + start, rest, length) == 0) {
        return type;
    }
    return TOKEN_IDENTIFIER;
}

static TokenType identifierType() {
    switch (scanner.start[0]) {
        case 'c': {
            if (scanner.current - scanner.start > 1) {
                TokenType type = checkKeyword(1, 2, "os", TOKEN_COS);
                if (type == TOKEN_IDENTIFIER)
                    type = checkKeyword(1, 4, "osec", TOKEN_COSEC);
                return type;
            }
        } break;
        case 'i': return checkKeyword(1, 2, "nt", TOKEN_INT);
        case 's': return checkKeyword(1, 2, "in", TOKEN_SIN);
        case 't': {
            if (scanner.current - scanner.start > 1) {
                switch (scanner.start[1]) {
                    case 'a': return checkKeyword(2, 1, "n", TOKEN_TAN);
                }
            }
        } break;
    }
    return TOKEN_IDENTIFIER;
}

static Token* identifier() {
    while (isAlpha(peek()) || isDigit(peek())) advance();
    return makeToken(identifierType());
}

static Token* number() {
    while (isDigit(peek())) advance();

    if (peek() == '.' && isDigit(peekNext())) {
        advance();
        while (isDigit(peek())) advance();
    }

    return makeToken(TOKEN_NUMBER);
}

Token* scanToken() {
    skipWhitespace();

    scanner.start = scanner.current;

    if (isAtEnd()) return makeToken(TOKEN_EOF);

    char c = advance();

    if (isAlpha(c)) return identifier();
    if (isDigit(c)) return number();

    switch (c) {
        case '(': return makeToken(TOKEN_LEFT_PAREN);
        case ')': return makeToken(TOKEN_RIGHT_PAREN);
        case '{': return makeToken(TOKEN_LEFT_BRACE);
        case '}': return makeToken(TOKEN_RIGHT_BRACE);
        case ';': return makeToken(TOKEN_SEMICOLON);
        case ',': return makeToken(TOKEN_COMMA);
        case '.': return makeToken(TOKEN_DOT);
        case '-': return makeToken(TOKEN_MINUS);
        case '+': return makeToken(TOKEN_PLUS);
        case '/': return makeToken(TOKEN_SLASH);
        case '*': return makeToken(TOKEN_STAR);
        case '^': return makeToken(TOKEN_POWER);
    }

    return errorToken("Unexpected character.");
}

Vector* scanTokens() {
    do {
        vec_push(scanner.tokens, scanToken()); 
    } while (!isAtEnd());

    return scanner.tokens;
}
