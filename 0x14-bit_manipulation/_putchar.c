#include <unistd.h>

/**
 * _putchar - writes a character to stdoutput.
 * @c:the character to print
 *
 * Return:on succes 1
 * on error, -1 is returned, and error no is set approprietly
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
