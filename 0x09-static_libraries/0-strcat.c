#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcat -  concatenates two strings.
 * @dest:being checked
 * @src:being checked
 *
 * Return:always 0.
 */
char *_strcat(char *dest, char *src)
{
        char *temp = dest;

        while (*temp != '\0')
        {
                temp++;
        }
        while (*src != '\0')
        {
                *temp++ = *src++;
        }
        *temp = '\0';
        return (dest);
}
