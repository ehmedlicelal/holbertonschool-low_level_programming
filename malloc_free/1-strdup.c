#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicate string
 * @str: string
 *
 * Return: duplicated arr from str if successful
 */

char *_strdup(char *str)
{
	char *arr;
	unsigned int i = 0, len = 0;

	if (str == NULL)
		return (NULL);
	while (str[len] != '\0')
		len++;
	len++;
	arr = malloc(len * sizeof(*str));
	if (arr == NULL)
		return (NULL);
	while (i <= len)
	{
		arr[i] = str[i];
		i++;
	}
	return (arr);
}
