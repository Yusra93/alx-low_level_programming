#include <stdarg.h>
#include <stdio.h>

/**
 * int sum_them_all - a function that returns the sum of all its parameters.
 * @n: no of args
 * Return: sum of all args
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int sum = 0;
	size_t i;

	va_start(ap, n);         /* Initialize the argument list. */

	for (i = 0; i < n; i++)
	sum += va_arg(ap, int);    /* Get the next argument value. */

	va_end(ap);                  /* Clean up. */
	return (sum);
}
