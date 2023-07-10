#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it to
 * the POSIX standard output
 * @filename:file to read from
 * @letters:letters to read
 *
 * Return:actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;

	char buffer[BUFFER_SIZE];

	ssize_t bytes_read;

	if (filename == NULL)
	{
		return (0);
	}

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
	{
		perror("cannot open file");
		return (0);
	}
	bytes_read = read(file_descriptor, buffer, letters);
	if (bytes_read == -1)
	{
		perror("Error reading file");
		return (0);
	}
	write(STDOUT_FILENO, buffer, bytes_read);
	close(file_descriptor);

	return (bytes_read);
}
