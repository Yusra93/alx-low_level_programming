#include <stdio.h>
#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc : no of parameters
 * @argv : array of string
 * Return: argc
 */

int main(int argc, char *argv[])
{
	int x, y, mul = 1;

	if (argc < 3)
	{
		perror("Error\n");
		return (1);
	}
	x = atoi(argv[1]);
	y = atoi(argv[2]);
	mul = x * y;
	printf("%d\n",  mul);
	return (0);
}
