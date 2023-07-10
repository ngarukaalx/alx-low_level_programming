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
	int fd, byt_wrt = 0, len = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
		byt_wrt = write(fd, text_content, len);

		if (byt_wrt == -1 || byt_wrt != len)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
