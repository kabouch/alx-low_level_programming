#include <stdio.h>
#include <ctype.h>
/**
 * _islower - X
 * Return:0
 */
int _islower(int c)
{
	if (islower(c))
	{
		putchar(49);
	}
	else
	{
		putchar(48);
	}
	return (0);
}
