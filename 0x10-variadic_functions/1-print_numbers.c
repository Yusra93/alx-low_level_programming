#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - a function that prints numbers, followed by a new line.
 * @separator: the string to be printed between numbers.
 * @n: no of args
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	size_t i;

	va_start(ap, n);         /* Initialize the argument list. */

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));    /* Get the next argument value. */
		if (separator && i < n)
			printf("%s ", separator);
	}
	printf("\n");
	va_end(ap);                  /* Clean up. */
}
