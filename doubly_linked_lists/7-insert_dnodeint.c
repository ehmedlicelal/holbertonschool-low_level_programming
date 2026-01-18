#include "lists.h"
#include <stlib.h>

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp, *new;
	unsigned int counter;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	
	counter = 0;
	tmp = *head;
	while (tmp)
	{
		if (counter == idx)
		{
			new->prev = temp->prev;
			new->next = temp;
			temp->prev = next;
		}
		tmp = tmp->next;
	}
	return (NULL);
}
