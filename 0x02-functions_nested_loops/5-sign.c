#include "main.h"

/**
 * print-sign - check the sign
 * @n: the integer value it receives
 * Return: 1 and prints + if n is greater than zero
 * Return ptints 0if n is zero
 * Return prints - if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar(0);
		return (0);
	}
}

