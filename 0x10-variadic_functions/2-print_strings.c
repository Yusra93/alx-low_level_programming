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
	char *x;

	va_start(ap, n);         /* Initialize the argument list. */

	for (i = 0; i < n; i++)
	{
		x = va_arg(ap, char *);
		if (x == NULL)
			printf("(nil)");
		else
			printf("%s", x);    /* Get the next argument value. */
		if (separator && i < n - 1)
			printf("%s ", separator);
	}
	printf("\n");
	va_end(ap);                  /* Clean up. */
}
