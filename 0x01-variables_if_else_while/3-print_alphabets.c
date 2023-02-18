#include <stdio.h>

/**
 * main - Entry point. print alphabet
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a', cz = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (cz <= 'Z')
	{
		putchar(cz);
		cz++;
	}
	putchar('\n');
	return (0);
}

