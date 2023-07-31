#include "main.h"

/**
 * _strstr - Locates the first occurrence of the substring 'needle' in 'haystack'.
 * @haystack: The string to search in.
 * @needle: The substring to search for.
 *
 * Return: A pointer to the beginning of the located substring,
 *         or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
    while (*haystack)
    {
        char *h = haystack;
        char *n = needle;

        while (*n && *h == *n)
        {
            h++;
            n++;
        }

        if (*n == '\0')
            return haystack; // Found the substring

        haystack++;
    }

    return NULL; // Substring not found
}
