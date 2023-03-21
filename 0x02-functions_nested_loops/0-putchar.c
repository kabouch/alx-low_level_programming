#include <stdio.h>
/**
 * main - Function that prints _putchar
 * Return: 0
 */
int main(void)
{
	char string[] = "_putchar";
	int i;

	for (i = 0; string[i] != '\0'; i++)
	{
		putchar(string[i]);
	}
	putchar('\n');
	return (0);
}
