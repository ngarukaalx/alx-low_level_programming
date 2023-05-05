#include "main.h"
#include <stdio.h>

/**
 * get_endianness -  function that checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int num = 1;

	char *ptr = (char *) &num;

	return ((int) *ptr);
}
