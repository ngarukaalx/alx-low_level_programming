#include "main.h"
#include <stdio.h>

/**
 * flip_bits -  function that returns the number of bits you would need to
 * flip to get from one number to another.
 * @n:to be checked
 * @m:to be checked
 *
 * Return:number of bits you would need to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result = n ^ m;

	unsigned int flip_bit = 0;

	while (result)
	{
		flip_bit += result & 1;
		result >>= 1;
	}
	return (flip_bit);
}
