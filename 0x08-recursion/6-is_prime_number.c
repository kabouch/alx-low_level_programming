#include "main.h"

/**
 * check_prime - X
 * @n: n
 * @i: i
 * Return: int
 */

int check_prime(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}

	if (n % i == 0 && i > 1)
	{
		return (0);
	}

	if ((n / i) < i)
	{
		return (1);
	}

	return (check_prime(n, i + 1));
}

/**
 * is_prime_number - X
 * @n: n
 * Return: int
 */

int is_prime_number(int n)
{
	return (check_prime(n, 1));
}
