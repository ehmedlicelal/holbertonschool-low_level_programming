#include "dog.h"
#include <stdlib.h>

void print_dog(struct dog *d)
{
	char null_element[] = "(nil)";

	if (d != NULL)
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("Name: %s\n", null_element);
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("Name: %s\n", null_element);
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
   		else
   			printf("Name: %s\n", null_element);
	}
}
