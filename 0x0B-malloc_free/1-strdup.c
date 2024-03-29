#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Write a function that returns a pointer to
 * a newly allocated space in memory, which contains a copy of
 * the string given as a parameter.
 * and initializes it with a specific char.
 * @str : string
 * Return: pointer to string
 */

char *_strdup(char *str)
{
	size_t  i;
	unsigned int l;
	char *x;

	if (str == NULL)
	{
		return (NULL);
	}
	l = strlen(str);
	x = (char *) malloc((l + 1) * sizeof(char));

	if (x == NULL)
		return (NULL);
	for (i = 0; i < l; i++)
	{
		x[i] = str[i];
	}
	x[i] = '\0';
	return (x);
}
