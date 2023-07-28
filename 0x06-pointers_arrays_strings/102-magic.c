#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int a[] = {0, 1, 2, 3, 4, 98, 6, 7, 8, 9};
	int *p;

	p = &a[2];
	*(p + 5) = 98;
	print_array(a, 10);
	return (0);
}

/**
 * print_array - Prints an array of integers
 * @a: The array to print
 * @n: Number of elements in the array
 *
 * Return: Nothing (void)
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (i != 0)
		{
			_putchar(',');
			_putchar(' ');
		}
		_putchar(a[i] + '0');
		i++;
	}
	_putchar('\n');
}
