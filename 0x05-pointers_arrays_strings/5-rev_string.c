#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * rev_string - function that prints a string in reverse.
 * @s: address to char
 * Return: void
 */

void rev_string(char *s)
{
	int i = strlen(s);

	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

