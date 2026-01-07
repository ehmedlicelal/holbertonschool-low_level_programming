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

	va_start(strings, n);
	for (i = 0; i < n - 1 && separator != NULL; i++)
	{
		string = va_arg(strings, char *);
		if (word != NULL)
			printf("%s%s", string, separator);
		else
			printf("(nil)\n");
	}
	printf("%s\n", string);
}
