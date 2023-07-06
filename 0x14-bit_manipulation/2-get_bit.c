#include "main.h"
#include <stdio.h>

/**
 * get_bit -  function that returns the value of a bit at a given index.
 * @n:to be checked
 * @index:index sarting from 0
 *
 * Return: value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
