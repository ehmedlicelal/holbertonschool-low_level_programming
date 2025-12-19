#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of strings
 * Return: 0 if successful
 */

int main(int argc, char **argv)
{
	int i, j, count = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (arg[i][j] < '0' || arg[i][j] > '9')
			{
				puts("Error\n");
				return (1);
			}
		}
		count += arg[i];
	}
	printf("%d\n", count);
	return (0);
}
