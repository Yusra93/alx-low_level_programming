#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - Write a function that prints a string, followed by a new line.
 * char : pointer to a string
 * Return: void
 */

void _puts_recursion(char *s)
{
	int i = 0;

	if ( s[i] != '\0')
	{
        	_putchar(s[i]);
        	i++;
		_puts_recursion(s);
	}
}

