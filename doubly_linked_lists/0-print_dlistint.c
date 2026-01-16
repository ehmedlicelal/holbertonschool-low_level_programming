size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *head;

	if (h == NULL)
		return (0);
	while (h->next != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
