#include <stdio.h>
/**
 * print_sign - X
 * @n: X
 * Return: 0
 */
int print_sign(int n)
{
	if (n > 0 )
	{
		putchar(43);
		return putchar(49);
	}
	else if (n == 0)
	{
		putchar(48);
		return putchar(48);
	}
	else
	{
		putchar(45);
                return putchar(49);
	}
	putchar('\n');
}
