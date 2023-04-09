#include <stdio.h>
#include <stdlib.h>

/**
 * main -  prints the minimum number of coins to make
 * change for an amount of money.
 * @argc:being checked.
 * @argv:being checked.
 *
 * Return:always 0.
 */

int main(int argc, char **argv)
{
	int cents, coins, bal;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	coins = cents / 25;
	bal = cents % 25;

	coins += bal / 10;
	bal = bal % 10;

	coins += bal / 5;
	bal = bal % 5;

	coins += bal / 2;
	bal = bal % 2;

	coins += bal;

	printf("%d\n", coins);

	return (0);
}
