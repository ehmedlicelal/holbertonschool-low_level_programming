#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - find password for 101-crackme with random
 *
 * Return: 0
 */

int main(void)
{
	int sum = 0;
	int c;

	srand(time(NULL));

	while (sum < 2772)
	{
		c = rand() % 94 + 33; /* ASCII 33 to 126 */

		if (sum + c > 2772)
			break;

		sum += c;
		putchar(c);
	}

	putchar(2772 - sum);

	return (0);
}
