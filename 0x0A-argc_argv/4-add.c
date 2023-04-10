#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - X
 * @argc: argc
 * @argv: argv
 * Return: int
 */

int main(int argc, char *argv[])
{
	int i = 1, m = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);

		return (0);
	}

	else
	{
		while (i < argc)
		{
			if (isdigit(atoi(argv[i])))
			{
				m = m + atoi(argv[i]);

				printf("%d\n", m);

				return (0);
			}
			
			else
			{
				printf("Error");

				return (1);
			}
			i++;
		}
	}

	return (0);
}
