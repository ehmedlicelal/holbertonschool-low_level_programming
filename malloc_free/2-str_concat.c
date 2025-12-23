#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenating two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer to new string
 */

char *str_concat(char *s1, char *s2)
{
	char *concated_str;
	unsigned int i, len1 = 0, len2 = 0, len3 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
		len1++;
	len3 += len1;
	while (s2[len2] != '\0')
		len2++;
	len2++;
	len3 += len2;
	concated_str = malloc(len3 * sizeof(char));
	if (concated_str == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		concated_str[i] = s1[i];
	for (i = 0; i <= len2; i++)
	{
		concated_str[len1] = s2[i];
		len1++;
	}
	return (concated_str);
}
