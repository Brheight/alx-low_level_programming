#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int fib1 = 1;
    int fib2 = 2;
    int count = 0;
    char tots[1000];
    sprintf(tots, "%d, %d", fib1, fib2);

    while (count < 96) {
        int newfib = fib2 + fib1;
        count++;
        sprintf(tots + strlen(tots), ", %d", newfib);
        fib1 = fib2;
        fib2 = newfib;
    }

    printf("%s\n", tots);

    return 0;
}
