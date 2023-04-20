#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n:to be checked
 *
 * Return:sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;

	unsigned int count = 0, sum_them_all = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(ap, n);

	for (count = 0; count < n; count++)
	{
		sum_them_all += va_arg(ap, int);
	}
	va_end(ap);
	return (sum_them_all);
}
