#include "main.h"

/**
 * _islower -fuction name
 * @c: parameter
 *
 * Return: 0 if not lower otherwisw 1
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
