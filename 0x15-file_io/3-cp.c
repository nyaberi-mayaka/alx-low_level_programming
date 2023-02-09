#include "main.h"

/**
* main - copies the content of a file to another file
* @ac: argument count.
* @av: argument vector.
*
* Return: always zero.
*/

int main(int ac, char *av[])
{
	int fd, fd_2, cl_1, cl_2;
	ssize_t r, wr;
	char buff[1024];

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	fd = open(av[1], O_RDONLY);
	if (fd == -1)
		dprintf(2, "Error: Can't read from file %s\n", av[1]), exit(98);

	fd_2 = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_2 == -1)
		dprintf(2, "Error: Can't write to file %s\n", av[2]), exit(99);

	r = read(fd, buff, 1024);
	if (r == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);

	while (r > 0)
	{
		wr = write(fd_2, buff, r);
		if (wr != r)
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", av[2]), exit(99);

		r = read(fd, buff, 1024);
		if (r == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	}

	cl_1 = close(fd), cl_2 = close(fd_2);
	if (cl_2 != 0)
		dprintf(2, "Error: Can't close %d\n", fd_2), exit(100);

	if (cl_1 != 0)
		dprintf(2, "Error: Can't close %d\n", fd), exit(100);

	return (0);
}
