#include "main.h"

/**
 * _strlen - fuction name
 * @s: parameter
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
