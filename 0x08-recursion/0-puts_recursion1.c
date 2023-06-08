#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - Write a function that prints a string, followed by a new line.
 * char : pointer to a string
 * Return: void
 */

#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

void _puts_recursion(char *s)
{

	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s+1);
	}
	else
		_putchar('\n');
}

int main(void)
{
	char str[] = "Hello World!";
	_puts_recursion(str);
	return (0);
}
