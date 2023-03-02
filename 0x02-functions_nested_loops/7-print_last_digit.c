#include "main.h"

/**
 * print_last_digit -  print the last digit
 * @n: the integer value it receives
 * Return: the last digit of the number
 */
int print_last_digit(int n)
{
	n = _abs(n);
	int last = n % 10;

	_putchar('0' + last);
	return (last);
}

