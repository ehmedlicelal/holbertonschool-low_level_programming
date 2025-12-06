#include "main.h"

/**
 * print_triangle - print triangle with #
 * @size: parameter
 */

void print_triangle(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
		for (j = size - i; j > 0; j--)
			_putchar(' ');
		if (i <= size - 1)
		{
			_putchar('#');
			_putchar('\n');
		}
	}
	_putchar('\n');
}
