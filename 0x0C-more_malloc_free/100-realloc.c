#include <stdlib.h>
#include "main.h"

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
    if (ptr == NULL) {
        return malloc(new_size); // Equivalent to malloc(new_size)
    }

    if (new_size == 0) {
        free(ptr); // Equivalent to free(ptr)
        return NULL;
    }

    if (new_size == old_size) {
        return ptr; // Do nothing and return ptr
    }

    void *new_ptr = malloc(new_size); // Allocate new memory

    if (new_ptr == NULL) {
        return NULL; // Return NULL if malloc fails
    }

    // Copy the content from old pointer to new pointer
    unsigned char *old_byte_ptr = ptr;
    unsigned char *new_byte_ptr = new_ptr;
    for (unsigned int i = 0; i < old_size && i < new_size; i++) {
        new_byte_ptr[i] = old_byte_ptr[i];
    }

    free(ptr); // Free the old memory

    return new_ptr;
}
