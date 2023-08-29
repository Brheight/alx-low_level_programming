#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list safely
 * @h: A pointer to a pointer to the head of the list
 *
 * Return: The size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *temp;
	size_t count = 0;

	if (h == NULL || *h == NULL)
		return (0);
	current = *h;
	while (current)
	{
		temp = current;
		current = current->next;
		temp->next = NULL;
		free(temp);
		count++;
		if (current == *h)
		{
			*h = NULL;
			break;
		}
	}
	*h = NULL;
	return (count);
}
