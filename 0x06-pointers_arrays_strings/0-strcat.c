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
	int l = len1 + len2;

	for (i = 0; i <= l; i++)
	{
		if (i > len1)
			*(new + i) = src[i];
		else
			*(new + i) = dest[i];
	}
	dest = new;
	return (dest);
}

