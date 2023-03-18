#include <stdio.h>

/**
 * main -Determine if a random number is positive, negative or zero.
 *
 * Return:returns 0
 */

int main(void)
{
	int k = 0;
	char h;

	while (k < 10)
	{
		putchar(k + '0');
		k++;
	}
	for (h = 'a'; h <= 'f'; h++)
	{
		putchar(h);
	}
	putchar('\n');
	return (0);
}
