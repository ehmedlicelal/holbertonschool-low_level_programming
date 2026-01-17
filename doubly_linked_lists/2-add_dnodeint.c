#include "lists.h"
#include <stdlib.h>

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	int i = 0;

	new = malloc(sizeof(dlistint_t) * n);
	if (new == NULL)
		return (NULL);
	new->n = n;
	new-prev = NULL;
	new->next = *head;
	return (new);
}
