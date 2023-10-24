#include "main.h"

/**
 * _strcmp - Compare two strings.
 * @s1: The first string to compare.
 * @s2: The second string to compare.
 *
 * Return: 0 if strings are equal, negative if s1 < s2, positive if s1 > s2.
 */
int _strcmp(char *s1, char *s2)
{
    while (*s1 == *s2)
    {
        if (*s1 == '\0')
            return 0;  /* Strings are equal */
        s1++;
        s2++;
    }

    return *s1 - *s2;  /* Difference between first differing characters */
}
