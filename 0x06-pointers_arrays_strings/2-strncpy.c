#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncpy -  copies a string.
 * @dest:being checked.
 * @src:being checked.
 * @n:being checked
 *
 * Return: Always 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);

	dest[n] = '\0';

	return (dest);
}
