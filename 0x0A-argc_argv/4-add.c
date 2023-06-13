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
	int i, x, sum = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
		exit(1);
	}
	for (i = 1; i < argc; i++)
	{
		if (!(*argv[i] >= 48 && *argv[i] <= 57))
		{
			perror("Error\n");
			return (1);
		}
		x = atoi(argv[i]);
		sum += x;
	}
	printf("%d\n",  sum);
	return (0);
}
