#include "main.h"

/**
 * _strpbrk - Locates the first occurrence of any character in 'accept' in 's'.
 * @s: The string to search.
 * @accept: The string containing characters to search for.
 *
 * Return: A pointer to the byte in 's' that matches one of the bytes in 'accept',
 *         or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
    while (*s)
    {
        char *a = accept;
        while (*a)
        {
            if (*s == *a)
                return s;
            a++;
        }
        s++;
    }
    return NULL;
}
