#ifndef DOG_H
#define DOG_H

#include <stdlib.h>
#include <stdio.h>

/**
 * struct dog - Short description
 * @name:first member
 * @owner:second member
 * @age:third member
 *
 * Description:longer description
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};

/**
 * my_dog - short description
 * @name:first member
 * @owner:second member
 * @age:third member
 *
 * Return:My dog:wq
 */

struct dog *my_dog(char *name, char *owner, float age)
{
	struct dog *dog;

	dog = malloc(sizeof(struct dog));
	if (dog == NULL)
		return (NULL);
	dog->name = name;
	dog->owner = owner;
	dog->age = age;
	return (dog);
}
#endif
