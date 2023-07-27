#include "main.h"

/**
 * string_toupper - Converts all lowercase letters to uppercase in a string
 * @str: Pointer to the input string
 *
 * Return: Pointer to the resulting string
 */
char *string_toupper(char *str)
{
    char *ptr = str;

    while (*ptr != '\0')
    {
        if (*ptr >= 'a' && *ptr <= 'z')
        {
            *ptr = *ptr - ('a' - 'A');
        }
        ptr++;
    }

    return str;
}
