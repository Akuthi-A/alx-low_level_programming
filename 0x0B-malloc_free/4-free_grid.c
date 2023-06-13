#include "main.h"

/**
 * free_grid - frees memory aloocated to a grid
 * @grid: input 2-d array to be freed
 * @height: height of grid
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
	{
		free(grid[j]);
	}

	free(grid);
}
