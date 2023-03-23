#include "main.h"
#include <stdio.h>

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
			putchar(num + '0');
		}
		putchar('\n');
		line++;
	}
	putchar('\n');
}
