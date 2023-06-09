#include <stdio.h>
#include "main.h"
#include <math.h>

/**
 * is_prime_number - Write a function that returns 1 if the input integer
 * is a prime number, otherwise return 0.
 * @n: integer number
 * Return: int
 */

int is_prime_number(int n)
{
	int p = (int) sqrt(n);

	if (n == 0 || n == 1)
		return (0);
	if (n <= 3)
		return (1);
	if (n % p != 0)
		return (0);
	p--;
	return is_prime_number(p);
}
