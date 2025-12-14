#include "main.h"

/**
 * _memcpy - copies memory adress of src to dest
 * @dest: destination string
 * @srf: source string
 * @n: number
 * Return: returns pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	unsigned char *a = &src;

	for (i = 0; i < n; i++)
		dest[i] = a[i];
	return (dest);
}
