#include "dog.h"
#include <stdio.h>

/**
 * print_dog -  a function that prints a struct dog
 * @d:being checked
 *
 * Return:0 on succes
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->owner == NULL || d->name == NULL)
	{
		printf("(nil) %s", d->owner);
		printf("(nil) %s", d->name);
	}
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
