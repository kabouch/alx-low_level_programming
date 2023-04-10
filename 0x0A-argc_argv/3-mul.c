#include "main.h"
#include <stdio.h>

/**
 * main - X
 * @argc: argc
 * @argv: argv
 * Return: int
 */

int main(int argc, char *argv)
{
	int m = argv[1] * argv[2];
	
	if (argc < 3)
	{
		return (1);
	}

	else
	{
		printf("%d", m);
		
		return (0);
	}
}
