#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
 */

void print_alphabet(void)
{
	char k;

	for (k = 'a'; k <= 'z'; k++)
	{
		putchar(k);
		}
	putchar('\n');
}
