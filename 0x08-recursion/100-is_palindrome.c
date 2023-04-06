#include "main.h"
int check_pall(char *s, int h, int len);

/**
 *  is_palindrome - check if a string is a palindrome.
 *  @s:to be checked
 *
 *  Return:1 if a string is a palindrome and 0 if not.
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pall(s, 0, _strlen_recursion(s)));
}

/**
 *  _strlen_recursion - returns length of a string
 *  @s:being checked
 *
 *  Return:length of a string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pall - checks palindrome.
 * @s:being checked
 * @h:being checked
 * @len:being checked
 *
 * Return:1 if a string is a palindrome and 0 if not.
 */


int check_pall(char *s, int h, int len)
{
	if (s[h] != s[len - 1])
		return (0);
	if (h >= len)
		return (1);
	return (check_pall(s, h + 1, len - 1));
}
