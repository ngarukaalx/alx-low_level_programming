#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid -  returns a pointer to a 2 dimensional array of integers.
 * @width:with of the array
 * @height:height of the array
 *
 * Return:return pointer to a 2 dimensional array.
 */

int **alloc_grid(int width, int height)
{
	int **myArray;

	int k, h;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	myArray = (int **) malloc(height * sizeof(int *));
	if (myArray == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < height; k++)
	{
		myArray[k] = (int *) malloc(width * sizeof(int *));
		if (myArray[k] == NULL)

		for (h = 0; h < width; h++)
		{
			myArray[k][h] = 0;
		}
	}
	return (myArray);
}
