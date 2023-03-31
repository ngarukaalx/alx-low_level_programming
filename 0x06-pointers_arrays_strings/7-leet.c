#include "main.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * leet - function that encodes a string into 1337.
 * @str:being checked.
 *
 * Return:leet_str
 */
char *leet(char *str)
{
	char *leet_str = str;

	char *leet_chars = "AEOTLaeotl";

	char *leet_codes = "4307143071";

	int i;

	for (i = 0; str[i]; i++)
	{
		int j;

		for (j = 0; leet_chars[j]; j++)
		{
			if (str[i] == leet_chars[j])
			{
				leet_str[i] = leet_codes[j];
				break;
			}
		}
	}
	return (leet_str);

}
