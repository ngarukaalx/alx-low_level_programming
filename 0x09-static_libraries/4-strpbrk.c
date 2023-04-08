#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strpbrk -  searches a string for any of a set of bytes.
 * @s:being checked.
 * @accept:being checked
 *
 * Return:returns a pointer to the byte in s
 */
char *_strpbrk(char *s, char *accept)
{
        return (strpbrk(s, accept));
}
