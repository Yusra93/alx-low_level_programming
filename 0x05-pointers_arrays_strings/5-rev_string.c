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
	int half = len / 2;
	int i = 0;

	while (half--)
	{
	int temp = s[len - i -1];
	s[len - i -1] = s[i];
	i++;
	}
}

