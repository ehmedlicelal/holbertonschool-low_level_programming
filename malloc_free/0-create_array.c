#include <stdlib.h>
#include "main.h"

/**
 * create_array - create array of chars with initialized c
 * @size: size of array
 * @c: char
 * Return: pointer to arr if successful
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	i = 0;
	if (size != 0)
		arr = malloc(size * sizeof(c));
	else
		return (NULL);
	if (arr == NULL)
		return (NULL);
	while (i < size)
	{
		arr[i] = c;
		i++;
	}
	return (arr);
}
