#include <stdio.h>

/**
 * main -  prints all arguments it receives.
 * @argc:being checked.
 * @argv:being checked.
 *
 * Return:always 0.
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; argv[i]; i++)
	if (argc > 0)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

