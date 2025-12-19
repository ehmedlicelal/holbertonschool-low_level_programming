#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of strings
 * Return: 0 if successful
 */

int main(int argc, char **argv)
{
	int i, j, k,  min = 0;

	if (argc != 1)
	{
		puts("Error");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (arg[i][j] == '-')
				puts('0');
		}
		k = atoi(argv[i]);
		if (k % 25 == 0)
			printf("%d\n", k / 25);
		else if (k % 10 == 0)
			printf("%d\n", k / 10);
		else if (k % 5 == 0)
			printf("%d\n", k / 5);
		else if (k % 2 == 0)
                        printf("%d\n", k / 2);
                else
			printf("%d\n", k);
	}
	return (0)
}
