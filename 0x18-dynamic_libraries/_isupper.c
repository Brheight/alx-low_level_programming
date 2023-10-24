#include "main.h"

/**
 * _isupper - Check if a character is an uppercase letter.
 * @c: The character to check.
 *
 * Return: 1 if uppercase, 0 otherwise.
 */
int _isupper(int c)
{
    if (c >= 'A' && c <= 'Z')
        return 1;  /* It's uppercase */
    else
        return 0;  /* It's not uppercase */
}
