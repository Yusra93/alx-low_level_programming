#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - Write a function that returns the length of a string.
 * @s: pointer to string
 * Return: int
 */

int _strlen_recursion(char *s)
{
	int l = 0;
	int i = 1;

	if (*s != '\0')
	{
	l = i + _strlen_recursion(s + 1);
	}
	return (l);
}
