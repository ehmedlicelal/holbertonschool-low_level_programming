#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list nums;

	va_start(nums, n);
	for (i = 0; i < n - 1; i++)
		printf("%u%s", va_arg(nums, int), separator;
	printf("%u\n", va_arg(nums, int));
	va_end(nums);
}
