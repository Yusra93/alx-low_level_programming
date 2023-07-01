#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - a function that prints strings, followed by a new line.
 * @separator: the string to be printed between numbers.
 * @n: no of args
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	size_t i = n;
	const char *x = NULL;

	va_start(ap, n);         /* Initialize the argument list. */

	if (!separator)
		separator = "";
	while (i--)
	{
		x = va_arg(ap, const char *);
		printf("%s", x ? x : "(nil)");    /* Get the next argument value. */
		if (i)
			printf("%s ", separator);
	}
	printf("\n");
	va_end(ap);                  /* Clean up. */
}
