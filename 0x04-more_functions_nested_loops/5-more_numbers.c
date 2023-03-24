#include "main.h"
#include <stdio.h>

void more_numbers(void)
{
	int k;
	int c;

	for (k = 0; k < 10; k++)
	{
		for (c = 0; c < 15; c++)
		{
			if (c > 9)
				_putchar(c/10 + '0');
			_putchar(c%10 + '0');
		}
		_putchar('\n');
	}
}
