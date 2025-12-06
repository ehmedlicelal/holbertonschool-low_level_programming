#include "main.h"

/**
 * print_diagonal - prints diagonal in terminal
 * @n: parameter
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\');
		_putchar('\n');
	}
	_putchar('\n');
}
