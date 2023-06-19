#include "dog.h"

/**
 * void init_dog - initializes a type struct dog
 * @dog: struct dog
 * @name: name of dog
 * @age: age of age
 * @owner: creator
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog
	{
		char *name;
		float age;
		char *owner;
	};

	d -> age = age;
	d -> name = name;
	d -> owner = owner;

}
