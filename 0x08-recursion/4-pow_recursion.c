#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - Write a function that returns the value of x raised to the power of y.
 * @x: integer number
 * @y: power
 * Return: int
 */

int _pow_recursion(int x, int y)
{
	int pow;

	if (y != 1)
		pow = x * _pow_recursion(x ,y - 1);

	return (l);
}
