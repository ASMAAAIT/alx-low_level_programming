#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize a dog
 * @d: dog structure
 * @name: var member 1
 * @age: var member 2
 * @owner: var meber 3
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
