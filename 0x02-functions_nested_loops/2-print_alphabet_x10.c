#include <stdio.h>
#include "1-alphabet.c"
/**
 * print_alphabet_x10 - Prints alphabets in lower case
 * Return:0
 */
void print_alphabet_x10(void)
{
	int n = 0;

	while (n < 10)
	{
		print_alphabet();
		n++;
	}
	putchar('\n');
}
