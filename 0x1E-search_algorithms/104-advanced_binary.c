#include "search_algos.h"

/**
 * print_array - Prints an array
 * @array: The array to print
 * @low: The low index of the array
 * @high: The high index of the array
 */
void print_array(int *array, size_t low, size_t high)
{
    printf("Searching in array: ");
    for (size_t i = low; i <= high; i++)
    {
        printf("%d", array[i]);
        if (i < high)
            printf(", ");
    }
    printf("\n");
}

/**
 * advanced_binary_recursive - Searches for a value in a sorted array using binary search
 * @array: Pointer to the first element of the array to search in
 * @low: The low index of the array
 * @high: The high index of the array
 * @value: The value to search for
 *
 * Return: The index where the value is located, or -1 if not present
 */
int advanced_binary_recursive(int *array, size_t low, size_t high, int value)
{
    if (low > high)
        return -1;

    print_array(array, low, high);

    size_t mid = low + (high - low) / 2;

    if (array[mid] == value)
        return mid;

    if (array[mid] < value)
        return advanced_binary_recursive(array, mid + 1, high, value);

    return advanced_binary_recursive(array, low, mid - 1, value);
}

/**
 * advanced_binary - Searches for a value in a sorted array using binary search
 * @array: Pointer to the first element of the array to search in
 * @size: The number of elements in the array
 * @value: The value to search for
 *
 * Return: The index where the value is located, or -1 if not present
 */
int advanced_binary(int *array, size_t size, int value)
{
    if (array == NULL || size == 0)
        return -1;

    return advanced_binary_recursive(array, 0, size - 1, value);
}
