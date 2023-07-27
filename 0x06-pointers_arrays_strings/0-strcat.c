#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 *
 * Return: Pointer to the resulting string 'dest'.
 */
char *_strcat(char *dest, char *src)
{
    char *dest_end = dest;

    // Find the end of the destination string
    while (*dest_end != '\0')
        dest_end++;

    // Concatenate the source string to the destination string
    while (*src != '\0')
    {
        *dest_end = *src;
        dest_end++;
        src++;
    }

    // Add the terminating null byte
    *dest_end = '\0';

    return dest;
}
