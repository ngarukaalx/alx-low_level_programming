#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @str:being checked
 *
 * Return:*
 */
char *string_toupper(char *str)
{
	char *p = str;

	while (*p)
	{
		if (islower(*p))
		{
			*p = toupper(*p);
		}
		p++;
	}
	return (str);

}
