#include "main.h"

/**
 * _abs - Calculate the absolute value of an integer.
 * @n: The integer to calculate the absolute value of.
 *
 * Return: The absolute value of n.
 */
int _abs(int n)
{
    if (n < 0)
        return -n;  /* Negative input, return the positive value */
    else
        return n;   /* Non-negative input, return as is */
}
