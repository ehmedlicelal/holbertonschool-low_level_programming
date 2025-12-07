#include <main.h>

int main(void)
{
	int i, m, n, k;

	for (i = 1; i < 90; i++)
	{
		if (i % 10 == 0)
			i += i / 10 + 1;
	       	m = i / 10;
		n = i % 10;
		if (i < 10)
		{
			k = m;
			m = n;
			n = k;
		}
		putchar(m + '0');
		putchar(n + '0');
		if (i != 89)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
}
