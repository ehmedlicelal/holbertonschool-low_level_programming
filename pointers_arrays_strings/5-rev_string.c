#include "main.h"

/**
 * rev_string - entry point
 * @s: parameter
 */

void rev_string(char *s)
{
	int i = 0, len = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
		len++;
	}
	_putchar('\n');
	while (len > 0)
	{
		_putchar(s[len - 1]);
		len--;
	}
	_putchar('\n');
}
