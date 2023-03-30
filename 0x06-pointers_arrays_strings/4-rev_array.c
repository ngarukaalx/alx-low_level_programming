#include "main.h"
#include <stdio.h>

/**
 * reverse_array -  reverses the content of an array of integers.
 * @a:being checked
 * @n:being checked
 * Return:always 0.
 */
void reverse_array(int *a, int n)
{
	int i;

	int temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
