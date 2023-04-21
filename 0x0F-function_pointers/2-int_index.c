#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - X
 * @array: array
 * @size: size
 * cmp: cmp
 * Return: int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
				{
					return (i);
				}
				i++;
			}
		}
	}

	return (-1);
}
