#include <stddef.h>
#include <sys/mman.h>
#include <unistd.h>

void* malloc(size_t size) { return NULL; }

void* realloc(void* ptr, size_t new_size) {return NULL; }

void* calloc(size_t num, size_t size) {return NULL; }

void free(void* ptr);
