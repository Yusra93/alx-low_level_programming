#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * string_toupper - function that changes all lowercase letters to uppercase.
 * @str: char pointer
 * Return: address to char
 */

char *string_toupper(char *str)
{
	int i;
	/*int len = strlen(dest);*/

	for (i = 0;  str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	}
	return (str);
}

