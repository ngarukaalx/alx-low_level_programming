#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * array_range - creates an array of integers.
 * @min:to be checked
 * @max:to be checked
 *
 * Return:pointer to the new created array
 */

int *array_range(int min, int max)
{
	int *myArray;

	int num;

	int k;

	if (min > max)
	{
		return (NULL);
	}
	num = max - min + 1;
	myArray = malloc((num) * sizeof(int));
	if (myArray == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < num; k++)
	{
		myArray[k] = min + k;
	}
	return (myArray);
}
