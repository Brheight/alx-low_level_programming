#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: pointer to the array
 * @size: number of elements in the array
 * @cmp: pointer to the comparison function
 *
 * Return: Index of the first element
 *         -1 if no elements match or size is <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
