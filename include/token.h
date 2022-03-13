#ifndef TOKEN_H
#define TOKEN_H

typedef enum {
    TOKEN_LEFT_PAREN, TOKEN_RIGHT_PAREN,
    TOKEN_LEFT_BRACE, TOKEN_RIGHT_BRACE,
    TOKEN_COMMA, TOKEN_DOT, TOKEN_MINUS, TOKEN_PLUS,
    TOKEN_SEMICOLON, TOKEN_SLASH, TOKEN_STAR,

    TOKEN_IDENTIFIER, TOKEN_NUMBER,

    TOKEN_SIN, TOKEN_COS, TOKEN_TAN,
    TOKEN_COSEC, TOKEN_SEC, TOKEN_COT,

    TOKEN_ERROR,
    TOKEN_EOF
} TokenType;

typedef struct {
    TokenType type;
    const char* start;
    int length;
    int line;
} Token;

#endif
