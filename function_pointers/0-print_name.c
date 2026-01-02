#include "function_pointers.h"

/**
 * print_name - prints name parameter
 * @name: parameter
 * @f: pointer to function, takes a char * as an arg
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
