#include "main.h"

/**
 * _sqrt_recursion - square root of n
 * @n: parameter
 * Return: 0 if successful
 */

int _sqrt_recursion(int n)
{
	helper(n, 1);
}

/**
 * helper- helper function of _sqrt_recursion
 * @n: parameter
 * @i: parameter
 * Return: i if i is square root of n, -1 if not succecful
 */

int helper(int n, int i)
{
	if (i <= n)
	{
		if ((n / i = i) && (n % i == 0))
			return (i);
		else
			return helper(n, i + 1);
	}
	return (-1);
}
