#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main -  program that copies the content of a file to another file.
 * @argc:arguments passed
 * @argv:string to store arguments
 *
 * Return:0 on succes
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;

	char buffer [BUFFER_SIZE];

	ssize_t byt_rd;

	if (argc != 3)
		dprintf(fileno(stderr),"Usage:%s file_from file_to\n", argv[0]);
	exit(97);

	file_from = open(argv[1], O_RDONLY);
	if (file_from < 0)
	{
		dprintf(fileno(stderr),"Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (file_to < 0)
	{
		dprintf(fileno(stderr),"Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	while ((byt_rd = read(file_from, buffer, BUFFER_SIZE)) > 0)
	{
		if (write(file_to, buffer, byt_rd) != byt_rd)
		{
			dprintf(fileno(stderr),"Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
		if (byt_rd < 0)
		{
			dprintf(fileno(stderr),"Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		if (close(file_from) < 0)
		{
			dprintf(fileno(stderr),"Error: Can't close fd %d\n", file_from);
			exit(100);
		}
		if (close(file_to) < 0)
		{
			dprintf(fileno(stderr),"Error: Can't close fd %d\n", file_to);
			exit(100);
		}
	}
	return (0);


}
