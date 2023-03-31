#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * rot13 -  function that encodes a string using rot13.
 * @str:being checked.
 *
 * Return:result
 */
char *rot13(char *str)
{
	char *result = (char *)malloc(sizeof(char) * strlen(str) + 1);

	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (isalpha(str[i]))
		{
			char base = islower(str[i]) ? 'a' : 'A';

			result[i] = (((str[i] - base)  +  13) % 26) +base;
		}
		else
		{
			result[i] = str[i];
		}
	}
	result[i] = '\0';
	return (result);
}
