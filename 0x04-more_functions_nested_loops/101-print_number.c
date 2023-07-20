#include "main.h"

/**
 * print_number - Prints an integer using _putchar
 * @n: The integer to be printed
 */
void print_number(int n)
{
    if (n == 0)
    {
        _putchar('0');
        return;
    }
    else if (n < 0)
    {
        _putchar('-');
        n = -n;
    }

    int divisor = 1;
    int temp = n;

    while (temp > 9)
    {
        temp /= 10;
        divisor *= 10;
    }

    while (divisor >= 1)
    {
        _putchar((n / divisor) + '0');
        n %= divisor;
        divisor /= 10;
    }
}
