#include <stdlib.h> // Include the necessary header for malloc and free

/**
 * _calloc - Allocates memory for an array of nmemb elements of size bytes each.
 * The memory is set to zero.
 * @nmemb: Number of elements in the array.
 * @size: Size of each element in bytes.
 *
 * Return: Pointer to the allocated memory, or NULL on failure.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
    void *ptr;

    if (nmemb == 0 || size == 0)
        return NULL;

    ptr = malloc(nmemb * size);


    if (ptr == NULL)
        return NULL;


    for (unsigned int i = 0; i < nmemb * size; i++)
        *((char *)ptr + i) = 0;

    return ptr;
}
