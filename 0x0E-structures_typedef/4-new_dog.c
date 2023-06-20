#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creating a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: creator
 *
 * Return: new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *snoop;

	snoop = malloc(sizeof(dog_t));
	if (snoop == NULL)
		return (NULL);

	snoop->name = name;
	snoop->age = age;
	snoop->owner = owner;

	return (snoop);
}



