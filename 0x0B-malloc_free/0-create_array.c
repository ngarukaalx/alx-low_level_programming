#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * create_array -  creates an array of chars, and initializes
 * it with a specific char.
 * @size:to be checked
 * @c:to be checked
 *
 * Return:pointer to created array
 */

char *create_array(unsigned int size, char c)
{
	char *createarray;

	if (size == 0)
	{
		return (NULL);
	}

	createarray = malloc(sizeof(char) * size);

	if (createarray == NULL)
	{
		return (NULL);
	}
	memset(createarray, c, size);
	return (createarray);
}
