#include <stdio.h>
#include "main.h"

/**
 * print_numbers - function that prints numbers from 0 to 9.
 * Return: void
 */

void print_numbers(void)
{
	char i = 0;

	while (i < 10)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}

