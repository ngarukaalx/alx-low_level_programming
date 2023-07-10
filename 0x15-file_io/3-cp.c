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
 * read_write - read and write to files
 * @file_from: file descriptor of the file to read from
 * @file_to: file descriptor of the file to write to
 * @buffer: buffer to store data read from file
 * @buffer_size: size of buffer in bytes
 *
 * Return: 0 on success, exits with code 98 or 99 on failure
 */

int read_write(int file_from, int file_to, char *buffer, size_t buffer_size)
{
	ssize_t bytes_read, bytes_written;


	while ((bytes_read = read(file_from, buffer, buffer_size)) > 0)
	{
		bytes_written = write(file_to, buffer, bytes_read);
		if (bytes_written < 0 || bytes_written != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file\n");
			exit(99);
		}
	}
	if (bytes_read < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file\n");
		exit(98);
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
	int file_from, file_to;

	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (file_to < 0)
	{
		dprintf(STDERR_FILENO, " Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	read_write(file_from, file_to, buffer, BUFFER_SIZE);
	if (close_file(file_from) < 0)
		exit(100);
	if (close_file(file_to) < 0)
		exit(100);
	return (0);
}
