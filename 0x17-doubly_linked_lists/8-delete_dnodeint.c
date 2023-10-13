#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node at a given index
 * @head: Pointer to a pointer to the head of the list
 * @index: The index of the node to delete
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *current = *head;

    if (!head || !*head)
        return -1;

    if (index == 0)
    {
        *head = current->next;
        if (current->next)
            current->next->prev = NULL;
        free(current);
        return 1;
    }

    while (index > 0)
    {
        if (!current)
            return -1;
        current = current->next;
        index--;
    }

    if (current->prev)
        current->prev->next = current->next;
    if (current->next)
        current->next->prev = current->prev;

    free(current);
    return 1;
}
