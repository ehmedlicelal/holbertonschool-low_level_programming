#include "lists.h"
#include <stdlib.h>

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp, *new;
	unsigned int counter;

	if (*h == NULL && idx != 0)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n, new->prev = new->next = NULL;
	
	if (idx == 0)
	{
		if (*h)
		{
			new->next = *h;
			(*h)->prev = new;
		}
		*h = new;
		return (new);
	}
	counter = 0;
	tmp = *h;
	while (tmp->next)
	{
		if (counter == idx - 1)
		{
			new->next = tmp->next;
			new->prev = tmp;
			tmp->next->prev = new;
			tmp->next = new;
			return (new);
		}

		tmp = tmp->next;
		counter++;
	}
	
	if (tmp->next == NULL && counter == idx)
	{
		tmp->next = new, new->prev = tmp;
		return (new);
	}
	free(new);
	return (NULL);
}
