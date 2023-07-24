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

	return (length);
}

/**
 * print_rev - Prints a string in reverse followed by a new line
 * @s: Pointer to the string
 */
void print_rev(char *s)
{
	int len = _strlen(s);

	int i;
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
