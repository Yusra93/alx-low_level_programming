#include "main.h"

/**
 * _islower - check whether the letter is lowercase or not
 * Return:  1 (True)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

