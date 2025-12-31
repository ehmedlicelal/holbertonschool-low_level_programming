#include "dog.h"
#include <stdlib.h>
#include<stdio.h>

/**
 * print_dog - prints a struct dog
 * @d: pointer to struct dog
 */

void print_dog(struct dog *d)
{
	char null_element[] = "(nil)";

	if (d != NULL)
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("Name: %s\n", null_element);
		if (d->age != NULL)
			printf("Age: %f\n", d->age);
		else
			printf("Age: %s\n", null_element);
		if (d->owner != NULL)
			printf("Owner: %s\n", d->owner);
   		else
   			printf("Owner: %s\n", null_element);
	}
}
