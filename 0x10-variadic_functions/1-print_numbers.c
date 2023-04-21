#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - X
 * @separator: separator
 * @n: n
 * @...: ...
 * Return: Numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numb;
	unsigned int i;

	va_start(numb, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numb, int));

		if (i < (n - 1) && separator)
		{
			printf("%s", separator);
		}
	}

	printf("\n");

	va_end(numb);
}
