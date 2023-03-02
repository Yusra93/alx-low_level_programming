#include "main.h"

/**
 * _isalpha - check whether the @param is letter
 * @c: the integer value it receives
 * Return:  1 (True)
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122 || c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}

