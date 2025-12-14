#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix of integers
 * @a: pointer to the first element of the matrix
 * @size: size of the matrix (number of rows or columns)
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + i * size + i);
		sum2 += *(a + i * size + (size - 1 - i));
	}

	print_number(sum1);
	putchar(',');
	putchar(' ');
	print_number(sum2);
	putchar('\n');
}

/**
 * print_number - prints an integer using putchar
 * @n: the integer to print
 */
void print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
		putchar('-');
		num = -n;
	}
	else
	{
		num = n;
	}

	if (num / 10)
		print_number(num / 10);

	putchar((num % 10) + '0');
}