#include "main.h"

/**
 * more_numbers - X
 * @void: void
 */

void more_numbers(void)
{
	int line = 1;
	int num;

	while (line <= 10)
	{
		for (num = 0; num <= 14; num++)
		{
			_putchar((num / 10) + '0');
		}
		_putchar((num % 10) + '0');
		line++;
	}
	_putchar('\n');
}
