#include "dog.h"
#include <string.h>
#include <stdlib.h>

/**
 * new_dog - function that creates a new dog.
 * @name:first number
 * @age:second number
 * @owner:third number
 *
 * Return:success 0
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	char *name_cp;

	char *owner_cp;

	if (name == NULL || owner == NULL)
		return (NULL);
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	name_cp = malloc(strlen(name) + 1);
	if (name_cp == NULL)
	{
		free(d);
		return (NULL);
	}

	owner_cp = malloc(strlen(owner) + 1);
	if (owner_cp == NULL)
	{
		free(name_cp);
		free(d);
		return (NULL);
	}
	strcpy(name_cp, name);
	strcpy(owner_cp, owner);

	d->age = age;
	d->owner = owner_cp;
	d->name = name_cp;
	return (d);
}
