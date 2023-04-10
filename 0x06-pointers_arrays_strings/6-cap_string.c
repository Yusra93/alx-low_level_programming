#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * cap_string - function that capitalizes all words of a string.
 * @str: char pointer
 * Return: address to char
 */

char *cap_string(char *str)
{
	int i;
	int len = strlen(str);

	for (i = 0;  i < len; i++)
	{
		if (str[i+1] >= 'A' && str[i+1] <= 'Z')
			continue;
		else if(str[i] == '\t' || str[i] == 32 || str[i] == '\n')
		{
			str[i + 1] -= 32;
		}
	}
	return (str);
}

