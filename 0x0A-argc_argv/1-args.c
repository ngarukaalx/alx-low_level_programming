#include <stdio.h>

/**
 * main -  prints the number of arguments passed into it.
 * @argv:being checked.
 * @argc:being checked.
 *
 * Return:0 on success
 */

int main(int argc, char **argv)
{
	int i = 0;

	if (*argv[i] > 0)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
