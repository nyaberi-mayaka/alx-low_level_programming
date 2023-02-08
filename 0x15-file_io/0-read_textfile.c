#include "main.h"

/**
 * read_textfile -reads a text file and prints it to the POSIX standard output
 * @filename: the name of the text file to perform operations on.
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, buff_size;
	ssize_t letters_read, letters_written;
	char *buff;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	buff_size = letters;
	buff = malloc(sizeof(char) * buff_size);
	if (buff == NULL)
		return (0);

	letters_read = read(fd, buff, buff_size);
	if (letters_read == -1)
	{
		free(buff);
		return (0);
	}

	letters_written = write(STDOUT_FILENO, buff, letters_read);
	if (letters_written == -1)
	{
		free(buff);
		return (0);
	}
	close(fd), free(buff);
	return (letters_written);
}
