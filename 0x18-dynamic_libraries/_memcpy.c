#include "main.h"

/**
 * _memcpy - Copy memory area from src to dest.
 * @dest: The destination memory area.
 * @src: The source memory area.
 * @n: Number of bytes to copy.
 *
 * Return: A pointer to the destination memory area (dest).
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;

    for (i = 0; i < n; i++)
    {
        dest[i] = src[i];
    }

    return dest;
}
