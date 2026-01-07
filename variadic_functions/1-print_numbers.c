#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers with splitted by separator
 * @separator: separator between integers
 * @n: number of integers
 */


void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list nums;

	if (separator == NULL)
		separator = "";
	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(nums, n);
	for (i = 0; i < n - 1; i++)
		printf("%d%s", va_arg(nums, int), separator);
	printf("%d\n", va_arg(nums, int));
	va_end(nums);
}
