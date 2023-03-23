#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -Determine if a random number is positive, negative or zero.
 *
 * Return:returns 0
 */

void positive_or_negative(void)
{
        int n;

        srand(time(NULL));
        n = rand() - RAND_MAX / 2;

        scanf("%d", &n);
        if (n > 0)
        {
                printf("%d is positive\n", n);
        }
        else if (n == 0)
        {
                printf("%d is zero\n", n);
        }
        else
        {
                printf("%d is negative\n", n);
	}
}
