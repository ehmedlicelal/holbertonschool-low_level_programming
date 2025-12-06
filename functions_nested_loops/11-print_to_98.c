#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints to 98
 * Return: emptu output
 * @n: parameter
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
			printf("%d", 98);
		}
		_putchar('\n');
	}
	else if (n > 98)
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
			printf("%d", 98);
		}
		_putchar('\n');
	}
	else
	{
		printf("%d", 98);
	 	_putchar('\n');
	}
}
