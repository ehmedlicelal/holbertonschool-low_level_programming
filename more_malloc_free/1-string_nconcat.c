#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of first bytes of s2
 *
 * Return: returns concatenated space
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *arr;
	int len1 = 0, len2 = 0, index = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*s1)
		len1++;
	len1--;
	arr = malloc((len1 + n) * sizeof(char));
	if (arr == NULL)
		return (NULL);
	while (index < len1)
	{
		arr[index] = s1[index];
		index++;
	}

	index = 0;
	while (*s2)
		len2++;
	if (n >= len2)
	{	
		while (*s2)
		{
			arr[len1] = s2[index];
			len1++;
			index++;
		}
	}
	else
	{
		while (index < n || s2[index] != '\0')
		{
			arr[len1] = s2[index];
			index ++;
			len1++;
		}
	}
	return (arr);
}
