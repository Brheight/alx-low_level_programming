#include "main.h"

/**
 * _strncat - Concatenate two strings, up to n bytes.
 * @dest: The destination string.
 * @src: The source string to append.
 * @n: Maximum number of bytes to append.
 *
 * Return: A pointer to the resulting string (dest).
 */
char *_strncat(char *dest, char *src, int n)
{
    int dest_len = _strlen(dest);
    int i;

    for (i = 0; src[i] != '\0' && i < n; i++)
    {
        dest[dest_len + i] = src[i];
    }

    dest[dest_len + i] = '\0';

    return dest;
}
