#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * print_rev - function that prints a string in reverse.
 * @s: address to char
 * Return: void
 */

void print_rev(char *s)
{
	int i = strlen(s);

	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

