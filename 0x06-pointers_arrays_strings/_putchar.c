#include <unistd.h>

/**
 * _putchar - write a character to stdout
 * @c:the character to print
 *
 * Return:on succes 1
 * on error, -1 is returned, and errno is set appropriatly
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}
