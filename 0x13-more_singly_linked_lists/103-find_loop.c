#include "lists.h"
#include <stdlib.h>

/**
 * find_listint_loop - find the loop in a linked list
 * @head: head of linked list
 * Description: Not allowed to use malloc, free or arrays.
 * Can only declare a max of 2 variables.
 * Return: Address of node where loop starts, or NULL if no loop found.
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *current, *hold;

	if (head == NULL)
		return (NULL);
	current = hold = head;
	do
	{
		if (current->next)
			current = current->next;
		else
			return (NULL);

		if (hold->next->next)
			hold = hold->next->next;
		else
			return (NULL);
	} while (hold != current);
	current = head;
	while (hold != current)
	{
		hold = hold->next;
		current = current->next;
	}
	return (current);
}
