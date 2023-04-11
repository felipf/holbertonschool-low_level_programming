#include "lists.h"
/**
 * get_dnodeint_at_index - Returns the nth node of a doubly linked list.
 * @head: A pointer to the head of the list.
 * @index: The index of the node to return
 * Return: A pointer to the nth node, or NULL if it does not exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int i;

	for (i = 0; current != NULL && i < index; i++)
	current = current->next;

	return ((current != NULL && i == index) ? current : NULL);
}
