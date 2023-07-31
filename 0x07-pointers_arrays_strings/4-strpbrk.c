#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: Pointer to the string to search.
 * @accept: Pointer to the characters to accept.
 *
 * Return: Pointer to the byte in 's' that matches one of the bytes in 'accept',
 *         or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
    while (*s != '\0')
    {
        char *ptr = accept;
        while (*ptr != '\0')
        {
            if (*s == *ptr)
            {
                return s;
            }
            ptr++;
        }
        s++;
    }

    return NULL;
}
