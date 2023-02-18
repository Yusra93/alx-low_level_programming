#include <stdio.h>

/**
 * main - Entry point. print  base 16
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';
	int n = 0;

	while (n < 10)
	{
		putchar('0' + n);
		n++;
	}
	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}

