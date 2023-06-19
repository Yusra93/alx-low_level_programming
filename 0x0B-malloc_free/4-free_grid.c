#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * free_grid - Write a function that concatenates two strings.
 * @grid : array of pointer
 * @height : int
 * Return: void
 */

void free_grid(int **grid, int height)
{
	while (height >= 0)
	{
		free(grid[height]);
	}
	free(grid);
}
