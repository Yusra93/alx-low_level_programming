#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a:: int  pointer to an array
 * @n: int
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	/*int len = sizeof(a) / sizeof(int);*/

	for (i = 0; i < n / 2; i++)
	{
		int temp = a[i];

		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}

