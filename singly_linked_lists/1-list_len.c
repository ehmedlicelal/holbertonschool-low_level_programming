#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

size_t list_len(const list_t *h)
{
	size_t count = 1;

	if (h == NULL)
		return (0);
	while (h->next != NULL)
		count++;
}
