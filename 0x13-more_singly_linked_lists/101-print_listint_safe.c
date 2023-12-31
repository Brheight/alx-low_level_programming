#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t
 * @head: Pointer to the head of the linked list
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current = head;
	const listint_t *runner;

	while (current)
	{
		runner = head;
		printf("[%p] %d\n", (void *)current, current->n);
		count++;
		while (runner != current)
		{
			if (runner->next == current)
			{
				printf("-> [%p] %d\n", (void *)current, current->n);
				return (count);
			}
			runner = runner->next;
		}
		current = current->next;
	}
	return (count);
}
