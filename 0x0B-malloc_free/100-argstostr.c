#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - Write a function that concatenates all the arguments of your program.
 * @ac : no of arguments
 * @av : array of arguments
 * Return: new string
 */

char *argstostr(int ac, char **av)
{
	int i, l;

	l = sizeof(av)/sizeof(av[0]);

	char *s = (char *)malloc(sizeof(char) * l);

	if (ac == 0 || av == NULL)
		return (NULL);
	if (s == NULL)
		return (NULL);
	for (i = 1; i < ac; i++)
	{
		strcat(s, av[i]);
		strcat(s, '\n');
	} 
	return (s);
}
