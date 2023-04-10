#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strncat - function that concatenates two strings.
 * @dest: char pointer
 * @src : char pointer
 * @n : int
 * Return: address to char
 */

char *_strncat(char *dest, char *src, int n)
{
	/* dest = strncat(src, n);*/
	int i;

	for (i = 0; i < n && src != '\0'; i++)
	{
		dest[len + i] = src[i];
	}
	dest[len + i] = '\0';
	return (dest);
}

