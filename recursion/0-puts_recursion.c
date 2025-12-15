#include "main.h"

/**
 * _puts_recursion - recursion function
 * @s: parameter
 */

void _puts_recursion(char *s)
{
	int i = 0;
	
	if (*(s + i) == '0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*(s + i));
	return (_puts_recursion(*(s + i + 1));
}
