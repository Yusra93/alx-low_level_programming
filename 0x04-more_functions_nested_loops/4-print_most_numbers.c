#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - function that prints numbers from 0 to 9 execluding 2 and 4.
 * Return: void
 */

void print_most_numbers(void)
{
	char i = 0;

	while (i < 10)
	{
		if (i == 2 || i == 4)
			continue;
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}

