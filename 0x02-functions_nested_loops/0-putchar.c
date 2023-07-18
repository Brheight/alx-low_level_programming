#include "main.h"

/**
 * main - Entry point
 *
 * Description: Prints _putchar, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char *str = "_putchar\n";
    int i = 0;

    while (str[i] != '\0')
    {
        _putchar(str[i]);
        i++;
    }

    return 0;
}

/**
 * _putchar - Writes a character to the standard output (stdout)
 *
 * @c: The character to be written
 *
 * Return: On success 1
 * On error, -1 is returned and errno is set appropriately
 */
int _putchar(char c)
{
    /* Your code here */
    return (c == '\n' ? write(1, &c, 1) : write(1, &c, 1));
}
