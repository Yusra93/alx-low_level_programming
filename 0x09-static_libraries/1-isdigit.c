#include <stdio.h>
#include "main.h"

/**
 * _isdigit - checks for integer character.
 * @c: character to check
 * Return: int
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

