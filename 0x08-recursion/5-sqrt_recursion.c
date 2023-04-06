#include "main.h"
#include <math.h>
#include <stdio.h>

int actual_sqrt_recursion(int n, int h);

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n:being checked.
 *
 * Return:returns the natural square root of a number.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - finds natural square root of a number.
 * @n:number of square root to be checked
 * @h:iterator
 *
 * Return: square root
 */

int actual_sqrt_recursion(int n, int h)
{
	if (h * h > n)
		return (-1);
	if (h * h == n)
		return (h);
	return (actual_sqrt_recursion(n, h + 1));
}
