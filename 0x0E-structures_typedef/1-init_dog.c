#include "dog.h"

/**
 * init_dog - initializes a type struct dog
 * @d: struct dog
 * @name: name of dog
 * @age: age of age
 * @owner: creator
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->age = age;
		d->name = name;
		d->owner = owner;
	}

}
