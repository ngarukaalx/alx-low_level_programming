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
		printf("%d", (unsigned long)(n)is positive);
	}
	else if ( n == 0 ) {
		printf("%d", (unsigned long)(n)is zero);
	}
	else {
		printf("%d", (unsigned long)(n)is negative);
	}
	return (0);
}
