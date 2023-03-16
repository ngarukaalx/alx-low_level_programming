#include <stdio.h>

/**
 * main - prints prints the size of various types on the computer
 *
 * return:Always 0.
 */
int main(void)
{
	char y;
	int u;
	long int i;
	long long int o;
	float p;

	printf("Size of a char is: %lu byte(s)\n", (unsigned long)sizeof(y));
	printf("Size of an int is: %lu byte(s)\n", (unsigned long)sizeof(u));
	printf("Size of a long int:%lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long long int:%lu byte(s)\n", (unsigned long)sizeof(o));
	printf("Size of a float:%lu byte(s)\n", (unsigned long)sizeof(p));

	return (0);
}


	
