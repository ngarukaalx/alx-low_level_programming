#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _memset -  fills memory with a constant byte.
 * @s:being checked.
 * @b:being checked.
 * @n:being checked.
 *
 * Return:return pointer to the memory s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
