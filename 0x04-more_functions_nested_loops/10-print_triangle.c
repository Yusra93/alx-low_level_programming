#include <stdio.h>
#include "main.h"

/**
 * print_triangle - function that prints a triangle, followed by a new line.
 * @size: int
 * Return: void
 */

void print_triangle(int size)
{
	int i, j, l;

	if (size <= 0)
		_putchar('\n');
	for (j = 0; j <= size; j++)
	{
		for (i = size; i > 0; i--)
		{
			_putchar(' ');
		}
		for (l = 0; i < j; l++)
			_putchar('#');
	}
}

