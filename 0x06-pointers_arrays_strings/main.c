#include <stdio.h>
#include "main.h"

/**
 * main - check the _strcat function
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[50] = "Hello ";
    char s2[] = "World!";

    printf("Before concatenation:\n");
    printf("s1: %s\n", s1);
    printf("s2: %s\n", s2);

    _strcat(s1, s2);

    printf("\nAfter concatenation:\n");
    printf("s1: %s\n", s1);

    return (0);
}
