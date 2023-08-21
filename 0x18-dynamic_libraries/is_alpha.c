#include "main.h"

/**
 * _isalpha - fuction name
 * @c: parameter
 *
 * Return: 1 if alpha 1 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
