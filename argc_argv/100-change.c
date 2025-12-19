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
	int cents, change = 0;

	if (argc != 2)
	{
		puts("Error");
		return (1);
	}

	cents = atoi(argv[1]);
	if (cents < 0)
	{
		puts("0");
		return (0);
	}

	change += cents / 25;
	cents %= 25;

	change += cents / 10;
	cents %= 10;

	change += cents / 5;
	cents %= 5;

	change += cents / 2;
	cents %= 2;

	change += cents;

	printf("%d\n", change);
	return (0);
}
