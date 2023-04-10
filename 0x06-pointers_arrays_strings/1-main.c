#include <stdio.h>
#include "main.h"
#include <unistd.h>
#include <string.h>
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
	else
	{
        	for (j = 0; j < n; j++)
        	{
                	for (i = n-1 ; i > j; i--)
                	{
                        	_putchar(' ');
                	}
			for( l = 0; l <= j; l++)
			{
				_putchar('#');
			}
		_putchar('\n');
        	}
	}
}
int main(void)
{
/*	print_diagonal(2);
   	print_diagonal(10);
    	print_diagonal(1);
	print_diagonal(0);
	print_diagonal(-8);
	print_diagonal(7);
*/
	char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

    printf("%s\n", s1);
    printf("%s", s2);
    ptr = _strncat(s1, s2, 1);
    printf("%s\n", s1);
    printf("%s", s2);
    printf("%s\n", ptr);
    ptr = _strncat(s1, s2, 1024);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);
	return(0);
}

