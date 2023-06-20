#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - blueprint for dog
 * @name: name of dog
 * @age: age of dog
 * @owner: creator
 *
 * Description: men's best friend 1
 */


struct dog
{
	char *name;
	float age;
	char *owner;
};


/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
