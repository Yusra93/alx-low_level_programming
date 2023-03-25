#include <stdio.h>
#include "main.h"

/**
 * print_square - function that prints a square, followed by a new line.
 * @size: int
 * Return: void
 */

void print_square(int size)
{
	int i, j = 0;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (j = 0; j < size; j++)
		{
			for (i = 0; i < size; i++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

