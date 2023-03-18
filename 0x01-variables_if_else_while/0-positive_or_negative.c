#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints"This program will assign a random number 
 * 	to the variable n each time it is executed.
 *
 * return:Always 0.
 */

int main(void)
{
	int n;

	srand(time(NULL));
	n = rand() - RAND_MAX / 2;	

	scanf("%d", &n);
	if (n > 0) 
		printf("%d is positive\n", n);
	
	}else if (n == 0){
		printf("%d is zero\n", n);
	
	}else
	printf("%d is negative\n", n);
	}
	return (0);
}
