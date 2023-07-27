#include "main.h"

/**
 * _strncat - Concatenates two strings, using at most n bytes from src.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * @n: Maximum number of characters to be concatenated from src.
 *
 * Return: Pointer to the resulting string 'dest'.
 */
char *_strncat(char *dest, char *src, int n)
{
    char *dest_end = dest;

    // Find the end of the destination string
    while (*dest_end != '\0')
        dest_end++;

    // Concatenate characters from src to dest, up to n characters or until src's null terminator
    while (*src != '\0' && n > 0)
    {
        *dest_end = *src;
        dest_end++;
        src++;
        n--;
    }

    // Add the null terminator to the concatenated string
    *dest_end = '\0';

    return dest;
}
