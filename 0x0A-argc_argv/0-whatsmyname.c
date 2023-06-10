#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * main - Entry point
 * @argc : no of parameters
 * @argv : array of char
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int l = strlen(argv[0]);
	int j;

	for (j = 0; j < l ; j++)
		_putchar(argv[0][j]);
	_putchar('\n');
	return (0);
}
