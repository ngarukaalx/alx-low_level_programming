#include <unistd.h>

/**
 * main - prints "and that piece of art is useful" - Dora Korpar, 2015-10-19"
 *
 * returns:Always 1.
 */

int main(void)
{
	char message[] = "and that piece of art is useful\"i - Dora Korpar, 2015-10-19\n";
	write(2, message, sizeof(message) - 1);

	return (1);
}
