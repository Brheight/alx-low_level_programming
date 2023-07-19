#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int i, num1, num2, next;

    num1 = 1;
    num2 = 2;

    printf("%d, %d", num1, num2);

    for (i = 3; i <= 50; i++)
    {
        next = num1 + num2;
        printf(", %d", next);
        num1 = num2;
        num2 = next;
    }

    printf("\n");

    return 0;
}
