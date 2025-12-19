#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of strings
 * Return: 0 if successful
 */

int main(int argc __attribute__((unused)), char **argv)
{
	int arg1 = atoi(argv[1]);
	int arg2 = atoi(argv[2]);

	if (isdigit(arg1) && isdigit(arg2))
	{
		printf("%d\n", arg1 * arg2);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
