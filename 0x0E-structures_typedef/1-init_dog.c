#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d:pointer
 * @name:first member
 * @age:third member
 * @owner:second member
 *
 * Return:0 on success
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->age = age;

	d->owner = owner;

	d->name = name;
}
