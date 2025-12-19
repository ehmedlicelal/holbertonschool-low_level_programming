#include <stdio.h>
#include <ctype.h>

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of strings
 * Return: 0 if successful
 */

int main(int argc, char **argv)
{
	if (argv[1].isdigit() && argv[2].isdigit())
	{
		printf("%d\n", argv[1] * argv[2]);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
