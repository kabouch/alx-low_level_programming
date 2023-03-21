#include <stdio.h>
/**
 * print_alphabet - Prints alphabets in lower case
 * Return:0
 */
void print_alphabet_x10(void)
{
	int n = 0, i;

	while (n <=10)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			putchar(i);
		}
		putchar('\n');
		n++;
	}
	putchar('\n');
}
