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

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
		n = len2;

	results = malloc(len1 + n + 1);
	if (results == NULL)
	{
		return (NULL);
	}
	strcpy(results, s1);

	strncat(results, s2, n);
	results[len1 + n] = '\0';
	return (results);
}

