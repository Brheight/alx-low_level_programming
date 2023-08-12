#include <stdlib.h>

void *_calloc(unsigned int nmemb, unsigned int size)
{
    if (nmemb == 0 || size == 0) {
        return NULL; // Return NULL if nmemb or size is 0
    }

    void *ptr = malloc(nmemb * size); // Allocate memory

    if (ptr == NULL) {
        return NULL; // Return NULL if malloc fails
    }

    // Initialize memory with zeros
    unsigned char *byte_ptr = ptr;
    for (unsigned int i = 0; i < nmemb * size; i++) {
        byte_ptr[i] = 0;
    }

    return ptr;
}
