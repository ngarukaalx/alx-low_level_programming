#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcat -  concatenates two strings.
 * @dest:being checked
 * @src:being checked
 *
 * Return:always 0.
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr != '\0')
		ptr++;

	while (*src != '\0')
	{
		_putchar(*src);
		*ptr++ = *src++;
	}
	*ptr = '\0';
	return (dest);
}
