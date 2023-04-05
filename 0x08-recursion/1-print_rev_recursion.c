#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - Function
 * @s: s
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
