#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * free_list - frees list
 * @head: head of the list
 */

void free_list(list_t *head)
{
	int i = 0;

	while (head != NULL)
	{
		free(head);
		head = head->next;
	}
	free(head);
}
