#include "main.h"

void print_alphabet(void);

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    print_alphabet();
    return 0;
}

void print_alphabet(void)
{
    char letter = 'a';

    while (letter <= 'z')
    {
        _putchar(letter);
        letter++;
    }

    _putchar('\n');
}

/* Your _putchar implementation goes here */