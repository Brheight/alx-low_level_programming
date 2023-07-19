#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int count, maxCount;
    unsigned long long fibSequence[100]; // Use an array to store the Fibonacci sequence

    maxCount = 93;

    fibSequence[0] = 1;
    fibSequence[1] = 2;

    printf("%llu, %llu", fibSequence[0], fibSequence[1]);

    for (count = 2; count <= maxCount; count++)
    {
        fibSequence[count] = fibSequence[count - 1] + fibSequence[count - 2];
        printf(", %llu", fibSequence[count]);
    }

    printf("\n");

    return 0;
}
