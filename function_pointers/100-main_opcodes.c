#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 if successful
 */

int main(int argc, char **argv)
{
	int bytes, i;
	char *append;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (argc < 0)
	{
		printf("Error\n");
		exit(2);
	}

	append = (char *)&main;
	bytes = atoi(argv[1]);
	
	for (i = 0; i < bytes; i++)
		printf("%02hhx ", append[i]);
	printf("\n");
	return (0);
}
