#include "main.h"
#include <stdlib.h>

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

