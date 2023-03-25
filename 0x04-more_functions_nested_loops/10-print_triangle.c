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
	else
	{
		for (j = 0; j < size; j++)
		{
			for (i = size; i > j; i--)
			{
				_putchar(' ');
			}
			for (l = 0; l <= j; l++)
			{
				_putchar('#');
			}
		_putchar('\n');
		}
	}
}

