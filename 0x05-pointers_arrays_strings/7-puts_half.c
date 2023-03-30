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
	int half = len / 2;
	int i = half;

	while (str[i] != '\0')
	{
	_putchar(str[i]);
	i++;
	}
	_putchar('\n');
}

