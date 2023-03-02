#include <unistd.h>
#include <stdio.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
				
int main(void)
{
	int i , j = 0; 

	while (j < 24)
	{
		i = 0;
		while (i < 60)
		{
			_putchar(j + '0');
			_putchar(':');
			_putchar('0' + 0);
			_putchar(i + '0');
			_putchar('\n');
			i++;
		/*  printf("increment i: %2d \n" , i); */
		}
	/*	printf("increment j: %2d \n" , j);*/
		j++;
	}
}

