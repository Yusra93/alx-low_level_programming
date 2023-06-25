#include "dog.h"

/**
 * new_dog - Prints a struct dog
 * @name: string
 * @age: float
 * @owner: string
 * Return: pointer to a dog.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = (dog_t *)malloc(sizeof(dog_t));
	d->name = name;
	d->age = age;
	d->owner = owner;
	if (!d)
		return (NULL);
	return (d);
}
