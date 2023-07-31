// 3-strspn.c
#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: Pointer to the string to search.
 * @accept: Pointer to the characters to accept.
 *
 * Return: The number of bytes in the initial segment of 's'
 *         which consist only of bytes from 'accept'.
 */
unsigned int _strspn(char *s, char *accept)
{
    unsigned int count = 0;
    int found;

    while (*s != '\0')
    {
        found = 0;
        while (*accept != '\0')
        {
            if (*s == *accept)
            {
                found = 1;
                break;
            }
            accept++;
        }

        if (!found)
        {
            break;
        }

        count++;
        s++;
        accept = accept - count + 1; // Reset 'accept' to the beginning.
    }

    return count;
}
