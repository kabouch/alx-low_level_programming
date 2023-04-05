#include "main.h"

/**
 * _strlen_recursion - Function
 * @s: s
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s == '\0')
	{
		return (len);
	}

	len++;
	_strlen_recursion(s);
}
