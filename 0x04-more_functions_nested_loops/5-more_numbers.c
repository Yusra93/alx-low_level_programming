#include <stdio.h>
#include "main.h"

/**
 * more_numbers - function that prints numbers from 0 to 14.
 * Return: void
 */

void more_numbers(void)
{
	int i, n, j = 0;

	while (j < 10)
	{
		for (i = 0; i < 15; i++)
		{
			n = i;
			if (i > 9)
			{
				_putchar('1');
				n = i % 10;
			}
			_putchar(n + '0');
	}
	_putchar('\n');
}

