#include "main.h"

/**
 * print_rev - prints reverse of string
 * @s: parameter
 */

void print_rev(char *s)
{
	int i, len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	i = len;
	while (s[len] != '\0')
	{
		_putchar(s[i]);
		i--;
	}
}
