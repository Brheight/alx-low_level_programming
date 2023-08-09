#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Creates an array of characters and initializes it with a specific char.
 * @size: The size of the array to create.
 * @c: The character to initialize the array with.
 *
 * Return: A pointer to the created array, or NULL if size is 0 or if allocation fails.
 */
char *create_array(unsigned int size, char c)
{
    char *array;

    if (size == 0)
        return NULL;

    array = malloc(sizeof(char) * size);
    if (array == NULL)
        return NULL;

    for (unsigned int i = 0; i < size; i++)
        array[i] = c;

    return array;
}
