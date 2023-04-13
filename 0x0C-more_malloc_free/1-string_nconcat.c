#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - t concatenates two strings.
 * @s1:to be join
 * @s2:to be join
 * @n:to be checked
 *
 * Return:pointer to the concatenates string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2;

	char *results;

	len1 = strlen(s1);
	len2 = strlen(s2);

	results = malloc(len1 + len2 + 1);
	if (results == NULL)
	{
		return (NULL);
	}
	strcpy(results, s1);
	if (n >= len2)
	{
		strcat(results, s2);
	}
	else
	{
		strncat(results, s2, n);
	}
	return (results);
}

