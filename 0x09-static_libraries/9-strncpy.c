#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strncpy - function that that copies the string pointed to by src, including
 * the terminating null byte (\0), to the buffer pointed to by dest.
 * @dest: char pointer
 * @src : char pointer
 * Return: address to char
 */

char *_strncpy(char *dest, char *src, int n)
{
	/* dest = strcpy(src);*/
	int i;
	int len = strlen(src);

	for (i = 0; i <= len; i++)
		dest[i] = src[i];
	return (dest);
}

