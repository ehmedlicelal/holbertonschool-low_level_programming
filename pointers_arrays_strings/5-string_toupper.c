#include "main.h"

/**
 * string_toupper - make string all uppercase
 * @s: parameter
 * Retur: returns string s
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
			s[i] -= 32;
		i++;
	}
	return (s)
}
