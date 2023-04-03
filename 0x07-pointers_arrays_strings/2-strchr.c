#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strchr -  locates a character in a string.
 * @s:being checked.
 * @c:being checked.
 *
 * Return:return pointer to s.
 */
char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
