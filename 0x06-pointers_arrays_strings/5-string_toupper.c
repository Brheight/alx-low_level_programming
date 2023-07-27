#include "main.h"

/**
 * string_toupper - Converts all lowercase letters of a string to uppercase.
 * @str: Pointer to the string.
 *
 * Return: Pointer to the resulting string.
 */
char *string_toupper(char *str)
{
    char *ptr = str;

    while (*ptr != '\0')
    {
        if (*ptr >= 'a' && *ptr <= 'z')
        {
            *ptr = *ptr - ('a' - 'A'); // Convert lowercase to uppercase
        }
        ptr++;
    }

    return str;
}
