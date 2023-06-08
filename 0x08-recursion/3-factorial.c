#include <stdio.h>
#include "main.h"

/**
 * factorial - Write a function that returns the factorial of a given number.
 * @n: integer number
 * Return: int
 */

int factorial(int n)
{
	int fact;

	if (n == 1 || n == 0)
		return (1);
	if ( n < 0) 
		return (-1);
	fact = n * factorial(n - 1);

	return (fact);
}
