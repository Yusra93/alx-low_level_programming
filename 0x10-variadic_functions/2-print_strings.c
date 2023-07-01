#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - a function that prints strings, followed by a new line.
 * @separator: the string to be printed between numbers.
 * @n: no of args
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	size_t i;
	const char *x = NULL;

	va_start(ap, n);         /* Initialize the argument list. */

	if (!separator)
		separator = "";
	for (i = 0; i < n; i++)
	{
		x = va_arg(ap, const char *);
		printf("%s", x ? x : "(nil)");    /* Get the next argument value. */
		if (i < n - 1)
			printf("%s ", separator);
	}
	printf("\n");
	va_end(ap);                  /* Clean up. */
}
