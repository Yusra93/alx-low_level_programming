#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * puts_half - function that prints half of a string.
 * @str: address to string
 * Return: void
 */

void puts_half(char *str)
{
	int len = strlen(str);
	int i = 0;
	int half = len - 1 / 2;

	while (half++)
	{
	_putchar(str[half]);
	}
	_putchar('\n');
}

