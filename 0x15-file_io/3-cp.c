#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * close_file - close a file descriptor
 * @fd:file descriptor to close
 *
 * Return: 0 on success, exits with code 100 on failure
 */
int close_file(int fd)
{
	if (close(fd) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	return (0);
}

/**
 * main -  program that copies the content of a file to another file.
 * @argc: arguments passed
 * @argv: string to store arguments
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int fd1, fd2, readd, writed;

	char *buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd1 = open(argv[1], O_RDONLY);
	readd = read(fd1, buffer, BUFFER_SIZE);
	fd2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do{
		if (fd1 == -1 || readd == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		writed = write(fd2, buffer, readd);
		if (fd2 == -1 || writed == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
		readd = read(fd1,buffer, BUFFER_SIZE);
		fd2 = open(argv[2], O_WRONLY | O_APPEND);
	}while(readd > 0);
	close_file(fd1);
	close_file(fd2);

	return (0);

}
