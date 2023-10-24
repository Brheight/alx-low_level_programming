#include "main.h"

/**
 * _isdigit - Check if a character is a digit (0-9).
 * @c: The character to check.
 *
 * Return: 1 if a digit, 0 otherwise.
 */
int _isdigit(int c)
{
    if (c >= '0' && c <= '9')
        return 1;  /* It's a digit */
    else
        return 0;  /* It's not a digit */
}
