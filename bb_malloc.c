#include <stddef.h>
#include <sys/mman.h>
#include <unistd.h>

typedef struct MEM_BLOCK mem_block_t;
typedef struct MEM_HEADER mem_header_t;

const size_t MIN_CHUNK_SIZE = 0;

typedef struct MEM_BLOCK {
    mem_block_t* next;
    size_t size;
} mem_block_t;

typedef struct MEM_HEADER {
    mem_block_t* prev;
    size_t mem_size;
} mem_header_t;

static mem_block_t* free_list;

void* allocate_memory(size_t pages) {
    return mmap(
        NULL,
        pages*sysconf(_SC_PAGESIZE),
        PROT_EXEC | PROT_WRITE | PROT_READ,
        MAP_PRIVATE | MAP_ANONYMOUS,
        -1, 0
    );
}

// Find a free chunk that's big enough,
// Split it if necessary
// And return
void* malloc(size_t size) { return NULL; }

// Should've planned ahead buddy
void* realloc(void* ptr, size_t new_size) {return NULL; }

// Is memset() too much work for you?
void* calloc(size_t num, size_t size) {return NULL; }

void free(void* ptr) {
    // We want to slot it back into the linked list of free memory
    // Then we merge adjacent free chunks
    _exit(1);
}
