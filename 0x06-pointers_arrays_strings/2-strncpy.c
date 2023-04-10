#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strncpy - function that copies string.
 * @dest: char pointer
 * @src : char pointer
 * Return: address to char
 */

char *_strncpy(char *dest, char *src, int n)
{
	/* dest = strcpy(src);*/
	int i;
	/*int len = strlen(dest);*/

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}

