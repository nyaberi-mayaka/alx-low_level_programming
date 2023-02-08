#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: the file name.
 * @text_content:  the string to append at the end of the file.
 *
 * Return: 1 on success and -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t wr;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		wr = write(fd, text_content, strlen(text_content));

		if (wr == -1)
			return (-1);
	}

	return (1);
}
