#include "main.h"

/**
 * create_file - creates a file.
 * @filename: the name of the file to create
 * @text_content: string to write to the file @filename.
 *
 * Return: 1 on success, -1 on failure (file can not be created,
 *file can not be written, write “fails”, etc…)
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t written;

	mode_t mode = S_IRUSR | S_IWUSR;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, mode);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		written = write(fd, text_content, strlen(text_content));
		if (written == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
