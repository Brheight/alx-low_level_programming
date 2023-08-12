#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("Error\n");
        return 98;
    }

    if (!is_positive_number(argv[1]) || !is_positive_number(argv[2]))
    {
        printf("Error\n");
        return 98;
    }

    char *num1 = argv[1];
    char *num2 = argv[2];

    int len1 = _strlen(num1);
    int len2 = _strlen(num2);
    int len_result = len1 + len2;
    int *result = _calloc(len_result, sizeof(int));

    if (result == NULL)
    {
        printf("Error\n");
        return 98;
    }

    perform_multiplication(num1, num2, len1, len2, result);

    int start = 0;
    while (start < len_result && result[start] == 0)
        start++;

    if (start == len_result)
        _putchar('0');
    else
    {
        for (; start < len_result; start++)
            _putchar(result[start] + '0');
    }

    _putchar('\n');
    free(result);

    return 0;
}

int is_positive_number(char *str)
{
    while (*str)
    {
        if (*str < '0' || *str > '9')
            return 0;
        str++;
    }
    return 1;
}

int _strlen(char *str)
{
    int len = 0;
    while (str[len])
        len++;
    return len;
}

void *_calloc(unsigned int nmemb, unsigned int size)
{
    if (nmemb == 0 || size == 0)
        return NULL;

    void *ptr = malloc(nmemb * size);

    if (ptr == NULL)
        return NULL;

    unsigned char *byte_ptr = ptr;
    for (unsigned int i = 0; i < nmemb * size; i++)
        byte_ptr[i] = 0;

    return ptr;
}

void perform_multiplication(char *num1, char *num2, int len1, int len2, int *result)
{
    for (int i = len1 - 1; i >= 0; i--)
    {
        int carry = 0;
        for (int j = len2 - 1; j >= 0; j--)
        {
            int product = (num1[i] - '0') * (num2[j] - '0') + result[i + j + 1] + carry;
            carry = product / 10;
            result[i + j + 1] = product % 10;
        }
        result[i] += carry;
    }
}

void _putchar(char c)
{
    write(1, &c, 1);
}
