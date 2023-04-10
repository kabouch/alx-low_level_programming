#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - X
 * @argc: argc
 * @argv: argv
 * Return: int
 */

int main(int argc, char *argv[])
{
	int m = atoi(argv[1]) * atoi(argv[2]);
	
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	else
	{
		printf("%d", m);
		
		return (0);
	}
}
