#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

size_t print_dlistint(const dlistint_t *h)
{
	if (h == NULL)
		return (0);
	while (h->next != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
