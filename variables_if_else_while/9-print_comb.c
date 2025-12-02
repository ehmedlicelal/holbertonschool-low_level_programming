#include <stdio.h>

/**
 * main - entry point
 * Return: 0 if successful
 */

int main(void)
{
	int a;
	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
