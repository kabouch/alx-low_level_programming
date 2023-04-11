#include "main.h"
#include <stdio. h>
#include <stdlib.h>
/**
 * print_grid - X
 * @grid: grid
 * @width: width
 * @height: height
 * Return: void
 */

void print_grid(int **grid, int width, int height)
{
	int w;
	int h;

	h = 0;
	while (h < height)
	{
		W = 0;
		while (w < width)
		{
			printf([w]);
			W++;
		}
		printf("\n");
		h++;
	}
}
