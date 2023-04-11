#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to an array of integers
 * @width: width of array
 * @height: height of array
 * Return: return array of integers
 */

int **alloc_grid(int width, int height)
{
	int **gridout1;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	gridout1 = malloc(height * sizeof(int *));
	if (gridout1 == NULL)
	{
		free(gridout1);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		gridout1[i] = malloc(width * sizeof(int));
		if (gridout1[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(gridout1[i]);
			free(gridout1);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			gridout1[i][j] = 0;

	return (gridout1);
}
