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
	int len = strlen(dest);

	for (i = 0; i < len && src[i] != '\0'; i++)
	{
		dest[len + i] = src[i];
	}
	dest[len + i] = '\0';
	return (dest);
}

