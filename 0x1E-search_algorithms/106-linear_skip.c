#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a sorted skip list using Linear search algorithm
 * @list: Pointer to the head of the skip list to search in
 * @value: The value to search for
 *
 * Return: A pointer to the first node where value is located, or NULL if not present
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
    skiplist_t *current, *express;

    if (list == NULL)
        return NULL;

    current = list;
    express = list->express;

    while (express != NULL && express->n < value)
    {
        printf("Value checked at index [%lu] = [%d]\n", express->index, express->n);
        current = express;
        express = express->express;
    }

    printf("Value found between indexes [%lu] and [%lu]\n", current->index, express ? express->index : 0);

    while (current != NULL && current->n < value)
    {
        printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
        current = current->next;
    }

    if (current != NULL && current->n == value)
        return current;

    return NULL;
}
