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
	int  i, j, l, k;
	int **x;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	l = width * height;
	for(k = 0; k < height; k++)
		x[k] = (int *)malloc(width * sizeof(int));
	for (i = 0; i < l; i++)
	for (j = 0; j < l; j++)
	{
		x[i][j] = 0;
	}
	return (x);
}

void print_grid(int **grid, int width, int height)
{
    int w;
    int h;

    h = 0;
    while (h < height)
    {
        w = 0;
        while (w < width)
        {
            printf("%d ", grid[h][w]);
            w++;
        }
        printf("\n");
        h++;
    }   
}
int main(void)
{
    int **grid;

    grid = alloc_grid(6, 4);
    if (grid == NULL)
    {
        return (1);
    }
    print_grid(grid, 6, 4);
    printf("\n");
    grid[0][3] = 98;
    grid[3][4] = 402;
    print_grid(grid, 6, 4);
    return (0);
}
