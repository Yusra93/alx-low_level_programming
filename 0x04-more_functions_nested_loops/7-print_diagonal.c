#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 * @n: int
 * Return: void
 */

void print_diagonal(int n)
{
	int i, j = 0;

	if (n <= 0)
		_putchar('\n');
	while (j <= n)
	{
		for (i = 0; i <= j; i++)
		{
			_putchar(' ');
		}
	_putchar('\\');
	_putchar('\n');
	j++;
	}
}

