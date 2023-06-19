#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - Write a function that concatenates two strings.
 * @width : int
 * @height : int
 * Return: pointer of array
 */

int **alloc_grid(int width, int height)
{
	int  i, k;
	int **x;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	x  = malloc(height * sizeof(int *));
	if (x == NULL)
		return (NULL);
	for (k = 0; k < height; k++)
	{
		x[k] = malloc(width * sizeof(int));
		if (x[k] == NULL)
		{
			while (k >= 0 && k--)
			{
				free(x[k]);
			}
			free(x);
			return (NULL);
		}
		for (i = 0; i < width; i++)
		{
			x[k][i] = 0;
		}
	}
	return (x);
}
