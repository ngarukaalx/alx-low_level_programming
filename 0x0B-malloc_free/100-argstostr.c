#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr -  concatenates all the arguments of your program.
 * @ac:number counts
 * @av:store string
 *
 * Return:concatenated string
 */

char *argstostr(int ac, char **av)
{
	int j;

	int length = 0;

	char *result;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < ac; j++)
	{
		length += strlen(av[j]) + 1;
	}
	result = (char *)malloc(length + 1);
	if (result == NULL)
	{
		return (NULL);
		exit(1);
	}
	result[0] = '\0';
	for (j = 0; j < ac; j++)
	{
		strcat(result, av[j]);
		strcat(result, "\n");
	}
	printf("%s\n", result);
	free(result);
	return (0);
}
