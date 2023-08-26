#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: A pointer to a pointer to the head of the list.
 * @str: The string to be stored in the new node.
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
    if (str == NULL)
        return (NULL);

    list_t *new_node = malloc(sizeof(list_t));
    if (new_node == NULL)
        return (NULL);

    new_node->str = malloc((strlen(str) + 1) * sizeof(char));
    if (new_node->str == NULL)
    {
        free(new_node);
        return (NULL);
    }

    new_node->len = 0;
    while (str[new_node->len] != '\0')
    {
        new_node->str[new_node->len] = str[new_node->len];
        new_node->len++;
    }
    new_node->str[new_node->len] = '\0';

    new_node->next = NULL;

    if (*head == NULL)
    {
        *head = new_node;
    }
    else
    {
        list_t *current = *head;
        while (current->next != NULL)
            current = current->next;
        current->next = new_node;
    }

    return (new_node);
}
