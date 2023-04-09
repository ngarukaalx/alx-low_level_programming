#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main -  adds positive numbers.
 * @argc:being checked
 * @argv:being checked
 *
 * Return:0 on succes
 */

int main(int argc, char **argv)
{
	int k;

	int sum = 0;

	if (argc < 2)
	{
		printf("0\n");

		return (0);
	}
	for (k = 1; k < argc; k++)
	{
		int h;

		for (h = 0; argv[k][h]; h++)
		{
			if (h == 0 && argv[k][h] == '+')
			{
				continue;
			}
			if (!isdigit(argv[k][h]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[k]);
	}
	printf("%d\n", sum);
	return (0);
}
