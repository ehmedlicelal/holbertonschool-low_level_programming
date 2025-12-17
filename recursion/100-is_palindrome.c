#include "main.h"

int str_len(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + str_len(s + 1));
}

int palindrome_checker(char *s, int n)
{
	if((*(s + 1) == '\0') &&(*(s + n == '\0')))
		return (1);
	if (*(s + 1) == *(s + n))
	{
		return (palindrome_checker(s + 1, n-1));
	}
}

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (palindrome_checker(s, str_len(s) - 1));
}
