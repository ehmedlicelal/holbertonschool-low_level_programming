#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of strings
 * Return: 0 if successful
 */

int main(int argc __attribute__((unused)), char **argv)
{
	int arg1, arg2;

	if (arg <= 2)
	{
		printf("Error\n");
		return (1);
	}
	arg1 = argv[1];
	arg2 = argv[2];
	printf("%d\n", arg1 * arg2);:
	return (0);
}
