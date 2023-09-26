#include "lists.h"
#include <stdlib.h>

/**
 * print_listint_safe - Print a `listint_t` linked list including mem addresses
 * @head: head of linked list
 * Description: Go through the list only once.
 * Return: number of nodes in list. If fails, exit with status 98.
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current, *hold;
	size_t i;

	current = head;
	if (current == NULL)
		exit(98);
	i = 0;
	while (current != NULL)
	{
		hold = current;
		current = current->next;
		i++;
		printf("[%p] %d\n", (void *)hold, hold->n);
		if (hold < current)
		{
			printf("-> [%p] %d\n", (void *)hold, hold->n);
			break;
		}
	}
	return (i);
}
