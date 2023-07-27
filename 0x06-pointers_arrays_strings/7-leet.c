#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: Pointer to the string.
 *
 * Return: Pointer to the resulting string.
 */
char *leet(char *str)
{
    char *ptr = str;
    char leet_chars[] = "aAeEoOtTlL";
    char leet_nums[] = "4433007711";
    int i;

    while (*ptr != '\0')
    {
        for (i = 0; leet_chars[i] != '\0'; i++)
        {
            if (*ptr == leet_chars[i])
            {
                *ptr = leet_nums[i]; // Replace the character with the corresponding leet number
                break;
            }
        }
        ptr++;
    }

    return str;
}
