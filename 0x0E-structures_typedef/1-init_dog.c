#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - check the code
 * @d: dog
 * @name: string
 * @age: float
 * @owner: string
 * Return: void.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if(d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

