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
	char *string;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	if (separator == NULL)
		separator = "";

	va_start(strings, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(strings, char *);
		if (string != NULL)
			printf("%s", string);
		else
			printf("(nil)");
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}
