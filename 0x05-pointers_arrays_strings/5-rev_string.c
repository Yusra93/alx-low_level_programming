#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * rev_string - function that prints a string in reverse.
 * @s: address to char
 * Return: void
 */

void rev_string(char *s)
{
	int len = strlen(s);
	int i = len;
	int j = 0;

	while (i-- && j < len)
	{
	s[j] = s[i];
	j++;
	}
}

