#include "main.h"
#include <stdio.h>

/**
 * _strncpy -  copies a string.
 * @dest:being checked.
 * @src:being checked.
 * @n:being checked
 *
 * Return: return pointer to resulting string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int s = 0;

	while (src[s] != 0 && s < n)
	{
		dest[s] = src[s];
		s++;
	}
	while (s < n)
	{
		dest[s] = 0;
		s++;
	}
	return (dest);
}
