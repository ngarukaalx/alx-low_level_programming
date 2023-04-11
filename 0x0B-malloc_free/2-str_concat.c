#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat -  concatenates two strings.
 * @s1:to be copied to
 * @s2:to be copied
 *
 * Return:return pointer to s1
 */

char *str_concat(char *s1, char *s2)
{
	char *result;

	int len1, len2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = strlen(s1);
	len2 = strlen(s2);

	result = malloc(len1 + len2 + 1);
	if (result == NULL)
	{
		return (NULL);
	}
	strcpy(result, s1);
	strcat(result, s2);

	return (result);
}
