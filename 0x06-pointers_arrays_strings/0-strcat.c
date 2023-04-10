#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strcat - function that concatenates two strings.
 * @dest: char pointer
 * @src : char pointer
 * Return: address to char
 */

char *_strcat(char *dest, char *src)
{
	/* dest = strcat(src);*/
	int i;
	char *new;
	int len1 = strlen(dest);
	int len2 = strlen(src);

	for (i = 0; i <= (len1 + len2); i++)
	{
		if (dest[i] == '\0')
			continue;
		*(new + i) = dest[i];
		if (i > len1)
			*(new + i) = src[i];
	}
	dest = new;
	return (dest);
}

