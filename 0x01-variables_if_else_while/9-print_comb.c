#include <stdio.h>

/**
 * main -Determine if a random number is positive, negative or zero.
 *
 * Return:returns 0
 */

int main(void)
{
	int k = 0;

	while (k < 10)
	{
		putchar(k + '0');
		if (k < 9)
		{
			putchar(',');
			putchar(' ');
		}
		k++;
		}
	putchar('\n');
	return (0);
}
