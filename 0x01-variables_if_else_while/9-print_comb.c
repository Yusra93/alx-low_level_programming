#include <stdio.h>

/**
 * main - Entry point. print numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar('0' + n);
		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}

