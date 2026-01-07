#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

void print_char(va_list args)
{
	printf("%c", va_arg(args, char));
}

void print_string(va_list args)
{
	char *string;

	string = va_arg(args, char *)
	if (string == NULL)
		string = "(nil)";
	printf("%s", string);
}

void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

void print_float(va_list args)
{
	printf("%f", va_arg(args, float));
}

void print_all(const char * const format, ...)
{

}
