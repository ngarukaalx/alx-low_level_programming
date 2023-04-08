#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncat -  concatenates two strings.
 * @dest:being checked
 * @src:being checked
 * @n:being checked
 *
 * Return:Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
        strncat(dest, src, n);

        return (dest);
}
