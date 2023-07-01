#include "variadic_functions.h"

/**
 * print_strings - a function that prints strings, followed by a new line.
 * @separator: the string to be printed between numbers.
 * @n: no of args
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int remaining = n;
	const char *str = NULL;

	va_start(args, n);
	if (!separator)
		separator = "";
	while (remaining--)
	{
		str = va_arg(args, const char *);
		printf("%s", str ? str : "(nil)");
		if (remaining)
			printf("%s ", separator);
	}
	printf("\n");
	va_end(args);                  /* Clean up. */
}
