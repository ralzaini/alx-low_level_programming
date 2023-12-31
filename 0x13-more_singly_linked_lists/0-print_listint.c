#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all elements of a list_t list
 * @h: singly linked list print
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
