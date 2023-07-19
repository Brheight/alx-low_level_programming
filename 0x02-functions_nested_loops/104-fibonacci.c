#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int count, maxCount;
    unsigned int fib1 = 1, fib2 = 2, nextFib;

    maxCount = 98;

    printf("%u, %u", fib1, fib2);

    for (count = 3; count <= maxCount; count++)
    {
        nextFib = fib1 + fib2;
        printf(", %u", nextFib);

        fib1 = fib2;
        fib2 = nextFib;
    }

    printf("\n");

    return 0;
}
