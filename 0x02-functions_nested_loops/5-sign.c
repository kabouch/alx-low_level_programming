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
		/*putchar(',');
		putchar(' ');*/
		return (1);
	}
	else if (n == 0)
	{
		putchar(48);
               /* putchar(',');
                putchar(' ');*/
		return (0);
	}
	else
	{
		putchar(45);
               /* putchar(',');
                putchar(' ');*/
                return (-1);
	}
	putchar('\n');
}
