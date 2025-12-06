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
		for (n; n <= 98; n++)
		{
			_putchar(n);
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
		for (n; n >= 98; n--)
		{
			_putchar(n);
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
	else
	{
		_putchar(n + '0');
	 	_putchar('\n');
	}
}
