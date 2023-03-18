#include <stdio.h>

/**
 * main - prints " print whether the number stored in the 
 * 			variable n is positive or negative.
 *
 * return:Always 0.
 */

int main(void)
{
	int n;

	scanf("%d", &n);
	if( n > 0 ) {
		printf("%d, is positive\n", n);
	}
	else if( n == 0 ) {
		printf("%d, is zero\n", n);
	}
	else{
		printf("%d, is negative\n", n);
	}
	return (0);
}
