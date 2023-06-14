#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Write a function that concatenates two strings.
 * @s1 : string
 * @s3 : string
 * Return: pointer to string
 */

char *str_concat(char *s1, char *s2)
{
	size_t  i, j = 0;
	unsigned int l1 = strlen(s1);
	unsigned int l2 = strlen(s2);
	unsigned int l = l1 + l2;
	char *x = (char*) malloc(l * sizeof(char));

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < l; i++)
	{
		if (i >= l1)
		{
			x[i] = s2[j];
			j++;
		}
		else
			x[i] = s1[i];
	}
	x[i] = '\0';
	return (x);
}
