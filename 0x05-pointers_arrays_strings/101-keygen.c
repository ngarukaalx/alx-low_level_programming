#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -  generates random valid passwords for the
 * program 101-crackme.
 *
 * Return:always 0.
 */
int main(void)
{
	char password[6];

	const char charset[] =  "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

	int i;

	srand(time(NULL));

	for (i = 0; i < 5; i++)
	{
		password[i] = charset[rand() % (sizeof(charset) - 1)];
	}
	password[5] = '\0';

	printf("Generated password: %s\n", password);

	return (0);
}
