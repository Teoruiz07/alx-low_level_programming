#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - frees two dimensional grid
 * @grid: multidimentional array
 * @height: grid height
 */

void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
