#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _memcpy -  copies memory area.
 * @dest:being checked.
 * @src:being checked.
 * @n:being checked.
 *
 * Return: pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
        memcpy(dest, src, n);
        return (dest);
}
