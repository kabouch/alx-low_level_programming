#include "main.h"
#include <stdio.h>

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - X
 * @n: n
 * Return: int
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - X
 * @n: n
 * @i: i
 * Return: int
 */

int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
	{
		return (-1);
	}

	if (sqrt == n)
	{
		return (i);
	}

	return (sqrt(n, i+1));
}
