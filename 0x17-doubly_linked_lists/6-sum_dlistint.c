#include "lists.h"

/**
 * sum_dlistint - Calculate the sum of all data (n) in a doubly linked list
 * @head: Pointer to the head of the list
 * Return: The sum of all data, or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
