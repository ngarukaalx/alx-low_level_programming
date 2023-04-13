#include "main.h"
#include <stdlib.h>

/**
 * _calloc -  allocates memory for an array, using malloc.
 * @nmemb:array to be allocated memory for
 * @size: size
 *
 * Return:return to allocatd memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *myArray;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	myArray = calloc(nmemb, size);
	if (myArray == NULL)
	{
		return (NULL);
	}
	return (myArray);
}
