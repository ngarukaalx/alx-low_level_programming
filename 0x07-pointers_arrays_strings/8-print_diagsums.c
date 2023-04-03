#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a:being checked.
 * @size:being checked.
 *
 * Return:sum of two diagonals.
 */

void print_diagsums(int *a, int size)
{
	int diagonal1 = 0;

	int diagonal2 = 0;

	int k;

	int h;

	for (k = 0; k < size; k++)
	{
		for (h = 0; h < size; h++)
		{
			if (k == h)
			{
				diagonal1 += *(a + k * size + h);
			}
			if (k + h == size - 1)
			{
				diagonal2 += *(a + k * size + h);
			}
		}
	}
	printf("%d, %d\n", diagonal1, diagonal2);
}
