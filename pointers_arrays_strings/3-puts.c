#include "main.h"

/**
 * _puts - entry point
 * @str: parameter
 */

void _puts(char *str) {
	int i = 0;

	_putchar(str[0]);
	while (str[i++] != '\0')
		_putchar(str[i]);
	_putchar('\n');
}
