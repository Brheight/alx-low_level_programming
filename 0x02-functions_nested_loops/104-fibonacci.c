#include <stdio.h>
#include <gmp.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int count, maxCount;
    mpz_t fib1, fib2, nextFib;

    maxCount = 98;

    mpz_init_set_ui(fib1, 1);
    mpz_init_set_ui(fib2, 2);

    printf("%s, %s", mpz_get_str(NULL, 10, fib1), mpz_get_str(NULL, 10, fib2));

    for (count = 3; count <= maxCount; count++)
    {
        mpz_init(nextFib);
        mpz_add(nextFib, fib1, fib2);
        printf(", %s", mpz_get_str(NULL, 10, nextFib));

        mpz_set(fib1, fib2);
        mpz_set(fib2, nextFib);

        mpz_clear(nextFib);
    }

    printf("\n");

    mpz_clear(fib1);
    mpz_clear(fib2);

    return 0;
}
