#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * print_array - function that prints n elements of an array of integers.
 * @a: address to int
 * @n : int
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
			printf("%d\n", a[i]);
		else
			printf("%d, ", a[i]);
	}
}

