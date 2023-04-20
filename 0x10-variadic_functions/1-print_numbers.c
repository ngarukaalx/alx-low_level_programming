#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Write a function that prints numbers, followed by a new line
 * @separator:space between intergers
 * @n:intergers to be printed
 *
 * Return:void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;

	unsigned int i;

	if (separator == NULL)
	{
		separator = " ";
	}

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(ap);

	printf("\n");
}
