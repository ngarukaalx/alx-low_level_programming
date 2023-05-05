#include "main.h"
#include <stdio.h>

/**
 * print_binary - function that prints the binary representation of a number.
 * @n:to be checked
 *
 * Return:always 0
 */

void print_binary(unsigned long int n)
{
	int bits = sizeof(n) * 8;

	int mask = 1 << (bits - 1);

	int i;

	for (i = 0; i < bits; i++)
	{
		if (n & mask)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
		mask >>= 1;
	}
	_putchar('\n');
}
