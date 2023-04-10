#include <stdio.h>
#include "main.h"
#include <unistd.h>
#include <string.h>
/**
 * print_most_numbers - function that prints numbers from 0 to 9 execluding 2 and 4.
 * Return: void
 */

int main(void)
{
	char s1[] = "Hello";
	char s2[] = "World!";

    printf("%d\n", _strcmp(s1, s2));
    printf("%d\n", _strcmp(s2, s1));
    printf("%d\n", _strcmp(s1, s1));
	return(0);
}

