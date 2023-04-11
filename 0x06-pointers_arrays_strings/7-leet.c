#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * leet - function that encodes a string into 1337.
 * @str: char pointer
 * Return: address to char
 */

char *leet(char *str)
{
	int i, j;
	char leet[8] = {'O', 'L', '#', 'E', 'A', '#', '#', 'T'};

	for (i = 0;  str[i] != '\0'; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (str[i] == str[j] || str[i] - 32 == str[j])
			str[i] = j + '0';
		}
	}
	return (str);
}

