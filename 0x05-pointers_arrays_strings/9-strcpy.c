#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strcpy - function that that copies the string pointed to by src, including
 * the terminating null byte (\0), to the buffer pointed to by dest.
 * @dest: char pointer
 * @src : char pointer
 * Return: address to char
 */

char *_strcpy(char *dest, char *src)
{
	/* dest = strcpy(src);*/
	int i;

	for (i = 0; i < strlen(src); i++)
		*(dest + i) = src[i];
	return (dest);
}

