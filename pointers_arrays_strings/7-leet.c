#include "main.h"

/**
 * leet - entry point
 * @s: string
 * Return: returns string
 */

char *leet(char *s)
{
	int i = 0, j = 0;
	char leet[8] = {'o', '.', 'e', 'a', '.', '.', '.', 't'}

	while (s[i] != '\0')
	{
		while (j <= 7)
		{
			if (s[i] == leet[j] || s[i] == leet[j] - 32)
				s[i] = j + '0';
			j++;
		}
		i++;
	}
	return (s);
}
