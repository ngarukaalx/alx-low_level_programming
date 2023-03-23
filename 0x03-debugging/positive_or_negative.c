#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * main -Determine if a random number is positive, negative or zero.
 *
 * Return:returns 0
 */

void positive_or_negative(int i)
{

        int n;

        srand(time(NULL));
        n = rand() % i;

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
