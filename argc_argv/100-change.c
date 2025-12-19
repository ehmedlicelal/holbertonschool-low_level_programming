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
	int i, j, k, add, change = 0;

	if (argc != 2)
	{
		puts("Error");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] == '-')
				puts("0");
		}
		k = atoi(argv[i]);
		if (k >= 25)
		{
			add = k / 25;
			k = k - add * k;
			change += add;
		}
		else if (k >= 10)
		{
			add = k / 10;
			k = k - add * k;
			change += add;
		}
		else if(k >= 5)
		{
			add = k / 5;
			k = k - add * k;
			change += add;
		}
		else if (k >= 2)
		{
			add = k / 2;
			k = k - add * k;
			change += add;
		}
		else if(k >= 1)
		{
			add = k / 1;
			k = k - add * k;
			change += add;
		}
	}
	printf("%d\n", change);
	return (0);
}
