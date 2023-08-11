#include <stdio.h>
#include <stdlib.h>

/**
 * _isdigit - Checks if a character is a digit.
 * @c: The character to check.
 *
 * Return: 1 if c is a digit, 0 otherwise.
 */
int _isdigit(char c)
{
    return (c >= '0' && c <= '9');
}

/**
 * _strlen - Computes the length of a string.
 * @s: The input string.
 *
 * Return: The length of the string.
 */
unsigned int _strlen(char *s)
{
    unsigned int len = 0;
    while (s[len] != '\0')
        len++;
    return len;
}

/**
 * _putchar - Writes a character to the standard output.
 * @c: The character to write.
 */
void _putchar(char c)
{
    putchar(c);
}

/**
 * print_error - Prints an error message and exits with status 98.
 */
void print_error(void)
{
    printf("Error\n");
    exit(98);
}

/**
 * main - Multiplies two positive numbers.
 * @argc: The number of arguments.
 * @argv: The array of arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
    if (argc != 3)
        print_error();

    char *num1 = argv[1];
    char *num2 = argv[2];

    unsigned int len1 = _strlen(num1);
    unsigned int len2 = _strlen(num2);
    unsigned int len_result = len1 + len2;

    int *result = calloc(len_result, sizeof(int));
    if (result == NULL)
        return (1);

    for (int i = len1 - 1; i >= 0; i--)
    {
        if (!_isdigit(num1[i]))
            print_error();
        
        for (int j = len2 - 1; j >= 0; j--)
        {
            if (!_isdigit(num2[j]))
                print_error();

            result[i + j + 1] += (num1[i] - '0') * (num2[j] - '0');
            result[i + j] += result[i + j + 1] / 10;
            result[i + j + 1] %= 10;
        }
    }

    unsigned int start = (result[0] == 0) ? 1 : 0;

    for (unsigned int i = start; i < len_result; i++)
        _putchar(result[i] + '0');
    _putchar('\n');

    free(result);
    return (0);
}
