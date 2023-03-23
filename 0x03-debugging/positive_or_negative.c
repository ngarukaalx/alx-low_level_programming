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

       

        if (i > 0)
        {
                printf("%d is positive\n", i);
        }
        else if (i == 0)
        {
                printf("%d is zero\n", i);
        }
        else
        {
                printf("%d is negative\n", i);
	}
}
