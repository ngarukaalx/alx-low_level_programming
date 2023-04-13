#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked -  allocates memory using malloc.
 * @b:memory to be allocated for
 *
 * Return:0 on success
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(sizeof(b));

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
