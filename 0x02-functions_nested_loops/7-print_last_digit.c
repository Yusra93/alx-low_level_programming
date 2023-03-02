#include "main.h"

/**
 * print_last_digit -  print the last digit
 * @n: the integer value it receives
 * Return: the last digit of the number
 */
int print_last_digit(int n)
{
	/* n = ((n > 0) ? n : n * -1);*/
	int last = n % 10;

	if (n < 0)
		last *= -1;
	_putchar(last + '0');
	return (last);
}

