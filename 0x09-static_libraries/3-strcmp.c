#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strcmp - function that compare string.
 * @s1: char pointer
 * @s2 : char pointer
 * Return: If str1 < str2, the negative difference of
 * the first unmatched characters.
 *         If s1 == s2, 0.
 *         If s1 > s2, the positive difference of
 *         the first unmatched characters.
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int len1 = strlen(s1);

	for (i = 0; i < len1; i++)
	{
		if (s1[i] == s2[i])
			continue;
		else
			break;

	}
	return (s1[i] - s2[i]);
}

