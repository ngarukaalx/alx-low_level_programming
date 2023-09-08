#include "hash_tables.h"

/**
 * hash_djb2 - implementing the djb2 algorithm.
 * @str: parameter
 *
 * Return: index
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long i = 0;

	unsigned long hash = 5000;

	int k;

	for (k = 0; str[k]; k++)
	{
		i += str[k];
	}
	return i % hash;
}
