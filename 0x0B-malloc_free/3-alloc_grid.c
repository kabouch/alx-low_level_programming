#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - X
 * @width: width
 * @height: height
 * Return: int
 */

int **alloc_grid(int width, int heigth)
{
	int i, j, k, l;
	int **a;

	if (width <= 0 || heigth <= 0)
	{
		return (NULL);
	}

	a = malloc(sizeof(int *) * heigth);

	if (a == NULL)
	{
		free(a);

		return (NULL);
	}

	for (i = 0; i < heigth; i++)
	{
		a[i] = malloc(sizeof(int) * width);

		if (a[i] == NULL)
		{
			for (j = i; j >= 0; j--)
			{
				free(a[j]);
			}

			free(a);

			return (NULL);
		}
	}

	for (k = 0; k < heigth; k++)
	{
		for (l = 0; l < width; l++)
		{
			a[k][l] = 0;
		}
	}

	return (a);
}
