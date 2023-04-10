#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strcmp - function that compare string.
 * @s1: char pointer
 * @s2 : char pointer
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int len1 = strlen(s1);
	int len2 = strlen(s2);

	if (len1 != len2)
		return;
	for (i = 0; i < len1; i++)
	{
		if (s1[i] > s2[i])
			return (5);
		else if (s1[i] < s2[i])
			return (-5);
		else
			return (0);
	}
}

