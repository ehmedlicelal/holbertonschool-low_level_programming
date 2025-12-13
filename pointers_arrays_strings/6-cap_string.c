#include "main.h"

/**
 * cap_string - capitalize strings in sentence
 * @s: string
 * Return: returns string
 */

char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if(!(s[i] >= 'a' && s[i] <= 'z'))
			i++;
		if (i == 0 ||
			s[i - 1] == ' ' || s[i - 1] == '\t' ||
			s[i - 1] == '\n' || s[i - 1] == ',' ||
			s[i - 1] == ';' || s[i - 1] == '.' ||
			s[i - 1] == '!' || s[i - 1] == '?' ||
			s[i - 1] == '"' || s[i - 1] == '(' ||
			s[i - 1] == ')' || s[i - 1] == '{' ||
			s[i - 1] == '}')
			if(s[i] != ' ' || s[i] != '\n')
				s[i] -= 32;
		i++;
	}
	return (s);
}
