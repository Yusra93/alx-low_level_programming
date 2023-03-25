#include <stdio.h>
#include "main.h"
#include <unistd.h>
/**
 * print_most_numbers - function that prints numbers from 0 to 9 execluding 2 and 4.
 * Return: void
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/* void print_most_numbers(void)*/
int main(void)
{
	int i, n, j = 0;
	
        while (j++ < 10)
        {
                for (i = 0; i < 15; i++)
		{                 
			n = i;
			if (i > 9)
			{
				_putchar('1');
				n = i % 10;
			}
				 _putchar(n + '0');
		}
		_putchar('\n');
        }
	return(0);
}

