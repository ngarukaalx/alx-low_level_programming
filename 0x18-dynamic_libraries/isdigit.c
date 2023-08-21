#include "main.h"

/**
 * _isdigit - fuction name
 * @c: parameter
 *
 * Return: return 1 if true 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '1' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
