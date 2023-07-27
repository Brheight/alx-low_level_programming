#include "main.h"

/**
 * infinite_add - Adds two numbers stored as strings
 * @n1: The first number as a string
 * @n2: The second number as a string
 * @r: The buffer to store the result
 * @size_r: The size of the buffer
 *
 * Return: Pointer to the result string (r) or 0 if the result cannot be stored
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, len1, len2, len_r, sum, carry;

	/* Calculate lengths of n1, n2, and r */
	for (len1 = 0; n1[len1]; len1++)
		;
	for (len2 = 0; n2[len2]; len2++)
		;
	len_r = size_r - 1; /* Reserve one character for the null terminator */

	/* Check if the result can be stored in r */
	if (len1 > len_r || len2 > len_r)
		return (0);

	/* Initialize variables */
	carry = 0;
	i = len1 - 1;
	j = len2 - 1;
	k = 0;

	/* Perform digit-wise addition and store the result in r */
	while (i >= 0 || j >= 0 || carry)
	{
		sum = carry;

		if (i >= 0)
			sum += n1[i--] - '0';
		if (j >= 0)
			sum += n2[j--] - '0';

		carry = sum / 10;
		r[k++] = (sum % 10) + '0';
	}

	/* Reverse the result string */
	for (i = 0, j = k - 1; i < j; i++, j--)
	{
		char temp = r[i];
		r[i] = r[j];
		r[j] = temp;
	}

	/* Null-terminate the result string */
	r[k] = '\0';

	return (r);
}
