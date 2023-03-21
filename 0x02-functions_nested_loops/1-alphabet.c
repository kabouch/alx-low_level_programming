#include <stdio.h>
/**
 * print_alphabet - Prints alphabets in lower case
 * Return:0
 */
void print_alphabet(void)
{
	int i;
	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return;
}
