#include <stdio.h>
#include "main.h"
#include <math.h>

/**
 * _sqrt_recursion - Write a function that returns the
 * natural square root of a number.
 * @n: integer number
 * Return: int
 */

int _sqrt_recursion(int n)
{
	int start = 0;
	int end = n, ans;
	int mid = (start + end) / 2;

	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	else if (mid * mid == n)
		return (mid);
	else if (mid * mid < n)
	{
		start = mid + 1;
		ans = mid;
		return (_sqrt_recursion(start));
	}
	else
	{
		end = mid - 1;
		return (_sqrt_recursion(end));
	}
	return (ans);
}
