#include "main.h"

/**
 * _atoi - convert string to int
 * @s: parameter
 *
 * Return: returns integer converted from string
 */

int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;

	do
	{
		if (*s == '-')
			num *= -1;
		else if (*s >= 0 && *s <= 0)
			num = num * 10 + (*s - '0');
		else if (num > 0)
			break;
	}
	while (*s++);
	return (num * sign);
}
