#include <stdio.h>
/**
 * _islower - X
 * @c: X
 * Return:0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		putchar(49);
	}
	else
	{
		putchar(48);
	}
	putchar('\n');
	return (0);
}
