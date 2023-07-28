#include "main.h"

/**
 * is_separator - Checks if a character is a word separator
 * @c: The character to check
 *
 * Return: 1 if the character is a separator, 0 otherwise
 */
int is_separator(char c)
{
	char separators[] = " \t\n,;.!?\"(){}";
	int i;

	for (i = 0; separators[i] != '\0'; i++)
	{
		if (c == separators[i])
		{
			return (1);
		}
	}

	return (0);
}

/**
 * cap_string - Capitalizes all words of a string
 * @str: Pointer to the input string
 *
 * Return: Pointer to the resulting string
 */
char *cap_string(char *str)
{
	char *ptr = str;
	int capitalize = 1;

	while (*ptr != '\0')
	{
		if (capitalize && (*ptr >= 'a' && *ptr <= 'z'))
		{
			*ptr -= ('a' - 'A');
			capitalize = 0;
		}
		else if (is_separator(*ptr))
		{
			capitalize = 1;
		}

		ptr++;
	}

	return (str);
}
