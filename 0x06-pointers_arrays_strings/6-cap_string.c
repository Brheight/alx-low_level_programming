#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: Pointer to the string.
 *
 * Return: Pointer to the resulting string.
 */
char *cap_string(char *str)
{
    char *ptr = str;
    char separators[] = " \t\n,;.!?\"(){}";

    while (*ptr != '\0')
    {
        // Check if the current character is a lowercase letter
        if (*ptr >= 'a' && *ptr <= 'z')
        {
            // Check if the previous character is a separator or the start of the string
            if (ptr == str || strchr(separators, *(ptr - 1)) != NULL)
            {
                *ptr = *ptr - ('a' - 'A'); // Convert lowercase to uppercase
            }
        }

        ptr++;
    }

    return str;
}
