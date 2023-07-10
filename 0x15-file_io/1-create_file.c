#include "main.h"

/**
 * create_file - Create a function that creates a file
 * @filename:file to create
 * @text_content:text to write to file
 *
 * Return:1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file_descriptor;

	ssize_t bytes_written;

	if (filename == NULL)
	{
		return (-1);
	}

	file_descriptor = open(filename, O_WRONLY| O_TRUNC, S_IRUSR | S_IWUSR);
	if (file_descriptor == -1)
	{
		perror("Error opening file");
		return (-1);
	}
	if (text_content != NULL)
	{
		bytes_written = write(file_descriptor, text_content, strlen(text_content));
		if (bytes_written == -1)
		{
			perror("Error writing to file");
			close(file_descriptor);
			return (-1);
		}
	}
	close(file_descriptor);

	return (1);


}
