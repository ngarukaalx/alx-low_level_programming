#include <stdio.h>

/**
 * print_quote - prints before main is executed
 *
 * Return:0 on success
 */

int print_quote(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
	return (0);
}

/**
 * init - fuction to be called first
 */

void  __attribute__((constructor)) init(void)
{
	print_quote();
}
