#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * create_array - Write a function that creates an array of chars,
 * and initializes it with a specific char.
 * @size : positive int
 * @c : char
 * Return: pointer to string
 */

char *create_array(unsigned int size, char c)
{
	size_t  i;
	char *x = (char *) malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		x[i] = c;
	}
	if (x != NULL)
		return (x);
	else
		return (NULL);
}

