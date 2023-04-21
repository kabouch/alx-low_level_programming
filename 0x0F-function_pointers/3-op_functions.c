#include  "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - X
 * @a: a
 * @b: b
 * Return: int
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - X
 * @a: a
 * @b: b
 * Return: int
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_div - X
 * @a: a
 * @b: b
 * Return: int
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - x
 * @a: a
 * @b: b
 * Return: int
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
