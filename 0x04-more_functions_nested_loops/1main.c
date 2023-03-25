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
	int i, j = 0;

        if (n <= 0)
                _putchar('\n');
        while (j < n)
        {
                for (i = 0; i < j; i++)
                {
                        _putchar(' ');
                }
        _putchar('\\');
        _putchar('\n');
        j++;
        }
}
int main(void)
{
	print_diagonal(0);
	print_diagonal(2);
   	print_diagonal(10);
    	print_diagonal(-4);
	return(0);
}

