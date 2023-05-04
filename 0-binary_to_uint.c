#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * binary_to_uint -  converts a binary number to an unsigned int.
 * @b:pointer to string
 *
 * Return:converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int convert = 0;

	int k, len = strlen(b);

	if (b == NULL)
	{
		return (0);
	}

	for (k = 0; k < len; k++)
	{
		if (b[k] != '0' && b[k] != '1')
		{
			return (0);
		}
		if (b[k] == '1')
		{
			convert = convert * 2 + 1;
		}
		else if (b[k] != '0')
		{
			convert *= 2;
		}
	}
	return (convert);
}
