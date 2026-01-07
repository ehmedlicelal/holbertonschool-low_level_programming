#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings splitted by separator
 * @separator: splits strings
 * @n: number of strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;

	if (separator == NULL)
		printf("(nil)");
	va_start(strings, n);
	for (i = 0; i < n - 1; i++)
		printf("%s%s", va_arg(strings, char *), separator);
	printf("%s\n", va_arg(strings, char *));
}
