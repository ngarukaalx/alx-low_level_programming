#include "main.h"
#include <stdio.h>

/**
 * main -entry point
 *
 * Return:returns 0
 */
void print_alphabet(void);

int main(void)
{
	print_alphabet();
	return (0);
}
void print_alphabet(void)
{
	char k;

	for (k = 'a'; k <= 'z'; k++)
	{
		putchar(k);
		}
	putchar('\n');
}
