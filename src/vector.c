#include "vector.h"
#include <string.h>
#include <assert.h>

#define MIN_SIZE 8

#define max(a, b) a > b ? a : b

static uint32_t roundup(uint32_t n) {
    if (n == 0)
        return 0;
    uint32_t r = 1;
    while (n > r)
        r *= 2;
    return r;
}

static Vector* do_vec_make(uint32_t size) {
    Vector* vec = (Vector*) malloc(sizeof(Vector));
    size = roundup(size);
    if (size > 0)
        vec->body = malloc(sizeof(void*) * size);
    vec->len = 0;
    vec->nalloc = size;
    return vec;
}

Vector* vec_make() {
    return do_vec_make(0);
}

void vec_destroy(Vector* vec) {
    for (int i = 0; i < vec->len; ++i) {
        free(vec->body[i]);
        vec->body[i] = NULL;
    }
    free(vec->body);
    vec->body = NULL;
    free(vec);
}

void vec_extend(Vector* vec, uint32_t delta) {
    if (vec->len + delta <= vec->nalloc) {
        return;
    }
    uint32_t nelem = max(roundup(vec->len + delta), MIN_SIZE);
    void* newbody = malloc(sizeof(void*) * nelem);
    memcpy(newbody, vec->body, sizeof(void*) * vec->len);
    vec->body = newbody;
    vec->nalloc = nelem;
}

void vec_push(Vector* vec, void* elem) {
    vec_extend(vec, 1);
    vec->body[vec->len++] = elem;
}

void* vec_pop(Vector* vec) {
    assert(vec->len > 0);
    return vec->body[--vec->len];
}

void* vec_get(Vector* vec, uint32_t index) {
    assert(0 <= index && index < vec->len);
    return vec->body[index];
}

void vec_set(Vector* vec, uint32_t index, void* val) {
    assert(0 <= index && index < vec->len);
    vec->body[index] = val;
}

void* vec_head(Vector* vec) {
    assert(vec->len > 0);
    return vec->body[0];
}

void* vec_tail(Vector* vec) {
    assert(vec->len > 0);
    return vec->body[vec->len - 1];
}

void* vec_body(Vector* vec) {
    return vec->body;
}

uint32_t vec_len(Vector* vec) {
    return vec->len;
}
