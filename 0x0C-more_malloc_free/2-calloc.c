#include <stdlib.h>
#include "main.h"

/**
 * _calloc - Allocates memory for an array of nmemb elements of size bytes each.
 * @nmemb: Number of elements in the array.
 * @size: Size of each element in bytes.
 *
 * Return: A pointer to the allocated memory.
 * If nmemb or size is 0, or if malloc fails, it returns NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
    void *ptr;

    if (nmemb == 0 || size == 0)
        return NULL;

    ptr = malloc(nmemb * size);

    if (ptr == NULL)
        return NULL;

    /* Zero out the allocated memory using memset */
    for (unsigned int i = 0; i < nmemb * size; i++)
        *((char *)ptr + i) = 0;

    return ptr;
}
