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
	int len = sizeof(a) / sizeof(int);

	for (i = len - 1; i >= 0; i--)
	{
		if (i != 0)
			printf(", ");

		printf("%d", a[i]);
	}
	printf("\n");
}

