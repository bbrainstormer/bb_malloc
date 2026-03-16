#include <stddef.h>

void* malloc(size_t size);

void* realloc(void* ptr, size_t new_size);

void* calloc(size_t num, size_t size);

void free(void* ptr);
