#include "environment.h"
#include "vector.h"
#include "error.h"
#include <string.h>
#include <math.h>

Vector* environment;

typedef struct {
    const char* name;
    double value;
} Pair;

void initEnvironment() {
    environment = vec_make();
    environment_define("pi", M_PI);
    environment_define("x", 0);
}

bool equal(Token* token, Pair* pair) {
    return memcmp(token->start, pair->name, strlen(pair->name)) == 0;
}

static int find(Token* token) {
    for (int i = 0; i < environment->len; ++i) {
        if (equal(token, environment->body[i]))
            return i;
    }
    return -1;
}

double environment_get(Token* token) {
    int index = find(token);
    if (index == -1)
        error_msg(token, "variable not declared.");
    return vec_get_elem(Pair, environment, index)->value; 
}

void environment_define(const char* const name, double value) {
    Token token;
    token.start = name;
    int index = find(&token);
    if (index == -1) {
        Pair* pair = (Pair*) malloc(sizeof(Pair));
        pair->name = name;
        pair->value = value;
        vec_push(environment, pair);
    } else {
        ((Pair*)environment->body[index])->value = value;
    }
}
