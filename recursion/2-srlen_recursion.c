#include "main.h"

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i = 1;
		s += 1;
		return (i + _strlen_recursion(*s);
	}
	return (0);
}
