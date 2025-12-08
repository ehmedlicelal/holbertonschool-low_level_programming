#include "main.h"

/**
 * print_rev - prints reverse of string
 * @s: parameter
 */

void print_rev(char *s)
{
	int len = 0;

	while (str[len] != '\0')
		len++;
	while (str[len] != '\0')
	{
		_putchar(str[len]);
		len--;
	}
}
