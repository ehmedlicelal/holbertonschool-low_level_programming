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

	if (argc == 1)
		puts("0\n");
	for (i = 1; i < argc; i++)
	{
		j = atoi(argv[i]);
		if (isdigit(j))
		{
			count += j;
		}
		else
		{
			puts("Error\n");
			return (1);
		}
	}
	printf("%d\n", count);
	return (0);
}
