#include <stdio.h>
#include "main.h"
#include <unistd.h>
/**
 * main - Entry point.
 * Return: Always 0
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}

int main(void)
{
	int i, ones, tens;

	for (i = 1; i <= 100; i++)
	{
		ones = i;
		tens = i / 10;
		if (i > 9)
		{
			_putchar(tens + '0');
			ones = i % 10;
		}
		_putchar(ones + '0');
		/*if (i % 3 == 0 && i % 5 == 0)
			_putchar(fizz[0]);
		else if (i % 3 == 0)
		
		else if (i % 5 == 0)
		*/
		_putchar(' ');
	}
	_putchar('\n');
	return(0);
}

