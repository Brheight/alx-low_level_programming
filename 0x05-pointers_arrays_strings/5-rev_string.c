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
 * rev_string - Reverses a string
 * @s: Pointer to the string
 */
void rev_string(char *s)
{
	int len = _strlen(s);
	int start = 0;
	int end = len - 1;

	while (start < end)
	{
		char temp = s[start];

		s[start] = s[end];
		s[end] = temp;
		start++;
		end--;
	}
}
