#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strstr -  locates a substring.
 * @haystack:being checked.
 * @needle:being checked.
 *
 * Return:returns a pointer to the beginning of the located
 * substring, or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
        return (strstr(haystack, needle));
}
