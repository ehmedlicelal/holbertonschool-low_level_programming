#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - entry point
 * Return: minutes of day
 */

void jack_bauer(void)
{
	int a, b, c, d;

	for (a = 0; a < 3; a++)
	{
		for (b = 0; b < 3; b++)
		{
			if (a == 2 && b==4)
				continue;
			for (c = 0; c < 6; c++)
			{
				for (d = 0; d <= 9; d++)
				{
					_pushchar((a % 10) + '0');
					_pushchar((b % 10) + '0');
					_pushchar(':');
					_pushchar(c % 10) + '0');
					_pushchar(d % 10) + '0');
					_pushchar('\n');
				}	
			}
		}
	}
}
