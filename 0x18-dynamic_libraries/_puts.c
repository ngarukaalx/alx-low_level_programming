#include "main.h"

/**
 * _puts - fuction name
 * @s: string pointer
 */

void _puts(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar(10);
}
