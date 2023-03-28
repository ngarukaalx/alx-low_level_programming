#include "main.h"
#include <stdio.h>

/**
 * rev_string -  reverses a string.
 * @s:being checked
 *
 * Return:always 0.
 */
void rev_string(char *s)
{
	char temp;
	int i = 0;
	int j = 0;

	while (s[j] != '\0')
	{
		j++;
	}
	j--;

	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;

		i++;
		j--;
	}

}
