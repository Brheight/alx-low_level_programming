#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Search a string for any of a set of bytes.
 * @s: The string to search.
 * @accept: The set of bytes to search for.
 *
 * Return: A pointer to the first occurrence of any byte in accept, or NULL if none is found.
 */
char *_strpbrk(char *s, char *accept)
{
    while (*s)
    {
        for (int i = 0; accept[i]; i++)
        {
            if (*s == accept[i])
                return s;
	}

        s++;
    }

    return NULL;
}
