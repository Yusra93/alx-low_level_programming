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
void print_diagonal(int n)
{
	int i, j, l;

        if (n <= 0)
                _putchar('\n');
        for (j = 0; j <= n; j++)
        {
                for (i = n; i > j; i--)
                {
                        _putchar(' ');
                }
		for( l = 0; l < j; l++)
		{
			_putchar('#');
		}
        _putchar('\n');
        }
}
int main(void)
{
	print_diagonal(0);
	print_diagonal(2);
   	print_diagonal(10);
    	print_diagonal(1);
	return(0);
}

