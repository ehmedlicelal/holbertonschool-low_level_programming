#include "lists.h"
#include <stdlib.h>

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp, *new;
	unsigned int counter;

	if (*h == NULL && idx > 0)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n, new->prev = new->next = NULL;
	
	counter = 0;
	tmp = *h;
	while (tmp->next)
	{
		if (counter == idx)
		{
			new->prev = tmp->prev;
			new->next = tmp;
			tmp->prev = new;
			return (new);
		}
		tmp = tmp->next;
	}
	
	if (tmp == NULL && counter == idx)
	{
		new->prev = tmp, tmp->next = new->prev;
		return (new);
	}
	free(new);
	return (NULL);
}
