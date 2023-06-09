#include <stdio.h>
#include "main.h"
#include <math.h>

/**
 * _sqrt_recursion - Write a function that returns the natural square root of a number.
 * @n: integer number
 * Return: int
 */

int _sqrt_recursion(int n)
{
	int start = 0;
	int end = n, ans;
	int mid = (start + end) / 2;

	if (x == 0 || x == 1)
		return x;
	if (mid * mid == x)
		return mid;
	if (mid * mid < x)
	{
		start = mid +1;
		ans = mid;
		return _sqrt_recursion(start);
	}
	else
	{
		end = mid - 1;
		return _sqrt_recursion(end);
	}
	return ans;
}
