#include "environment.h"
#include "vector.h"
#include "error.h"
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdio.h>

Vector* environment;

typedef struct {
    const char* name;
    double value;
} Pair;

void define(const char* const name, double value) {
    Pair* pair = (Pair*) malloc(sizeof(Pair));
    pair->name = name;
    pair->value = value;
    vec_push(environment, pair);
}

void initEnvironment() {
    environment = vec_make();
    define("pi", M_PI);
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
    return ((Pair*)environment->body[index])->value;
}
