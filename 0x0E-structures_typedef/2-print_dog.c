#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints the members of struct dog
 * @d: struct passed in
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	printf("Name: %s\nAge: %.1f\nOwner: %s\n", d->name, d->age, d->owner);
}
