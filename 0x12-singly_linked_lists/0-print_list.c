#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - prints all elements of a list_t list
 * @h: singly linked list to print
 * Return: number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	size_t i;
	const list_t *j;

	i = 0;
	j = h;
	while (j != NULL)
	{
		printf("[%d] %s\n", j->len, j->str);
		j = j->next;
		i++;
	}
	return (i);
}
