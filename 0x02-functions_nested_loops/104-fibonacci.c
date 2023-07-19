#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int count, maxCount;
    unsigned long long fib1 = 1, fib2 = 2, nextFib;

    maxCount = 96;

    printf("%llu, %llu", fib1, fib2);

    for (count = 3; count <= maxCount; count++)
    {
        nextFib = fib1 + fib2;
        printf(", %llu", nextFib);

        fib1 = fib2;
        fib2 = nextFib;
    }

    printf("\n");

    return 0;
}
