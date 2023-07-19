#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	long int num1 = 1, num2 = 2, sum = 0, fib;

	while (num1 <= 4000000)
	{
		if (num1 % 2 == 0)
			sum += num1;

		fib = num1 + num2;
		num1 = num2;
		num2 = fib;
	}

	printf("%ld\n", sum);

	return (0);
}
