#include <stdio.h>
#include "main.h"

/**
 * print_numbers - function that prints numbers from 0 to 9.
 * Return: void
 */

void print_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		_putchar('0' + i);
	}
	_putchar('\n');
}

