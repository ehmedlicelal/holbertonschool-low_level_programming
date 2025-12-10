#include "main.h"

/**
 * _strcat - append to dest
 * @dest: destination
 * @src: source
 *
 * Return: returns pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;

	while (dest[i++])
		_putchar(dest[i]);
	
	_putchar('\n');

	i = 0;
	while (src[i++])
		_putcahr(src[i]);
	_putchar('\n');
	return (*dest);
}
