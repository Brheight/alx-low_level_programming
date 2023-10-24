#include "main.h"

/**
 * _isalpha - Check if a character is an alphabetic character.
 * @c: The character to check.
 *
 * Return: 1 if alphabetic, 0 otherwise.
 */
int _isalpha(int c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return 1;  /* It's alphabetic */
    else
        return 0;  /* It's not alphabetic */
}
