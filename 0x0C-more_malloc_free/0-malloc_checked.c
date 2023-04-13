#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked -  allocates memory using malloc.
 * @b:memory to be allocated for
 *
 * Return:pointer to allocated momory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);


	if (ptr == NULL)

		exit(98);

	return (ptr);
}
