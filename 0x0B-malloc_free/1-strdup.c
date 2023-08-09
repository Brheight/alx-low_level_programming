#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 *           containing a copy of the string given as a parameter.
 * @str: The string to be duplicated.
 *
 * Return: A pointer to the duplicated string, or NULL if str is NULL
 *         or if memory allocation fails.
 */
char *_strdup(char *str)
{
    char *duplicate;
    size_t len;

    if (str == NULL)
        return NULL;

    len = strlen(str) + 1;
    duplicate = malloc(len);

    if (duplicate == NULL)
        return NULL;

    strcpy(duplicate, str);
    return duplicate;
}
