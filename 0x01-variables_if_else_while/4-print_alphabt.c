#include <stdio.h>

/**
 * main -Determine if a random number is positive, negative or zero.
 *
 * Return:returns 0
 */

int main(void)
{
	char k;

	for (k = 'a'; k <= 'z'; k++)
	if (k != 'q' && k != 'e')
	{
		putchar(k);
	}
	putchar('\n');
	return (0);

}
