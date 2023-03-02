#include "main.h"

/**
 * _abs - get the absolute 
 * @n: the integer value it receives
 * Return: the abs no
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n);
	}
	else
	{
		n = -1 * n ;
		return (n);
	}
}

