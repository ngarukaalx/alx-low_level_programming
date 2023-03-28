#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies the string
 * @dest:being checked
 * @src:being checked
 *
 * Return:always 0
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
