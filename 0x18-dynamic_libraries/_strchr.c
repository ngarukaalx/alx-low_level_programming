#include "main.h"

/**
 * _strchr - locate char in string
 * @s: pointer to string
 * @c: character to find
 *
 * Return: pointer to first occurence of c
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
