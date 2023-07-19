#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	unsigned long fib1 = 1, fib2 = 2, fib;

	printf("%lu, %lu", fib1, fib2);

	for (i = 3; i <= 50; i++)
	{
		fib = fib1 + fib2;
		printf(", %lu", fib);
		fib1 = fib2;
		fib2 = fib;
	}

	printf("\n");

	return 0;
}
