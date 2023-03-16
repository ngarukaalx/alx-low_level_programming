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

	printf("The size of a char is: %lu.\n", (unsigned long)sizeof(y));
	printf("the size of an int is: %lu.\n", (unsigned long)sizeof(u));
	printf("The size of a long int:%lu.\n", (unsigned long)sizeof(i));
	printf("The size of a long long int:%lu.\n", (unsigned long)sizeof(o));
	printf("The size of a float:%lu.\n", (unsigned long)sizeof(p));

	return (0);
}


	
