#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
/**
 * cap_string - capitalizes all words of a string.
 * @str:being checked
 *
 * Return:str
 */
char *cap_string(char *str)
{
	int i;
	int len;

	len = strlen(str);
	str[0] = toupper(str[0]);

	for (i = 1; i < len; i++)
	{
		if (isspace(str[i - 1]) || str[i - 1] == ',' || str[i - 1] == ';'
		|| str[i - 1] == '.' || str[i - 1] == '!' || str[i - 1] == '?'
		|| str[i - 1] == '"' || str[i - 1] == '(' || str[i - 1] == ')'
		|| str[i - 1] == '{' || str[i - 1] == '}')
	{
		 str[i] = toupper(str[i]);
	}
	}
	return (str);
}
