#include "main.h"

/**
 * binary_to_uint -  converts a binary number to an unsigned int.
 * @b:pointer to string
 *
 * Return:converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int convert = 0;

	int k;

	if (b == NULL)
	{
		return (0);
	}

	for (k = 0; b[k]; k++)
	{
		if (b[k] != '0' && b[k] != '1')
		{
			return (0);
		}
		convert = 2 * convert + (b[k] - '0');
	}
	return (convert);
}
