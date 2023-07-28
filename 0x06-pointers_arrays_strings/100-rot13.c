#include "main.h"

/**
 * rot13 - Encodes a string using ROT13
 * @str: Pointer to the input string
 *
 * Return: Pointer to the resulting string
 */
char *rot13(char *str)
{
    char *ptr = str;
    char *rot13_chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    char *rot13_codes = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
    int i, j;

    for (i = 0; str[i] != '\0'; i++)
    {
        for (j = 0; rot13_chars[j] != '\0'; j++)
        {
            if (str[i] == rot13_chars[j])
            {
                str[i] = rot13_codes[j];
                break;
            }
        }
    }

    return ptr;
}
