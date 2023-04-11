#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * _strdup -  returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str:string being checked.
 *
 * Return:returns pointer to the duplicated string.
 */

char *_strdup(char *str)
{
	char *cp_str;

	if (str == NULL)
	{
		return (NULL);
	}
	cp_str = strdup(str);

	if (cp_str == NULL)
	{
		return (NULL);
	}
	return (cp_str);
}
