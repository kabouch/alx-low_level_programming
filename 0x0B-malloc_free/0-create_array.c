#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - X
 * @size: size
 * @c: c
 * Return: char
 */

char *create_array(unsigned int size, char c)
{
	char *p;

	if (size > 0)
	{
		*p = malloc(sizeof(char) * size);
		*p = c;

		return (*p);
	}

	else
	{
		return (NULL);
	}
}
