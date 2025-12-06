#include "main.h"

/**
 * more_numbers - prints 0 to 14 10 times
 */

void more_numbers(void)
{
	int i, j, m, n;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j <= 9)
				_putchar(j + '0');
			else
			{
				m = j / 10;
				n = j % 10;
				_putchar(m + '0');
				_putchar(n + '0');
			}
		}
		_putchar('\n');
	}
}
