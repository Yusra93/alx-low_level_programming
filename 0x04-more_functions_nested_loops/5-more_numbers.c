#include <stdio.h>
#include "main.h"

/**
 * more_numbers - function that prints numbers from 0 to 14.
 * Return: void
 */

void more_numbers(void)
{
	int i, j = 0;

	while (j < 10)
	{
		for (i = 0; i < 15; i++)
			_putchar(i + '0');
		_putchar('\n');
	}
	_putchar('\n');
}

