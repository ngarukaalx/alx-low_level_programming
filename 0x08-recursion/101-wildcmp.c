#include "main.h"
#include <stdio.h>

/**
 * wildcmp - compares two strings.
 * @s1:string being compared
 * @s2:string being compared
 *
 * Return:1 if identical and 0 if otherwise
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (*s2 == '*')
	{
		if (wildcmp(s1, s2 + 1))
		{
			return (1);
		}
		if (wildcmp(s1, s2 + 1))
		{
			return (1);
		}
		if (*s1 != '\0' && wildcmp(s1 + 1, s2))
		{
			return (1);
		}
		return (0);
	}
	if (*s1 != '\0' && (*s1 == *s2))
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}
