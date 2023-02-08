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
	int fd, fd_1;
	size_t len = 0;
	ssize_t read_letters, written_letters;
	char *buff;

	mode_t mode = S_IRUSR | S_IWUSR;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, mode);
	fd_1 = open(text_content, O_RDONLY);

	if (fd < 0 || fd_1 < 0)
		return (-1);
	while (text_content[len] != '\0')
		len++;

	buff = malloc(sizeof(char) * len);
	if (buff == NULL)
		return (-1);

	read_letters = read(fd_1, buff, len);
	if (read_letters == -1)
	{
		free(buff);
		return (-1);
	}

	written_letters = write(fd, buff, read_letters);
	if (written_letters == -1)
	{
		free(buff);
		return (-1);
	}
	close(fd), close(fd_1), free(buff);
	return (1);
}
