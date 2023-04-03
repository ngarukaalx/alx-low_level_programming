#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strspn -  gets the length of a prefix substring.
 * @s:being checked.
 * @accept:being checked.
 *
 * Return:Returns the number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
