#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - frees list
 * @head: pointer to the head of the list
 */

void free_dlistint(dlistint_t *head)
{
	while (head)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
