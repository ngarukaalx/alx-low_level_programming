#include "hash_tables.h"

/**
 * hash_djb2 - implementing the djb2 algorithm.
 * @str: parameter
 *
 * Return: index
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long hash = 5381;

	int k;

	for (k = 0; str[k]; k++)
	{
		hash = (hash * 33) + str[k];
	}
	return hash;
}
