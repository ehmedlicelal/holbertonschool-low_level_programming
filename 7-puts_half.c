#include "main.h"

/**
 * puts_half - entry point
 * @str: parameter
 */

void puts_half(char *str)
{
	int len = 0, j;

	while (str[len] != '\0')
		len++;
	len--;
	j = len / 2;
	while (str[j] != '\0')
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
