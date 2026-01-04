#include "main.h"
#include <stdlib.h>

/**
 * len - length of string
 * @s: string
 * Return: len of string
 */

int len(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * argstostr - concatenates all the args of the program
 * @ac: number of args
 * @av: array of args
 * Return: pointer to new string
 */

char *argstostr(int ac, char **av)
{
	int len_a, i, j;
	char **concated_arr;

	if (ac == 0 || av == NULL)
		return (NULL);
	concated_arr = (char **)malloc(ac * sizeof(char *));
	if (concated_arr != NULL)
	{
		for (i = 0; i < ac; i++)
		{
			len_a = len(av[i + 1]);
			concated_arr[i] = (char *)malloc(len_a * sizeof(char));
			if (concated_arr[i] != NULL)
			{
				for (j = 0; j < len_a; j++)
				{
					concated_arr[i][j] = av[i + 1][j];
				}
			}
			else
			{
				while (i >= 0)
				{
					free(concated_arr[i]);
					i--;
				}
				free(concated_arr);
				return (NULL);
			}
		}
		return (concated_arr);
	}
	else
		return (NULL);
}
