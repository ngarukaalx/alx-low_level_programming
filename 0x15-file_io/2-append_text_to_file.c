#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename:to be created
 * @text_content:to written to filename
 *
 * Return:1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, byt_wrt;

	size_t len = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
		byt_wrt = write(fd, text_content, len);

		if (byt_wrt == -1 || (size_t)byt_wrt != len)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
