#include <stdio.h>
#include <ctype.h>
/**
 * _islower - X
 * @c: X
 * Return:0
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	putchar('\n');
}
