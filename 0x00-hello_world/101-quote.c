#include<stdio.h>
#include <unistd.h>
#include <string.h>
/**
 * main - Prints out the last part of a quote in the standard error.
 *
 * Return: 1 if success
 */
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", strlen("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n"));
	return (1);
}
