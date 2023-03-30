#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * puts2 - function that prints every other character of a string.
 * @str: address to string
 * Return: void
 */

void puts2(char *str)
{
	int len = strlen(str);
	int i = 0;

	while (i <= len)
	{
	_putchar(str[i]);
	i += 2;
	}
	_putchar('\n');
}

