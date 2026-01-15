#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - prints list elements and count of them
 * @h: list
 * Return: returns count of elements
 */

size_t print_list(const list_t *h)
{
	size_t count;

	if (h == NULL)
		return (0);
	count = 1;
	printf("[%d] %s", h->len, h->str);
	if (h->next != NULL)
		count += print_list(h->next);
	return (count);
}
