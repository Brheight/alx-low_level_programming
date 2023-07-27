#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers
 * @a: Pointer to the array
 * @n: Number of elements in the array
 *
 * Return: Nothing (void)
 */
void reverse_array(int *a, int n)
{
    int temp;
    int i;
    int *start = a;
    int *end = a + n - 1;

    for (i = 0; i < n / 2; i++)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}
