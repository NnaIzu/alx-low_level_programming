#include "main.h"
#include <stdlib.h>

/**
 * free_grid - to free a grid
 * @grid: the earlier allocated grid
 * @height: height of the array
 * Return: (0)
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
