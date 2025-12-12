#include "main.h"

/**
 * _strncpy - copies string from src to dest
 * @dest: destination string
 * @src: source string
 * 
 * Return: returns dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	if (src[0] == "")
		return (dest);
	for (i = 0; i < n && (*(src + i) != '\0'); i++)
		*(dest + i) = *(src + i);
	i += 1;
	if (n - i >= 2)
		for ( ; i < n; i++)
			dest[i] = '\0';
	return (dest);
}
