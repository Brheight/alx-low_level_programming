#include "main.h"

/**
 * _strncat - Concatenates two strings up to n bytes from src
 * @dest: Pointer to the destination string
 * @src: Pointer to the source string
 * @n: Maximum number of bytes to be concatenated from src
 *
 * Return: Pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
    int dest_len = 0;
    int i = 0;

    /* Find the length of the destination string */
    while (dest[dest_len] != '\0')
    {
        dest_len++;
    }

    /* Append characters from src to dest up to n bytes */
    while (src[i] != '\0' && i < n)
    {
        dest[dest_len + i] = src[i];
        i++;
    }

    /* Add null terminator to the end of dest */
    dest[dest_len + i] = '\0';

    return dest;
}
