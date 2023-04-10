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
		if (str[i] >= 'A' && str[i] <= 'Z')
			continue;
		else if(str[i - 1] == '\t' || 
		    str[i - 1] == ' '  || 
		    str[i - 1] == '\n' ||
		    str[i - 1] == '.'  ||
		    str[i - 1] == ')'  ||
		    str[i - 1] == '('  ||
		    str[i - 1] == '{'  ||
		    str[i - 1] == '}'  ||
		    str[i - 1] == '!'  ||
		    str[i - 1] == '?'  ||
		    str[i - 1] == ','  ||
		    str[i - 1] == '"'  ||
		    str[i - 1] == ';'  ||
		    i == 0)
			str[i] -= 32;
	}
	return (str);
}

