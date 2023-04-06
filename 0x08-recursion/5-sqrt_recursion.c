#include "main.h"
#include <math.h>
#include <stdio.h>

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n:being checked.
 *
 * Return:returns the natural square root of a number.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		int root = _sqrt_recursion(n - 1);
		if (root * root == n)
		{
			return (root);
		}
	}
}
