#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - Write a function that prints a string, followed by a new line.
 * char : pointer to a string
 * Return: void
 */

void _puts_recursion(char *s)
{

	if (*s != '\0')
	{
		putchar(*s);
		_puts_recursion(s+1);
	}
	else
		putchar('\n');
}

int main(void)
{
	char str[] = "Hello World!";
	_puts_recursion(str);
	return (0);
}
