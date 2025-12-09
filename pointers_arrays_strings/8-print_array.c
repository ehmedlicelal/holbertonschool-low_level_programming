#include <stdio.h>
#include "main.h"

/**
 * print_array
 * @a: parameter
 * @n: parameter
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
		if (i != n - 1 && n != 0)
			printf("%d, ", a[i]);
		else
			printf("%d, ", a[i]);
	printf("%d", a[n - 1]);
	_putchar('\n');
}
