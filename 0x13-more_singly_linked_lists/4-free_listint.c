#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - define function
 * @head: describe argument
 */

void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	freelistint_t(head->next);
	free(head);
}

