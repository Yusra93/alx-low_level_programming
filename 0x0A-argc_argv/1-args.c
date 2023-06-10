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
	if (argv)
		_putchar(argc + '0');
	_putchar('\n');
	return (0);
}
