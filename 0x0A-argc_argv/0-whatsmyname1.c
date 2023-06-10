#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * main - Entry point
 * Return: 0 for success
 */


#include <unistd.h>

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

int main(int argc, char* argv[])
{
	int l = strlen(argv[0]);
	for (int j = 0; j < l ; j++)
		_putchar(argv[0][j]);
	_putchar('\n');
	return (0);
}
