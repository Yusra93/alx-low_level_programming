#include "main.h"

/**
 * print_last_digit -  print the last digit
 * @n: the integer value it receives
 * Return: the last digit of the number
 */
int print_last_digit(int n)
{
	n = ((n > 0) ? n : n * -1);

	_putchar(n % 10 + '0');
	return (n % 10);
}

