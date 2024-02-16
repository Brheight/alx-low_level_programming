#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted list using Jump search algorithm
 * @list: Pointer to the head of the list to search in
 * @size: The number of nodes in the list
 * @value: The value to search for
 *
 * Return: A pointer to the first node where value is located, or NULL if not present
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
    size_t jump, prev, curr;

    if (list == NULL)
        return NULL;

    jump = sqrt(size);
    curr = 0;

    while (curr < size && list[curr].n < value)
    {
        printf("Value checked at index [%lu] = [%d]\n", curr, list[curr].n);
        prev = curr;
        curr += jump;
    }

    printf("Value found between indexes [%lu] and [%lu]\n", prev, curr);

    for (; prev < size && prev <= curr; prev++)
    {
        printf("Value checked at index [%lu] = [%d]\n", prev, list[prev].n);
        if (list[prev].n == value)
            return &list[prev];
    }

    return NULL;
}
