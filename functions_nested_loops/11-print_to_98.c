#include "main.h"

/**
 * print_to_98 - prints to 98
 * Return: 0 if successfull
 * @n: parameter
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		int m;
		for (m = n; m <= 98; m++)
		{
			_putchar(m);
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
	else if (n > 98)
	{
		int m;
		for (m = n; m >= 98; m--;)
		{
			_putchar(m);
			if (m != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
	else
	{
		_putchar(n);
	 	_putchar('\n');
	}
	return (0);
}
