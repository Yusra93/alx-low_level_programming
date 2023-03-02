#include "main.h"

/**
 * print_last_digit - prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.
 */
void jack_bauer(void)
{
	int i = 0, j = 0; 

	while (j < 24)
	{
		while (i < 60)
		{
			_putchar('0' + j);
			__putchar('0' + i);
			_putchar('\n');
			i++;
		}
		j++;
	}
}

