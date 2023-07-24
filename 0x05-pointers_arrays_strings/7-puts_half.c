#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: Pointer to the string
 *
 * Return: The length of the string (number of characters)
 */
int _strlen(char *s)
{
    int length = 0;

    while (*s != '\0')
    {
        length++;
        s++;
    }

    return length;
}

/**
 * puts_half - Prints half of a string followed by a new line
 * @str: Pointer to the string
 */
void puts_half(char *str)
{
    int len = _strlen(str);
    int start;

    if (len % 2 == 0)
    {
        start = len / 2;
    }
    else
    {
        start = (len - 1) / 2;
    }

    while (str[start] != '\0')
    {
        _putchar(str[start]);
        start++;
    }
    _putchar('\n');
}
