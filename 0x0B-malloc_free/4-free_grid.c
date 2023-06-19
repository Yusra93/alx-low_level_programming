#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * free_grid - Write a function that frees a 2 dimensional grid.
 * @grid : array of pointer
 * @height : int
 * Return: void
 */

void free_grid(int **grid, int height)
{
	while (height)
	{
		free(grid[--height]);
	}
	free(grid);
}
