#include <stdio.h>
#include <ctype.h>
/**
 * _isalpha - X
 * @c: X
 * Return: 0
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	putchar('\n');
}
