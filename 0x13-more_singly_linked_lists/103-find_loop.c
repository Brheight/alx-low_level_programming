#include "lists.h"

/**
 * find_listint_loop - Finds the starting node.
 * @head: Pointer to the head node of the list.
 * Return: Address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise, *hare;

	if (head == NULL || head->next == NULL)
		return (NULL);
	tortoise = head->next;
	hare = head->next->next;
	while (hare && hare->next)
	{
		if (tortoise == hare)
		{
			tortoise = head;
			while (tortoise != hare)
			{
				tortoise = tortoise->next;
				hare = hare->next;
			}
			return (tortoise);
		}
		tortoise = tortoise->next;
		hare = hare->next->next;
	}
	return (NULL);
}
