#include "dog.h"

/**
 * print_dog - Prints a struct dog
 * @d: dog
 * @name: string
 * @age: float
 * @owner: string
 * Return: void.
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return (1);
	printf("Name: %s \n", ((d->name == NULL) ? "(nil)" : d->name));
	printf("Age: %.1f \n", ((d->age == NULL) ? "(nil)" : d->age));
	printf("Owner: %s \n", ((d->owner == NULL) ? "(nil)" : d->owner));
}

