#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - X
 * @grid: grid
 * @heigth: heigth
 * Return: void
 */

void free_grid(int **grid, int heigth)
{
	int i;

	for (i = 0; i < heigth; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
