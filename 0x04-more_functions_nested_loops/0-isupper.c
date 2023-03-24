#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
		putchar('1');
	else
		putchar ('0');
	return (0);
}
