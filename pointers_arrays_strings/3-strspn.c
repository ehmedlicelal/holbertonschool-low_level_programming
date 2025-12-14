#include "main.h"

/**
 * _strspn - returns if s has accept
 * @s: string
 * @accept: initial segment of s
 * Return: result
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int result;
	int i = 0, j;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				result++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (result);
		}
		i++;
	}
	return (result);
}
