#include "main.h"

/**
 * _strlen_recursion - Function
 * @s: s
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	s++;
	return (_strlen_renursion(s) + 1);
}
