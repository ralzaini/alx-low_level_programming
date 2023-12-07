#include "lists.h"
/**
 * dlistint_len - number of elements in doubly linked list
 * @h: header
 *
 * Return: number of nodes, 0 if empty
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
