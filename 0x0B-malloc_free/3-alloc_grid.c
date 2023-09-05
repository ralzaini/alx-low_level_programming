#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - create a 2d integer grid using malloc.
 * Description: Each element of the grid should be initialized to 0.
 * @width: int size width
 * @height: int size height
 * Return: Pointer to new grid
 */

int **alloc_grid(int width, int height)
{
	int i, j, **grid;

	grid = malloc(sizeof(*grid) * height);
	if (width <= 0 || height <= 0 || grid == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			grid[i] = malloc(sizeof(**grid) * width);
			if (grid[i] == NULL)
			{
				while (i--)
				{
					free(grid[i]);
				}
				free(grid);
				return (NULL);
			}
			for (j = 0; j < width; j++)
			{
				grid[i][j] = 0;
			}
		}
	}
	return (grid);
}


