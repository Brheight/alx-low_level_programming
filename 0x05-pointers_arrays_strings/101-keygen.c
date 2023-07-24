#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point for the keygen program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char password[12];
    int i, sum, diff;

    srand(time(0));

    for (i = 0, sum = 0; sum < 2772 - 122; i++)
    {
        password[i] = rand() % 10 + 48;
        sum += password[i];
    }

    diff = 2772 - sum;
    password[i] = diff;
    password[i + 1] = '\0';

    printf("%s\n", password);

    return 0;
}
