#include "main.h"

/**
 * _islower - Check if a character is a lowercase letter.
 * @c: The character to check.
 *
 * Return: 1 if lowercase, 0 otherwise.
 */
int _islower(int c)
{
    if (c >= 'a' && c <= 'z')
        return 1;  /* It's lowercase */
    else
        return 0;  /* It's not lowercase */
}
