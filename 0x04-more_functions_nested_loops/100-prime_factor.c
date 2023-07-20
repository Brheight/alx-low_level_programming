#include "main.h"

/**
 * largest_prime_factor - Finds the largest prime factor of a number
 * @n: The number to find the largest prime factor for
 *
 * Return: The largest prime factor
 */
long largest_prime_factor(long n)
{
    long factor = 2;

    while (n > factor)
    {
        if (n % factor == 0)
            n = n / factor;
        else
            factor++;
    }

    return n;
}
