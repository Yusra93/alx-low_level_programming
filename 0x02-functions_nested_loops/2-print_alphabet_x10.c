#include "main.h"

/**
 *print_alphabet -  print alphabet
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char ch = 'a';

	for (int i = 0 ; i < 10 ; i++)
	{
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
	}
}

