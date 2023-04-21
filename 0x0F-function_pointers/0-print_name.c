#include "function_pointers.h"

/**
 * print_name - X
 * @name: name
 * @f: f
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
