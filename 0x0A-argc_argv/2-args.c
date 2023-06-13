#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * main - Entry point
 * @argc : no of parameters
 * @argv : array of string
 * Return: argc
 */

int main(int argc, char *argv[])
{
	int l, j, x;

	if (argc > 0)
	{
		for (l = 0; l < argc; l++)
		{
			x = strlen(argv[l]);
			for (j = 0; j < x ; j++)
				_putchar(argv[l][j]);
			_putchar('\n');
		}
	}
	return (0);
}
