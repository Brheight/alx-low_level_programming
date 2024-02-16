#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array using Jump search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: The first index where the value is located, or -1 if not present
 */
int jump_search(int *array, size_t size, int value)
{
    size_t jump, i, min;

    if (array == NULL)
        return -1;

    jump = sqrt(size);
    i = 0;

    while (i < size && array[i] < value)
    {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        i += jump;
    }

    min = i - jump;

    printf("Value found between indexes [%lu] and [%lu]\n", min, i);

    for (; min < size && min <= i; min++)
    {
        printf("Value checked array[%lu] = [%d]\n", min, array[min]);
        if (array[min] == value)
            return min;
    }

    return -1;
}
