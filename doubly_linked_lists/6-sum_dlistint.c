#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data.
 * @head: pointer to the head of the linked list
 * Return: the sum of all the data (n) of a dlistint_t linked list.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
