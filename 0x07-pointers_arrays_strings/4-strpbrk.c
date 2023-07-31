#include "main.h"

/**
 * _strpbrk - Searches a string.
 * @s: Pointer to the string.
 * @accept: Pointer.
 *
 * Return: Pointer to the byte.
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *ptr = accept;

		while (*ptr != '\0')
		{
			if (*s == *ptr)
			{
				return (s);
			}
			ptr++;
		}
		s++;
	}
	return (NULL);
}
