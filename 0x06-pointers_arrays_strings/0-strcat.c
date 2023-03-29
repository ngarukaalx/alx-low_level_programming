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
	strcat(dest, " ");
	strcat(dest, src);
	return (dest);
}
