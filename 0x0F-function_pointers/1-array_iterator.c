#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator -  function that executes a function given as a parameter.
 * @array:to be iratarated.
 * @action:pointer to fuction
 * @size:size of array
 *
 * Return:array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int k;

	if (array == NULL || action == NULL)
		return;
	for (k = 0; k < size; k++)
	{
		action(array[k]);
	}
}
