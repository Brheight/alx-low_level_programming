#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	unsigned long long fib1 = 1, fib2 = 2, fib;

	printf("%llu, %llu", fib1, fib2);

	for (i = 3; i <= 98; i++)
	{
		fib = fib1 + fib2;
		printf(", %llu", fib);

		fib1 = fib2;
		fib2 = fib;
	}

	printf("\n");

	return 0;
}
