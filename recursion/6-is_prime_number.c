#include "main.h"

int find_count_of_multipliers(int n, int count, int i)
{
	if (count > 2)
		return (0);
	else
	{
		if (n % i == 0)
			count++;
		return find_count_of_multipliers(n, count, i++);
	}
	return (1);
}

int is_prime_number(int n)
{
	int count = 0;
	int multiplier = 1;
	if ((n <= 3) && (n != 1))
		return (1);
	else
		return (find_count_of_multipliers(n, count, multiplier));
}
