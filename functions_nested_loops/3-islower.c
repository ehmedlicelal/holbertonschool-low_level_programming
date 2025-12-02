#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * _islower - returs if c is lowercase
 */
int _islower(int c)
{
	if (islower(c))
		return 1;
	else
		return 0;
}
