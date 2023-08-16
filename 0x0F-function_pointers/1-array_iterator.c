#include "function_pointers.h"

/**
 * array_iterator - applies a given function to each element of an array
 * @array: pointer to the array
 * @size: size of the array
 * @action: pointer to the function to apply
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
    if (array && action)
    {
        for (size_t i = 0; i < size; i++)
        {
            action(array[i]);
        }
    }
}
