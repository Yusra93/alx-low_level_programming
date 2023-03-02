#include "main.h"

/**
 * print_last_digit -  print the last digit
 * @n: the integer value it receives
 * Return: the last digit of the number
 */
int print_last_digit(int n)
{
	_putchar('0' + n % 10);
	return (n % 10);
}

