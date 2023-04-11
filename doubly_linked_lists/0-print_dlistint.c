#include "lists.h"
/**
 * print_dlistint - prints all the elementes of a dlistint list
 * @h: a pointer to the head
 * Return: The number of nodes in the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
