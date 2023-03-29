#include <stdio.h>
#include "main.h"

/**
 * swap_int - function that swaps the values of two integers.
 * @a: address
 * @b: address
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int *p1;
	int *p2;
	int *p;

	p1 = a;
	p2 = b;
	*p = a;
	*p1 = *a;
	*p2 = *p;
}

