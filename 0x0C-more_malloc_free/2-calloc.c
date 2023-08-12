#include "main.h"
#include <stdlib.h>

/**
 * _isdigit - Checks if a character is a digit.
 * @c: The character to check.
 *
 * Return: 1 if c is a digit, 0 otherwise.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
    if (nmemb == 0 || size == 0)
        return NULL;

    void *ptr = malloc(nmemb * size);

    if (ptr == NULL)
        return NULL;

    for (unsigned int i = 0; i < nmemb * size; i++)
    {
        *((char *)ptr + i) = 0;
    }

    return ptr;
}

