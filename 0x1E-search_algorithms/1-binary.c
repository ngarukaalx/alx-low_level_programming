#include "search_algos.h"

/**
 * binary_search - function that searches for a value in a sorted array
 * of integers using the Binary search algorithm
 * @array: pointer to the first element of the array
 * @size: size of array
 * @value: target value
 *
 * Return: index of the target, -1 if array is null or value not found
 */

int binary_search(int *array, size_t size, int value)
{
	size_t low, mid, high, i;

	if (array == NULL)
	{
		return (-1);
	}
	low = 0;
	high = size - 1;

	while (low <= high)
	{
		mid = low + (high - low) / 2;
		/* print the array every time it changes */
		printf("Searching in array:");
		for (i = low; i < high + 1; i++)
		{
			printf("%d, ", array[i]);
		}
		putchar(10);
		if (array[mid] == value)
		{
			return (mid);
		}
		if (array[mid] < value)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}
	return (-1);
}
