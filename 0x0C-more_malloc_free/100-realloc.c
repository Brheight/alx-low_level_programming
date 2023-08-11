#include <stdlib.h>
#include "main.h"

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: Pointer to the memory block to be reallocated.
 * @old_size: Size of the old memory block in bytes.
 * @new_size: Size of the new memory block in bytes.
 *
 * Return: A pointer to the reallocated memory block.
 * If new_size is equal to zero and ptr is not NULL, the function frees ptr and returns NULL.
 * If malloc fails, returns NULL.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
    void *new_ptr;

    if (new_size == old_size)
        return ptr;

    if (ptr == NULL)
        return malloc(new_size);

    if (new_size == 0)
    {
        free(ptr);
        return NULL;
    }

    new_ptr = malloc(new_size);

    if (new_ptr == NULL)
        return NULL;

    if (new_size > old_size)
        new_size = old_size;

    for (unsigned int i = 0; i < new_size; i++)
        *((char *)new_ptr + i) = *((char *)ptr + i);

    free(ptr);

    return new_ptr;
}