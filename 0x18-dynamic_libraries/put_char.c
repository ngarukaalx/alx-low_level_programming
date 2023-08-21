#include "main.h"

/**
 * _putchar - fuction name
 * @c: parameter
 *
 * Return: 0 on succes
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
