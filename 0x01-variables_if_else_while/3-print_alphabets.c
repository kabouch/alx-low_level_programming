#include<stdio.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	int n = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
		putchar(n + 32);
		n++;
	}
	putchar('\n');
	return (0);
}
