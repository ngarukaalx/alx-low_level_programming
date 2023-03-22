#include "main.h"

/**
 * -islower.c - checks for lowercase characte.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);

}
