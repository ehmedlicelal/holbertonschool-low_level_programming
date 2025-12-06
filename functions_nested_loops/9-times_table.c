#include <stdio.h>
#include "main.h"

/**
 * times_table - 9 times table
 * Return: 9 times table, starting with 0
 */

void times_table(void)
{
	int a,b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; a <= 9; b++)
				{
					_putchar((a * b) + '0');
					if (b != 9)
					{
						_putchar(',');
						_putchar(' ');
					}
					_putchar('\n');
				}
	}
}
