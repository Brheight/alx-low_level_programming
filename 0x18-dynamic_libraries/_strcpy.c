#include "main.h"

/**
 * _strcpy - Copy a string to another buffer.
 * @dest: The destination buffer.
 * @src: The source string to copy.
 *
 * Return: A pointer to the destination buffer (dest).
 */
char *_strcpy(char *dest, char *src)
{
    char *dest_start = dest;

    while (*src)
    {
        *dest = *src;
        dest++;
        src++;
    }

    *dest = '\0';

    return dest_start;
}
