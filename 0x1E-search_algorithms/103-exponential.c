#include "search_algos.h"

/**
 * exponential_search - Searches for a value in a sorted array using Exponential search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: The first index where the value is located, or -1 if not present
 */
int exponential_search(int *array, size_t size, int value)
{
    size_t bound = 1, low, high, mid;

    if (array == NULL)
        return -1;

    while (bound < size && array[bound] < value)
    {
        printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
        bound *= 2;
    }

    low = bound / 2;
    high = (bound < size - 1) ? bound : size - 1;

    printf("Value found between indexes [%lu] and [%lu]\n", low, high);

    while (low <= high)
    {
        printf("Searching in array: ");
        for (mid = low; mid < high; mid++)
            printf("%d, ", array[mid]);
        printf("%d\n", array[mid]);

        mid = low + (high - low) / 2;

        if (array[mid] == value)
            return mid;

        if (array[mid] < value)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;
}
