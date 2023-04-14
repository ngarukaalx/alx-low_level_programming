#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - reallocates a memory block using malloc and free.
 * @old_size:old size
 * @new_size:new size
 * @ptr:ptr to old size
 *
 * Return:pointer to new size
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptrr;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptrr = malloc(new_size);
	if (ptrr == NULL)
	{
		return (NULL);
	}
	if (ptrr != NULL)
	{
		memcpy(ptrr, ptr, old_size < new_size ? old_size : new_size);
		free(ptr);
	}
	return (ptrr);

}
