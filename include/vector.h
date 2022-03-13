#ifndef VECTOR_H
#define VECTOR_H

#include "common.h"

typedef struct {
    void** body;
    uint32_t len;
    uint32_t nalloc;
} Vector;

Vector* vec_make();
void vec_destroy(Vector* vec);
void vec_push(Vector* vec, void* elem);
void* vec_pop(Vector* vec);
void* vec_get(Vector* vec, uint32_t index);
void vec_set(Vector* vec, uint32_t index, void* val);
void* vec_head(Vector* vec);
void* vec_tail(Vector* vec);
void* vec_body(Vector* vec);
uint32_t vec_len(Vector* vec);

#endif
