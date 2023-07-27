#include "main.h"

/**
 * _strncpy - Copies a string, using at most n bytes from src.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * @n: Maximum number of characters to be copied from src.
 *
 * Return: Pointer to the resulting string 'dest'.
 */
char *_strncpy(char *dest, char *src, int n)
{
    int i;

    for (i = 0; i < n && src[i] != '\0'; i++)
    {
        dest[i] = src[i];
    }

    // If the source string is shorter than n, fill the remaining characters with null terminators
    while (i < n)
    {
        dest[i] = '\0';
        i++;
    }

    return dest;
}
